#
#
#           The Nimrod Compiler
#        (c) Copyright 2012 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## This file implements the FFI part of the evaluator for Nimrod code.

import ast, astalgo, ropes, types, options, tables, dynlib, libffi, msgs

when defined(windows):
  const libcDll = "msvcrt.dll"
else:
  const libcDll = "libc.so(.6|.5|)"

type
  TDllCache = tables.TTable[string, TLibHandle]
var
  gDllCache = initTable[string, TLibHandle]()
  gExeHandle = LoadLib()

proc getDll(cache: var TDllCache; dll: string; info: TLineInfo): pointer =
  result = cache[dll]
  if result.isNil:
    var libs: seq[string] = @[]
    libCandidates(dll, libs)
    for c in libs:
      result = LoadLib(c)
      if not result.isNil: break
    if result.isNil:
      GlobalError(info, "cannot load: " & dll)
    cache[dll] = result

const
  nkPtrLit = nkIntLit # hopefully we can get rid of this hack soon

proc importcSymbol*(sym: PSym): PNode =
  let name = ropeToStr(sym.loc.r)
  
  # the AST does not support untyped pointers directly, so we use an nkIntLit
  # that contains the address instead:
  result = newNodeIT(nkPtrLit, sym.info, sym.typ)
  case name
  of "stdin":  result.intVal = cast[TAddress](system.stdin)
  of "stdout": result.intVal = cast[TAddress](system.stdout)
  of "stderr": result.intVal = cast[TAddress](system.stderr)
  else:
    let lib = sym.annex
    if lib != nil and lib.path.kind notin {nkStrLit..nkTripleStrLit}:
      GlobalError(sym.info, "dynlib needs to be a string lit for the REPL")
    var theAddr: pointer
    if lib.isNil and not gExehandle.isNil:
      # first try this exe itself:
      theAddr = gExehandle.symAddr(name)
      # then try libc:
      if theAddr.isNil:
        let dllhandle = gDllCache.getDll(libcDll, sym.info)
        theAddr = dllhandle.checkedSymAddr(name)
    else:
      let dllhandle = gDllCache.getDll(lib.path.strVal, sym.info)
      theAddr = dllhandle.checkedSymAddr(name)
    result.intVal = cast[TAddress](theAddr)

proc mapType(t: ast.PType): ptr libffi.TType =
  if t == nil: return addr libffi.type_void
  
  case t.kind
  of tyBool, tyEnum, tyChar, tyInt..tyInt64, tyUInt..tyUInt64, tySet:
    case t.getSize
    of 1: result = addr libffi.type_uint8
    of 2: result = addr libffi.type_sint16
    of 4: result = addr libffi.type_sint32
    of 8: result = addr libffi.type_sint64
    else: result = nil
  of tyFloat, tyFloat64: result = addr libffi.type_double
  of tyFloat32: result = addr libffi.type_float
  of tyVar, tyPointer, tyPtr, tyRef, tyCString, tySequence, tyString, tyExpr,
     tyStmt, tyTypeDesc, tyProc, tyArray, tyArrayConstr, tyNil:
    result = addr libffi.type_pointer
  of tyDistinct:
    result = mapType(t.sons[0])
  else:
    result = nil
  # too risky:
  #of tyFloat128: result = addr libffi.type_longdouble

proc mapCallConv(cc: TCallingConvention, info: TLineInfo): TABI =
  case cc
  of ccDefault: result = DEFAULT_ABI
  of ccStdCall: result = when defined(windows): STDCALL else: DEFAULT_ABI
  of ccCDecl: result = DEFAULT_ABI
  else:
    GlobalError(info, "cannot map calling convention to FFI")

template rd(T, p: expr): expr {.immediate.} = (cast[ptr T](p))[]
template wr(T, p, v: expr) {.immediate.} = (cast[ptr T](p))[] = v
template `+!`(x, y: expr): expr {.immediate.} =
  cast[pointer](cast[TAddress](x) + y)

proc packSize(v: PNode, typ: PType): int =
  ## computes the size of the blob
  case typ.kind
  of tyPtr, tyRef, tyVar:
    if v.kind in {nkNilLit, nkPtrLit}:
      result = sizeof(pointer)
    else:
      result = sizeof(pointer) + packSize(v.sons[0], typ.sons[0])
  of tyDistinct, tyGenericInst:
    result = packSize(v, typ.sons[0])
  of tyArray, tyArrayConstr:
    # consider: ptr array[0..1000_000, int] which is common for interfacing;
    # we use the real length here instead
    if v.kind in {nkNilLit, nkPtrLit}:
      result = sizeof(pointer)
    elif v.len != 0:
      result = v.len * packSize(v.sons[0], typ.sons[1])
  else:
    result = typ.getSize.int

proc pack(v: PNode, typ: PType, res: pointer)

proc getField(n: PNode; position: int): PSym =
  case n.kind
  of nkRecList:
    for i in countup(0, sonsLen(n) - 1):
      result = getField(n.sons[i], position)
      if result != nil: return 
  of nkRecCase:
    result = getField(n.sons[0], position)
    if result != nil: return
    for i in countup(1, sonsLen(n) - 1):
      case n.sons[i].kind
      of nkOfBranch, nkElse:
        result = getField(lastSon(n.sons[i]), position)
        if result != nil: return
      else: internalError(n.info, "getField(record case branch)")
  of nkSym:
    if n.sym.position == position: result = n.sym
  else: nil

proc packObject(x: PNode, typ: PType, res: pointer) =
  InternalAssert x.kind == nkPar
  # compute the field's offsets:
  discard typ.getSize
  for i in countup(0, sonsLen(x) - 1):
    var it = x.sons[i]
    if it.kind == nkExprColonExpr:
      internalAssert it.sons[0].kind == nkSym
      let field = it.sons[0].sym
      pack(it.sons[1], field.typ, res +! field.offset)
    elif typ.n != nil:
      let field = getField(typ.n, i)
      pack(it, field.typ, res +! field.offset)
    else:
      GlobalError(x.info, "cannot pack unnamed tuple")
      
proc pack(v: PNode, typ: PType, res: pointer) =
  template awr(T, v: expr) {.immediate, dirty.} =
    wr(T, res, v)

  case typ.kind
  of tyBool: awr(bool, v.intVal != 0)
  of tyChar: awr(char, v.intVal.chr)
  of tyInt:  awr(int, v.intVal.int)
  of tyInt8: awr(int8, v.intVal.int8)
  of tyInt16: awr(int16, v.intVal.int16)
  of tyInt32: awr(int32, v.intVal.int32)
  of tyInt64: awr(int64, v.intVal.int64)
  of tyUInt: awr(uint, v.intVal.uint)
  of tyUInt8: awr(uint8, v.intVal.uint8)
  of tyUInt16: awr(uint16, v.intVal.uint16)
  of tyUInt32: awr(uint32, v.intVal.uint32)
  of tyUInt64: awr(uint64, v.intVal.uint64)
  of tyEnum, tySet:
    case v.typ.getSize
    of 1: awr(uint8, v.intVal.uint8)
    of 2: awr(uint16, v.intVal.uint16)
    of 4: awr(int32, v.intVal.int32)
    of 8: awr(int64, v.intVal.int64)
    else:
      GlobalError(v.info, "cannot map value to FFI (tyEnum, tySet)")
  of tyFloat: awr(float, v.floatVal)
  of tyFloat32: awr(float32, v.floatVal)
  of tyFloat64: awr(float64, v.floatVal)
  
  of tyPointer, tyProc:
    if v.kind == nkNilLit:
      # nothing to do since the memory is 0 initialized anyway
      nil
    elif v.kind == nkPtrLit:
      awr(pointer, cast[pointer](v.intVal))
    else:
      GlobalError(v.info, "cannot map pointer/proc value to FFI")
  of tyPtr, tyRef, tyVar:
    if v.kind == nkNilLit:
      # nothing to do since the memory is 0 initialized anyway
      nil
    elif v.kind == nkPtrLit:
      awr(pointer, cast[pointer](v.intVal))
    else:
      pack(v.sons[0], typ.sons[0], res +! sizeof(pointer))
      awr(pointer, res +! sizeof(pointer))
  of tyCString, tyString:
    if v.kind == nkNilLit:
      nil
    elif v.kind in {nkStrLit..nkTripleStrLit}:
      awr(cstring, cstring(v.strVal))
    else:
      GlobalError(v.info, "cannot map string value to FFI")
  of tyArray, tyArrayConstr:
    let baseSize = typ.sons[1].getSize
    for i in 0 .. <v.len:
      pack(v.sons[i], typ.sons[1], res +! i * baseSize)
  of tyObject, tyTuple:
    packObject(v, typ, res)
  of tyNil:
    nil
  of tyDistinct, tyGenericInst:
    pack(v, typ.sons[0], res)
  else:
    GlobalError(v.info, "cannot map value to FFI " & typeToString(v.typ))

proc unpack(x: pointer, typ: PType, n: PNode): PNode

proc unpackObjectAdd(x: pointer, n, result: PNode) =
  case n.kind
  of nkRecList:
    for i in countup(0, sonsLen(n) - 1):
      unpackObjectAdd(x, n.sons[i], result)
  of nkRecCase:
    GlobalError(result.info, "case objects cannot be unpacked")
  of nkSym:
    var pair = newNodeI(nkExprColonExpr, result.info, 2)
    pair.sons[0] = n
    pair.sons[1] = unpack(x +! n.sym.offset, n.sym.typ, nil)
  else: nil

proc unpackObject(x: pointer, typ: PType, n: PNode): PNode =
  # compute the field's offsets:
  discard typ.getSize
  
  # iterate over any actual field of 'n' ... if n is nil we need to create
  # the nkPar node:
  if n.isNil:
    result = newNode(nkPar)
    result.typ = typ
    if typ.n.isNil:
      InternalError("cannot unpack unnamed tuple")
    unpackObjectAdd(x, typ.n, result)
  else:
    result = n
    if result.kind != nkPar:
      GlobalError(n.info, "cannot map value from FFI")
    if typ.n.isNil:
      GlobalError(n.info, "cannot unpack unnamed tuple")
    for i in countup(0, sonsLen(n) - 1):
      var it = n.sons[i]
      if it.kind == nkExprColonExpr:
        internalAssert it.sons[0].kind == nkSym
        let field = it.sons[0].sym
        it.sons[1] = unpack(x +! field.offset, field.typ, it.sons[1])
      else:
        let field = getField(typ.n, i)
        n.sons[i] = unpack(x +! field.offset, field.typ, it)

proc unpackArray(x: pointer, typ: PType, n: PNode): PNode =
  if n.isNil:
    result = newNode(nkBracket)
    result.typ = typ
    newSeq(result.sons, lengthOrd(typ).int)
  else:
    result = n
    if result.kind != nkBracket:
      GlobalError(n.info, "cannot map value from FFI")
  let baseSize = typ.sons[1].getSize
  for i in 0 .. < result.len:
    result.sons[i] = unpack(x +! i * baseSize, typ.sons[1], result.sons[i])

proc unpack(x: pointer, typ: PType, n: PNode): PNode =
  template aw(k, v, field: expr) {.immediate, dirty.} =
    if n.isNil:
      result = newNode(k)
      result.typ = typ
    else:
      # check we have the right field:
      result = n
      if result.kind != k:
        GlobalError(n.info, "cannot map value from FFI")
    result.field = v

  template setNil() =
    if n.isNil:
      result = newNode(nkNilLit)
      result.typ = typ
    else:
      reset n[]
      result = n
      result.kind = nkNilLit
      result.typ = typ

  template awi(kind, v: expr) {.immediate, dirty.} = aw(kind, v, intVal)
  template awf(kind, v: expr) {.immediate, dirty.} = aw(kind, v, floatVal)
  template aws(kind, v: expr) {.immediate, dirty.} = aw(kind, v, strVal)
  
  case typ.kind
  of tyBool: awi(nkIntLit, rd(bool, x).ord)
  of tyChar: awi(nkIntLit, rd(char, x).ord)
  of tyInt:  awi(nkIntLit, rd(int, x))
  of tyInt8: awi(nkIntLit, rd(int8, x))
  of tyInt16: awi(nkIntLit, rd(int16, x))
  of tyInt32: awi(nkIntLit, rd(int32, x))
  of tyInt64: awi(nkIntLit, rd(int64, x))
  of tyUInt: awi(nkIntLit, rd(uint, x).biggestInt)
  of tyUInt8: awi(nkIntLit, rd(uint8, x).biggestInt)
  of tyUInt16: awi(nkIntLit, rd(uint16, x).biggestInt)
  of tyUInt32: awi(nkIntLit, rd(uint32, x).biggestInt)
  of tyUInt64: awi(nkIntLit, rd(uint64, x).biggestInt)
  of tyEnum:
    case typ.getSize
    of 1: awi(nkIntLit, rd(uint8, x).biggestInt)
    of 2: awi(nkIntLit, rd(uint16, x).biggestInt)
    of 4: awi(nkIntLit, rd(int32, x).biggestInt)
    of 8: awi(nkIntLit, rd(int64, x).biggestInt)
    else:
      GlobalError(n.info, "cannot map value from FFI (tyEnum, tySet)")
  of tyFloat: awf(nkFloatLit, rd(float, x))
  of tyFloat32: awf(nkFloatLit, rd(float32, x))
  of tyFloat64: awf(nkFloatLit, rd(float64, x))
  of tyPointer, tyProc:
    let p = rd(pointer, x)
    if p.isNil:
      setNil()
    else:
      awi(nkPtrLit, cast[TAddress](p))
  of tyPtr, tyRef, tyVar:
    let p = rd(pointer, x)
    if p.isNil:
      setNil()
    elif n != nil and n.kind == nkPtrLit:
      awi(nkPtrLit, cast[TAddress](p))
    elif n != nil and n.len == 1:
      n.sons[0] = unpack(rd(pointer, x), typ.sons[0], n.sons[0])
    else:
      GlobalError(n.info, "cannot map value from FFI " & typeToString(typ))
  of tyObject, tyTuple:
    result = unpackObject(x, typ, n)
  of tyArray, tyArrayConstr:
    result = unpackArray(x, typ, n)
  of tyCString, tyString:
    let p = rd(cstring, x)
    if p.isNil:
      setNil()
    else:
      aws(nkStrLit, $p)
  of tyNil:
    setNil()
  of tyDistinct, tyGenericInst:
    result = unpack(x, typ.sons[0], n)
  else:
    # XXX what to do with 'array' here?
    GlobalError(n.info, "cannot map value from FFI " & typeToString(typ))

proc callForeignFunction*(call: PNode): PNode =
  InternalAssert call.sons[0].kind == nkPtrLit
  
  var cif: TCif
  var sig: TParamList
  # use the arguments' types for varargs support:
  for i in 1..call.len-1:
    sig[i-1] = mapType(call.sons[i].typ)
    if sig[i-1].isNil:
      GlobalError(call.info, "cannot map FFI type")
  
  let typ = call.sons[0].typ
  if prep_cif(cif, mapCallConv(typ.callConv, call.info), cuint(call.len-1),
              mapType(typ.sons[0]), sig) != OK:
    GlobalError(call.info, "error in FFI call")
  
  var args: TArgList
  let fn = cast[pointer](call.sons[0].intVal)
  for i in 1 .. call.len-1:
    var t = call.sons[i].typ
    args[i-1] = alloc0(packSize(call.sons[i], t))
    pack(call.sons[i], t, args[i-1])
  let retVal = if isEmptyType(typ.sons[0]): pointer(nil)
               else: alloc(typ.sons[0].getSize.int)

  libffi.call(cif, fn, retVal, args)
  
  if retVal.isNil: 
    result = emptyNode
  else:
    result = unpack(retVal, typ.sons[0], nil)
    result.info = call.info

  if retVal != nil: dealloc retVal
  for i in countdown(call.len-2, 0):
    call.sons[i+1] = unpack(args[i], typ.sons[i+1], call[i+1])
    dealloc args[i]

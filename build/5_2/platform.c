/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY51036 TY51036;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51448 TY51448;
typedef struct TY10802 TY10802;
typedef struct TNimType TNimType;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY51036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY51036 TY51054[21];
typedef NimStringDesc* TY51457[2];
struct TY51448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY51448 TY51461[12];
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11188 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11190 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
NI Cyclerootslock;
NI Zctlock;
TY11188 Stat;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NU8, Nametocpu_51567)(NimStringDesc* Name_51569);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24638, NimStringDesc* B_24639);
N_NIMCALL(NU8, Nametoos_51564)(NimStringDesc* Name_51566);
N_NIMCALL(void, Settarget_51574)(NU8 O_51576, NU8 C_51577);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
STRING_LITERAL(TMP51384, "DOS", 3);
STRING_LITERAL(TMP51385, "..", 2);
STRING_LITERAL(TMP51386, "$1.dll", 6);
STRING_LITERAL(TMP51387, "/", 1);
STRING_LITERAL(TMP51388, ".obj", 4);
STRING_LITERAL(TMP51389, "\015\012", 2);
STRING_LITERAL(TMP51390, ";", 1);
STRING_LITERAL(TMP51391, "\\", 1);
STRING_LITERAL(TMP51392, ".bat", 4);
STRING_LITERAL(TMP51393, ".", 1);
STRING_LITERAL(TMP51394, ".exe", 4);
STRING_LITERAL(TMP51395, "Windows", 7);
STRING_LITERAL(TMP51396, "OS2", 3);
STRING_LITERAL(TMP51397, "Linux", 5);
STRING_LITERAL(TMP51398, "lib$1.so", 8);
STRING_LITERAL(TMP51399, ".o", 2);
STRING_LITERAL(TMP51400, "\012", 1);
STRING_LITERAL(TMP51401, ":", 1);
STRING_LITERAL(TMP51402, ".sh", 3);
STRING_LITERAL(TMP51403, "", 0);
STRING_LITERAL(TMP51404, "MorphOS", 7);
STRING_LITERAL(TMP51405, "SkyOS", 5);
STRING_LITERAL(TMP51406, "Solaris", 7);
STRING_LITERAL(TMP51407, "Irix", 4);
STRING_LITERAL(TMP51408, "NetBSD", 6);
STRING_LITERAL(TMP51409, "FreeBSD", 7);
STRING_LITERAL(TMP51410, "OpenBSD", 7);
STRING_LITERAL(TMP51411, "AIX", 3);
STRING_LITERAL(TMP51412, "PalmOS", 6);
STRING_LITERAL(TMP51413, "QNX", 3);
STRING_LITERAL(TMP51414, "Amiga", 5);
STRING_LITERAL(TMP51415, "$1.library", 10);
STRING_LITERAL(TMP51416, "Atari", 5);
STRING_LITERAL(TMP51417, ".tpp", 4);
STRING_LITERAL(TMP51418, "Netware", 7);
STRING_LITERAL(TMP51419, "$1.nlm", 6);
STRING_LITERAL(TMP51420, ".nlm", 4);
STRING_LITERAL(TMP51421, "MacOS", 5);
STRING_LITERAL(TMP51422, "::", 2);
STRING_LITERAL(TMP51423, "$1Lib", 5);
STRING_LITERAL(TMP51424, "\015", 1);
STRING_LITERAL(TMP51425, ",", 1);
STRING_LITERAL(TMP51426, "MacOSX", 6);
STRING_LITERAL(TMP51427, "lib$1.dylib", 11);
STRING_LITERAL(TMP51428, "EcmaScript", 10);
STRING_LITERAL(TMP51429, "NimrodVM", 8);
NIM_CONST TY51054 Os_51053 = {{((NimStringDesc*) &TMP51384),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51386),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51388),
((NimStringDesc*) &TMP51389),
((NimStringDesc*) &TMP51390),
((NimStringDesc*) &TMP51391),
((NimStringDesc*) &TMP51392),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51394),
((NimStringDesc*) &TMP51393),
2}
,
{((NimStringDesc*) &TMP51395),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51386),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51388),
((NimStringDesc*) &TMP51389),
((NimStringDesc*) &TMP51390),
((NimStringDesc*) &TMP51391),
((NimStringDesc*) &TMP51392),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51394),
((NimStringDesc*) &TMP51393),
2}
,
{((NimStringDesc*) &TMP51396),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51386),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51388),
((NimStringDesc*) &TMP51389),
((NimStringDesc*) &TMP51390),
((NimStringDesc*) &TMP51391),
((NimStringDesc*) &TMP51392),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51394),
((NimStringDesc*) &TMP51393),
2}
,
{((NimStringDesc*) &TMP51397),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51404),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51405),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51406),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51407),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51408),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51409),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51410),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51411),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51412),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
1}
,
{((NimStringDesc*) &TMP51413),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51414),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51415),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
1}
,
{((NimStringDesc*) &TMP51416),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51386),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51417),
((NimStringDesc*) &TMP51393),
1}
,
{((NimStringDesc*) &TMP51418),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51419),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51389),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51420),
((NimStringDesc*) &TMP51393),
2}
,
{((NimStringDesc*) &TMP51421),
((NimStringDesc*) &TMP51422),
((NimStringDesc*) &TMP51423),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51424),
((NimStringDesc*) &TMP51425),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
2}
,
{((NimStringDesc*) &TMP51426),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51427),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
5}
,
{((NimStringDesc*) &TMP51428),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
0}
,
{((NimStringDesc*) &TMP51429),
((NimStringDesc*) &TMP51385),
((NimStringDesc*) &TMP51398),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51399),
((NimStringDesc*) &TMP51400),
((NimStringDesc*) &TMP51401),
((NimStringDesc*) &TMP51387),
((NimStringDesc*) &TMP51402),
((NimStringDesc*) &TMP51393),
((NimStringDesc*) &TMP51403),
((NimStringDesc*) &TMP51393),
0}
}
;
STRING_LITERAL(TMP51546, "littleEndian", 12);
STRING_LITERAL(TMP51547, "bigEndian", 9);
NIM_CONST TY51457 Endiantostr_51456 = {((NimStringDesc*) &TMP51546),
((NimStringDesc*) &TMP51547)}
;
STRING_LITERAL(TMP51548, "i386", 4);
STRING_LITERAL(TMP51549, "m68k", 4);
STRING_LITERAL(TMP51550, "alpha", 5);
STRING_LITERAL(TMP51551, "powerpc", 7);
STRING_LITERAL(TMP51552, "sparc", 5);
STRING_LITERAL(TMP51553, "vm", 2);
STRING_LITERAL(TMP51554, "ia64", 4);
STRING_LITERAL(TMP51555, "amd64", 5);
STRING_LITERAL(TMP51556, "mips", 4);
STRING_LITERAL(TMP51557, "arm", 3);
STRING_LITERAL(TMP51558, "ecmascript", 10);
STRING_LITERAL(TMP51559, "nimrodvm", 8);
NIM_CONST TY51461 Cpu_51460 = {{((NimStringDesc*) &TMP51548),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP51549),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP51550),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP51551),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP51552),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP51553),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP51554),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP51555),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP51556),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP51557),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP51558),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP51559),
32,
((NU8) 1),
64,
32}
}
;
STRING_LITERAL(TMP51696, "netbsd", 6);
NU8 Targetcpu_51560;
NU8 Hostcpu_51561;
NU8 Targetos_51562;
NU8 Hostos_51563;
NI Intsize_51570;
NI Floatsize_51571;
NI Ptrsize_51572;
NimStringDesc* Tnl_51573;
extern TY11190 Gch_11210;
N_NIMCALL(NU8, Nametocpu_51567)(NimStringDesc* Name_51569) {
NU8 Result_51649;
NU8 I_51688;
NU8 Res_51693;
NI LOC3;
Result_51649 = 0;
I_51688 = 0;
Res_51693 = 0;
Res_51693 = ((NU8) 1);
while (1) {
if (!(Res_51693 <= ((NU8) 12))) goto LA1;
I_51688 = Res_51693;
LOC3 = nsuCmpIgnoreStyle(Name_51569, Cpu_51460[(I_51688)-1].Name);
if (!(LOC3 == 0)) goto LA4;
Result_51649 = I_51688;
goto BeforeRet;
LA4: ;
Res_51693 += 1;
} LA1: ;
Result_51649 = ((NU8) 0);
BeforeRet: ;
return Result_51649;
}
N_NIMCALL(NU8, Nametoos_51564)(NimStringDesc* Name_51566) {
NU8 Result_51599;
NU8 I_51638;
NU8 Res_51643;
NI LOC3;
Result_51599 = 0;
I_51638 = 0;
Res_51643 = 0;
Res_51643 = ((NU8) 1);
while (1) {
if (!(Res_51643 <= ((NU8) 21))) goto LA1;
I_51638 = Res_51643;
LOC3 = nsuCmpIgnoreStyle(Name_51566, Os_51053[(I_51638)-1].Name);
if (!(LOC3 == 0)) goto LA4;
Result_51599 = I_51638;
goto BeforeRet;
LA4: ;
Res_51643 += 1;
} LA1: ;
Result_51599 = ((NU8) 0);
BeforeRet: ;
return Result_51599;
}
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI64)((NU64)(((NI) (Usr_11614))) - (NU64)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7607;
Result_7607 = 0;
(*Memloc_3004) += X_3005;
Result_7607 = (*Memloc_3004);
return Result_7607;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7806;
Result_7806 = 0;
(*Memloc_3009) -= X_3010;
Result_7806 = (*Memloc_3009);
return Result_7806;
}
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11210.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3001(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3006(&(*C_13222).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(void, Settarget_51574)(NU8 O_51576, NU8 C_51577) {
Targetcpu_51560 = C_51577;
Targetos_51562 = O_51576;
Intsize_51570 = (NI64)(Cpu_51460[(C_51577)-1].Intsize / 8);
Floatsize_51571 = (NI64)(Cpu_51460[(C_51577)-1].Floatsize / 8);
Ptrsize_51572 = (NI64)(Cpu_51460[(C_51577)-1].Bit / 8);
asgnRefNoCycle((void**) &Tnl_51573, copyString(Os_51053[(O_51576)-1].Newline));
}
N_NOINLINE(void, platformInit)(void) {
Hostcpu_51561 = Nametocpu_51567(((NimStringDesc*) &TMP51555));
Hostos_51563 = Nametoos_51564(((NimStringDesc*) &TMP51696));
Settarget_51574(Hostos_51563, Hostcpu_51561);
}


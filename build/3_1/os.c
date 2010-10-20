/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <errno.h>
#include <sys/param.h>
#include <mach-o/dyld.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
typedef struct TY39422 TY39422;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY444 TY444;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY38578 TY38578;
typedef struct TY38715 TY38715;
typedef struct TY422 TY422;
typedef struct TY418 TY418;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
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
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TY416 {
  E_Base Sup;
};
struct TY444 {
  TY416 Sup;
};
struct TY38578 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TY38715 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
struct TY418 {
  TY416 Sup;
};
struct TY422 {
  TY418 Sup;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY39422 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18704);
N_NIMCALL(void*, newObj)(TNimType* Typ_13707, NI Size_13708);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(void, raiseException)(E_Base* E_5404, NCSTRING Ename_5405);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38714, TY38715* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationFilename)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18687);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810);
N_NIMCALL(NI, Searchextpos_38678)(NimStringDesc* S_38680);
N_NIMCALL(NimStringDesc*, Normext_38668)(NimStringDesc* Ext_38670);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18825, NI Newlen_18826);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_36604);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404);
N_NIMCALL(void, Rawcreatedir_40423)(NimStringDesc* Dir_40425);
N_NIMCALL(NI, Findenvvar_39602)(NimStringDesc* Key_39604);
N_NIMCALL(void, Getenvvarsc_39442)(void);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18835, NI Elemsize_18836);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25769, NimStringDesc* Prefix_25770);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_26227, NIM_CHAR Sub_26228, NI Start_26229);
N_NIMCALL(NimStringDesc*, Getenv_39625)(NimStringDesc* Key_39627);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_39065, NimStringDesc* Pathb_39066);
N_NIMCALL(NI, Cmp_1321)(NimStringDesc* X_1323, NimStringDesc* Y_1324);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24595, NimStringDesc* B_24596);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_38577, TY38578* Result);
N_NIMCALL(NI64, ntDiffTime)(NI A_28635, NI B_28636);
N_NIMCALL(NI, nosgetLastModificationTime)(NimStringDesc* File_37403);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
STRING_LITERAL(TMP196644, "invalid index", 13);
STRING_LITERAL(TMP196648, "", 0);
STRING_LITERAL(TMP196651, "unknown OS error", 16);
STRING_LITERAL(TMP196724, "HOME", 4);
STRING_LITERAL(TMP196725, "/.config/", 9);
NIM_BOOL Envcomputed_39421;
TY39422* Environment_39439;
extern TNimType* NTI39422; /* seq[string] */
extern TY11190 Gch_11210;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType* NTI41611; /* ref EInvalidIndex */
extern TNimType* NTI444; /* EInvalidIndex */
extern TNimType* NTI36803; /* ref EOS */
extern TNimType* NTI422; /* EOS */
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(NI, Paramcount_41628)(void) {
NI Result_41630;
Result_41630 = 0;
Result_41630 = (NI32)(((NI) (cmdCount)) - 1);
goto BeforeRet;
BeforeRet: ;
return Result_41630;
}
N_NIMCALL(NimStringDesc*, Paramstr_41603)(NI I_41605) {
NimStringDesc* Result_41606;
NIM_BOOL LOC2;
TY444* E_41612;
Result_41606 = 0;
LOC2 = (I_41605 < ((NI) (cmdCount)));
if (!(LOC2)) goto LA3;
LOC2 = (0 <= I_41605);
LA3: ;
if (!LOC2) goto LA4;
Result_41606 = cstrToNimstr(cmdLine[(I_41605)-0]);
goto BeforeRet;
LA4: ;
E_41612 = 0;
E_41612 = (TY444*) newObj(NTI41611, sizeof(TY444));
(*E_41612).Sup.Sup.Sup.m_type = NTI444;
asgnRefNoCycle((void**) &(*E_41612).Sup.Sup.message, copyString(((NimStringDesc*) &TMP196644)));
raiseException((E_Base*)E_41612, "EInvalidIndex");
BeforeRet: ;
return Result_41606;
}
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_36856) {
NimStringDesc* Result_36857;
Result_36857 = 0;
Result_36857 = copyString(Path_36856);
return Result_36857;
}
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_38577, TY38578* Result) {
NI Seppos_38582;
NI I_38592;
NI HEX3Atmp_38608;
NI Res_38610;
memset((void*)Result, 0, sizeof((*Result)));
Seppos_38582 = 0;
Seppos_38582 = -1;
I_38592 = 0;
HEX3Atmp_38608 = 0;
HEX3Atmp_38608 = (NI32)(Path_38577->Sup.len - 1);
Res_38610 = 0;
Res_38610 = HEX3Atmp_38608;
while (1) {
if (!(0 <= Res_38610)) goto LA1;
I_38592 = Res_38610;
if (!(((NU8)(Path_38577->data[I_38592])) == ((NU8)(47)) || ((NU8)(Path_38577->data[I_38592])) == ((NU8)(47)))) goto LA3;
Seppos_38582 = I_38592;
goto LA1;
LA3: ;
Res_38610 -= 1;
} LA1: ;
if (!(0 <= Seppos_38582)) goto LA6;
unsureAsgnRef((void**) &(*Result).Head, copyStrLast(Path_38577, 0, (NI32)(Seppos_38582 - 1)));
unsureAsgnRef((void**) &(*Result).Tail, copyStr(Path_38577, (NI32)(Seppos_38582 + 1)));
goto LA5;
LA6: ;
unsureAsgnRef((void**) &(*Result).Head, copyString(((NimStringDesc*) &TMP196648)));
unsureAsgnRef((void**) &(*Result).Tail, copyString(Path_38577));
LA5: ;
}
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38714, TY38715* Result) {
NIM_BOOL LOC2;
NI Seppos_38739;
NI Dotpos_38742;
NI I_38752;
NI HEX3Atmp_38774;
NI Res_38776;
NIM_BOOL LOC11;
memset((void*)Result, 0, sizeof((*Result)));
LOC2 = (Path_38714->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_38714->data[(NI32)(Path_38714->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Path_38714->data[(NI32)(Path_38714->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
unsureAsgnRef((void**) &(*Result).Dir, copyString(Path_38714));
unsureAsgnRef((void**) &(*Result).Name, copyString(((NimStringDesc*) &TMP196648)));
unsureAsgnRef((void**) &(*Result).Ext, copyString(((NimStringDesc*) &TMP196648)));
goto LA1;
LA4: ;
Seppos_38739 = 0;
Seppos_38739 = -1;
Dotpos_38742 = 0;
Dotpos_38742 = Path_38714->Sup.len;
I_38752 = 0;
HEX3Atmp_38774 = 0;
HEX3Atmp_38774 = (NI32)(Path_38714->Sup.len - 1);
Res_38776 = 0;
Res_38776 = HEX3Atmp_38774;
while (1) {
if (!(0 <= Res_38776)) goto LA6;
I_38752 = Res_38776;
if (!((NU8)(Path_38714->data[I_38752]) == (NU8)(46))) goto LA8;
LOC11 = (Dotpos_38742 == Path_38714->Sup.len);
if (!(LOC11)) goto LA12;
LOC11 = (0 < I_38752);
LA12: ;
if (!LOC11) goto LA13;
Dotpos_38742 = I_38752;
LA13: ;
goto LA7;
LA8: ;
if (!(((NU8)(Path_38714->data[I_38752])) == ((NU8)(47)) || ((NU8)(Path_38714->data[I_38752])) == ((NU8)(47)))) goto LA15;
Seppos_38739 = I_38752;
goto LA6;
goto LA7;
LA15: ;
LA7: ;
Res_38776 -= 1;
} LA6: ;
unsureAsgnRef((void**) &(*Result).Dir, copyStrLast(Path_38714, 0, (NI32)(Seppos_38739 - 1)));
unsureAsgnRef((void**) &(*Result).Name, copyStrLast(Path_38714, (NI32)(Seppos_38739 + 1), (NI32)(Dotpos_38742 - 1)));
unsureAsgnRef((void**) &(*Result).Ext, copyStr(Path_38714, Dotpos_38742));
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetApplicationFilename)(void) {
NimStringDesc* Result_42203;
int Size_42204;
NIM_BOOL LOC2;
Result_42203 = 0;
Size_42204 = 0;
_NSGetExecutablePath(NIM_NIL, &Size_42204);
Result_42203 = mnewString(((NI) (Size_42204)));
LOC2 = _NSGetExecutablePath(Result_42203->data, &Size_42204);
if (!LOC2) goto LA3;
Result_42203 = copyString(((NimStringDesc*) &TMP196648));
LA3: ;
return Result_42203;
}
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void) {
NimStringDesc* Result_42403;
NimStringDesc* LOC1;
TY38715 LOC2;
Result_42403 = 0;
LOC1 = 0;
LOC1 = nosgetApplicationFilename();
memset((void*)&LOC2, 0, sizeof(LOC2));
nossplitFile(LOC1, &LOC2);
Result_42403 = copyString(LOC2.Dir);
return Result_42403;
}
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_37003) {
NIM_BOOL Result_37004;
struct stat Res_37005;
NIM_BOOL LOC1;
int LOC2;
Result_37004 = 0;
memset((void*)&Res_37005, 0, sizeof(Res_37005));
LOC2 = stat(Filename_37003->data, &Res_37005);
LOC1 = (((NI32) 0) <= LOC2);
if (!(LOC1)) goto LA3;
LOC1 = S_ISREG(Res_37005.st_mode);
LA3: ;
Result_37004 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_37004;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793) {
memcpy(((NCSTRING) (&(*Dest_18792).data[((*Dest_18792).Sup.len)-0])), ((NCSTRING) ((*Src_18793).data)), ((int) ((NI32)((NI32)((*Src_18793).Sup.len + 1) * 1))));
(*Dest_18792).Sup.len += (*Src_18793).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810) {
(*Dest_18809).data[((*Dest_18809).Sup.len)-0] = C_18810;
(*Dest_18809).data[((NI32)((*Dest_18809).Sup.len + 1))-0] = 0;
(*Dest_18809).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404) {
NimStringDesc* Result_38405;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
Result_38405 = 0;
if (!(Head_38403->Sup.len == 0)) goto LA2;
Result_38405 = copyString(Tail_38404);
goto LA1;
LA2: ;
if (!(((NU8)(Head_38403->data[(NI32)(Head_38403->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Head_38403->data[(NI32)(Head_38403->Sup.len - 1)])) == ((NU8)(47)))) goto LA4;
if (!(((NU8)(Tail_38404->data[0])) == ((NU8)(47)) || ((NU8)(Tail_38404->data[0])) == ((NU8)(47)))) goto LA7;
LOC9 = 0;
LOC10 = 0;
LOC10 = copyStr(Tail_38404, 1);
LOC9 = rawNewString(Head_38403->Sup.len + LOC10->Sup.len + 0);
appendString(LOC9, Head_38403);
appendString(LOC9, LOC10);
Result_38405 = LOC9;
goto LA6;
LA7: ;
LOC11 = 0;
LOC11 = rawNewString(Head_38403->Sup.len + Tail_38404->Sup.len + 0);
appendString(LOC11, Head_38403);
appendString(LOC11, Tail_38404);
Result_38405 = LOC11;
LA6: ;
goto LA1;
LA4: ;
if (!(((NU8)(Tail_38404->data[0])) == ((NU8)(47)) || ((NU8)(Tail_38404->data[0])) == ((NU8)(47)))) goto LA13;
LOC15 = 0;
LOC15 = rawNewString(Head_38403->Sup.len + Tail_38404->Sup.len + 0);
appendString(LOC15, Head_38403);
appendString(LOC15, Tail_38404);
Result_38405 = LOC15;
goto LA12;
LA13: ;
LOC16 = 0;
LOC16 = rawNewString(Head_38403->Sup.len + Tail_38404->Sup.len + 1);
appendString(LOC16, Head_38403);
appendChar(LOC16, 47);
appendString(LOC16, Tail_38404);
Result_38405 = LOC16;
LA12: ;
LA1: ;
return Result_38405;
}
N_NIMCALL(NI, Searchextpos_38678)(NimStringDesc* S_38680) {
NI Result_38681;
NI I_38691;
NI HEX3Atmp_38707;
NI Res_38709;
Result_38681 = 0;
Result_38681 = -1;
I_38691 = 0;
HEX3Atmp_38707 = 0;
HEX3Atmp_38707 = (NI32)(S_38680->Sup.len - 1);
Res_38709 = 0;
Res_38709 = HEX3Atmp_38707;
while (1) {
if (!(1 <= Res_38709)) goto LA1;
I_38691 = Res_38709;
if (!((NU8)(S_38680->data[I_38691]) == (NU8)(46))) goto LA3;
Result_38681 = I_38691;
goto LA1;
goto LA2;
LA3: ;
if (!(((NU8)(S_38680->data[I_38691])) == ((NU8)(47)) || ((NU8)(S_38680->data[I_38691])) == ((NU8)(47)))) goto LA5;
goto LA1;
goto LA2;
LA5: ;
LA2: ;
Res_38709 -= 1;
} LA1: ;
return Result_38681;
}
N_NIMCALL(NimStringDesc*, Normext_38668)(NimStringDesc* Ext_38670) {
NimStringDesc* Result_38671;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
Result_38671 = 0;
LOC2 = ((Ext_38670) && (Ext_38670)->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = ((NU8)(Ext_38670->data[0]) == (NU8)(46));
LA3: ;
if (!LOC2) goto LA4;
Result_38671 = copyString(Ext_38670);
goto LA1;
LA4: ;
LOC6 = 0;
LOC6 = rawNewString(Ext_38670->Sup.len + 1);
appendChar(LOC6, 46);
appendString(LOC6, Ext_38670);
Result_38671 = LOC6;
LA1: ;
return Result_38671;
}
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_39020, NimStringDesc* Ext_39021) {
NimStringDesc* Result_39022;
NI Extpos_39023;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
Result_39022 = 0;
Extpos_39023 = 0;
Extpos_39023 = Searchextpos_38678(Filename_39020);
if (!(Extpos_39023 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_38668(Ext_39021);
LOC4 = rawNewString(Filename_39020->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_39020);
appendString(LOC4, LOC5);
Result_39022 = LOC4;
goto LA1;
LA2: ;
LOC6 = 0;
LOC7 = 0;
LOC7 = copyStrLast(Filename_39020, 0, (NI32)(Extpos_39023 - 1));
LOC8 = 0;
LOC8 = Normext_38668(Ext_39021);
LOC6 = rawNewString(LOC7->Sup.len + LOC8->Sup.len + 0);
appendString(LOC6, LOC7);
appendString(LOC6, LOC8);
Result_39022 = LOC6;
LA1: ;
return Result_39022;
}
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_36604) {
TY422* E_36804;
NCSTRING LOC8;
TY422* E_36821;
TY422* E_36838;
if (!(Msg_36604->Sup.len == 0)) goto LA2;
if (!!((errno == ((NI32) 0)))) goto LA5;
E_36804 = 0;
E_36804 = (TY422*) newObj(NTI36803, sizeof(TY422));
(*E_36804).Sup.Sup.Sup.Sup.m_type = NTI422;
LOC8 = strerror(errno);
asgnRefNoCycle((void**) &(*E_36804).Sup.Sup.Sup.message, cstrToNimstr(LOC8));
raiseException((E_Base*)E_36804, "EOS");
goto LA4;
LA5: ;
E_36821 = 0;
E_36821 = (TY422*) newObj(NTI36803, sizeof(TY422));
(*E_36821).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_36821).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP196651)));
raiseException((E_Base*)E_36821, "EOS");
LA4: ;
goto LA1;
LA2: ;
E_36838 = 0;
E_36838 = (TY422*) newObj(NTI36803, sizeof(TY422));
(*E_36838).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_36838).Sup.Sup.Sup.message, copyString(Msg_36604));
raiseException((E_Base*)E_36838, "EOS");
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
NimStringDesc* Result_38010;
NCSTRING LOC2;
NI LOC5;
Result_38010 = 0;
Result_38010 = mnewString(512);
LOC2 = getcwd(Result_38010->data, 512);
if (!!((LOC2 == NIM_NIL))) goto LA3;
LOC5 = strlen(Result_38010->data);
Result_38010 = setLengthStr(Result_38010, LOC5);
goto LA1;
LA3: ;
nosOSError(((NimStringDesc*) &TMP196648));
LA1: ;
return Result_38010;
}
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_38487, NI Parts_38487Len0) {
NimStringDesc* Result_38488;
NI I_38511;
NI HEX3Atmp_38513;
NI Res_38515;
Result_38488 = 0;
Result_38488 = copyString(Parts_38487[0]);
I_38511 = 0;
HEX3Atmp_38513 = 0;
HEX3Atmp_38513 = (Parts_38487Len0-1);
Res_38515 = 0;
Res_38515 = 1;
while (1) {
if (!(Res_38515 <= HEX3Atmp_38513)) goto LA1;
I_38511 = Res_38515;
Result_38488 = nosJoinPath(Result_38488, Parts_38487[I_38511]);
Res_38515 += 1;
} LA1: ;
return Result_38488;
}
N_NIMCALL(void, Rawcreatedir_40423)(NimStringDesc* Dir_40425) {
NIM_BOOL LOC2;
int LOC3;
LOC3 = mkdir(Dir_40425->data, 457);
LOC2 = !((LOC3 == ((NI32) 0)));
if (!(LOC2)) goto LA4;
LOC2 = !((errno == EEXIST));
LA4: ;
if (!LOC2) goto LA5;
nosOSError(((NimStringDesc*) &TMP196648));
LA5: ;
}
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_40603) {
NI I_40613;
NI HEX3Atmp_40627;
NI Res_40629;
NimStringDesc* LOC5;
I_40613 = 0;
HEX3Atmp_40627 = 0;
HEX3Atmp_40627 = (NI32)(Dir_40603->Sup.len - 1);
Res_40629 = 0;
Res_40629 = 1;
while (1) {
if (!(Res_40629 <= HEX3Atmp_40627)) goto LA1;
I_40613 = Res_40629;
if (!(((NU8)(Dir_40603->data[I_40613])) == ((NU8)(47)) || ((NU8)(Dir_40603->data[I_40613])) == ((NU8)(47)))) goto LA3;
LOC5 = 0;
LOC5 = copyStrLast(Dir_40603, 0, (NI32)(I_40613 - 1));
Rawcreatedir_40423(LOC5);
LA3: ;
Res_40629 += 1;
} LA1: ;
Rawcreatedir_40423(Dir_40603);
}
N_NIMCALL(void, Getenvvarsc_39442)(void) {
NI I_39444;
NimStringDesc* LOC8;
if (!!(Envcomputed_39421)) goto LA2;
I_39444 = 0;
I_39444 = 0;
while (1) {
if (!(environ[(I_39444)-0] == NIM_NIL)) goto LA6;
goto LA4;
LA6: ;
LOC8 = 0;
LOC8 = cstrToNimstr(environ[(I_39444)-0]);
Environment_39439 = (TY39422*) incrSeq(&(Environment_39439)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_39439->data[Environment_39439->Sup.len-1], copyString(LOC8));
I_39444 += 1;
} LA4: ;
Envcomputed_39421 = NIM_TRUE;
LA2: ;
}
N_NIMCALL(NI, Findenvvar_39602)(NimStringDesc* Key_39604) {
NI Result_39605;
NimStringDesc* Temp_39610;
NimStringDesc* LOC1;
NI I_39618;
NI HEX3Atmp_39620;
NI Res_39622;
NIM_BOOL LOC4;
Result_39605 = 0;
Getenvvarsc_39442();
Temp_39610 = 0;
LOC1 = 0;
LOC1 = rawNewString(Key_39604->Sup.len + 1);
appendString(LOC1, Key_39604);
appendChar(LOC1, 61);
Temp_39610 = LOC1;
I_39618 = 0;
HEX3Atmp_39620 = 0;
HEX3Atmp_39620 = (Environment_39439->Sup.len-1);
Res_39622 = 0;
Res_39622 = 0;
while (1) {
if (!(Res_39622 <= HEX3Atmp_39620)) goto LA2;
I_39618 = Res_39622;
LOC4 = nsuStartsWith(Environment_39439->data[I_39618], Temp_39610);
if (!LOC4) goto LA5;
Result_39605 = I_39618;
goto BeforeRet;
LA5: ;
Res_39622 += 1;
} LA2: ;
Result_39605 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_39605;
}
N_NIMCALL(void, Putenv_39639)(NimStringDesc* Key_39641, NimStringDesc* Val_39642) {
NI Indx_39643;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
int LOC7;
Indx_39643 = 0;
Indx_39643 = Findenvvar_39602(Key_39641);
if (!(0 <= Indx_39643)) goto LA2;
LOC4 = 0;
LOC4 = rawNewString(Key_39641->Sup.len + Val_39642->Sup.len + 1);
appendString(LOC4, Key_39641);
appendChar(LOC4, 61);
appendString(LOC4, Val_39642);
asgnRefNoCycle((void**) &Environment_39439->data[Indx_39643], LOC4);
goto LA1;
LA2: ;
LOC5 = 0;
LOC5 = rawNewString(Key_39641->Sup.len + Val_39642->Sup.len + 1);
appendString(LOC5, Key_39641);
appendChar(LOC5, 61);
appendString(LOC5, Val_39642);
Environment_39439 = (TY39422*) incrSeq(&(Environment_39439)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_39439->data[Environment_39439->Sup.len-1], copyString(LOC5));
Indx_39643 = (Environment_39439->Sup.len-1);
LA1: ;
LOC7 = putenv(Environment_39439->data[Indx_39643]->data);
if (!!((LOC7 == ((NI32) 0)))) goto LA8;
nosOSError(((NimStringDesc*) &TMP196648));
LA8: ;
}
N_NIMCALL(NimStringDesc*, Getenv_39625)(NimStringDesc* Key_39627) {
NimStringDesc* Result_39628;
NI I_39629;
NI LOC4;
NCSTRING Env_39632;
Result_39628 = 0;
I_39629 = 0;
I_39629 = Findenvvar_39602(Key_39627);
if (!(0 <= I_39629)) goto LA2;
LOC4 = nsuFindChar(Environment_39439->data[I_39629], 61, 0);
Result_39628 = copyStr(Environment_39439->data[I_39629], (NI32)(LOC4 + 1));
goto BeforeRet;
goto LA1;
LA2: ;
Env_39632 = 0;
Env_39632 = getenv(Key_39627->data);
if (!(Env_39632 == NIM_NIL)) goto LA6;
Result_39628 = copyString(((NimStringDesc*) &TMP196648));
goto BeforeRet;
LA6: ;
Result_39628 = cstrToNimstr(Env_39632);
LA1: ;
BeforeRet: ;
return Result_39628;
}
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
NimStringDesc* Result_41403;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_41403 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getenv_39625(((NimStringDesc*) &TMP196724));
LOC1 = rawNewString(LOC2->Sup.len + 9);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP196725));
Result_41403 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_41403;
}
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_39065, NimStringDesc* Pathb_39066) {
NI Result_39067;
Result_39067 = 0;
if (!NIM_TRUE) goto LA2;
Result_39067 = Cmp_1321(Patha_39065, Pathb_39066);
goto LA1;
LA2: ;
Result_39067 = nsuCmpIgnoreCase(Patha_39065, Pathb_39066);
LA1: ;
return Result_39067;
}
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_39070, NimStringDesc* Path2_39071) {
NIM_BOOL Result_39072;
struct stat A_39073;
struct stat B_39074;
NIM_BOOL LOC2;
int LOC3;
int LOC5;
NI LOC8;
NIM_BOOL LOC9;
Result_39072 = 0;
memset((void*)&A_39073, 0, sizeof(A_39073));
memset((void*)&B_39074, 0, sizeof(B_39074));
LOC3 = stat(Path1_39070->data, &A_39073);
LOC2 = (LOC3 < ((NI32) 0));
if (LOC2) goto LA4;
LOC5 = stat(Path2_39071->data, &B_39074);
LOC2 = (LOC5 < ((NI32) 0));
LA4: ;
if (!LOC2) goto LA6;
LOC8 = noscmpPaths(Path1_39070, Path2_39071);
Result_39072 = (LOC8 == 0);
goto LA1;
LA6: ;
LOC9 = (A_39073.st_dev == B_39074.st_dev);
if (!(LOC9)) goto LA10;
LOC9 = (A_39073.st_ino == B_39074.st_ino);
LA10: ;
Result_39072 = LOC9;
LA1: ;
return Result_39072;
}
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_39044, NimStringDesc* Ext_39045) {
NimStringDesc* Result_39046;
NI Extpos_39047;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_39046 = 0;
Extpos_39047 = 0;
Extpos_39047 = Searchextpos_38678(Filename_39044);
if (!(Extpos_39047 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_38668(Ext_39045);
LOC4 = rawNewString(Filename_39044->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_39044);
appendString(LOC4, LOC5);
Result_39046 = LOC4;
goto LA1;
LA2: ;
Result_39046 = copyString(Filename_39044);
LA1: ;
return Result_39046;
}
N_NIMCALL(NimStringDesc*, HEX2F_38518)(NimStringDesc* Head_38520, NimStringDesc* Tail_38521) {
NimStringDesc* Result_38522;
Result_38522 = 0;
Result_38522 = nosJoinPath(Head_38520, Tail_38521);
goto BeforeRet;
BeforeRet: ;
return Result_38522;
}
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_38785) {
NimStringDesc* Result_38786;
NIM_BOOL LOC2;
TY38578 LOC6;
Result_38786 = 0;
LOC2 = (Path_38785->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_38785->data[(NI32)(Path_38785->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Path_38785->data[(NI32)(Path_38785->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
Result_38786 = copyString(((NimStringDesc*) &TMP196648));
goto LA1;
LA4: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
nosSplitPath(Path_38785, &LOC6);
Result_38786 = copyString(LOC6.Tail);
LA1: ;
return Result_38786;
}
N_NIMCALL(NI, nosgetLastModificationTime)(NimStringDesc* File_37403) {
NI Result_37404;
struct stat Res_37405;
int LOC2;
Result_37404 = 0;
memset((void*)&Res_37405, 0, sizeof(Res_37405));
LOC2 = stat(File_37403->data, &Res_37405);
if (!(LOC2 < ((NI32) 0))) goto LA3;
nosOSError(((NimStringDesc*) &TMP196648));
LA3: ;
Result_37404 = Res_37405.st_mtime;
goto BeforeRet;
BeforeRet: ;
return Result_37404;
}
N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* A_38003, NimStringDesc* B_38004) {
NIM_BOOL Result_38005;
NI LOC1;
NI LOC2;
NI64 LOC3;
Result_38005 = 0;
LOC1 = nosgetLastModificationTime(A_38003);
LOC2 = nosgetLastModificationTime(B_38004);
LOC3 = ntDiffTime(LOC1, LOC2);
Result_38005 = (0 < LOC3);
return Result_38005;
}
N_NIMCALL(TY39422*, nosparseCmdLine)(NimStringDesc* C_40634) {
TY39422* Result_40636;
NI I_40653;
NimStringDesc* A_40654;
NIM_BOOL LOC3;
NIM_CHAR Delim_40671;
NIM_BOOL LOC6;
Result_40636 = 0;
Result_40636 = (TY39422*) newSeq(NTI39422, 0);
I_40653 = 0;
I_40653 = 0;
A_40654 = 0;
A_40654 = copyString(((NimStringDesc*) &TMP196648));
while (1) {
A_40654 = setLengthStr(A_40654, 0);
while (1) {
LOC3 = ((NU8)(C_40634->data[I_40653]) == (NU8)(32));
if (LOC3) goto LA4;
LOC3 = ((NU8)(C_40634->data[I_40653]) == (NU8)(9));
LA4: ;
if (!LOC3) goto LA2;
I_40653 += 1;
} LA2: ;
switch (((NU8)(C_40634->data[I_40653]))) {
case 39:
case 34:
Delim_40671 = 0;
Delim_40671 = C_40634->data[I_40653];
I_40653 += 1;
while (1) {
LOC6 = !(((NU8)(C_40634->data[I_40653]) == (NU8)(0)));
if (!(LOC6)) goto LA7;
LOC6 = !(((NU8)(C_40634->data[I_40653]) == (NU8)(Delim_40671)));
LA7: ;
if (!LOC6) goto LA5;
A_40654 = addChar(A_40654, C_40634->data[I_40653]);
I_40653 += 1;
} LA5: ;
if (!!(((NU8)(C_40634->data[I_40653]) == (NU8)(0)))) goto LA9;
I_40653 += 1;
LA9: ;
break;
case 0:
goto LA1;
break;
default:
while (1) {
if (!((NU8)(32) < (NU8)(C_40634->data[I_40653]))) goto LA11;
A_40654 = addChar(A_40654, C_40634->data[I_40653]);
I_40653 += 1;
} LA11: ;
break;
}
Result_40636 = (TY39422*) incrSeq(&(Result_40636)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Result_40636->data[Result_40636->Sup.len-1], copyString(A_40654));
} LA1: ;
return Result_40636;
}
N_NIMCALL(void, nossleep)(NI Milsecs_42406) {
struct timespec A_42407;
struct timespec B_42408;
int LOC1;
memset((void*)&A_42407, 0, sizeof(A_42407));
memset((void*)&B_42408, 0, sizeof(B_42408));
A_42407.tv_sec = ((NI) ((NI32)(Milsecs_42406 / 1000)));
A_42407.tv_nsec = (NI32)((NI32)(Milsecs_42406 % 1000) * 1000);
LOC1 = nanosleep(&A_42407, &B_42408);
}
N_NOINLINE(void, osInit)(void) {
Envcomputed_39421 = NIM_FALSE;
asgnRefNoCycle((void**) &Environment_39439, (TY39422*) newSeq(NTI39422, 0));
}


/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY440 TY440;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10990 TY10990;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY8004 TY8004;
typedef struct TY10988 TY10988;
typedef NU8 TY22602[32];
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
struct TY440 {
  TY416 Sup;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY8004 {
void* Debuginfo;
NI32 Lockcount;
NI32 Recursioncount;
NI Owningthread;
NI Locksemaphore;
NI32 Reserved;
};
struct TY10988 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10990 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY8004 Cyclerootslock;
TY8004 Zctlock;
TY10988 Stat;
};
typedef NI TY26135[256];
typedef NimStringDesc* TY43865[1];
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR C_24417);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18508);
N_NIMCALL(void, nsuAddf)(NimStringDesc** S_24741, NimStringDesc* Formatstr_24742, NimStringDesc** A_24744, NI A_24744Len0);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18592, NimStringDesc* Src_18593);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18582, NI Addlen_18583);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NI, Findnormalized_24714)(NimStringDesc* X_24716, NimStringDesc** Inarray_24718, NI Inarray_24718Len0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24638, NimStringDesc* B_24639);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(void, raiseException)(E_Base* E_5404, NCSTRING Ename_5405);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* S_26251, TY22602 Chars_26253, NI Start_26254);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18609, NIM_CHAR C_18610);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18487);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* S_23056, NI* Number_23058, NI Start_23059);
N_NIMCALL(void, Preprocesssub_26136)(NimStringDesc* Sub_26138, NI* A_26140);
N_NIMCALL(NI, Findaux_26171)(NimStringDesc* S_26173, NimStringDesc* Sub_26174, NI Start_26175, TY26135 A_26176);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_24965, NimStringDesc** A_24967, NI A_24967Len0);
N_NIMCALL(NI, npuParseFloat)(NimStringDesc* S_23434, NF* Number_23436, NI Start_23437);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_23049, NI64* Number_23051, NI Start_23052);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19203);
NIM_CONST TY22602 Whitespace_24403 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Letters_24405 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Digits_24407 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Hexdigits_24409 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0x7E, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identchars_24411 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identstartchars_24413 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP193614, "", 0);
NIM_CONST TY22602 Patternchars_24745 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP193615, "invalid format string", 21);
static NIM_CONST TY22602 TMP193647 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP193667, "invalid integer: ", 17);
NIM_CONST TY22602 Chars_24985 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP193714, "invalid float: ", 15);
STRING_LITERAL(TMP193755, "0123456789ABCDEF", 16);
extern TNimType* NTI24867; /* ref EInvalidValue */
extern TNimType* NTI440; /* EInvalidValue */
extern TY10990 Gch_11010;
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR C_24417) {
NIM_CHAR Result_24418;
Result_24418 = 0;
if (!(((NU8)(C_24417)) >= ((NU8)(65)) && ((NU8)(C_24417)) <= ((NU8)(90)))) goto LA2;
Result_24418 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(C_24417)) + 32)))));
goto LA1;
LA2: ;
Result_24418 = C_24417;
LA1: ;
return Result_24418;
}
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24595, NimStringDesc* B_24596) {
NI Result_24597;
NI I_24598;
NIM_BOOL LOC2;
NIM_CHAR LOC4;
NIM_CHAR LOC5;
Result_24597 = 0;
I_24598 = 0;
I_24598 = 0;
while (1) {
LOC2 = (I_24598 < A_24595->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = (I_24598 < B_24596->Sup.len);
LA3: ;
if (!LOC2) goto LA1;
LOC4 = nsuToLowerChar(A_24595->data[I_24598]);
LOC5 = nsuToLowerChar(B_24596->data[I_24598]);
Result_24597 = (NI64)(((NU8)(LOC4)) - ((NU8)(LOC5)));
if (!!((Result_24597 == 0))) goto LA7;
goto BeforeRet;
LA7: ;
I_24598 += 1;
} LA1: ;
Result_24597 = (NI64)(A_24595->Sup.len - B_24596->Sup.len);
BeforeRet: ;
return Result_24597;
}
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24638, NimStringDesc* B_24639) {
NI Result_24640;
NI I_24641;
NI J_24642;
NIM_CHAR Aa_24671;
NIM_CHAR Bb_24672;
NIM_BOOL LOC5;
Result_24640 = 0;
I_24641 = 0;
I_24641 = 0;
J_24642 = 0;
J_24642 = 0;
while (1) {
while (1) {
if (!((NU8)(A_24638->data[I_24641]) == (NU8)(95))) goto LA2;
I_24641 += 1;
} LA2: ;
while (1) {
if (!((NU8)(B_24639->data[J_24642]) == (NU8)(95))) goto LA3;
J_24642 += 1;
} LA3: ;
Aa_24671 = 0;
Aa_24671 = nsuToLowerChar(A_24638->data[I_24641]);
Bb_24672 = 0;
Bb_24672 = nsuToLowerChar(B_24639->data[J_24642]);
Result_24640 = (NI64)(((NU8)(Aa_24671)) - ((NU8)(Bb_24672)));
LOC5 = !((Result_24640 == 0));
if (LOC5) goto LA6;
LOC5 = ((NU8)(Aa_24671) == (NU8)(0));
LA6: ;
if (!LOC5) goto LA7;
goto LA1;
LA7: ;
I_24641 += 1;
J_24642 += 1;
} LA1: ;
return Result_24640;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18592, NimStringDesc* Src_18593) {
memcpy(((NCSTRING) (&(*Dest_18592).data[((*Dest_18592).Sup.len)-0])), ((NCSTRING) ((*Src_18593).data)), ((NI32) ((NI64)((NI64)((*Src_18593).Sup.len + 1) * 1))));
(*Dest_18592).Sup.len += (*Src_18593).Sup.len;
}
N_NIMCALL(NI, Findnormalized_24714)(NimStringDesc* X_24716, NimStringDesc** Inarray_24718, NI Inarray_24718Len0) {
NI Result_24719;
NI I_24720;
NI LOC3;
Result_24719 = 0;
I_24720 = 0;
I_24720 = 0;
while (1) {
if (!(I_24720 < (Inarray_24718Len0-1))) goto LA1;
LOC3 = nsuCmpIgnoreStyle(X_24716, Inarray_24718[I_24720]);
if (!(LOC3 == 0)) goto LA4;
Result_24719 = I_24720;
goto BeforeRet;
LA4: ;
I_24720 += 2;
} LA1: ;
Result_24719 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_24719;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11414))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
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
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403) {
Addzct_11401(&Gch_11010.Zct, C_12403);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019) {
TY10602* C_13020;
NI LOC4;
TY10602* C_13022;
NI LOC9;
if (!!((Src_13019 == NIM_NIL))) goto LA2;
C_13020 = 0;
C_13020 = Usrtocell_11412(Src_13019);
LOC4 = Atomicinc_3001(&(*C_13020).Refcount, 8);
LA2: ;
if (!!(((*Dest_13018) == NIM_NIL))) goto LA6;
C_13022 = 0;
C_13022 = Usrtocell_11412((*Dest_13018));
LOC9 = Atomicdec_3006(&(*C_13022).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(void, nsuAddf)(NimStringDesc** S_24741, NimStringDesc* Formatstr_24742, NimStringDesc** A_24744, NI A_24744Len0) {
NI I_24747;
NI Num_24748;
NI J_24791;
NI J_24837;
NI X_24862;
NimStringDesc* LOC7;
NIM_BOOL LOC9;
TY440* E_24868;
NI J_24884;
NI X_24908;
NimStringDesc* LOC15;
NIM_BOOL LOC17;
TY440* E_24914;
TY440* E_24931;
I_24747 = 0;
I_24747 = 0;
Num_24748 = 0;
Num_24748 = 0;
while (1) {
if (!(I_24747 < Formatstr_24742->Sup.len)) goto LA1;
if (!((NU8)(Formatstr_24742->data[I_24747]) == (NU8)(36))) goto LA3;
switch (((NU8)(Formatstr_24742->data[(NI64)(I_24747 + 1)]))) {
case 35:
(*S_24741) = resizeString((*S_24741), A_24744[Num_24748]->Sup.len + 0);
appendString((*S_24741), A_24744[Num_24748]);
I_24747 += 2;
Num_24748 += 1;
break;
case 36:
(*S_24741) = addChar((*S_24741), 36);
I_24747 += 2;
break;
case 49 ... 57:
J_24791 = 0;
J_24791 = 0;
I_24747 += 1;
while (1) {
if (!(((NU8)(Formatstr_24742->data[I_24747])) >= ((NU8)(48)) && ((NU8)(Formatstr_24742->data[I_24747])) <= ((NU8)(57)))) goto LA5;
J_24791 = (NI64)((NI64)((NI64)(J_24791 * 10) + ((NU8)(Formatstr_24742->data[I_24747]))) - 48);
I_24747 += 1;
} LA5: ;
Num_24748 = J_24791;
(*S_24741) = resizeString((*S_24741), A_24744[(NI64)(J_24791 - 1)]->Sup.len + 0);
appendString((*S_24741), A_24744[(NI64)(J_24791 - 1)]);
break;
case 123:
J_24837 = 0;
J_24837 = (NI64)(I_24747 + 1);
while (1) {
if (!!((((NU8)(Formatstr_24742->data[J_24837])) == ((NU8)(0)) || ((NU8)(Formatstr_24742->data[J_24837])) == ((NU8)(125))))) goto LA6;
J_24837 += 1;
} LA6: ;
X_24862 = 0;
LOC7 = 0;
LOC7 = copyStrLast(Formatstr_24742, (NI64)(I_24747 + 2), (NI64)(J_24837 - 1));
X_24862 = Findnormalized_24714(LOC7, A_24744, A_24744Len0);
LOC9 = (0 <= X_24862);
if (!(LOC9)) goto LA10;
LOC9 = (X_24862 < (A_24744Len0-1));
LA10: ;
if (!LOC9) goto LA11;
(*S_24741) = resizeString((*S_24741), A_24744[(NI64)(X_24862 + 1)]->Sup.len + 0);
appendString((*S_24741), A_24744[(NI64)(X_24862 + 1)]);
goto LA8;
LA11: ;
E_24868 = 0;
E_24868 = (TY440*) newObj(NTI24867, sizeof(TY440));
(*E_24868).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_24868).Sup.Sup.message, copyString(((NimStringDesc*) &TMP193615)));
raiseException((E_Base*)E_24868, "EInvalidValue");
LA8: ;
I_24747 = (NI64)(J_24837 + 1);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
case 95:
J_24884 = 0;
J_24884 = (NI64)(I_24747 + 1);
while (1) {
if (!(((NU8)(Formatstr_24742->data[J_24884])) >= ((NU8)(97)) && ((NU8)(Formatstr_24742->data[J_24884])) <= ((NU8)(122)) || ((NU8)(Formatstr_24742->data[J_24884])) >= ((NU8)(65)) && ((NU8)(Formatstr_24742->data[J_24884])) <= ((NU8)(90)) || ((NU8)(Formatstr_24742->data[J_24884])) >= ((NU8)(48)) && ((NU8)(Formatstr_24742->data[J_24884])) <= ((NU8)(57)) || ((NU8)(Formatstr_24742->data[J_24884])) >= ((NU8)(128)) && ((NU8)(Formatstr_24742->data[J_24884])) <= ((NU8)(255)) || ((NU8)(Formatstr_24742->data[J_24884])) == ((NU8)(95)))) goto LA14;
J_24884 += 1;
} LA14: ;
X_24908 = 0;
LOC15 = 0;
LOC15 = copyStrLast(Formatstr_24742, (NI64)(I_24747 + 1), (NI64)(J_24884 - 1));
X_24908 = Findnormalized_24714(LOC15, A_24744, A_24744Len0);
LOC17 = (0 <= X_24908);
if (!(LOC17)) goto LA18;
LOC17 = (X_24908 < (A_24744Len0-1));
LA18: ;
if (!LOC17) goto LA19;
(*S_24741) = resizeString((*S_24741), A_24744[(NI64)(X_24908 + 1)]->Sup.len + 0);
appendString((*S_24741), A_24744[(NI64)(X_24908 + 1)]);
goto LA16;
LA19: ;
E_24914 = 0;
E_24914 = (TY440*) newObj(NTI24867, sizeof(TY440));
(*E_24914).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_24914).Sup.Sup.message, copyString(((NimStringDesc*) &TMP193615)));
raiseException((E_Base*)E_24914, "EInvalidValue");
LA16: ;
I_24747 = J_24884;
break;
default:
E_24931 = 0;
E_24931 = (TY440*) newObj(NTI24867, sizeof(TY440));
(*E_24931).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_24931).Sup.Sup.message, copyString(((NimStringDesc*) &TMP193615)));
raiseException((E_Base*)E_24931, "EInvalidValue");
break;
}
goto LA2;
LA3: ;
(*S_24741) = addChar((*S_24741), Formatstr_24742->data[I_24747]);
I_24747 += 1;
LA2: ;
} LA1: ;
}
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_24965, NimStringDesc** A_24967, NI A_24967Len0) {
NimStringDesc* Result_24968;
Result_24968 = 0;
Result_24968 = copyString(((NimStringDesc*) &TMP193614));
nsuAddf(&Result_24968, Formatstr_24965, A_24967, A_24967Len0);
return Result_24968;
}
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_24546) {
NimStringDesc* Result_24547;
NI I_24557;
NI HEX3Atmp_24588;
NI Res_24590;
Result_24547 = 0;
Result_24547 = copyString(((NimStringDesc*) &TMP193614));
I_24557 = 0;
HEX3Atmp_24588 = 0;
HEX3Atmp_24588 = (NI64)(S_24546->Sup.len - 1);
Res_24590 = 0;
Res_24590 = 0;
while (1) {
if (!(Res_24590 <= HEX3Atmp_24588)) goto LA1;
I_24557 = Res_24590;
if (!(((NU8)(S_24546->data[I_24557])) >= ((NU8)(65)) && ((NU8)(S_24546->data[I_24557])) <= ((NU8)(90)))) goto LA3;
Result_24547 = addChar(Result_24547, ((NIM_CHAR) (((NI) ((NI64)(((NU8)(S_24546->data[I_24557])) + 32))))));
goto LA2;
LA3: ;
if (!!(((NU8)(S_24546->data[I_24557]) == (NU8)(95)))) goto LA5;
Result_24547 = addChar(Result_24547, S_24546->data[I_24557]);
goto LA2;
LA5: ;
LA2: ;
Res_24590 += 1;
} LA1: ;
return Result_24547;
}
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* S_26251, TY22602 Chars_26253, NI Start_26254) {
NI Result_26255;
NI I_26265;
NI HEX3Atmp_26278;
NI Res_26280;
Result_26255 = 0;
I_26265 = 0;
HEX3Atmp_26278 = 0;
HEX3Atmp_26278 = (NI64)(S_26251->Sup.len - 1);
Res_26280 = 0;
Res_26280 = Start_26254;
while (1) {
if (!(Res_26280 <= HEX3Atmp_26278)) goto LA1;
I_26265 = Res_26280;
if (!((Chars_26253[((NU8)(S_26251->data[I_26265]))/8] &(1<<(((NU8)(S_26251->data[I_26265]))%8)))!=0)) goto LA3;
Result_26255 = I_26265;
goto BeforeRet;
LA3: ;
Res_26280 += 1;
} LA1: ;
Result_26255 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_26255;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18609, NIM_CHAR C_18610) {
(*Dest_18609).data[((*Dest_18609).Sup.len)-0] = C_18610;
(*Dest_18609).data[((NI64)((*Dest_18609).Sup.len + 1))-0] = 0;
(*Dest_18609).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_26283)(NimStringDesc* S_26285) {
NimStringDesc* Result_26286;
NIM_BOOL LOC2;
NI LOC3;
NimStringDesc* LOC7;
Result_26286 = 0;
LOC3 = nsuFindCharSet(S_26285, TMP193647, 0);
LOC2 = (0 <= LOC3);
if (!(LOC2)) goto LA4;
LOC2 = !(((NU8)(S_26285->data[0]) == (NU8)(34)));
LA4: ;
if (!LOC2) goto LA5;
LOC7 = 0;
LOC7 = rawNewString(S_26285->Sup.len + 2);
appendChar(LOC7, 34);
appendString(LOC7, S_26285);
appendChar(LOC7, 34);
Result_26286 = LOC7;
goto LA1;
LA5: ;
Result_26286 = copyString(S_26285);
LA1: ;
return Result_26286;
}
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_26227, NIM_CHAR Sub_26228, NI Start_26229) {
NI Result_26230;
NI I_26240;
NI HEX3Atmp_26244;
NI Res_26246;
Result_26230 = 0;
I_26240 = 0;
HEX3Atmp_26244 = 0;
HEX3Atmp_26244 = (NI64)(S_26227->Sup.len - 1);
Res_26246 = 0;
Res_26246 = Start_26229;
while (1) {
if (!(Res_26246 <= HEX3Atmp_26244)) goto LA1;
I_26240 = Res_26246;
if (!((NU8)(Sub_26228) == (NU8)(S_26227->data[I_26240]))) goto LA3;
Result_26230 = I_26240;
goto BeforeRet;
LA3: ;
Res_26246 += 1;
} LA1: ;
Result_26230 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_26230;
}
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_24448) {
NimStringDesc* Result_24449;
NI I_24476;
NI HEX3Atmp_24478;
NI Res_24480;
Result_24449 = 0;
Result_24449 = mnewString(S_24448->Sup.len);
I_24476 = 0;
HEX3Atmp_24478 = 0;
HEX3Atmp_24478 = (NI64)(S_24448->Sup.len - 1);
Res_24480 = 0;
Res_24480 = 0;
while (1) {
if (!(Res_24480 <= HEX3Atmp_24478)) goto LA1;
I_24476 = Res_24480;
Result_24449->data[I_24476] = nsuToLowerChar(S_24448->data[I_24476]);
Res_24480 += 1;
} LA1: ;
return Result_24449;
}
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25769, NimStringDesc* Prefix_25770) {
NIM_BOOL Result_25771;
NI I_25772;
Result_25771 = 0;
I_25772 = 0;
I_25772 = 0;
while (1) {
if (!((NU8)(Prefix_25770->data[I_25772]) == (NU8)(0))) goto LA3;
Result_25771 = NIM_TRUE;
goto BeforeRet;
LA3: ;
if (!!(((NU8)(S_25769->data[I_25772]) == (NU8)(Prefix_25770->data[I_25772])))) goto LA6;
Result_25771 = NIM_FALSE;
goto BeforeRet;
LA6: ;
I_25772 += 1;
}
BeforeRet: ;
return Result_25771;
}
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_25504) {
NI Result_25505;
NI L_25507;
TY440* E_25513;
NimStringDesc* LOC5;
Result_25505 = 0;
L_25507 = 0;
L_25507 = npuParseInt(S_25504, &Result_25505, 0);
if (!!((L_25507 == S_25504->Sup.len))) goto LA2;
E_25513 = 0;
E_25513 = (TY440*) newObj(NTI24867, sizeof(TY440));
(*E_25513).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_25504->Sup.len + 17);
appendString(LOC5, ((NimStringDesc*) &TMP193667));
appendString(LOC5, S_25504);
asgnRefNoCycle((void**) &(*E_25513).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_25513, "EInvalidValue");
LA2: ;
return Result_25505;
}
N_NIMCALL(void, Preprocesssub_26136)(NimStringDesc* Sub_26138, NI* A_26140) {
NI M_26143;
NI I_26151;
NI Res_26162;
NI I_26159;
NI HEX3Atmp_26166;
NI Res_26168;
M_26143 = 0;
M_26143 = Sub_26138->Sup.len;
I_26151 = 0;
Res_26162 = 0;
Res_26162 = 0;
while (1) {
if (!(Res_26162 <= 255)) goto LA1;
I_26151 = Res_26162;
A_26140[(((NU8)(((NIM_CHAR) (((NI) (I_26151)))))))-0] = (NI64)(M_26143 + 1);
Res_26162 += 1;
} LA1: ;
I_26159 = 0;
HEX3Atmp_26166 = 0;
HEX3Atmp_26166 = (NI64)(M_26143 - 1);
Res_26168 = 0;
Res_26168 = 0;
while (1) {
if (!(Res_26168 <= HEX3Atmp_26166)) goto LA2;
I_26159 = Res_26168;
A_26140[(((NU8)(Sub_26138->data[I_26159])))-0] = (NI64)(M_26143 - I_26159);
Res_26168 += 1;
} LA2: ;
}
N_NIMCALL(NI, Findaux_26171)(NimStringDesc* S_26173, NimStringDesc* Sub_26174, NI Start_26175, TY26135 A_26176) {
NI Result_26177;
NI M_26180;
NI N_26183;
NI J_26184;
NI K_26195;
NI HEX3Atmp_26211;
NI Res_26213;
Result_26177 = 0;
M_26180 = 0;
M_26180 = Sub_26174->Sup.len;
N_26183 = 0;
N_26183 = S_26173->Sup.len;
J_26184 = 0;
J_26184 = Start_26175;
while (1) {
if (!(J_26184 <= (NI64)(N_26183 - M_26180))) goto LA1;
K_26195 = 0;
HEX3Atmp_26211 = 0;
HEX3Atmp_26211 = (NI64)(M_26180 - 1);
Res_26213 = 0;
Res_26213 = 0;
while (1) {
if (!(Res_26213 <= HEX3Atmp_26211)) goto LA3;
K_26195 = Res_26213;
if (!!(((NU8)(Sub_26174->data[K_26195]) == (NU8)(S_26173->data[(NI64)(K_26195 + J_26184)])))) goto LA5;
goto LA2;
LA5: ;
Res_26213 += 1;
} LA3: ;
Result_26177 = J_26184;
goto BeforeRet;
LA2: ;
J_26184 += A_26176[(((NU8)(S_26173->data[(NI64)(J_26184 + M_26180)])))-0];
} LA1: ;
Result_26177 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_26177;
}
N_NIMCALL(NI, nsuFindStr)(NimStringDesc* S_26219, NimStringDesc* Sub_26220, NI Start_26221) {
NI Result_26222;
TY26135 A_26223;
Result_26222 = 0;
memset((void*)&A_26223, 0, sizeof(A_26223));
Preprocesssub_26136(Sub_26220, A_26223);
Result_26222 = Findaux_26171(S_26219, Sub_26220, Start_26221, A_26223);
return Result_26222;
}
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* Formatstr_24972, NimStringDesc* A_24973) {
NimStringDesc* Result_24974;
TY43865 LOC1;
Result_24974 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = copyString(A_24973);
Result_24974 = nsuFormatOpenArray(Formatstr_24972, LOC1, 1);
goto BeforeRet;
BeforeRet: ;
return Result_24974;
}
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_24981, NIM_BOOL Leading_24982, NIM_BOOL Trailing_24983) {
NimStringDesc* Result_24984;
NI First_24987;
NI Last_24990;
NIM_BOOL LOC9;
Result_24984 = 0;
First_24987 = 0;
First_24987 = 0;
Last_24990 = 0;
Last_24990 = (NI64)(S_24981->Sup.len - 1);
if (!Leading_24982) goto LA2;
while (1) {
if (!(((NU8)(S_24981->data[First_24987])) == ((NU8)(32)) || ((NU8)(S_24981->data[First_24987])) == ((NU8)(9)) || ((NU8)(S_24981->data[First_24987])) == ((NU8)(11)) || ((NU8)(S_24981->data[First_24987])) == ((NU8)(13)) || ((NU8)(S_24981->data[First_24987])) == ((NU8)(10)) || ((NU8)(S_24981->data[First_24987])) == ((NU8)(12)))) goto LA4;
First_24987 += 1;
} LA4: ;
LA2: ;
if (!Trailing_24983) goto LA6;
while (1) {
LOC9 = (0 <= Last_24990);
if (!(LOC9)) goto LA10;
LOC9 = (((NU8)(S_24981->data[Last_24990])) == ((NU8)(32)) || ((NU8)(S_24981->data[Last_24990])) == ((NU8)(9)) || ((NU8)(S_24981->data[Last_24990])) == ((NU8)(11)) || ((NU8)(S_24981->data[Last_24990])) == ((NU8)(13)) || ((NU8)(S_24981->data[Last_24990])) == ((NU8)(10)) || ((NU8)(S_24981->data[Last_24990])) == ((NU8)(12)));
LA10: ;
if (!LOC9) goto LA8;
Last_24990 -= 1;
} LA8: ;
LA6: ;
Result_24984 = copyStrLast(S_24981, First_24987, Last_24990);
return Result_24984;
}
N_NIMCALL(NF, nsuParseFloat)(NimStringDesc* S_25574) {
NF Result_25575;
NI L_25577;
TY440* E_25583;
NimStringDesc* LOC5;
Result_25575 = 0;
L_25577 = 0;
L_25577 = npuParseFloat(S_25574, &Result_25575, 0);
if (!!((L_25577 == S_25574->Sup.len))) goto LA2;
E_25583 = 0;
E_25583 = (TY440*) newObj(NTI24867, sizeof(TY440));
(*E_25583).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_25574->Sup.len + 15);
appendString(LOC5, ((NimStringDesc*) &TMP193714));
appendString(LOC5, S_25574);
asgnRefNoCycle((void**) &(*E_25583).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_25583, "EInvalidValue");
LA2: ;
return Result_25575;
}
N_NIMCALL(NI64, nsuParseBiggestInt)(NimStringDesc* S_25539) {
NI64 Result_25540;
NI L_25542;
TY440* E_25548;
NimStringDesc* LOC5;
Result_25540 = 0;
L_25542 = 0;
L_25542 = npuParseBiggestInt(S_25539, &Result_25540, 0);
if (!!((L_25542 == S_25539->Sup.len))) goto LA2;
E_25548 = 0;
E_25548 = (TY440*) newObj(NTI24867, sizeof(TY440));
(*E_25548).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_25539->Sup.len + 17);
appendString(LOC5, ((NimStringDesc*) &TMP193667));
appendString(LOC5, S_25539);
asgnRefNoCycle((void**) &(*E_25548).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_25548, "EInvalidValue");
LA2: ;
return Result_25540;
}
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_25750, NIM_CHAR C_25751) {
NimStringDesc* Result_25752;
NI I_25760;
NI HEX3Atmp_25762;
NI Res_25764;
Result_25752 = 0;
Result_25752 = mnewString(Count_25750);
I_25760 = 0;
HEX3Atmp_25762 = 0;
HEX3Atmp_25762 = (NI64)(Count_25750 - 1);
Res_25764 = 0;
Res_25764 = 0;
while (1) {
if (!(Res_25764 <= HEX3Atmp_25762)) goto LA1;
I_25760 = Res_25764;
Result_25752->data[I_25760] = C_25751;
Res_25764 += 1;
} LA1: ;
return Result_25752;
}
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_25450, NI Len_25451) {
NimStringDesc* Result_25452;
NI64 Shift_25454;
NI J_25462;
NI HEX3Atmp_25464;
NI Res_25466;
Result_25452 = 0;
Shift_25454 = 0;
Result_25452 = mnewString(Len_25451);
J_25462 = 0;
HEX3Atmp_25464 = 0;
HEX3Atmp_25464 = (NI64)(Len_25451 - 1);
Res_25466 = 0;
Res_25466 = HEX3Atmp_25464;
while (1) {
if (!(0 <= Res_25466)) goto LA1;
J_25462 = Res_25466;
Result_25452->data[J_25462] = ((NimStringDesc*) &TMP193755)->data[(NI32)(((NI32)(NU32)(NU64)((NI64)((NU64)(X_25450) >> (NU64)(Shift_25454)))) & ((NI32) 15))];
Shift_25454 = (NI64)(Shift_25454 + 4);
Res_25466 -= 1;
} LA1: ;
return Result_25452;
}
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* S_26324, NimStringDesc* Sub_26325, NimStringDesc* By_26326) {
NimStringDesc* Result_26327;
TY26135 A_26328;
NI I_26330;
NI J_26331;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
Result_26327 = 0;
memset((void*)&A_26328, 0, sizeof(A_26328));
Result_26327 = copyString(((NimStringDesc*) &TMP193614));
Preprocesssub_26136(Sub_26325, A_26328);
I_26330 = 0;
I_26330 = 0;
while (1) {
J_26331 = 0;
J_26331 = Findaux_26171(S_26324, Sub_26325, I_26330, A_26328);
if (!(J_26331 < 0)) goto LA3;
goto LA1;
LA3: ;
LOC5 = 0;
LOC5 = copyStrLast(S_26324, I_26330, (NI64)(J_26331 - 1));
Result_26327 = resizeString(Result_26327, LOC5->Sup.len + 0);
appendString(Result_26327, LOC5);
Result_26327 = resizeString(Result_26327, By_26326->Sup.len + 0);
appendString(Result_26327, By_26326);
I_26330 = (NI64)(J_26331 + Sub_26325->Sup.len);
} LA1: ;
LOC6 = 0;
LOC6 = copyStr(S_26324, I_26330);
Result_26327 = resizeString(Result_26327, LOC6->Sup.len + 0);
appendString(Result_26327, LOC6);
return Result_26327;
}
N_NIMCALL(NimStringDesc*, nsuToBin)(NI64 X_26516, NI Len_26517) {
NimStringDesc* Result_26518;
NI64 Mask_26519;
NI64 Shift_26520;
NI J_26530;
NI HEX3Atmp_26537;
NI Res_26539;
Result_26518 = 0;
Mask_26519 = 0;
Mask_26519 = 1;
Shift_26520 = 0;
Shift_26520 = 0;
Result_26518 = mnewString(Len_26517);
J_26530 = 0;
HEX3Atmp_26537 = 0;
HEX3Atmp_26537 = (NI64)(Len_26517 - 1);
Res_26539 = 0;
Res_26539 = HEX3Atmp_26537;
while (1) {
if (!(0 <= Res_26539)) goto LA1;
J_26530 = Res_26539;
Result_26518->data[J_26530] = ((NIM_CHAR) (((NI) ((NI64)(((NI) ((NI64)((NU64)((X_26516 & Mask_26519)) >> (NU64)(Shift_26520)))) + 48)))));
Shift_26520 = (NI64)(Shift_26520 + 1);
Mask_26519 = (NI64)((NU64)(Mask_26519) << (NU64)(1));
Res_26539 -= 1;
} LA1: ;
return Result_26518;
}
N_NIMCALL(NimStringDesc*, nsuToOct)(NI64 X_26488, NI Len_26489) {
NimStringDesc* Result_26490;
NI64 Mask_26491;
NI64 Shift_26492;
NI J_26502;
NI HEX3Atmp_26509;
NI Res_26511;
Result_26490 = 0;
Mask_26491 = 0;
Mask_26491 = 7;
Shift_26492 = 0;
Shift_26492 = 0;
Result_26490 = mnewString(Len_26489);
J_26502 = 0;
HEX3Atmp_26509 = 0;
HEX3Atmp_26509 = (NI64)(Len_26489 - 1);
Res_26511 = 0;
Res_26511 = HEX3Atmp_26509;
while (1) {
if (!(0 <= Res_26511)) goto LA1;
J_26502 = Res_26511;
Result_26490->data[J_26502] = ((NIM_CHAR) (((NI) ((NI64)(((NI) ((NI64)((NU64)((X_26488 & Mask_26491)) >> (NU64)(Shift_26492)))) + 48)))));
Shift_26492 = (NI64)(Shift_26492 + 3);
Mask_26491 = (NI64)((NU64)(Mask_26491) << (NU64)(3));
Res_26511 -= 1;
} LA1: ;
return Result_26490;
}
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI X_25471, NI Minchars_25472) {
NimStringDesc* Result_25473;
NI I_25485;
NI HEX3Atmp_25497;
NI Res_25499;
NimStringDesc* LOC2;
NimStringDesc* LOC6;
Result_25473 = 0;
Result_25473 = nimIntToStr((NI64)abs(X_25471));
I_25485 = 0;
HEX3Atmp_25497 = 0;
HEX3Atmp_25497 = (NI64)(Minchars_25472 - Result_25473->Sup.len);
Res_25499 = 0;
Res_25499 = 1;
while (1) {
if (!(Res_25499 <= HEX3Atmp_25497)) goto LA1;
I_25485 = Res_25499;
LOC2 = 0;
LOC2 = rawNewString(Result_25473->Sup.len + 1);
appendChar(LOC2, 48);
appendString(LOC2, Result_25473);
Result_25473 = LOC2;
Res_25499 += 1;
} LA1: ;
if (!(X_25471 < 0)) goto LA4;
LOC6 = 0;
LOC6 = rawNewString(Result_25473->Sup.len + 1);
appendChar(LOC6, 45);
appendString(LOC6, Result_25473);
Result_25473 = LOC6;
LA4: ;
return Result_25473;
}
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_25043) {
NimStringDesc* Result_25044;
NI Val_25050;
NI I_25073;
NI Res_25081;
Result_25044 = 0;
Result_25044 = mnewString(3);
Val_25050 = 0;
Val_25050 = ((NU8)(C_25043));
I_25073 = 0;
Res_25081 = 0;
Res_25081 = 2;
while (1) {
if (!(0 <= Res_25081)) goto LA1;
I_25073 = Res_25081;
Result_25044->data[I_25073] = ((NIM_CHAR) (((NI) ((NI64)((NI64)(Val_25050 % 8) + 48)))));
Val_25050 = (NI64)(Val_25050 / 8);
Res_25081 -= 1;
} LA1: ;
return Result_25044;
}
N_NIMCALL(NIM_BOOL, Allcharsinset_25830)(NimStringDesc* S_25832, TY22602 Theset_25833) {
NIM_BOOL Result_25834;
NIM_CHAR C_25837;
NI I_25851;
Result_25834 = 0;
C_25837 = 0;
I_25851 = 0;
I_25851 = 0;
while (1) {
if (!(I_25851 < S_25832->Sup.len)) goto LA1;
C_25837 = S_25832->data[I_25851];
if (!!(((Theset_25833[((NU8)(C_25837))/8] &(1<<(((NU8)(C_25837))%8)))!=0))) goto LA3;
Result_25834 = NIM_FALSE;
goto BeforeRet;
LA3: ;
I_25851 += 1;
} LA1: ;
Result_25834 = NIM_TRUE;
goto BeforeRet;
BeforeRet: ;
return Result_25834;
}
N_NOINLINE(void, strutilsInit)(void) {
}


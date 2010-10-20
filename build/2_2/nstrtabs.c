/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY45008 TY45008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY45006 TY45006;
typedef struct TY45004 TY45004;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
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
struct TY45004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY45008 {
  TNimObject Sup;
NI Counter;
TY45006* Data;
NU8 Mode;
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
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY45006 {
  TGenericSeq Sup;
  TY45004 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_13707, NI Size_13708);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, Put_45024)(TY45008* T_45026, NimStringDesc* Key_45027, NimStringDesc* Val_45028);
N_NIMCALL(NI, Rawget_45142)(TY45008* T_45144, NimStringDesc* Key_45145);
N_NIMCALL(NI, Myhash_45105)(TY45008* T_45107, NimStringDesc* Key_45108);
N_NIMCALL(NI, Gethashstr_44031)(NimStringDesc* S_44033);
N_NIMCALL(NI, Gethashstrci_44034)(NimStringDesc* S_44036);
N_NIMCALL(NI, Getnormalizedhash_44037)(NimStringDesc* S_44039);
N_NIMCALL(NIM_BOOL, Mycmp_45110)(TY45008* T_45112, NimStringDesc* A_45113, NimStringDesc* B_45114);
N_NIMCALL(NI, Cmp_1321)(NimStringDesc* X_1323, NimStringDesc* Y_1324);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24595, NimStringDesc* B_24596);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24638, NimStringDesc* B_24639);
N_NIMCALL(NI, Nexttry_45137)(NI H_45139, NI Maxhash_45140);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(NIM_BOOL, Mustrehash_45122)(NI Length_45124, NI Counter_45125);
N_NIMCALL(void, Enlarge_45173)(TY45008* T_45175);
N_NIMCALL(void, Rawinsert_45164)(TY45008* T_45166, TY45006** Data_45168, NimStringDesc* Key_45169, NimStringDesc* Val_45170);
STRING_LITERAL(TMP196680, "", 0);
extern TNimType* NTI45010; /* PStringTable */
extern TNimType* NTI45008; /* TStringTable */
extern TNimType* NTI45006; /* TKeyValuePairSeq */
extern TY11190 Gch_11210;
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
N_NIMCALL(NI, Myhash_45105)(TY45008* T_45107, NimStringDesc* Key_45108) {
NI Result_45109;
Result_45109 = 0;
switch ((*T_45107).Mode) {
case ((NU8) 0):
Result_45109 = Gethashstr_44031(Key_45108);
break;
case ((NU8) 1):
Result_45109 = Gethashstrci_44034(Key_45108);
break;
case ((NU8) 2):
Result_45109 = Getnormalizedhash_44037(Key_45108);
break;
}
return Result_45109;
}
N_NIMCALL(NIM_BOOL, Mycmp_45110)(TY45008* T_45112, NimStringDesc* A_45113, NimStringDesc* B_45114) {
NIM_BOOL Result_45115;
NI LOC1;
NI LOC2;
NI LOC3;
Result_45115 = 0;
switch ((*T_45112).Mode) {
case ((NU8) 0):
LOC1 = Cmp_1321(A_45113, B_45114);
Result_45115 = (LOC1 == 0);
break;
case ((NU8) 1):
LOC2 = nsuCmpIgnoreCase(A_45113, B_45114);
Result_45115 = (LOC2 == 0);
break;
case ((NU8) 2):
LOC3 = nsuCmpIgnoreStyle(A_45113, B_45114);
Result_45115 = (LOC3 == 0);
break;
}
return Result_45115;
}
N_NIMCALL(NI, Nexttry_45137)(NI H_45139, NI Maxhash_45140) {
NI Result_45141;
Result_45141 = 0;
Result_45141 = (NI64)((NI64)((NI64)(5 * H_45139) + 1) & Maxhash_45140);
return Result_45141;
}
N_NIMCALL(NI, Rawget_45142)(TY45008* T_45144, NimStringDesc* Key_45145) {
NI Result_45146;
NI H_45147;
NI LOC1;
NIM_BOOL LOC4;
Result_45146 = 0;
H_45147 = 0;
LOC1 = Myhash_45105(T_45144, Key_45145);
H_45147 = (NI64)(LOC1 & ((*T_45144).Data->Sup.len-1));
while (1) {
if (!!((*T_45144).Data->data[H_45147].Key == 0)) goto LA2;
LOC4 = Mycmp_45110(T_45144, (*T_45144).Data->data[H_45147].Key, Key_45145);
if (!LOC4) goto LA5;
Result_45146 = H_45147;
goto BeforeRet;
LA5: ;
H_45147 = Nexttry_45137(H_45147, ((*T_45144).Data->Sup.len-1));
} LA2: ;
Result_45146 = -1;
BeforeRet: ;
return Result_45146;
}
N_NIMCALL(NIM_BOOL, Mustrehash_45122)(NI Length_45124, NI Counter_45125) {
NIM_BOOL Result_45126;
NIM_BOOL LOC1;
Result_45126 = 0;
LOC1 = ((NI64)(Length_45124 * 2) < (NI64)(Counter_45125 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI64)(Length_45124 - Counter_45125) < 4);
LA2: ;
Result_45126 = LOC1;
return Result_45126;
}
N_NIMCALL(void, Rawinsert_45164)(TY45008* T_45166, TY45006** Data_45168, NimStringDesc* Key_45169, NimStringDesc* Val_45170) {
NI H_45171;
NI LOC1;
H_45171 = 0;
LOC1 = Myhash_45105(T_45166, Key_45169);
H_45171 = (NI64)(LOC1 & ((*Data_45168)->Sup.len-1));
while (1) {
if (!!((*Data_45168)->data[H_45171].Key == 0)) goto LA2;
H_45171 = Nexttry_45137(H_45171, ((*Data_45168)->Sup.len-1));
} LA2: ;
asgnRefNoCycle((void**) &(*Data_45168)->data[H_45171].Key, copyString(Key_45169));
asgnRefNoCycle((void**) &(*Data_45168)->data[H_45171].Val, copyString(Val_45170));
}
N_NIMCALL(void, Enlarge_45173)(TY45008* T_45175) {
TY45006* N_45176;
NI I_45221;
NI HEX3Atmp_45233;
NI Res_45235;
TY45006* LOC5;
N_45176 = 0;
N_45176 = (TY45006*) newSeq(NTI45006, (NI64)((*T_45175).Data->Sup.len * 2));
I_45221 = 0;
HEX3Atmp_45233 = 0;
HEX3Atmp_45233 = ((*T_45175).Data->Sup.len-1);
Res_45235 = 0;
Res_45235 = 0;
while (1) {
if (!(Res_45235 <= HEX3Atmp_45233)) goto LA1;
I_45221 = Res_45235;
if (!!((*T_45175).Data->data[I_45221].Key == 0)) goto LA3;
Rawinsert_45164(T_45175, &N_45176, (*T_45175).Data->data[I_45221].Key, (*T_45175).Data->data[I_45221].Val);
LA3: ;
Res_45235 += 1;
} LA1: ;
LOC5 = 0;
LOC5 = (*T_45175).Data;
asgnRefNoCycle((void**) &(*T_45175).Data, N_45176);
N_45176 = LOC5;
}
N_NIMCALL(void, Put_45024)(TY45008* T_45026, NimStringDesc* Key_45027, NimStringDesc* Val_45028) {
NI Index_45243;
NIM_BOOL LOC5;
Index_45243 = 0;
Index_45243 = Rawget_45142(T_45026, Key_45027);
if (!(0 <= Index_45243)) goto LA2;
asgnRefNoCycle((void**) &(*T_45026).Data->data[Index_45243].Val, copyString(Val_45028));
goto LA1;
LA2: ;
LOC5 = Mustrehash_45122((*T_45026).Data->Sup.len, (*T_45026).Counter);
if (!LOC5) goto LA6;
Enlarge_45173(T_45026);
LA6: ;
Rawinsert_45164(T_45026, &(*T_45026).Data, Key_45027, Val_45028);
(*T_45026).Counter += 1;
LA1: ;
}
N_NIMCALL(TY45008*, Newstringtable_45019)(NimStringDesc** Keyvaluepairs_45022, NI Keyvaluepairs_45022Len0, NU8 Mode_45023) {
TY45008* Result_45061;
NI I_45089;
Result_45061 = 0;
Result_45061 = (TY45008*) newObj(NTI45010, sizeof(TY45008));
(*Result_45061).Sup.m_type = NTI45008;
(*Result_45061).Mode = Mode_45023;
(*Result_45061).Counter = 0;
asgnRefNoCycle((void**) &(*Result_45061).Data, (TY45006*) newSeq(NTI45006, 64));
I_45089 = 0;
I_45089 = 0;
while (1) {
if (!(I_45089 < (Keyvaluepairs_45022Len0-1))) goto LA1;
Put_45024(Result_45061, Keyvaluepairs_45022[I_45089], Keyvaluepairs_45022[(NI64)(I_45089 + 1)]);
I_45089 += 2;
} LA1: ;
return Result_45061;
}
N_NIMCALL(NimStringDesc*, Get_45029)(TY45008* T_45031, NimStringDesc* Key_45032) {
NimStringDesc* Result_45153;
NI Index_45154;
Result_45153 = 0;
Index_45154 = 0;
Index_45154 = Rawget_45142(T_45031, Key_45032);
if (!(0 <= Index_45154)) goto LA2;
Result_45153 = copyString((*T_45031).Data->data[Index_45154].Val);
goto LA1;
LA2: ;
Result_45153 = copyString(((NimStringDesc*) &TMP196680));
LA1: ;
return Result_45153;
}
N_NIMCALL(NIM_BOOL, Haskey_45033)(TY45008* T_45035, NimStringDesc* Key_45036) {
NIM_BOOL Result_45161;
NI LOC1;
Result_45161 = 0;
LOC1 = Rawget_45142(T_45035, Key_45036);
Result_45161 = (0 <= LOC1);
return Result_45161;
}
N_NOINLINE(void, nstrtabsInit)(void) {
}


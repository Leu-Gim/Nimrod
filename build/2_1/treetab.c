/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY55575 TY55575;
typedef struct TY55525 TY55525;
typedef struct TY55573 TY55573;
typedef struct TY55571 TY55571;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55551 TY55551;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY47532 TY47532;
typedef struct TY55547 TY55547;
typedef struct TY54011 TY54011;
typedef struct TY55519 TY55519;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55529 TY55529;
typedef struct TY55527 TY55527;
typedef struct TY55539 TY55539;
typedef struct TY52008 TY52008;
typedef struct TY55543 TY55543;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY55549 TY55549;
typedef struct TY43013 TY43013;
struct TY55571 {
NI H;
TY55525* Key;
NI Val;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY47532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55525 {
TY55551* Typ;
NimStringDesc* Comment;
TY47532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY55547* Sym;
} S4;
struct {TY54011* Ident;
} S5;
struct {TY55519* Sons;
} S6;
} KindU;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY55529 {
TNimType* m_type;
NI Counter;
TY55527* Data;
};
struct TY55539 {
NU8 K;
NU8 S;
NU8 Flags;
TY55551* T;
TY52008* R;
NI A;
};
struct TY55547 {
  TY54005 Sup;
NU8 Kind;
NU8 Magic;
TY55551* Typ;
TY54011* Name;
TY47532 Info;
TY55547* Owner;
NU32 Flags;
TY55529 Tab;
TY55525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY55539 Loc;
TY55543* Annex;
};
struct TY55575 {
NI Counter;
TY55573* Data;
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
struct TY55551 {
  TY54005 Sup;
NU8 Kind;
TY55549* Sons;
TY55525* N;
NU8 Flags;
NU8 Callconv;
TY55547* Owner;
TY55547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY55539 Loc;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY55543 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55525* Path;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY55573 {
  TGenericSeq Sup;
  TY55571 data[SEQ_DECL_SIZE];
};
struct TY55519 {
  TGenericSeq Sup;
  TY55525* data[SEQ_DECL_SIZE];
};
struct TY55527 {
  TGenericSeq Sup;
  TY55547* data[SEQ_DECL_SIZE];
};
struct TY55549 {
  TGenericSeq Sup;
  TY55551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, Hashtree_105029)(TY55525* N_105031);
N_NIMCALL(NI, Conchash_44040)(NI H_44042, NI Val_44043);
N_NIMCALL(NI, Gethashstr_44031)(NimStringDesc* S_44033);
N_NIMCALL(NI, Sonslen_55803)(TY55525* N_55805);
N_NIMCALL(NI, Nodetablerawget_105413)(TY55575 T_105415, NI K_105416, TY55525* Key_105417);
N_NIMCALL(NIM_BOOL, Treesequivalent_105202)(TY55525* A_105204, TY55525* B_105205);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18647, NimStringDesc* B_18648);
N_NIMCALL(NIM_BOOL, Sametypeornil_96052)(TY55551* A_96054, TY55551* B_96055);
N_NIMCALL(NI, Nexttry_59213)(NI H_59215, NI Maxhash_59216);
N_NIMCALL(NIM_BOOL, Mustrehash_59209)(NI Length_59211, NI Counter_59212);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(void, Nodetablerawinsert_105442)(TY55573** Data_105445, NI K_105446, TY55525* Key_105447, NI Val_105448);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
extern TNimType* NTI55573; /* TNodePairSeq */
extern TY11190 Gch_11210;
N_NIMCALL(NI, Hashtree_105029)(TY55525* N_105031) {
NI Result_105032;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NI LOC14;
NI I_105183;
NI HEX3Atmp_105197;
NI LOC15;
NI Res_105199;
NI LOC17;
Result_105032 = 0;
Result_105032 = 0;
if (!(N_105031 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
Result_105032 = (*N_105031).Kind;
switch ((*N_105031).Kind) {
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
break;
case ((NU8) 2):
Result_105032 = Conchash_44040(Result_105032, (*(*N_105031).KindU.S5.Ident).H);
break;
case ((NU8) 3):
Result_105032 = Conchash_44040(Result_105032, (*(*(*N_105031).KindU.S4.Sym).Name).H);
break;
case ((NU8) 5) ... ((NU8) 10):
LOC5 = ((-2147483647 -1) <= (*N_105031).KindU.S1.Intval);
if (!(LOC5)) goto LA6;
LOC5 = ((*N_105031).KindU.S1.Intval <= 2147483647);
LA6: ;
if (!LOC5) goto LA7;
Result_105032 = Conchash_44040(Result_105032, ((NI) ((*N_105031).KindU.S1.Intval)));
LA7: ;
break;
case ((NU8) 11) ... ((NU8) 13):
LOC10 = (-1.00000e+06 <= ((NF) ((*N_105031).KindU.S2.Floatval)));
if (!(LOC10)) goto LA11;
LOC10 = (((NF) ((*N_105031).KindU.S2.Floatval)) <= 1.00000e+06);
LA11: ;
if (!LOC10) goto LA12;
Result_105032 = Conchash_44040(Result_105032, float64ToInt32(((NF) ((*N_105031).KindU.S2.Floatval))));
LA12: ;
break;
case ((NU8) 14) ... ((NU8) 16):
LOC14 = Gethashstr_44031((*N_105031).KindU.S3.Strval);
Result_105032 = Conchash_44040(Result_105032, LOC14);
break;
default:
I_105183 = 0;
HEX3Atmp_105197 = 0;
LOC15 = Sonslen_55803(N_105031);
HEX3Atmp_105197 = (NI32)(LOC15 - 1);
Res_105199 = 0;
Res_105199 = 0;
while (1) {
if (!(Res_105199 <= HEX3Atmp_105197)) goto LA16;
I_105183 = Res_105199;
LOC17 = Hashtree_105029((*N_105031).KindU.S6.Sons->data[I_105183]);
Result_105032 = Conchash_44040(Result_105032, LOC17);
Res_105199 += 1;
} LA16: ;
break;
}
BeforeRet: ;
return Result_105032;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18647, NimStringDesc* B_18648) {
NIM_BOOL Result_18649;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
Result_18649 = 0;
if (!(A_18647 == B_18648)) goto LA2;
Result_18649 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18647 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18648 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18649 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18647).Sup.len == (*B_18648).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18647).data)), ((NCSTRING) ((*B_18648).data)), ((int) ((NI32)((*A_18647).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18649 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18649;
}
N_NIMCALL(NIM_BOOL, Treesequivalent_105202)(TY55525* A_105204, TY55525* B_105205) {
NIM_BOOL Result_105206;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC11;
NI LOC12;
NI I_105382;
NI HEX3Atmp_105408;
NI LOC15;
NI Res_105410;
NIM_BOOL LOC18;
Result_105206 = 0;
Result_105206 = NIM_FALSE;
if (!(A_105204 == B_105205)) goto LA2;
Result_105206 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_105204 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_105205 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_105204).Kind == (*B_105205).Kind);
LA7: ;
if (!LOC4) goto LA8;
switch ((*A_105204).Kind) {
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
Result_105206 = NIM_TRUE;
break;
case ((NU8) 3):
Result_105206 = ((*(*A_105204).KindU.S4.Sym).Sup.Id == (*(*B_105205).KindU.S4.Sym).Sup.Id);
break;
case ((NU8) 2):
Result_105206 = ((*(*A_105204).KindU.S5.Ident).Sup.Id == (*(*B_105205).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
Result_105206 = ((*A_105204).KindU.S1.Intval == (*B_105205).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
Result_105206 = (((NF) ((*A_105204).KindU.S2.Floatval)) == ((NF) ((*B_105205).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
Result_105206 = eqStrings((*A_105204).KindU.S3.Strval, (*B_105205).KindU.S3.Strval);
break;
default:
LOC11 = Sonslen_55803(A_105204);
LOC12 = Sonslen_55803(B_105205);
if (!(LOC11 == LOC12)) goto LA13;
I_105382 = 0;
HEX3Atmp_105408 = 0;
LOC15 = Sonslen_55803(A_105204);
HEX3Atmp_105408 = (NI32)(LOC15 - 1);
Res_105410 = 0;
Res_105410 = 0;
while (1) {
if (!(Res_105410 <= HEX3Atmp_105408)) goto LA16;
I_105382 = Res_105410;
LOC18 = Treesequivalent_105202((*A_105204).KindU.S6.Sons->data[I_105382], (*B_105205).KindU.S6.Sons->data[I_105382]);
if (!!(LOC18)) goto LA19;
goto BeforeRet;
LA19: ;
Res_105410 += 1;
} LA16: ;
Result_105206 = NIM_TRUE;
LA13: ;
break;
}
if (!Result_105206) goto LA22;
Result_105206 = Sametypeornil_96052((*A_105204).Typ, (*B_105205).Typ);
LA22: ;
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
return Result_105206;
}
N_NIMCALL(NI, Nodetablerawget_105413)(TY55575 T_105415, NI K_105416, TY55525* Key_105417) {
NI Result_105418;
NI H_105419;
NIM_BOOL LOC3;
Result_105418 = 0;
H_105419 = 0;
H_105419 = (NI32)(K_105416 & (T_105415.Data->Sup.len-1));
while (1) {
if (!!((T_105415.Data->data[H_105419].Key == NIM_NIL))) goto LA1;
LOC3 = (T_105415.Data->data[H_105419].H == K_105416);
if (!(LOC3)) goto LA4;
LOC3 = Treesequivalent_105202(T_105415.Data->data[H_105419].Key, Key_105417);
LA4: ;
if (!LOC3) goto LA5;
Result_105418 = H_105419;
goto BeforeRet;
LA5: ;
H_105419 = Nexttry_59213(H_105419, (T_105415.Data->Sup.len-1));
} LA1: ;
Result_105418 = -1;
BeforeRet: ;
return Result_105418;
}
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
N_NIMCALL(void, Nodetablerawinsert_105442)(TY55573** Data_105445, NI K_105446, TY55525* Key_105447, NI Val_105448) {
NI H_105449;
H_105449 = 0;
H_105449 = (NI32)(K_105446 & ((*Data_105445)->Sup.len-1));
while (1) {
if (!!(((*Data_105445)->data[H_105449].Key == NIM_NIL))) goto LA1;
H_105449 = Nexttry_59213(H_105449, ((*Data_105445)->Sup.len-1));
} LA1: ;
(*Data_105445)->data[H_105449].H = K_105446;
asgnRefNoCycle((void**) &(*Data_105445)->data[H_105449].Key, Key_105447);
(*Data_105445)->data[H_105449].Val = Val_105448;
}
N_NIMCALL(NI, Nodetabletestorset_105023)(TY55575* T_105026, TY55525* Key_105027, NI Val_105028) {
NI Result_105581;
NI Index_105582;
TY55573* N_105583;
NI K_105584;
NIM_BOOL LOC5;
NI I_105637;
NI HEX3Atmp_105673;
NI Res_105675;
TY55573* LOC12;
Result_105581 = 0;
Index_105582 = 0;
N_105583 = 0;
K_105584 = 0;
K_105584 = Hashtree_105029(Key_105027);
Index_105582 = Nodetablerawget_105413((*T_105026), K_105584, Key_105027);
if (!(0 <= Index_105582)) goto LA2;
Result_105581 = (*T_105026).Data->data[Index_105582].Val;
goto LA1;
LA2: ;
LOC5 = Mustrehash_59209((*T_105026).Data->Sup.len, (*T_105026).Counter);
if (!LOC5) goto LA6;
N_105583 = (TY55573*) newSeq(NTI55573, (NI32)((*T_105026).Data->Sup.len * 2));
I_105637 = 0;
HEX3Atmp_105673 = 0;
HEX3Atmp_105673 = ((*T_105026).Data->Sup.len-1);
Res_105675 = 0;
Res_105675 = 0;
while (1) {
if (!(Res_105675 <= HEX3Atmp_105673)) goto LA8;
I_105637 = Res_105675;
if (!!(((*T_105026).Data->data[I_105637].Key == NIM_NIL))) goto LA10;
Nodetablerawinsert_105442(&N_105583, (*T_105026).Data->data[I_105637].H, (*T_105026).Data->data[I_105637].Key, (*T_105026).Data->data[I_105637].Val);
LA10: ;
Res_105675 += 1;
} LA8: ;
LOC12 = 0;
LOC12 = (*T_105026).Data;
unsureAsgnRef((void**) &(*T_105026).Data, N_105583);
N_105583 = LOC12;
LA6: ;
Nodetablerawinsert_105442(&(*T_105026).Data, K_105584, Key_105027, Val_105028);
Result_105581 = Val_105028;
(*T_105026).Counter += 1;
LA1: ;
return Result_105581;
}
N_NOINLINE(void, treetabInit)(void) {
}


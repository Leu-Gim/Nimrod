/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY55223 TY55223;
typedef struct TY55221 TY55221;
typedef struct TY55219 TY55219;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51547 TY51547;
typedef struct TY51529 TY51529;
typedef struct TY51527 TY51527;
typedef struct TY50011 TY50011;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY51551 TY51551;
typedef struct TY43532 TY43532;
typedef struct TY51525 TY51525;
typedef struct TY51539 TY51539;
typedef struct TY48008 TY48008;
typedef struct TY51543 TY51543;
typedef struct TY10602 TY10602;
typedef struct TY10614 TY10614;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10610 TY10610;
typedef struct TY8004 TY8004;
typedef struct TY10988 TY10988;
typedef struct TY55079 TY55079;
typedef struct TY51563 TY51563;
typedef struct TY51561 TY51561;
typedef struct TY51559 TY51559;
typedef struct TY55107 TY55107;
typedef struct TY55109 TY55109;
typedef struct TY55092 TY55092;
typedef struct TY51569 TY51569;
typedef struct TY51567 TY51567;
typedef struct TY51565 TY51565;
typedef struct TY51519 TY51519;
typedef struct TY51549 TY51549;
typedef struct TY39013 TY39013;
struct TY55219 {
NI Key;
NI Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY55223 {
NI Counter;
TY55221* Data;
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
struct TY51529 {
TNimType* m_type;
NI Counter;
TY51527* Data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
struct TY43532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY51539 {
NU8 K;
NU8 S;
NU8 Flags;
TY51551* T;
TY48008* R;
NI A;
};
struct TY51547 {
  TY50005 Sup;
NU8 Kind;
NU8 Magic;
TY51551* Typ;
TY50011* Name;
TY43532 Info;
TY51547* Owner;
NU32 Flags;
TY51529 Tab;
TY51525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY51539 Loc;
TY51543* Annex;
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
struct TY55079 {
NI H;
};
struct TY51559 {
TY50005* Key;
TNimObject* Val;
};
struct TY51563 {
NI Counter;
TY51561* Data;
};
struct TY55107 {
NI Tos;
TY55109* Stack;
};
struct TY55092 {
NI H;
TY50011* Name;
};
struct TY51565 {
TY50005* Key;
TY51525* Val;
};
struct TY51569 {
NI Counter;
TY51567* Data;
};
struct TY51525 {
TY51551* Typ;
NimStringDesc* Comment;
TY43532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY51547* Sym;
} S4;
struct {TY50011* Ident;
} S5;
struct {TY51519* Sons;
} S6;
} KindU;
};
struct TY51551 {
  TY50005 Sup;
NU8 Kind;
TY51549* Sons;
TY51525* N;
NU8 Flags;
NU8 Callconv;
TY51547* Owner;
TY51547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY51539 Loc;
};
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY51543 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51525* Path;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY55221 {
  TGenericSeq Sup;
  TY55219 data[SEQ_DECL_SIZE];
};
struct TY51527 {
  TGenericSeq Sup;
  TY51547* data[SEQ_DECL_SIZE];
};
struct TY51561 {
  TGenericSeq Sup;
  TY51559 data[SEQ_DECL_SIZE];
};
struct TY55109 {
  TGenericSeq Sup;
  TY51529 data[SEQ_DECL_SIZE];
};
struct TY51567 {
  TGenericSeq Sup;
  TY51565 data[SEQ_DECL_SIZE];
};
struct TY51519 {
  TGenericSeq Sup;
  TY51525* data[SEQ_DECL_SIZE];
};
struct TY51549 {
  TGenericSeq Sup;
  TY51551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14004, NI Len_14005);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13026, void* Src_13027);
N_NIMCALL(NI, Nexttry_55213)(NI H_55215, NI Maxhash_55216);
N_NIMCALL(NIM_BOOL, Mustrehash_55209)(NI Length_55211, NI Counter_55212);
N_NIMCALL(void, Strtableenlarge_57357)(TY51529* T_57360);
N_NIMCALL(void, Strtablerawinsert_57311)(TY51527** Data_57314, TY51547* N_57315);
N_NIMCALL(void, Internalerror_43567)(TY43532 Info_43569, NimStringDesc* Errmsg_43570);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18592, NimStringDesc* Src_18593);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18487);
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015);
static N_INLINE(void, Incref_13002)(TY10602* C_13004);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418);
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054);
N_NOINLINE(void, Incl_10874)(TY10614* S_10877, TY10602* Cell_10878);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(void, Decref_12801)(TY10602* C_12803);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(TY51547*, Nextiter_55086)(TY55079* Ti_55089, TY51529* Tab_55090);
N_NIMCALL(NI, Iitablerawget_58157)(TY55223 T_58159, NI Key_58160);
N_NIMCALL(void, Iitablerawinsert_58176)(TY55221** Data_58179, NI Key_58180, NI Val_58181);
N_NIMCALL(NI, Idtablerawget_57778)(TY51563 T_57780, NI Key_57781);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
N_NIMCALL(void, Idtablerawinsert_57831)(TY51561** Data_57834, TY50005* Key_57835, TNimObject* Val_57836);
N_NIMCALL(TY51547*, Strtableget_55069)(TY51529* T_55071, TY50011* Name_55072);
N_NIMCALL(TY51547*, Nextidentiter_55101)(TY55092* Ti_55104, TY51529* Tab_55105);
N_NIMCALL(NI, Idnodetablerawget_57967)(TY51569 T_57969, TY50005* Key_57970);
N_NIMCALL(void, Idnodetablerawinsert_57995)(TY51567** Data_57998, TY50005* Key_57999, TY51525* Val_58000);
N_NIMCALL(NI, Sonslen_51803)(TY51525* N_51805);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18803, NI Elemsize_18804, NI Newlen_18805);
N_NIMCALL(void, Initstrtable_51746)(TY51529* X_51749);
N_NIMCALL(NU8, Symtabadduniqueat_55143)(TY55107* Tab_55146, TY51547* E_55147, NI At_55148);
N_NIMCALL(void, Strtableadd_55064)(TY51529* T_55067, TY51547* N_55068);
N_NIMCALL(NimStringDesc*, Ropetostr_48066)(TY48008* P_48068);
N_NIMCALL(TY48008*, Debugtype_56411)(TY51551* N_56413);
N_NIMCALL(TY48008*, Torope_48046)(NimStringDesc* S_48048);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_19579, TNimType* Typ_19580);
N_NIMCALL(void, App_48036)(TY48008** A_48039, NimStringDesc* B_48040);
N_NIMCALL(NI, Sonslen_51806)(TY51551* N_51808);
N_NIMCALL(void, App_48031)(TY48008** A_48034, TY48008* B_48035);
N_NIMCALL(TY51547*, Lookupinrecord_55202)(TY51525* N_55204, TY50011* Field_55205);
N_NIMCALL(TY51525*, Lastson_51809)(TY51525* N_51811);
N_NIMCALL(void, Writeln_56812)(FILE* F_56815, NimStringDesc* X_56816);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
STRING_LITERAL(TMP193621, "StrTableRawInsert: ", 19);
STRING_LITERAL(TMP194069, "getSymFromList", 14);
STRING_LITERAL(TMP194152, "null", 4);
STRING_LITERAL(TMP194153, " ", 1);
STRING_LITERAL(TMP194154, "(", 1);
STRING_LITERAL(TMP194155, ", ", 2);
STRING_LITERAL(TMP194156, ")", 1);
STRING_LITERAL(TMP194694, "lookupInRecord", 14);
STRING_LITERAL(TMP194695, "lookupInRecord(record case branch)", 34);
STRING_LITERAL(TMP194696, "lookupInRecord()", 16);
STRING_LITERAL(TMP195503, "\015\012", 2);
extern TNimType* NTI55221; /* TIIPairSeq */
extern TNimType* NTI51527; /* TSymSeq */
extern TY10990 Gch_11010;
extern TNimType* NTI51561; /* TIdPairSeq */
extern TNimType* NTI55109; /* seq[TStrTable] */
extern TNimType* NTI51567; /* TIdNodePairSeq */
extern TNimType* NTI51162; /* TTypeKind */
N_NIMCALL(void, Initiitable_55228)(TY55223* X_55231) {
NI I_58151;
NI Res_58154;
(*X_55231).Counter = 0;
unsureAsgnRef((void**) &(*X_55231).Data, (TY55221*) newSeq(NTI55221, 8));
I_58151 = 0;
Res_58154 = 0;
Res_58154 = 0;
while (1) {
if (!(Res_58154 <= 7)) goto LA1;
I_58151 = Res_58154;
(*X_55231).Data->data[I_58151].Key = (IL64(-9223372036854775807) - IL64(1));
Res_58154 += 1;
} LA1: ;
}
N_NIMCALL(NI, Nexttry_55213)(NI H_55215, NI Maxhash_55216) {
NI Result_56868;
Result_56868 = 0;
Result_56868 = (NI64)((NI64)((NI64)(5 * H_55215) + 1) & Maxhash_55216);
return Result_56868;
}
N_NIMCALL(TY51547*, Strtableget_55069)(TY51529* T_55071, TY50011* Name_55072) {
TY51547* Result_57507;
NI H_57508;
Result_57507 = 0;
H_57508 = 0;
H_57508 = (NI64)((*Name_55072).H & ((*T_55071).Data->Sup.len-1));
while (1) {
Result_57507 = (*T_55071).Data->data[H_57508];
if (!(Result_57507 == NIM_NIL)) goto LA3;
goto LA1;
LA3: ;
if (!((*(*Result_57507).Name).Sup.Id == (*Name_55072).Sup.Id)) goto LA6;
goto LA1;
LA6: ;
H_57508 = Nexttry_55213(H_57508, ((*T_55071).Data->Sup.len-1));
} LA1: ;
return Result_57507;
}
N_NIMCALL(NIM_BOOL, Mustrehash_55209)(NI Length_55211, NI Counter_55212) {
NIM_BOOL Result_55536;
NIM_BOOL LOC1;
Result_55536 = 0;
LOC1 = ((NI64)(Length_55211 * 2) < (NI64)(Counter_55212 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI64)(Length_55211 - Counter_55212) < 4);
LA2: ;
Result_55536 = LOC1;
return Result_55536;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18592, NimStringDesc* Src_18593) {
memcpy(((NCSTRING) (&(*Dest_18592).data[((*Dest_18592).Sup.len)-0])), ((NCSTRING) ((*Src_18593).data)), ((NI32) ((NI64)((NI64)((*Src_18593).Sup.len + 1) * 1))));
(*Dest_18592).Sup.len += (*Src_18593).Sup.len;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7607;
Result_7607 = 0;
(*Memloc_3004) += X_3005;
Result_7607 = (*Memloc_3004);
return Result_7607;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418) {
NIM_BOOL Result_11419;
Result_11419 = 0;
Result_11419 = !((((*(*C_11418).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11419;
}
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054) {
Incl_10874(&Gch_11010.Cycleroots, C_12054);
}
static N_INLINE(void, Incref_13002)(TY10602* C_13004) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_13004).Refcount, 8);
LOC3 = Canbecycleroot_11416(C_13004);
if (!LOC3) goto LA4;
Rtladdcycleroot_12052(C_13004);
LA4: ;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11414))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
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
static N_INLINE(void, Decref_12801)(TY10602* C_12803) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_12803).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12401(C_12803);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11416(C_12803);
if (!LOC5) goto LA6;
Rtladdcycleroot_12052(C_12803);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015) {
TY10602* LOC4;
TY10602* LOC8;
if (!!((Src_13015 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11412(Src_13015);
Incref_13002(LOC4);
LA2: ;
if (!!(((*Dest_13014) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11412((*Dest_13014));
Decref_12801(LOC8);
LA6: ;
(*Dest_13014) = Src_13015;
}
N_NIMCALL(void, Strtablerawinsert_57311)(TY51527** Data_57314, TY51547* N_57315) {
NI H_57316;
NimStringDesc* LOC5;
H_57316 = 0;
H_57316 = (NI64)((*(*N_57315).Name).H & ((*Data_57314)->Sup.len-1));
while (1) {
if (!!(((*Data_57314)->data[H_57316] == NIM_NIL))) goto LA1;
if (!((*Data_57314)->data[H_57316] == N_57315)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString((*(*N_57315).Name).S->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP193621));
appendString(LOC5, (*(*N_57315).Name).S);
Internalerror_43567((*N_57315).Info, LOC5);
LA3: ;
H_57316 = Nexttry_55213(H_57316, ((*Data_57314)->Sup.len-1));
} LA1: ;
asgnRef((void**) &(*Data_57314)->data[H_57316], N_57315);
}
N_NIMCALL(void, Strtableenlarge_57357)(TY51529* T_57360) {
TY51527* N_57361;
NI I_57391;
NI HEX3Atmp_57414;
NI Res_57416;
TY51527* LOC5;
N_57361 = 0;
N_57361 = (TY51527*) newSeq(NTI51527, (NI64)((*T_57360).Data->Sup.len * 2));
I_57391 = 0;
HEX3Atmp_57414 = 0;
HEX3Atmp_57414 = ((*T_57360).Data->Sup.len-1);
Res_57416 = 0;
Res_57416 = 0;
while (1) {
if (!(Res_57416 <= HEX3Atmp_57414)) goto LA1;
I_57391 = Res_57416;
if (!!(((*T_57360).Data->data[I_57391] == NIM_NIL))) goto LA3;
Strtablerawinsert_57311(&N_57361, (*T_57360).Data->data[I_57391]);
LA3: ;
Res_57416 += 1;
} LA1: ;
LOC5 = 0;
LOC5 = (*T_57360).Data;
unsureAsgnRef((void**) &(*T_57360).Data, N_57361);
N_57361 = LOC5;
}
N_NIMCALL(void, Strtableadd_55064)(TY51529* T_55067, TY51547* N_55068) {
NIM_BOOL LOC2;
LOC2 = Mustrehash_55209((*T_55067).Data->Sup.len, (*T_55067).Counter);
if (!LOC2) goto LA3;
Strtableenlarge_57357(T_55067);
LA3: ;
Strtablerawinsert_57311(&(*T_55067).Data, N_55068);
(*T_55067).Counter += 1;
}
N_NIMCALL(TY51547*, Nextiter_55086)(TY55079* Ti_55089, TY51529* Tab_55090) {
TY51547* Result_57569;
Result_57569 = 0;
Result_57569 = NIM_NIL;
while (1) {
if (!((*Ti_55089).H <= ((*Tab_55090).Data->Sup.len-1))) goto LA1;
Result_57569 = (*Tab_55090).Data->data[(*Ti_55089).H];
(*Ti_55089).H += 1;
if (!!((Result_57569 == NIM_NIL))) goto LA3;
goto LA1;
LA3: ;
} LA1: ;
return Result_57569;
}
N_NIMCALL(TY51547*, Inittabiter_55081)(TY55079* Ti_55084, TY51529* Tab_55085) {
TY51547* Result_57561;
Result_57561 = 0;
(*Ti_55084).H = 0;
if (!((*Tab_55085).Counter == 0)) goto LA2;
Result_57561 = NIM_NIL;
goto LA1;
LA2: ;
Result_57561 = Nextiter_55086(Ti_55084, Tab_55085);
LA1: ;
return Result_57561;
}
N_NIMCALL(NI, Iitablerawget_58157)(TY55223 T_58159, NI Key_58160) {
NI Result_58161;
NI H_58162;
Result_58161 = 0;
H_58162 = 0;
H_58162 = (NI64)(Key_58160 & (T_58159.Data->Sup.len-1));
while (1) {
if (!!((T_58159.Data->data[H_58162].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA1;
if (!(T_58159.Data->data[H_58162].Key == Key_58160)) goto LA3;
Result_58161 = H_58162;
goto BeforeRet;
LA3: ;
H_58162 = Nexttry_55213(H_58162, (T_58159.Data->Sup.len-1));
} LA1: ;
Result_58161 = -1;
BeforeRet: ;
return Result_58161;
}
N_NIMCALL(void, Iitablerawinsert_58176)(TY55221** Data_58179, NI Key_58180, NI Val_58181) {
NI H_58182;
H_58182 = 0;
H_58182 = (NI64)(Key_58180 & ((*Data_58179)->Sup.len-1));
while (1) {
if (!!(((*Data_58179)->data[H_58182].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA1;
H_58182 = Nexttry_55213(H_58182, ((*Data_58179)->Sup.len-1));
} LA1: ;
(*Data_58179)->data[H_58182].Key = Key_58180;
(*Data_58179)->data[H_58182].Val = Val_58181;
}
N_NIMCALL(void, Iitableput_55236)(TY55223* T_55239, NI Key_55240, NI Val_55241) {
NI Index_58196;
TY55221* N_58197;
NIM_BOOL LOC5;
NI I_58241;
NI HEX3Atmp_58276;
NI Res_58278;
NI I_58249;
NI HEX3Atmp_58282;
NI Res_58284;
TY55221* LOC13;
Index_58196 = 0;
N_58197 = 0;
Index_58196 = Iitablerawget_58157((*T_55239), Key_55240);
if (!(0 <= Index_58196)) goto LA2;
(*T_55239).Data->data[Index_58196].Val = Val_55241;
goto LA1;
LA2: ;
LOC5 = Mustrehash_55209((*T_55239).Data->Sup.len, (*T_55239).Counter);
if (!LOC5) goto LA6;
N_58197 = (TY55221*) newSeq(NTI55221, (NI64)((*T_55239).Data->Sup.len * 2));
I_58241 = 0;
HEX3Atmp_58276 = 0;
HEX3Atmp_58276 = (N_58197->Sup.len-1);
Res_58278 = 0;
Res_58278 = 0;
while (1) {
if (!(Res_58278 <= HEX3Atmp_58276)) goto LA8;
I_58241 = Res_58278;
N_58197->data[I_58241].Key = (IL64(-9223372036854775807) - IL64(1));
Res_58278 += 1;
} LA8: ;
I_58249 = 0;
HEX3Atmp_58282 = 0;
HEX3Atmp_58282 = ((*T_55239).Data->Sup.len-1);
Res_58284 = 0;
Res_58284 = 0;
while (1) {
if (!(Res_58284 <= HEX3Atmp_58282)) goto LA9;
I_58249 = Res_58284;
if (!!(((*T_55239).Data->data[I_58249].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA11;
Iitablerawinsert_58176(&N_58197, (*T_55239).Data->data[I_58249].Key, (*T_55239).Data->data[I_58249].Val);
LA11: ;
Res_58284 += 1;
} LA9: ;
LOC13 = 0;
LOC13 = (*T_55239).Data;
unsureAsgnRef((void**) &(*T_55239).Data, N_58197);
N_58197 = LOC13;
LA6: ;
Iitablerawinsert_58176(&(*T_55239).Data, Key_55240, Val_55241);
(*T_55239).Counter += 1;
LA1: ;
}
N_NIMCALL(NI, Idtablerawget_57778)(TY51563 T_57780, NI Key_57781) {
NI Result_57782;
NI H_57783;
Result_57782 = 0;
H_57783 = 0;
H_57783 = (NI64)(Key_57781 & (T_57780.Data->Sup.len-1));
while (1) {
if (!!((T_57780.Data->data[H_57783].Key == NIM_NIL))) goto LA1;
if (!((*T_57780.Data->data[H_57783].Key).Id == Key_57781)) goto LA3;
Result_57782 = H_57783;
goto BeforeRet;
LA3: ;
H_57783 = Nexttry_55213(H_57783, (T_57780.Data->Sup.len-1));
} LA1: ;
Result_57782 = -1;
BeforeRet: ;
return Result_57782;
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
N_NIMCALL(void, Idtablerawinsert_57831)(TY51561** Data_57834, TY50005* Key_57835, TNimObject* Val_57836) {
NI H_57837;
H_57837 = 0;
H_57837 = (NI64)((*Key_57835).Id & ((*Data_57834)->Sup.len-1));
while (1) {
if (!!(((*Data_57834)->data[H_57837].Key == NIM_NIL))) goto LA1;
H_57837 = Nexttry_55213(H_57837, ((*Data_57834)->Sup.len-1));
} LA1: ;
asgnRefNoCycle((void**) &(*Data_57834)->data[H_57837].Key, Key_57835);
asgnRefNoCycle((void**) &(*Data_57834)->data[H_57837].Val, Val_57836);
}
N_NIMCALL(void, Idtableput_55174)(TY51563* T_55177, TY50005* Key_55178, TNimObject* Val_55179) {
NI Index_57869;
TY51561* N_57870;
NIM_BOOL LOC5;
NI I_57923;
NI HEX3Atmp_57959;
NI Res_57961;
TY51561* LOC12;
Index_57869 = 0;
N_57870 = 0;
Index_57869 = Idtablerawget_57778((*T_55177), (*Key_55178).Id);
if (!(0 <= Index_57869)) goto LA2;
asgnRefNoCycle((void**) &(*T_55177).Data->data[Index_57869].Val, Val_55179);
goto LA1;
LA2: ;
LOC5 = Mustrehash_55209((*T_55177).Data->Sup.len, (*T_55177).Counter);
if (!LOC5) goto LA6;
N_57870 = (TY51561*) newSeq(NTI51561, (NI64)((*T_55177).Data->Sup.len * 2));
I_57923 = 0;
HEX3Atmp_57959 = 0;
HEX3Atmp_57959 = ((*T_55177).Data->Sup.len-1);
Res_57961 = 0;
Res_57961 = 0;
while (1) {
if (!(Res_57961 <= HEX3Atmp_57959)) goto LA8;
I_57923 = Res_57961;
if (!!(((*T_55177).Data->data[I_57923].Key == NIM_NIL))) goto LA10;
Idtablerawinsert_57831(&N_57870, (*T_55177).Data->data[I_57923].Key, (*T_55177).Data->data[I_57923].Val);
LA10: ;
Res_57961 += 1;
} LA8: ;
LOC12 = 0;
LOC12 = (*T_55177).Data;
unsureAsgnRef((void**) &(*T_55177).Data, N_57870);
N_57870 = LOC12;
LA6: ;
Idtablerawinsert_57831(&(*T_55177).Data, Key_55178, Val_55179);
(*T_55177).Counter += 1;
LA1: ;
}
N_NIMCALL(TNimObject*, Idtableget_55170)(TY51563 T_55172, NI Key_55173) {
TNimObject* Result_57827;
NI Index_57828;
Result_57827 = 0;
Index_57828 = 0;
Index_57828 = Idtablerawget_57778(T_55172, Key_55173);
if (!(0 <= Index_57828)) goto LA2;
Result_57827 = T_55172.Data->data[Index_57828].Val;
goto LA1;
LA2: ;
Result_57827 = NIM_NIL;
LA1: ;
return Result_57827;
}
N_NIMCALL(NI, Iitableget_55232)(TY55223 T_55234, NI Key_55235) {
NI Result_58172;
NI Index_58173;
Result_58172 = 0;
Index_58173 = 0;
Index_58173 = Iitablerawget_58157(T_55234, Key_55235);
if (!(0 <= Index_58173)) goto LA2;
Result_58172 = T_55234.Data->data[Index_58173].Val;
goto LA1;
LA2: ;
Result_58172 = (IL64(-9223372036854775807) - IL64(1));
LA1: ;
return Result_58172;
}
N_NIMCALL(void, Initsymtab_55111)(TY55107* Tab_55114) {
(*Tab_55114).Tos = 0;
unsureAsgnRef((void**) &(*Tab_55114).Stack, (TY55109*) newSeq(NTI55109, 0));
}
N_NIMCALL(TY51547*, Symtabget_55119)(TY55107 Tab_55121, TY50011* S_55122) {
TY51547* Result_57613;
NI I_57636;
NI HEX3Atmp_57649;
NI Res_57651;
Result_57613 = 0;
I_57636 = 0;
HEX3Atmp_57649 = 0;
HEX3Atmp_57649 = (NI64)(((NI) (Tab_55121.Tos)) - 1);
Res_57651 = 0;
Res_57651 = HEX3Atmp_57649;
while (1) {
if (!(0 <= Res_57651)) goto LA1;
I_57636 = Res_57651;
Result_57613 = Strtableget_55069(&Tab_55121.Stack->data[I_57636], S_55122);
if (!!((Result_57613 == NIM_NIL))) goto LA3;
goto BeforeRet;
LA3: ;
Res_57651 -= 1;
} LA1: ;
Result_57613 = NIM_NIL;
BeforeRet: ;
return Result_57613;
}
N_NIMCALL(TY51547*, Getmodule_55206)(TY51547* S_55208) {
TY51547* Result_55421;
NIM_BOOL LOC2;
Result_55421 = 0;
Result_55421 = S_55208;
while (1) {
LOC2 = !((Result_55421 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Result_55421).Kind == ((NU8) 18)));
LA3: ;
if (!LOC2) goto LA1;
Result_55421 = (*Result_55421).Owner;
} LA1: ;
return Result_55421;
}
N_NIMCALL(TY51547*, Nextidentiter_55101)(TY55092* Ti_55104, TY51529* Tab_55105) {
TY51547* Result_57537;
NI H_57538;
NI Start_57539;
Result_57537 = 0;
H_57538 = 0;
Start_57539 = 0;
H_57538 = (NI64)((*Ti_55104).H & ((*Tab_55105).Data->Sup.len-1));
Start_57539 = H_57538;
Result_57537 = (*Tab_55105).Data->data[H_57538];
while (1) {
if (!!((Result_57537 == NIM_NIL))) goto LA1;
if (!((*(*Result_57537).Name).Sup.Id == (*(*Ti_55104).Name).Sup.Id)) goto LA3;
goto LA1;
LA3: ;
H_57538 = Nexttry_55213(H_57538, ((*Tab_55105).Data->Sup.len-1));
if (!(H_57538 == Start_57539)) goto LA6;
Result_57537 = NIM_NIL;
goto LA1;
LA6: ;
Result_57537 = (*Tab_55105).Data->data[H_57538];
} LA1: ;
(*Ti_55104).H = Nexttry_55213(H_57538, ((*Tab_55105).Data->Sup.len-1));
return Result_57537;
}
N_NIMCALL(TY51547*, Initidentiter_55095)(TY55092* Ti_55098, TY51529* Tab_55099, TY50011* S_55100) {
TY51547* Result_57529;
Result_57529 = 0;
(*Ti_55098).H = (*S_55100).H;
unsureAsgnRef((void**) &(*Ti_55098).Name, S_55100);
if (!((*Tab_55099).Counter == 0)) goto LA2;
Result_57529 = NIM_NIL;
goto LA1;
LA2: ;
Result_57529 = Nextidentiter_55101(Ti_55098, Tab_55099);
LA1: ;
return Result_57529;
}
N_NIMCALL(NI, Idnodetablerawget_57967)(TY51569 T_57969, TY50005* Key_57970) {
NI Result_57971;
NI H_57972;
Result_57971 = 0;
H_57972 = 0;
H_57972 = (NI64)((*Key_57970).Id & (T_57969.Data->Sup.len-1));
while (1) {
if (!!((T_57969.Data->data[H_57972].Key == NIM_NIL))) goto LA1;
if (!((*T_57969.Data->data[H_57972].Key).Id == (*Key_57970).Id)) goto LA3;
Result_57971 = H_57972;
goto BeforeRet;
LA3: ;
H_57972 = Nexttry_55213(H_57972, (T_57969.Data->Sup.len-1));
} LA1: ;
Result_57971 = -1;
BeforeRet: ;
return Result_57971;
}
N_NIMCALL(TY51525*, Idnodetableget_55184)(TY51569 T_55186, TY50005* Key_55187) {
TY51525* Result_57991;
NI Index_57992;
Result_57991 = 0;
Index_57992 = 0;
Index_57992 = Idnodetablerawget_57967(T_55186, Key_55187);
if (!(0 <= Index_57992)) goto LA2;
Result_57991 = T_55186.Data->data[Index_57992].Val;
goto LA1;
LA2: ;
Result_57991 = NIM_NIL;
LA1: ;
return Result_57991;
}
N_NIMCALL(void, Idnodetablerawinsert_57995)(TY51567** Data_57998, TY50005* Key_57999, TY51525* Val_58000) {
NI H_58001;
H_58001 = 0;
H_58001 = (NI64)((*Key_57999).Id & ((*Data_57998)->Sup.len-1));
while (1) {
if (!!(((*Data_57998)->data[H_58001].Key == NIM_NIL))) goto LA1;
H_58001 = Nexttry_55213(H_58001, ((*Data_57998)->Sup.len-1));
} LA1: ;
asgnRefNoCycle((void**) &(*Data_57998)->data[H_58001].Key, Key_57999);
asgnRefNoCycle((void**) &(*Data_57998)->data[H_58001].Val, Val_58000);
}
N_NIMCALL(void, Idnodetableput_55188)(TY51569* T_55191, TY50005* Key_55192, TY51525* Val_55193) {
NI Index_58033;
TY51567* N_58034;
NIM_BOOL LOC5;
NI I_58087;
NI HEX3Atmp_58123;
NI Res_58125;
TY51567* LOC12;
Index_58033 = 0;
N_58034 = 0;
Index_58033 = Idnodetablerawget_57967((*T_55191), Key_55192);
if (!(0 <= Index_58033)) goto LA2;
asgnRefNoCycle((void**) &(*T_55191).Data->data[Index_58033].Val, Val_55193);
goto LA1;
LA2: ;
LOC5 = Mustrehash_55209((*T_55191).Data->Sup.len, (*T_55191).Counter);
if (!LOC5) goto LA6;
N_58034 = (TY51567*) newSeq(NTI51567, (NI64)((*T_55191).Data->Sup.len * 2));
I_58087 = 0;
HEX3Atmp_58123 = 0;
HEX3Atmp_58123 = ((*T_55191).Data->Sup.len-1);
Res_58125 = 0;
Res_58125 = 0;
while (1) {
if (!(Res_58125 <= HEX3Atmp_58123)) goto LA8;
I_58087 = Res_58125;
if (!!(((*T_55191).Data->data[I_58087].Key == NIM_NIL))) goto LA10;
Idnodetablerawinsert_57995(&N_58034, (*T_55191).Data->data[I_58087].Key, (*T_55191).Data->data[I_58087].Val);
LA10: ;
Res_58125 += 1;
} LA8: ;
LOC12 = 0;
LOC12 = (*T_55191).Data;
unsureAsgnRef((void**) &(*T_55191).Data, N_58034);
N_58034 = LOC12;
LA6: ;
Idnodetablerawinsert_57995(&(*T_55191).Data, Key_55192, Val_55193);
(*T_55191).Counter += 1;
LA1: ;
}
N_NIMCALL(TY51547*, Getsymfromlist_55197)(TY51525* List_55199, TY50011* Ident_55200, NI Start_55201) {
TY51547* Result_55466;
NI I_55474;
NI HEX3Atmp_55523;
NI LOC1;
NI Res_55525;
Result_55466 = 0;
I_55474 = 0;
HEX3Atmp_55523 = 0;
LOC1 = Sonslen_51803(List_55199);
HEX3Atmp_55523 = (NI64)(LOC1 - 1);
Res_55525 = 0;
Res_55525 = Start_55201;
while (1) {
if (!(Res_55525 <= HEX3Atmp_55523)) goto LA2;
I_55474 = Res_55525;
if (!!(((*(*List_55199).KindU.S6.Sons->data[I_55474]).Kind == ((NU8) 3)))) goto LA4;
Internalerror_43567((*List_55199).Info, ((NimStringDesc*) &TMP194069));
LA4: ;
Result_55466 = (*(*List_55199).KindU.S6.Sons->data[I_55474]).KindU.S4.Sym;
if (!((*(*Result_55466).Name).Sup.Id == (*Ident_55200).Sup.Id)) goto LA7;
goto BeforeRet;
LA7: ;
Res_55525 += 1;
} LA2: ;
Result_55466 = NIM_NIL;
BeforeRet: ;
return Result_55466;
}
N_NIMCALL(TNimObject*, Idtableget_55166)(TY51563 T_55168, TY50005* Key_55169) {
TNimObject* Result_57819;
NI Index_57820;
Result_57819 = 0;
Index_57820 = 0;
Index_57820 = Idtablerawget_57778(T_55168, (*Key_55169).Id);
if (!(0 <= Index_57820)) goto LA2;
Result_57819 = T_55168.Data->data[Index_57820].Val;
goto LA1;
LA2: ;
Result_57819 = NIM_NIL;
LA1: ;
return Result_57819;
}
N_NIMCALL(void, Openscope_55149)(TY55107* Tab_55152) {
if (!((*Tab_55152).Stack->Sup.len <= ((NI) ((*Tab_55152).Tos)))) goto LA2;
(*Tab_55152).Stack = (TY55109*) setLengthSeq(&((*Tab_55152).Stack)->Sup, sizeof(TY51529), (NI64)(((NI) ((*Tab_55152).Tos)) + 1));
LA2: ;
Initstrtable_51746(&(*Tab_55152).Stack->data[(*Tab_55152).Tos]);
(*Tab_55152).Tos += 1;
}
N_NIMCALL(NU8, Symtabadduniqueat_55143)(TY55107* Tab_55146, TY51547* E_55147, NI At_55148) {
NU8 Result_57673;
TY51547* LOC2;
Result_57673 = 0;
LOC2 = 0;
LOC2 = Strtableget_55069(&(*Tab_55146).Stack->data[At_55148], (*E_55147).Name);
if (!!((LOC2 == NIM_NIL))) goto LA3;
Result_57673 = ((NU8) 0);
goto LA1;
LA3: ;
Strtableadd_55064(&(*Tab_55146).Stack->data[At_55148], E_55147);
Result_57673 = ((NU8) 1);
LA1: ;
return Result_57673;
}
N_NIMCALL(NU8, Symtabaddunique_55138)(TY55107* Tab_55141, TY51547* E_55142) {
NU8 Result_57691;
Result_57691 = 0;
Result_57691 = Symtabadduniqueat_55143(Tab_55141, E_55142, ((NI) ((NI64)(((NI) ((*Tab_55141).Tos)) - 1))));
return Result_57691;
}
N_NIMCALL(void, Rawclosescope_55153)(TY55107* Tab_55156) {
(*Tab_55156).Tos -= 1;
}
N_NIMCALL(TY48008*, Debugtype_56411)(TY51551* N_56413) {
TY48008* Result_56414;
NIM_BOOL LOC8;
NI LOC10;
NI I_56466;
NI HEX3Atmp_56485;
NI LOC13;
NI Res_56487;
TY48008* LOC21;
Result_56414 = 0;
if (!(N_56413 == NIM_NIL)) goto LA2;
Result_56414 = Torope_48046(((NimStringDesc*) &TMP194152));
goto LA1;
LA2: ;
Result_56414 = Torope_48046(reprEnum((*N_56413).Kind, NTI51162));
if (!!(((*N_56413).Sym == NIM_NIL))) goto LA5;
App_48036(&Result_56414, ((NimStringDesc*) &TMP194153));
App_48036(&Result_56414, (*(*(*N_56413).Sym).Name).S);
LA5: ;
LOC8 = !(((*N_56413).Kind == ((NU8) 28)));
if (!(LOC8)) goto LA9;
LOC10 = Sonslen_51806(N_56413);
LOC8 = (0 < LOC10);
LA9: ;
if (!LOC8) goto LA11;
App_48036(&Result_56414, ((NimStringDesc*) &TMP194154));
I_56466 = 0;
HEX3Atmp_56485 = 0;
LOC13 = Sonslen_51806(N_56413);
HEX3Atmp_56485 = (NI64)(LOC13 - 1);
Res_56487 = 0;
Res_56487 = 0;
while (1) {
if (!(Res_56487 <= HEX3Atmp_56485)) goto LA14;
I_56466 = Res_56487;
if (!(0 < I_56466)) goto LA16;
App_48036(&Result_56414, ((NimStringDesc*) &TMP194155));
LA16: ;
if (!((*N_56413).Sons->data[I_56466] == NIM_NIL)) goto LA19;
App_48036(&Result_56414, ((NimStringDesc*) &TMP194152));
goto LA18;
LA19: ;
LOC21 = 0;
LOC21 = Debugtype_56411((*N_56413).Sons->data[I_56466]);
App_48031(&Result_56414, LOC21);
LA18: ;
Res_56487 += 1;
} LA14: ;
App_48036(&Result_56414, ((NimStringDesc*) &TMP194156));
LA11: ;
LA1: ;
return Result_56414;
}
N_NIMCALL(void, Debug_55160)(TY51551* N_55162) {
TY48008* LOC1;
NimStringDesc* LOC2;
LOC1 = 0;
LOC1 = Debugtype_56411(N_55162);
LOC2 = 0;
LOC2 = Ropetostr_48066(LOC1);
Writeln_56812(stdout, LOC2);
}
N_NIMCALL(void, Symtabaddat_55132)(TY55107* Tab_55135, TY51547* E_55136, NI At_55137) {
Strtableadd_55064(&(*Tab_55135).Stack->data[At_55137], E_55136);
}
N_NIMCALL(TY51547*, Symtablocalget_55123)(TY55107 Tab_55125, TY50011* S_55126) {
TY51547* Result_57608;
Result_57608 = 0;
Result_57608 = Strtableget_55069(&Tab_55125.Stack->data[(NI64)(((NI) (Tab_55125.Tos)) - 1)], S_55126);
return Result_57608;
}
N_NIMCALL(void, Symtabadd_55127)(TY55107* Tab_55130, TY51547* E_55131) {
Strtableadd_55064(&(*Tab_55130).Stack->data[(NI64)(((NI) ((*Tab_55130).Tos)) - 1)], E_55131);
}
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_55180)(TY51563 T_55182, TY50005* Key_55183) {
NIM_BOOL Result_57802;
NI Index_57803;
Result_57802 = 0;
Index_57803 = 0;
Index_57803 = Idtablerawget_57778(T_55182, (*Key_55183).Id);
if (!(0 <= Index_57803)) goto LA2;
Result_57802 = (T_55182.Data->data[Index_57803].Key == Key_55183);
goto LA1;
LA2: ;
Result_57802 = NIM_FALSE;
LA1: ;
return Result_57802;
}
N_NIMCALL(TY51547*, Lookupinrecord_55202)(TY51525* N_55204, TY50011* Field_55205) {
TY51547* Result_55246;
NI I_55269;
NI HEX3Atmp_55407;
NI LOC1;
NI Res_55409;
NI I_55344;
NI HEX3Atmp_55413;
NI LOC12;
NI Res_55415;
TY51525* LOC14;
Result_55246 = 0;
Result_55246 = NIM_NIL;
switch ((*N_55204).Kind) {
case ((NU8) 113):
I_55269 = 0;
HEX3Atmp_55407 = 0;
LOC1 = Sonslen_51803(N_55204);
HEX3Atmp_55407 = (NI64)(LOC1 - 1);
Res_55409 = 0;
Res_55409 = 0;
while (1) {
if (!(Res_55409 <= HEX3Atmp_55407)) goto LA2;
I_55269 = Res_55409;
Result_55246 = Lookupinrecord_55202((*N_55204).KindU.S6.Sons->data[I_55269], Field_55205);
if (!!((Result_55246 == NIM_NIL))) goto LA4;
goto BeforeRet;
LA4: ;
Res_55409 += 1;
} LA2: ;
break;
case ((NU8) 114):
if (!!(((*(*N_55204).KindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA7;
Internalerror_43567((*N_55204).Info, ((NimStringDesc*) &TMP194694));
LA7: ;
Result_55246 = Lookupinrecord_55202((*N_55204).KindU.S6.Sons->data[0], Field_55205);
if (!!((Result_55246 == NIM_NIL))) goto LA10;
goto BeforeRet;
LA10: ;
I_55344 = 0;
HEX3Atmp_55413 = 0;
LOC12 = Sonslen_51803(N_55204);
HEX3Atmp_55413 = (NI64)(LOC12 - 1);
Res_55415 = 0;
Res_55415 = 1;
while (1) {
if (!(Res_55415 <= HEX3Atmp_55413)) goto LA13;
I_55344 = Res_55415;
switch ((*(*N_55204).KindU.S6.Sons->data[I_55344]).Kind) {
case ((NU8) 75):
case ((NU8) 78):
LOC14 = 0;
LOC14 = Lastson_51809((*N_55204).KindU.S6.Sons->data[I_55344]);
Result_55246 = Lookupinrecord_55202(LOC14, Field_55205);
if (!!((Result_55246 == NIM_NIL))) goto LA16;
goto BeforeRet;
LA16: ;
break;
default:
Internalerror_43567((*N_55204).Info, ((NimStringDesc*) &TMP194695));
break;
}
Res_55415 += 1;
} LA13: ;
break;
case ((NU8) 3):
if (!((*(*(*N_55204).KindU.S4.Sym).Name).Sup.Id == (*Field_55205).Sup.Id)) goto LA19;
Result_55246 = (*N_55204).KindU.S4.Sym;
LA19: ;
break;
default:
Internalerror_43567((*N_55204).Info, ((NimStringDesc*) &TMP194696));
break;
}
BeforeRet: ;
return Result_55246;
}
N_NIMCALL(void, Writeln_56812)(FILE* F_56815, NimStringDesc* X_56816) {
Write_3658(F_56815, X_56816);
Write_3658(F_56815, ((NimStringDesc*) &TMP195503));
}
N_NOINLINE(void, astalgoInit)(void) {
}


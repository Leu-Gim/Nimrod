/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY50011 TY50011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10990 TY10990;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY8004 TY8004;
typedef struct TY10988 TY10988;
typedef TY50011* TY50039[8192];
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
struct TNimObject {
TNimType* m_type;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
N_NIMCALL(TY50011*, Getident_50023)(NCSTRING Identifier_50025, NI Length_50026, NI H_50027);
N_NIMCALL(NI, Cmpexact_50165)(NCSTRING A_50167, NCSTRING B_50168, NI Blen_50169);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NI, Cmpignorestyle_50042)(NCSTRING A_50044, NCSTRING B_50045, NI Blen_50046);
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
N_NIMCALL(NI, Getnormalizedhash_40037)(NimStringDesc* S_40039);
N_NIMCALL(TY50011*, Getident_50016)(NimStringDesc* Identifier_50018);
TY50039 Buckets_50041;
NI Wordcounter_50233;
extern TY10990 Gch_11010;
extern TNimType* NTI50009; /* PIdent */
extern TNimType* NTI50011; /* TIdent */
N_NIMCALL(NI, Cmpexact_50165)(NCSTRING A_50167, NCSTRING B_50168, NI Blen_50169) {
NI Result_50170;
NIM_CHAR Aa_50171;
NIM_CHAR Bb_50172;
NI I_50173;
NI J_50174;
NIM_BOOL LOC3;
Result_50170 = 0;
Aa_50171 = 0;
Bb_50172 = 0;
I_50173 = 0;
J_50174 = 0;
I_50173 = 0;
J_50174 = 0;
Result_50170 = 1;
while (1) {
if (!(J_50174 < Blen_50169)) goto LA1;
Aa_50171 = A_50167[I_50173];
Bb_50172 = B_50168[J_50174];
Result_50170 = (NI32)(((NU8)(Aa_50171)) - ((NU8)(Bb_50172)));
LOC3 = !((Result_50170 == 0));
if (LOC3) goto LA4;
LOC3 = ((NU8)(Aa_50171) == (NU8)(0));
LA4: ;
if (!LOC3) goto LA5;
goto LA1;
LA5: ;
I_50173 += 1;
J_50174 += 1;
} LA1: ;
if (!(Result_50170 == 0)) goto LA8;
if (!!(((NU8)(A_50167[I_50173]) == (NU8)(0)))) goto LA11;
Result_50170 = 1;
LA11: ;
LA8: ;
return Result_50170;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11414))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(NI, Cmpignorestyle_50042)(NCSTRING A_50044, NCSTRING B_50045, NI Blen_50046) {
NI Result_50047;
NIM_CHAR Aa_50048;
NIM_CHAR Bb_50049;
NI I_50050;
NI J_50051;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
Result_50047 = 0;
Aa_50048 = 0;
Bb_50049 = 0;
I_50050 = 0;
J_50051 = 0;
I_50050 = 0;
J_50051 = 0;
Result_50047 = 1;
while (1) {
if (!(J_50051 < Blen_50046)) goto LA1;
while (1) {
if (!((NU8)(A_50044[I_50050]) == (NU8)(95))) goto LA2;
I_50050 += 1;
} LA2: ;
while (1) {
if (!((NU8)(B_50045[J_50051]) == (NU8)(95))) goto LA3;
J_50051 += 1;
} LA3: ;
Aa_50048 = A_50044[I_50050];
Bb_50049 = B_50045[J_50051];
LOC5 = ((NU8)(65) <= (NU8)(Aa_50048));
if (!(LOC5)) goto LA6;
LOC5 = ((NU8)(Aa_50048) <= (NU8)(90));
LA6: ;
if (!LOC5) goto LA7;
Aa_50048 = ((NIM_CHAR) (((NI) ((NI32)(((NU8)(Aa_50048)) + 32)))));
LA7: ;
LOC10 = ((NU8)(65) <= (NU8)(Bb_50049));
if (!(LOC10)) goto LA11;
LOC10 = ((NU8)(Bb_50049) <= (NU8)(90));
LA11: ;
if (!LOC10) goto LA12;
Bb_50049 = ((NIM_CHAR) (((NI) ((NI32)(((NU8)(Bb_50049)) + 32)))));
LA12: ;
Result_50047 = (NI32)(((NU8)(Aa_50048)) - ((NU8)(Bb_50049)));
LOC15 = !((Result_50047 == 0));
if (LOC15) goto LA16;
LOC15 = ((NU8)(Aa_50048) == (NU8)(0));
LA16: ;
if (!LOC15) goto LA17;
goto LA1;
LA17: ;
I_50050 += 1;
J_50051 += 1;
} LA1: ;
if (!(Result_50047 == 0)) goto LA20;
if (!!(((NU8)(A_50044[I_50050]) == (NU8)(0)))) goto LA23;
Result_50047 = 1;
LA23: ;
LA20: ;
return Result_50047;
}
N_NIMCALL(TY50011*, Getident_50023)(NCSTRING Identifier_50025, NI Length_50026, NI H_50027) {
TY50011* Result_50239;
NI Idx_50240;
NI Id_50241;
TY50011* Last_50242;
NI LOC3;
NI LOC9;
NI I_50310;
NI HEX3Atmp_50327;
NI Res_50329;
Result_50239 = 0;
Idx_50240 = 0;
Id_50241 = 0;
Last_50242 = 0;
Idx_50240 = (NI32)(H_50027 & 8191);
Result_50239 = Buckets_50041[(Idx_50240)-0];
Last_50242 = NIM_NIL;
Id_50241 = 0;
while (1) {
if (!!((Result_50239 == NIM_NIL))) goto LA1;
LOC3 = Cmpexact_50165((*Result_50239).S->data, Identifier_50025, Length_50026);
if (!(LOC3 == 0)) goto LA4;
if (!!((Last_50242 == NIM_NIL))) goto LA7;
asgnRefNoCycle((void**) &(*Last_50242).Next, (*Result_50239).Next);
asgnRefNoCycle((void**) &(*Result_50239).Next, Buckets_50041[(Idx_50240)-0]);
asgnRefNoCycle((void**) &Buckets_50041[(Idx_50240)-0], Result_50239);
LA7: ;
goto BeforeRet;
goto LA2;
LA4: ;
LOC9 = Cmpignorestyle_50042((*Result_50239).S->data, Identifier_50025, Length_50026);
if (!(LOC9 == 0)) goto LA10;
Id_50241 = (*Result_50239).Sup.Id;
goto LA2;
LA10: ;
LA2: ;
Last_50242 = Result_50239;
Result_50239 = (*Result_50239).Next;
} LA1: ;
Result_50239 = (TY50011*) newObj(NTI50009, sizeof(TY50011));
(*Result_50239).Sup.Sup.m_type = NTI50011;
(*Result_50239).H = H_50027;
asgnRefNoCycle((void**) &(*Result_50239).S, mnewString(Length_50026));
I_50310 = 0;
HEX3Atmp_50327 = 0;
HEX3Atmp_50327 = (NI32)((NI32)(Length_50026 + 0) - 1);
Res_50329 = 0;
Res_50329 = 0;
while (1) {
if (!(Res_50329 <= HEX3Atmp_50327)) goto LA12;
I_50310 = Res_50329;
(*Result_50239).S->data[I_50310] = Identifier_50025[(NI32)(I_50310 - 0)];
Res_50329 += 1;
} LA12: ;
asgnRefNoCycle((void**) &(*Result_50239).Next, Buckets_50041[(Idx_50240)-0]);
asgnRefNoCycle((void**) &Buckets_50041[(Idx_50240)-0], Result_50239);
if (!(Id_50241 == 0)) goto LA14;
Wordcounter_50233 += 1;
(*Result_50239).Sup.Id = ((NI32)-(Wordcounter_50233));
goto LA13;
LA14: ;
(*Result_50239).Sup.Id = Id_50241;
LA13: ;
BeforeRet: ;
return Result_50239;
}
N_NIMCALL(TY50011*, Getident_50019)(NimStringDesc* Identifier_50021, NI H_50022) {
TY50011* Result_50230;
Result_50230 = 0;
Result_50230 = Getident_50023(Identifier_50021->data, Identifier_50021->Sup.len, H_50022);
return Result_50230;
}
N_NIMCALL(TY50011*, Getident_50016)(NimStringDesc* Identifier_50018) {
TY50011* Result_50223;
NI LOC1;
Result_50223 = 0;
LOC1 = Getnormalizedhash_40037(Identifier_50018);
Result_50223 = Getident_50023(Identifier_50018->data, Identifier_50018->Sup.len, LOC1);
return Result_50223;
}
N_NIMCALL(NIM_BOOL, Identeq_50028)(TY50011* Id_50030, NimStringDesc* Name_50031) {
NIM_BOOL Result_50036;
TY50011* LOC1;
Result_50036 = 0;
LOC1 = 0;
LOC1 = Getident_50016(Name_50031);
Result_50036 = ((*Id_50030).Sup.Id == (*LOC1).Sup.Id);
return Result_50036;
}
N_NOINLINE(void, identsInit)(void) {
Wordcounter_50233 = 1;
}


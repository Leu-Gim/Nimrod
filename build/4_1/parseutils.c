/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct EOverflow EOverflow;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY428 TY428;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
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
struct TY428 {
  TY416 Sup;
};
struct EOverflow {
  TY428 Sup;
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
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_23049, NI64* Number_23051, NI Start_23052);
N_NIMCALL(NI, Rawparseint_22948)(NimStringDesc* S_22950, NI64* B_22952, NI Start_22953);
static N_INLINE(NI, addInt)(NI A_6003, NI B_6004);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 A_5979, NI64 B_5980);
static N_INLINE(NI, subInt)(NI A_6203, NI B_6204);
static N_INLINE(NI64, subInt64)(NI64 A_5938, NI64 B_5939);
N_NIMCALL(void*, newObj)(TNimType* Typ_13707, NI Size_13708);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(void, raiseException)(E_Base* E_5404, NCSTRING Ename_5405);
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* S_23088, NF64* Number_23090, NI Start_23091);
NIM_CONST TY22602 Whitespace_22601 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identchars_22603 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identstartchars_22605 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP196663, "overflow", 8);
extern TNimType* NTI5891; /* ref EOverflow */
extern TNimType* NTI432; /* EOverflow */
extern TY11190 Gch_11210;
static N_INLINE(NI, addInt)(NI A_6003, NI B_6004) {
NI Result_6005;
NIM_BOOL LOC2;
Result_6005 = 0;
Result_6005 = (NI32)((NU32)(A_6003) + (NU32)(B_6004));
LOC2 = (0 <= (NI32)(Result_6005 ^ A_6003));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI32)(Result_6005 ^ B_6004));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_6005;
}
static N_INLINE(NI, subInt)(NI A_6203, NI B_6204) {
NI Result_6205;
NIM_BOOL LOC2;
Result_6205 = 0;
Result_6205 = (NI32)((NU32)(A_6203) - (NU32)(B_6204));
LOC2 = (0 <= (NI32)(Result_6205 ^ A_6203));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI32)(Result_6205 ^ (NI32)((NU32) ~(B_6204))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_6205;
}
static N_INLINE(NI64, subInt64)(NI64 A_5938, NI64 B_5939) {
NI64 Result_5940;
NIM_BOOL LOC2;
Result_5940 = 0;
Result_5940 = (NI64)((NU64)(A_5938) - (NU64)(B_5939));
LOC2 = (0 <= (Result_5940 ^ A_5938));
if (LOC2) goto LA3;
LOC2 = (0 <= (Result_5940 ^ ~(B_5939)));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5940;
}
N_NIMCALL(NI, Rawparseint_22948)(NimStringDesc* S_22950, NI64* B_22952, NI Start_22953) {
NI Result_22954;
NI64 Sign_22955;
NI I_22956;
NI64 TMP196658;NI TMP196659;NI64 TMP196660;NI64 TMP196661;NI TMP196662;Result_22954 = 0;
Sign_22955 = 0;
Sign_22955 = -1;
I_22956 = 0;
I_22956 = Start_22953;
if (!((NU8)(S_22950->data[I_22956]) == (NU8)(43))) goto LA2;
I_22956 = addInt(I_22956, 1);
goto LA1;
LA2: ;
if (!((NU8)(S_22950->data[I_22956]) == (NU8)(45))) goto LA4;
I_22956 = addInt(I_22956, 1);
Sign_22955 = 1;
goto LA1;
LA4: ;
LA1: ;
if (!(((NU8)(S_22950->data[I_22956])) >= ((NU8)(48)) && ((NU8)(S_22950->data[I_22956])) <= ((NU8)(57)))) goto LA7;
(*B_22952) = 0;
while (1) {
if (!(((NU8)(S_22950->data[I_22956])) >= ((NU8)(48)) && ((NU8)(S_22950->data[I_22956])) <= ((NU8)(57)))) goto LA9;
TMP196658 = mulInt64((*B_22952), 10);TMP196659 = subInt(((NU8)(S_22950->data[I_22956])), 48);TMP196660 = subInt64((NI64)(TMP196658), ((NI64) ((NI32)(TMP196659))));(*B_22952) = (NI64)(TMP196660);
I_22956 = addInt(I_22956, 1);
while (1) {
if (!((NU8)(S_22950->data[I_22956]) == (NU8)(95))) goto LA10;
I_22956 = addInt(I_22956, 1);
} LA10: ;
} LA9: ;
TMP196661 = mulInt64((*B_22952), Sign_22955);(*B_22952) = (NI64)(TMP196661);
TMP196662 = subInt(I_22956, Start_22953);Result_22954 = (NI32)(TMP196662);
LA7: ;
return Result_22954;
}
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_23049, NI64* Number_23051, NI Start_23052) {
NI Result_23053;
Result_23053 = 0;
Result_23053 = Rawparseint_22948(S_23049, Number_23051, Start_23052);
return Result_23053;
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
N_NIMCALL(NI, npuParseInt)(NimStringDesc* S_23056, NI* Number_23058, NI Start_23059) {
NI Result_23060;
NI64 Res_23061;
NIM_BOOL LOC2;
NIM_BOOL LOC4;
EOverflow* E_23070;
Result_23060 = 0;
Res_23061 = 0;
Result_23060 = npuParseBiggestInt(S_23056, &Res_23061, Start_23059);
LOC2 = NIM_TRUE;
if (!(LOC2)) goto LA3;
LOC4 = (Res_23061 < (-2147483647 -1));
if (LOC4) goto LA5;
LOC4 = (2147483647 < Res_23061);
LA5: ;
LOC2 = LOC4;
LA3: ;
if (!LOC2) goto LA6;
E_23070 = 0;
E_23070 = (EOverflow*) newObj(NTI5891, sizeof(EOverflow));
(*E_23070).Sup.Sup.Sup.Sup.m_type = NTI432;
asgnRefNoCycle((void**) &(*E_23070).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP196663)));
raiseException((E_Base*)E_23070, "EOverflow");
goto LA1;
LA6: ;
(*Number_23058) = ((NI) (Res_23061));
LA1: ;
return Result_23060;
}
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* S_23088, NF64* Number_23090, NI Start_23091) {
NI Result_23092;
NF Esign_23093;
NF Sign_23094;
NI I_23095;
NI Exponent_23096;
NI Flags_23097;
NIM_BOOL LOC7;
NIM_BOOL LOC12;
NIM_BOOL LOC17;
NIM_BOOL LOC25;
NIM_BOOL LOC30;
NIM_BOOL LOC35;
NF Hd_23222;
NF Hd_23397;
NI J_23420;
NI Res_23429;
Result_23092 = 0;
Esign_23093 = 0;
Esign_23093 = 1.00000;
Sign_23094 = 0;
Sign_23094 = 1.00000;
I_23095 = 0;
I_23095 = Start_23091;
Exponent_23096 = 0;
Flags_23097 = 0;
(*Number_23090) = 0.00000;
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(43))) goto LA2;
I_23095 += 1;
goto LA1;
LA2: ;
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(45))) goto LA4;
Sign_23094 = -1.00000;
I_23095 += 1;
goto LA1;
LA4: ;
LA1: ;
LOC7 = ((NU8)(S_23088->data[I_23095]) == (NU8)(78));
if (LOC7) goto LA8;
LOC7 = ((NU8)(S_23088->data[I_23095]) == (NU8)(110));
LA8: ;
if (!LOC7) goto LA9;
LOC12 = ((NU8)(S_23088->data[(NI32)(I_23095 + 1)]) == (NU8)(65));
if (LOC12) goto LA13;
LOC12 = ((NU8)(S_23088->data[(NI32)(I_23095 + 1)]) == (NU8)(97));
LA13: ;
if (!LOC12) goto LA14;
LOC17 = ((NU8)(S_23088->data[(NI32)(I_23095 + 2)]) == (NU8)(78));
if (LOC17) goto LA18;
LOC17 = ((NU8)(S_23088->data[(NI32)(I_23095 + 2)]) == (NU8)(110));
LA18: ;
if (!LOC17) goto LA19;
if (!!((((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) >= ((NU8)(97)) && ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) <= ((NU8)(122)) || ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) >= ((NU8)(65)) && ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) <= ((NU8)(90)) || ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) >= ((NU8)(48)) && ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) <= ((NU8)(57)) || ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) == ((NU8)(95))))) goto LA22;
(*Number_23090) = NAN;
Result_23092 = (NI32)((NI32)(I_23095 + 3) - Start_23091);
goto BeforeRet;
LA22: ;
LA19: ;
LA14: ;
Result_23092 = 0;
goto BeforeRet;
LA9: ;
LOC25 = ((NU8)(S_23088->data[I_23095]) == (NU8)(73));
if (LOC25) goto LA26;
LOC25 = ((NU8)(S_23088->data[I_23095]) == (NU8)(105));
LA26: ;
if (!LOC25) goto LA27;
LOC30 = ((NU8)(S_23088->data[(NI32)(I_23095 + 1)]) == (NU8)(78));
if (LOC30) goto LA31;
LOC30 = ((NU8)(S_23088->data[(NI32)(I_23095 + 1)]) == (NU8)(110));
LA31: ;
if (!LOC30) goto LA32;
LOC35 = ((NU8)(S_23088->data[(NI32)(I_23095 + 2)]) == (NU8)(70));
if (LOC35) goto LA36;
LOC35 = ((NU8)(S_23088->data[(NI32)(I_23095 + 2)]) == (NU8)(102));
LA36: ;
if (!LOC35) goto LA37;
if (!!((((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) >= ((NU8)(97)) && ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) <= ((NU8)(122)) || ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) >= ((NU8)(65)) && ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) <= ((NU8)(90)) || ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) >= ((NU8)(48)) && ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) <= ((NU8)(57)) || ((NU8)(S_23088->data[(NI32)(I_23095 + 3)])) == ((NU8)(95))))) goto LA40;
(*Number_23090) = ((NF64) ((INF * Sign_23094)));
Result_23092 = (NI32)((NI32)(I_23095 + 3) - Start_23091);
goto BeforeRet;
LA40: ;
LA37: ;
LA32: ;
Result_23092 = 0;
goto BeforeRet;
LA27: ;
while (1) {
if (!(((NU8)(S_23088->data[I_23095])) >= ((NU8)(48)) && ((NU8)(S_23088->data[I_23095])) <= ((NU8)(57)))) goto LA42;
Flags_23097 = (NI32)(Flags_23097 | 1);
(*Number_23090) = ((NF64) (((((NF) ((*Number_23090))) * 10.0000) + ((double) ((NI32)(((NU8)(S_23088->data[I_23095])) - 48))))));
I_23095 += 1;
while (1) {
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(95))) goto LA43;
I_23095 += 1;
} LA43: ;
} LA42: ;
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(46))) goto LA45;
Hd_23222 = 0;
Hd_23222 = 1.00000;
I_23095 += 1;
while (1) {
if (!(((NU8)(S_23088->data[I_23095])) >= ((NU8)(48)) && ((NU8)(S_23088->data[I_23095])) <= ((NU8)(57)))) goto LA47;
Flags_23097 = (NI32)(Flags_23097 | 2);
(*Number_23090) = ((NF64) (((((NF) ((*Number_23090))) * 10.0000) + ((double) ((NI32)(((NU8)(S_23088->data[I_23095])) - 48))))));
Hd_23222 = (Hd_23222 * 10.0000);
I_23095 += 1;
while (1) {
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(95))) goto LA48;
I_23095 += 1;
} LA48: ;
} LA47: ;
(*Number_23090) = ((NF64) ((((NF) ((*Number_23090))) / Hd_23222)));
LA45: ;
if (!(Flags_23097 == 0)) goto LA50;
Result_23092 = 0;
goto BeforeRet;
LA50: ;
if (!(((NU8)(S_23088->data[I_23095])) == ((NU8)(101)) || ((NU8)(S_23088->data[I_23095])) == ((NU8)(69)))) goto LA53;
I_23095 += 1;
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(43))) goto LA56;
I_23095 += 1;
goto LA55;
LA56: ;
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(45))) goto LA58;
Esign_23093 = -1.00000;
I_23095 += 1;
goto LA55;
LA58: ;
LA55: ;
if (!!((((NU8)(S_23088->data[I_23095])) >= ((NU8)(48)) && ((NU8)(S_23088->data[I_23095])) <= ((NU8)(57))))) goto LA61;
Result_23092 = 0;
goto BeforeRet;
LA61: ;
while (1) {
if (!(((NU8)(S_23088->data[I_23095])) >= ((NU8)(48)) && ((NU8)(S_23088->data[I_23095])) <= ((NU8)(57)))) goto LA63;
Exponent_23096 = (NI32)((NI32)((NI32)(Exponent_23096 * 10) + ((NU8)(S_23088->data[I_23095]))) - 48);
I_23095 += 1;
while (1) {
if (!((NU8)(S_23088->data[I_23095]) == (NU8)(95))) goto LA64;
I_23095 += 1;
} LA64: ;
} LA63: ;
LA53: ;
Hd_23397 = 0;
Hd_23397 = 1.00000;
J_23420 = 0;
Res_23429 = 0;
Res_23429 = 1;
while (1) {
if (!(Res_23429 <= Exponent_23096)) goto LA65;
J_23420 = Res_23429;
Hd_23397 = (Hd_23397 * 10.0000);
Res_23429 += 1;
} LA65: ;
if (!(0.00000 < Esign_23093)) goto LA67;
(*Number_23090) = ((NF64) ((((NF) ((*Number_23090))) * Hd_23397)));
goto LA66;
LA67: ;
(*Number_23090) = ((NF64) ((((NF) ((*Number_23090))) / Hd_23397)));
LA66: ;
(*Number_23090) = ((NF64) ((((NF) ((*Number_23090))) * Sign_23094)));
Result_23092 = (NI32)(I_23095 - Start_23091);
BeforeRet: ;
return Result_23092;
}
N_NIMCALL(NI, npuParseFloat)(NimStringDesc* S_23434, NF* Number_23436, NI Start_23437) {
NI Result_23438;
NF64 Bf_23439;
Result_23438 = 0;
Bf_23439 = 0;
Result_23438 = npuParseBiggestFloat(S_23434, &Bf_23439, Start_23437);
(*Number_23436) = ((NF) (Bf_23439));
return Result_23438;
}
N_NOINLINE(void, parseutilsInit)(void) {
}


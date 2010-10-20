/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY52008 TY52008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY52445 TY52445;
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
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
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
typedef TY52008* TY52446[1];
typedef NI TY50040[256];
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY52445 {
  TGenericSeq Sup;
  TY52008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_13707, NI Size_13708);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
N_NIMCALL(void, Newrecropetostr_52427)(NimStringDesc** Result_52430, NI* Resultlen_52432, TY52008* R_52433);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18835, NI Elemsize_18836);
N_NIMCALL(TY52008*, Insertincache_52241)(NimStringDesc* S_52243, TY52008* Tree_52244);
N_NIMCALL(TY52008*, Newrope_52105)(NimStringDesc* Data_52107);
N_NIMCALL(TY52008*, Splay_52179)(NimStringDesc* S_52181, TY52008* Tree_52182, NI* Cmpres_52184);
N_NIMCALL(NI, Cmp_1321)(NimStringDesc* X_1323, NimStringDesc* Y_1324);
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18611, NimStringDesc* B_18612);
N_NIMCALL(TY52008*, Con_52019)(TY52008* A_52021, NimStringDesc* B_52022);
N_NIMCALL(TY52008*, Con_52015)(TY52008* A_52017, TY52008* B_52018);
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(void, App_52036)(TY52008** A_52039, NimStringDesc* B_52040);
N_NIMCALL(void, App_52031)(TY52008** A_52034, TY52008* B_52035);
N_NIMCALL(void, Internalerror_47571)(NimStringDesc* Errmsg_47573);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19403);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18687);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_19467);
N_NIMCALL(TY52008*, Ropef_52069)(NimStringDesc* Frmt_52071, TY52008** Args_52073, NI Args_52073Len0);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF X_19460);
N_NIMCALL(int, Crcfromfile_50029)(NimStringDesc* Filename_50031);
N_NIMCALL(int, Crcfromrope_53052)(TY52008* R_53054);
N_NIMCALL(int, Newcrcfromropeaux_52968)(TY52008* R_52970, int Startval_52971);
static N_INLINE(int, Updatecrc32_50018)(NIM_CHAR Val_50020, int Crc_50021);
static N_INLINE(int, Updatecrc32_50014)(NI8 Val_50016, int Crc_50017);
N_NIMCALL(void, Writerope_52058)(TY52008* Head_52060, NimStringDesc* Filename_52061);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(void, Newwriteroperec_52666)(FILE** F_52669, TY52008* C_52670);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
N_NIMCALL(void, Rawmessage_47553)(NU8 Msg_47555, NimStringDesc* Arg_47556);
N_NIMCALL(TY52008*, Pop_52466)(TY52445** S_52471);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
STRING_LITERAL(TMP196900, "", 0);
STRING_LITERAL(TMP197241, "$", 1);
STRING_LITERAL(TMP197242, "ropes: invalid format string $", 30);
extern NIM_CONST TY50040 Crc32table_50039;
TY52008* Cache_52126;
NI Misses_52127;
NI Hits_52128;
TY52008* N_52129;
extern TNimType* NTI52006; /* PRope */
extern TY11190 Gch_11210;
extern TNimType* NTI52008; /* TRope */
extern TNimType* NTI52445; /* seq[PRope] */
extern NimStringDesc* Tnl_51573;
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
N_NIMCALL(void, Newrecropetostr_52427)(NimStringDesc** Result_52430, NI* Resultlen_52432, TY52008* R_52433) {
TY52445* Stack_52448;
TY52446 LOC1;
TY52008* It_52497;
Stack_52448 = 0;
Stack_52448 = (TY52445*) newSeq(NTI52445, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_52433;
asgnRefNoCycle((void**) &Stack_52448->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_52448->Sup.len)) goto LA2;
It_52497 = 0;
It_52497 = Pop_52466(&Stack_52448);
while (1) {
if (!((*It_52497).Data == NIM_NIL)) goto LA3;
Stack_52448 = (TY52445*) incrSeq(&(Stack_52448)->Sup, sizeof(TY52008*));
asgnRefNoCycle((void**) &Stack_52448->data[Stack_52448->Sup.len-1], (*It_52497).Right);
It_52497 = (*It_52497).Left;
} LA3: ;
memcpy(((void*) (&(*Result_52430)->data[(*Resultlen_52432)])), ((void*) (&(*It_52497).Data->data[0])), (*It_52497).Length);
(*Resultlen_52432) += (*It_52497).Length;
} LA2: ;
}
N_NIMCALL(NimStringDesc*, Ropetostr_52066)(TY52008* P_52068) {
NimStringDesc* Result_52539;
NI Resultlen_52551;
Result_52539 = 0;
if (!(P_52068 == NIM_NIL)) goto LA2;
Result_52539 = copyString(((NimStringDesc*) &TMP196900));
goto LA1;
LA2: ;
Result_52539 = mnewString((*P_52068).Length);
Resultlen_52551 = 0;
Resultlen_52551 = 0;
Newrecropetostr_52427(&Result_52539, &Resultlen_52551, P_52068);
LA1: ;
return Result_52539;
}
N_NIMCALL(TY52008*, Newrope_52105)(NimStringDesc* Data_52107) {
TY52008* Result_52108;
Result_52108 = 0;
Result_52108 = (TY52008*) newObj(NTI52006, sizeof(TY52008));
(*Result_52108).Sup.m_type = NTI52008;
if (!!((Data_52107 == NIM_NIL))) goto LA2;
(*Result_52108).Length = Data_52107->Sup.len;
asgnRefNoCycle((void**) &(*Result_52108).Data, copyString(Data_52107));
LA2: ;
return Result_52108;
}
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18611, NimStringDesc* B_18612) {
NI Result_18613;
int LOC10;
Result_18613 = 0;
if (!(A_18611 == B_18612)) goto LA2;
Result_18613 = 0;
goto BeforeRet;
LA2: ;
if (!(A_18611 == NIM_NIL)) goto LA5;
Result_18613 = -1;
goto BeforeRet;
LA5: ;
if (!(B_18612 == NIM_NIL)) goto LA8;
Result_18613 = 1;
goto BeforeRet;
LA8: ;
LOC10 = strcmp(((NCSTRING) ((*A_18611).data)), ((NCSTRING) ((*B_18612).data)));
Result_18613 = ((NI) (LOC10));
goto BeforeRet;
BeforeRet: ;
return Result_18613;
}
N_NIMCALL(TY52008*, Splay_52179)(NimStringDesc* S_52181, TY52008* Tree_52182, NI* Cmpres_52184) {
TY52008* Result_52185;
NI C_52186;
TY52008* T_52187;
TY52008* Le_52188;
TY52008* R_52189;
NIM_BOOL LOC6;
TY52008* Y_52203;
NIM_BOOL LOC16;
TY52008* Y_52228;
Result_52185 = 0;
C_52186 = 0;
T_52187 = 0;
T_52187 = Tree_52182;
asgnRefNoCycle((void**) &(*N_52129).Left, NIM_NIL);
asgnRefNoCycle((void**) &(*N_52129).Right, NIM_NIL);
Le_52188 = 0;
Le_52188 = N_52129;
R_52189 = 0;
R_52189 = N_52129;
while (1) {
C_52186 = Cmp_1321(S_52181, (*T_52187).Data);
if (!(C_52186 < 0)) goto LA3;
LOC6 = !(((*T_52187).Left == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = (cmpStrings(S_52181, (*(*T_52187).Left).Data) < 0);
LA7: ;
if (!LOC6) goto LA8;
Y_52203 = 0;
Y_52203 = (*T_52187).Left;
asgnRefNoCycle((void**) &(*T_52187).Left, (*Y_52203).Right);
asgnRefNoCycle((void**) &(*Y_52203).Right, T_52187);
T_52187 = Y_52203;
LA8: ;
if (!((*T_52187).Left == NIM_NIL)) goto LA11;
goto LA1;
LA11: ;
asgnRefNoCycle((void**) &(*R_52189).Left, T_52187);
R_52189 = T_52187;
T_52187 = (*T_52187).Left;
goto LA2;
LA3: ;
if (!(0 < C_52186)) goto LA13;
LOC16 = !(((*T_52187).Right == NIM_NIL));
if (!(LOC16)) goto LA17;
LOC16 = (cmpStrings((*(*T_52187).Right).Data, S_52181) < 0);
LA17: ;
if (!LOC16) goto LA18;
Y_52228 = 0;
Y_52228 = (*T_52187).Right;
asgnRefNoCycle((void**) &(*T_52187).Right, (*Y_52228).Left);
asgnRefNoCycle((void**) &(*Y_52228).Left, T_52187);
T_52187 = Y_52228;
LA18: ;
if (!((*T_52187).Right == NIM_NIL)) goto LA21;
goto LA1;
LA21: ;
asgnRefNoCycle((void**) &(*Le_52188).Right, T_52187);
Le_52188 = T_52187;
T_52187 = (*T_52187).Right;
goto LA2;
LA13: ;
goto LA1;
LA2: ;
} LA1: ;
(*Cmpres_52184) = C_52186;
asgnRefNoCycle((void**) &(*Le_52188).Right, (*T_52187).Left);
asgnRefNoCycle((void**) &(*R_52189).Left, (*T_52187).Right);
asgnRefNoCycle((void**) &(*T_52187).Left, (*N_52129).Right);
asgnRefNoCycle((void**) &(*T_52187).Right, (*N_52129).Left);
Result_52185 = T_52187;
return Result_52185;
}
N_NIMCALL(TY52008*, Insertincache_52241)(NimStringDesc* S_52243, TY52008* Tree_52244) {
TY52008* Result_52245;
TY52008* T_52246;
NI Cmp_52270;
Result_52245 = 0;
T_52246 = 0;
T_52246 = Tree_52244;
if (!(T_52246 == NIM_NIL)) goto LA2;
Result_52245 = Newrope_52105(S_52243);
if (!NIM_FALSE) goto LA5;
Misses_52127 += 1;
LA5: ;
goto BeforeRet;
LA2: ;
Cmp_52270 = 0;
T_52246 = Splay_52179(S_52243, T_52246, &Cmp_52270);
if (!(Cmp_52270 == 0)) goto LA8;
Result_52245 = T_52246;
if (!NIM_FALSE) goto LA11;
Hits_52128 += 1;
LA11: ;
goto LA7;
LA8: ;
if (!NIM_FALSE) goto LA14;
Misses_52127 += 1;
LA14: ;
Result_52245 = Newrope_52105(S_52243);
if (!(Cmp_52270 < 0)) goto LA17;
asgnRefNoCycle((void**) &(*Result_52245).Left, (*T_52246).Left);
asgnRefNoCycle((void**) &(*Result_52245).Right, T_52246);
asgnRefNoCycle((void**) &(*T_52246).Left, NIM_NIL);
goto LA16;
LA17: ;
asgnRefNoCycle((void**) &(*Result_52245).Right, (*T_52246).Right);
asgnRefNoCycle((void**) &(*Result_52245).Left, T_52246);
asgnRefNoCycle((void**) &(*T_52246).Right, NIM_NIL);
LA16: ;
LA7: ;
BeforeRet: ;
return Result_52245;
}
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048) {
TY52008* Result_52318;
Result_52318 = 0;
if (!((S_52048) && (S_52048)->Sup.len == 0)) goto LA2;
Result_52318 = NIM_NIL;
goto LA1;
LA2: ;
if (!NIM_TRUE) goto LA4;
Result_52318 = Insertincache_52241(S_52048, Cache_52126);
asgnRefNoCycle((void**) &Cache_52126, Result_52318);
goto LA1;
LA4: ;
Result_52318 = Newrope_52105(S_52048);
LA1: ;
return Result_52318;
}
N_NIMCALL(TY52008*, Con_52015)(TY52008* A_52017, TY52008* B_52018) {
TY52008* Result_52558;
Result_52558 = 0;
if (!(A_52017 == NIM_NIL)) goto LA2;
Result_52558 = B_52018;
goto LA1;
LA2: ;
if (!(B_52018 == NIM_NIL)) goto LA4;
Result_52558 = A_52017;
goto LA1;
LA4: ;
Result_52558 = Newrope_52105(NIM_NIL);
(*Result_52558).Length = (NI64)((*A_52017).Length + (*B_52018).Length);
asgnRefNoCycle((void**) &(*Result_52558).Left, A_52017);
asgnRefNoCycle((void**) &(*Result_52558).Right, B_52018);
LA1: ;
return Result_52558;
}
N_NIMCALL(TY52008*, Con_52019)(TY52008* A_52021, NimStringDesc* B_52022) {
TY52008* Result_52585;
TY52008* LOC1;
Result_52585 = 0;
LOC1 = 0;
LOC1 = Torope_52046(B_52022);
Result_52585 = Con_52015(A_52021, LOC1);
return Result_52585;
}
N_NIMCALL(void, App_52036)(TY52008** A_52039, NimStringDesc* B_52040) {
unsureAsgnRef((void**) &(*A_52039), Con_52019((*A_52039), B_52040));
}
N_NIMCALL(void, App_52031)(TY52008** A_52034, TY52008* B_52035) {
unsureAsgnRef((void**) &(*A_52034), Con_52015((*A_52034), B_52035));
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793) {
memcpy(((NCSTRING) (&(*Dest_18792).data[((*Dest_18792).Sup.len)-0])), ((NCSTRING) ((*Src_18793).data)), ((int) ((NI64)((NI64)((*Src_18793).Sup.len + 1) * 1))));
(*Dest_18792).Sup.len += (*Src_18793).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810) {
(*Dest_18809).data[((*Dest_18809).Sup.len)-0] = C_18810;
(*Dest_18809).data[((NI64)((*Dest_18809).Sup.len + 1))-0] = 0;
(*Dest_18809).Sup.len += 1;
}
N_NIMCALL(TY52008*, Ropef_52069)(NimStringDesc* Frmt_52071, TY52008** Args_52073, NI Args_52073Len0) {
TY52008* Result_52765;
NI I_52766;
NI J_52767;
NI Length_52768;
NI Start_52769;
NI Num_52770;
NIM_BOOL LOC7;
NimStringDesc* LOC14;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
NimStringDesc* LOC24;
Result_52765 = 0;
I_52766 = 0;
J_52767 = 0;
Length_52768 = 0;
Start_52769 = 0;
Num_52770 = 0;
I_52766 = 0;
Length_52768 = Frmt_52071->Sup.len;
Result_52765 = NIM_NIL;
Num_52770 = 0;
while (1) {
if (!(I_52766 <= (NI64)(Length_52768 - 1))) goto LA1;
if (!((NU8)(Frmt_52071->data[I_52766]) == (NU8)(36))) goto LA3;
I_52766 += 1;
switch (((NU8)(Frmt_52071->data[I_52766]))) {
case 36:
App_52036(&Result_52765, ((NimStringDesc*) &TMP197241));
I_52766 += 1;
break;
case 35:
I_52766 += 1;
App_52031(&Result_52765, Args_52073[Num_52770]);
Num_52770 += 1;
break;
case 48 ... 57:
J_52767 = 0;
while (1) {
J_52767 = (NI64)((NI64)((NI64)(J_52767 * 10) + ((NU8)(Frmt_52071->data[I_52766]))) - 48);
I_52766 += 1;
LOC7 = ((NI64)((NI64)(Length_52768 + 0) - 1) < I_52766);
if (LOC7) goto LA8;
LOC7 = !((((NU8)(Frmt_52071->data[I_52766])) >= ((NU8)(48)) && ((NU8)(Frmt_52071->data[I_52766])) <= ((NU8)(57))));
LA8: ;
if (!LOC7) goto LA9;
goto LA5;
LA9: ;
} LA5: ;
Num_52770 = J_52767;
if (!((NI64)((Args_52073Len0-1) + 1) < J_52767)) goto LA12;
LOC14 = 0;
LOC15 = 0;
LOC15 = nimIntToStr(J_52767);
LOC14 = rawNewString(LOC15->Sup.len + 30);
appendString(LOC14, ((NimStringDesc*) &TMP197242));
appendString(LOC14, LOC15);
Internalerror_47571(LOC14);
LA12: ;
App_52031(&Result_52765, Args_52073[(NI64)(J_52767 - 1)]);
break;
case 78:
case 110:
App_52036(&Result_52765, Tnl_51573);
I_52766 += 1;
break;
default:
LOC16 = 0;
LOC16 = rawNewString(31);
appendString(LOC16, ((NimStringDesc*) &TMP197242));
appendChar(LOC16, Frmt_52071->data[I_52766]);
Internalerror_47571(LOC16);
break;
}
LA3: ;
Start_52769 = I_52766;
while (1) {
if (!(I_52766 <= (NI64)(Length_52768 - 1))) goto LA17;
if (!!(((NU8)(Frmt_52071->data[I_52766]) == (NU8)(36)))) goto LA19;
I_52766 += 1;
goto LA18;
LA19: ;
goto LA17;
LA18: ;
} LA17: ;
if (!(Start_52769 <= (NI64)(I_52766 - 1))) goto LA22;
LOC24 = 0;
LOC24 = copyStrLast(Frmt_52071, Start_52769, (NI64)(I_52766 - 1));
App_52036(&Result_52765, LOC24);
LA22: ;
} LA1: ;
return Result_52765;
}
N_NIMCALL(TY52008*, Torope_52052)(NI64 I_52054) {
TY52008* Result_52628;
NimStringDesc* LOC1;
Result_52628 = 0;
LOC1 = 0;
LOC1 = nimInt64ToStr(I_52054);
Result_52628 = Torope_52046(LOC1);
return Result_52628;
}
N_NIMCALL(void, Appf_52074)(TY52008** C_52077, NimStringDesc* Frmt_52078, TY52008** Args_52080, NI Args_52080Len0) {
TY52008* LOC1;
LOC1 = 0;
LOC1 = Ropef_52069(Frmt_52078, Args_52080, Args_52080Len0);
App_52031(C_52077, LOC1);
}
N_NIMCALL(TY52008*, Con_52023)(NimStringDesc* A_52025, TY52008* B_52026) {
TY52008* Result_52590;
TY52008* LOC1;
Result_52590 = 0;
LOC1 = 0;
LOC1 = Torope_52046(A_52025);
Result_52590 = Con_52015(LOC1, B_52026);
return Result_52590;
}
N_NIMCALL(void, Prepend_52041)(TY52008** A_52044, TY52008* B_52045) {
unsureAsgnRef((void**) &(*A_52044), Con_52015(B_52045, (*A_52044)));
}
N_NIMCALL(TY52008*, Toropef_52049)(NF64 R_52051) {
TY52008* Result_52634;
NimStringDesc* LOC1;
Result_52634 = 0;
LOC1 = 0;
LOC1 = nimFloatToStr(((NF) (R_52051)));
Result_52634 = Torope_52046(LOC1);
return Result_52634;
}
static N_INLINE(int, Updatecrc32_50014)(NI8 Val_50016, int Crc_50017) {
int Result_50048;
Result_50048 = 0;
Result_50048 = (NI32)(((int) (Crc32table_50039[((NI64)((NI64)(((NI) (Crc_50017)) ^ (NI64)(((NI) (Val_50016)) & 255)) & 255))-0])) ^ (NI32)((NU32)(Crc_50017) >> (NU32)(((NI32) 8))));
return Result_50048;
}
static N_INLINE(int, Updatecrc32_50018)(NIM_CHAR Val_50020, int Crc_50021) {
int Result_50053;
Result_50053 = 0;
Result_50053 = Updatecrc32_50014(((NI8) (((NU8)(Val_50020)))), Crc_50021);
return Result_50053;
}
N_NIMCALL(int, Newcrcfromropeaux_52968)(TY52008* R_52970, int Startval_52971) {
int Result_52972;
TY52445* Stack_52987;
TY52446 LOC1;
TY52008* It_53012;
NI I_53031;
NI L_53034;
Result_52972 = 0;
Stack_52987 = 0;
Stack_52987 = (TY52445*) newSeq(NTI52445, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_52970;
asgnRefNoCycle((void**) &Stack_52987->data[0], LOC1[0]);
Result_52972 = Startval_52971;
while (1) {
if (!(0 < Stack_52987->Sup.len)) goto LA2;
It_53012 = 0;
It_53012 = Pop_52466(&Stack_52987);
while (1) {
if (!((*It_53012).Data == NIM_NIL)) goto LA3;
Stack_52987 = (TY52445*) incrSeq(&(Stack_52987)->Sup, sizeof(TY52008*));
asgnRefNoCycle((void**) &Stack_52987->data[Stack_52987->Sup.len-1], (*It_53012).Right);
It_53012 = (*It_53012).Left;
} LA3: ;
I_53031 = 0;
I_53031 = 0;
L_53034 = 0;
L_53034 = (*It_53012).Data->Sup.len;
while (1) {
if (!(I_53031 < L_53034)) goto LA4;
Result_52972 = Updatecrc32_50018((*It_53012).Data->data[I_53031], Result_52972);
I_53031 += 1;
} LA4: ;
} LA2: ;
return Result_52972;
}
N_NIMCALL(int, Crcfromrope_53052)(TY52008* R_53054) {
int Result_53055;
Result_53055 = 0;
Result_53055 = Newcrcfromropeaux_52968(R_53054, ((NI32) -1));
return Result_53055;
}
N_NIMCALL(void, Newwriteroperec_52666)(FILE** F_52669, TY52008* C_52670) {
TY52445* Stack_52685;
TY52446 LOC1;
TY52008* It_52710;
Stack_52685 = 0;
Stack_52685 = (TY52445*) newSeq(NTI52445, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = C_52670;
asgnRefNoCycle((void**) &Stack_52685->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_52685->Sup.len)) goto LA2;
It_52710 = 0;
It_52710 = Pop_52466(&Stack_52685);
while (1) {
if (!((*It_52710).Data == NIM_NIL)) goto LA3;
Stack_52685 = (TY52445*) incrSeq(&(Stack_52685)->Sup, sizeof(TY52008*));
asgnRefNoCycle((void**) &Stack_52685->data[Stack_52685->Sup.len-1], (*It_52710).Right);
It_52710 = (*It_52710).Left;
} LA3: ;
Write_3658((*F_52669), (*It_52710).Data);
} LA2: ;
}
N_NIMCALL(void, Writerope_52058)(TY52008* Head_52060, NimStringDesc* Filename_52061) {
FILE* F_52746;
NIM_BOOL LOC2;
F_52746 = 0;
LOC2 = Open_3617(&F_52746, Filename_52061, ((NU8) 1), -1);
if (!LOC2) goto LA3;
if (!!((Head_52060 == NIM_NIL))) goto LA6;
Newwriteroperec_52666(&F_52746, Head_52060);
LA6: ;
fclose(F_52746);
goto LA1;
LA3: ;
Rawmessage_47553(((NU8) 2), Filename_52061);
LA1: ;
}
N_NIMCALL(NIM_BOOL, Writeropeifnotequal_52062)(TY52008* R_52064, NimStringDesc* Filename_52065) {
NIM_BOOL Result_53060;
int C_53061;
int LOC2;
Result_53060 = 0;
C_53061 = 0;
C_53061 = Crcfromfile_50029(Filename_52065);
LOC2 = Crcfromrope_53052(R_52064);
if (!!((C_53061 == LOC2))) goto LA3;
Writerope_52058(R_52064, Filename_52065);
Result_53060 = NIM_TRUE;
goto LA1;
LA3: ;
Result_53060 = NIM_FALSE;
LA1: ;
return Result_53060;
}
N_NIMCALL(NI, Ropelen_52055)(TY52008* A_52057) {
NI Result_52093;
Result_52093 = 0;
if (!(A_52057 == NIM_NIL)) goto LA2;
Result_52093 = 0;
goto LA1;
LA2: ;
Result_52093 = (*A_52057).Length;
LA1: ;
return Result_52093;
}
N_NIMCALL(TY52008*, Pop_52466)(TY52445** S_52471) {
TY52008* Result_52472;
NI L_52483;
Result_52472 = 0;
L_52483 = 0;
L_52483 = (NI64)((*S_52471)->Sup.len - 1);
Result_52472 = (*S_52471)->data[L_52483];
(*S_52471) = (TY52445*) setLengthSeq(&((*S_52471))->Sup, sizeof(TY52008*), L_52483);
return Result_52472;
}
N_NOINLINE(void, ropesInit)(void) {
asgnRefNoCycle((void**) &N_52129, (TY52008*) newObj(NTI52006, sizeof(TY52008)));
(*N_52129).Sup.m_type = NTI52008;
}


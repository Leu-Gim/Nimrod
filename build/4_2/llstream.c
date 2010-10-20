/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY74013 TY74013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
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
struct TY74013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
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
N_NIMCALL(void*, newObj)(TNimType* Typ_13707, NI Size_13708);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(NI, Readbuffer_3714)(FILE* F_3716, void* Buffer_3717, NI Len_3718);
N_NIMCALL(NI, Llreadfromstdin_74173)(TY74013* S_74175, void* Buf_74176, NI Buflen_74177);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
N_NIMCALL(NimStringDesc*, Readline_3679)(FILE* F_3681);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18782, NI Addlen_18783);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NIM_BOOL, Endoffile_3638)(FILE* F_3640);
N_NIMCALL(NI, Writebuffer_3733)(FILE* F_3735, void* Buffer_3736, NI Len_3737);
N_NIMCALL(void, Llstreamwrite_74054)(TY74013* S_74056, NimStringDesc* Data_74057);
STRING_LITERAL(TMP196703, "", 0);
STRING_LITERAL(TMP196704, "Nimrod> ", 8);
STRING_LITERAL(TMP196705, "\012", 1);
extern TNimType* NTI74015; /* PLLStream */
extern TNimType* NTI74013; /* TLLStream */
extern TY11190 Gch_11210;
N_NIMCALL(TY74013*, Llstreamopen_74032)(NimStringDesc* Filename_74034, NU8 Mode_74035) {
TY74013* Result_74117;
NIM_BOOL LOC2;
Result_74117 = 0;
Result_74117 = (TY74013*) newObj(NTI74015, sizeof(TY74013));
(*Result_74117).Sup.m_type = NTI74013;
(*Result_74117).Kind = ((NU8) 2);
LOC2 = Open_3617(&(*Result_74117).F, Filename_74034, Mode_74035, -1);
if (!!(LOC2)) goto LA3;
Result_74117 = NIM_NIL;
LA3: ;
return Result_74117;
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
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793) {
memcpy(((NCSTRING) (&(*Dest_18792).data[((*Dest_18792).Sup.len)-0])), ((NCSTRING) ((*Src_18793).data)), ((int) ((NI64)((NI64)((*Src_18793).Sup.len + 1) * 1))));
(*Dest_18792).Sup.len += (*Src_18793).Sup.len;
}
N_NIMCALL(NI, Llreadfromstdin_74173)(TY74013* S_74175, void* Buf_74176, NI Buflen_74177) {
NI Result_74178;
NimStringDesc* Line_74179;
NI L_74180;
NIM_BOOL LOC3;
Result_74178 = 0;
Line_74179 = 0;
L_74180 = 0;
asgnRefNoCycle((void**) &(*S_74175).S, copyString(((NimStringDesc*) &TMP196703)));
(*S_74175).Rd = 0;
while (1) {
Write_3658(stdout, ((NimStringDesc*) &TMP196704));
Line_74179 = Readline_3679(stdin);
L_74180 = Line_74179->Sup.len;
(*S_74175).S = resizeString((*S_74175).S, Line_74179->Sup.len + 0);
appendString((*S_74175).S, Line_74179);
(*S_74175).S = resizeString((*S_74175).S, 1);
appendString((*S_74175).S, ((NimStringDesc*) &TMP196705));
LOC3 = (0 < L_74180);
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)(Line_74179->data[(NI64)((NI64)(L_74180 - 1) + 0)]) == (NU8)(35));
LA4: ;
if (!LOC3) goto LA5;
goto LA1;
LA5: ;
} LA1: ;
Result_74178 = ((Buflen_74177 <= (NI64)((*S_74175).S->Sup.len - (*S_74175).Rd)) ? Buflen_74177 : (NI64)((*S_74175).S->Sup.len - (*S_74175).Rd));
if (!(0 < Result_74178)) goto LA8;
memcpy(Buf_74176, ((void*) (&(*S_74175).S->data[(NI64)(0 + (*S_74175).Rd)])), Result_74178);
(*S_74175).Rd += Result_74178;
LA8: ;
return Result_74178;
}
N_NIMCALL(NI, Llstreamread_74043)(TY74013* S_74045, void* Buf_74046, NI Buflen_74047) {
NI Result_74212;
Result_74212 = 0;
switch ((*S_74045).Kind) {
case ((NU8) 0):
Result_74212 = 0;
break;
case ((NU8) 1):
Result_74212 = ((Buflen_74047 <= (NI64)((*S_74045).S->Sup.len - (*S_74045).Rd)) ? Buflen_74047 : (NI64)((*S_74045).S->Sup.len - (*S_74045).Rd));
if (!(0 < Result_74212)) goto LA2;
memcpy(Buf_74046, ((void*) (&(*S_74045).S->data[(NI64)(0 + (*S_74045).Rd)])), Result_74212);
(*S_74045).Rd += Result_74212;
LA2: ;
break;
case ((NU8) 2):
Result_74212 = Readbuffer_3714((*S_74045).F, Buf_74046, Buflen_74047);
break;
case ((NU8) 3):
Result_74212 = Llreadfromstdin_74173(S_74045, Buf_74046, Buflen_74047);
break;
}
return Result_74212;
}
N_NIMCALL(void, Llstreamclose_74040)(TY74013* S_74042) {
switch ((*S_74042).Kind) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 3):
break;
case ((NU8) 2):
fclose((*S_74042).F);
break;
}
}
N_NIMCALL(NimStringDesc*, Llstreamreadline_74048)(TY74013* S_74050) {
NimStringDesc* Result_74235;
Result_74235 = 0;
switch ((*S_74050).Kind) {
case ((NU8) 0):
Result_74235 = copyString(((NimStringDesc*) &TMP196703));
break;
case ((NU8) 1):
Result_74235 = copyString(((NimStringDesc*) &TMP196703));
while (1) {
if (!((*S_74050).Rd < (*S_74050).S->Sup.len)) goto LA1;
switch (((NU8)((*S_74050).S->data[(NI64)((*S_74050).Rd + 0)]))) {
case 13:
(*S_74050).Rd += 1;
if (!((NU8)((*S_74050).S->data[(NI64)((*S_74050).Rd + 0)]) == (NU8)(10))) goto LA3;
(*S_74050).Rd += 1;
LA3: ;
goto LA1;
break;
case 10:
(*S_74050).Rd += 1;
goto LA1;
break;
default:
Result_74235 = addChar(Result_74235, (*S_74050).S->data[(NI64)((*S_74050).Rd + 0)]);
(*S_74050).Rd += 1;
break;
}
} LA1: ;
break;
case ((NU8) 2):
Result_74235 = Readline_3679((*S_74050).F);
break;
case ((NU8) 3):
Result_74235 = Readline_3679(stdin);
break;
}
return Result_74235;
}
N_NIMCALL(TY74013*, Llstreamopen_74025)(NimStringDesc* Data_74027) {
TY74013* Result_74077;
Result_74077 = 0;
Result_74077 = (TY74013*) newObj(NTI74015, sizeof(TY74013));
(*Result_74077).Sup.m_type = NTI74013;
asgnRefNoCycle((void**) &(*Result_74077).S, copyString(Data_74027));
(*Result_74077).Kind = ((NU8) 1);
return Result_74077;
}
N_NIMCALL(NIM_BOOL, Llstreamatend_74071)(TY74013* S_74073) {
NIM_BOOL Result_74294;
Result_74294 = 0;
switch ((*S_74073).Kind) {
case ((NU8) 0):
Result_74294 = NIM_TRUE;
break;
case ((NU8) 1):
Result_74294 = ((*S_74073).S->Sup.len <= (*S_74073).Rd);
break;
case ((NU8) 2):
Result_74294 = Endoffile_3638((*S_74073).F);
break;
case ((NU8) 3):
Result_74294 = NIM_FALSE;
break;
}
return Result_74294;
}
N_NIMCALL(void, Llstreamwrite_74054)(TY74013* S_74056, NimStringDesc* Data_74057) {
switch ((*S_74056).Kind) {
case ((NU8) 0):
case ((NU8) 3):
break;
case ((NU8) 1):
(*S_74056).S = resizeString((*S_74056).S, Data_74057->Sup.len + 0);
appendString((*S_74056).S, Data_74057);
(*S_74056).Wr += Data_74057->Sup.len;
break;
case ((NU8) 2):
Write_3658((*S_74056).F, Data_74057);
break;
}
}
N_NIMCALL(void, Llstreamwrite_74058)(TY74013* S_74060, NIM_CHAR Data_74061) {
NIM_CHAR C_74325;
NI LOC1;
C_74325 = 0;
switch ((*S_74060).Kind) {
case ((NU8) 0):
case ((NU8) 3):
break;
case ((NU8) 1):
(*S_74060).S = addChar((*S_74060).S, Data_74061);
(*S_74060).Wr += 1;
break;
case ((NU8) 2):
C_74325 = Data_74061;
LOC1 = Writebuffer_3733((*S_74060).F, ((void*) (&C_74325)), 1);
break;
}
}
N_NIMCALL(void, Llstreamwriteln_74067)(TY74013* S_74069, NimStringDesc* Data_74070) {
Llstreamwrite_74054(S_74069, Data_74070);
Llstreamwrite_74054(S_74069, ((NimStringDesc*) &TMP196705));
}
N_NIMCALL(TY74013*, Llstreamopen_74028)(FILE** F_74031) {
TY74013* Result_74097;
Result_74097 = 0;
Result_74097 = (TY74013*) newObj(NTI74015, sizeof(TY74013));
(*Result_74097).Sup.m_type = NTI74013;
(*Result_74097).F = (*F_74031);
(*Result_74097).Kind = ((NU8) 2);
return Result_74097;
}
N_NIMCALL(TY74013*, Llstreamopenstdin_74038)(void) {
TY74013* Result_74154;
Result_74154 = 0;
Result_74154 = (TY74013*) newObj(NTI74015, sizeof(TY74013));
(*Result_74154).Sup.m_type = NTI74013;
(*Result_74154).Kind = ((NU8) 3);
asgnRefNoCycle((void**) &(*Result_74154).S, copyString(((NimStringDesc*) &TMP196703)));
return Result_74154;
}
N_NOINLINE(void, llstreamInit)(void) {
}


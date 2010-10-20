/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY194404 TY194404;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
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
struct TY194404 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 TY22602[32];
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(NI, Paramcount_41628)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_26283)(NimStringDesc* S_26285);
N_NIMCALL(NimStringDesc*, Paramstr_41603)(NI I_41605);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18687);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18825, NI Newlen_18826);
N_NIMCALL(void, Handleshortoption_194693)(TY194404* P_194696);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NI, Parseword_194607)(NimStringDesc* S_194609, NI I_194610, NimStringDesc** W_194612, TY22602 Delim_194614);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_24981, NIM_BOOL Leading_24982, NIM_BOOL Trailing_24983);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
STRING_LITERAL(TMP196642, "", 0);
static NIM_CONST TY22602 TMP196645 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;static NIM_CONST TY22602 TMP196646 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;extern TNimType* NTI194404; /* TOptParser */
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793) {
memcpy(((NCSTRING) (&(*Dest_18792).data[((*Dest_18792).Sup.len)-0])), ((NCSTRING) ((*Src_18793).data)), ((int) ((NI64)((NI64)((*Src_18793).Sup.len + 1) * 1))));
(*Dest_18792).Sup.len += (*Src_18793).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810) {
(*Dest_18809).data[((*Dest_18809).Sup.len)-0] = C_18810;
(*Dest_18809).data[((NI64)((*Dest_18809).Sup.len + 1))-0] = 0;
(*Dest_18809).Sup.len += 1;
}
N_NIMCALL(void, Initoptparser_194415)(NimStringDesc* Cmdline_194417, TY194404* Result) {
NI I_194441;
NI HEX3Atmp_194602;
NI Res_194604;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
memset((void*)Result, 0, sizeof((*Result)));
(*Result).Sup.m_type = NTI194404;
(*Result).Pos = 0;
(*Result).Inshortstate = NIM_FALSE;
if (!!(((Cmdline_194417) && (Cmdline_194417)->Sup.len == 0))) goto LA2;
unsureAsgnRef((void**) &(*Result).Cmd, copyString(Cmdline_194417));
goto LA1;
LA2: ;
unsureAsgnRef((void**) &(*Result).Cmd, copyString(((NimStringDesc*) &TMP196642)));
I_194441 = 0;
HEX3Atmp_194602 = 0;
HEX3Atmp_194602 = Paramcount_41628();
Res_194604 = 0;
Res_194604 = 1;
while (1) {
if (!(Res_194604 <= HEX3Atmp_194602)) goto LA4;
I_194441 = Res_194604;
LOC5 = 0;
LOC6 = 0;
LOC6 = Paramstr_41603(I_194441);
LOC7 = 0;
LOC7 = Quoteifcontainswhite_26283(LOC6);
LOC5 = rawNewString((*Result).Cmd->Sup.len + LOC7->Sup.len + 1);
appendString(LOC5, (*Result).Cmd);
appendString(LOC5, LOC7);
appendChar(LOC5, 32);
unsureAsgnRef((void**) &(*Result).Cmd, LOC5);
Res_194604 += 1;
} LA4: ;
LA1: ;
(*Result).Kind = ((NU8) 0);
unsureAsgnRef((void**) &(*Result).Key, copyString(((NimStringDesc*) &TMP196642)));
unsureAsgnRef((void**) &(*Result).Val, copyString(((NimStringDesc*) &TMP196642)));
}
N_NIMCALL(NI, Parseword_194607)(NimStringDesc* S_194609, NI I_194610, NimStringDesc** W_194612, TY22602 Delim_194614) {
NI Result_194615;
Result_194615 = 0;
Result_194615 = I_194610;
if (!((NU8)(S_194609->data[Result_194615]) == (NU8)(34))) goto LA2;
Result_194615 += 1;
while (1) {
if (!!((((NU8)(S_194609->data[Result_194615])) == ((NU8)(0)) || ((NU8)(S_194609->data[Result_194615])) == ((NU8)(34))))) goto LA4;
(*W_194612) = addChar((*W_194612), S_194609->data[Result_194615]);
Result_194615 += 1;
} LA4: ;
if (!((NU8)(S_194609->data[Result_194615]) == (NU8)(34))) goto LA6;
Result_194615 += 1;
LA6: ;
goto LA1;
LA2: ;
while (1) {
if (!!(((Delim_194614[((NU8)(S_194609->data[Result_194615]))/8] &(1<<(((NU8)(S_194609->data[Result_194615]))%8)))!=0))) goto LA8;
(*W_194612) = addChar((*W_194612), S_194609->data[Result_194615]);
Result_194615 += 1;
} LA8: ;
LA1: ;
return Result_194615;
}
N_NIMCALL(void, Handleshortoption_194693)(TY194404* P_194696) {
NI I_194697;
I_194697 = 0;
I_194697 = (*P_194696).Pos;
(*P_194696).Kind = ((NU8) 3);
(*P_194696).Key = addChar((*P_194696).Key, (*P_194696).Cmd->data[I_194697]);
I_194697 += 1;
(*P_194696).Inshortstate = NIM_TRUE;
while (1) {
if (!(((NU8)((*P_194696).Cmd->data[I_194697])) == ((NU8)(9)) || ((NU8)((*P_194696).Cmd->data[I_194697])) == ((NU8)(32)))) goto LA1;
I_194697 += 1;
(*P_194696).Inshortstate = NIM_FALSE;
} LA1: ;
if (!(((NU8)((*P_194696).Cmd->data[I_194697])) == ((NU8)(58)) || ((NU8)((*P_194696).Cmd->data[I_194697])) == ((NU8)(61)))) goto LA3;
I_194697 += 1;
(*P_194696).Inshortstate = NIM_FALSE;
while (1) {
if (!(((NU8)((*P_194696).Cmd->data[I_194697])) == ((NU8)(9)) || ((NU8)((*P_194696).Cmd->data[I_194697])) == ((NU8)(32)))) goto LA5;
I_194697 += 1;
} LA5: ;
I_194697 = Parseword_194607((*P_194696).Cmd, I_194697, &(*P_194696).Val, TMP196645);
LA3: ;
if (!((NU8)((*P_194696).Cmd->data[I_194697]) == (NU8)(0))) goto LA7;
(*P_194696).Inshortstate = NIM_FALSE;
LA7: ;
(*P_194696).Pos = I_194697;
}
N_NIMCALL(void, nponext)(TY194404* P_194790) {
NI I_194791;
I_194791 = 0;
I_194791 = (*P_194790).Pos;
while (1) {
if (!(((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(9)) || ((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(32)))) goto LA1;
I_194791 += 1;
} LA1: ;
(*P_194790).Pos = I_194791;
(*P_194790).Key = setLengthStr((*P_194790).Key, 0);
(*P_194790).Val = setLengthStr((*P_194790).Val, 0);
if (!(*P_194790).Inshortstate) goto LA3;
Handleshortoption_194693(P_194790);
goto BeforeRet;
LA3: ;
switch (((NU8)((*P_194790).Cmd->data[I_194791]))) {
case 0:
(*P_194790).Kind = ((NU8) 0);
break;
case 45:
I_194791 += 1;
if (!((NU8)((*P_194790).Cmd->data[I_194791]) == (NU8)(45))) goto LA6;
(*P_194790).Kind = ((NU8) 2);
I_194791 += 1;
I_194791 = Parseword_194607((*P_194790).Cmd, I_194791, &(*P_194790).Key, TMP196646);
while (1) {
if (!(((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(9)) || ((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(32)))) goto LA8;
I_194791 += 1;
} LA8: ;
if (!(((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(58)) || ((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(61)))) goto LA10;
I_194791 += 1;
while (1) {
if (!(((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(9)) || ((NU8)((*P_194790).Cmd->data[I_194791])) == ((NU8)(32)))) goto LA12;
I_194791 += 1;
} LA12: ;
(*P_194790).Pos = Parseword_194607((*P_194790).Cmd, I_194791, &(*P_194790).Val, TMP196645);
goto LA9;
LA10: ;
(*P_194790).Pos = I_194791;
LA9: ;
goto LA5;
LA6: ;
(*P_194790).Pos = I_194791;
Handleshortoption_194693(P_194790);
LA5: ;
break;
default:
(*P_194790).Kind = ((NU8) 1);
(*P_194790).Pos = Parseword_194607((*P_194790).Cmd, I_194791, &(*P_194790).Key, TMP196645);
break;
}
BeforeRet: ;
}
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY194404* P_194923) {
NimStringDesc* Result_194924;
NimStringDesc* LOC1;
Result_194924 = 0;
LOC1 = 0;
LOC1 = copyStrLast((*P_194923).Cmd, (*P_194923).Pos, (NI64)((*P_194923).Cmd->Sup.len - 1));
Result_194924 = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
return Result_194924;
}
N_NOINLINE(void, parseoptInit)(void) {
}


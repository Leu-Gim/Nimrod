/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55525 TY55525;
typedef struct TY91028 TY91028;
typedef struct TY80011 TY80011;
typedef struct TY76267 TY76267;
typedef struct TY76263 TY76263;
typedef struct TY74013 TY74013;
typedef struct TY55551 TY55551;
typedef struct TY47532 TY47532;
typedef struct TY55547 TY55547;
typedef struct TY54011 TY54011;
typedef struct TY55519 TY55519;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY75015 TY75015;
typedef struct TY76281 TY76281;
typedef struct TY55549 TY55549;
typedef struct TY55539 TY55539;
typedef struct TY52008 TY52008;
typedef struct TY55529 TY55529;
typedef struct TY55527 TY55527;
typedef struct TY55543 TY55543;
typedef struct TY43013 TY43013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY91013[3];
typedef NimStringDesc* TY91017[4];
struct TY80011 {
TY76267* Lex;
TY76263* Tok;
};
struct TY91028 {
NU8 Skin;
TY80011 Parser;
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
typedef NimStringDesc* TY46349[1];
struct TY74013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY75015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY74013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY76267 {
  TY75015 Sup;
NimStringDesc* Filename;
TY76281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY76263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY54011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY76263* Next;
};
struct TY55539 {
NU8 K;
NU8 S;
NU8 Flags;
TY55551* T;
TY52008* R;
NI A;
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
struct TY55529 {
TNimType* m_type;
NI Counter;
TY55527* Data;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY55519 {
  TGenericSeq Sup;
  TY55525* data[SEQ_DECL_SIZE];
};
struct TY76281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY55549 {
  TGenericSeq Sup;
  TY55551* data[SEQ_DECL_SIZE];
};
struct TY55527 {
  TGenericSeq Sup;
  TY55547* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(void, Rawmessage_47553)(NU8 Msg_47555, NimStringDesc* Arg_47556);
N_NIMCALL(void, Openparsers_91034)(TY91028* P_91037, NimStringDesc* Filename_91038, TY74013* Inputstream_91039);
N_NIMCALL(TY55525*, Parsepipe_91123)(NimStringDesc* Filename_91125, TY74013* Inputstream_91126);
N_NIMCALL(TY74013*, Llstreamopen_74032)(NimStringDesc* Filename_74034, NU8 Mode_74035);
N_NIMCALL(NimStringDesc*, Llstreamreadline_74048)(TY74013* S_74050);
N_NIMCALL(NI, Utf8bom_91077)(NimStringDesc* S_91079);
N_NIMCALL(NIM_BOOL, Containsshebang_91087)(NimStringDesc* S_91089, NI I_91090);
N_NIMCALL(void, Openparser_80018)(TY80011* P_80021, NimStringDesc* Filename_80022, TY74013* Inputstream_80023);
N_NIMCALL(TY74013*, Llstreamopen_74025)(NimStringDesc* Data_74027);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(TY55525*, Parseall_80014)(TY80011* P_80017);
N_NIMCALL(void, Closeparser_80024)(TY80011* P_80027);
N_NIMCALL(void, Llstreamclose_74040)(TY74013* S_74042);
N_NIMCALL(TY74013*, Evalpipe_91380)(TY91028* P_91383, TY55525* N_91384, NimStringDesc* Filename_91385, TY74013* Start_91386);
N_NIMCALL(NIM_BOOL, Identeq_54028)(TY54011* Id_54030, NimStringDesc* Name_54031);
N_NIMCALL(TY74013*, Applyfilter_91343)(TY91028* P_91346, TY55525* N_91347, NimStringDesc* Filename_91348, TY74013* Stdin_91349);
N_NIMCALL(TY54011*, Getcallee_91264)(TY55525* N_91266);
N_NIMCALL(NimStringDesc*, Rendertree_84042)(TY55525* N_84044, NU8 Renderflags_84047);
N_NIMCALL(NU8, Getfilter_91186)(TY54011* Ident_91188);
N_NIMCALL(NU8, Getparser_91225)(TY54011* Ident_91227);
N_NIMCALL(TY74013*, Filtertmpl_90001)(TY74013* Stdin_90003, NimStringDesc* Filename_90004, TY55525* Call_90005);
N_NIMCALL(TY74013*, Filterstrip_89009)(TY74013* Stdin_89011, NimStringDesc* Filename_89012, TY55525* Call_89013);
N_NIMCALL(TY74013*, Filterreplace_89004)(TY74013* Stdin_89006, NimStringDesc* Filename_89007, TY55525* Call_89008);
N_NIMCALL(void, Rawmessage_47557)(NU8 Msg_47559, NimStringDesc** Args_47561, NI Args_47561Len0);
N_NIMCALL(void, Messageout_47550)(NimStringDesc* S_47552);
N_NIMCALL(TY74013*, Llstreamopen_74028)(FILE** F_74031);
N_NIMCALL(TY55525*, Parseall_91044)(TY91028* P_91047);
N_NIMCALL(TY55525*, Parseall_82004)(TY80011* P_82007);
N_NIMCALL(void, Internalerror_47571)(NimStringDesc* Errmsg_47573);
N_NIMCALL(void, Closeparsers_91040)(TY91028* P_91043);
N_NIMCALL(TY55525*, Parsetoplevelstmt_80028)(TY80011* P_80031);
N_NIMCALL(TY55525*, Parsetoplevelstmt_82008)(TY80011* P_82011);
STRING_LITERAL(TMP91020, "standard", 8);
STRING_LITERAL(TMP91021, "braces", 6);
STRING_LITERAL(TMP91022, "endx", 4);
NIM_CONST TY91013 Parsernames_91012 = {((NimStringDesc*) &TMP91020),
((NimStringDesc*) &TMP91021),
((NimStringDesc*) &TMP91022)}
;
STRING_LITERAL(TMP91023, "none", 4);
STRING_LITERAL(TMP91024, "stdtmpl", 7);
STRING_LITERAL(TMP91025, "replace", 7);
STRING_LITERAL(TMP91026, "strip", 5);
NIM_CONST TY91017 Filternames_91016 = {((NimStringDesc*) &TMP91023),
((NimStringDesc*) &TMP91024),
((NimStringDesc*) &TMP91025),
((NimStringDesc*) &TMP91026)}
;
STRING_LITERAL(TMP196743, "|", 1);
STRING_LITERAL(TMP196866, "parser to implement", 19);
extern NI Gverbosity_46083;
N_NIMCALL(NI, Utf8bom_91077)(NimStringDesc* S_91079) {
NI Result_91080;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
Result_91080 = 0;
LOC3 = ((NU8)(S_91079->data[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)(S_91079->data[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)(S_91079->data[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
Result_91080 = 3;
goto LA1;
LA6: ;
Result_91080 = 0;
LA1: ;
return Result_91080;
}
N_NIMCALL(NIM_BOOL, Containsshebang_91087)(NimStringDesc* S_91089, NI I_91090) {
NIM_BOOL Result_91091;
NIM_BOOL LOC2;
NI J_91096;
Result_91091 = 0;
LOC2 = ((NU8)(S_91089->data[I_91090]) == (NU8)(35));
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(S_91089->data[(NI64)(I_91090 + 1)]) == (NU8)(33));
LA3: ;
if (!LOC2) goto LA4;
J_91096 = 0;
J_91096 = (NI64)(I_91090 + 2);
while (1) {
if (!(((NU8)(S_91089->data[J_91096])) == ((NU8)(32)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(9)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(11)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(13)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(10)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(12)))) goto LA6;
J_91096 += 1;
} LA6: ;
Result_91091 = ((NU8)(S_91089->data[J_91096]) == (NU8)(47));
LA4: ;
return Result_91091;
}
N_NIMCALL(TY55525*, Parsepipe_91123)(NimStringDesc* Filename_91125, TY74013* Inputstream_91126) {
TY55525* Result_91127;
TY74013* S_91128;
NimStringDesc* Line_91140;
NI I_91141;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
TY80011 Q_91181;
NimStringDesc* LOC14;
TY74013* LOC15;
Result_91127 = 0;
S_91128 = 0;
S_91128 = Llstreamopen_74032(Filename_91125, ((NU8) 0));
if (!!((S_91128 == NIM_NIL))) goto LA2;
Line_91140 = 0;
Line_91140 = Llstreamreadline_74048(S_91128);
I_91141 = 0;
I_91141 = Utf8bom_91077(Line_91140);
LOC5 = Containsshebang_91087(Line_91140, I_91141);
if (!LOC5) goto LA6;
Line_91140 = Llstreamreadline_74048(S_91128);
I_91141 = 0;
LA6: ;
LOC9 = ((NU8)(Line_91140->data[I_91141]) == (NU8)(35));
if (!(LOC9)) goto LA10;
LOC9 = ((NU8)(Line_91140->data[(NI64)(I_91141 + 1)]) == (NU8)(33));
LA10: ;
if (!LOC9) goto LA11;
I_91141 += 2;
while (1) {
if (!(((NU8)(Line_91140->data[I_91141])) == ((NU8)(32)) || ((NU8)(Line_91140->data[I_91141])) == ((NU8)(9)) || ((NU8)(Line_91140->data[I_91141])) == ((NU8)(11)) || ((NU8)(Line_91140->data[I_91141])) == ((NU8)(13)) || ((NU8)(Line_91140->data[I_91141])) == ((NU8)(10)) || ((NU8)(Line_91140->data[I_91141])) == ((NU8)(12)))) goto LA13;
I_91141 += 1;
} LA13: ;
memset((void*)&Q_91181, 0, sizeof(Q_91181));
LOC14 = 0;
LOC14 = copyStr(Line_91140, I_91141);
LOC15 = 0;
LOC15 = Llstreamopen_74025(LOC14);
Openparser_80018(&Q_91181, Filename_91125, LOC15);
Result_91127 = Parseall_80014(&Q_91181);
Closeparser_80024(&Q_91181);
LA11: ;
Llstreamclose_74040(S_91128);
LA2: ;
return Result_91127;
}
N_NIMCALL(TY54011*, Getcallee_91264)(TY55525* N_91266) {
TY54011* Result_91267;
NIM_BOOL LOC2;
NimStringDesc* LOC8;
Result_91267 = 0;
LOC2 = ((*N_91266).Kind == ((NU8) 21));
if (!(LOC2)) goto LA3;
LOC2 = ((*(*N_91266).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA4;
Result_91267 = (*(*N_91266).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA1;
LA4: ;
if (!((*N_91266).Kind == ((NU8) 2))) goto LA6;
Result_91267 = (*N_91266).KindU.S5.Ident;
goto LA1;
LA6: ;
LOC8 = 0;
LOC8 = Rendertree_84042(N_91266, 0);
Rawmessage_47553(((NU8) 159), LOC8);
LA1: ;
return Result_91267;
}
N_NIMCALL(NU8, Getfilter_91186)(TY54011* Ident_91188) {
NU8 Result_91189;
NU8 I_91219;
NU8 Res_91222;
NIM_BOOL LOC3;
Result_91189 = 0;
I_91219 = 0;
Res_91222 = 0;
Res_91222 = ((NU8) 0);
while (1) {
if (!(Res_91222 <= ((NU8) 3))) goto LA1;
I_91219 = Res_91222;
LOC3 = Identeq_54028(Ident_91188, Filternames_91016[(I_91219)-0]);
if (!LOC3) goto LA4;
Result_91189 = I_91219;
goto BeforeRet;
LA4: ;
Res_91222 += 1;
} LA1: ;
Result_91189 = ((NU8) 0);
BeforeRet: ;
return Result_91189;
}
N_NIMCALL(NU8, Getparser_91225)(TY54011* Ident_91227) {
NU8 Result_91228;
NU8 I_91258;
NU8 Res_91261;
NIM_BOOL LOC3;
Result_91228 = 0;
I_91258 = 0;
Res_91261 = 0;
Res_91261 = ((NU8) 0);
while (1) {
if (!(Res_91261 <= ((NU8) 2))) goto LA1;
I_91258 = Res_91261;
LOC3 = Identeq_54028(Ident_91227, Parsernames_91012[(I_91258)-0]);
if (!LOC3) goto LA4;
Result_91228 = I_91258;
goto BeforeRet;
LA4: ;
Res_91261 += 1;
} LA1: ;
Rawmessage_47553(((NU8) 28), (*Ident_91227).S);
BeforeRet: ;
return Result_91228;
}
N_NIMCALL(TY74013*, Applyfilter_91343)(TY91028* P_91346, TY55525* N_91347, NimStringDesc* Filename_91348, TY74013* Stdin_91349) {
TY74013* Result_91350;
TY54011* Ident_91351;
NU8 F_91352;
TY46349 LOC7;
TY46349 LOC8;
Result_91350 = 0;
Ident_91351 = 0;
Ident_91351 = Getcallee_91264(N_91347);
F_91352 = 0;
F_91352 = Getfilter_91186(Ident_91351);
switch (F_91352) {
case ((NU8) 0):
(*P_91346).Skin = Getparser_91225(Ident_91351);
Result_91350 = Stdin_91349;
break;
case ((NU8) 1):
Result_91350 = Filtertmpl_90001(Stdin_91349, Filename_91348, N_91347);
break;
case ((NU8) 3):
Result_91350 = Filterstrip_89009(Stdin_91349, Filename_91348, N_91347);
break;
case ((NU8) 2):
Result_91350 = Filterreplace_89004(Stdin_91349, Filename_91348, N_91347);
break;
}
if (!!((F_91352 == ((NU8) 0)))) goto LA2;
if (!(2 <= Gverbosity_46083)) goto LA5;
memset((void*)&LOC7, 0, sizeof(LOC7));
Rawmessage_47557(((NU8) 231), LOC7, 0);
Messageout_47550((*Result_91350).S);
memset((void*)&LOC8, 0, sizeof(LOC8));
Rawmessage_47557(((NU8) 232), LOC8, 0);
LA5: ;
LA2: ;
return Result_91350;
}
N_NIMCALL(TY74013*, Evalpipe_91380)(TY91028* P_91383, TY55525* N_91384, NimStringDesc* Filename_91385, TY74013* Start_91386) {
TY74013* Result_91387;
NIM_BOOL LOC5;
NIM_BOOL LOC6;
NI I_91475;
NI Res_91544;
Result_91387 = 0;
Result_91387 = Start_91386;
if (!(N_91384 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
LOC6 = ((*N_91384).Kind == ((NU8) 27));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*N_91384).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA7: ;
LOC5 = LOC6;
if (!(LOC5)) goto LA8;
LOC5 = Identeq_54028((*(*N_91384).KindU.S6.Sons->data[0]).KindU.S5.Ident, ((NimStringDesc*) &TMP196743));
LA8: ;
if (!LOC5) goto LA9;
I_91475 = 0;
Res_91544 = 0;
Res_91544 = 1;
while (1) {
if (!(Res_91544 <= 2)) goto LA11;
I_91475 = Res_91544;
if (!((*(*N_91384).KindU.S6.Sons->data[I_91475]).Kind == ((NU8) 27))) goto LA13;
Result_91387 = Evalpipe_91380(P_91383, (*N_91384).KindU.S6.Sons->data[I_91475], Filename_91385, Result_91387);
goto LA12;
LA13: ;
Result_91387 = Applyfilter_91343(P_91383, (*N_91384).KindU.S6.Sons->data[I_91475], Filename_91385, Result_91387);
LA12: ;
Res_91544 += 1;
} LA11: ;
goto LA4;
LA9: ;
if (!((*N_91384).Kind == ((NU8) 101))) goto LA15;
Result_91387 = Evalpipe_91380(P_91383, (*N_91384).KindU.S6.Sons->data[0], Filename_91385, Result_91387);
goto LA4;
LA15: ;
Result_91387 = Applyfilter_91343(P_91383, N_91384, Filename_91385, Result_91387);
LA4: ;
BeforeRet: ;
return Result_91387;
}
N_NIMCALL(void, Openparsers_91034)(TY91028* P_91037, NimStringDesc* Filename_91038, TY74013* Inputstream_91039) {
TY74013* S_91553;
TY55525* Pipe_91554;
S_91553 = 0;
(*P_91037).Skin = ((NU8) 0);
Pipe_91554 = 0;
Pipe_91554 = Parsepipe_91123(Filename_91038, Inputstream_91039);
if (!!((Pipe_91554 == NIM_NIL))) goto LA2;
S_91553 = Evalpipe_91380(P_91037, Pipe_91554, Filename_91038, Inputstream_91039);
goto LA1;
LA2: ;
S_91553 = Inputstream_91039;
LA1: ;
switch ((*P_91037).Skin) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 2):
Openparser_80018(&(*P_91037).Parser, Filename_91038, S_91553);
break;
}
}
N_NIMCALL(TY55525*, Parseall_91044)(TY91028* P_91047) {
TY55525* Result_91067;
Result_91067 = 0;
switch ((*P_91047).Skin) {
case ((NU8) 0):
Result_91067 = Parseall_80014(&(*P_91047).Parser);
break;
case ((NU8) 1):
Result_91067 = Parseall_82004(&(*P_91047).Parser);
break;
case ((NU8) 2):
Internalerror_47571(((NimStringDesc*) &TMP196866));
break;
}
return Result_91067;
}
N_NIMCALL(void, Closeparsers_91040)(TY91028* P_91043) {
Closeparser_80024(&(*P_91043).Parser);
}
N_NIMCALL(TY55525*, Parsefile_91031)(NimStringDesc* Filename_91033) {
TY55525* Result_91055;
TY91028 P_91056;
FILE* F_91057;
NIM_BOOL LOC2;
TY74013* LOC5;
Result_91055 = 0;
memset((void*)&P_91056, 0, sizeof(P_91056));
F_91057 = 0;
LOC2 = Open_3617(&F_91057, Filename_91033, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
Rawmessage_47553(((NU8) 2), Filename_91033);
goto BeforeRet;
LA3: ;
LOC5 = 0;
LOC5 = Llstreamopen_74028(&F_91057);
Openparsers_91034(&P_91056, Filename_91033, LOC5);
Result_91055 = Parseall_91044(&P_91056);
Closeparsers_91040(&P_91056);
BeforeRet: ;
return Result_91055;
}
N_NIMCALL(TY55525*, Parsetoplevelstmt_91048)(TY91028* P_91051) {
TY55525* Result_91074;
Result_91074 = 0;
switch ((*P_91051).Skin) {
case ((NU8) 0):
Result_91074 = Parsetoplevelstmt_80028(&(*P_91051).Parser);
break;
case ((NU8) 1):
Result_91074 = Parsetoplevelstmt_82008(&(*P_91051).Parser);
break;
case ((NU8) 2):
Internalerror_47571(((NimStringDesc*) &TMP196866));
break;
}
return Result_91074;
}
N_NOINLINE(void, syntaxesInit)(void) {
}


/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY55525 TY55525;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55551 TY55551;
typedef struct TY47532 TY47532;
typedef struct TY55547 TY55547;
typedef struct TY54011 TY54011;
typedef struct TY55519 TY55519;
typedef struct TY74013 TY74013;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY74013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
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
struct TY55549 {
  TGenericSeq Sup;
  TY55551* data[SEQ_DECL_SIZE];
};
struct TY55527 {
  TGenericSeq Sup;
  TY55547* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY55525*, Getarg_89036)(TY55525* N_89038, NimStringDesc* Name_89039, NI Pos_89040);
N_NIMCALL(NI, Sonslen_55803)(TY55525* N_55805);
N_NIMCALL(void, Invalidpragma_89032)(TY55525* N_89034);
N_NIMCALL(void, Limessage_47562)(TY47532 Info_47564, NU8 Msg_47565, NimStringDesc* Arg_47566);
N_NIMCALL(NimStringDesc*, Rendertree_84042)(TY55525* N_84044, NU8 Renderflags_84047);
N_NIMCALL(NIM_BOOL, Identeq_54028)(TY54011* Id_54030, NimStringDesc* Name_54031);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(NimStringDesc*, Strarg_89020)(TY55525* N_89022, NimStringDesc* Name_89023, NI Pos_89024, NimStringDesc* Default_89025);
N_NIMCALL(NIM_BOOL, Boolarg_89026)(TY55525* N_89028, NimStringDesc* Name_89029, NI Pos_89030, NIM_BOOL Default_89031);
N_NIMCALL(TY74013*, Llstreamopen_74025)(NimStringDesc* Data_74027);
N_NIMCALL(NIM_BOOL, Llstreamatend_74071)(TY74013* S_74073);
N_NIMCALL(NimStringDesc*, Llstreamreadline_74048)(TY74013* S_74050);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_24981, NIM_BOOL Leading_24982, NIM_BOOL Trailing_24983);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25769, NimStringDesc* Prefix_25770);
N_NIMCALL(void, Llstreamwriteln_74067)(TY74013* S_74069, NimStringDesc* Data_74070);
N_NIMCALL(void, Llstreamclose_74040)(TY74013* S_74042);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* S_26324, NimStringDesc* Sub_26325, NimStringDesc* By_26326);
STRING_LITERAL(TMP196855, "startswith", 10);
STRING_LITERAL(TMP196856, "", 0);
STRING_LITERAL(TMP196857, "true", 4);
STRING_LITERAL(TMP196858, "false", 5);
STRING_LITERAL(TMP196859, "leading", 7);
STRING_LITERAL(TMP196860, "trailing", 8);
STRING_LITERAL(TMP196861, "sub", 3);
STRING_LITERAL(TMP196862, "by", 2);
N_NIMCALL(void, Invalidpragma_89032)(TY55525* N_89034) {
NimStringDesc* LOC1;
LOC1 = 0;
LOC1 = Rendertree_84042(N_89034, 4);
Limessage_47562((*N_89034).Info, ((NU8) 159), LOC1);
}
N_NIMCALL(TY55525*, Getarg_89036)(TY55525* N_89038, NimStringDesc* Name_89039, NI Pos_89040) {
TY55525* Result_89041;
NI I_89076;
NI HEX3Atmp_89206;
NI LOC4;
NI Res_89208;
NIM_BOOL LOC13;
Result_89041 = 0;
Result_89041 = NIM_NIL;
if (!((*N_89038).Kind >= ((NU8) 1) && (*N_89038).Kind <= ((NU8) 18))) goto LA2;
goto BeforeRet;
LA2: ;
I_89076 = 0;
HEX3Atmp_89206 = 0;
LOC4 = Sonslen_55803(N_89038);
HEX3Atmp_89206 = (NI64)(LOC4 - 1);
Res_89208 = 0;
Res_89208 = 1;
while (1) {
if (!(Res_89208 <= HEX3Atmp_89206)) goto LA5;
I_89076 = Res_89208;
if (!((*(*N_89038).KindU.S6.Sons->data[I_89076]).Kind == ((NU8) 23))) goto LA7;
if (!!(((*(*(*N_89038).KindU.S6.Sons->data[I_89076]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA10;
Invalidpragma_89032(N_89038);
LA10: ;
LOC13 = Identeq_54028((*(*(*N_89038).KindU.S6.Sons->data[I_89076]).KindU.S6.Sons->data[0]).KindU.S5.Ident, Name_89039);
if (!LOC13) goto LA14;
Result_89041 = (*(*N_89038).KindU.S6.Sons->data[I_89076]).KindU.S6.Sons->data[1];
goto BeforeRet;
LA14: ;
goto LA6;
LA7: ;
if (!(I_89076 == Pos_89040)) goto LA16;
Result_89041 = (*N_89038).KindU.S6.Sons->data[I_89076];
goto BeforeRet;
goto LA6;
LA16: ;
LA6: ;
Res_89208 += 1;
} LA5: ;
BeforeRet: ;
return Result_89041;
}
N_NIMCALL(NIM_CHAR, Chararg_89014)(TY55525* N_89016, NimStringDesc* Name_89017, NI Pos_89018, NIM_CHAR Default_89019) {
NIM_CHAR Result_89217;
TY55525* X_89218;
Result_89217 = 0;
X_89218 = 0;
X_89218 = Getarg_89036(N_89016, Name_89017, Pos_89018);
if (!(X_89218 == NIM_NIL)) goto LA2;
Result_89217 = Default_89019;
goto LA1;
LA2: ;
if (!((*X_89218).Kind == ((NU8) 5))) goto LA4;
Result_89217 = ((NIM_CHAR) (((NI) (((NI) ((*X_89218).KindU.S1.Intval))))));
goto LA1;
LA4: ;
Invalidpragma_89032(N_89016);
LA1: ;
return Result_89217;
}
N_NIMCALL(NimStringDesc*, Strarg_89020)(TY55525* N_89022, NimStringDesc* Name_89023, NI Pos_89024, NimStringDesc* Default_89025) {
NimStringDesc* Result_89257;
TY55525* X_89258;
Result_89257 = 0;
X_89258 = 0;
X_89258 = Getarg_89036(N_89022, Name_89023, Pos_89024);
if (!(X_89258 == NIM_NIL)) goto LA2;
Result_89257 = copyString(Default_89025);
goto LA1;
LA2: ;
if (!((*X_89258).Kind >= ((NU8) 14) && (*X_89258).Kind <= ((NU8) 16))) goto LA4;
Result_89257 = copyString((*X_89258).KindU.S3.Strval);
goto LA1;
LA4: ;
Invalidpragma_89032(N_89022);
LA1: ;
return Result_89257;
}
N_NIMCALL(NIM_BOOL, Boolarg_89026)(TY55525* N_89028, NimStringDesc* Name_89029, NI Pos_89030, NIM_BOOL Default_89031) {
NIM_BOOL Result_89300;
TY55525* X_89301;
NIM_BOOL LOC4;
NIM_BOOL LOC8;
Result_89300 = 0;
X_89301 = 0;
X_89301 = Getarg_89036(N_89028, Name_89029, Pos_89030);
if (!(X_89301 == NIM_NIL)) goto LA2;
Result_89300 = Default_89031;
goto LA1;
LA2: ;
LOC4 = ((*X_89301).Kind == ((NU8) 2));
if (!(LOC4)) goto LA5;
LOC4 = Identeq_54028((*X_89301).KindU.S5.Ident, ((NimStringDesc*) &TMP196857));
LA5: ;
if (!LOC4) goto LA6;
Result_89300 = NIM_TRUE;
goto LA1;
LA6: ;
LOC8 = ((*X_89301).Kind == ((NU8) 2));
if (!(LOC8)) goto LA9;
LOC8 = Identeq_54028((*X_89301).KindU.S5.Ident, ((NimStringDesc*) &TMP196858));
LA9: ;
if (!LOC8) goto LA10;
Result_89300 = NIM_FALSE;
goto LA1;
LA10: ;
Invalidpragma_89032(N_89028);
LA1: ;
return Result_89300;
}
N_NIMCALL(TY74013*, Filterstrip_89009)(TY74013* Stdin_89011, NimStringDesc* Filename_89012, TY55525* Call_89013) {
TY74013* Result_89360;
NimStringDesc* Pattern_89361;
NIM_BOOL Leading_89362;
NIM_BOOL Trailing_89363;
NIM_BOOL LOC2;
NimStringDesc* Line_89364;
NimStringDesc* Stripped_89365;
NIM_BOOL LOC4;
Result_89360 = 0;
Pattern_89361 = 0;
Pattern_89361 = Strarg_89020(Call_89013, ((NimStringDesc*) &TMP196855), 1, ((NimStringDesc*) &TMP196856));
Leading_89362 = 0;
Leading_89362 = Boolarg_89026(Call_89013, ((NimStringDesc*) &TMP196859), 2, NIM_TRUE);
Trailing_89363 = 0;
Trailing_89363 = Boolarg_89026(Call_89013, ((NimStringDesc*) &TMP196860), 3, NIM_TRUE);
Result_89360 = Llstreamopen_74025(((NimStringDesc*) &TMP196856));
while (1) {
LOC2 = Llstreamatend_74071(Stdin_89011);
if (!!(LOC2)) goto LA1;
Line_89364 = 0;
Line_89364 = Llstreamreadline_74048(Stdin_89011);
Stripped_89365 = 0;
Stripped_89365 = nsuStrip(Line_89364, Leading_89362, Trailing_89363);
LOC4 = (Pattern_89361->Sup.len == 0);
if (LOC4) goto LA5;
LOC4 = nsuStartsWith(Stripped_89365, Pattern_89361);
LA5: ;
if (!LOC4) goto LA6;
Llstreamwriteln_74067(Result_89360, Stripped_89365);
goto LA3;
LA6: ;
Llstreamwriteln_74067(Result_89360, Line_89364);
LA3: ;
} LA1: ;
Llstreamclose_74040(Stdin_89011);
return Result_89360;
}
N_NIMCALL(TY74013*, Filterreplace_89004)(TY74013* Stdin_89006, NimStringDesc* Filename_89007, TY55525* Call_89008) {
TY74013* Result_89376;
NimStringDesc* Sub_89377;
NimStringDesc* By_89382;
NIM_BOOL LOC5;
NimStringDesc* Line_89383;
NimStringDesc* LOC6;
Result_89376 = 0;
Sub_89377 = 0;
Sub_89377 = Strarg_89020(Call_89008, ((NimStringDesc*) &TMP196861), 1, ((NimStringDesc*) &TMP196856));
if (!(Sub_89377->Sup.len == 0)) goto LA2;
Invalidpragma_89032(Call_89008);
LA2: ;
By_89382 = 0;
By_89382 = Strarg_89020(Call_89008, ((NimStringDesc*) &TMP196862), 2, ((NimStringDesc*) &TMP196856));
Result_89376 = Llstreamopen_74025(((NimStringDesc*) &TMP196856));
while (1) {
LOC5 = Llstreamatend_74071(Stdin_89006);
if (!!(LOC5)) goto LA4;
Line_89383 = 0;
Line_89383 = Llstreamreadline_74048(Stdin_89006);
LOC6 = 0;
LOC6 = nsuReplaceStr(Line_89383, Sub_89377, By_89382);
Llstreamwriteln_74067(Result_89376, LOC6);
} LA4: ;
Llstreamclose_74040(Stdin_89006);
return Result_89376;
}
N_NOINLINE(void, filtersInit)(void) {
}


/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51036 TY51036;
typedef struct TY51448 TY51448;
typedef struct TY47532 TY47532;
typedef struct TY43019 TY43019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY43013 TY43013;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TNimObject TNimObject;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY72066[3];
struct TY51036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY51036 TY51054[21];
struct TY51448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY51448 TY51461[12];
struct TY47532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
typedef NimStringDesc* TY48018[4];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY43019 {
TNimType* m_type;
TY43013* Head;
TY43013* Tail;
NI Counter;
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
typedef NimStringDesc* TY47494[13];
typedef NimStringDesc* TY47474[15];
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
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
N_NIMCALL(void, Messageout_47550)(NimStringDesc* S_47552);
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_72061)(void);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_24965, NimStringDesc** A_24967, NI A_24967Len0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18687);
N_NIMCALL(NU8, Whichkeyword_71468)(NimStringDesc* Id_71470);
N_NIMCALL(void, Expectarg_72268)(NimStringDesc* Switch_72270, NimStringDesc* Arg_72271, NU8 Pass_72272, TY47532 Info_72273);
N_NIMCALL(void, Limessage_47562)(TY47532 Info_47564, NU8 Msg_47565, NimStringDesc* Arg_47566);
N_NIMCALL(NimStringDesc*, Processpath_72403)(NimStringDesc* Path_72405);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_36856);
N_NIMCALL(NimStringDesc*, Getprefixdir_46107)(void);
N_NIMCALL(NIM_BOOL, Contains_43159)(TY43019* List_43161, NimStringDesc* Data_43162);
N_NIMCALL(void, Prependstr_43071)(TY43019* List_43074, NimStringDesc* Data_43075);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, Definesymbol_63053)(NimStringDesc* Symbol_63055);
N_NIMCALL(void, Undefsymbol_63056)(NimStringDesc* Symbol_63058);
N_NIMCALL(void, Processcompile_72411)(NimStringDesc* Filename_72413);
N_NIMCALL(NimStringDesc*, Findfile_46088)(NimStringDesc* F_46090);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_39020, NimStringDesc* Ext_39021);
N_NIMCALL(void, Addexternalfiletocompile_69355)(NimStringDesc* Filename_69357);
N_NIMCALL(void, Addfiletolink_69358)(NimStringDesc* Filename_69360);
N_NIMCALL(NimStringDesc*, Completecfilepath_69344)(NimStringDesc* Cfile_69346, NIM_BOOL Createsubdir_69347);
N_NIMCALL(void, Expectnoarg_72274)(NimStringDesc* Switch_72276, NimStringDesc* Arg_72277, NU8 Pass_72278, TY47532 Info_72279);
N_NIMCALL(void, Processonoffswitch_72216)(NU32 Op_72218, NimStringDesc* Arg_72219, NU8 Pass_72220, TY47532 Info_72221);
N_NIMCALL(void, Processspecificnote_72280)(NimStringDesc* Arg_72282, NU8 State_72283, NU8 Pass_72284, TY47532 Info_72285);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(void, Invalidcmdlineoption_72133)(NU8 Pass_72135, NimStringDesc* Switch_72136, TY47532 Info_72137);
N_NIMCALL(NI, Findstr_71471)(NimStringDesc** A_71474, NI A_71474Len0, NimStringDesc* S_71475);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(void, Processonoffswitchg_72242)(NU32 Op_72244, NimStringDesc* Arg_72245, NU8 Pass_72246, TY47532 Info_72247);
N_NIMCALL(void, Listsymbols_63062)(void);
N_NIMCALL(void, Addcompileoption_69361)(NimStringDesc* Option_69363);
N_NIMCALL(void, Addlinkoption_69364)(NimStringDesc* Option_69366);
N_NIMCALL(void, Addimplicitmod_46140)(NimStringDesc* Filename_46142);
N_NIMCALL(NU8, Nametoos_51564)(NimStringDesc* Name_51566);
N_NIMCALL(void, Settarget_51574)(NU8 O_51576, NU8 C_51577);
N_NIMCALL(void, Initdefines_63049)(void);
N_NIMCALL(NU8, Nametocpu_51567)(NimStringDesc* Name_51569);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_25504);
N_NIMCALL(void, Writeversioninfo_72115)(NU8 Pass_72117);
N_NIMCALL(void, Writeadvancedusage_72091)(NU8 Pass_72093);
N_NIMCALL(void, Helponerror_72079)(NU8 Pass_72081);
N_NIMCALL(void, Splitswitch_72138)(NimStringDesc* Switch_72140, NimStringDesc** Cmd_72142, NimStringDesc** Arg_72143, NU8 Pass_72144, TY47532 Info_72145);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(void, Putenv_39639)(NimStringDesc* Key_39641, NimStringDesc* Val_39642);
N_NIMCALL(void, Setcc_69381)(NimStringDesc* Ccname_69383);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_26227, NIM_CHAR Sub_26228, NI Start_26229);
N_NIMCALL(void, Setconfigvar_46136)(NimStringDesc* Key_46138, NimStringDesc* Val_46139);
STRING_LITERAL(TMP196635, "Nimrod Compiler Version $1 (2010-10-21) [$2: $3]\012Copyright (c) "
"2004-2010 by Andreas Rumpf\012", 90);
STRING_LITERAL(TMP196636, "0.8.10", 6);
extern NIM_CONST TY51054 Os_51053;
extern NIM_CONST TY51461 Cpu_51460;
STRING_LITERAL(TMP196637, "Usage:\012  nimrod command [options] inputfile [arguments]\012Command"
":\012  compile, c                compile project with default code "
"generator (C)\012  compileToC, cc            compile project with C"
" code generator\012  doc                       generate the documen"
"tation for inputfile\012  rst2html                  converts a reSt"
"ructuredText file to HTML\012  rst2tex                   converts a"
" reStructuredText file to TeX\012Arguments:\012  arguments are passed "
"to the program being run (if --run option is selected)\012Options:\012"
"  -p, --path:PATH           add path to search paths\012  -o, --out"
":FILE            set the output filename\012  -d, --define:SYMBOL  "
"     define a conditional symbol\012  -u, --undef:SYMBOL        und"
"efine a conditional symbol\012  -f, --forceBuild          force reb"
"uilding of all modules\012  --stackTrace:on|off       turn stack tr"
"acing on|off\012  --lineTrace:on|off        turn line tracing on|of"
"f\012  --debugger:on|off         turn Embedded Nimrod Debugger on|o"
"ff\012  -x, --checks:on|off       turn all runtime checks on|off\012  "
"--objChecks:on|off        turn obj conversion checks on|off\012  --"
"fieldChecks:on|off      turn case variant field checks on|off\012  "
"--rangeChecks:on|off      turn range checks on|off\012  --boundChec"
"ks:on|off      turn bound checks on|off\012  --overflowChecks:on|of"
"f   turn int over-/underflow checks on|off\012  -a, --assertions:on"
"|off   turn assertions on|off\012  --floatChecks:on|off      turn a"
"ll floating point (NaN/Inf) checks on|off\012  --nanChecks:on|off  "
"      turn NaN checks on|off\012  --infChecks:on|off        turn In"
"f checks on|off\012  --deadCodeElim:on|off     whole program dead c"
"ode elimination on|off\012  --opt:none|speed|size     optimize not "
"at all or for speed|size\012  --app:console|gui|lib     generate a "
"console|GUI application|dynamic library\012  -r, --run             "
"    run the compiled program with given arguments\012  --advanced  "
"              show advanced command line switches\012  -h, --help  "
"              show this help\012", 1948);
STRING_LITERAL(TMP196647, "nimrod", 6);
STRING_LITERAL(TMP196650, "lib", 3);
STRING_LITERAL(TMP196651, "", 0);
STRING_LITERAL(TMP196667, "boehmgc", 7);
STRING_LITERAL(TMP196668, "nogc", 4);
extern NIM_CONST TY47494 Hintstostr_47493;
extern NIM_CONST TY47474 Warningstostr_47473;
STRING_LITERAL(TMP196669, "endb", 4);
STRING_LITERAL(TMP196670, "profiler", 8);
STRING_LITERAL(TMP196671, "guiapp", 6);
STRING_LITERAL(TMP196672, "library", 7);
STRING_LITERAL(TMP196676, "Advanced commands:\012  run                       run the project "
"(with Tiny C backend; buggy!)\012  pretty                    pretty"
" print the inputfile\012  genDepend                 generate a DOT "
"file containing the\012                            module dependenc"
"y graph\012  listDef                   list all defined conditional"
"s and exit\012  check                     checks the project for sy"
"ntax and semantic\012  parse                     parses a single fi"
"le (for debugging Nimrod)\012Advanced options:\012  -w, --warnings:on|"
"off     turn all warnings on|off\012  --warning[X]:on|off       tur"
"n specific warning X on|off\012  --hints:on|off            turn all"
" hints on|off\012  --hint[X]:on|off          turn specific hint X o"
"n|off\012  --lib:PATH                set the system library path\012  "
"-c, --compileOnly         compile only; do not assemble or link\012"
"  --noLinking               compile but do not link\012  --noMain  "
"                do not generate a main procedure\012  --genScript  "
"             generate a compile script (in the \'nimcache\'\012      "
"                      subdirectory named \'compile_$project$scrip"
"text\')\012  --os:SYMBOL               set the target operating syst"
"em (cross-compilation)\012  --cpu:SYMBOL              set the targe"
"t processor (cross-compilation)\012  --debuginfo               enab"
"les debug information\012  -t, --passc:OPTION        pass an option"
" to the C compiler\012  -l, --passl:OPTION        pass an option to"
" the linker\012  --genMapping              generate a mapping file "
"containing\012                            (Nimrod, mangled) identif"
"ier pairs\012  --lineDir:on|off          generation of #line direct"
"ive on|off\012  --checkpoints:on|off      turn checkpoints on|off; "
"for debugging Nimrod\012  --skipCfg                 do not read the"
" general configuration file\012  --skipProjCfg             do not r"
"ead the project\'s configuration file\012  --gc:refc|boehm|none     "
" use Nimrod\'s native GC|Boehm GC|no GC\012  --index:FILE           "
"   use FILE to generate a documenation index file\012  --putenv:key"
"=value        set an environment variable\012  --listCmd           "
"      list the commands used to execute external programs\012  --pa"
"rallelBuild=0|1|...   perform a parallel build\012                 "
"           value = number of processors (0 for auto-detect)\012  --"
"verbosity:0|1|2|3       set Nimrod\'s verbosity level (0 is defau"
"lt)\012  -v, --version             show detailed version informatio"
"n\012", 2369);
NIM_BOOL Helpwritten_72076;
NIM_BOOL Versionwritten_72077;
NIM_BOOL Advhelpwritten_72078;
extern NU8 Hostos_51563;
extern NU8 Hostcpu_51561;
extern NimStringDesc* Libpath_46110;
extern TY43019 Searchpaths_46079;
extern NimStringDesc* Outfile_46080;
extern TY11190 Gch_11210;
extern NU32 Gglobaloptions_46077;
extern NU32 Goptions_46075;
extern NU32 Gnotes_47539;
extern NimStringDesc* Gindexfile_46081;
extern NU8 Targetcpu_51560;
extern NU8 Targetos_51562;
extern NI Gverbosity_46083;
extern NI Gnumberofprocessors_46084;
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793) {
memcpy(((NCSTRING) (&(*Dest_18792).data[((*Dest_18792).Sup.len)-0])), ((NCSTRING) ((*Src_18793).data)), ((int) ((NI32)((NI32)((*Src_18793).Sup.len + 1) * 1))));
(*Dest_18792).Sup.len += (*Src_18793).Sup.len;
}
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_72061)(void) {
NimStringDesc* Result_72063;
NimStringDesc* LOC1;
TY72066 LOC2;
NimStringDesc* LOC3;
Result_72063 = 0;
LOC1 = 0;
memset((void*)&LOC2, 0, sizeof(LOC2));
LOC2[0] = copyString(((NimStringDesc*) &TMP196636));
LOC2[1] = copyString(Os_51053[(Hostos_51563)-1].Name);
LOC2[2] = copyString(Cpu_51460[(Hostcpu_51561)-1].Name);
LOC3 = 0;
LOC3 = nsuFormatOpenArray(((NimStringDesc*) &TMP196635), LOC2, 3);
LOC1 = rawNewString(LOC3->Sup.len + 1948);
appendString(LOC1, LOC3);
appendString(LOC1, ((NimStringDesc*) &TMP196637));
Result_72063 = LOC1;
return Result_72063;
}
N_NIMCALL(void, Writecommandlineusage_72001)(void) {
NimStringDesc* LOC4;
if (!!(Helpwritten_72076)) goto LA2;
LOC4 = 0;
LOC4 = Getcommandlinedesc_72061();
Messageout_47550(LOC4);
Helpwritten_72076 = NIM_TRUE;
LA2: ;
}
N_NIMCALL(void, Expectarg_72268)(NimStringDesc* Switch_72270, NimStringDesc* Arg_72271, NU8 Pass_72272, TY47532 Info_72273) {
if (!((Arg_72271) && (Arg_72271)->Sup.len == 0)) goto LA2;
Limessage_47562(Info_72273, ((NU8) 42), Switch_72270);
LA2: ;
}
N_NIMCALL(NimStringDesc*, Processpath_72403)(NimStringDesc* Path_72405) {
NimStringDesc* Result_72406;
TY48018 LOC1;
NimStringDesc* LOC2;
Result_72406 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = copyString(((NimStringDesc*) &TMP196647));
LOC1[1] = Getprefixdir_46107();
LOC1[2] = copyString(((NimStringDesc*) &TMP196650));
LOC1[3] = copyString(Libpath_46110);
LOC2 = 0;
LOC2 = nsuFormatOpenArray(Path_72405, LOC1, 4);
Result_72406 = nosUnixToNativePath(LOC2);
return Result_72406;
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
N_NIMCALL(void, Processcompile_72411)(NimStringDesc* Filename_72413) {
NimStringDesc* Found_72414;
NimStringDesc* Trunc_72415;
NimStringDesc* LOC4;
Found_72414 = 0;
Found_72414 = Findfile_46088(Filename_72413);
if (!((Found_72414) && (Found_72414)->Sup.len == 0)) goto LA2;
Found_72414 = copyString(Filename_72413);
LA2: ;
Trunc_72415 = 0;
Trunc_72415 = nosChangeFileExt(Found_72414, ((NimStringDesc*) &TMP196651));
Addexternalfiletocompile_69355(Found_72414);
LOC4 = 0;
LOC4 = Completecfilepath_69344(Trunc_72415, NIM_FALSE);
Addfiletolink_69358(LOC4);
}
N_NIMCALL(void, Expectnoarg_72274)(NimStringDesc* Switch_72276, NimStringDesc* Arg_72277, NU8 Pass_72278, TY47532 Info_72279) {
if (!!(((Arg_72277) && (Arg_72277)->Sup.len == 0))) goto LA2;
Limessage_47562(Info_72279, ((NU8) 43), Switch_72276);
LA2: ;
}
N_NIMCALL(void, Processonoffswitch_72216)(NU32 Op_72218, NimStringDesc* Arg_72219, NU8 Pass_72220, TY47532 Info_72221) {
NU8 LOC1;
LOC1 = Whichkeyword_71468(Arg_72219);
switch (LOC1) {
case ((NU8) 125):
Goptions_46075 = (Goptions_46075 | Op_72218);
break;
case ((NU8) 126):
Goptions_46075 = (Goptions_46075 & ~ Op_72218);
break;
default:
Limessage_47562(Info_72221, ((NU8) 47), Arg_72219);
break;
}
}
N_NIMCALL(void, Invalidcmdlineoption_72133)(NU8 Pass_72135, NimStringDesc* Switch_72136, TY47532 Info_72137) {
Limessage_47562(Info_72137, ((NU8) 41), Switch_72136);
}
N_NIMCALL(void, Processspecificnote_72280)(NimStringDesc* Arg_72282, NU8 State_72283, NU8 Pass_72284, TY47532 Info_72285) {
NimStringDesc* Id_72286;
NI I_72287;
NU8 N_72288;
NIM_BOOL LOC2;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NI X_72362;
NI X_72370;
NimStringDesc* LOC23;
NU8 LOC24;
Id_72286 = 0;
Id_72286 = copyString(((NimStringDesc*) &TMP196651));
I_72287 = 0;
I_72287 = 0;
N_72288 = 0;
N_72288 = ((NU8) 222);
while (1) {
LOC2 = (I_72287 < (NI32)(Arg_72282->Sup.len + 0));
if (!(LOC2)) goto LA3;
LOC2 = !(((NU8)(Arg_72282->data[I_72287]) == (NU8)(93)));
LA3: ;
if (!LOC2) goto LA1;
Id_72286 = addChar(Id_72286, Arg_72282->data[I_72287]);
I_72287 += 1;
} LA1: ;
LOC5 = (I_72287 < (NI32)(Arg_72282->Sup.len + 0));
if (!(LOC5)) goto LA6;
LOC5 = ((NU8)(Arg_72282->data[I_72287]) == (NU8)(93));
LA6: ;
if (!LOC5) goto LA7;
I_72287 += 1;
goto LA4;
LA7: ;
Invalidcmdlineoption_72133(Pass_72284, Arg_72282, Info_72285);
LA4: ;
LOC10 = (I_72287 < (NI32)(Arg_72282->Sup.len + 0));
if (!(LOC10)) goto LA11;
LOC10 = (((NU8)(Arg_72282->data[I_72287])) == ((NU8)(58)) || ((NU8)(Arg_72282->data[I_72287])) == ((NU8)(61)));
LA11: ;
if (!LOC10) goto LA12;
I_72287 += 1;
goto LA9;
LA12: ;
Invalidcmdlineoption_72133(Pass_72284, Arg_72282, Info_72285);
LA9: ;
if (!(State_72283 == ((NU8) 96))) goto LA15;
X_72362 = 0;
X_72362 = Findstr_71471(Hintstostr_47493, 13, Id_72286);
if (!(0 <= X_72362)) goto LA18;
N_72288 = ((NU8) (((NU8) ((NI32)(X_72362 + 222)))));
goto LA17;
LA18: ;
Invalidcmdlineoption_72133(Pass_72284, Arg_72282, Info_72285);
LA17: ;
goto LA14;
LA15: ;
X_72370 = 0;
X_72370 = Findstr_71471(Warningstostr_47473, 15, Id_72286);
if (!(0 <= X_72370)) goto LA21;
N_72288 = ((NU8) (((NU8) ((NI32)(X_72370 + 207)))));
goto LA20;
LA21: ;
Invalidcmdlineoption_72133(Pass_72284, Arg_72282, Info_72285);
LA20: ;
LA14: ;
LOC23 = 0;
LOC23 = copyStr(Arg_72282, I_72287);
LOC24 = Whichkeyword_71468(LOC23);
switch (LOC24) {
case ((NU8) 125):
Gnotes_47539 |=(1<<((NI32)((((NU8) (N_72288))-207))%(sizeof(NI32)*8)));
break;
case ((NU8) 126):
Gnotes_47539 &= ~(1 << ((NI32)((((NU8) (N_72288))-207)) % (sizeof(NI32)*8)));
break;
default:
Limessage_47562(Info_72285, ((NU8) 47), Arg_72282);
break;
}
}
N_NIMCALL(void, Processonoffswitchg_72242)(NU32 Op_72244, NimStringDesc* Arg_72245, NU8 Pass_72246, TY47532 Info_72247) {
NU8 LOC1;
LOC1 = Whichkeyword_71468(Arg_72245);
switch (LOC1) {
case ((NU8) 125):
Gglobaloptions_46077 = (Gglobaloptions_46077 | Op_72244);
break;
case ((NU8) 126):
Gglobaloptions_46077 = (Gglobaloptions_46077 & ~ Op_72244);
break;
default:
Limessage_47562(Info_72247, ((NU8) 47), Arg_72245);
break;
}
}
N_NIMCALL(void, Writeversioninfo_72115)(NU8 Pass_72117) {
NIM_BOOL LOC2;
TY72066 LOC6;
NimStringDesc* LOC7;
LOC2 = (Pass_72117 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Versionwritten_72077);
LA3: ;
if (!LOC2) goto LA4;
Versionwritten_72077 = NIM_TRUE;
Helpwritten_72076 = NIM_TRUE;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(((NimStringDesc*) &TMP196636));
LOC6[1] = copyString(Os_51053[(Hostos_51563)-1].Name);
LOC6[2] = copyString(Cpu_51460[(Hostcpu_51561)-1].Name);
LOC7 = 0;
LOC7 = nsuFormatOpenArray(((NimStringDesc*) &TMP196635), LOC6, 3);
Messageout_47550(LOC7);
exit(0);
LA4: ;
}
N_NIMCALL(void, Writeadvancedusage_72091)(NU8 Pass_72093) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
TY72066 LOC7;
NimStringDesc* LOC8;
LOC2 = (Pass_72093 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Advhelpwritten_72078);
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(((NimStringDesc*) &TMP196636));
LOC7[1] = copyString(Os_51053[(Hostos_51563)-1].Name);
LOC7[2] = copyString(Cpu_51460[(Hostcpu_51561)-1].Name);
LOC8 = 0;
LOC8 = nsuFormatOpenArray(((NimStringDesc*) &TMP196635), LOC7, 3);
LOC6 = rawNewString(LOC8->Sup.len + 2369);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP196676));
Messageout_47550(LOC6);
Advhelpwritten_72078 = NIM_TRUE;
Helpwritten_72076 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Helponerror_72079)(NU8 Pass_72081) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
LOC2 = (Pass_72081 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Helpwritten_72076);
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
LOC6 = Getcommandlinedesc_72061();
Messageout_47550(LOC6);
Helpwritten_72076 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Splitswitch_72138)(NimStringDesc* Switch_72140, NimStringDesc** Cmd_72142, NimStringDesc** Arg_72143, NU8 Pass_72144, TY47532 Info_72145) {
NI I_72146;
NIM_BOOL LOC2;
NIM_BOOL LOC7;
unsureAsgnRef((void**) &(*Cmd_72142), copyString(((NimStringDesc*) &TMP196651)));
I_72146 = 0;
I_72146 = 0;
LOC2 = (I_72146 < Switch_72140->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Switch_72140->data[I_72146]) == (NU8)(45));
LA3: ;
if (!LOC2) goto LA4;
I_72146 += 1;
LA4: ;
LOC7 = (I_72146 < Switch_72140->Sup.len);
if (!(LOC7)) goto LA8;
LOC7 = ((NU8)(Switch_72140->data[I_72146]) == (NU8)(45));
LA8: ;
if (!LOC7) goto LA9;
I_72146 += 1;
LA9: ;
while (1) {
if (!(I_72146 < Switch_72140->Sup.len)) goto LA11;
switch (((NU8)(Switch_72140->data[I_72146]))) {
case 97 ... 122:
case 65 ... 90:
case 48 ... 57:
case 95:
case 46:
(*Cmd_72142) = addChar((*Cmd_72142), Switch_72140->data[I_72146]);
break;
default:
goto LA11;
break;
}
I_72146 += 1;
} LA11: ;
if (!(Switch_72140->Sup.len <= I_72146)) goto LA13;
unsureAsgnRef((void**) &(*Arg_72143), copyString(((NimStringDesc*) &TMP196651)));
goto LA12;
LA13: ;
if (!(((NU8)(Switch_72140->data[I_72146])) == ((NU8)(58)) || ((NU8)(Switch_72140->data[I_72146])) == ((NU8)(61)) || ((NU8)(Switch_72140->data[I_72146])) == ((NU8)(91)))) goto LA15;
unsureAsgnRef((void**) &(*Arg_72143), copyStr(Switch_72140, (NI32)(I_72146 + 1)));
goto LA12;
LA15: ;
Invalidcmdlineoption_72133(Pass_72144, Switch_72140, Info_72145);
LA12: ;
}
N_NIMCALL(void, Processswitch_72012)(NimStringDesc* Switch_72014, NimStringDesc* Arg_72015, NU8 Pass_72016, TY47532 Info_72017) {
NU8 Theos_72840;
NU8 Cpu_72841;
NimStringDesc* Key_72842;
NimStringDesc* Val_72843;
NimStringDesc* Path_72844;
NU8 LOC1;
NIM_BOOL LOC3;
NU8 LOC12;
NU8 LOC19;
NU8 LOC20;
NI LOC52;
Theos_72840 = 0;
Cpu_72841 = 0;
Key_72842 = 0;
Val_72843 = 0;
Path_72844 = 0;
LOC1 = Whichkeyword_71468(Switch_72014);
switch (LOC1) {
case ((NU8) 143):
case ((NU8) 144):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Path_72844 = Processpath_72403(Arg_72015);
LOC3 = Contains_43159(&Searchpaths_46079, Path_72844);
if (!!(LOC3)) goto LA4;
Prependstr_43071(&Searchpaths_46079, Path_72844);
LA4: ;
break;
case ((NU8) 45):
case ((NU8) 161):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
asgnRefNoCycle((void**) &Outfile_46080, copyString(Arg_72015));
break;
case ((NU8) 100):
case ((NU8) 145):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Definesymbol_63053(Arg_72015);
break;
case ((NU8) 101):
case ((NU8) 146):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Undefsymbol_63056(Arg_72015);
break;
case ((NU8) 107):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA7;
Processcompile_72411(Arg_72015);
LA7: ;
break;
case ((NU8) 106):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA10;
Addfiletolink_69358(Arg_72015);
LA10: ;
break;
case ((NU8) 147):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 9))%(sizeof(NI32)*8)));
break;
case ((NU8) 148):
case ((NU8) 176):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
break;
case ((NU8) 149):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 7))%(sizeof(NI32)*8)));
break;
case ((NU8) 196):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 18))%(sizeof(NI32)*8)));
break;
case ((NU8) 150):
case ((NU8) 151):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 1))%(sizeof(NI32)*8)));
break;
case ((NU8) 156):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
LOC12 = Whichkeyword_71468(Arg_72015);
switch (LOC12) {
case ((NU8) 158):
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 2))%(sizeof(NI32)*8)));
Gglobaloptions_46077 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP196667));
break;
case ((NU8) 157):
Gglobaloptions_46077 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 3))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Gglobaloptions_46077 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Gglobaloptions_46077 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP196668));
break;
default:
Limessage_47562(Info_72017, ((NU8) 48), Arg_72015);
break;
}
break;
case ((NU8) 136):
case ((NU8) 137):
Processonoffswitch_72216(524288, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 95):
Processspecificnote_72280(Arg_72015, ((NU8) 95), Pass_72016, Info_72017);
break;
case ((NU8) 96):
Processspecificnote_72280(Arg_72015, ((NU8) 96), Pass_72016, Info_72017);
break;
case ((NU8) 138):
Processonoffswitch_72216(1048576, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 195):
Processonoffswitch_72216(2048, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 103):
Processonoffswitch_72216(8388608, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 104):
Processonoffswitch_72216(256, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 114):
Processonoffswitch_72216(512, Arg_72015, Pass_72016, Info_72017);
if (!((Goptions_46075 &(1<<((((NU8) 17))&31)))!=0)) goto LA14;
Definesymbol_63053(((NimStringDesc*) &TMP196669));
goto LA13;
LA14: ;
Undefsymbol_63056(((NimStringDesc*) &TMP196669));
LA13: ;
break;
case ((NU8) 74):
Processonoffswitch_72216(4096, Arg_72015, Pass_72016, Info_72017);
if (!((Goptions_46075 &(1<<((((NU8) 20))&31)))!=0)) goto LA17;
Definesymbol_63053(((NimStringDesc*) &TMP196670));
goto LA16;
LA17: ;
Undefsymbol_63056(((NimStringDesc*) &TMP196670));
LA16: ;
break;
case ((NU8) 127):
case ((NU8) 187):
Processonoffswitch_72216(IL64(4261609472), Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 132):
Processonoffswitch_72216(IL64(2147549184), Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 134):
Processonoffswitch_72216(65536, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 133):
Processonoffswitch_72216(IL64(2147483648), Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 75):
Processonoffswitch_72216(33554432, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 186):
Processonoffswitch_72216(67108864, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 128):
Processonoffswitch_72216(134217728, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 129):
Processonoffswitch_72216(268435456, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 130):
Processonoffswitch_72216(536870912, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 102):
Processonoffswitch_72216(262144, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 135):
case ((NU8) 159):
Processonoffswitch_72216(131072, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 152):
Processonoffswitchg_72242(268435456, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 160):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
LOC19 = Whichkeyword_71468(Arg_72015);
switch (LOC19) {
case ((NU8) 140):
Goptions_46075 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
Goptions_46075 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
case ((NU8) 141):
Goptions_46075 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_46075 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Goptions_46075 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_46075 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
default:
Limessage_47562(Info_72017, ((NU8) 49), Arg_72015);
break;
}
break;
case ((NU8) 162):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
LOC20 = Whichkeyword_71468(Arg_72015);
switch (LOC20) {
case ((NU8) 164):
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 11))%(sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP196671));
break;
case ((NU8) 163):
Gglobaloptions_46077 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
break;
case ((NU8) 89):
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 10))%(sizeof(NI32)*8)));
Gglobaloptions_46077 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP196672));
break;
default:
Limessage_47562(Info_72017, ((NU8) 50), Arg_72015);
break;
}
break;
case ((NU8) 207):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA22;
Listsymbols_63062();
LA22: ;
break;
case ((NU8) 165):
case ((NU8) 166):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA25;
Addcompileoption_69361(Arg_72015);
LA25: ;
break;
case ((NU8) 167):
case ((NU8) 168):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA28;
Addlinkoption_69364(Arg_72015);
LA28: ;
break;
case ((NU8) 199):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA31;
asgnRefNoCycle((void**) &Gindexfile_46081, copyString(Arg_72015));
LA31: ;
break;
case ((NU8) 28):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Addimplicitmod_46140(Arg_72015);
break;
case ((NU8) 169):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
break;
case ((NU8) 171):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
break;
case ((NU8) 172):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!(Pass_72016 == ((NU8) 0))) goto LA34;
Theos_72840 = Nametoos_51564(Arg_72015);
if (!(Theos_72840 == ((NU8) 0))) goto LA37;
Limessage_47562(Info_72017, ((NU8) 51), Arg_72015);
LA37: ;
if (!!((Theos_72840 == Hostos_51563))) goto LA40;
Settarget_51574(Theos_72840, Targetcpu_51560);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_63049();
LA40: ;
LA34: ;
break;
case ((NU8) 173):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!(Pass_72016 == ((NU8) 0))) goto LA43;
Cpu_72841 = Nametocpu_51567(Arg_72015);
if (!(Cpu_72841 == ((NU8) 0))) goto LA46;
Limessage_47562(Info_72017, ((NU8) 52), Arg_72015);
LA46: ;
if (!!((Cpu_72841 == Hostcpu_51561))) goto LA49;
Settarget_51574(Targetos_51562, Cpu_72841);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_63049();
LA49: ;
LA43: ;
break;
case ((NU8) 179):
case ((NU8) 180):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 181):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gverbosity_46083 = nsuParseInt(Arg_72015);
break;
case ((NU8) 105):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gnumberofprocessors_46084 = nsuParseInt(Arg_72015);
break;
case ((NU8) 188):
case ((NU8) 182):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Writeversioninfo_72115(Pass_72016);
break;
case ((NU8) 189):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Writeadvancedusage_72091(Pass_72016);
break;
case ((NU8) 183):
case ((NU8) 184):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Helponerror_72079(Pass_72016);
break;
case ((NU8) 185):
Processonoffswitchg_72242(8388608, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 190):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
break;
case ((NU8) 191):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 17))%(sizeof(NI32)*8)));
break;
case ((NU8) 193):
Expectnoarg_72274(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 12))%(sizeof(NI32)*8)));
break;
case ((NU8) 89):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
asgnRefNoCycle((void**) &Libpath_46110, Processpath_72403(Arg_72015));
break;
case ((NU8) 216):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Splitswitch_72138(Arg_72015, &Key_72842, &Val_72843, Pass_72016, Info_72017);
Putenv_39639(Key_72842, Val_72843);
break;
case ((NU8) 192):
Expectarg_72268(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Setcc_69381(Arg_72015);
break;
default:
LOC52 = nsuFindChar(Switch_72014, 46, 0);
if (!(0 <= LOC52)) goto LA53;
Setconfigvar_46136(Switch_72014, Arg_72015);
goto LA51;
LA53: ;
Invalidcmdlineoption_72133(Pass_72016, Switch_72014, Info_72017);
LA51: ;
break;
}
}
N_NIMCALL(NIM_BOOL, Testcompileoption_72514)(NimStringDesc* Switch_72516, TY47532 Info_72517) {
NIM_BOOL Result_72518;
NU8 LOC1;
Result_72518 = 0;
LOC1 = Whichkeyword_71468(Switch_72516);
switch (LOC1) {
case ((NU8) 147):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 9))&31)))!=0);
break;
case ((NU8) 148):
case ((NU8) 176):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 6))&31)))!=0);
break;
case ((NU8) 149):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 7))&31)))!=0);
break;
case ((NU8) 196):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 18))&31)))!=0);
break;
case ((NU8) 150):
case ((NU8) 151):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 1))&31)))!=0);
break;
case ((NU8) 136):
case ((NU8) 137):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 11))&31)))!=0);
break;
case ((NU8) 138):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 12))&31)))!=0);
break;
case ((NU8) 195):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 19))&31)))!=0);
break;
case ((NU8) 103):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 15))&31)))!=0);
break;
case ((NU8) 104):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 16))&31)))!=0);
break;
case ((NU8) 114):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 17))&31)))!=0);
break;
case ((NU8) 74):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 20))&31)))!=0);
break;
case ((NU8) 127):
case ((NU8) 187):
Result_72518 = ((Goptions_46075 & IL64(4261609472)) == IL64(4261609472));
break;
case ((NU8) 132):
Result_72518 = ((Goptions_46075 & IL64(2147549184)) == IL64(2147549184));
break;
case ((NU8) 134):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 8))&31)))!=0);
break;
case ((NU8) 133):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 7))&31)))!=0);
break;
case ((NU8) 75):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 1))&31)))!=0);
break;
case ((NU8) 186):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 2))&31)))!=0);
break;
case ((NU8) 128):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 3))&31)))!=0);
break;
case ((NU8) 129):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 4))&31)))!=0);
break;
case ((NU8) 130):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 5))&31)))!=0);
break;
case ((NU8) 102):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 10))&31)))!=0);
break;
case ((NU8) 135):
case ((NU8) 159):
Result_72518 = ((Goptions_46075 &(1<<((((NU8) 9))&31)))!=0);
break;
case ((NU8) 152):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 4))&31)))!=0);
break;
case ((NU8) 179):
case ((NU8) 180):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 14))&31)))!=0);
break;
case ((NU8) 185):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 15))&31)))!=0);
break;
case ((NU8) 193):
Result_72518 = ((Gglobaloptions_46077 &(1<<((((NU8) 12))&31)))!=0);
break;
default:
Invalidcmdlineoption_72133(((NU8) 0), Switch_72516, Info_72517);
break;
}
return Result_72518;
}
N_NIMCALL(NIM_BOOL, Testcompileoptionarg_72416)(NimStringDesc* Switch_72418, NimStringDesc* Arg_72419, TY47532 Info_72420) {
NIM_BOOL Result_72421;
NU8 LOC1;
NU8 LOC2;
NU8 LOC3;
Result_72421 = 0;
LOC1 = Whichkeyword_71468(Switch_72418);
switch (LOC1) {
case ((NU8) 156):
LOC2 = Whichkeyword_71468(Arg_72419);
switch (LOC2) {
case ((NU8) 158):
Result_72421 = ((Gglobaloptions_46077 &(1<<((((NU8) 2))&31)))!=0);
break;
case ((NU8) 157):
Result_72421 = ((Gglobaloptions_46077 &(1<<((((NU8) 3))&31)))!=0);
break;
case ((NU8) 142):
Result_72421 = ((Gglobaloptions_46077 & 201326592) == 0);
break;
default:
Limessage_47562(Info_72420, ((NU8) 48), Arg_72419);
break;
}
break;
case ((NU8) 160):
LOC3 = Whichkeyword_71468(Arg_72419);
switch (LOC3) {
case ((NU8) 140):
Result_72421 = ((Goptions_46075 &(1<<((((NU8) 13))&31)))!=0);
break;
case ((NU8) 141):
Result_72421 = ((Goptions_46075 &(1<<((((NU8) 14))&31)))!=0);
break;
case ((NU8) 142):
Result_72421 = ((Goptions_46075 & 6291456) == 0);
break;
default:
Limessage_47562(Info_72420, ((NU8) 49), Arg_72419);
break;
}
break;
default:
Invalidcmdlineoption_72133(((NU8) 0), Switch_72418, Info_72420);
break;
}
return Result_72421;
}
N_NOINLINE(void, commandsInit)(void) {
}


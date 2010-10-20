/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY52008 TY52008;
typedef struct TY104006 TY104006;
typedef struct TY104002 TY104002;
typedef struct TY55547 TY55547;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY92031 TY92031;
typedef struct TY55525 TY55525;
typedef struct TY187010 TY187010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY10802 TY10802;
typedef struct TY10814 TY10814;
typedef struct TY11190 TY11190;
typedef struct TY10818 TY10818;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY55551 TY55551;
typedef struct TY47532 TY47532;
typedef struct TY54011 TY54011;
typedef struct TY55519 TY55519;
typedef struct TY38715 TY38715;
typedef struct TY54005 TY54005;
typedef struct TY55529 TY55529;
typedef struct TY55527 TY55527;
typedef struct TY55539 TY55539;
typedef struct TY55543 TY55543;
typedef struct TY39422 TY39422;
typedef struct TY92029 TY92029;
typedef struct TY59223 TY59223;
typedef struct TY59221 TY59221;
typedef struct TY59219 TY59219;
typedef struct TY55563 TY55563;
typedef struct TY55561 TY55561;
typedef struct TY55559 TY55559;
typedef struct TY55549 TY55549;
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
typedef N_NIMCALL_PTR(TY104002*, TY104007) (TY55547* Module_104008, NimStringDesc* Filename_104009);
typedef N_NIMCALL_PTR(TY104002*, TY104012) (TY55547* Module_104013, NimStringDesc* Filename_104014, TY92031* Rd_104015);
typedef N_NIMCALL_PTR(TY55525*, TY104018) (TY104002* P_104019, TY55525* N_104020);
typedef N_NIMCALL_PTR(TY55525*, TY104023) (TY104002* P_104024, TY55525* Toplevelstmt_104025);
struct TY104006 {
TY104007 Open;
TY104012 Opencached;
TY104018 Close;
TY104023 Process;
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
struct TY104002 {
  TNimObject Sup;
};
struct TY187010 {
  TY104002 Sup;
TY55547* Module;
NimStringDesc* Filename;
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
struct TY38715 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef TY52008* TY176060[2];
struct TY54005 {
  TNimObject Sup;
NI Id;
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
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY59219 {
NI Key;
NI Val;
};
struct TY59223 {
NI Counter;
TY59221* Data;
};
struct TY92029 {
NI Lastidxkey;
NI Lastidxval;
TY59223 Tab;
TY52008* R;
NI Offset;
};
struct TY55559 {
TY54005* Key;
TNimObject* Val;
};
struct TY55563 {
NI Counter;
TY55561* Data;
};
struct TY92031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY39422* Moddeps;
TY39422* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY92029 Index;
TY92029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY55563 Syms;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
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
struct TY55527 {
  TGenericSeq Sup;
  TY55547* data[SEQ_DECL_SIZE];
};
struct TY39422 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY59221 {
  TGenericSeq Sup;
  TY59219 data[SEQ_DECL_SIZE];
};
struct TY55561 {
  TGenericSeq Sup;
  TY55559 data[SEQ_DECL_SIZE];
};
struct TY55549 {
  TGenericSeq Sup;
  TY55551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initpass_104031)(TY104006* P_104034);
N_NIMCALL(TY104002*, Myopen_187130)(TY55547* Module_187132, NimStringDesc* Filename_187133);
N_NIMCALL(void*, newObj)(TNimType* Typ_13707, NI Size_13708);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11074)(TY10814* S_11077, TY10802* Cell_11078);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(TY55525*, Adddotdependency_187025)(TY104002* C_187027, TY55525* N_187028);
N_NIMCALL(NI, Sonslen_55803)(TY55525* N_55805);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38714, TY38715* Result);
N_NIMCALL(NimStringDesc*, Getmodulefile_109013)(TY55525* N_109015);
N_NIMCALL(void, Adddependencyaux_187016)(NimStringDesc* Importing_187018, NimStringDesc* Imported_187019);
N_NIMCALL(void, Appf_52074)(TY52008** C_52077, NimStringDesc* Frmt_52078, TY52008** Args_52080, NI Args_52080Len0);
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048);
N_NIMCALL(void, Writerope_52058)(TY52008* Head_52060, NimStringDesc* Filename_52061);
N_NIMCALL(TY52008*, Ropef_52069)(NimStringDesc* Frmt_52071, TY52008** Args_52073, NI Args_52073Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_39020, NimStringDesc* Ext_39021);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_38785);
STRING_LITERAL(TMP198482, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP198483, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP198484, "", 0);
STRING_LITERAL(TMP198485, "dot", 3);
TY52008* Gdotgraph_187015;
extern TNimType* NTI187012; /* PGen */
extern TNimType* NTI187010; /* TGen */
extern TY11190 Gch_11210;
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7607;
Result_7607 = 0;
(*Memloc_3004) += X_3005;
Result_7607 = (*Memloc_3004);
return Result_7607;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11074(&Gch_11210.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_13003).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
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
N_NIMCALL(TY104002*, Myopen_187130)(TY55547* Module_187132, NimStringDesc* Filename_187133) {
TY104002* Result_187134;
TY187010* G_187135;
Result_187134 = 0;
G_187135 = 0;
G_187135 = (TY187010*) newObj(NTI187012, sizeof(TY187010));
(*G_187135).Sup.Sup.m_type = NTI187010;
asgnRef((void**) &(*G_187135).Module, Module_187132);
asgnRefNoCycle((void**) &(*G_187135).Filename, copyString(Filename_187133));
Result_187134 = &G_187135->Sup;
return Result_187134;
}
N_NIMCALL(void, Adddependencyaux_187016)(NimStringDesc* Importing_187018, NimStringDesc* Imported_187019) {
TY176060 LOC1;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = Torope_52046(Importing_187018);
LOC1[1] = Torope_52046(Imported_187019);
Appf_52074(&Gdotgraph_187015, ((NimStringDesc*) &TMP198482), LOC1, 2);
}
N_NIMCALL(TY55525*, Adddotdependency_187025)(TY104002* C_187027, TY55525* N_187028) {
TY55525* Result_187029;
TY187010* G_187041;
NI I_187064;
NI HEX3Atmp_187112;
NI LOC4;
NI Res_187114;
NimStringDesc* Imported_187077;
NimStringDesc* LOC6;
TY38715 LOC7;
NimStringDesc* Imported_187090;
NimStringDesc* LOC8;
TY38715 LOC9;
NI I_187098;
NI HEX3Atmp_187118;
NI LOC10;
NI Res_187120;
TY55525* LOC12;
Result_187029 = 0;
Result_187029 = N_187028;
if (!(N_187028 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
G_187041 = 0;
G_187041 = ((TY187010*) (C_187027));
switch ((*N_187028).Kind) {
case ((NU8) 102):
I_187064 = 0;
HEX3Atmp_187112 = 0;
LOC4 = Sonslen_55803(N_187028);
HEX3Atmp_187112 = (NI32)(LOC4 - 1);
Res_187114 = 0;
Res_187114 = 0;
while (1) {
if (!(Res_187114 <= HEX3Atmp_187112)) goto LA5;
I_187064 = Res_187114;
Imported_187077 = 0;
LOC6 = 0;
LOC6 = Getmodulefile_109013((*N_187028).KindU.S6.Sons->data[I_187064]);
memset((void*)&LOC7, 0, sizeof(LOC7));
nossplitFile(LOC6, &LOC7);
Imported_187077 = copyString(LOC7.Name);
Adddependencyaux_187016((*(*(*G_187041).Module).Name).S, Imported_187077);
Res_187114 += 1;
} LA5: ;
break;
case ((NU8) 103):
Imported_187090 = 0;
LOC8 = 0;
LOC8 = Getmodulefile_109013((*N_187028).KindU.S6.Sons->data[0]);
memset((void*)&LOC9, 0, sizeof(LOC9));
nossplitFile(LOC8, &LOC9);
Imported_187090 = copyString(LOC9.Name);
Adddependencyaux_187016((*(*(*G_187041).Module).Name).S, Imported_187090);
break;
case ((NU8) 101):
case ((NU8) 99):
case ((NU8) 106):
case ((NU8) 107):
I_187098 = 0;
HEX3Atmp_187118 = 0;
LOC10 = Sonslen_55803(N_187028);
HEX3Atmp_187118 = (NI32)(LOC10 - 1);
Res_187120 = 0;
Res_187120 = 0;
while (1) {
if (!(Res_187120 <= HEX3Atmp_187118)) goto LA11;
I_187098 = Res_187120;
LOC12 = 0;
LOC12 = Adddotdependency_187025(C_187027, (*N_187028).KindU.S6.Sons->data[I_187098]);
Res_187120 += 1;
} LA11: ;
break;
default:
break;
}
BeforeRet: ;
return Result_187029;
}
N_NIMCALL(TY104006, Gendependpass_187004)(void) {
TY104006 Result_187153;
memset((void*)&Result_187153, 0, sizeof(Result_187153));
Initpass_104031(&Result_187153);
Result_187153.Open = Myopen_187130;
Result_187153.Process = Adddotdependency_187025;
return Result_187153;
}
N_NIMCALL(void, Generatedot_187006)(NimStringDesc* Project_187008) {
TY176060 LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
TY52008* LOC4;
NimStringDesc* LOC5;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC2 = 0;
LOC2 = nosextractFilename(Project_187008);
LOC3 = 0;
LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP198484));
LOC1[0] = Torope_52046(LOC3);
LOC1[1] = Gdotgraph_187015;
LOC4 = 0;
LOC4 = Ropef_52069(((NimStringDesc*) &TMP198483), LOC1, 2);
LOC5 = 0;
LOC5 = nosChangeFileExt(Project_187008, ((NimStringDesc*) &TMP198485));
Writerope_52058(LOC4, LOC5);
}
N_NOINLINE(void, dependsInit)(void) {
}


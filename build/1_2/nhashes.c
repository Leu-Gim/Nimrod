/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
N_NIMCALL(NI, Gethashstr_40031)(NimStringDesc* S_40033) {
NI Result_40130;
NI H_40131;
NI I_40156;
NI HEX3Atmp_40163;
NI Res_40165;
Result_40130 = 0;
H_40131 = 0;
H_40131 = 0;
I_40156 = 0;
HEX3Atmp_40163 = 0;
HEX3Atmp_40163 = S_40033->Sup.len;
Res_40165 = 0;
Res_40165 = 1;
while (1) {
if (!(Res_40165 <= HEX3Atmp_40163)) goto LA1;
I_40156 = Res_40165;
H_40131 = (NI64)((NU64)(H_40131) + (NU64)(((NU8)(S_40033->data[I_40156]))));
H_40131 = (NI64)((NU64)(H_40131) + (NU64)((NI64)((NU64)(H_40131) << (NU64)(10))));
H_40131 = (NI64)(H_40131 ^ (NI64)((NU64)(H_40131) >> (NU64)(6)));
Res_40165 += 1;
} LA1: ;
H_40131 = (NI64)((NU64)(H_40131) + (NU64)((NI64)((NU64)(H_40131) << (NU64)(3))));
H_40131 = (NI64)(H_40131 ^ (NI64)((NU64)(H_40131) >> (NU64)(11)));
H_40131 = (NI64)((NU64)(H_40131) + (NU64)((NI64)((NU64)(H_40131) << (NU64)(15))));
Result_40130 = ((NI) (H_40131));
return Result_40130;
}
N_NIMCALL(NI, Gethashstrci_40034)(NimStringDesc* S_40036) {
NI Result_40227;
NI H_40228;
NIM_CHAR C_40229;
NI I_40239;
NI HEX3Atmp_40273;
NI Res_40275;
Result_40227 = 0;
H_40228 = 0;
C_40229 = 0;
H_40228 = 0;
I_40239 = 0;
HEX3Atmp_40273 = 0;
HEX3Atmp_40273 = (NI64)((NI64)(S_40036->Sup.len + 0) - 1);
Res_40275 = 0;
Res_40275 = 0;
while (1) {
if (!(Res_40275 <= HEX3Atmp_40273)) goto LA1;
I_40239 = Res_40275;
C_40229 = S_40036->data[I_40239];
if (!(((NU8)(C_40229)) >= ((NU8)(65)) && ((NU8)(C_40229)) <= ((NU8)(90)))) goto LA3;
C_40229 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(C_40229)) + 32)))));
LA3: ;
H_40228 = (NI64)((NU64)(H_40228) + (NU64)(((NU8)(C_40229))));
H_40228 = (NI64)((NU64)(H_40228) + (NU64)((NI64)((NU64)(H_40228) << (NU64)(10))));
H_40228 = (NI64)(H_40228 ^ (NI64)((NU64)(H_40228) >> (NU64)(6)));
Res_40275 += 1;
} LA1: ;
H_40228 = (NI64)((NU64)(H_40228) + (NU64)((NI64)((NU64)(H_40228) << (NU64)(3))));
H_40228 = (NI64)(H_40228 ^ (NI64)((NU64)(H_40228) >> (NU64)(11)));
H_40228 = (NI64)((NU64)(H_40228) + (NU64)((NI64)((NU64)(H_40228) << (NU64)(15))));
Result_40227 = ((NI) (H_40228));
return Result_40227;
}
N_NIMCALL(NI, Getnormalizedhash_40037)(NimStringDesc* S_40039) {
NI Result_40171;
NI H_40172;
NIM_CHAR C_40173;
NI I_40183;
NI HEX3Atmp_40219;
NI Res_40221;
Result_40171 = 0;
H_40172 = 0;
C_40173 = 0;
H_40172 = 0;
I_40183 = 0;
HEX3Atmp_40219 = 0;
HEX3Atmp_40219 = (NI64)((NI64)(S_40039->Sup.len + 0) - 1);
Res_40221 = 0;
Res_40221 = 0;
while (1) {
if (!(Res_40221 <= HEX3Atmp_40219)) goto LA1;
I_40183 = Res_40221;
C_40173 = S_40039->data[I_40183];
if (!((NU8)(C_40173) == (NU8)(95))) goto LA4;
goto LA2;
LA4: ;
if (!(((NU8)(C_40173)) >= ((NU8)(65)) && ((NU8)(C_40173)) <= ((NU8)(90)))) goto LA7;
C_40173 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(C_40173)) + 32)))));
LA7: ;
H_40172 = (NI64)((NU64)(H_40172) + (NU64)(((NU8)(C_40173))));
H_40172 = (NI64)((NU64)(H_40172) + (NU64)((NI64)((NU64)(H_40172) << (NU64)(10))));
H_40172 = (NI64)(H_40172 ^ (NI64)((NU64)(H_40172) >> (NU64)(6)));
LA2: ;
Res_40221 += 1;
} LA1: ;
H_40172 = (NI64)((NU64)(H_40172) + (NU64)((NI64)((NU64)(H_40172) << (NU64)(3))));
H_40172 = (NI64)(H_40172 ^ (NI64)((NU64)(H_40172) >> (NU64)(11)));
H_40172 = (NI64)((NU64)(H_40172) + (NU64)((NI64)((NU64)(H_40172) << (NU64)(15))));
Result_40171 = ((NI) (H_40172));
return Result_40171;
}
N_NIMCALL(NI, Conchash_40040)(NI H_40042, NI Val_40043) {
NI Result_40051;
Result_40051 = 0;
Result_40051 = (NI64)((NU64)(H_40042) + (NU64)(Val_40043));
Result_40051 = (NI64)((NU64)(Result_40051) + (NU64)((NI64)((NU64)(Result_40051) << (NU64)(10))));
Result_40051 = (NI64)(Result_40051 ^ (NI64)((NU64)(Result_40051) >> (NU64)(6)));
return Result_40051;
}
N_NOINLINE(void, nhashesInit)(void) {
}


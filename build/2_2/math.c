/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

N_NIMCALL(NIM_BOOL, Ispoweroftwo_100270)(NI X_100272) {
NIM_BOOL Result_100273;
Result_100273 = 0;
Result_100273 = ((NI64)(X_100272 & ((NI64)-(X_100272))) == X_100272);
goto BeforeRet;
BeforeRet: ;
return Result_100273;
}
N_NIMCALL(NI, Nextpoweroftwo_100276)(NI X_100278) {
NI Result_100279;
Result_100279 = 0;
Result_100279 = (NI64)(X_100278 - 1);
Result_100279 = (NI64)(Result_100279 | (NI64)((NU64)(Result_100279) >> (NU64)(32)));
Result_100279 = (NI64)(Result_100279 | (NI64)((NU64)(Result_100279) >> (NU64)(16)));
Result_100279 = (NI64)(Result_100279 | (NI64)((NU64)(Result_100279) >> (NU64)(8)));
Result_100279 = (NI64)(Result_100279 | (NI64)((NU64)(Result_100279) >> (NU64)(4)));
Result_100279 = (NI64)(Result_100279 | (NI64)((NU64)(Result_100279) >> (NU64)(2)));
Result_100279 = (NI64)(Result_100279 | (NI64)((NU64)(Result_100279) >> (NU64)(1)));
Result_100279 += 1;
return Result_100279;
}
N_NOINLINE(void, mathInit)(void) {
}


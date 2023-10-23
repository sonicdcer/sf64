#ifndef FUNCTIONS_H
#define FUNCTIONS_H

f32 func_80004E20(f32 arg0, f32 arg1);
void func_80004E4C(void);
f32 func_80004EB0(void);
void func_80004FC8(s32 arg0, s32 arg1, s32 arg2);
f32 func_80004FE8(void);
f32 func_80005100(f32 arg0, f32 arg1);
f32 func_80005320(f32 arg0, f32 arg1);
f32 func_800055DC(f32 arg0, s32 arg1);
void func_80005604(s32* arg0, s32* arg1, s32 arg2, s32 arg3, s32 arg4);

void func_80005680(Matrix* a, Matrix* b);
void func_80005708(Matrix** arg0);
void func_80005740(Matrix** arg0);
void func_80005C34(s32, f32, f32, f32, s32);
void func_80006EB8(Gfx **);

void func_800070C8(s64);

s32 func_800071FC(s32*);
s32 func_800072E0(s32*);

void func_80007D58(void*);

void func_80008018(void);

s32 func_8001EF10(void);

f32 func_8001FBE8(f32);

void func_800227A0(s32, OSMesgQueue*, OSMesg*, s32);

s32 func_80022B60(void);

s64 __ull_div(s64, s64);
s64 __ll_mul(s64, s64);
s64 __ll_rshift(s64, s64);

void __osSiCreateAccessQueue(void);

OSMesgQueue* osPiGetCmdQueue(void);

s32 func_8002DE78(void*, s32, s32); // Not real signature

s32 func_8008BCBC(s32 /*arg0*/);

void func_8009D994(Gfx**, void*, u32, u32, f32, f32, f32, f32);
void func_8009FEA0(s32, s32, s32);
void func_800A1200(s32, s32, f32, f32, char*);   

void func_800B8DD0(Gfx **, s32);

#endif

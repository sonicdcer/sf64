#ifndef FUNCTIONS_H
#define FUNCTIONS_H

f32 func_80005100(f32 arg0, f32 arg1);
void func_80005680(Matrix*, Matrix*);
void func_80005708(Matrix ** mtx);
void func_80005740(Matrix** mtx);
void func_80005B00(Matrix*, f32, f32, f32, u8);
void func_80005C34(Matrix*, f32, f32, f32, s32);
void func_80006EB8(Gfx **);

void func_80019218(u32, f32*, u8, f32*, f32*, s8*);
void func_8001A838(u32 arg0);
void func_8001AF40(s32 arg0);

void func_80086664(f32, f32);
s32 func_8008B774(void);
s32 func_8008BCBC(s32 arg0); 

void func_8009BC2C(f32*, f32, f32, f32, f32);
void func_8009D994(Gfx**, void*, u32, u32, f32, f32, f32, f32);
void func_8009FEA0(s32, s32, s32);
void func_800A1200(s32, s32, f32, f32, char*);   
void func_800B8DD0(Gfx **, s16);

void func_8018D2B8_EC5978(s32);
void func_8018EA78_EC7138(s32);
void func_80191674_EC9D34(f32, f32, f32, f32*, f32*, f32*);

#endif

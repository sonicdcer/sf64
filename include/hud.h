#ifndef HUD_H
#define HUD_H

#include "global.h"

typedef struct UnkStruct_func_80095350 {
    /* 0x00 */ s8 unk0;
    /* 0x01 */ char pad_1[0x1];
    /* 0x02 */ s16 unk2;
    /* 0x04 */ char pad_4[0xB2];
    /* 0xB6 */ s16 unkB6;
} UnkStruct_func_80095350;

void func_800612B8(void*, u16, void*);
void func_800613C4(void*);
void func_80085944(void);
void func_8008A4DC(void);
void func_8008B044(void);
void func_8008B1B0(void);
void func_8008B2F0(void);
void func_8008B5B0(f32, f32);
void func_8008B734(void);
void func_8008B9E8(void);
void func_8008BAE4(void);
void func_8008DC34(void);
void func_8008E5E8(void);
void func_8008E620(void);
void func_80090E8C(void);
void func_800910C0(void);
void func_8009C320(s32*, s32*, s32*, s32, s32, f32, f32, f32, f32);
void func_8009D994(s32*, s32*, s32, s32, f32, f32, f32, f32);
void func_8009E1E8(s32*, s32*, s32, s32, f32, f32, f32, f32);

// Weird addresses, assets maybe?
extern s32 D_1002280;
extern s32 D_10030D0;
extern s32 D_1011AC0;
extern s32 D_1011B90;
extern s32 D_1011BB0;
extern s32 D_1011C80;
extern s32 D_1011D90;
extern s32 D_1011E60;
extern s32 D_30013E0;

extern s32 D_80137E64;
extern s32 D_80161690;
extern s32 D_80177854;
extern s32 D_80177880;
extern s32 D_801778E8;

#endif

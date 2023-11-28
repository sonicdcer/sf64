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

void func_80084E78(Gfx** gfxP, void* arg1, void* arg2, u32 arg3, u32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8,
                   f32 arg9, f32 argA);
void func_80085944(void);
void func_80086CC8(void);
void func_80086DCC(void);
void func_80087B5C(void);
void func_80089994(s32 arg0);
void func_8008A4DC(void);
void func_8008B044(void);
void func_8008B1B0(void);
void func_8008B2F0(void);
void func_8008B734(void);
void func_8008B9E8(void);
void func_8008BAE4(void);
void func_8008CBE4(void);
void func_8008D250(void);
void func_8008D31C(void);
void func_8008D4F0(f32, f32);
void func_8008D7F4(void);
void func_8008D984(void);
void func_8008DC34(void);
void func_8008E5E8(void);
s32 func_80090E8C(Object_2F4* arg0);
s32 func_800910C0(Object_2F4* arg0);

// Weird addresses, assets maybe?
extern u16 D_1000E80[];
extern u16 D_1002280[];
extern u16 D_10030D0[];
extern s32 D_1011280[];
extern s32 D_10116A0[];
extern s32 D_10116B0[];
extern s32 D_1011730[];
extern s32 D_1011AC0[];
extern s32 D_1011B90[];
extern s32 D_1011BB0[];
extern s32 D_1011C80[];
extern s32 D_1011CA0[];
extern s32 D_1011D70[];
extern s32 D_1011D90[];
extern s32 D_1011E60[];
extern s32 D_1013580[];
extern s32 D_1013700[];
extern s32 D_20031B0[];
extern s32 D_2010A30[];
extern u16 D_3000B20[];
extern u16 D_30013E0[];

extern s32 D_80161690;
extern s32 D_80161718;
extern s32 D_8016171C;
extern s32 D_801617E8[];
extern s32 D_801617FC;
extern s32 D_80161A98;
extern s32 D_80177838;
extern s32 D_80177854;
extern s32 D_80177880;
extern s32 D_801778B0[];
extern s32 D_801778BC;
extern s32 D_801778E8;
extern s32 D_80177B48;
extern s32 D_80177B50[];
extern s32 D_80177B70[];
extern s32 D_80177E7C;
extern s32 D_80178234;
extern s32 D_80178750;

#endif

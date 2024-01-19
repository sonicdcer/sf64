#ifndef HUD_H
#define HUD_H

#include "global.h"

typedef struct {
    /* 0x00 */ u8* unk_00;
    /* 0x04 */ s32 width;
    /* 0x08 */ s32 height;
    /* 0x0C */ u8* unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
} UnkStruct_D_800D1AEC;

void func_80084930(f32, f32, s32);
void func_80086444(void);
void func_80087788(void);
void func_801BE034(Actor*, Player*);
void func_80084E78(Gfx** gfxP, void* arg1, void* arg2, u32 arg3, u32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8,
                   f32 arg9, f32 argA);
void func_80085944(void);
void func_80086CC8(void);
void func_80086DCC(void);
void func_80087B5C(void);
void func_80089994(s32);
s32 func_8008A4DC(void);
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
s32 func_80090E8C(Actor*);
s32 func_800910C0(Actor*);

#endif

#ifndef OVL_DF4260_H
#define OVL_DF4260_H

#include "global.h"

typedef struct {
    /* 0x00 */ char pad_0[0xB8];
    /* 0xB8 */ s16 unkB8;
} UnkStruct_func_8018BC50_DF8990;

typedef struct {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ f32 unk6C;
    /* 0x70 */ f32 unk70;
    /* 0x74 */ f32 unk74;
} UnkStruct_func_80187A38_DF4778;

void func_8007C120(s32, s32, s32, f32, f32, f32, f32, s32);

#endif

#ifndef STRUCTS_H
#define STRUCTS_H

#include "global.h"
#include "sf64math.h"

typedef struct UnkStruct_D_801B8350 {
    /* 0x00 */ Vec3f unk0;
    /* 0x0C */ char pad_0C[0x4C];
    /* 0x54 */ s32 unk54;
    /* 0x58 */ s32 unk58;
} UnkStruct_D_801B8350;

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ char pad_01;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ Vec3f unk10;
} ElementType1; // size = 0x1C

typedef struct UnkStruct_D_80178280 {
    /* 0x000 */ char pad_0[0xC];
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ char pad_010[0x64];
    /* 0x074 */ f32 unk_074;
    /* 0x078 */ char pad_078[0x4];
    /* 0x07C */ f32 unk_07C;
    /* 0x080 */ char pad_080[0xB8];
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ char pad_13C[0x8C];
    /* 0x1C8 */ s32 unk_1C8;
    /* 0x1CC */ char pad_1CC[0x44];
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ char pad_214[0x14];
    /* 0x228 */ s32 unk_228;
    /* 0x22C */ char pad_22C[0x38];
    /* 0x264 */ s32 unk_264;
    /* 0x268 */ char pad_268[0x4];
    /* 0x26C */ s32 unk_26C;
    /* 0x270 */ char pad_270[0x44];
    /* 0x2B4 */ s32 unk_2B4;
    /* 0x2B8 */ char pad_2B8[0x4];
    /* 0x2BC */ f32 unk_2BC;
    /* 0x2C0 */ char pad_2C0[0x220];
} UnkStruct_D_80178280; // size = 0x4E0

typedef struct {
    /* 0x000 */ ElementType1 unk_000;
    /* 0x01C */ char pad_0[0x32];
    /* 0x4E */ s16 unk4E;
    /* 0x50 */ char pad_50[0x88];
    /* 0xD8 */ f32 unkD8[50];
} UnkStruct_D_8016F110;

typedef struct {
    /* 0x000 */ ElementType1 unk_000;
    /* 0x01C */ char pad_01C[0x34];
    /* 0x050 */ s32 unk_050[25];
    /* 0x0B4 */ char pad_0B4[0x8];
    /* 0x0BC */ u16 unk_0BC;
    /* 0x0BE */ char pad_0BE[0x36];
    /* 0x0F4 */ f32 unk_0F4;
    /* 0x0F8 */ f32 unk_0F8;
    /* 0x0FC */ char pad_0FC[0x4];
    /* 0x100 */ f32 unk_100[5];
    /* 0x114 */ f32 unk_114[30];
} UnkStruct_func_80090A00;

#endif

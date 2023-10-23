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

typedef struct UnkStruct_D_80178280 {
    /* 0x000 */ char pad_0[0x07C];
    /* 0x07C */ f32 unk07C;
    /* 0x080 */ char pad_80[0x148];
    /* 0x1C8 */ s32 unk1C8;
    /* 0x1CC */ char pad_1CC[0x98];
    /* 0x264 */ s32 unk264;
    /* 0x268 */ char pad_268[0x4];
    /* 0x26C */ s32 unk26C;
    /* 0x270 */ char pad_270[0x270];
} UnkStruct_D_80178280; // size = 0x4E0

#endif

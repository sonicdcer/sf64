#ifndef OVL_DF4260_H
#define OVL_DF4260_H

#include "global.h"

typedef struct {
    /* 0x00 */ char pad_0[0xB8];
    /* 0xB8 */ s16 unkB8;
} UnkStruct_func_DF4260_8018BC50;

typedef struct {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ f32 unk6C;
    /* 0x70 */ f32 unk70;
    /* 0x74 */ f32 unk74;
} UnkStruct_func_DF4260_80187A38;

typedef struct {
    /* 0x000 */ s8 unk_000[0x5C];
    /* 0x05C */ s16 unk_05C;
    /* 0x05E */ s8 unk_05E;
    /* 0x060 */ s8 unk_060[0x28];
    /* 0x088 */ s16 unk_088[0x10];
    /* 0x0A8 */ s8 unk_0A8[0x30];
    /* 0x0D8 */ f32 unk_0D8;
    /* 0x0DC */ f32 unk_0DC;
    /* 0x0E0 */ f32 unk_0E0;
    /* 0x0E4 */ f32 unk_0E4;
    /* 0x0E8 */ f32 unk_0E8;
    /* 0x0EC */ s8 unk_0EC[0x20];
    /* 0x10C */ f32 unk_10C;
} UnkStruct_func_DF4260_8018A434;

#endif

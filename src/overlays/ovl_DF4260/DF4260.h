#ifndef OVL_DF4260_H
#define OVL_DF4260_H

#include "global.h"

typedef struct {
    /* 0x00 */ char pad_0[0xB8];
    /* 0xB8 */ s16 unkB8;
} UnkStruct_func_DF4260_8018BC50;

typedef struct {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ Vec3f unk6C;
} UnkStruct_func_DF4260_80187A38;

typedef struct {
    Object obj;
    s8 unk_1C[0x6C];
    s8 unk_88;
    s16 unk_8A;
    s16 unk_8C;
    s16 unk_8E;
    s8 unk_90[0x34];
    s16 unk_C4;
    s8 unk_C6[0x2];
    s8 unk_C8[0x4];
    s8 unk_CC[0x2];
    s16 unk_CE;
} UnkStruct_func_DF4260_80188750;

typedef struct {
    s8 unk_000[0x4C];
    s8 unk_04C[0x2];
    s16 unk_04E; 
    s16 unk_050;
    s8 unk_052[0x2];
    s8 unk_054[0x70];
    s8 unk_0C4[0x2];
    s16 unk_0C6;
    s8 unk_0C8[0x48];
    f32 unk_110;
} UnkStruct_func_DF4260_80188A18;

typedef struct {
    s8 unk_000[0x44];
    s16 unk_044;
    s8 unk_046[0x2];
    s8 unk_048[0x64];
    s16 unk_0AC;
    s16 unk_0AE;
    s16 unk_0B0;
    s16 unk_0B2;
    s16 unk_0B4;
    s8 unk_0B6[0x2];
    s8 unk_0B8[0x50];
    f32 unk_108;
    s8 unk_10C[0x2F0];
    Vec3f unk_3FC;
} UnkStruct_func_DF4260_80188C7C;

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ s16 unk_044;
    /* 0x046 */ char unk_46[0x6];
    /* 0x04C */ s16 unk_04C;
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 timer_050;
    /* 0x052 */ s16 timer_052;
    /* 0x054 */ s16 timer_054;
    /* 0x056 */ s16 timer_056;
    /* 0x058 */ s16 timer_058;
    /* 0x05A */ s16 timer_05A;
    /* 0x05C */ s16 timer_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x05F */ char pad5F[3];
    /* 0x062 */ s8 unk_062;
    /* 0x063 */ char pad63[1];
    /* 0x064 */ s16 unk_064;
    /* 0x066 */ s16 unk_066;
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ Vec3f unk_06C;     
    /* 0x078 */ char pad78[0xC]; 
    /* 0x084 */ f32 unk_084;       
    /* 0x088 */ s16 swork[40];
    /* 0x0D8 */ f32 fwork[50];
    /* 0x1A0 */ Vec3f vwork[50];
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f sfxPos;
} Object_408_292; // size = 0x408

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

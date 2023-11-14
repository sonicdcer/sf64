#ifndef STRUCTS_H
#define STRUCTS_H

#include "global.h"
#include "sf64math.h"

typedef struct {
    s32 unk0;
    u16* unk4;
} UnkStruct_D_80185CBC;

typedef struct {
    /* 0x0 */ void* start;
    /* 0x4 */ void* end;
} SegmentOffset; // size = 0x8

typedef struct {
    /* 0x00 */ SegmentOffset unk_0;
    /* 0x08 */ SegmentOffset unk_8;
    /* 0x10 */ SegmentOffset unk_10;
    /* 0x18 */ SegmentOffset unk_18;
    /* 0x20 */ SegmentOffset unk_20[15];
} OverlayInit; // size = 0x98

typedef struct {
    /* 0x0 */ void* vRomAddress;
    /* 0x8 */ SegmentOffset pRom;
    /* 0xC */ s32 compFlag;
} DmaEntry; // size = 0x10;

typedef void (*unkFunc_80007088)(s32*, s32);

typedef struct {
    /* 0x00 */ u8 unk0;
    /* 0x08 */ OSTimer unk8;
    /* 0x28 */ unkFunc_80007088 unk28;
    /* 0x2C */ s32* unk2C;
    /* 0x30 */ s32 unk30;
} UnkStruct_func_80007088; // size = 0x38, 0x8 aligned

typedef struct {
    u16 data[240 * 320];
} FrameBuffer; // size = 0x25800

typedef struct {
    /* 0x00 */ char unk_0[0xFE];
    /* 0xFE */ u16 unk_FE;
} Save; // size = 0x100

typedef union {
    Save save[2];
    u8 raw[EEPROM_BLOCK_SIZE*EEPROM_MAXBLOCKS];
} SaveFile; // size = 0x200

typedef struct {
    /* 0x000 */ OSThread thread;
    /* 0x1B0 */ char stack[0x800];
    /* 0x9B0 */ OSMesgQueue msgQueue;
    /* 0x9C8 */ OSMesg msg;
    /* 0x9CC */ FrameBuffer* fb;
    /* 0x9D0 */ u16 width;
    /* 0x9D2 */ u16 height;
} FaultMgr; // size = 0x9D8, 0x8 aligned

typedef enum {
    SPTASK_STATE_NOT_STARTED,
    SPTASK_STATE_RUNNING,
    SPTASK_STATE_INTERRUPTED,
    SPTASK_STATE_FINISHED,
    SPTASK_STATE_FINISHED_DP
} SpTaskState;

typedef struct {
    /* 0x00 */ OSTask task;
    /* 0x40 */ OSMesgQueue* msgQueue;
    /* 0x44 */ OSMesg msg;
    /* 0x48 */ SpTaskState state;
} SPTask; // size = 0x50, 0x8 aligned

typedef struct {
    /* 0x00000 */ SPTask task;
    /* 0x00050 */ Vp viewports[0x10];
    /* 0x00150 */ Mtx mtx[0x480];
    /* 0x12150 */ Gfx unkDL1[0x180];
    /* 0x12D50 */ Gfx masterDL[0x1380];
    /* 0x1C950 */ Gfx unkDL2[0xD80];
    /* 0x23550 */ Lightsn lights[0x100];
} GfxPool; // size = 0x2AD50, 0x8 aligned

typedef struct UnkStruct_D_801B8350 {
    /* 0x00 */ Vec3f unk0;
    /* 0x0C */ char pad_0C[0x4C];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
} UnkStruct_D_801B8350;

typedef struct {
    /* 0x0 */ u16 unk_0;
    /* 0x2 */ s8 unk_2;
    /* 0x3 */ s8 unk_3;
} UnkStruct_D_8017797C; // size = 0x4

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ char pad_01[0x1];
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ char pad_14[0x14];
} UnkStruct_D_80175A10; // size = 0x28

typedef struct UnkStruct_D_80178280 {
    /* 0x000 */ char pad_0[0xC];
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ char pad10[0x30];
    /* 0x040 */ Vec3f unk_40;
    /* 0x04C */ char pad4C[0xC];
    /* 0x058 */ f32 unk_58;
    /* 0x05C */ char pad5C[0x18];
    /* 0x074 */ f32 unk_074;
    /* 0x078 */ f32 unk_078;
    /* 0x07C */ f32 unk_07C;
    /* 0x080 */ char pad80[0x2C];
    /* 0x0AC */ f32 unk_0AC;
    /* 0x0B0 */ f32 unk_0B0;
    /* 0x0B4 */ char padB4[0xC];
    /* 0x0C0 */ f32 unk_0C0;
    /* 0x0C4 */ f32 unk_0C4;
    /* 0x0C8 */ char padC8[8];
    /* 0x0D0 */ f32 unk_0D0;
    /* 0x0D4 */ char padD4[0x44];
    /* 0x118 */ f32 unk_118;
    /* 0x11C */ char pad11C[0x1C];
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ char pad_13C[0x8C];
    /* 0x1C8 */ s32 unk_1C8;
    /* 0x1CC */ char pad_1CC[0x44];
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ char pad_214[0x10];
    /* 0x224 */ s32 unk_224;
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
    f32 unk_0;
    s16 unk_4;
    s16 unk_6;
    s16 unk_8;
    s16 unk_A;
    s16 unk_C;
    s16 unk_E;
    s16 unk_10;
} UnkStruct_80061364_1;

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ char pad_01;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ Vec3f rot;
} ElementType1; // size = 0x1C

typedef struct {
    char unk0[0xC];
    void* unk_C;
    f32 unk_10;
    char unk14[0x2];
    s16 unk_16;
    char unk18[0xC];
} UnkStruct_90A00_1C;

typedef struct {
    ElementType1 unk_00;
    UnkStruct_90A00_1C unk_1C;
    char unk40[0x18];
} UnkStruct_801782A8;

typedef struct {
    ElementType1 unk_00;
    UnkStruct_90A00_1C unk_1C;
    char unk_40[0x40];
} UnkStruct_80061364_0;

typedef struct {
    /* 0x00 */ ElementType1 unk_00;
    /* 0x1C */ UnkStruct_90A00_1C unk_1C;
    /* 0x40 */ char pad40[5];
    /* 0x45 */ s8 unk_45;
    /* 0x46 */ s8 unk_46;
    /* 0x47 */ char pad47[5];
} UnkStruct_80061394_0;

typedef struct {
    ElementType1 unk_00;
    UnkStruct_90A00_1C unk_1C;
    char unk40[0x28];
    f32 unk_68;
} UnkStruct_80061444_0;

typedef struct {
    ElementType1 unk_00;
    UnkStruct_90A00_1C unk_1C;
    char unk40[4];
    s16 unk_44;
    char unk48[8];
    s16 unk_4E;
    s16 unk_50;
    char unk52[0x1A];
    f32 unk_6C;
    f32 unk_70;
    char unk74[0x18];
} UnkStruct_80061474;

typedef struct {
    /* 0x000 */ ElementType1 unk_000;
    /* 0x01C */ UnkStruct_90A00_1C unk_01C;
    /* 0x040 */ char pad_40[0xE];
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ char pad50[0x12];
    /* 0x062 */ s8 unk_062;
    /* 0x063 */ char pad63[0x79];
    /* 0x0DC */ f32 unk_0DC;
    /* 0x0E0 */ f32 unk_0E0;
    /* 0x0E4 */ char padE4[0x314];
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ char pad_3FC[0xC];
} UnkStruct_D_8016F110; // size = 0x408

typedef struct {
    /* 0x000 */ ElementType1 unk_000;
    /* 0x01C */ UnkStruct_90A00_1C unk_01C;
    /* 0x040 */ s32 unk_040;
    /* 0x044 */ char pad_044[0xC];
    /* 0x050 */ s32 unk_050;
    /* 0x054 */ s32 unk_054;
    /* 0x058 */ s32 unk_058;
    /* 0x05C */ s32 unk_05C;
    /* 0x060 */ s32 unk_060;
    /* 0x064 */ s32 unk_064;
    /* 0x068 */ s32 unk_068;
    /* 0x06C */ char pad6C[4];
    /* 0x070 */ s32 unk_070;
    /* 0x074 */ s32 unk_074;
    /* 0x078 */ s32 unk_078;
    /* 0x07C */ s32 unk_07C;
    /* 0x080 */ s32 unk_080;
    /* 0x084 */ char pad84[0x30];
    /* 0x0B4 */ s16 unk_0B4;
    /* 0x0B6 */ s16 unk_0B6;
    /* 0x0B8 */ s16 unk_0B8;
    /* 0x0BA */ char pad_0BA[0x2];
    /* 0x0BC */ u16 unk_0BC;
    /* 0x0BC */ u16 unk_0BE;
    /* 0x0C0 */ char padC0[2];
    /* 0x0C2 */ u16 unk_0C2;
    /* 0x0C4 */ char padC4[2];
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ char pad_0C8[0x6];
    /* 0x0CE */ s16 unk_0CE;
    /* 0x0D0 */ s8 unk_0D0;
    /* 0x0D1 */ s16 unk_0D2;
    /* 0x0D4 */ s16 unk_0D4;
    /* 0x0D6 */ u16 unk_0D6;
    /* 0x0D8 */ Vec3f unk_0D8;
    /* 0x0E4 */ s16 unk_0E4;
    /* 0x0E6 */ s16 unk_0E6;
    /* 0x0E8 */ f32 unk_0E8;
    /* 0x0EC */ f32 unk_0EC;
    /* 0x0F0 */ f32 unk_0F0;
    /* 0x0F4 */ f32 unk_0F4;
    /* 0x0F8 */ f32 unk_0F8; // angle
    /* 0x0FC */ f32 unk_0FC;
    /* 0x100 */ f32 unk_100[3]; // may be Vec3f
    /* 0x10C */ char pad_10C[0x4];
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ f32 unk_114;
    /* 0x118 */ f32 unk_118;
    /* 0x11C */ f32 unk_11C;
    /* 0x120 */ f32 unk_120;
    /* 0x124 */ Vec3f unk_124;
    /* 0x130 */ f32 unk_130;
    /* 0x134 */ f32 unk_134;
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ f32 unk_13C;
    /* 0x140 */ char pad140[4];
    /* 0x144 */ f32 unk_144;
    /* 0x148 */ f32 unk_148;
    /* 0x14C */ f32 unk_14C;
    /* 0x150 */ f32 unk_150;
    /* 0x154 */ f32 unk_154;
    /* 0x158 */ char pad158[0x14];
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ char pad170[8];
    /* 0x178 */ f32 unk_178;
    /* 0x17C */ f32 unk_17C;
    /* 0x180 */ f32 unk_180;
    /* 0x184 */ char pad184[4];
    /* 0x188 */ f32 unk_188;
    /* 0x18C */ char pad18C[0x150];
    /* 0x2DC */ Vec3f unk_2DC;
    /* 0x2E8 */ Vec3f unk_2E8;
} UnkStruct_func_80090A00; // size = 0x2F4

#endif

#ifndef STRUCTS_H
#define STRUCTS_H

#include "libultra/ultra64.h"
#include "sf64math.h"

#define UNK_TYPE s32

typedef struct {
    s16 vtx[3];
    s16 unk_06;
    Vec3s normal;
    s32 dist;
} CollisionPoly;

typedef struct {
    Vec3f min;
    Vec3f max;
    s32 polyCount;
    CollisionPoly* polys;
    Vec3s* mesh;
} CollisionHeader; // size = 0x24

typedef struct {
    Vec3f min;
    Vec3f max;
    s32 polyCount;
    s16 (*polys)[3];
    Vec3f* mesh;
} CollisionHeader2; // size = 0x24

typedef struct {
    /* bit 0 */ u8 unk_0 : 3;    
    /* bit 3 */ u8 unk_3 : 1;    
    /* bit 4 */ u8 unk_4 : 1;    
    /* bit 5 */ u8 unk_5 : 1;    
    /* bit 6 */ u8 unk_6 : 1;    
    /* bit 7 */ u8 unk_7 : 1;    
} Save_SubStruct_00; // size = 0x1

typedef struct {
    /* bit 0 */ u16 unk_0 : 8;
    /* bit 8 */ u16 unk_8 : 4;
    /* bit C */ u16 unk_C : 1;
    /* bit D */ u16 unk_D : 1;
    /* bit E */ u16 unk_E : 1;
    /* bit F */ u16 unk_F : 1;
} Save_SubStruct_5E; // size = 0x10

typedef struct{
    /* 0x00 */ Save_SubStruct_00 unk_00[16];
    /* 0x10 */ char pad10[0x4];
    /* 0x14 */ u8 soundMode;
    /* 0x15 */ u8 musicVolume;
    /* 0x16 */ u8 voiceVolume;
    /* 0x17 */ u8 sfxVolume;
    /* 0x18 */ u8 unk_18[10][3];
    /* 0x36 */ u8 unk_36[10];
    /* 0x40 */ u8 unk_40[10];
    /* 0x4A */ u16 unk_4A[10];
    /* 0x5E */ Save_SubStruct_5E unk_5E[10][7];
    /* 0xEA */ u8 unk_EA;
    /* 0xEB */ char padEB[0x3];
    /* 0xEE */ char padEE[0x10];
} SaveData; // size = 0xFE

typedef struct {
    /* 0x00 */ union {
            u8 raw[sizeof(SaveData)];
            SaveData data;
        };
    /* 0xFE */ u16 checksum;
} Save; // size = 0x100

typedef struct {
    /* 0x000 */ Save save;
    /* 0x100 */ Save backup;
} SaveFile; // size = 0x200

typedef struct {
    /* 0x0 */ u16 unk_0;
    /* 0x2 */ s8 unk_2;
    /* 0x3 */ s8 unk_3;
} UnkStruct_D_8017797C; // size = 0x4

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ char pad01[0x1];
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ char pad14[0x14];
} UnkEntity28; // size = 0x28

typedef struct {
    /* 0x00 */ u8 mode;
    /* 0x02 */ u16 timer;
    /* 0x04 */ Vec3f unk_04;
    /* 0x10 */ Vec3f unk_10;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ u8 unk_2C; // possibly a color struct
    /* 0x2D */ u8 unk_2D;
    /* 0x2E */ u8 unk_2E;
    /* 0x2F */ u8 unk_2F;
} UnkEntity30; // size = 0x30

typedef struct {
    /* 0x00 */ u8 rightState;
    /* 0x01 */ u8 leftState;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ u8 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34;
    /* 0x38 */ f32 unk_38;
} WingInfo; // size = 0x3C

typedef struct Player {
    /* 0x000 */ f32 unk_000;
    /* 0x004 */ f32 unk_004;
    /* 0x008 */ char pad8[4];
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ char pad10[0x24];
    /* 0x034 */ f32 unk_034; 
    /* 0x038 */ char pad38[8];
    /* 0x040 */ Vec3f unk_040;
    /* 0x04C */ Vec3f unk_04C;
    /* 0x058 */ f32 unk_058;
    /* 0x05C */ f32 unk_05C;
    /* 0x05C */ f32 unk_060;
    /* 0x064 */ f32 unk_064;
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ f32 unk_06C;
    /* 0x070 */ f32 unk_070;
    /* 0x074 */ f32 unk_074;
    /* 0x078 */ f32 unk_078;
    /* 0x07C */ f32 unk_07C;
    /* 0x080 */ f32 unk_080;
    /* 0x084 */ f32 unk_084;
    /* 0x088 */ f32 unk_088;
    /* 0x08C */ Vec3f unk_08C;
    /* 0x098 */ f32 unk_098;
    /* 0x09C */ f32 unk_09C;
    /* 0x0A0 */ f32 unk_0A0;
    /* 0x0A4 */ char padA4[8];
    /* 0x0AC */ f32 unk_0AC;
    /* 0x0B0 */ f32 unk_0B0;
    /* 0x0B4 */ f32 unk_0B4;
    /* 0x0B8 */ f32 unk_0B8;
    /* 0x0BC */ f32 unk_0BC;
    /* 0x0C0 */ Vec3f unk_0C0;
    /* 0x0CC */ char padCC[4];
    /* 0x0D0 */ f32 unk_0D0;
    /* 0x0D4 */ f32 unk_0D4;
    /* 0x0D8 */ Vec3f unk_0D8;
    /* 0x0E4 */ f32 unk_0E4;
    /* 0x0E8 */ f32 unk_0E8;
    /* 0x0EC */ f32 unk_0EC;
    /* 0x0F0 */ f32 unk_0F0;
    /* 0x0F4 */ f32 unk_0F4;
    /* 0x0F8 */ f32 unk_0F8;
    /* 0x0FC */ char padFC[8];
    /* 0x104 */ f32 unk_104;
    /* 0x108 */ f32 unk_108;
    /* 0x10C */ f32 unk_10C;
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ f32 unk_114;
    /* 0x118 */ f32 unk_118;
    /* 0x11C */ char pad11C[4];
    /* 0x120 */ f32 unk_120;
    /* 0x124 */ f32 unk_124;
    /* 0x128 */ char pad128[4];
    /* 0x12C */ f32 unk_12C;
    /* 0x130 */ f32 unk_130;
    /* 0x134 */ f32 unk_134;
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ char pad13C[4];
    /* 0x140 */ f32 unk_140;
    /* 0x144 */ f32 unk_144;
    /* 0x148 */ char pad148[0xC];
    /* 0x154 */ f32 unk_154;
    /* 0x158 */ f32 unk_158;
    /* 0x15C */ f32 unk_15C;
    /* 0x160 */ char pad160[4];
    /* 0x164 */ f32 unk_164;
    /* 0x168 */ f32 unk_168;
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ f32 unk_170;
    /* 0x174 */ char pad174[8];
    /* 0x17C */ f32 unk_17C;
    /* 0x180 */ f32 unk_180;
    /* 0x184 */ f32 unk_184;
    /* 0x188 */ f32 unk_188;
    /* 0x18C */ f32 unk_18C;
    /* 0x190 */ f32 unk_190;
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ char pad198[4];
    /* 0x19C */ s32 unk_19C;
    /* 0x1A0 */ s32 unk_1A0;
    /* 0x1A4 */ s32 unk_1A4;
    /* 0x1A8 */ char pad1A8[0x1C];
    /* 0x1C4 */ s32 unk_1C4;
    /* 0x1C8 */ s32 unk_1C8;
    /* 0x1CC */ s32 unk_1CC;
    /* 0x1D0 */ s32 unk_1D0;
    /* 0x1D4 */ s32 unk_1D4;
    /* 0x1D8 */ char pad1D8[4];
    /* 0x1DC */ s32 unk_1DC;
    /* 0x1E0 */ s32 unk_1E0;
    /* 0x1E4 */ s32 unk_1E4;
    /* 0x1E8 */ s32 unk_1E8;
    /* 0x1EC */ s32 unk_1EC;
    /* 0x1F0 */ s32 unk_1F0;
    /* 0x1F4 */ s32 unk_1F4;
    /* 0x1F8 */ s32 unk_1F8;
    /* 0x1FC */ s32 unk_1FC;
    /* 0x200 */ s32 unk_200;
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ char pad208[8];
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ char pad214[8];
    /* 0x21C */ s32 unk_21C;
    /* 0x220 */ s32 unk_220;
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22C */ s32 unk_22C;
    /* 0x230 */ char pad230[4];
    /* 0x234 */ s32 unk_234;
    /* 0x238 */ s32 unk_238;
    /* 0x23C */ s32 unk_23C;
    /* 0x240 */ s32 unk_240;
    /* 0x244 */ char pad244[4];
    /* 0x248 */ f32 unk_248;
    /* 0x24C */ f32 unk_24C;
    /* 0x250 */ f32 unk_250;
    /* 0x250 */ char pad254[8];
    /* 0x25C */ f32 unk_25C;
    /* 0x260 */ char pad260[4];
    /* 0x264 */ s32 health;
    /* 0x268 */ s32 damage;
    /* 0x26C */ s32 heal;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ char pad274[4];
    /* 0x278 */ s32 unk_278;
    /* 0x27C */ s32 unk_27C;
    /* 0x280 */ s32 unk_280;
    /* 0x284 */ s32 unk_284;
    /* 0x288 */ s32 unk_288;
    /* 0x28C */ char pad28C[0x28];
    /* 0x2B4 */ s32 unk_2B4;
    /* 0x2B8 */ char pad2B8[0x4];
    /* 0x2BC */ f32 unk_2BC;
    /* 0x2C0 */ f32 unk_2C0;
    /* 0x2C4 */ s32 unk_2C4;
    /* 0x2C8 */ Vec3f unk_2C8;
    /* 0x2D4 */ Vec3f unk_2D4;
    /* 0x2E0 */ Vec3f unk_2E0;
    /* 0x2EC */ Vec3f unk_2EC;
    /* 0x2F8 */ Vec3f jointTable[30];
    /* 0x460 */ union {
                Vec3f unk_460;
                Vec3f unk_460_arr[1]; // probably fake
    };
    /* 0x460 */ Vec3f unk_46C;
    /* 0x494 */ char pad478[4];
    /* 0x47C */ Vec3f *unk_47C;
    /* 0x480 */ Vec3f *unk_480;
    /* 0x484 */ char pad484[4];
    /* 0x488 */ f32 unk_488;
    /* 0x48C */ s8 unk_48C;
    /* 0x490 */ f32 unk_490;
    /* 0x494 */ s32 unk_494;
    /* 0x498 */ s32 unk_498;
    /* 0x49C */ WingInfo wings;
    /* 0x4D8 */ f32 unk_4D8;
    /* 0x4DC */ f32 unk_4DC;
} Player; // size = 0x4E0 Might be Player

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ char pad14[0x4];
    /* 0x18 */ u16 unk_18;
} UnkEntity1C; // size = 0x1C

#endif

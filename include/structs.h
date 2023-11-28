#ifndef STRUCTS_H
#define STRUCTS_H

#include "libultra/ultra64.h"
#include "sf64math.h"

#define UNK_TYPE s32

typedef struct {
    s32 unk0;
    u16* unk4;
} UnkStruct_D_80185CBC;

typedef void (*TimerAction)(s32*, s32);

typedef struct {
    /* 0x00 */ u8 active;
    /* 0x08 */ OSTimer timer;
    /* 0x28 */ TimerAction action;
    /* 0x2C */ s32* address;
    /* 0x30 */ s32 value;
} TimerTask; // size = 0x38, 0x8 aligned

typedef union {
    u16 data[240 * 320];
    u16 array[240][320];
} FrameBuffer; // size = 0x25800

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
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ u8 unk_18[10][3];
    /* 0x36 */ u8 unk_36[10];
    /* 0x40 */ s8 unk_40[10];
    /* 0x4A */ char pad4A[0x14];
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
} UnkStruct_D_80175A10; // size = 0x28

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
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
    /* 0x2C */ s8 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34;
    /* 0x38 */ f32 unk_38;
} UnkStruct_D_80161630; // size = 0x3C

typedef struct UnkStruct_D_80178280 {
    /* 0x000 */ char pad0[0xC];
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */  char pad10[0x24];
    /* 0x034 */ f32 unk_034; 
    /* 0x038 */ char pad38[8];
    /* 0x040 */ Vec3f unk_040;
    /* 0x04C */ Vec3f unk_04C;
    /* 0x058 */ f32 unk_058;
    /* 0x05C */ f32 unk_05C;
    /* 0x060 */ char pad060[0x14];
    /* 0x074 */ f32 unk_074;
    /* 0x078 */ f32 unk_078;
    /* 0x07C */ f32 unk_07C;
    /* 0x080 */ char pad80[0x2C];
    /* 0x0AC */ f32 unk_0AC;
    /* 0x0B0 */ f32 unk_0B0;
    /* 0x0B4 */ f32 unk_0B4;
    /* 0x0B8 */ f32 unk_0B8;
    /* 0x0BC */ f32 unk_0BC;
    /* 0x0C0 */ f32 unk_0C0;
    /* 0x0C4 */ f32 unk_0C4;
    /* 0x0C8 */ char padC8[8];
    /* 0x0D0 */ f32 unk_0D0;
    /* 0x0D4 */ char padD4[0x3C];
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ f32 unk_114;
    /* 0x118 */ f32 unk_118;
    /* 0x11C */ char pad11C[4];
    /* 0x120 */ f32 unk_120;
    /* 0x124 */ f32 unk_124;
    /* 0x128 */ char pad128[0x10];
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ char pad13C[8];
    /* 0x144 */ f32 unk_144;
    /* 0x148 */ char pad148[0x54];
    /* 0x19C */ s32 unk_19C;
    /* 0x1A0 */ char pad1A0[0x28];
    /* 0x1C8 */ s32 unk_1C8;
    /* 0x1CC */ s32 unk_1CC;
    /* 0x1D0 */ s32 unk_1D0;
    /* 0x1D4 */  char pad1D4[0x20];
    /* 0x1F4 */ s32 unk_1F4;
    /* 0x1F8 */ char pad1F8[0xC];
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ char pad208[8];
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ char pad214[0x10];
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22C */ char pad22C[0xC];
    /* 0x238 */ s32 unk_238;
    /* 0x23C */ char pad23C[0x28];
    /* 0x264 */ s32 unk_264;
    /* 0x268 */ char pad268[0x4];
    /* 0x26C */ s32 unk_26C;
    /* 0x270 */ char pad270[0xC];
    /* 0x27C */ s32 unk_27C;
    /* 0x280 */ char pad280[0x34];
    /* 0x2B4 */ s32 unk_2B4;
    /* 0x2B8 */ char pad2B8[0x4];
    /* 0x2BC */ f32 unk_2BC;
    /* 0x2C0 */ char pad2C0[0x1A0];
    /* 0x460 */ Vec3f unk_460[1];
    /* 0x46C */ char pad46C[0x30];
    /* 0x49C */ u8 unk_49C; // could be array
    /* 0x49C */ u8 unk_49D;
    /* 0x49E */ char pad49E[0x42];
} UnkStruct_D_80178280; // size = 0x4E0 Might be Player

typedef struct {
    /* 0x00 */ f32 unk_0;
    /* 0x04 */ s16 unk_4;
    /* 0x06 */ s16 unk_6;
    /* 0x08 */ s16 unk_8;
    /* 0x0A */ s16 unk_A;
    /* 0x0C */ s16 unk_C;
    /* 0x0E */ s16 unk_E;
    /* 0x10 */ s16 unk_10;
} ObjectInit; // size = 0x14

typedef struct {
    /* 0x00 */ u8 status;
    /* 0x02 */ u16 id;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ Vec3f rot;
} Object; // size = 0x1C

typedef struct {
    /* 0x00 */ void (*unk_00)(Object*);
    /* 0x00 */ u8 unk_04;
    /* 0x08 */ void (*unk_08)(Object*);
    /* 0x0C */ f32* unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ s16 unk_14;
    /* 0x16 */ s16 unk_16;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ u8 unk_20;
} ObjectStruct_1C; // size = 0x24

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ char unk40[0x8];
    /* 0x48 */ Vec3f unk_48;
    /* 0x54 */ f32 unk_54;
} Object_58; // size = 0x58

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x02 */ u16 unk_02;
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
    /* 0x2C */ u8 unk_2C; // possibly a color struct
    /* 0x2D */ u8 unk_2D;
    /* 0x2E */ u8 unk_2E;
    /* 0x2F */ u8 unk_2F;
} UnkStruct_D_80174750; // size = 0x30

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4C */ s32 unk_4C;
    /* 0x50 */ char pad50[0x10];
    /* 0x60 */ f32 unk_60;
    /* 0x64 */ f32 unk_64;
    /* 0x68 */ char pad68[8];
    /* 0x70 */ Vec3f unk_70;
    /* 0x7C */ char pad7C[4];
} Object_80; // size = 0x80

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ char pad44[1];
    /* 0x45 */ u8 unk_45; // could be short loaded as u8
    /* 0x46 */ s8 unk_46;
    /* 0x48 */ s32 unk_48;
} Object_4C; // size = 0x4C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ u8 unk_46;
    /* 0x48 */ u16 unk_48;
    /* 0x4A */ u16 unk_4A;
    /* 0x4C */ s8 unk_4C;
    /* 0x4E */ s16 unk_4E;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ Vec3f unk_5C;
    /* 0x68 */ f32 unk_68;
} Object_6C; // size 0x6C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ s16 unk_46;
    /* 0x48 */ s16 unk_48;
    /* 0x4A */ s16 unk_4A;
    /* 0x4C */ char pad4C[0x2];
    /* 0x4E */ s16 unk_4E;
    /* 0x50 */ u16 unk_50;
    /* 0x50 */ char pad50[0x2];
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ f32 unk_5C;
    /* 0x60 */ Vec3f unk_60;
    /* 0x6C */ f32 unk_6C;
    /* 0x70 */ f32 unk_70;
    /* 0x74 */ char pad74[0xC];
    /* 0x80 */ Vec3f unk_80;
} Object_8C; // size 0x8C

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectStruct_1C unk_01C;
    /* 0x040 */ s32 unk_040;
    /* 0x044 */ char unk_44[0xA];
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 unk_050;
    /* 0x052 */ s16 unk_052;
    /* 0x054 */ s16 unk_054;
    /* 0x056 */ s16 unk_056;
    /* 0x058 */ s16 unk_058;
    /* 0x05A */ s16 unk_05A;
    /* 0x05C */ s16 unk_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x05F */ char pad5F[3];
    /* 0x062 */ s8 unk_062;
    /* 0x063 */ char pad63[5];
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ f32 unk_06C;
    /* 0x070 */ f32 unk_070;       
    /* 0x074 */ f32 unk_074;       
    /* 0x078 */ char pad78[0xC]; 
    /* 0x084 */ f32 unk_084;       
    /* 0x088 */  char pad88[0x3E];
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ char padC8[1];
    /* 0x0C9 */ u8 unk_0C9;
    /* 0x0CA */ char padCA[0x12];
    /* 0x0DC */ f32 unk_0DC;
    /* 0x0E0 */ f32 unk_0E0;
    /* 0x0E4 */ f32 unk_0E4;
    /* 0x0E8 */ char padE8[0x28];
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ char pad114[0x1F4];
    /* 0x308 */ Vec3f unk_308;
    /* 0x314 */ char pad314[0xE4];
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f unk_3FC;
} Object_408; // size = 0x408

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectStruct_1C unk_01C;
    /* 0x040 */ s32 unk_040;
    /* 0x044 */ u8 unk_044;
    /* 0x046 */ s16 unk_046;
    /* 0x048 */ s16 unk_048;
    /* 0x04A */ s16 unk_04A;
    /* 0x04C */ char pad4C[2];
    /* 0x04E */ s16 unk_04E;
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
    /* 0x084 */  char pad84[4];
    /* 0x088 */ s32 unk_88;
    /* 0x08C */ s32 unk_8C;
    /* 0x090 */  char pad90[0x20];
    /* 0x0B0 */ s32 unk_0B0;
    /* 0x0B4 */ s16 unk_0B4;
    /* 0x0B6 */ s16 unk_0B6;
    /* 0x0B8 */ s16 unk_0B8;
    /* 0x0BA */ char pad0BA[0x2];
    /* 0x0BC */ u16 unk_0BC;
    /* 0x0BC */ u16 unk_0BE;
    /* 0x0C0 */ u16 unk_0C0;
    /* 0x0C2 */ u16 unk_0C2;
    /* 0x0C4 */ u16 unk_0C4;
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ char padC8[1]; // could be u16 loaded as u8
    /* 0x0C9 */ u8 unk_0C9;
    /* 0x0C9 */ u8 unk_0CA[4];
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
    /* 0x100 */ Vec3f unk_100; // may be Vec3f
    /* 0x10C */ f32 unk_10C;
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
    /* 0x158 */ f32 unk_158;
    /* 0x15C */ char pad15C[4];
    /* 0x160 */ f32 unk_160;
    /* 0x164 */ f32 unk_164;
    /* 0x168 */ f32 unk_168;
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ char pad170[8];
    /* 0x178 */ f32 unk_178;
    /* 0x17C */ f32 unk_17C;
    /* 0x180 */ f32 unk_180;
    /* 0x184 */ f32 unk_184;
    /* 0x188 */ f32 unk_188;
    /* 0x18C */ Vec3f unk_18C; // could be joint table
    /* 0x198 */ char pad198[0x144];
    /* 0x2DC */ Vec3f unk_2DC;
    /* 0x2E8 */ Vec3f unk_2E8;
} Object_2F4; // size = 0x2F4

#endif

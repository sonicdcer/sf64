#ifndef FOX_TITLE_H
#define FOX_TITLE_H

#include "global.h"

typedef struct UnkStruct_D_801B8350 {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ char pad0C[0x4C];
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ s32 unk_5C;
} UnkStruct_D_801B8350; // size = 0x60

typedef struct {
    /* 0x00 */ Vec3f unk_00;
    /* 0x04 */ char pad04[0x50];
} UnkStruct_D_EBFBE0_801B84E8; // size = 0x5C

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ char pad0C[0x4];
    /* 0x10 */ f32 angleX;
    /* 0x14 */ f32 angleY;
    /* 0x18 */ f32 angleZ;
    /* 0x1C */ f32 scale;
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ Vec3f unk_24;
} UnkStruct_D_EBFBE0_801B8658; // size = 0x30

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ char pad0C[0x4];
    /* 0x10 */ f32 scale;
} UnkStruct_D_EBFBE0_801B8688; // size = 0x14

extern Gfx* D_EBFBE0_801AE48C[];
extern f32 D_EBFBE0_801AE4BC[];
extern f32 D_EBFBE0_801AE4EC[];
extern u8 D_EBFBE0_801AE51C[];
extern s32 D_EBFBE0_801AE528[];
extern f32 D_EBFBE0_801B7BB0;
extern f32 D_EBFBE0_801B7BB4;
extern f32 D_EBFBE0_801B7BB8;
extern f32 D_EBFBE0_801B7BBC;
extern s32 D_EBFBE0_801B7BD0;
extern s32 D_EBFBE0_801B7BD4;
extern s32 D_EBFBE0_801B7BD8;
extern f32 D_EBFBE0_801B7BDC;
extern f32 D_EBFBE0_801B7BE0;
extern s32 D_EBFBE0_801B7BE4;
extern s32 D_EBFBE0_801B7BF0;
extern f32 D_EBFBE0_801B829C;
extern f32 D_EBFBE0_801B82A0;
extern f32 D_EBFBE0_801B82A4;
extern s32 D_EBFBE0_801B82B0;
extern f32 D_EBFBE0_801B82C8;
extern s32 D_EBFBE0_801B8340;
extern UnkStruct_D_801B8350 D_EBFBE0_801B8350[];
extern UnkStruct_D_EBFBE0_801B84E8 D_EBFBE0_801B84E8[];
extern UnkStruct_D_EBFBE0_801B8658 D_EBFBE0_801B8658;
extern UnkStruct_D_EBFBE0_801B8688 D_EBFBE0_801B8688;
extern s32 D_EBFBE0_801B869C;
extern f32 D_EBFBE0_801B9044;
extern f32 D_EBFBE0_801B9048;
extern f32 D_EBFBE0_801B904C;
extern f32 D_EBFBE0_801B9054;
extern f32 D_EBFBE0_801B9058;
extern f32 D_EBFBE0_801B9068;
extern f32 D_EBFBE0_801B906C;
extern f32 D_EBFBE0_801B9070;
extern f32 D_EBFBE0_801B9074;
extern f32 D_EBFBE0_801B9078;
extern f32 D_EBFBE0_801B907C;
extern f32 D_EBFBE0_801B9080;
extern f32 D_EBFBE0_801B9084;

void func_EBFBE0_8018E200(void);
void func_EBFBE0_80190A98(void);
void func_EBFBE0_80190EA4(void);
void func_EBFBE0_80190FD0(void);
void func_EBFBE0_80190144(void);
void func_EBFBE0_801903B8(void);
void func_EBFBE0_80191798(f32* arg0, f32* arg1);
void func_EBFBE0_801918FC(void);

#endif

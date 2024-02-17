#ifndef FOX_MAP_H
#define FOX_MAP_H

#include "PR/ultratypes.h"
#include "sf64level.h"

typedef struct {
    /* 0x0 */ f32 angle;
    /* 0x4 */ f32 x;
    /* 0x8 */ f32 y;
    /* 0xC */ f32 scale;
} ObjPosition;

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ PlanetId unk_04;
    /* 0x08 */ PlanetId unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ char pad10[0x4];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
} UnkStruct_D_menu_801AFD18; // size = 0x1C

typedef struct {
    /* 0x00 */ PlanetId id;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 zAngle;
    /* 0x10 */ Vec3f pos;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 scale;
    /* 0x24 */ s32 alpha;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ PlanetId unk_2C;
    /* 0x30 */ PlanetId unk_30;
    /* 0x34 */ PlanetId unk_34;
} Planet; // size = 0x38

typedef struct {
    /* 0x0 */ u8* addr;
    /* 0x4 */ s32 width;
    /* 0x8 */ s32 height;
    /* 0xC */ f32 xPos;
} Texture; // size = 0x10

#endif

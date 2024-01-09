#ifndef FOX_MAP_H
#define FOX_MAP_H

typedef enum PlanetId {
    /* 0 */ PLANET_METEO,
    /* 1 */ PLANET_AREA_6,
    /* 2 */ PLANET_BOLSE,
    /* 3 */ PLANET_SECTOR_Z,
    /* 4 */ PLANET_SECTOR_X,
    /* 5 */ PLANET_SECTOR_Y,
    /* 6 */ PLANET_KATINA,
    /* 7 */ PLANET_MACBETH,
    /* 8 */ PLANET_ZONESS,
    /* 9 */ PLANET_CORNERIA,
    /* 10 */ PLANET_TITANIA,
    /* 11 */ PLANET_AQUAS,
    /* 12 */ PLANET_FORTUNA,
    /* 13 */ PLANET_VENOM,
    /* 14 */ PLANET_SOLAR,
    /* 15 */ PLANET_MAX,
} PlanetId;

typedef struct {
    /* 0x0 */ f32 angle;
    /* 0x4 */ f32 x;
    /* 0x8 */ f32 y;
    /* 0xC */ f32 scale;
} ObjPosition;

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ char pad10[0x4];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
} UnkStruct_D_EBFBE0_801AFD18; // size = 0x1C

typedef struct {
    /* 0x00 */ s32 id;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 zAngle;
    /* 0x10 */ f32 posX;
    /* 0x14 */ f32 posY;
    /* 0x18 */ f32 posZ;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 scale;
    /* 0x24 */ s32 alpha;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
} Planet; // size = 0x38

typedef struct {
    /* 0x0 */ u8* addr;
    /* 0x4 */ s32 width;
    /* 0x8 */ s32 height;
    /* 0xC */ f32 posX;
} Texture; // size = 0x10

#endif

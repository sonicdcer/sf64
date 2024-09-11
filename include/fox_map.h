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

typedef enum {
    /* 0 */ PL_PATH_BLU,
    /* 1 */ PL_PATH_YLW,
    /* 2 */ PL_PATH_RED,
    /* 3 */ PL_WARP_YLW,
    /* 4 */ PL_WARP_RED,
} PathType;

typedef struct {
    /* 0x00 */ PathType type;
    /* 0x04 */ PlanetId start;
    /* 0x08 */ PlanetId end;
    /* 0x0C */ s32 length;
    /* 0x10 */ char pad10[0x4];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 alpha;
} PlanetPath; // size = 0x1C

typedef enum {
    /* 0 */ PL_ANIM_STATIC,
    /* 1 */ PL_ANIM_BILLBOARD,
    /* 2 */ PL_ANIM_ROTATE_Y,
    /* 3 */ PL_ANIM_ROTATE_Z,
    /* 4 */ PL_ANIM_SPIN,
} PlanetAnim;

typedef struct {
    /* 0x0 */ f32 radius;
    /* 0x4 */ f32 incl;
    /* 0x8 */ f32 tilt;
} OrbitParams;

typedef struct {
    /* 0x00 */ PlanetId id;
    /* 0x04 */ OrbitParams orbit;
    /* 0x10 */ Vec3f pos;
    /* 0x1C */ f32 longitude;
    /* 0x20 */ f32 scale;
    /* 0x24 */ s32 alpha;
    /* 0x28 */ PlanetAnim anim;
    /* 0x2C */ PlanetId dest1;
    /* 0x30 */ PlanetId dest2;
    /* 0x34 */ PlanetId warp;
} Planet; // size = 0x38

typedef struct {
    /* 0x0 */ u8* texture;
    /* 0x4 */ s32 width;
    /* 0x8 */ s32 height;
    /* 0xC */ f32 xPos;
} TitleCard; // size = 0x10

typedef enum MapStates {
    /* 0 */ MAP_PROLOGUE,
    /* 1 */ MAP_LYLAT_CARD,
    /* 2 */ MAP_ZOOM_PLANET,
    /* 3 */ MAP_IDLE,
    /* 4 */ MAP_LEVEL_START,
    /* 5 */ MAP_ZOOM_PLANET_PATH, // After level ends
    /* 6 */ MAP_PATH_CHANGE, // Path selection by the player
    /* 7 */ MAP_GAME_OVER
} MapStates;

typedef enum PlanetStatus {
    /* 0 */ PLANET_UNCLEARED,
    /* 1 */ PLANET_CLEARED,
    /* 2 */ PLANET_MEDAL
} PlanetStatus;

typedef enum PlanetExplosions {
    /* 0 */ EXPLOSIONS_CORNERIA,
    /* 1 */ EXPLOSIONS_KATINA,
    /* 2 */ EXPLOSIONS_SECTOR_Y,
    /* 3 */ EXPLOSIONS_MAX
} PlanetExplosions;

typedef enum PlanetSaveSlotTypes {
    /* 0 */ SAVETYPE_PLAYED,
    /* 1 */ SAVETYPE_MEDAL,
    /* 2 */ SAVETYPE_CLEAR
} PlanetSaveSlotTypes;

#endif

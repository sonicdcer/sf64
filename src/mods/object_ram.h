#ifndef OBJECT_RAM_H
#define OBJECT_RAM_H

#include "global.h"

#define ORAM_ENTRY(struct, index, field, format) \
    { ORAM_##struct, index, offsetof(struct, field), NULL, 0, FMT_##format, WIDTH_##format, 0, 0 }
#define ORAM_OFF \
    { 0, 0, 0, 0, 0, 0, 0, 0, 0 }

#define WRAP_MODE(val, max) ((u8) ((val) + (max)) % max)

#define OBJ_ARRAY_INFO(objarr, name) \
    { objarr, sizeof(*objarr), ARRAY_COUNT(objarr), name }

typedef struct ObjArrayInfo {
    void* ptr;
    size_t size;
    s32 count;
    char* name;
} ObjArrayInfo;

typedef struct RamEntry {
    u8 type;
    u8 index;
    s16 offset;
    Object* objPtr;
    void* dataPtr;
    u8 fmt;
    u8 width;
    u16 x;
    u16 y;
} RamEntry;

typedef enum ObjectRamType {
    ORAM_NONE,
    ORAM_Player,
    ORAM_Scenery360,
    ORAM_Scenery,
    ORAM_Sprite,
    ORAM_Actor,
    ORAM_Boss,
    ORAM_Item,
    ORAM_Effect,
    ORAM_PlayerShot,
    ORAM_TexturedLine,
    ORAM_RadarMark,
    ORAM_BonusText,
    ORAM_MAX,
} ObjectRamType;

typedef enum FormatType {
    FMT_HEX,
    FMT_SIGN,
    FMT_UNSIGN,
    FMT_FLOAT,
    FMT_MAX,
} FormatType;

typedef enum EditMode {
    EDM_TYPE,
    EDM_INDEX,
    EDM_OFFSET,
    EDM_FORMAT,
    EDM_WIDTH,
    EDM_VALUE,
    // EDM_POS,
    EDM_MAX,
} EditMode;

#define FMT_f32 FMT_FLOAT
#define WIDTH_f32 2
#define FMT_s32 FMT_SIGN
#define WIDTH_s32 2
#define FMT_u32 FMT_UNSIGN
#define WIDTH_u32 2
#define FMT_x32 FMT_HEX
#define WIDTH_x32 2

#define FMT_s16 FMT_SIGN
#define WIDTH_s16 1
#define FMT_u16 FMT_UNSIGN
#define WIDTH_u16 1
#define FMT_x16 FMT_HEX
#define WIDTH_x16 1

#define FMT_s8 FMT_SIGN
#define WIDTH_s8 0
#define FMT_u8 FMT_UNSIGN
#define WIDTH_u8 0
#define FMT_x8 FMT_HEX
#define WIDTH_x8 0

u32 ObjectRam_GetData(RamEntry* entry);

#endif

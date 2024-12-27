#ifndef OBJECT_RAM_H
#define OBJECT_RAM_H

#include "global.h"

#define WRAP_MODE(val, max) ((u16) ((val) + (max)) % (max))

typedef enum OramFieldType {
    ORAM_TYPE_char,
    ORAM_TYPE_short,
    ORAM_TYPE_long,
    ORAM_TYPE_uintptr_t,
    ORAM_TYPE_s8,
    ORAM_TYPE_u8,
    ORAM_TYPE_s16,
    ORAM_TYPE_u16,
    ORAM_TYPE_s32,
    ORAM_TYPE_u32,
    ORAM_TYPE_f32,
    ORAM_TYPE_STRUCT,
    ORAM_TYPE_Vec3f,
    ORAM_TYPE_Object,
    ORAM_TYPE_ObjectInfo,
    ORAM_TYPE_PlayerSfx,
    ORAM_TYPE_ArwingInfo,
} OramFieldType;

typedef struct OramFieldInfo {
    char* name;
    s32 offset;
    s32 type;
    s32 size;
    s32 count;
} OramFieldInfo;

#define STRUCT_FIELD(st, type, name, count) {#name, offsetof(st,name), ORAM_TYPE_##type, sizeof(type), count} 

#define OBJ_ARRAY_INFO(objarr, name, fields) \
    { objarr, sizeof(*objarr), ARRAY_COUNT(objarr), name, fields, ARRAY_COUNT(fields) }

typedef struct ObjArrayInfo {
    void* ptr;
    size_t size;
    s32 count;
    char* name;
    OramFieldInfo* fields;
    s32 fieldCount;
} ObjArrayInfo;

typedef struct RamEntry {
    s16 type;
    s16 index;
    s16 field;
    s16 element;
    s16 component;
    OramFieldInfo* fieldInfo;
    s16 offset;
    void* objPtr;
    void* dataPtr;
    s16 fmt;
    u8 width;
    u16 x;
    u16 y;
} RamEntry;

#define ORAM_ENTRY(struct, index, field) \
    { ORAM_##struct, index, 0, 0, 0, NULL, offsetof(struct, field), NULL, NULL, 0, 0, 0, 0 }
#define ORAM_OFF \
    { 0 }

typedef enum RamModMode {
    RAMMOD_OFF,
    RAMMOD_CHEAT,
    RAMMOD_OBJECT,
    RAMMOD_MAX,
} RamModMode;

typedef enum CheatMode {
    CHEAT_SHIELDS,
    CHEAT_LASERS,
    CHEAT_BOMBS,
    CHEAT_BOOST,
    CHEAT_LIVES,
    CHEAT_TEAMMATES,
    CHEAT_SPEED,
    CHEAT_HITS,
    CHEAT_CHECKPOINT,
    CHEAT_COMPLETE,
    CHEAT_MAX,
} CheatMode;

typedef struct CheatRamEntry {
    union {
        fu* addr;
        void (*func)(void);
    };
    s32 size;
    fu data;
} CheatRamEntry;

#define SET_CHEAT_RAM(ram, address, value)     \
    {                                            \
        (ram)->addr = (void*)(address);             \
        (ram)->size = sizeof(*(address)); \
        (ram)->data.i = (value); \
    }

typedef struct CheatEntry {
    CheatMode mode;
    CheatRamEntry ram[4];
    s32 option;
    s32 optionMax;
    s32 action;
    bool hold;
} CheatEntry;

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
    // EDM_FORMAT,
    // EDM_WIDTH,
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

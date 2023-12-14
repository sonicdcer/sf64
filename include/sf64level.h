#ifndef SF64_LEVEL
#define SF64_LEVEL

#include "structs.h"

typedef enum {
    LEVELTYPE_GROUND,
    LEVELTYPE_SPACE,
    LEVELTYPE_UNK2,
    LEVELTYPE_UNK3,
} LevelType;

typedef struct {
    /* 0x00 */ s32 type;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 bgColor;
    /* 0x0A */ u16 unk_0A;
    /* 0x0C */ s32 fogR;
    /* 0x10 */ s32 fogG;
    /* 0x14 */ s32 fogB;
    /* 0x18 */ s32 fogN;
    /* 0x1C */ s32 fogF;
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ s32 lightR;
    /* 0x30 */ s32 lightG;
    /* 0x34 */ s32 lightB;
    /* 0x38 */ s32 ambR;
    /* 0x3C */ s32 ambG;
    /* 0x40 */ s32 ambB;
} EnvSettings; // size = 0x44?

typedef enum {
    OVL_SETUP_TITLE,
    OVL_SETUP_MENU,
    OVL_SETUP_MAP,
    OVL_SETUP_STATE_5,
    OVL_SETUP_CREDITS,
    OVL_SETUP_CORNERIA,
    OVL_SETUP_METEO,
    OVL_SETUP_TITANIA,
    OVL_SETUP_SECTOR_X,
    OVL_SETUP_AQUAS,
    OVL_SETUP_AREA_6,
    OVL_SETUP_FORTUNA,
    OVL_SETUP_UNK_4,
    OVL_SETUP_SECTOR_Y,
    OVL_SETUP_SOLAR,
    OVL_SETUP_ZONESS,
    OVL_SETUP_VENOM_2,
    OVL_SETUP_TRAINING,
    OVL_SETUP_VENOM_1,
    OVL_SETUP_KATINA,
    OVL_SETUP_20,
    OVL_SETUP_MACBETH,
    OVL_SETUP_BOLSE,
    OVL_SETUP_SECTOR_Z,
    OVL_SETUP_VENOM_SW,
    OVL_SETUP_VERSUS = 50,
    OVL_SETUP_LOGO = 99,
} OverlaySetups;

typedef enum {
    LEVEL_CORNERIA,
    LEVEL_METEO,
    LEVEL_SECTOR_X,
    LEVEL_AREA_6,
    LEVEL_UNK_4,
    LEVEL_SECTOR_Y,
    LEVEL_VENOM_1,
    LEVEL_SOLAR,
    LEVEL_ZONESS,
    LEVEL_VENOM_2,
    LEVEL_TRAINING,
    LEVEL_MACBETH,
    LEVEL_TITANIA,
    LEVEL_AQUAS,
    LEVEL_FORTUNA,
    LEVEL_UNK_15,
    LEVEL_KATINA,
    LEVEL_BOLSE,
    LEVEL_SECTOR_Z,
    LEVEL_VENOM_SW,
    LEVEL_VERSUS,
} LevelId;

#endif

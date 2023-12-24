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
    /* 0x0A */ u16 seqId;
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
    /* 0 */ LEVEL_CORNERIA,
    /* 1 */ LEVEL_METEO,
    /* 2 */ LEVEL_SECTOR_X,
    /* 3 */ LEVEL_AREA_6,
    /* 4 */ LEVEL_UNK_4,
    /* 5 */ LEVEL_SECTOR_Y,
    /* 6 */ LEVEL_VENOM_1,
    /* 7 */ LEVEL_SOLAR,
    /* 8 */ LEVEL_ZONESS,
    /* 9 */ LEVEL_VENOM_2,
    /* 10 */ LEVEL_TRAINING,
    /* 11 */ LEVEL_MACBETH,
    /* 12 */ LEVEL_TITANIA,
    /* 13 */ LEVEL_AQUAS,
    /* 14 */ LEVEL_FORTUNA,
    /* 15 */ LEVEL_UNK_15,
    /* 16 */ LEVEL_KATINA,
    /* 17 */ LEVEL_BOLSE,
    /* 18 */ LEVEL_SECTOR_Z,
    /* 19 */ LEVEL_VENOM_SW,
    /* 80 */ LEVEL_VERSUS,
} LevelId;

typedef enum {
    VSTAGE_CORNERIA,
    VSTAGE_KATINA,
    VSTAGE_SECTOR_Z,
} VsStage;

#endif

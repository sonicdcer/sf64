#include "global.h"

typedef struct RamEntry {
    u8 type;
    u8 index;
    s16 offset;
    u8 width;
    u8 fmt;
    u16 x;
    u16 y;
} RamEntry;

static RamEntry oRamEntries[8] = {
    { 1, 0, offsetof(Player, pos.x), 2, 3, 0, 0 }, { 1, 0, offsetof(Player, pos.y), 2, 3, 0, 0 },
    { 1, 0, offsetof(Player, pos.z), 2, 3, 0, 0 }, { 0, 0, offsetof(Player, unk_144), 2, 3, 0, 0 },
    { 0, 0, offsetof(Player, vel.x), 2, 3, 0, 0 }, { 0, 0, offsetof(Player, vel.y), 2, 3, 0, 0 },
    { 0, 0, offsetof(Player, vel.z), 2, 3, 0, 0 },
};

static u32 selectIndex = 0;
static s32 oRamActive = 0;
static u32 editMode = 0;
static s32 editing = 0;
static OSContPad* contPress;

typedef enum ObjectRamType {
    ORAM_NONE,
    ORAM_PLAYER,
    ORAM_SCENE360,
    ORAM_SCENERY,
    ORAM_SPRITE,
    ORAM_ACTOR,
    ORAM_BOSS,
    ORAM_ITEM,
    ORAM_EFFECT,
    ORAM_SHOT,
    ORAM_MAX,
} ObjectRamType;

typedef enum EditMode {
    EDM_TYPE,
    EDM_OFFSET,
    EDM_FORMAT,
    EDM_POS,
    EDM_MAX,
} EditMode;

typedef enum FormatType {
    FMT_HEX,
    FMT_SIGN,
    FMT_UNSIGN,
    FMT_FLOAT,
    FMT_MAX,
} FormatType;

#define WRAP_MODE(val, max) ((u8) ((val) + (max)) % max)

static void* objPointers[] = { NULL, NULL, NULL, gScenery, gSprites, gActors, gBosses, gItems, gEffects, gPlayerShots };
static size_t objSizes[] = { 0,
                             sizeof(Player),
                             sizeof(Scenery360),
                             sizeof(Scenery),
                             sizeof(Sprite),
                             sizeof(Actor),
                             sizeof(Boss),
                             sizeof(Item),
                             sizeof(Effect),
                             sizeof(PlayerShot) };
static s32 objCounts[] = { 1,
                           1,
                           200,
                           ARRAY_COUNT(gScenery),
                           ARRAY_COUNT(gSprites),
                           ARRAY_COUNT(gActors),
                           ARRAY_COUNT(gBosses),
                           ARRAY_COUNT(gItems),
                           ARRAY_COUNT(gEffects),
                           ARRAY_COUNT(gPlayerShots) };

void ObjectRam_EditPosition(RamEntry* entry) {
    if ((contPress->button & U_JPAD) && (entry->y > 0)) {
        entry->y--;
    } else if ((contPress->button & D_JPAD) && (entry->y < SCREEN_HEIGHT)) {
        entry->y++;
    } else if ((contPress->button & L_JPAD) && (entry->x > 0)) {
        entry->x--;
    } else if ((contPress->button & R_JPAD) && (entry->x < SCREEN_WIDTH / 2)) {
        entry->x++;
    }
}

void ObjectRam_EditObject(RamEntry* entry) {
    if (contPress->button & U_JPAD) {
        entry->type++;
        if ((entry->type == ORAM_SCENE360) && (gLevelMode != LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_SCENERY;
        } else if ((entry->type == ORAM_SCENERY) && (gLevelClearScreenTimer == LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_SPRITE;
        }
    } else if (contPress->button & D_JPAD) {
        entry->type--;
        if ((entry->type == ORAM_SCENE360) && (gLevelMode != LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_PLAYER;
        } else if ((entry->type == ORAM_SCENERY) && (gLevelClearScreenTimer == LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_SCENE360;
        }
    }
    entry->type = WRAP_MODE(entry->type, ORAM_MAX);
    if (entry->type == 0) {
        return;
    }
    if (entry->index >= objCounts[entry->type]) {
        entry->index = objCounts[entry->type] - 1;
    }
    if (entry->offset >= objSizes[entry->type]) {
        entry->offset = objSizes[entry->type] - (1 << entry->width);
    }
    if (contPress->button & L_JPAD) {
        entry->index--;
    } else if (contPress->button & R_JPAD) {
        entry->index++;
    }

    entry->index = WRAP_MODE(entry->index, objCounts[entry->type]);
}

void ObjectRam_EditFormat(RamEntry* entry) {
    if ((contPress->button & U_JPAD) && (entry->width < 2)) {
        entry->width++;
    } else if ((contPress->button & D_JPAD) && (entry->width > 0)) {
        entry->width--;
    } else if (contPress->button & L_JPAD) {
        entry->fmt--;
    } else if (contPress->button & R_JPAD) {
        entry->fmt++;
    }
    entry->fmt = WRAP_MODE(entry->fmt, FMT_MAX);
    if (entry->fmt == FMT_FLOAT) {
        entry->width = 2;
    }
    entry->offset &= ~((1 << entry->width) - 1);
}

void ObjectRam_EditAddress(RamEntry* entry) {
    if (contPress->button & U_JPAD) {
        entry->offset += 0x10;
    } else if (contPress->button & D_JPAD) {
        entry->offset -= 0x10;
    } else if (contPress->button & L_JPAD) {
        entry->offset -= 1 << entry->width;
    } else if (contPress->button & R_JPAD) {
        entry->offset += 1 << entry->width;
    } else if (contPress->button & R_TRIG) {
        entry->offset += 0x100;
    } else if (contPress->button & Z_TRIG) {
        entry->offset -= 0x100;
    }
    if (entry->offset < 0) {
        entry->offset = 0;
    } else if (entry->offset >= objSizes[entry->type]) {
        entry->offset = objSizes[entry->type] - (1 << entry->width);
    }
}

void ObjectRam_Select(void) {
    if (contPress->button & U_JPAD) {
        selectIndex--;
    } else if (contPress->button & D_JPAD) {
        selectIndex++;
    } else if (contPress->button & L_JPAD) {
        editMode--;
    } else if (contPress->button & R_JPAD) {
        editMode++;
        ;
    }
    selectIndex = WRAP_MODE(selectIndex, ARRAY_COUNT(oRamEntries));
    editMode = WRAP_MODE(editMode, EDM_MAX);
    if (oRamEntries[selectIndex].type == ORAM_NONE) {
        editMode = EDM_TYPE;
    }
}

u32 ObjectRam_GetData(RamEntry* entry) {
    fu data;
    uintptr_t ptr;

    if ((entry->type <= ORAM_NONE) || (entry->type >= ORAM_MAX)) {
        return 0;
    }
    ptr = (uintptr_t) objPointers[entry->type] + entry->index * objSizes[entry->type];

    switch (entry->width) {
        case 0:
            data.i = *((u8*) (ptr + entry->offset));
            if ((entry->fmt == FMT_SIGN) && (data.i >= 0x80)) {
                data.i -= 0x80;
            }
            break;
        case 1:
            data.i = *((u16*) (ptr + entry->offset));
            if ((entry->fmt == FMT_SIGN) && (data.i >= 0x8000)) {
                data.i -= 0x8000;
            }
            break;
        case 2:
            if (entry->fmt == FMT_FLOAT) {
                data.f = *((f32*) (ptr + entry->offset));
            } else {
                data.i = *((u32*) (ptr + entry->offset));
            }
            break;
    }
    return data.i;
}

static char* objTypes[] = { "NONE", "PLYR", "S360", "SCEN", "SPRT", "ACTR", "BOSS", "ITEM", "EFCT", "SHOT" };
static char* fmtTypes[] = { "X", "S", "U", "F" };

#define SET_DRAW_COLOR(mode)                                        \
    if ((index == selectIndex) && (editMode == mode)) {             \
        if (editing) {                                              \
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 0, 0, 255);   \
        } else {                                                    \
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 128, 0, 255); \
        }                                                           \
    } else {                                                        \
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);     \
    }

void ObjectRam_DrawEntry(RamEntry* entry, s32 index) {
    fu data;
    s32 y = entry->y + 50 + 27 * index;

    SET_DRAW_COLOR(EDM_TYPE)
    Graphics_DisplaySmallText(entry->x + 10, y, 1.0f, 1.0f, objTypes[entry->type]);

    if (entry->type == 0) {
        return;
    }

    Graphics_Printf("%2d", entry->index);
    Graphics_DisplaySmallText(entry->x + 45, y, 1.0f, 1.0f, D_801619A0);
    SET_DRAW_COLOR(EDM_OFFSET)
    Graphics_Printf("%03X", entry->offset);
    Graphics_DisplaySmallText(entry->x + 70, y, 1.0f, 1.0f, D_801619A0);
    SET_DRAW_COLOR(EDM_FORMAT)
    Graphics_DisplaySmallText(entry->x + 10, y + 10, 1.0f, 1.0f, fmtTypes[entry->fmt]);
    Graphics_Printf("%-2d", 1 << (entry->width + 3));
    Graphics_DisplaySmallText(entry->x + 20, y + 10, 1.0f, 1.0f, D_801619A0);

    if (index == selectIndex) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 192, 0, 255);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    }

    data.i = ObjectRam_GetData(entry);
    switch (entry->fmt) {
        case FMT_HEX:
            Graphics_Printf("%0*X", 1 << (entry->width + 1), data.i);
            break;
        case FMT_SIGN:
            Graphics_Printf("%d", data.i);
            break;
        case FMT_UNSIGN:
            Graphics_Printf("%u", data.i);
            break;
        case FMT_FLOAT:
            Graphics_Printf("%10.2f", data.f);
            break;
    }
    Graphics_DisplaySmallText(entry->x + 40, y + 10, 1.0f, 1.0f, D_801619A0);
}

static char* omStr[] = { "OBJECT", "OFFSET", "FORMAT", "POSITION" };

void ObjectRam_Update(void) {
    s32 i;
    objPointers[ORAM_PLAYER] = gPlayer;
    objPointers[ORAM_SCENE360] = gScenery360;
    objCounts[ORAM_PLAYER] = gCamCount;
    contPress = &gControllerPress[gMainController];

    if ((gPlayState == PLAY_PAUSE) && (contPress->button & R_CBUTTONS)) {
        oRamActive = 1 - oRamActive;
    }
    if (!oRamActive || (gPlayState <= PLAY_INIT)) {
        return;
    }
    if (contPress->button & L_TRIG) {
        editing ^= 1;
    }
    if (!editing) {
        ObjectRam_Select();
    } else {
        switch (editMode) {
            case 0:
                ObjectRam_EditObject(&oRamEntries[selectIndex]);
                break;
            case 1:
                ObjectRam_EditAddress(&oRamEntries[selectIndex]);
                break;
            case 2:
                ObjectRam_EditFormat(&oRamEntries[selectIndex]);
                break;
            case 3:
                ObjectRam_EditPosition(&oRamEntries[selectIndex]);
                break;
        }
    }
    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    // Graphics_DisplaySmallText(20, 50, 1.0f, 1.0f, omStr[editMode]);
    for (i = 0; i < ARRAY_COUNT(oRamEntries); i++) {
        ObjectRam_DrawEntry(&oRamEntries[i], i);
    }
}

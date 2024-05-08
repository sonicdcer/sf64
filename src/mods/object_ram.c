#include "global.h"

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

#define ORAM_OFF \
    { 0, 0, 0, 0, 0, 0, 0, 0, 0 }
#define ORAM_ENTRY(struct, field, index, format, width) \
    { ORAM_##struct, index, offsetof(struct, field), NULL, 0, format, width, 0, 0 }

static RamEntry oRamEntries[7] = {
    ORAM_ENTRY(PlayerShot, obj.status, 0, FMT_HEX, 2),
    ORAM_ENTRY(Player, pos.y, 0, FMT_FLOAT, 2),
    ORAM_ENTRY(Player, pos.z, 0, FMT_FLOAT, 2),
    ORAM_ENTRY(Actor, obj.status, 0, FMT_HEX, 2),
    ORAM_OFF,
    ORAM_OFF,
    ORAM_OFF,
};

static u32 selectNum = 0;
static s32 oRamActive = true;
static u32 editMode = EDM_TYPE;
static s32 editing = false;
static s32 editingValue = false;
static fu dataTemp;
static OSContPad* contPress;
static OSContPad* contHold;

#define WRAP_MODE(val, max) ((u8) ((val) + (max)) % max)

static void* objPointers[] = {
    NULL,   NULL,     NULL,         gScenery,       gSprites,    gActors,    gBosses,
    gItems, gEffects, gPlayerShots, gTexturedLines, gRadarMarks, gBonusText,
};
static size_t objSizes[] = {
    0,
    sizeof(Player),
    sizeof(Scenery360),
    sizeof(Scenery),
    sizeof(Sprite),
    sizeof(Actor),
    sizeof(Boss),
    sizeof(Item),
    sizeof(Effect),
    sizeof(PlayerShot),
    sizeof(TexturedLine),
    sizeof(RadarMark),
    sizeof(BonusText),
};
static s32 objCounts[] = {
    1,
    1,
    200,
    ARRAY_COUNT(gScenery),
    ARRAY_COUNT(gSprites),
    ARRAY_COUNT(gActors),
    ARRAY_COUNT(gBosses),
    ARRAY_COUNT(gItems),
    ARRAY_COUNT(gEffects),
    ARRAY_COUNT(gPlayerShots),
    ARRAY_COUNT(gTexturedLines),
    ARRAY_COUNT(gRadarMarks),
    ARRAY_COUNT(gBonusText),
};

u32 ObjectRam_GetData(RamEntry* entry);

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
        if ((entry->type == ORAM_Scenery360) && (gLevelMode != LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_Scenery;
        } else if ((entry->type == ORAM_Scenery) && (gLevelMode == LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_Sprite;
        }
    } else if (contPress->button & D_JPAD) {
        entry->type--;
        if ((entry->type == ORAM_Scenery360) && (gLevelMode != LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_Player;
        } else if ((entry->type == ORAM_Scenery) && (gLevelMode == LEVELMODE_ALL_RANGE)) {
            entry->type = ORAM_Scenery360;
        }
    }
    entry->type = WRAP_MODE(entry->type, ORAM_MAX);
}

void ObjectRam_EditIndex(RamEntry* entry) {

    entry->index = MIN(entry->index, objCounts[entry->type] - 1);

    if (contPress->button & U_JPAD) {
        entry->index++;
    } else if (contPress->button & D_JPAD) {
        entry->index--;
    }

    entry->index = WRAP_MODE(entry->index, objCounts[entry->type]);
}

void ObjectRam_EditFormat(RamEntry* entry) {
    if (contPress->button & U_JPAD) {
        entry->fmt--;
    } else if (contPress->button & D_JPAD) {
        entry->fmt++;
    }
    entry->fmt = WRAP_MODE(entry->fmt, FMT_MAX);
    if (entry->fmt == FMT_FLOAT) {
        entry->width = 2;
        entry->offset &= ~((1 << entry->width) - 1);
    }
}

void ObjectRam_EditWidth(RamEntry* entry) {
    if ((contPress->button & U_JPAD) && (entry->width < 2)) {
        entry->width++;
    } else if ((contPress->button & D_JPAD) && (entry->width > 0)) {
        entry->width--;
    }
    if (entry->fmt == FMT_FLOAT) {
        entry->width = 2;
    }
    entry->offset &= ~((1 << entry->width) - 1);
}

void ObjectRam_EditOffset(RamEntry* entry) {
    s32 inc;

    entry->offset = MIN(entry->offset, objSizes[entry->type] - (1 << entry->width));

    if (contHold->button & Z_TRIG) {
        inc = 0x10;
    } else if (contHold->button & R_TRIG) {
        inc = 0x100;
    } else {
        inc = 1 << entry->width;
    }
    inc *= (contPress->button & D_JPAD) ? -1 : 1;
    if (contPress->button & (U_JPAD | D_JPAD)) {
        entry->offset += inc;
    }
    if (entry->offset < 0) {
        entry->offset = 0;
    } else if (entry->offset >= objSizes[entry->type]) {
        entry->offset = objSizes[entry->type] - (1 << entry->width);
    }
}

void ObjectRam_EditValue(RamEntry* entry) {
    fu* data = entry->dataPtr;
    s32 inc;

    if (contHold->button & Z_TRIG) {
        inc = (entry->fmt == FMT_HEX) ? 0x10 : 10;
    } else if (contHold->button & R_TRIG) {
        inc = (entry->fmt == FMT_HEX) ? 0x100 : 100;
    } else {
        inc = 1;
    }
    inc *= (contPress->button & D_JPAD) ? -1 : 1;

    if (contPress->button & (U_JPAD | D_JPAD)) {
        if (!editingValue) {
            dataTemp.i = ObjectRam_GetData(entry);
            editingValue = true;
        }
        if (entry->fmt == FMT_FLOAT) {
            dataTemp.f += inc;
        } else {
            dataTemp.i += inc;
        }
    }
}

void ObjectRam_Select(void) {
    if ((contPress->button & U_JPAD) && !editing) {
        selectNum--;
    } else if ((contPress->button & D_JPAD) && !editing) {
        selectNum++;
    } else if (contPress->button & L_JPAD) {
        editMode--;
    } else if (contPress->button & R_JPAD) {
        editMode++;
    }
    selectNum = WRAP_MODE(selectNum, ARRAY_COUNT(oRamEntries));
    editMode = WRAP_MODE(editMode, EDM_MAX);
    if (oRamEntries[selectNum].type == ORAM_NONE) {
        editMode = EDM_TYPE;
    }
}

u32 ObjectRam_GetData(RamEntry* entry) {
    fu data;
    uintptr_t ptr;
    s32 offset;
    s32 index;

    if ((entry->type <= ORAM_NONE) || (entry->type >= ORAM_MAX)) {
        return 0;
    }

    switch (entry->width) {
        case 0:
            data.i = *((u8*) entry->dataPtr);
            if ((entry->fmt == FMT_SIGN) && (data.i >= 0x80)) {
                data.i -= 0x80;
            }
            break;
        case 1:
            data.i = *((u16*) entry->dataPtr);
            if ((entry->fmt == FMT_SIGN) && (data.i >= 0x8000)) {
                data.i -= 0x8000;
            }
            break;
        case 2:
            if (entry->fmt == FMT_FLOAT) {
                data.f = *((f32*) entry->dataPtr);
            } else {
                data.i = *((u32*) entry->dataPtr);
            }
            break;
    }
    return data.i;
}

void ObjectRam_WriteValue(RamEntry* entry) {
    switch (entry->width) {
        case 0:
            *((u8*) entry->dataPtr) = dataTemp.i;
            break;
        case 1:
            *((u16*) entry->dataPtr) = dataTemp.i;
            break;
        case 2:
            if (entry->fmt == FMT_FLOAT) {
                *((f32*) entry->dataPtr) = dataTemp.f;
            } else {
                *((u32*) entry->dataPtr) = dataTemp.i;
            }
            break;
    }
}

static char* objTypes[] = { "--", "PL", "SC", "SC", "SP", "AC", "BS", "IT", "EF", "SH", "TL", "RM", "BT" };
static char* fmtTypes[] = { "X", "S", "U", "F" };

#define SET_DRAW_COLOR(mode)                                        \
    if (num == selectNum) {                                         \
        if (editing && (editMode == mode)) {                        \
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 0, 0, 255);   \
        } else if (editing || (editMode == mode)) {                 \
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 85, 0, 255);  \
        } else {                                                    \
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 170, 0, 255); \
        }                                                           \
    } else {                                                        \
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);     \
    }

void ObjectRam_DrawEntry(RamEntry* entry, s32 num) {
    fu data;
    s32 x = entry->x;
    s32 y = entry->y + 50 + 27 * num;
    s32 i;
    s32 offset;
    s32 index;

    if ((entry->type < ORAM_NONE) || (entry->type >= ORAM_MAX)) {
        return;
    }

    offset = MIN(entry->offset, objSizes[entry->type] - (1 << entry->width));
    index = MIN(entry->index, objCounts[entry->type] - 1);

    entry->objPtr = (uintptr_t) objPointers[entry->type] + index * objSizes[entry->type];
    entry->dataPtr = (uintptr_t) entry->objPtr + offset;

    SET_DRAW_COLOR(EDM_TYPE)
    Graphics_DisplaySmallText(x + 10, y, 1.0f, 1.0f, objTypes[entry->type]);

    if (entry->type == ORAM_NONE) {
        return;
    }
    SET_DRAW_COLOR(EDM_MAX)
    Graphics_DisplaySmallText(x + 26, y, 1.0f, 1.0f, "-");

    SET_DRAW_COLOR(EDM_INDEX)
    Graphics_Printf("%02d", index);
    Graphics_DisplaySmallText(entry->x + 32, y, 1.0f, 1.0f, D_801619A0);

    SET_DRAW_COLOR(EDM_MAX)
    Graphics_DisplaySmallText(x + 50, y, 1.0f, 1.0f, ".");

    SET_DRAW_COLOR(EDM_OFFSET)
    Graphics_Printf("%03X", offset);
    Graphics_DisplaySmallText(entry->x + 56, y, 1.0f, 1.0f, D_801619A0);

    SET_DRAW_COLOR(EDM_FORMAT)
    Graphics_DisplaySmallText(x + 90, y, 1.0f, 1.0f, fmtTypes[entry->fmt]);
    SET_DRAW_COLOR(EDM_WIDTH)
    Graphics_Printf("%-2d", 1 << (entry->width + 3));
    Graphics_DisplaySmallText(x + 100, y, 1.0f, 1.0f, D_801619A0);

    SET_DRAW_COLOR(EDM_VALUE)
    if ((num != selectNum) || !editingValue) {
        data.i = ObjectRam_GetData(entry);
    } else if (entry->fmt == FMT_FLOAT) {
        data.f = dataTemp.f;
    } else {
        data.i = dataTemp.i;
    }

    switch (entry->fmt) {
        case FMT_HEX:
            Graphics_Printf("0X%0*X", 1 << (entry->width + 1), data.i);
            x += (8 - (1 << (entry->width + 1))) * 9;
            break;
        case FMT_SIGN:
            Graphics_Printf("%10d", data.i);
            break;
        case FMT_UNSIGN:
            Graphics_Printf("%10u", data.i);
            break;
        case FMT_FLOAT:
            Graphics_Printf("%10.2f", data.f);
            break;
    }
    Graphics_DisplaySmallText(x + 25, y + 12, 1.0f, 1.0f, D_801619A0);
}

static char* omStr[] = { "OBJECT", "INDEX", "OFFSET", "FORMAT", "WIDTH", "VALUE" }; // "POSITION" };

void ObjectRam_Update(void) {
    s32 i;
    objPointers[ORAM_Player] = gPlayer;
    objPointers[ORAM_Scenery360] = gScenery360;
    objCounts[ORAM_Player] = gCamCount;
    contPress = &gControllerPress[gMainController];
    contHold = &gControllerHold[gMainController];

    if ((gPlayState == PLAY_PAUSE) && (contPress->button & R_CBUTTONS)) {
        oRamActive = 1 - oRamActive;
    }
    if (!oRamActive || (gPlayState <= PLAY_INIT)) {
        return;
    }
    if (contPress->button & L_TRIG) {
        editing ^= 1;
    }

    ObjectRam_Select();

    if (editingValue && !(editing && (editMode == EDM_VALUE))) {
        ObjectRam_WriteValue(&oRamEntries[selectNum]);
        editingValue = false;
    }

    if (editing) {
        switch (editMode) {
            case EDM_TYPE:
                ObjectRam_EditObject(&oRamEntries[selectNum]);
                break;
            case EDM_INDEX:
                ObjectRam_EditIndex(&oRamEntries[selectNum]);
                break;
            case EDM_OFFSET:
                ObjectRam_EditOffset(&oRamEntries[selectNum]);
                break;
            case EDM_FORMAT:
                ObjectRam_EditFormat(&oRamEntries[selectNum]);
                break;
            case EDM_WIDTH:
                ObjectRam_EditWidth(&oRamEntries[selectNum]);
                break;
            case EDM_VALUE:
                ObjectRam_EditValue(&oRamEntries[selectNum]);
                break;
                // case EDM_POS:
                //     ObjectRam_EditPosition(&oRamEntries[selectNum]);
                //     break;
        }
    }
    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    // Graphics_DisplaySmallText(20, 50, 1.0f, 1.0f, omStr[editMode]);
    for (i = 0; i < ARRAY_COUNT(oRamEntries); i++) {
        ObjectRam_DrawEntry(&oRamEntries[i], i);
    }

    if ((oRamEntries[selectNum].type > ORAM_Player) && (oRamEntries[selectNum].type < ORAM_TexturedLine)) {
        gTexturedLines[99].mode = 3;
        gTexturedLines[99].xyScale = 3.0f;
        gTexturedLines[99].posAA.x = gPlayer[0].pos.x;
        gTexturedLines[99].posAA.y = gPlayer[0].pos.y;
        gTexturedLines[99].posAA.z = gPlayer[0].pos.z - 100.0f;
        if (oRamEntries[selectNum].objPtr->status != OBJ_FREE) {
            gTexturedLines[99].timer = 15;
        }
        gTexturedLines[99].red = 255;
        gTexturedLines[99].green = (editing) ? 128 : 255;
        gTexturedLines[99].blue = 0;
        gTexturedLines[99].alpha = 255;
        gTexturedLines[99].posBB.x = oRamEntries[selectNum].objPtr->pos.x;
        gTexturedLines[99].posBB.y = oRamEntries[selectNum].objPtr->pos.y;
        gTexturedLines[99].posBB.z = oRamEntries[selectNum].objPtr->pos.z;
    }
}

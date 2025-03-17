#include "object_ram.h"
#include "object_ram_info.c"

static RamEntry oRamEntries[7] = {
    ORAM_ENTRY(Actor, 0, state),     ORAM_ENTRY(Actor, 0, obj.pos.x), ORAM_ENTRY(Actor, 0, obj.pos.y),
    ORAM_ENTRY(Actor, 0, obj.pos.z), ORAM_ENTRY(Actor, 0, fwork[2]),  ORAM_ENTRY(Actor, 0, fwork[3]),
};

static s32 holdTimer = 0;
static s32 selectNum = 0;
static bool oRamActive = false;
static RamModMode oRamMode = RAMMOD_OFF;
static s32 editMode = EDM_TYPE;
static s32 editing = false;
static s32 editingValue = false;
static fu dataTemp;
static OSContPad* contPress;
static OSContPad* contHold;
static u8 oramSetup = false;

void ObjectRam_Capitalize(char* string) {
    char c;

    while (*string != '\0') {
        if (*string >= 'a' && *string <= 'z') {
            *string -= 'a' - 'A';
        }
        if (*string == '_') {
            *string = '-';
        }
        string++;
    }
}

void ObjectRam_PrintFieldName(RamEntry* entry) {
    s32 i;
    s32 ind;
    OramFieldInfo* field = &objArrays[entry->type].fields[entry->field];

    if (entry->fieldInfo->type == ORAM_TYPE_Vec3f) {
        if (field->type >= ORAM_TYPE_Object) {
            Graphics_Printf("%s.%s.%c", field->name, entry->fieldInfo->name, 'x' + entry->component);
        } else if (field->count <= 1) {
            Graphics_Printf("%s.%c", field->name, 'x' + entry->component);
        } else {
            Graphics_Printf("%s-%d-.%c", field->name, entry->element, 'x' + entry->component);
        }
    } else if (field->type >= ORAM_TYPE_Object) {
        Graphics_Printf("%s.%s", field->name, entry->fieldInfo->name);
    } else if (field->count == 0) {
        Graphics_Printf("%s", field->name);
    } else {
        Graphics_Printf("%s-%d-", field->name, entry->element);
    }
    ObjectRam_Capitalize(gGfxPrintBuffer);
}

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
    ObjArrayInfo* objInfo = &objArrays[entry->type];

    entry->index = MIN(entry->index, objInfo->count - 1);

    if (contPress->button & U_JPAD) {
        entry->index++;
    } else if (contPress->button & D_JPAD) {
        entry->index--;
    }

    entry->index = WRAP_MODE(entry->index, objInfo->count);
    entry->objPtr = (uintptr_t) objInfo->ptr + entry->index * objInfo->size;
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
    ObjArrayInfo* objInfo = &objArrays[entry->type];

    entry->offset = MIN(entry->offset, objInfo->size - (1 << entry->width));

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
    } else if (entry->offset >= objInfo->size) {
        entry->offset = objInfo->size - (1 << entry->width);
    }
}

s32 ObjectRam_GetSubstructField(RamEntry* entry) {
    OramFieldInfo* subfieldInfo = NULL;
    s32 subfieldCount = 0;

    switch (objArrays[entry->type].fields[entry->field].type) {
        case ORAM_TYPE_Object:
            subfieldInfo = objFields;
            subfieldCount = ARRAY_COUNT(objFields);
            break;
        case ORAM_TYPE_ObjectInfo:
            subfieldInfo = objInfoFields;
            subfieldCount = ARRAY_COUNT(objInfoFields);
            break;
        case ORAM_TYPE_ArwingInfo:
            subfieldInfo = arwingFields;
            subfieldCount = ARRAY_COUNT(arwingFields);
            break;
        case ORAM_TYPE_PlayerSfx:
            subfieldInfo = playerSfxFields;
            subfieldCount = ARRAY_COUNT(playerSfxFields);
            break;
        default:
            return 0;
    }
    entry->element = WRAP_MODE(entry->element, subfieldCount);
    entry->fieldInfo = &subfieldInfo[entry->element];
    return entry->fieldInfo->offset;
}

void ObjectRam_EditField(RamEntry* entry) {
    OramFieldInfo* fieldInfo = &objArrays[entry->type].fields[entry->field];

    if (contHold->button & Z_TRIG) {
        if ((fieldInfo->count > 0) || (fieldInfo->type > ORAM_TYPE_STRUCT)) {
            if (entry->fieldInfo->type == ORAM_TYPE_Vec3f) {
                if (contPress->button & U_JPAD) {
                    entry->component++;
                    if (entry->component >= 3) {
                        entry->component = 0;
                        entry->element++;
                    }
                } else if (contPress->button & D_JPAD) {
                    entry->component--;
                    if (entry->component < 0) {
                        entry->component = 2;
                        entry->element--;
                    }
                }
            } else if (contPress->button & U_JPAD) {
                entry->element++;
            } else if (contPress->button & D_JPAD) {
                entry->element--;
            }
            if (fieldInfo->count > 0) {
                entry->element = WRAP_MODE(entry->element, fieldInfo->count);
            }
        }
    } else if (contPress->button & U_JPAD) {
        entry->field++;
        entry->element = 0;
    } else if (contPress->button & D_JPAD) {
        entry->field--;
        entry->element = 0;
    }
}

void ObjectRam_UpdateFieldInfo(RamEntry* entry) {
    OramFieldInfo* fieldInfo = objArrays[entry->type].fields;
    s32 fieldCount = objArrays[entry->type].fieldCount;
    s32 suboffset = 0;

    if (entry->type == ORAM_NONE) {
        return;
    }

    entry->field = WRAP_MODE(entry->field, fieldCount);
    if (fieldInfo[entry->field].count == 0 && (fieldInfo[entry->field].type < ORAM_TYPE_Object)) {
        entry->element = 0;
        if (fieldInfo[entry->field].type != ORAM_TYPE_Vec3f) {
            entry->component = 0;
        }
    }
    if (fieldInfo[entry->field].type >= ORAM_TYPE_Object) {
        suboffset = ObjectRam_GetSubstructField(entry);
    } else {
        entry->field = WRAP_MODE(entry->field, fieldCount);
        entry->fieldInfo = &fieldInfo[entry->field];
        suboffset = entry->element * entry->fieldInfo->size;
    }
    if (entry->fieldInfo->type == ORAM_TYPE_Vec3f) {
        suboffset += entry->component * sizeof(f32);
    }

    entry->offset = fieldInfo[entry->field].offset + suboffset;
    entry->objPtr = (uintptr_t) objArrays[entry->type].ptr + entry->index * objArrays[entry->type].size;
    entry->dataPtr = (uintptr_t) entry->objPtr + entry->offset;

    switch (entry->fieldInfo->type) {
        case ORAM_TYPE_char:
        case ORAM_TYPE_s8:
        case ORAM_TYPE_u8:
            entry->width = 0;
            break;
        case ORAM_TYPE_s16:
        case ORAM_TYPE_u16:
        case ORAM_TYPE_short:
            entry->width = 1;
            break;
        case ORAM_TYPE_s32:
        case ORAM_TYPE_u32:
        case ORAM_TYPE_f32:
        case ORAM_TYPE_Vec3f:
        case ORAM_TYPE_uintptr_t:
        case ORAM_TYPE_long:
            entry->width = 2;
            break;
    }

    switch (entry->fieldInfo->type) {
        case ORAM_TYPE_char:
        case ORAM_TYPE_short:
        case ORAM_TYPE_long:
        case ORAM_TYPE_uintptr_t:
            entry->fmt = FMT_HEX;
            break;
        case ORAM_TYPE_s8:
        case ORAM_TYPE_s16:
        case ORAM_TYPE_s32:
            entry->fmt = FMT_SIGN;
            break;
        case ORAM_TYPE_u8:
        case ORAM_TYPE_u16:
        case ORAM_TYPE_u32:
            entry->fmt = FMT_UNSIGN;
            break;
        case ORAM_TYPE_f32:
        case ORAM_TYPE_Vec3f:
            entry->fmt = FMT_FLOAT;
            break;
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

void ObjectRam_PrintVec3f(RamEntry* entry) {
    u32 stepback = (entry->element % 3) * sizeof(f32);
    Vec3f* vecData = (Vec3f*) ((uintptr_t) entry->dataPtr - stepback);

    Graphics_Printf("X:%8.1f Y:%8.1f, Z:%8.1f", vecData->x, vecData->y, vecData->z);
}

static const char* objTypes[] = { "--", "PL", "SC", "SC", "SP", "AC", "BS", "IT", "EF", "SH", "TL", "RM", "BT" };
static const char* fmtTypes[] = { "X", "S", "U", "F" };

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
    ObjArrayInfo* objInfo;
    OramFieldInfo* fieldInfo;
    char* nameStr;

    if ((entry->type < ORAM_NONE) || (entry->type >= ORAM_MAX)) {
        return;
    }

    SET_DRAW_COLOR(EDM_TYPE)
    Graphics_DisplaySmallText(x + 10, y, 1.0f, 1.0f, objArrays[entry->type].name);

    if (entry->type == ORAM_NONE) {
        // Graphics_Printf("%X  %X  %X", entry->index);
        // Graphics_DisplaySmallText(x + 50, y, 1.0f, 1.0f, gGfxPrintBuffer);
        return;
    }
    SET_DRAW_COLOR(EDM_MAX)
    Graphics_DisplaySmallText(x + 26, y, 1.0f, 1.0f, "-");

    SET_DRAW_COLOR(EDM_INDEX)
    Graphics_Printf("%02d", entry->index);
    Graphics_DisplaySmallText(x + 32, y, 1.0f, 1.0f, gGfxPrintBuffer);

    SET_DRAW_COLOR(EDM_MAX)
    Graphics_DisplaySmallText(x + 50, y, 1.0f, 1.0f, ".");

    SET_DRAW_COLOR(EDM_OFFSET)
    // Graphics_Printf("%03X", entry->offset);
    // Graphics_DisplaySmallText(x + 56, y, 1.0f, 1.0f, gGfxPrintBuffer);
    ObjectRam_PrintFieldName(entry);
    Graphics_DisplaySmallText(x + 56, y, 1.0f, 1.0f, gGfxPrintBuffer);

    // if(objArrays[entry->type].fields != NULL && (nameStr = ObjectRam_GetFieldName(entry))!= NULL) {
    //     ObjectRam_Capitalize(nameStr);
    //     Graphics_DisplaySmallText(x + 120, y, 1.0f, 1.0f, nameStr);
    // }

    // SET_DRAW_COLOR(EDM_FORMAT)
    // Graphics_DisplaySmallText(x + 90, y, 1.0f, 1.0f, fmtTypes[entry->fmt]);
    // SET_DRAW_COLOR(EDM_WIDTH)
    // Graphics_Printf("%-2d", 1 << (entry->width + 3));
    // Graphics_DisplaySmallText(x + 100, y, 1.0f, 1.0f, gGfxPrintBuffer);

    if ((num != selectNum) || !editingValue) {
        data.i = ObjectRam_GetData(entry);
    } else if (entry->fmt == FMT_FLOAT) {
        data.f = dataTemp.f;
    } else {
        data.i = dataTemp.i;
    }

    // if(entry->fieldInfo->type == ORAM_TYPE_Vec3f) {
    //     ObjectRam_PrintVec3f(entry);
    // } else {
    SET_DRAW_COLOR(EDM_VALUE)
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
            // }
    }
    Graphics_DisplaySmallText(x + 25, y + 12, 1.0f, 1.0f, gGfxPrintBuffer);
}

void ObjectRam_FieldInit(RamEntry* entry) {
    s32 i;
    OramFieldInfo* objectFields = objArrays[entry->type].fields;
    s32 fieldCount = objArrays[entry->type].fieldCount;

    if (entry->type == ORAM_NONE) {
        return;
    }

    for (i = 0; i < fieldCount; i++) {
        if (entry->offset >= objectFields[i].offset &&
            ((i == fieldCount - 1) || (entry->offset < objectFields[i + 1].offset))) {
            entry->field = i;
            entry->fieldInfo = &objectFields[i];
            break;
        }
    }

    if (entry->offset > objectFields[entry->field].offset) {
        s32 suboffset = entry->offset - objectFields[entry->field].offset;
        if (objectFields[entry->field].count > 0) {
            entry->element = suboffset / objectFields[entry->field].size;
            suboffset -= objectFields[entry->field].size * entry->element;
        } else if (objectFields[entry->field].type >= ORAM_TYPE_Object) {
            OramFieldInfo* subfieldInfo = NULL;
            s32 subfieldCount = 0;
            switch (objArrays[entry->type].fields[entry->field].type) {
                case ORAM_TYPE_Object:
                    subfieldInfo = objFields;
                    subfieldCount = ARRAY_COUNT(objFields);
                    break;
                case ORAM_TYPE_ObjectInfo:
                    subfieldInfo = objInfoFields;
                    subfieldCount = ARRAY_COUNT(objInfoFields);
                    break;
                case ORAM_TYPE_ArwingInfo:
                    subfieldInfo = arwingFields;
                    subfieldCount = ARRAY_COUNT(arwingFields);
                    break;
                case ORAM_TYPE_PlayerSfx:
                    subfieldInfo = playerSfxFields;
                    subfieldCount = ARRAY_COUNT(playerSfxFields);
                    break;
            }
            for (i = 0; i < subfieldCount; i++) {
                if (entry->offset >= subfieldInfo[i].offset &&
                    ((i == subfieldCount - 1) || (entry->offset < subfieldInfo[i + 1].offset))) {
                    entry->element = i;
                    break;
                }
            }
            entry->fieldInfo = &subfieldInfo[entry->element];
            suboffset -= subfieldInfo[entry->element].offset;
            if (subfieldInfo[entry->element].type == ORAM_TYPE_Vec3f) {
                entry->component = WRAP_MODE(suboffset / sizeof(f32), 3);
            }
        }
        if (objectFields[entry->field].type == ORAM_TYPE_Vec3f) {
            entry->component = WRAP_MODE(suboffset / sizeof(f32), 3);
        }
    }

    ObjectRam_UpdateFieldInfo(entry);
}

void ObjectRam_Setup(void) {
    s32 i;

    objArrays[ORAM_Player].ptr = gPlayer;
    objArrays[ORAM_Scenery360].ptr = gScenery360;
    objArrays[ORAM_Player].count = gCamCount;

    for (i = 0; i < ARRAY_COUNT(oRamEntries); i++) {
        ObjectRam_FieldInit(&oRamEntries[i]);
    }
    oramSetup = true;
}

void ObjectRam_Update(void) {
    s32 i;

    if (!oramSetup) {
        ObjectRam_Setup();
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
                ObjectRam_EditField(&oRamEntries[selectNum]);
                break;
            // case EDM_FORMAT:
            //     ObjectRam_EditFormat(&oRamEntries[selectNum]);
            //     break;
            // case EDM_WIDTH:
            //     ObjectRam_EditWidth(&oRamEntries[selectNum]);
            //     break;
            case EDM_VALUE:
                ObjectRam_EditValue(&oRamEntries[selectNum]);
                break;
                // case EDM_POS:
                //     ObjectRam_EditPosition(&oRamEntries[selectNum]);
                //     break;
        }
    }
    ObjectRam_UpdateFieldInfo(&oRamEntries[selectNum]);
    RCP_SetupDL(&gMasterDisp, SETUPDL_76);

    for (i = 0; i < ARRAY_COUNT(oRamEntries); i++) {
        ObjectRam_DrawEntry(&oRamEntries[i], i);
    }

    if ((oRamEntries[selectNum].type > ORAM_Player) && (oRamEntries[selectNum].type < ORAM_TexturedLine)) {
        Object* object = (Object*) oRamEntries[selectNum].objPtr;

        gTexturedLines[99].mode = 3;
        gTexturedLines[99].xyScale = 3.0f;
        gTexturedLines[99].posAA.x = gPlayer[0].pos.x;
        gTexturedLines[99].posAA.y = gPlayer[0].pos.y;
        gTexturedLines[99].posAA.z = gPlayer[0].pos.z - 100.0f;
        if (object->status != OBJ_FREE) {
            gTexturedLines[99].timer = 15;
        }
        gTexturedLines[99].prim.r = 255;
        gTexturedLines[99].prim.g = (editing) ? 128 : 255;
        gTexturedLines[99].prim.b = 0;
        gTexturedLines[99].prim.a = 255;
        gTexturedLines[99].posBB.x = object->pos.x;
        gTexturedLines[99].posBB.y = object->pos.y;
        gTexturedLines[99].posBB.z = object->pos.z;

        if (gPlayState == PLAY_PAUSE) {
            TexturedLine_Update(&gTexturedLines[99]);
        }
    }
}

static bool sCheatSetup = false;

static s32 sCheatOptions[] = { 2, 5, 1, 2, 1, 4, 2, 1, 2 };
static s32 sCheatStates[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

static CheatEntry cheats[CHEAT_MAX];

void CheatRam_Select(void) {
    if (contPress->button & (U_JPAD | D_JPAD)) {
        editMode += (contPress->button & D_JPAD) ? 1 : -1;
        editMode = WRAP_MODE(editMode, ARRAY_COUNT(cheats));
        selectNum = cheats[editMode].option;
    } else if (contPress->button & (L_JPAD | R_JPAD)) {
        selectNum += (contPress->button & R_JPAD) ? 1 : -1;
    }
    selectNum = WRAP_MODE(selectNum, cheats[editMode].optionMax + 1);
    cheats[editMode].option = selectNum;
}

void CheatRam_RepairWings(void) {
    if ((gPlayer[0].arwing.rightWingState <= WINGSTATE_BROKEN) ||
        (gPlayer[0].arwing.leftWingState <= WINGSTATE_BROKEN)) {
        Player_RepairWings();
    }
}

void CheatRam_SpawnCheckpoint(void) {
    static ItemCheckpoint* checkpoint = NULL;
    s32 i;

    if ((gLevelMode != LEVELMODE_ON_RAILS) || (gPlayer[0].state != PLAYERSTATE_ACTIVE)) {
        return;
    }

    if ((checkpoint != NULL) && (checkpoint->obj.status != OBJ_FREE)) {
        return;
    }
    for (i = 0; i < ARRAY_COUNT(gItems); i++) {
        if (gItems[i].obj.status == OBJ_FREE) {
            Item_Initialize(&gItems[i]);
            gItems[i].obj.status = OBJ_ACTIVE;
            gItems[i].obj.id = OBJ_ITEM_CHECKPOINT;
            gItems[i].obj.pos.x = gPlayer[0].pos.x + gPlayer[0].vel.x;
            gItems[i].obj.pos.y = gPlayer[0].pos.y + gPlayer[0].vel.y;
            gItems[i].obj.pos.z = gPlayer[0].trueZpos + gPlayer[0].vel.z;
            Object_SetInfo(&gItems[i].info, gItems[i].obj.id);
            break;
        }
    }
    if (i == ARRAY_COUNT(gItems)) {
        checkpoint = NULL;
    }
}

void CheatRam_Setup(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(cheats); i++) {
        CheatEntry* cheat = &cheats[i];

        cheat->mode = i;
        switch (cheat->mode) {
            case CHEAT_SHIELDS:
                cheat->option = cheat->optionMax = 100;
                SET_CHEAT_RAM(&cheat->ram[0], &gPlayer[0].shields, Play_GetMaxShields())
                break;
            case CHEAT_LASERS:
                cheat->option = LASERS_HYPER;
                cheat->optionMax = LASERS_MAX - 1;
                SET_CHEAT_RAM(&cheat->ram[0], &gLaserStrength[0], cheat->option)
                cheat->ram[1].func = CheatRam_RepairWings;
                break;
            case CHEAT_BOMBS:
                cheat->option = cheat->optionMax = 9;
                SET_CHEAT_RAM(&cheat->ram[0], &gBombCount[0], cheat->option)
                break;
            case CHEAT_BOOST:
                SET_CHEAT_RAM(&cheat->ram[0], &gPlayer[0].boostMeter, 0)
                SET_CHEAT_RAM(&cheat->ram[1], &gPlayer[0].boostCooldown, false)
                cheat->action = 1;
                break;
            case CHEAT_LIVES:
                cheat->option = cheat->optionMax = 99;
                SET_CHEAT_RAM(&cheat->ram[0], &gLifeCount[0], cheat->option)
                break;
            case CHEAT_TEAMMATES:
                cheat->option = 0;
                cheat->optionMax = 7;
                SET_CHEAT_RAM(&cheat->ram[0], &gTeamShields[TEAM_ID_FALCO], 255)
                SET_CHEAT_RAM(&cheat->ram[1], &gTeamShields[TEAM_ID_SLIPPY], 255)
                SET_CHEAT_RAM(&cheat->ram[2], &gTeamShields[TEAM_ID_PEPPY], 255)
                break;
            case CHEAT_SPEED:
                cheat->option = 60;
                cheat->optionMax = 100;
                cheat->action = 1;
                SET_CHEAT_RAM(&cheat->ram[0], &gPlayer[0].baseSpeed, cheat->option)
                break;
            case CHEAT_HITS:
                cheat->option = 500;
                cheat->optionMax = 999;
                SET_CHEAT_RAM(&cheat->ram[0], &gHitCount, cheat->option);
                break;
            case CHEAT_CHECKPOINT:
                cheat->action = -1;
                cheat->ram[0].func = CheatRam_SpawnCheckpoint;
                break;
            case CHEAT_COMPLETE:
                cheat->option = MISSION_COMPLETE;
                cheat->optionMax = MISSION_WARP;
                cheat->action = 1;
                // if ((gCurrentLevel == LEVEL_METEO) || (gCurrentLevel == LEVEL_SECTOR_X)) {}
                SET_CHEAT_RAM(&cheat->ram[0], &gMissionStatus, cheat->option)
                break;
        }
    }
}

void CheatRam_SetValues(CheatRamEntry* cheat) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (cheat[i].addr != NULL) {
            switch (cheat[i].size) {
                case 0:
                    cheat[i].func();
                    break;
                case 1:
                    *((u8*) cheat[i].addr) = cheat[i].data.i;
                    break;
                case 2:
                    *((u16*) cheat[i].addr) = cheat[i].data.i;
                    break;
                case 3:
                    break;
                case 4:
                    *cheat[i].addr = cheat[i].data;
                    break;
            }
        }
    }
}

void CheatRam_UpdateEntry(CheatEntry* cheat) {
    s32 teamnum;
    s32 i;
    s32 press = false;
    s32 doublepress = false;

    if (holdTimer == 0) {
        holdTimer = 10;
        press = true;
    } else if (holdTimer != 0) {
        doublepress = true;
    }
    if (cheat->action == 0) {
        cheat->hold ^= doublepress;
    } else if (cheat->action == 1) {
        cheat->hold ^= press;
    }

    switch (editMode) {
        case CHEAT_SHIELDS:
            cheat->ram[0].data.i = (cheat->option / 100.0f) * Play_GetMaxShields();
            break;
        case CHEAT_BOOST:
            break;
        case CHEAT_SPEED:
            cheat->ram[0].data.f = cheat->hold ? cheat->option : 40.0f;
            break;
        case CHEAT_TEAMMATES:
            teamnum = (cheat->option % 4) - 1;
            for (i = 0; i < 3; i++) {
                cheat->ram[i].data.i = (cheat->option > 3) ? -1 : 255;
                cheat->ram[i].size = (teamnum == -1) ? 4 : 3;
            }
            if (teamnum != -1) {
                cheat->ram[teamnum].size = 4;
            }
            break;
        case CHEAT_COMPLETE:
            if ((gCurrentLevel == LEVEL_CORNERIA) && (gPlayer[0].state != PLAYERSTATE_LEVEL_COMPLETE)) {
                if ((gLevelMode == LEVELMODE_ON_RAILS) && (cheat->option == MISSION_COMPLETE)) {
                    gScenery360 = Memory_Allocate(200 * sizeof(Scenery360));
                    gLevelMode = LEVELMODE_ALL_RANGE;
                } else if ((gLevelMode == LEVELMODE_ALL_RANGE) && (cheat->option == MISSION_ACCOMPLISHED)) {
                    gLevelMode = LEVELMODE_ON_RAILS;
                }
            }
            gPlayer[0].state = PLAYERSTATE_LEVEL_COMPLETE;
        default:
            cheat->ram[0].data.i = cheat->option;
            break;
    }

    CheatRam_SetValues(cheat->ram);
}

static const char* cheatNames[] = { "SHIELDS", "LASERS", "BOMBS", "BOOST",      "LIVES",
                                    "TEAM",    "SPEED",  "HITS",  "CHECKPOINT", "MISSION" };
static const char* laserNames[] = { "SINGLE", "TWIN", "HYPER", "UNUSED" };
static const char* teamNames[] = { "ALL", "FALCO", "SLIPPY", "PEPPY" };
static const char* statusNames[] = { "COMPLETE", "ACCOMPLISHED", "WARP" };

void CheatRam_DrawEntry(CheatMode mode, s32 x, s32 y, s32 option) {
    switch (mode) {
        case CHEAT_SHIELDS:
        case CHEAT_HITS:
            Graphics_Printf("%s: %3d", cheatNames[mode], option);
            break;
        case CHEAT_LASERS:
            Graphics_Printf("%s: %s", cheatNames[mode], laserNames[option]);
            break;
        case CHEAT_COMPLETE:
            Graphics_Printf("%s: %s", cheatNames[mode], statusNames[option]);
            break;
        case CHEAT_LIVES:
        case CHEAT_BOMBS:
        case CHEAT_SPEED:
            Graphics_Printf("%s: %d", cheatNames[mode], option);
            break;
        case CHEAT_CHECKPOINT:
        case CHEAT_BOOST:
            Graphics_Printf("%s", cheatNames[mode]);
            break;
        case CHEAT_TEAMMATES:
            Graphics_Printf("%s: %s %s", cheatNames[mode], (option > 3) ? "DOWN" : "HEAL", teamNames[option % 4]);
            break;
    }
    Graphics_DisplaySmallText(x, y, 1.0f, 1.0f, gGfxPrintBuffer);
}

s32 medalCount[] = { 150, 200, 150, 300, 0, 200, 100, 250, 200, 0, 150, 100, 150, 50, 0, 150, 150, 100, 200 };

void CheatRam_Update(void) {
    s32 i;
    s32 x = 10;
    s32 y = 50;

    if (!sCheatSetup) {
        CheatRam_Setup();
        selectNum = cheats[editMode].option;
        sCheatSetup = true;
    }
    CheatRam_Select();
    if (holdTimer != 0) {
        holdTimer--;
    }
    if (contPress->button & L_TRIG) {
        CheatRam_UpdateEntry(&cheats[editMode]);
    }
    for (i = 0; i < ARRAY_COUNT(cheats); i++) {
        if ((cheats[i].action != -1) && (cheats[i].hold || ((i == editMode) && (holdTimer != 0)))) {
            CheatRam_SetValues(cheats[i].ram);
        }
    }
    RCP_SetupDL(&gMasterDisp, SETUPDL_76);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    Graphics_DisplaySmallText(x, y, 1.0f, 1.0f, "CHEATS");
    y += 14;
    for (i = 0; i < ARRAY_COUNT(cheats); i++) {
        if (cheats[i].hold) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
        } else if (i == editMode) {
            if (holdTimer == 0) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 170, 0, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 85, 0, 255);
            }
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
        }

        CheatRam_DrawEntry(cheats[i].mode, x, y + 11 * i, cheats[i].option);
    }
}

void RamMod_Update(void) {
    static s32 toggle;
    static s32 toggle2;
    contPress = &gControllerPress[gMainController];
    contHold = &gControllerHold[gMainController];

    if ((gGameState != GSTATE_PLAY) || (gPlayState <= PLAY_INIT)) {
        return;
    }

    if ((contPress->button & START_BUTTON) && (gPlayer[0].state == PLAYERSTATE_LEVEL_COMPLETE)) {
        gPlayer[0].state = PLAYERSTATE_NEXT;
        Audio_FadeOutAll(10);
        gFadeoutType = 4;
        gLeveLClearStatus[gCurrentLevel] = Play_CheckMedalStatus(medalCount[gCurrentLevel]) + 1;
        cheats[CHEAT_COMPLETE].hold = false;
    }

    // if (!(~contHold->button & (R_CBUTTONS | Z_TRIG | R_TRIG))) {
    //     if(!toggle) {
    //         oRamActive ^= 1;
    //         toggle = true;
    //     }
    // } else {
    //     toggle = false;
    // }

    // if(!oRamActive) {
    //     return;
    // }

    if (!(~contHold->button & (Z_TRIG | R_TRIG)) && (contPress->button & R_CBUTTONS)) {
        oRamMode++;
        oRamMode = WRAP_MODE(oRamMode, RAMMOD_MAX);
    }

    switch (oRamMode) {
        case RAMMOD_OFF:
            break;
        case RAMMOD_CHEAT:
            CheatRam_Update();
            break;
        case RAMMOD_OBJECT:
            ObjectRam_Update();
            break;
    }
}

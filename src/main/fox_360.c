#include "global.h"

typedef struct {
    s32 unk_00;
    char unk_04[0x2F0];
} UnkStruct_1515F0; // size = 0x2F4
                    // placeholder for audio struct. struct size being equal to Object_2F4 probably coincidental
extern UnkStruct_1515F0 D_801515F0[];

/* static */ Vec3f D_800C9A90 = { 0.0f, -10.0f, 0.0f };
/* static */ Vec3f D_800C9A9C[4] = {
    { 0.0f, 20000.0f, 0.0f },
    { 0.0f, 700.0f, 6500.0f },
    { -300.0f, 800.0f, 6800.0f },
    { 300.0f, 900.0f, 7200.0f },
};
/* static */ s32 D_800C9ACC[4] = { 0, 1, 2, 3 };
/* static */ s32 D_800C9ADC[4] = { -1, 10, 11, 12 };
/* static */ s32 D_800C9AEC[4] = { -1, 21, 23, 25 };
/* static */ Vec3f D_800C9AFC[4] = {
    { 9500.0f, 5000.0f, 9500.0f },
    { 10000.0f, 5000.0f, 10000.0f },
    { 10000.0f, 5000.0f, 9500.0f },
    { 9500.0f, 5000.0f, 10000.0f },
};
/* static */ s32 D_800C9B2C[4] = { 0, 1, 3, 2 };
/* static */ f32 D_800C9B3C[4] = { 330.0f, 90.0f, 280.0f, 70.0f };
s32 D_800C9B4C = 96 * 30;
/* static */ Vec3f D_800C9B50[6] = {
    { 8000.0f, 500.0f, 0.0f }, { 5000.0f, 400.0f, 0.0f }, { 2000.0f, 300.0f, 0.0f },
    { -500.0f, 250.0f, 0.0f }, { 0.0f, 250.0f, 0.0f },    { 0.0f, 250.0f, 0.0f },
};
/* static */ Vec3f D_800C9B98 = { 60.0f, 0.0f, -170.0f };
/* static */ Vec3f D_800C9BA4 = { -60.0f, 0.0f, -170.0f };
/* static */ Vec3f D_800C9BB0 = { 0.0f, 0.0f, 0.0f };

s32 D_8015F900;
s32 D_8015F904;
s16 D_8015F908;
s32 D_8015F90C;
s32 D_8015F910;
f32 D_8015F914;
f32 D_8015F918;
f32 D_8015F91C;
u8 D_8015F920;
u8 D_8015F921;
s32 D_8015F924;
s32 D_8015F928;
s32 D_8015F930[3];
s32 D_8015F93C;
s32 D_8015F940;
f32 D_8015F944;

void func_8002E3E0(Object_2F4* obj2F4) {
    s32 hits = 0;

    (void) "time=%d\n";
    (void) "time=%d\n";
    (void) "time=%d\n";
    (void) "time=%d\n";
    (void) "time=%d\n";
    if (gCurrentLevel == LEVEL_VENOM_2) {
        if (D_8015F940 < 128 * 30) {
            hits = 50;
        } else if (D_8015F940 < 192 * 30) {
            hits = 30;
        } else if (D_8015F940 < 256 * 30) {
            hits = 20;
        } else if (D_8015F940 < 320 * 30) {
            hits = 10;
        }
    } else {
        if (D_8015F940 < 128 * 30) {
            hits = 10;
        } else if (D_8015F940 < 192 * 30) {
            hits = 5;
        } else if (D_8015F940 < 256 * 30) {
            hits = 2;
        } else if (D_8015F940 < 320 * 30) {
            hits = 1;
        }
    }
    if (hits != 0) {
        func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, hits);
    }
    gHitCount += hits;
    D_80177850 = 15;
}

bool func_8002E4F8(u16* arg0, s32 arg1) {
    if ((gRadioState == 0) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0)) {
        func_800BA808(arg0, arg1);
        return true;
    } else {
        return false;
    }
}

void func_8002E548(void) {
    if (D_8015F93C != 0) {
        s32 sp24 = D_8015F930[1];

        func_8008E51C(D_8015F930, D_8015F944);
        if ((D_8015F930[0] == 0) && (sp24 != D_8015F930[1]) && (D_8015F930[1] < 15)) {
            Audio_PlaySfx(0x4900C02A, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_8002E5E0(Object_408* obj408) {
    func_E51970_80187520(91, obj408);
}

void func_8002E604(Object_408* obj408) {
    func_E51970_80187520(92, obj408);
}

void func_8002E628(Object_408* obj408) {
    func_E51970_80187520(93, obj408);
}

void func_8002E64C(Object_408* obj408) {
    func_E51970_80187520(94, obj408);
}

void func_8002E670(Object_2F4* obj2F4) {
    func_E51970_80187520(95, obj2F4);
}

void func_8002E694(Object_2F4* obj2F4) {
    func_E51970_80187520(96, obj2F4);
}

void func_8002E6B8(Object_2F4* obj2F4) {
    func_E51970_80187520(97, obj2F4);
}

void func_8002E6DC(Object_2F4* obj2F4) {
    func_E51970_80187520(98, obj2F4);
}

void func_8002E700(Player* player) {
    Vec3f sp6C;
    Vec3f sp60;

    D_80177A80++;
    switch (player->unk_1D0) {
        case 0:
            player->unk_1F4 = player->timer_498 = player->damage = player->unk_280 = player->unk_2BC = player->unk_2B4 =
                player->unk_4DC = D_80177A80 = 0;
            player->unk_130 = player->unk_034 = player->unk_110 = player->unk_08C = player->unk_0D8.x =
                player->unk_0D8.y = player->unk_0D8.z = player->unk_134 = player->unk_4D8 = 0.0f;
            D_80177978 = 1673.0f;
            D_80177980 = 337.0f;
            if (player->pos.z < 0.0f) {
                D_80177988 = -480.0f;
            } else {
                D_80177988 = 480.0f;
            }
            player->unk_0E8 = 0.0f;
            player->pos.x = 2100.0f;
            player->unk_0D0 = 30.0f;
            player->unk_0E4 = -8.0f;
            player->unk_114 = 90.0f;
            D_801779A0 = 2100.0f;
            player->pos.y = 450.0f;
            D_801779B8 = 450.0f;
            player->pos.z = 0.0f;
            D_801779C0 = 0.0f;
            D_80177A48[0] = 1.0f;
            player->wings.unk_2C = 1;
            player->unk_1D0++;
            break;
        case 1:
            if (D_80177A80 >= 47) {
                D_80178358 = 255;
                D_8017835C = 32;
                D_80178348 = D_80178350 = D_80178354 = 0;
            }
            if (D_80177A80 >= 64) {
                player->unk_1D0++;
                player->unk_0D0 = 0.0f;
            }
            break;
        case 2:
            if (D_80178340 == 255) {
                D_80178358 = 0;
                player->pos.x = 400.0f;
                player->pos.y = -420.0f;
                player->pos.z = 0.0f;
                player->unk_0EC = 0.0f;
                D_80177978 = -683.0f;
                D_80177980 = -346.0f;
                D_80177988 = 305.0f;
                player->shields = Play_GetMaxShields();
                player->wings.rightState = WINGSTATE_INTACT;
                player->wings.leftState = WINGSTATE_INTACT;
                if (gExpertMode) {
                    gRightWingHealth[0] = gLeftWingHealth[0] = 10;
                } else {
                    gRightWingHealth[0] = gLeftWingHealth[0] = 60;
                }
                Audio_PlaySfx(0x4900200E, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                player->unk_1D0++;
            }
            break;
        case 3:
            D_8017835C = 32;
            D_80177988 -= 1.0f;
            if (D_80178340 == 0) {
                player->unk_190 = player->unk_194 = 5.0f;
                player->unk_114 = 90.0f;
                player->unk_0D0 = D_80161A54;
                player->unk_1D0++;

                Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 4:
            D_80177988 -= 1.0f;
            D_80177978 -= 1.0f;
            player->unk_0E4 += 0.4f;
            if (D_80177A80 >= 130) {
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->wings.unk_2C = 0;
                player->unk_014 = 0;
                player->unk_018 = 0;
                player->unk_01C = 0;
                gObjects2F4->unk_0B8 = 2;
            }
            break;
    }
    D_801779A0 = player->pos.x;
    D_801779B8 = player->pos.y;
    D_801779C0 = player->pos.z;
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 2.0f, 0);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 3.0f, 0);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
    sp6C.x = 0.0f;
    sp6C.y = 0.0f;
    sp6C.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp6C, &sp60);
    player->vel.x = sp60.x;
    player->vel.z = sp60.z;
    player->vel.y = sp60.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
}

void func_8002ED60(Player* player) {
    Vec3f sp24;

    Math_Vec3fFromAngles(&sp24, 0.0f, player->unk_114 + 180.0f, 40.0f);
    player->vel.x = sp24.x;
    player->vel.z = sp24.z;
    player->vel.y = sp24.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->camEye.x = -200.0f;
    player->camEye.y = 500.0f;
    player->camEye.z = 7000.0f;
    player->camAt.x = player->pos.x;
    player->camAt.y = player->pos.y;
    player->camAt.z = player->pos.z;
}

void func_8002EE34(void) {
    D_8015F904 = gRadioState = gObjects2F4[1].unk_054 = gObjects2F4[2].unk_054 = gObjects2F4[3].unk_054 = 0;
}

void func_8002EE64(Object_2F4* obj2F4) {
    s32 i;
    s32 colId;
    Object_58* obj58;
    Vec3f temp1;
    f32 temp4;
    f32 temp5;
    Vec3f spE4;
    Vec3f spD8;
    Vec3f spCC;
    Vec3f spC0;
    Vec3f spB4;
    Vec3f spA8;
    f32 spA0[2];
    Vec3f sp94 = D_800C9A90;
    s32 pad1;
    s32 pad2;

    obj2F4->unk_178 = obj2F4->unk_17C = obj2F4->unk_184 = obj2F4->unk_180 = 0.0f;
    if ((obj2F4->unk_0C9 != 0) && (gLevelMode == LEVELMODE_ALL_RANGE) && (gLevelType == LEVELTYPE_PLANET)) {
        for (i = 0, obj58 = gObjects58; i < 200; i++, obj58++) {
            if ((obj58->obj.status == 2) &&
                ((obj58->obj.id == OBJ_80_150) || (obj58->obj.id == OBJ_80_149) || (obj58->obj.id == OBJ_80_148) ||
                 (obj58->obj.id == OBJ_80_1) || (obj58->obj.id == OBJ_80_3)) &&
                (fabsf(obj58->obj.pos.x - obj2F4->obj.pos.x) < 2500.0f) &&
                (fabsf(obj58->obj.pos.z - obj2F4->obj.pos.z) < 2500.0f)) {
                temp1.x = obj58->obj.pos.x;
                temp1.y = obj58->obj.pos.y;
                temp1.z = obj58->obj.pos.z;
                temp4 = obj58->obj.rot.y;

                Matrix_RotateY(gCalcMatrix, -temp4 * M_DTOR, 0);
                spE4.x = obj2F4->obj.pos.x - temp1.x;
                spE4.y = 0.0f;
                spE4.z = obj2F4->obj.pos.z - temp1.z;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spE4, &spD8);
                spC0.x = temp1.x;
                spC0.y = temp1.y;

                spCC.x = spD8.x + temp1.x;
                spC0.z = temp1.z; // fake?
                spCC.y = spD8.y + temp1.y;
                spCC.z = spD8.z + temp1.z;
                if ((obj58->obj.id == OBJ_80_149) || (obj58->obj.id == OBJ_80_150)) {
                    if (obj58->obj.id == OBJ_80_149) {
                        colId = COL1_5;
                    } else {
                        colId = COL1_6;
                    }
                    if (func_800998FC(&spCC, &spC0, &sp94, colId, &spA8, spA0) > 0) {
                        obj2F4->unk_178 = spA8.y;
                        obj2F4->unk_17C = spA0[0];
                        obj2F4->unk_184 = spA0[1];
                        obj2F4->unk_180 = (temp4 / 180.0f) * M_PI;
                    }
                } else {
                    colId = COL2_0;
                    if (obj58->obj.id == OBJ_80_3) {
                        colId = COL2_3;
                    }
                    if (func_800A3690(&spCC, &spC0, colId, &spB4)) {
                        obj2F4->unk_178 = spB4.y;
                        obj2F4->unk_17C = spB4.x;
                        obj2F4->unk_184 = spB4.z;
                        obj2F4->unk_180 = (temp4 / 180.0f) * M_PI;
                    }
                }
            }
        }
    }
}

void func_8002F180(void) {
    Object_2F4* obj2F4;
    s32 i;
    s32 temp = 4;

    for (i = 0, obj2F4 = gObjects2F4; i < temp; i++, obj2F4++) {
        if ((i > 0) && (gTeamShields[i] <= 0)) {
            continue;
        }
        Object_2F4_Initialize(obj2F4);
        obj2F4->obj.status = 2;
        obj2F4->obj.id = OBJ_2F4_197;
        Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
        if (i == 0) {
            obj2F4->unk_0E4 = 1000;
        } else {
            obj2F4->obj.pos.x = D_800C9A9C[i].x;
            obj2F4->obj.pos.y = D_800C9A9C[i].y;
            obj2F4->obj.pos.z = D_800C9A9C[i].z;
            obj2F4->unk_0E4 = D_800C9ACC[i];
            if (gCurrentLevel == LEVEL_KATINA) {
                obj2F4->unk_0E6 = D_800C9AEC[i];
            } else {
                obj2F4->unk_0E6 = D_800C9ADC[i];
            }
            obj2F4->unk_0B8 = 2;
            obj2F4->unk_0F4.y = 180.0f;
            if (obj2F4->unk_0E6 < 0) {
                obj2F4->unk_0B8 = 3;
            }
            obj2F4->unk_0CE = 50;
            if ((gLevelType == LEVELTYPE_PLANET) || (gCurrentLevel == LEVEL_BOLSE)) {
                obj2F4->unk_0C9 = 1;
            }
            obj2F4->unk_07C = 1;
            if (obj2F4->unk_0E4 < 4) {
                Audio_PlaySfx(0x3100000C, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                obj2F4->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800CC01C);
                obj2F4->info.unk_1C = 0.0f;
                obj2F4->info.bonus = 0;
            } else {
                Audio_PlaySfx(0x31000011, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
    }
}

void func_8002F3E0(void) {
    Object_2F4* obj2F4;
    s32 i;

    for (i = 0, obj2F4 = &gObjects2F4[4]; i < 4; i++, obj2F4++) {
        if (D_80177CD0[i] != 0) {
            Object_2F4_Initialize(obj2F4);
            obj2F4->obj.status = 2;
            obj2F4->obj.pos.x = D_800C9AFC[i].x;
            obj2F4->obj.pos.y = D_800C9AFC[i].y;
            obj2F4->obj.pos.z = D_800C9AFC[i].z;
            obj2F4->obj.id = OBJ_2F4_197;
            obj2F4->unk_0E4 = i + 4;
            obj2F4->unk_0E6 = D_800C9B2C[i];
            gObjects2F4[obj2F4->unk_0E6].unk_0E6 = -1;
            obj2F4->unk_0CE = 100;
            obj2F4->unk_0C9 = 1;
            obj2F4->unk_0F4.y = 225.0f;
            obj2F4->unk_0B8 = 0;
            obj2F4->timer_0BC = 250;
            obj2F4->unk_0F4.x = -20.0f;
            obj2F4->unk_07C = 1;
            if (gCurrentLevel == LEVEL_VENOM_2) {
                obj2F4->obj.rot.z = D_800C9B3C[i];
                obj2F4->unk_044 = 25;
            }
            Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
            if (gCurrentLevel == LEVEL_VENOM_2) {
                Audio_PlaySfx(0x31004006, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x31004005, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
    }
}

void func_8002F5F4(u16* msg, s32 character) {
    if ((D_80178300 == 0) && (gObjects2F4[0].unk_0B8 == 2) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0)) {
        func_800BA808(msg, character);
    }
}

void func_8002F64C(u16* msg, s32 character) {
    if ((D_80177CD0[0] + D_80177CD0[1] + D_80177CD0[2] + D_80177CD0[3]) == 0) {
        gRadioState = 0;
    }
    func_8002F5F4(msg, character);
}

void func_8002F69C(Object_2F4* obj2F4) {
    Object_2F4* var_s0;
    s32 i;

    if (D_8015F904 != 0) {
        D_8015F904--;
        if ((D_8015F904 == 0) && (gCurrentLevel != LEVEL_BOLSE) &&
            ((D_80177CD0[0] + D_80177CD0[1] + D_80177CD0[2] + D_80177CD0[3]) == 1)) {
            func_800BA808(gMsg_ID_19465, RCID_FOX);
        }
    }
    if (((D_8015F928 + 100) == (0, D_800C9B4C)) && (gCurrentLevel != LEVEL_VENOM_2)) {
        // fake?
        func_800182F4(0x101E00FF);
        func_800182F4(0x111E00FF);
    }
    if (D_8015F928 == D_800C9B4C) {
        func_8002F3E0();
        obj2F4->unk_0B8 = 3;
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
        if ((gCurrentLevel == LEVEL_VENOM_2) || (gCurrentLevel == LEVEL_BOLSE)) {
            gPlayer[0].unk_034 = 20.0f;
        }
        func_8001D444(0, 0x802B, 0, 0xFF);
        func_8002EE34();
        if ((gCurrentLevel == LEVEL_FORTUNA) || (gCurrentLevel == LEVEL_VENOM_2)) {
            gPlayer[0].camEye.x = 4500.0f;
        } else if (gCurrentLevel == LEVEL_BOLSE) {
            gPlayer[0].camEye.x = 5500.0f;
        }
        gPlayer[0].camEye.y = 2500.0f;
        gPlayer[0].camEye.z = 5000.0f;
        gPlayer[0].camAt.x = gObjects2F4[4].obj.pos.x;
        gPlayer[0].camAt.y = gObjects2F4[4].obj.pos.y;
        gPlayer[0].camAt.z = gObjects2F4[4].obj.pos.z;
    }
    if (D_8015F928 > D_800C9B4C) {
        if (D_8015F908 == 0) {
            D_8015F940++;
            for (i = 1, var_s0 = &gObjects2F4[1]; i < 8; i++, var_s0++) {
                if ((var_s0->obj.status == 2) && (var_s0->unk_0B8 == 2) && (var_s0->unk_0CE < 70) &&
                    (var_s0->timer_0C6 != 0) && (var_s0->unk_0D4 == 1)) {
                    if ((gObjects2F4[var_s0->unk_0E6].unk_0B8 == 3) && (gObjects2F4[var_s0->unk_0E6].unk_0E4 < 8)) {
                        gObjects2F4[var_s0->unk_0E6].unk_058 = 0;
                        gObjects2F4[var_s0->unk_0E6].unk_0B8 = 2;
                        gObjects2F4[var_s0->unk_0E6].unk_0E6 = var_s0->unk_0E4;
                        if (D_800CA234 == &gObjects2F4[var_s0->unk_0E6]) {
                            D_800CA234 = NULL;
                            D_Timer_800CA238 = 0;
                        }
                        if (gObjects2F4[var_s0->unk_0E6].unk_05C == 0) {
                            switch (gObjects2F4[var_s0->unk_0E6].unk_0E4) {
                                case 1:
                                    func_8002F5F4(gMsg_ID_9160, RCID_FALCO);
                                    break;
                                case 2:
                                    func_8002F5F4(gMsg_ID_9170, RCID_SLIPPY);
                                    break;
                                case 3:
                                    func_8002F5F4(gMsg_ID_9180, RCID_PEPPY);
                                    break;
                            }
                            gObjects2F4[var_s0->unk_0E6].unk_05C = 200;
                        }
                    }
                    if (var_s0->unk_0E4 == 4) {
                        if (gCurrentLevel != LEVEL_VENOM_2) {
                            var_s0->unk_0B8 = 3;
                            var_s0->unk_04E = 300;
                        }
                    } else {
                        var_s0->unk_0B8 = 3;
                        var_s0->unk_0E6 = -1;
                    }
                }
            }
            if (gTeamShields[1] <= 0) {
                gObjects2F4[5].unk_0E6 = 0;
            }
            if (gTeamShields[2] <= 0) {
                gObjects2F4[7].unk_0E6 = 0;
            }
            if (gTeamShields[3] <= 0) {
                gObjects2F4[6].unk_0E6 = 0;
            }
        }
    }
}

void func_8002FB4C(Object_2F4* obj2F4) {
    Object_2F4* var_a2;
    Object_2F4* var_v1;
    s32 var_a0;
    s32 j;
    s32 i;

    for (i = 10, var_v1 = &gObjects2F4[10]; i < 60; i++, var_v1++) {
        if ((var_v1->obj.status == 2) && (var_v1->obj.id == OBJ_2F4_197) && (var_v1->unk_0B6 == 0) &&
            (var_v1->unk_0E6 < 0)) {
            var_a0 = false;
            for (j = 1, var_a2 = &gObjects2F4[1]; j < 4; j++, var_a2++) {
                if ((j != obj2F4->index) && (i == var_a2->unk_0E6)) {
                    var_a0 = true;
                }
            }
            if (!var_a0) {
                obj2F4->unk_0E6 = i;
                obj2F4->unk_0B8 = 2;
                obj2F4->unk_058 = 0;
                break;
            }
        }
    }
}

void func_8002FC00(Object_2F4* obj2F4) {
    Object_2F4* var_s1;
    s32 var_s5;

    for (var_s5 = 0, var_s1 = &gObjects2F4[10]; var_s5 < 50; var_s5++, var_s1++) {
        if ((var_s1->obj.status == 3) && (var_s1->unk_0E6 > 0) && (var_s1->unk_0E6 < 4)) {
            Object_2F4* var_v0;
            s32 var_v1;

            for (var_v1 = 0, var_v0 = &gObjects2F4[10]; var_v1 < 51; var_v1++, var_v0++) {
                if ((var_v0->obj.status == 2) && (var_v0->unk_0B8 == 2) && (var_v0->unk_0E6 == var_s1->unk_0E6)) {
                    return;
                }
            }
            if (gTeamShields[var_s1->unk_0E6] > 0) {
                func_8002FB4C(&gObjects2F4[var_s1->unk_0E6]);
                if ((var_s1->unk_064 != 0) && (var_s1->unk_0D4 == 1) && (gObjects2F4[var_s1->unk_0E6].unk_05C == 0)) {
                    if (D_800CA234 == &gObjects2F4[var_s1->unk_0E6]) {
                        D_800CA234 = NULL;
                        D_Timer_800CA238 = 0;
                    }
                    switch (gObjects2F4[var_s1->unk_0E6].unk_0E4) {
                        case 1:
                            func_8002F5F4(gMsg_ID_9160, RCID_FALCO);
                            break;
                        case 2:
                            func_8002F5F4(gMsg_ID_9170, RCID_SLIPPY);
                            break;
                        case 3:
                            func_8002F5F4(gMsg_ID_9180, RCID_PEPPY);
                            break;
                    }
                    gObjects2F4[var_s1->unk_0E6].unk_05C = 200;
                    gObjects2F4[var_s1->unk_0E6].timer_0C4 = 600;
                }
            }
        }
    }
}

bool func_8002FE74(void) {
    switch (gCurrentLevel) {
        case LEVEL_FORTUNA:
            return D_8015F928 == D_800C9B4C + 2400;
        case LEVEL_BOLSE:
            return gObjects408[2].unk_0D0 == 4;
        case LEVEL_KATINA:
            return gObjects408[1].unk_0A6 == 2;
    }
    return false;
}

void func_8002FEF0(Object_2F4* arg0) {
    Object_2F4* var_s0;
    s32 i;

    if ((D_80161690 != 0) && (gControllerPress[gMainController].button & R_CBUTTONS)) {
        func_8001AF40(0);
        D_800CFF90 = 0;
        D_80161690 = 0;
        func_800BA808(gMsg_ID_20230, RCID_ROB64);
        D_8015F900 = 160;
    }
    if (D_8015F900 != 0) {
        D_8015F900--;
        if (D_8015F900 == 0) {
            for (i = 20, var_s0 = &gObjects2F4[20]; i < 60; i++, var_s0++) {
                if (var_s0->obj.status == 0) {
                    Object_2F4_Initialize(var_s0);
                    var_s0->obj.status = 1;
                    var_s0->obj.id = OBJ_2F4_291;
                    if (gCurrentLevel == LEVEL_SECTOR_Z) {
                        var_s0->obj.pos.x = 200.0f;
                        var_s0->obj.pos.y = -500.0f;
                        var_s0->obj.pos.z = 0.0f;
                        Audio_PlaySfx(0x09000002, &var_s0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        var_s0->timer_0C2 = 50;
                    } else {
                        var_s0->obj.pos.x = 0.0f;
                        var_s0->obj.pos.y = 3000.0f;
                        var_s0->obj.pos.z = 5000.0f;
                        var_s0->timer_0C2 = 50;
                    }
                    Object_SetInfo(&var_s0->info, var_s0->obj.id);
                    break;
                }
            }
        }
    }
    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (D_8015F910 == 0)) {
        if (D_8015F90C != 0) {
            D_8015F90C--;
        }
        if ((gPlayer[0].shields < 64) || func_8002FE74() || (D_8015F90C == 1)) {
            D_80161690 = 60;
            D_8015F910 = 1;
        }
    }
}

void func_8003010C(Object_2F4* obj2F4) {
    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_4) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_6)) {
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        return;
    }
    D_8015F928++;
    switch (gCurrentLevel) {
        case LEVEL_FORTUNA:
            func_E51970_80187960(obj2F4);
            break;
        case LEVEL_KATINA:
            func_E51970_80198594(obj2F4);
            break;
        case LEVEL_BOLSE:
            func_E51970_8018C158(obj2F4);
            break;
        case LEVEL_SECTOR_Z:
            func_E51970_8019AB8C(obj2F4);
            break;
        case LEVEL_VENOM_2:
            func_E9F1D0_80196314(obj2F4);
            break;
    }
    func_8002FEF0(obj2F4);
}

s32 func_800301F4(Object_2F4* obj2F4) {
    Object_408* obj408;
    f32 temp_ft4;
    f32 temp_ft5;
    s32 i;
    f32 sp1C;
    f32 sp18;

    if (gLevelMode == LEVELMODE_ON_RAILS) {
        return 0;
    }
    sp1C = __sinf(obj2F4->obj.rot.y * M_DTOR);
    sp18 = __cosf(obj2F4->obj.rot.y * M_DTOR);
    temp_ft4 = obj2F4->unk_138 * 10.0f + (sp1C * 650.0f);
    temp_ft5 = obj2F4->unk_138 * 10.0f + (sp18 * 650.0f);
    for (i = 0; i < 200; i++) {
        if ((gObjects58[i].obj.status == 2) &&
            (fabsf(gObjects58[i].obj.pos.x - (obj2F4->obj.pos.x + temp_ft4)) < 1000.0f) &&
            (fabsf(gObjects58[i].obj.pos.z - (obj2F4->obj.pos.z + temp_ft5)) < 1000.0f)) {
            if (fabsf(gObjects58[i].obj.pos.y - obj2F4->obj.pos.y) < 1000.0f) {
                if (gObjects58[i].obj.pos.y < obj2F4->obj.pos.y) {
                    return 1;
                } else {
                    return -1;
                }
            }
        }
    }
    obj408 = gObjects408;
    if ((gCurrentLevel == LEVEL_SECTOR_Z) && (fabsf(obj408->obj.pos.x - (obj2F4->obj.pos.x + temp_ft4)) < 2000.0f) &&
        (fabsf(obj408->obj.pos.z - (obj2F4->obj.pos.z + temp_ft5)) < 2000.0f)) {
        if (fabsf(obj408->obj.pos.y - obj2F4->obj.pos.y) < 1500.0f) {
            if (obj408->obj.pos.y < obj2F4->obj.pos.y) {
                return 1;
            } else {
                return -1;
            }
        }
    }
    return 0;
}

s32 func_8003049C(Object_2F4* arg0) {
    Object_58* var_v0_2;
    s32 i;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 temp_fa0;
    f32 temp_ft4;
    f32 var_ft5;
    Object_408* obj408 = &gObjects408[0];
    s32 pad[4];

    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
        return 0;
    }
    if ((gLevelType == LEVELTYPE_SPACE) && (gCurrentLevel != LEVEL_BOLSE)) {
        return func_800301F4(arg0);
    }
    sp40 = __sinf(arg0->obj.rot.y * M_DTOR);
    sp3C = __cosf(arg0->obj.rot.y * M_DTOR);
    temp_fa0 = arg0->unk_138 * 10.0f + (sp40 * 650.0f);
    temp_ft4 = arg0->unk_138 * 10.0f + (sp3C * 650.0f);
    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        for (i = 0, var_v0_2 = gObjects58; i < 200; i++, var_v0_2++) {
            if ((var_v0_2->obj.status == 2) && (fabsf(var_v0_2->obj.pos.x - (arg0->obj.pos.x + temp_fa0)) < 1200.0f) &&
                (fabsf(var_v0_2->obj.pos.z - (arg0->obj.pos.z + temp_ft4)) < 1200.0f) && (arg0->obj.pos.y < 650.0f)) {
                return 1;
            }
        }
    }
    sp44 = 1200.0f;
    var_ft5 = 650.0f;
    if (arg0->unk_0E4 < 8) {
        var_ft5 = 720.0f;
    }

    if (obj408->obj.id == OBJ_408_293) {
        var_ft5 = 350.0f;
    } else if (obj408->obj.id == OBJ_408_309) {
        sp44 = 2000.0f;
        var_ft5 = 750.0f;
    } else if (obj408->obj.id == OBJ_408_317) {
        sp44 = 1500.0f;
        var_ft5 = 700.0f;
    }
    if ((fabsf(obj408->obj.pos.x - (arg0->obj.pos.x + temp_fa0)) < sp44) &&
        (fabsf(obj408->obj.pos.z - (arg0->obj.pos.z + temp_ft4)) < sp44) &&
        (fabsf(obj408->obj.pos.y - arg0->obj.pos.y) < var_ft5)) {
        return 1;
    }
    return 0;
}

void func_8003088C(Object_2F4* arg0) {
    s32 var_a1;
    Vec3f sp48;
    Vec3f sp3C;

    if (arg0->unk_0D0 != 0) {
        if (arg0->unk_0E4 == 100) {
            arg0->unk_0D0 = 0;
        }
        if ((arg0->unk_0D0 >= 2) && (arg0->unk_0E4 >= 4) && (arg0->unk_0E4 < 8)) {
            arg0->unk_0D6 = 10;
            arg0->timer_0C2 = 10;
        }
        if (((arg0->unk_0E4 < 4) || (arg0->unk_0E4 == 9) || (arg0->unk_0E4 == 8)) && (arg0->unk_0D0 == 2)) {
            arg0->unk_0D0 = 0;
        }
        if ((arg0->unk_0D0 == 2) && (arg0->unk_16C > 0.0f)) {
            arg0->unk_0D0 = 0;
        }
        if (arg0->unk_170 > 1.0f) {
            arg0->unk_0D0 = 0;
        }
        if (arg0->unk_0D0 != 0) {
            var_a1 = false;
            if ((arg0->unk_0B6 == 3) ||
                ((gCurrentLevel == LEVEL_BOLSE) && (gObjects408[1].obj.status != 0) && (arg0->unk_0E4 >= 4)) ||
                ((gCurrentLevel == LEVEL_VENOM_2) && (arg0->unk_0E4 >= 4) && (arg0->unk_0E4 < 10) &&
                 (arg0->unk_0D0 == 2))) {
                arg0->unk_0D6 = 0;
                var_a1 = true;
                if (gCurrentLevel == LEVEL_BOLSE) {
                    arg0->unk_0D4 = 0;
                }
            }
            if (arg0->unk_0E4 >= 4) {
                if (((arg0->unk_0D0 != 3) || (arg0->unk_0E4 != 4)) &&
                    ((arg0->unk_0E4 != 200) || (arg0->unk_0D0 != 2))) {
                    arg0->unk_0CE -= arg0->unk_0D6;
                }
            } else if ((arg0->unk_0E4 < 4) && (arg0->unk_0B8 != 6)) {
                if (arg0->unk_0E4 == 1) {
                    gTeamDamage[arg0->unk_0E4] = arg0->unk_0D6;
                } else {
                    gTeamDamage[arg0->unk_0E4] = arg0->unk_0D6 * 2;
                }
            }
            if (arg0->unk_0CE <= 0) {
                arg0->unk_0CE = 0;
                if (arg0->unk_0E4 == 200) {
                    func_E51970_80199900(arg0, 1);
                    if (arg0->unk_0D4 == 1) {
                        if (gObjects2F4[8].obj.status == 2) {
                            func_800BA808(gMsg_ID_16140, RCID_KATT);
                        }
                        func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 10);
                        gHitCount += 11;
                        D_80177850 = 15;
                    } else {
                        switch (arg0->unk_0D4) {
                            case 102:
                                func_800BA808(gMsg_ID_16170, RCID_FALCO);
                                break;
                            case 103:
                                func_800BA808(gMsg_ID_16180, RCID_SLIPPY);
                                break;
                            case 104:
                                func_800BA808(gMsg_ID_16175, RCID_PEPPY);
                                break;
                            case 109:
                                func_800BA808(gMsg_ID_16185, RCID_KATT);
                                break;
                        }
                    }
                    return;
                }
                arg0->timer_0C6 = 50;
                arg0->unk_070 = 20;
                arg0->obj.status = 3;
                arg0->unk_170 = 0.0f;
                func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 4.0f);
                Audio_PlaySfx(0x2903700B, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->timer_0C2 = 10;
                arg0->timer_0BE = 0;
                arg0->timer_04C = (Rand_ZeroOne() * 2.9f);
                switch ((s32) (Rand_ZeroOne() * 4.0f)) {
                    case 0:
                        arg0->timer_0BC = 0;
                        break;
                    case 1:
                        arg0->timer_0BC = 50;
                        break;
                    case 2:
                        arg0->timer_0BC = 200;
                        break;
                    case 3:
                        arg0->timer_0BC = 300;
                        break;
                }
                if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
                    arg0->timer_0BC = 70;
                }
                if ((gLevelType == LEVELTYPE_SPACE) && (gCurrentLevel != LEVEL_BOLSE)) {
                    if (Rand_ZeroOne() < 0.5f) {
                        arg0->timer_0BC = 10;
                    } else {
                        arg0->timer_0BC = (s32) (Rand_ZeroOne() * 50.0f);
                    }
                }
                if ((arg0->unk_0E4 >= 4) && (arg0->unk_0E4 < 8)) {
                    arg0->timer_0BC = (s32) (Rand_ZeroOne() * 40.0f) + 60.0f;
                }
                if (arg0->unk_0D6 >= 20) {
                    arg0->timer_0BC = 0;
                }
                if ((gCurrentLevel == LEVEL_KATINA) && (arg0->unk_0B6 == 1) && (arg0->unk_0D4 == 1)) {
                    if (D_8015F921 < 2) {
                        func_8002F5F4(gMsg_ID_18018, RCID_BILL);
                    }
                    D_8015F921++;
                }
                switch (arg0->unk_0E4) {
                    case 4:
                        D_80177CD0[0] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            func_8002F64C(gMsg_ID_19458, RCID_WOLF);
                        } else {
                            func_8002F64C(gMsg_ID_9365, RCID_WOLF);
                        }
                        break;
                    case 5:
                        D_80177CD0[1] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            func_8002F64C(gMsg_ID_19459, RCID_LEON);
                        } else {
                            func_8002F64C(gMsg_ID_9366, RCID_LEON);
                        }
                        break;
                    case 6:
                        D_80177CD0[2] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            func_8002F64C(gMsg_ID_19460, RCID_PIGMA);
                        } else {
                            func_8002F64C(gMsg_ID_9367, RCID_PIGMA);
                        }
                        break;
                    case 7:
                        D_80177CD0[3] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            func_8002F64C(gMsg_ID_19461, RCID_ANDREW);
                        } else {
                            func_8002F64C(gMsg_ID_9368, RCID_ANDREW);
                        }
                        break;
                }
                if ((arg0->unk_0E4 >= 4) && (arg0->unk_0E4 < 8)) {
                    D_8015F904 = 150;
                }
                switch (arg0->unk_0D4) {
                    case 1:
                        if (arg0->unk_0E4 >= 10) {
                            switch (arg0->unk_058) {
                                case 1:
                                    func_8002F5F4(gMsg_ID_20170, RCID_FALCO);
                                    break;
                                case 2:
                                    func_8002F5F4(gMsg_ID_20150, RCID_SLIPPY);
                                    break;
                                case 3:
                                    func_8002F5F4(gMsg_ID_20160, RCID_PEPPY);
                                    break;
                            }
                        }
                        break;
                    case 102:
                    case 103:
                    case 104:
                        if ((arg0->unk_0E4 >= 4) && (arg0->unk_0E4 < 8)) {
                            if ((D_80177CD0[0] + D_80177CD0[1] + D_80177CD0[2] + D_80177CD0[3]) == 0) {
                                switch (arg0->unk_0D4) {
                                    case 102:
                                        func_800BA808(gMsg_ID_9438, RCID_FALCO);
                                        break;
                                    case 103:
                                        func_800BA808(gMsg_ID_9436, RCID_SLIPPY);
                                        break;
                                    case 104:
                                        func_800BA808(gMsg_ID_9437, RCID_PEPPY);
                                        break;
                                }
                            } else {
                                D_801515F0[arg0->unk_0D4].unk_00 = 80;
                            }
                        } else {
                            D_801515F0[arg0->unk_0D4].unk_00 = 80;
                        }
                        break;
                }
            } else {
                if (var_a1) {
                    Audio_PlaySfx(0x29001062, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    arg0->unk_06C = 3;
                    arg0->unk_098 = 5;
                    arg0->unk_070 = 15;
                    if (Rand_ZeroOne() < 0.5f) {
                        arg0->unk_134 = 0.0f;
                        arg0->unk_130 = 360.0f;
                    } else {
                        arg0->unk_130 = 0.0f;
                        arg0->unk_134 = 359.999f;
                    }
                } else {
                    arg0->timer_0C6 = 20;
                    arg0->unk_070 = 20;
                }
                if (arg0->unk_0E4 == 200) {
                    Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else if (arg0->unk_06C == 0) {
                    Audio_PlaySfx(0x2903300E, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                func_8007D10C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.5f);
                if (arg0->unk_0E4 < 100) {
                    Matrix_RotateY(gCalcMatrix, arg0->unk_0F4.y * M_DTOR, 0);
                    sp48.x = 30.0f;
                    if (Rand_ZeroOne() < 0.5f) {
                        sp48.x = -30.0f;
                    }
                    sp48.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
                    sp48.z = 0.0f;
                    if (arg0->unk_06C != 0) {
                        sp48.x *= 1.5f;
                        sp48.y = 30.0f;

                        if ((arg0->obj.pos.y > 100.0f) && (Rand_ZeroOne() < 0.5f)) {
                            sp48.y = -30.0f;
                        }
                    }
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp48, &sp3C);
                    arg0->unk_148 = sp3C.x;
                    arg0->unk_14C = sp3C.y;
                    arg0->unk_144 = sp3C.z;
                }
                if ((gRadioState == 0) && (gObjects2F4->obj.status == 2)) {
                    if (arg0->unk_0D0 == 3) {
                        switch (arg0->unk_0E4) {
                            case 1:
                                func_8002F5F4(gMsg_ID_20210, RCID_FALCO);
                                break;
                            case 3:
                                func_8002F5F4(gMsg_ID_20200, RCID_PEPPY);
                                break;
                            case 2:
                                func_8002F5F4(gMsg_ID_20190, RCID_SLIPPY);
                                break;
                            case 8:
                                func_8002F5F4(gMsg_ID_20084, RCID_KATT);
                                break;
                        }
                    } else if (arg0->unk_0D4 < 105) {
                        if (arg0->unk_0E4 >= 4) {
                            if (arg0->unk_0D4 == 1) {
                                if ((gCurrentLevel == LEVEL_KATINA) && (arg0->unk_0B6 == 1) && (D_8015F920 == 0)) {
                                    D_8015F920 = 1;
                                    func_800BA808(gMsg_ID_18015, RCID_BILL);
                                } else if (arg0->unk_0E4 == 8) {
                                    func_8002F5F4(gMsg_ID_20084, RCID_KATT);
                                } else if (arg0->unk_0E4 == 9) {
                                    func_8002F5F4(gMsg_ID_20085, RCID_BILL);
                                } else if (gCurrentLevel == LEVEL_VENOM_2) {
                                    switch (arg0->unk_0E4) {
                                        case 4:
                                            func_8002F5F4(gMsg_ID_19454, RCID_WOLF);
                                            break;
                                        case 5:
                                            func_8002F5F4(gMsg_ID_19455, RCID_LEON);
                                            break;
                                        case 6:
                                            func_8002F5F4(gMsg_ID_19456, RCID_PIGMA);
                                            break;
                                        case 7:
                                            func_8002F5F4(gMsg_ID_19457, RCID_ANDREW);
                                            break;
                                    }
                                }
                            }
                        } else if (arg0->unk_0D4 == 1) {
                            switch (arg0->unk_0E4) {
                                case 1:
                                    func_8002F5F4(gMsg_ID_20060, RCID_FALCO);
                                    break;
                                case 3:
                                    func_8002F5F4(gMsg_ID_20070, RCID_PEPPY);
                                    break;
                                case 2:
                                    func_8002F5F4(gMsg_ID_20080, RCID_SLIPPY);
                                    break;
                            }
                        }
                    } else if ((arg0->unk_0E4 < 4) && (arg0->unk_068 != 0) && (arg0->unk_058 != 0)) {
                        switch (arg0->unk_0E4) {
                            case 1:
                                if (gTeamShields[1] >= 90) {
                                    func_8002F5F4(gMsg_ID_9130, RCID_FALCO);
                                } else {
                                    func_800BA808(gMsg_ID_9151, RCID_FALCO);
                                }
                                if ((D_800CA234 == NULL) || (gTeamShields[arg0->unk_0E4] <= 50)) {
                                    D_800CA234 = arg0;
                                    D_Timer_800CA238 = 320;
                                }
                                break;
                            case 2:
                                if (gTeamShields[2] >= 90) {
                                    func_8002F5F4(gMsg_ID_9140, RCID_SLIPPY);
                                } else {
                                    func_800BA808(gMsg_ID_9152, RCID_SLIPPY);
                                }
                                if ((D_800CA234 == NULL) || (gTeamShields[arg0->unk_0E4] <= 50)) {
                                    D_800CA234 = arg0;
                                    D_Timer_800CA238 = 320;
                                }
                                break;
                            case 3:
                                if (gTeamShields[3] >= 90) {
                                    func_8002F5F4(gMsg_ID_9150, RCID_PEPPY);
                                } else {
                                    func_800BA808(gMsg_ID_9153, RCID_PEPPY);
                                }
                                if ((D_800CA234 == NULL) || (gTeamShields[arg0->unk_0E4] <= 50)) {
                                    D_800CA234 = arg0;
                                    D_Timer_800CA238 = 320;
                                }
                                break;
                        }
                    }
                }
            }
            arg0->unk_0D0 = 0;
        }
    }
}

void func_80031858(Object_2F4* obj2F4) {
    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (obj2F4->unk_0B0 != 0) &&
        (fabsf(obj2F4->obj.pos.x - gPlayer[0].pos.x) < 1000.0f) &&
        (fabsf(obj2F4->obj.pos.y - gPlayer[0].pos.y) < 1000.0f) &&
        (fabsf(obj2F4->obj.pos.z - gPlayer[0].unk_138) < 1000.0f)) {
        obj2F4->unk_078++;
    } else {
        obj2F4->unk_078 = 0;
    }
}

bool func_80031900(Object_2F4* obj2F4) {
    Vec3f sp24;
    Vec3f sp18;

    Matrix_RotateY(gCalcMatrix, -obj2F4->obj.rot.y * M_DTOR, 0);
    sp24.x = obj2F4->unk_124.x - obj2F4->obj.pos.x;
    sp24.y = 0.0f;
    sp24.z = obj2F4->unk_124.z - obj2F4->obj.pos.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp24, &sp18);
    if (sp18.z > 0.0f) {
        return true;
    }
    return false;
}

void func_800319AC(Object_2F4* this) {
    u8 sp10F;
    s32 sp108;
    s32 sp104;
    s32 temp_v0_27;
    UnkEntity28* temp_v1;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    Vec3f spA8;
    Vec3f sp9C;
    Vec3f sp90;
    Vec3f sp84 = D_800C9B98;
    Vec3f sp78 = D_800C9BA4;
    s32 pad1;
    s32 pad2;
    s32 pad3;

    if (this->unk_0E4 == 1000) {
        this->timer_0C2 = 10;
        this->info.unk_1C = 0.0f;
        func_8003010C(this);
        return;
    }
    if ((this->unk_094 != 0) && (this->unk_090 == 0) && (this->unk_0E4 >= 4)) {
        switch ((s32) (Rand_ZeroOne() * 3.9f)) {
            case 0:
            case 1:
                if (gCurrentLevel == LEVEL_VENOM_2) {
                    this->unk_090 = 10;
                }
                break;
            case 2:
                this->unk_090 = 8;
                break;
            case 3:
                this->unk_090 = 7;
                break;
        }
        this->unk_094 = 0;
        if (this->unk_098 != 0) {
            this->unk_098--;
            this->unk_090 = 0;
        }
    }
    if ((this->timer_0CA[0] != 0) && (gCurrentLevel != LEVEL_VENOM_2) && (this->unk_0E4 < 10) &&
        (this->timer_0CA[0] < 5) && !(gFrameCount & 0x1F)) {
        this->unk_090 = 10;
    }
    if ((this->unk_090 != 0) && (this->unk_0B8 < 7)) {
        this->unk_0B8 = this->unk_090;
        switch (this->unk_0B8) {
            case 7:
            case 8:
                if (this->unk_0F4.x > 180.0f) {
                    this->unk_0F4.x -= 360.0f;
                }
                this->unk_046 = 0;
                break;
            case 9:
                this->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 30;
                if (Rand_ZeroOne() < 0.5f) {
                    this->unk_160 = this->obj.rot.y + 50.0f;
                } else {
                    this->unk_160 = this->obj.rot.y - 50.0f;
                }
                if (this->unk_160 >= 360.0f) {
                    this->unk_160 -= 360.0f;
                }
                if (this->unk_160 < 0.0f) {
                    this->unk_160 += 360.0f;
                }
                break;
            case 10:
                this->timer_0BC = 0x23;
                if (Rand_ZeroOne() < 0.5f) {
                    this->unk_130 = 360.0f;
                    this->unk_134 = 0.0f;
                    this->unk_08C = 1;
                } else {
                    this->unk_130 = 0.0f;
                    this->unk_134 = 359.999f;
                    this->unk_08C = -1;
                }
                this->unk_09C = 1;
                break;
        }
    }
    this->unk_090 = 0;
    spCC = spC8 = spC4 = 0.0f;
    if (this->unk_06C != 0) {
        this->unk_06C--;
        this->unk_16C = 1.0f;
    }
    if (this->unk_05C != 0) {
        this->unk_05C--;
    }
    Math_SmoothStepToF(&this->unk_13C, 0.0f, 0.1f, 0.2f, 0.00001f);
    Math_SmoothStepToF(&this->unk_138, this->unk_13C, 0.1f, 2.0f, 0.00001f);
    if (this->unk_13C > 0.1f) {
        this->unk_07C = 2;
    } else {
        this->unk_07C = 1;
    }
    if (this->unk_0E4 < 10) {
        func_80031858(this);
        if (this->unk_078 == 200) {
            switch (this->unk_0E4) {
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    break;
                case 1:
                    if (gPlayer[0].shields < (Play_GetMaxShields() / 2)) {
                        func_800BA808(gMsg_ID_20298, RCID_FALCO);
                    } else if (Rand_ZeroOne() < 0.5f) {
                        func_800BA808(gMsg_ID_20280, RCID_FALCO);
                    } else {
                        func_800BA808(gMsg_ID_20301, RCID_FALCO);
                    }
                    break;
                case 2:
                    if (gPlayer[0].shields < (Play_GetMaxShields() / 2)) {
                        func_800BA808(gMsg_ID_20297, RCID_SLIPPY);
                    } else if (Rand_ZeroOne() < 0.5f) {
                        func_800BA808(gMsg_ID_20282, RCID_SLIPPY);
                    } else {
                        func_800BA808(gMsg_ID_20300, RCID_SLIPPY);
                    }
                    break;
                case 3:
                    if (gPlayer[0].shields < (Play_GetMaxShields() / 2)) {
                        func_800BA808(gMsg_ID_20296, RCID_PEPPY);
                    } else if (Rand_ZeroOne() < 0.5f) {
                        func_800BA808(gMsg_ID_20281, RCID_PEPPY);
                    } else {
                        func_800BA808(gMsg_ID_20299, RCID_PEPPY);
                    }
                    break;
                case 9:
                    func_800BA808(gMsg_ID_18120, RCID_BILL);
                    break;
            }
        }
    }
    sp104 = 0;
    this->unk_064 = 0;
    if ((this->unk_0E4 > 0) && (this->unk_0E4 < 4) && (gTeamShields[this->unk_0E4] <= 0) && (this->unk_0B8 != 6)) {
        this->unk_0B8 = 6;
        if (this->timer_0C2 < 100) {
            gTeamShields[this->unk_0E4] = 1;
            switch (this->unk_0E4) {
                case 1:
                    func_800BA808(gMsg_ID_20220, RCID_FALCO);
                    break;
                case 2:
                    func_800BA808(gMsg_ID_20222, RCID_SLIPPY);
                    break;
                case 3:
                    func_800BA808(gMsg_ID_20221, RCID_PEPPY);
                    break;
            }
            this->unk_188 = 5.0f;
            this->unk_130 = 360.0f;
            this->unk_134 = 0.0f;
            Audio_PlaySfx(0x09000002, &this->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            this->unk_046 = 0;
        }
        gTeamShields[this->unk_0E4] = -1;
        gTeamDamage[this->unk_0E4] = 0;
        this->unk_054 = 0;
        this->timer_0C2 = 10000;
    }
    switch (this->unk_0B8) {
        case 6:
            this->timer_0C2 = 10000;
            this->unk_07C = 2;
            this->unk_118 = 45.0f;
            this->unk_120 = 2.0f;
            gTeamShields[this->unk_0E4] = -1;
            gTeamDamage[this->unk_0E4] = 0;
            if (gCurrentLevel == LEVEL_SECTOR_Z) {
                this->unk_124.x = D_800C9B50[this->unk_046].x;
                this->unk_124.y = D_800C9B50[this->unk_046].y;
                this->unk_124.z = D_800C9B50[this->unk_046].z;
                if ((fabsf(this->obj.pos.x - D_800C9B50[this->unk_046].x) < 800.0f) &&
                    (fabsf(this->obj.pos.z - D_800C9B50[this->unk_046].z) < 800.0f)) {
                    this->unk_046++;
                    if (this->unk_046 >= 4) {
                        Object_Kill(&this->obj, &this->sfxPos);
                    }
                }
            } else {
                this->unk_124.y = 20000.0f;
                if (this->obj.pos.y > 3000.0f) {
                    Object_Kill(&this->obj, &this->sfxPos);
                }
            }
            sp104 = 2;
            break;
        case 5:
            func_E51970_80199C60(this);
            sp104 = 1;
            break;
        case 0:
            if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_9) {
                this->unk_114 = this->unk_118 = 40.0f;
                if (gObjects2F4->unk_0B8 == 5) {
                    Math_SmoothStepToF(&this->unk_0F4.x, 30.0f, 0.1f, 0.5f, 0.0f);
                    this->unk_118 = 200.0f;
                }
                if (this->timer_0BC == 0) {
                    if (this->unk_0E4 == 4) {
                        this->unk_0B8 = 3;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            this->unk_04E = 200;
                        } else {
                            this->unk_04E = 200;
                        }
                    } else {
                        this->unk_0B8 = 2;
                        if (this->unk_0E4 == 8) {
                            this->unk_130 = 360.0f;
                            this->unk_134 = 0.0f;
                        }
                    }
                }
                Math_SmoothStepToAngle(&this->obj.rot.z, 0.0f, 0.03f, 0.5f, 0.0f);
            }
            break;
        case 1:
            this->unk_118 = 40.0f;
            if ((this->timer_0BC < 35) && (gCurrentLevel == LEVEL_FORTUNA)) {
                Math_SmoothStepToF(&this->unk_0F4.x, 15.0f, 0.1f, 1.0f, 0.0f);
            }
            if (this->timer_0BC == 0) {
                this->unk_0B8 = 3;
                if ((gCurrentLevel == LEVEL_BOLSE) && (this->unk_0E6 >= 0)) {
                    this->unk_0B8 = 2;
                }
            }
            break;
        case 2:
            sp104 = 1;
            spF8 = 800.0f;
            spF4 = 1500.0f;
            spF0 = 0.4f;
            spEC = fabsf(this->unk_124.x - this->obj.pos.x);
            spE8 = fabsf(this->unk_124.z - this->obj.pos.z);
            sp10F = 0xB;
            if (this->unk_0E4 == 1) {
                spF0 = 0.5f;
            } else if ((this->unk_0B6 != 2) && (this->unk_0B6 == 3)) {
                spF0 = 0.5f;
            }
            if (this->unk_0E6 == 0) {
                spF0 = 0.2f;
            }
            if (this->unk_0E6 < 0) {
                this->unk_0B8 = 3;
            } else {
                if (gObjects2F4[this->unk_0E6].unk_0E4 == 200) {
                    spF0 = 0.8f;
                    spF4 = spF8 = 3000.0f;
                    this->unk_120 = 2.0f;
                }
                if (this->unk_0E6 == 0) {
                    if (gCurrentLevel != LEVEL_VENOM_2) {
                        if (((gPlayer[0].unk_4DC != 0) && (this->unk_060 > 10)) ||
                            ((gCurrentLevel == LEVEL_BOLSE) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0))) {
                            this->unk_0B8 = 3;
                            this->unk_04E = 300;
                            this->timer_0BC = 160;
                            if (this->unk_0E4 == 4) {
                                func_8002F5F4(gMsg_ID_9369, RCID_WOLF);
                            }
                            break;
                        } else if ((this->unk_060 > 200) && (gPlayer[0].timer_224 != 0)) {
                            this->unk_060 = 100;
                            break;
                        }
                    }
                    if ((this->unk_0E4 >= 4) && (this->unk_0E4 != 8) &&
                        ((gCurrentLevel != LEVEL_VENOM_2) || (this->unk_0E4 != 4))) {
                        spCC = __sinf(((this->index * 45) + gFrameCount) * M_DTOR) * 100.0f;
                        spC8 = __cosf(((this->index * 45) + (gFrameCount * 2)) * M_DTOR) * 100.0f;
                        spC4 = __sinf(((this->index * 45) + gFrameCount) * M_DTOR) * 100.0f;
                    }
                    if (gPlayer[0].unk_4DC == 0) {
                        this->unk_124.x = gPlayer[0].pos.x + spCC;
                        this->unk_124.y = gPlayer[0].pos.y + spC8;
                        this->unk_124.z = gPlayer[0].unk_138 + spC4;
                        this->unk_118 = gPlayer[0].unk_0D0 + 10.0f;
                    }
                    if ((gObjects2F4->unk_0B8 == 6) && (this->unk_0E4 < 4)) {
                        this->unk_120 = 3.0f;
                        this->unk_118 = gPlayer[0].unk_0D0 - 5.0f;
                        this->unk_07C = 2;
                    } else if ((gCurrentLevel == LEVEL_VENOM_2) && (this->unk_0E4 >= 4)) {
                        this->unk_120 = 1.6f;
                        this->unk_118 = 55.0f;
                    } else {
                        this->unk_120 = 1.2f;
                    }
                    spF4 = 2000.0f;
                    spF8 = 700.0f;
                    if (gCurrentLevel == LEVEL_VENOM_2) {
                        spF0 = 0.5f;
                        sp10F = 3;
                    } else {
                        spF0 = 0.7f;
                    }
                } else if (this->unk_0E6 != 100) {
                    if (this->unk_0E4 >= 10) {
                        spCC = __sinf(((this->index * 45) + gFrameCount) * M_DTOR) * 200.0f;
                        spC8 = __cosf(((this->index * 45) + (gFrameCount * 2)) * M_DTOR) * 200.0f;
                        spC4 = __sinf(((this->index * 45) + gFrameCount) * M_DTOR) * 200.0f;
                    }
                    this->unk_124.x = gObjects2F4[this->unk_0E6].obj.pos.x + spCC;
                    this->unk_124.y = gObjects2F4[this->unk_0E6].obj.pos.y + spC8;
                    this->unk_124.z = gObjects2F4[this->unk_0E6].obj.pos.z + spC4;
                    if ((gCurrentLevel == LEVEL_VENOM_2) && (this->unk_0E4 >= 4)) {
                        this->unk_118 = 55.0f;
                        this->unk_120 = 1.6f;
                    } else if ((gCurrentLevel == LEVEL_FORTUNA) && (this->unk_0E4 >= 0xB)) {
                        this->unk_120 = 1.4f;
                        this->unk_118 = 50.0f;
                    } else {
                        this->unk_118 = gObjects2F4[this->unk_0E6].unk_114 + 10.0f;
                        if (this->unk_118 < 30.0f) {
                            this->unk_118 = 30.0f;
                        }
                        this->unk_120 = 1.4f;
                    }
                } else {
                    this->unk_124.x = gObjects408->obj.pos.x;
                    this->unk_124.y = gObjects408->obj.pos.y + 400.0f;
                    this->unk_124.z = gObjects408->obj.pos.z;
                    this->unk_118 = 40.0f;
                }
                if ((this->unk_0E6 >= 0) && (this->unk_0E6 != 100) && (gObjects2F4->unk_0B8 != 6)) {
                    if (spE8 < spF8) {
                        if (spEC < spF8) {
                            if (this->unk_0E6 != 0) {
                                this->unk_118 = gObjects2F4[this->unk_0E6].unk_114 - 5.0f;
                            } else {
                                this->unk_118 = gPlayer[0].unk_0D0 - 5.0f;
                                if ((gCurrentLevel == LEVEL_VENOM_2) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5) &&
                                    (gPlayer[0].unk_4D8 > 100.0f)) {
                                    this->unk_090 = 8;
                                }
                            }
                        }
                    } else if (this->timer_0C0 == 0) {
                        this->timer_0C0 = (s32) (Rand_ZeroOne() * 200.0f) + 200;
                        this->unk_13C = 20.0f;
                    }
                    if ((spE8 < spF4) && (spEC < spF4)) {
                        this->unk_060++;
                        this->unk_064 = 1;
                        if (!((this->index + gFrameCount) & sp10F) && (Rand_ZeroOne() < spF0) && func_80031900(this) &&
                            ((gObjects2F4->unk_0B8 == 2) || (gCurrentLevel == LEVEL_TRAINING))) {
                            if ((this->unk_0E6 == 0) && (gCurrentLevel != LEVEL_TRAINING)) {
                                if ((this->unk_060 > 250) && (gCurrentLevel != LEVEL_VENOM_ANDROSS)) {
                                    if ((Rand_ZeroOne() < 0.5f) || (gCurrentLevel == LEVEL_VENOM_2)) {
                                        this->unk_060 = 0;
                                        switch (this->unk_0E4) {
                                            case 4:
                                                func_8002E4F8(gMsg_ID_19450, RCID_WOLF);
                                                break;
                                            case 5:
                                                func_8002E4F8(gMsg_ID_19451, RCID_LEON);
                                                break;
                                            case 6:
                                                func_8002E4F8(gMsg_ID_19452, RCID_PIGMA);
                                                break;
                                            case 7:
                                                func_8002E4F8(gMsg_ID_19453, RCID_ANDREW);
                                                break;
                                        }
                                    } else {
                                        func_8002E4F8(gMsg_ID_2233, RCID_FALCO);
                                    }
                                }
                                this->unk_050 = 1;
                            } else {
                                this->unk_050 = 1;
                            }
                        }
                        if ((gRadioState == 0) && (this->timer_0C4 == 0) && (D_8015F928 > 700) && (D_8015F908 == 0) &&
                            (gObjects2F4->obj.status == 2)) {
                            this->timer_0C4 = 600;
                            if (Rand_ZeroOne() < 0.5f) {
                                gObjects2F4[this->unk_0E6].unk_068++;
                                switch (this->unk_0E6) {
                                    case 1:
                                        if ((gCurrentLevel == LEVEL_VENOM_2) && (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_19462, RCID_FALCO);
                                        } else if ((gObjects2F4[this->unk_0E6].unk_068 >= 3) &&
                                                   (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_20310, RCID_FALCO);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9100, RCID_FALCO);
                                        }
                                        gObjects2F4[this->unk_0E6].unk_058 = this->unk_0E4;
                                        if ((D_800CA234 == NULL) || (gTeamShields[this->unk_0E6] <= 50)) {
                                            D_800CA234 = &gObjects2F4[this->unk_0E6];
                                            D_Timer_800CA238 = 320;
                                        }
                                        break;
                                    case 2:
                                        if ((gCurrentLevel == LEVEL_VENOM_2) && (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_19463, RCID_SLIPPY);
                                        } else if ((gObjects2F4[this->unk_0E6].unk_068 >= 3) &&
                                                   (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_20311, RCID_SLIPPY);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9110, RCID_SLIPPY);
                                        }
                                        gObjects2F4[this->unk_0E6].unk_058 = this->unk_0E4;
                                        if ((D_800CA234 == NULL) || (gTeamShields[this->unk_0E6] <= 50)) {
                                            D_800CA234 = &gObjects2F4[this->unk_0E6];
                                            D_Timer_800CA238 = 320;
                                        }
                                        break;
                                    case 3:
                                        if ((gCurrentLevel == LEVEL_VENOM_2) && (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_19464, 0x1E);
                                        } else if ((gObjects2F4[this->unk_0E6].unk_068 >= 3) &&
                                                   (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_20312, 0x1E);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9120, 0x1E);
                                        }
                                        gObjects2F4[this->unk_0E6].unk_058 = this->unk_0E4;
                                        if ((D_800CA234 == NULL) || (gTeamShields[this->unk_0E6] <= 50)) {
                                            D_800CA234 = &gObjects2F4[this->unk_0E6];
                                            D_Timer_800CA238 = 320;
                                        }
                                        break;
                                    case 4:
                                        if (D_80177CD0[0] != 0) {
                                            func_8002F5F4(gMsg_ID_9330, RCID_WOLF);
                                        }
                                        break;
                                    case 5:
                                        if (D_80177CD0[1] != 0) {
                                            func_8002F5F4(gMsg_ID_9340, RCID_LEON);
                                        }
                                        break;
                                    case 6:
                                        if (D_80177CD0[2] != 0) {
                                            func_8002F5F4(gMsg_ID_9350, RCID_PIGMA);
                                        }
                                        break;
                                    case 7:
                                        if (D_80177CD0[3] != 0) {
                                            func_8002F5F4(gMsg_ID_9360, RCID_ANDREW);
                                        }
                                        break;
                                }
                            } else {
                                switch (this->unk_0E4) {
                                    case 1:
                                        if ((gCurrentLevel == LEVEL_FORTUNA) && (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_9211, RCID_FALCO);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9190, RCID_FALCO);
                                        }
                                        gObjects2F4[this->unk_0E6].unk_058 = 1;
                                        break;
                                    case 2:
                                        if ((gCurrentLevel == LEVEL_FORTUNA) && (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_9212, RCID_SLIPPY);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9200, RCID_SLIPPY);
                                        }
                                        gObjects2F4[this->unk_0E6].unk_058 = 2;
                                        break;
                                    case 3:
                                        if ((gCurrentLevel == LEVEL_FORTUNA) && (Rand_ZeroOne() < 0.5f)) {
                                            func_8002F5F4(gMsg_ID_9213, RCID_PEPPY);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9210, RCID_PEPPY);
                                        }
                                        gObjects2F4[this->unk_0E6].unk_058 = 3;
                                        break;
                                    case 4:
                                        if (gCurrentLevel != LEVEL_VENOM_2) {
                                            if (this->unk_068 == 0) {
                                                this->unk_068 = 1;
                                                func_8002F5F4(gMsg_ID_9289, RCID_WOLF);
                                            } else if (this->unk_060 > 150) {
                                                if (Rand_ZeroOne() < 0.5f) {
                                                    this->unk_060 = 0;
                                                    func_8002F5F4(gMsg_ID_9290, RCID_WOLF);
                                                } else {
                                                    func_8002F5F4(gMsg_ID_2233, RCID_FALCO);
                                                }
                                            } else {
                                                func_8002F5F4(gMsg_ID_9322, RCID_WOLF);
                                            }
                                        }
                                        break;
                                    case 5:
                                        if (gCurrentLevel == LEVEL_VENOM_2) {
                                            if ((Rand_ZeroOne() < 0.5f) && (this->unk_0E6 == 1)) {
                                                func_8002F5F4(gMsg_ID_9323, RCID_LEON);
                                            } else {
                                                func_8002F5F4(gMsg_ID_19451, RCID_LEON);
                                            }
                                        } else if ((Rand_ZeroOne() < 0.5f) && (this->unk_0E6 == 1)) {
                                            func_8002F5F4(gMsg_ID_9323, RCID_LEON);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9300, RCID_LEON);
                                        }
                                        break;
                                    case 6:
                                        if (gCurrentLevel == LEVEL_VENOM_2) {
                                            if ((Rand_ZeroOne() < 0.5f) && (this->unk_0E6 == 3)) {
                                                func_8002F5F4(gMsg_ID_9324, RCID_PIGMA);
                                            } else {
                                                func_8002F5F4(gMsg_ID_19452, RCID_PIGMA);
                                            }
                                        } else if ((Rand_ZeroOne() < 0.5f) && (this->unk_0E6 == 3)) {
                                            func_8002F5F4(gMsg_ID_9324, RCID_PIGMA);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9310, RCID_PIGMA);
                                        }
                                        break;
                                    case 7:
                                        if (gCurrentLevel == LEVEL_VENOM_2) {
                                            if ((Rand_ZeroOne() < 0.5f) && (this->unk_0E6 == 2)) {
                                                func_8002F5F4(gMsg_ID_9325, RCID_ANDREW);
                                            } else {
                                                func_8002F5F4(gMsg_ID_19453, RCID_ANDREW);
                                            }
                                        } else if ((Rand_ZeroOne() < 0.5f) && (this->unk_0E6 == 2)) {
                                            func_8002F5F4(gMsg_ID_9325, RCID_ANDREW);
                                        } else {
                                            func_8002F5F4(gMsg_ID_9320, RCID_ANDREW);
                                        }
                                        break;
                                }
                            }
                        }
                    } else {
                        this->unk_060 = 0;
                    }
                    if ((this->unk_0E6 > 0) &&
                        ((gObjects2F4[this->unk_0E6].obj.status == 3) || (gObjects2F4[this->unk_0E6].unk_0B8 == 6) ||
                         (gObjects2F4[this->unk_0E6].obj.status == 0))) {
                        this->unk_0B8 = 3;
                        if (gCurrentLevel == LEVEL_BOLSE) {
                            func_8002FB4C(this);
                        }
                    }
                }
            }
            break;
        case 3:
            sp104 = 1;
            if (this->timer_0BC == 0) {
                if ((this->unk_0E4 < 10) || (gCurrentLevel == LEVEL_BOLSE)) {
                    if (gCurrentLevel == LEVEL_VENOM_2) {
                        if (this->unk_0E4 >= 4) {
                            this->unk_120 = 1.6f;
                            this->unk_118 = 55.0f;
                        } else {
                            this->unk_120 = 1.4f;
                            this->unk_118 = 50.0f;
                        }
                    } else {
                        this->unk_120 = 1.2f;
                        this->unk_118 = 40.0f;
                    }
                } else {
                    this->unk_120 = 1.0f;
                    this->unk_118 = 38.0f;
                }
                if ((gCurrentLevel == LEVEL_SECTOR_Z) && (gObjects2F4->unk_0B8 == 0xA)) {
                    this->unk_13C = 30.0f;
                }
                if ((gLevelType == LEVELTYPE_SPACE) && (gCurrentLevel != LEVEL_BOLSE)) {
                    if ((gCurrentLevel == LEVEL_SECTOR_Z) && (this->unk_0E4 == 8)) {
                        Rand_ZeroOne();
                        spE4 = 0.0f;
                        spE0 = (Rand_ZeroOne() - 0.5f) * 500.0f;
                        spDC = ((Rand_ZeroOne() - 0.5f) * 5000.0f) + 12000.0f;
                    } else {
                        spE4 = (Rand_ZeroOne() - 0.5f) * 15000.0f;
                        spE0 = (Rand_ZeroOne() - 0.5f) * 1000.0f;
                        spDC = (Rand_ZeroOne() - 0.5f) * 15000.0f;
                    }
                } else {
                    spE4 = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                    if ((gCurrentLevel == LEVEL_BOLSE) || (gCurrentLevel == LEVEL_KATINA) ||
                        (gCurrentLevel == LEVEL_VENOM_2)) {
                        spE0 = Rand_ZeroOne() * 1000.0f;
                    } else {
                        spE0 = 0.0f;
                    }
                    spDC = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                    if ((gCurrentLevel == LEVEL_KATINA) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0)) {
                        spE4 = (Rand_ZeroOne() - 0.5f) * 5000.0f;
                        spDC = (Rand_ZeroOne() - 0.5f) * 5000.0f;
                    }
                }
                if ((fabsf(this->obj.pos.x - spE4) > 2000.0f) || (fabsf(this->obj.pos.z - spDC) > 2000.0f)) {
                    this->unk_124.x = spE4;
                    this->unk_124.y = spE0;
                    this->unk_124.z = spDC;
                    this->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 10;
                }
            }
            if (this->timer_0C0 == 0) {
                this->timer_0C0 = (s32) (Rand_ZeroOne() * 200.0f) + 200;
                this->unk_13C = 30.0f;
            }
            if ((this->unk_0E6 > 0) && (gObjects2F4[this->unk_0E6].obj.id == OBJ_2F4_197) &&
                (gObjects2F4[this->unk_0E6].timer_0C2 == 0) && (gObjects2F4[this->unk_0E6].obj.status == 2)) {
                this->unk_0B8 = 2;
                this->unk_058 = 0;
            }
            if (this->unk_0E6 == 0) {
                if (this->unk_04E != 0) {
                    this->unk_04E--;
                }
                if (this->unk_04E == 0) {
                    this->unk_0B8 = 2;
                    this->unk_058 = 0;
                }
            }
            break;
        case 7:
            this->unk_118 = 40.0f;
            Math_SmoothStepToF(&this->unk_0F4.x, 360.0f, 0.1f, 5.0f, 0.0001f);
            Math_SmoothStepToAngle(&this->obj.rot.z, 0.0f, 0.1f, 3.0f, 0.01f);
            if (this->unk_0F4.x > 350.0f) {
                this->unk_0B8 = 3;
            }
            break;
        case 8:
            this->unk_118 = 40.0f;
            if (this->index & 1) {
                Math_SmoothStepToAngle(&this->obj.rot.z, 355.0f, 0.1f, 3.0f, 0.01f);
            } else {
                Math_SmoothStepToAngle(&this->obj.rot.z, 5.0f, 0.1f, 3.0f, 0.01f);
            }
            switch (this->unk_046) {
                case 0:
                    Math_SmoothStepToF(&this->unk_0F4.x, 200.0f, 0.1f, 6.0f, 0.0001f);
                    if (this->unk_0F4.x > 190.0f) {
                        this->unk_0F4.y += 190.0f;
                        if (this->unk_0F4.y >= 360.0f) {
                            this->unk_0F4.y -= 360.0f;
                        }
                        this->unk_0F4.x = 360.0f - (this->unk_0F4.x - 180.0f);
                        this->obj.rot.z += 180.0f;
                        if (this->obj.rot.z >= 360.0f) {
                            this->obj.rot.z -= 360.0f;
                        }
                        this->timer_0BC = 0x28;
                        this->unk_046 += 1;
                    }
                    this->obj.pos.y -= 3.0f;
                    break;
                case 1:
                    if (this->timer_0BC == 0) {
                        this->unk_0B8 = 3;
                    }
                    break;
            }
            break;
        case 9:
            this->unk_118 = 40.0f;
            if (Math_SmoothStepToAngle(&this->unk_0F4.y, this->unk_160, 0.5f, 5.0f, 0.0f) < 0.0f) {
                spD0 = 70.0f;
            } else {
                spD0 = 290.0f;
            }
            Math_SmoothStepToAngle(&this->obj.rot.z, spD0, 0.1f, 15.0f, 0.01f);
            if (this->timer_0BC == 0) {
                this->unk_0B8 = 3;
            }
            break;
        case 10:
            sp104 = 1;
            if (this->timer_0BC == 0) {
                this->unk_0B8 = 3;
            }
            if (this->timer_0BC > 20) {
                Math_SmoothStepToF(&this->unk_170, 180.0f, 1.0f, 60.0f, 0.0f);
            }
            break;
    }
    if (sp104 != 0) {
        s32 var_v0 = 3;

        spE4 = this->unk_124.x - this->obj.pos.x;
        spE0 = this->unk_124.y - this->obj.pos.y;
        spDC = this->unk_124.z - this->obj.pos.z;

        if (gCurrentLevel == LEVEL_VENOM_2) {
            var_v0 = 1;
        }
        if (!((this->index + gFrameCount) & var_v0)) {
            this->unk_160 = Math_RadToDeg(Math_Atan2F(spE4, spDC));
            this->unk_164 = Math_RadToDeg(Math_Atan2F(spE0, sqrtf(SQ(spE4) + SQ(spDC))));
        }
        spD8 = this->unk_164;
        spD4 = this->unk_160;
        sp108 = 0;
        if (sp104 == 1) {
            if (this->unk_0E4 < 100) {
                sp108 = func_8003049C(this);
                if ((sp108 != 0) && (this->unk_0E4 < 10) && (this->timer_0BE == 0) &&
                    ((this->unk_130 < 0.01f) || (this->unk_130 > 359.9f))) {
                    this->timer_0BE = (s32) (Rand_ZeroOne() * 200.0f) + 200;
                    if (Rand_ZeroOne() < 0.5f) {
                        this->unk_134 = 0.0f;
                        this->unk_130 = 360.0f;
                    } else {
                        this->unk_130 = 0.0f;
                        this->unk_134 = 359.999f;
                    }
                }
            }
            if (sp108 != 0) {
                if ((this->unk_0E4 < 10) || (gCurrentLevel != LEVEL_FORTUNA)) {
                    spD8 += 40.0f * sp108;
                } else {
                    spD8 += 20.0f * sp108;
                }
                if (spD8 >= 360.0f) {
                    spD8 -= 360.0f;
                }
                if (spD8 < 0.0f) {
                    spD8 += 360.0f;
                }
            } else if ((this->obj.pos.y < (D_80177940 + 50.0f)) && (spD8 > 180.0f)) {
                spD8 = 0.0f;
                this->unk_0F4.x = 0.0f;
            }
        }
        Math_SmoothStepToAngle(&this->unk_0F4.x, spD8, 0.5f, this->unk_11C, 0.0001f);
        spD0 = Math_SmoothStepToAngle(&this->unk_0F4.y, spD4, 0.5f, this->unk_11C, 0.0001f) * 30.0f;
        if (spD0 < 0.0f) {
            spD0 = spD0 * -1.0f;
        } else {
            spD0 = 360.0f - spD0;
        }
        if ((this->unk_130 > 0.01f) && (this->unk_130 < 359.9f)) {
            if (!((gFrameCount + 0xF) & 0x1F) && (gCurrentLevel != LEVEL_VENOM_2)) {
                this->timer_0CA[0] = 0;
            }
        } else {
            Math_SmoothStepToAngle(&this->obj.rot.z, spD0, 0.1f, 3.0f, 0.01f);
            this->unk_09C = 0;
        }
    }
    if (this->unk_09C != 0) {
        Math_SmoothStepToF(&this->unk_130, this->unk_134, 1.0f, 60.0f, 0.01f);
    } else {
        Math_SmoothStepToF(&this->unk_130, this->unk_134, 0.2f, 30.0f, 0.01f);
    }
    if ((this->unk_130 > 0.01f) && (this->unk_130 < 359.9f)) {
        Math_SmoothStepToAngle(&this->obj.rot.z, this->unk_130, 0.2f, 100.0f, 0.01f);
        if ((this->unk_0E4 == 8) && !(gFrameCount & 1)) {
            if ((this->unk_130 > 10.0f) && (this->unk_130 < 350.0f)) {
                Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, 1);
                spA8.x = 0.0f;
                spA8.y = 70.0f;

                spA8.z = -70.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);
                func_80078E50(this->obj.pos.x + sp9C.x, this->obj.pos.y + sp9C.y, this->obj.pos.z + sp9C.z, 3.1f);
            }
        }
    }
    this->obj.rot.x = -this->unk_0F4.x;
    this->obj.rot.y = this->unk_0F4.y;
    Math_SmoothStepToF(&this->unk_114, this->unk_118, 0.2f, 1.0f, 0.1f);
    Math_SmoothStepToF(&this->unk_11C, this->unk_120, 1.0f, 0.1f, 0.1f);
    spC0 = __sinf(this->obj.rot.x * M_DTOR);
    spB8 = __cosf(this->obj.rot.x * M_DTOR);
    spBC = __sinf(this->obj.rot.y * M_DTOR);
    spB4 = __cosf(this->obj.rot.y * M_DTOR);

    sp9C.z = (this->unk_138 + this->unk_114) * spB8;
    sp9C.y = (this->unk_138 + this->unk_114) * -spC0;
    sp9C.x = spBC * sp9C.z;
    sp9C.z = spB4 * sp9C.z;

    this->vel.x = this->unk_148 + sp9C.x;
    this->vel.y = this->unk_14C + sp9C.y;
    this->vel.z = this->unk_144 + sp9C.z;
    this->unk_148 -= (this->unk_148 * 0.1f);
    this->unk_14C -= (this->unk_14C * 0.1f);
    this->unk_144 -= (this->unk_144 * 0.1f);
    if ((this->obj.pos.y < D_80177940 + 40.0f) && (this->vel.y < 0.0f)) {
        this->obj.pos.y = D_80177940 + 40.0f;
        this->vel.y = 0.0f;
    }
    if (this->unk_050 != 0) {
        this->unk_050 = 0;

        sp90.z = spB8 * 200.0f * 0.5f;
        sp90.y = -spC0 * 200.0f * 0.5f;
        sp90.x = spBC * sp90.z;
        sp90.z = spB4 * sp90.z;

        if ((gCurrentLevel == LEVEL_VENOM_2) && (this->unk_0E4 >= 4)) {
            Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, 1);
            spA8.y = 0.0f;
            spA8.z = 0.0f;
            if (Rand_ZeroOne() < 0.8f) {
                spA8.x = 60.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);
                func_8006EEFC(this->unk_0E4, this->obj.pos.x + sp9C.x + (sp90.x * 1.5f),
                              this->obj.pos.y + sp9C.y + (sp90.y * 1.5f), this->obj.pos.z + sp9C.z + (sp90.z * 1.5f),
                              sp90.x, sp90.y, sp90.z, this->obj.rot.x, this->obj.rot.y, this->obj.rot.z);
            }
            if (Rand_ZeroOne() < 0.8f) {
                spA8.x = -60.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);
                func_8006EEFC(this->unk_0E4, this->obj.pos.x + sp9C.x + (sp90.x * 1.5f),
                              this->obj.pos.y + sp9C.y + (sp90.y * 1.5f), this->obj.pos.z + sp9C.z + (sp90.z * 1.5f),
                              sp90.x, sp90.y, sp90.z, this->obj.rot.x, this->obj.rot.y, this->obj.rot.z);
            }
        } else {
            func_8006EEFC(this->unk_0E4, this->obj.pos.x + (sp90.x * 1.5f), this->obj.pos.y + (sp90.y * 1.5f),
                          this->obj.pos.z + (sp90.z * 1.5f), sp90.x, sp90.y, sp90.z, this->obj.rot.x, this->obj.rot.y,
                          this->obj.rot.z);
        }
    }
    func_8003088C(this);
    temp_v1 = &gUnkEntities28[this->index];
    temp_v1->unk_00 = 1;
    if (this->unk_0E4 == 200) {
        temp_v1->unk_02 = 100;
    } else {
        temp_v1->unk_02 = this->unk_0E4;
    }
    if (gCurrentLevel == LEVEL_TRAINING) {
        temp_v1->unk_02 = 4;
    }
    temp_v1->pos.x = this->obj.pos.x;
    temp_v1->pos.y = this->obj.pos.y;
    temp_v1->pos.z = this->obj.pos.z;
    temp_v1->unk_10 = this->unk_0F4.y + 180.0f;
    if (this->unk_054 != 0) {
        this->unk_054--;
        if ((this->unk_054 == 0) && (gObjects2F4->unk_0B8 == 2) && (gRadioState == 0)) {
            switch (this->unk_0E4) {
                case 1:
                    func_8002F5F4(gMsg_ID_9220, RCID_FALCO);
                    break;
                case 2:
                    func_8002F5F4(gMsg_ID_9230, RCID_SLIPPY);
                    break;
                case 3:
                    if ((Rand_ZeroOne() < 0.1f) && (gCurrentLevel == LEVEL_KATINA)) {
                        func_8002F5F4(gMsg_ID_18150, RCID_PEPPY);
                    } else {
                        func_8002F5F4(gMsg_ID_9240, RCID_PEPPY);
                    }
                    break;
            }
        }
    }
    if ((gCurrentLevel != LEVEL_KATINA) && (gCurrentLevel != LEVEL_VENOM_ANDROSS) && (this->timer_0C2 == 0)) {
        if (((this->unk_0E4 >= 10) && (this->unk_0E4 < 100)) ||
            ((this->unk_0E4 >= 4) && (this->unk_0E4 < 10) && (this->timer_0C6 != 0))) {
            s32 var_a3 = 0;

            if (((gCurrentLevel == LEVEL_BOLSE) || (gCurrentLevel == LEVEL_SECTOR_Z)) && (this->timer_0C6 == 0)) {
                var_a3 = 3;
            }
            sp90.x = this->vel.x;
            sp90.y = this->vel.y;
            sp90.z = this->vel.z;
            temp_v0_27 = func_8006351C(this->index, &this->obj.pos, &sp90, var_a3);
            if (temp_v0_27 != 0) {
                this->obj.pos.x -= this->vel.x;
                this->obj.pos.y -= this->vel.y;
                this->obj.pos.z -= this->vel.z;
                if ((temp_v0_27 >= 2) && (this->unk_0E4 >= 0xB)) {
                    this->timer_0BE = 2;
                    this->obj.status = 3;
                    this->unk_044 = 0;
                    func_8007BFFC(this->obj.pos.x, this->obj.pos.y, this->obj.pos.z, 0.0f, 0.0f, 0.0f, 5.0f, 0xF);
                    func_8007A6F0(&this->obj.pos, 0x2903A008);
                } else {
                    this->unk_0D0 = 1;
                    this->unk_0D6 = 10;
                    this->unk_0CE = 0;
                    func_8003088C(this);
                }
            }
        }
    }
    if (gCurrentLevel == LEVEL_FORTUNA) {
        func_8002EE64(this);
    } else if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
        this->unk_04A++;
        if (this->unk_04A >= Animation_GetFrameCount(&D_600C200)) {
            this->unk_04A = 0;
        }
    }
    Math_SmoothStepToF(&this->unk_16C, 0.0f, 0.8f, 0.05f, 1e-7f);
    Math_SmoothStepToF(&this->unk_170, 0.0f, 1.0f, 30.0f, 0.01f);
    if (this->unk_070 != 0) {
        this->unk_070--;
    }
}

void func_80034E64(Object_2F4* obj2F4) {
    f32 sp24;
    s32 sp20;

    if (obj2F4->unk_16C > 0) {
        Matrix_Push(&gGfxMatrix);
        sp24 = 3.5f;
        sp20 = (s32) (obj2F4->unk_16C * 60.0f);
        if (gCurrentLevel == LEVEL_VENOM_2) {
            sp24 *= 1.5f;
        }
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
        Matrix_Scale(gGfxMatrix, sp24, sp24 * 0.5f, sp24, 1);
        Matrix_RotateY(gGfxMatrix, gFrameCount * 3.0f * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x29);
        if (gCurrentLevel == LEVEL_KATINA) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 128, 255, 255, sp20);
        } else if (gCurrentLevel == LEVEL_BOLSE) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 128, 128, sp20);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 48, 255, 255, sp20);
        }
        gSPDisplayList(gMasterDisp++, D_1031630);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80035098(Object_2F4* obj2F4) {
    s32 sp2C;

    if (obj2F4->unk_170 > 1.0f) {
        Matrix_Push(&gGfxMatrix);
        sp2C = obj2F4->unk_170;
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
        Matrix_RotateZ(gGfxMatrix, -obj2F4->obj.rot.z * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -obj2F4->obj.rot.x * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, M_DTOR * -obj2F4->obj.rot.y - gPlayer[0].unk_058, 1);
        Matrix_RotateX(gGfxMatrix, gPlayer[0].unk_05C, 1);
        Matrix_RotateZ(gGfxMatrix, gFrameCount * 20.0f * (*obj2F4).unk_08C * M_DTOR, 1);
        if (obj2F4->unk_08C < 0) {
            Matrix_RotateX(gGfxMatrix, M_PI, 1);
        }
        Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x43);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, sp2C);
        gDPSetEnvColor(gMasterDisp++, 0, 0, 160, sp2C);
        gSPDisplayList(gMasterDisp++, D_101DC10);
        Matrix_Pop(&gGfxMatrix);
    }
}

bool func_800352E0(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Object_2F4* this = thisx;

    if (this->timer_0C6 & 1) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 128, 128, 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x1D);
    }
    if ((limbIndex == 1) || (limbIndex == 3)) {
        rot->z += gFrameCount * 3.0f;
    }
    if ((limbIndex == 1) || (limbIndex == 2)) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, (s32) D_8015F914, (s32) D_8015F918, (s32) D_8015F91C, 255);
    }
    return false;
}

void func_80035448(Object_2F4* obj2F4) {
    f32 sp38;
    Vec3f sp7C[32]; // larger than expected
    f32 pad2;

    sp7C[30] = D_800C9BB0; // not part of array? If not, why have it?

    if (obj2F4->unk_0E4 != 1000) {
        if ((obj2F4->unk_070 != 0) && (obj2F4->unk_0E4 < 100)) {
            pad2 = __sinf(obj2F4->unk_070 * 400.0f * M_DTOR);
            sp38 = obj2F4->unk_070 * pad2;
            Matrix_RotateY(gGfxMatrix, M_DTOR * sp38, 1);
            Matrix_RotateX(gGfxMatrix, M_DTOR * sp38, 1);
            Matrix_RotateZ(gGfxMatrix, M_DTOR * sp38, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
        }
        if (!(obj2F4->timer_0C6 & 1)) {
            RCP_SetupDL(&gMasterDisp, 0x1D);
            gSPFogPosition(gMasterDisp++, gFogNear, 1005);
        }
        switch (obj2F4->unk_0E4) {
            case 0:
            case 1:
            case 2:
            case 3:
                Matrix_Push(&gGfxMatrix);
                func_8005B388(obj2F4);
                Matrix_Pop(&gGfxMatrix);
                func_80035098(obj2F4);
                break;
            case 4:
            case 5:
            case 6:
            case 7:
                if (gCurrentLevel == LEVEL_VENOM_2) {
                    gSPDisplayList(gMasterDisp++, D_F0103D0);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, 30.0f, 0.0f, -60.0f, 1);
                    func_8005B1E8(obj2F4, 2);
                    Matrix_Pop(&gGfxMatrix);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, -30.0f, 0.0f, -60.0f, 1);
                    func_8005B1E8(obj2F4, 2);
                    Matrix_Pop(&gGfxMatrix);
                    func_80035098(obj2F4);
                    func_80034E64(obj2F4);
                } else {
                    gSPDisplayList(gMasterDisp++, D_F00F200);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
                    if (gCurrentLevel == LEVEL_BOLSE) {
                        func_8005B1E8(obj2F4, 3);
                    } else {
                        func_8005B1E8(obj2F4, 2);
                    }
                }
                break;
            case 8:
                gSPDisplayList(gMasterDisp++, D_D009A40);
                func_8005ADAC(obj2F4);
                break;
            case 9:
                gSPDisplayList(gMasterDisp++, D_D00B880);
                func_8005ADAC(obj2F4);
                break;
            case 100:
                func_8005F670(&obj2F4->obj.pos);
                obj2F4->unk_0B6 = 1;
                func_8004FEC0(obj2F4);
                break;
            case 200:
                Animation_GetFrameData(&D_6006D64, 0, sp7C);
                Animation_DrawSkeleton(3, D_6006E50, sp7C, func_800352E0, NULL, obj2F4, gCalcMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -400.0f, 1);
                Matrix_Scale(gGfxMatrix, obj2F4->unk_188, obj2F4->unk_188, obj2F4->unk_188, 1);
                func_8005B1E8(obj2F4, 3);
                break;
            default:
                if (gCurrentLevel == LEVEL_FORTUNA) {
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 60.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_6006BE0);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -100.0f, 1);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, 1);
                    func_8005B1E8(obj2F4, 2);
                } else if (gCurrentLevel == LEVEL_KATINA) {
                    switch (obj2F4->unk_0B6) {
                        case 0:
                            gSPDisplayList(gMasterDisp++, D_600EFF0);
                            break;
                        case 1:
                            gSPDisplayList(gMasterDisp++, D_600E050);
                            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
                            func_8005B1E8(obj2F4, 0);
                            break;
                        case 3:
                            gSPDisplayList(gMasterDisp++, D_6001530);
                            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 30.0f, 1);
                            func_80034E64(obj2F4);
                            break;
                    }
                } else if (gCurrentLevel == LEVEL_SECTOR_Z) {
                    gSPDisplayList(gMasterDisp++, D_6004FE0) Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
                    func_8005B1E8(obj2F4, 2);
                } else if (gCurrentLevel == LEVEL_BOLSE) {
                    gSPDisplayList(gMasterDisp++, D_6008770) Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
                    func_8005B1E8(obj2F4, 2);
                    Matrix_Pop(&gGfxMatrix);
                    func_80034E64(obj2F4);
                } else if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
                    Animation_GetFrameData(&D_600C200, obj2F4->unk_04A, obj2F4->unk_18C);
                    Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 10.0f, 1);
                    Animation_DrawSkeleton(0, D_600C2AC, obj2F4->unk_18C, NULL, NULL, obj2F4, &gIdentityMatrix);
                } else if (gCurrentLevel == LEVEL_VERSUS) {
                    gSPDisplayList(gMasterDisp++, D_3015740);
                } else if (gCurrentLevel == LEVEL_TRAINING) {
                    if (obj2F4->unk_0E6 == 0) {
                        gSPDisplayList(gMasterDisp++, D_F00F200);
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
                        func_8005B1E8(obj2F4, 3);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_40068F0);
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
                        func_8005B1E8(obj2F4, 2);
                    }
                }
                break;
        }
    }
}

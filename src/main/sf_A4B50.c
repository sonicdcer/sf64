#include "global.h"

extern UNK_TYPE D_800D2F50; // type unclear. unused?
extern s32 D_800D2F54;      // only gets set to 0. unused?
extern f32 D_800D2F58;
extern f32 D_800D2F5C[3]; // holds float versions of gVolumeSettings. Unused?
extern u8 D_800D2F68;
extern u8 D_800D2F6C[20];
extern Vec3f D_800D2F80;
extern Vec3f D_800D2F8C;
extern EnvSettings* D_800D2F98[21];
extern f32 D_800D2FEC[5];
extern s32 D_800D3000[4][4];
extern Vec3f D_800D3040[6];
extern Vec3f D_800D3088[4];
extern Vec3f D_800D30B8[4];
extern Vec3f D_800D30E8;
extern f32 D_800D30F4[4];
extern f32 D_800D3104[4];
extern f32 D_800D3114[4];
extern f32 D_800D3124[12];
extern f32 D_800D3154[4];
extern s32 D_800D3164[4];
extern u8 D_800D317C;
extern u8 D_800D3180[30];
extern s32 D_800D31A0[4];

s32 Play_CheckMedalStatus(u16 hitCount) {
    if ((gTeamHealth[2] > 0) && (gTeamHealth[3] > 0) && (gTeamHealth[1] > 0) && (gHitCount >= hitCount)) {
        return true;
    }
    return false;
}

void func_800A3FB0(void) {
    D_800D2F5C[2] = 0.0f;
}

s32 Play_GetMaxHealth(void) {
    if (gGoldRingCount[0] >= 3) {
        return 0x17F;
    }
    return 0xFF;
}

void func_800A3FEC(void) {
    Vec3f spC4;
    Vec3f spB8;
    Vtx* spB4;
    u16* spB0;
    s32 i;
    s32 spA8;
    f32* var_s3;
    f32* var_s5;
    f32* var_s4;
    f32* var_s0;
    f32* var_s1;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;

    D_801782FC++;
    switch (gCurrentLevel) {
        case LEVEL_SOLAR:
            if (gFrameCount & 1) {
                spB4 = SEGMENTED_TO_VIRTUAL(D_6001C50);
            } else {
                spB4 = SEGMENTED_TO_VIRTUAL(D_6004500);
            }
            spB0 = SEGMENTED_TO_VIRTUAL(D_6022760);
            spA8 = 15;
            sp90 = 70.0f;
            sp8C = 0.1f;
            sp88 = 2.2f;
            sp84 = 0.5f;
            break;
        case LEVEL_ZONESS:
            if (gFrameCount & 1) {
                spB4 = SEGMENTED_TO_VIRTUAL(D_6009ED0);
            } else {
                spB4 = SEGMENTED_TO_VIRTUAL(D_600C780);
            }
            spB0 = SEGMENTED_TO_VIRTUAL(D_602AC50);
            spA8 = 7;
            sp90 = 40.0f;
            sp8C = 0.2f;
            sp88 = 1.0f;
            sp84 = 2.0f;
            break;
    }
    var_s3 = D_801782CC;
    var_s5 = D_801782D4;
    var_s4 = D_801782DC;
    var_s0 = D_801782E4;
    var_s1 = D_801782EC;
    for (i = 0; i < 17 * 17; i++, var_s3++, var_s5++, var_s4++, var_s0++, var_s1++, spB0++) {
        Math_SmoothStepToF(var_s3, *var_s5, sp8C, *var_s4, 0.0f);
        Math_SmoothStepToF(var_s4, 100.0f, 1.0f, sp84, 0.0f);
        if ((D_801782FC & spA8) == (i & spA8)) {
            *var_s5 = Rand_ZeroOne() * sp90;
            *var_s4 = 0.0f;
        }
        *var_s0 += *var_s1;
        *var_s1 -= 0.5f;
        if (*var_s0 < 0.0f) {
            *var_s1 = *var_s0 = 0.0f;
        }
        spB4[*spB0].n.ob[1] = (s16) *var_s3 + (s16) *var_s0;
        Matrix_RotateZ(gCalcMatrix, *var_s3 * sp88 * M_DTOR, 0);
        spC4.x = 120.0f;
        spC4.y = 0.0f;
        spC4.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spC4, &spB8);
        spB4[*spB0].n.n[0] = spB8.x;
        spB4[*spB0].n.n[1] = spB8.y;
        spB4[*spB0].n.n[2] = spB8.z;
    }
}

void func_800A4460(Player* player) {
    if ((gCurrentLevel == LEVEL_VENOM_2) && (gObjects408[0].obj.status == 2) && (gObjects408[0].unk_04E == 17)) {
        player->unk_060 = __sinf(player->unk_0F4 * 0.7f * M_DTOR) * 0.5f;
        player->unk_088 += 13.0f;
        player->unk_0F4 += 20.0f;
        player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 5.0f;
        player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR) * 10.0f;
        return;
    } else {
        player->unk_060 = __sinf(player->unk_0F4 * 0.7f * M_DTOR) * 0.5f;
        player->unk_088 += 10.0f;
        player->unk_0F4 += 8.0f;
        if ((gLevelType == 0) || ((player->unk_238 == 1) && (D_80177880 == 0))) {
            player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.5f;
            if ((player->wings.rightState <= 1) || (player->wings.leftState <= 1)) {
                player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR) * 5.0f;
            } else {
                player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR) * 1.5f;
            }
        }
    }
}

void func_800A46A0(Player* player) {
    s32 var_v1;
    f32 sp40;

    if ((player->unk_238 == 0) || (D_80177880 == 1)) {
        if (player->wings.rightState <= 1) {
            if (!(gFrameCount & 1) && (D_80177D70[player->unk_1C4] != 0)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + player->unk_2D4.x,
                              (Rand_ZeroOne() * 5.0f) + player->unk_2D4.y, player->unk_2D4.z, 1.0f);
            }
            if (!(gFrameCount & 1) && (Rand_ZeroOne() < 0.5f) && (D_801778E8 == 0)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 5.0f) + player->unk_2D4.x,
                              (Rand_ZeroOne() * 5.0f) + player->unk_2D4.y, player->unk_2D4.z, player->unk_0C0.x,
                              player->unk_0C0.y, player->unk_0C0.z, (Rand_ZeroOne() * 0.02f) + 0.02f,
                              player->unk_1C4 + 1);
            }
        }
        if (player->wings.leftState <= 1) {
            if (!(gFrameCount & 1) && (D_80177D88[player->unk_1C4] != 0)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + player->unk_2C8.x,
                              (Rand_ZeroOne() * 5.0f) + player->unk_2C8.y, player->unk_2C8.z, 1.0f);
            }
            if (!(gFrameCount & 1) && (Rand_ZeroOne() < 0.5f) && (D_801778E8 == 0)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 5.0f) + player->unk_2C8.x,
                              (Rand_ZeroOne() * 5.0f) + player->unk_2C8.y, player->unk_2C8.z, player->unk_0C0.x,
                              player->unk_0C0.y, player->unk_0C0.z, (Rand_ZeroOne() * 0.02f) + 0.02f,
                              player->unk_1C4 + 1);
            }
        }
    }
    var_v1 = 7;
    if (player->health < 0x40) {
        if (player->health > 0x10) {
            var_v1 = 0xF;
        }
        if (player->health > 0x20) {
            var_v1 = 0x1F;
        }
        if (player->health > 0x30) {
            var_v1 = 0x3F;
        }
        if ((player->unk_238 == 0) || (D_80177880 == 1)) {
            sp40 = 0.0f;
            if (player->unk_1CC == 1) {
                sp40 = 30.0f;
            }
            if (!(gFrameCount & var_v1)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + player->unk_074,
                              (Rand_ZeroOne() * 10.0f) + (player->unk_078 + sp40),
                              ((Rand_ZeroOne() - 0.5f) * 10.0f) + player->unk_138, 2.2f);
            }
            if (!((var_v1 >> 2) & gFrameCount) && (Rand_ZeroOne() < 0.5f)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_074,
                              (Rand_ZeroOne() * 10.0f) + (player->unk_078 + sp40),
                              ((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_138, player->unk_0C0.x, player->unk_0C0.y,
                              player->unk_0C0.z, (Rand_ZeroOne() * 0.03f) + 0.04f, player->unk_1C4 + 1);
                if (player->unk_224 == 0) {
                    player->unk_224 = 2;
                }
            }
        } else if (!((var_v1 >> 2) & gFrameCount) && (Rand_ZeroOne() < 0.5f) && (player->unk_224 == 0)) {
            player->unk_224 = 2;
        }
    }
}

void func_800A4C40(Player* player) {
    Vec3f sp54 = D_800D2F80;
    Vec3f sp48 = D_800D2F8C;
    Vec3f sp3C;
    Vec3f sp30;

    if (D_80161A88 == 2) {
        Matrix_Translate(gCalcMatrix, player->unk_074, player->unk_078, player->unk_138, 0);
        Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);
        Matrix_RotateZ(gCalcMatrix, -(player->unk_0F8 * M_DTOR), 1);
        Matrix_MultVec3f(gCalcMatrix, &sp54, &sp3C);
        Matrix_MultVec3f(gCalcMatrix, &sp48, &sp30);
        if (player->unk_078 < (D_80177940 + 100.0f)) {
            if ((sp3C.y < D_80177940 + 80.0f) && !(gFrameCount & 1)) {
                if (D_80161A64) {}
                func_8007ACE0(sp3C.x, D_80177940, sp3C.z, 0.1f, 2.0f, player->unk_0E8 + player->unk_114 + 20.0f);
            }
            if ((sp30.y < D_80177940 + 80.0f) && !(gFrameCount & 1)) {
                func_8007ACE0(sp30.x, D_80177940, sp30.z, 0.1f, 2.0f, player->unk_0E8 + player->unk_114 - 20.0f);
            }
        }
        if ((sp30.y < D_80177940 + 80.0f) || (sp3C.y < D_80177940 + 80.0f)) {
            if (D_80161A64 == 0) {
                D_80161A64 = 1;
                func_80019218(0x1100000B, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        } else {
            D_80161A64 = 0;
            func_8001A55C(&player->unk_460, 0x1100000B);
        }
    }
}

void func_800A4F4C(Object_58* obj58) {
    s32 i;
    u8* ptr = (u8*) obj58;

    for (i = 0; i < sizeof(Object_58); i++, ptr++) {
        *ptr = 0;
    }
}

void func_800A4F7C(void) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 i;
    s32 j;
    s32 var_s4_2;

    switch (D_8017789C) {
        case 0:
            D_80178310 = SEGMENTED_TO_VIRTUAL(D_302DE3C);
            break;
        case 1:
            D_80178310 = SEGMENTED_TO_VIRTUAL(D_302E0E4);
            break;
        case 2:
            if (D_801778AC == 2) {
                D_80178310 = SEGMENTED_TO_VIRTUAL(D_302E378);
            } else {
                D_80178310 = SEGMENTED_TO_VIRTUAL(D_302E170);
            }
            break;
    }
    for (i = 0, j = 0; i < 199; j++) {
        if (D_80178310[j].id <= OBJECT_INVALID) {
            break;
        }
        if (D_80178310[j].id == OBJECT_147) {
            func_800A4F4C(&gObjects58[i]);
            gObjects58[i].obj.status = 2;
            gObjects58[i].obj.id = D_80178310[j].id;
            gObjects58[i].obj.pos.x = D_80178310[j].xPos;
            gObjects58[i].obj.pos.z = D_80178310[j].zPos1;
            gObjects58[i].obj.pos.y = D_80178310[j].yPos;
            Object_Set1C(&gObjects58[i].unk_1C, gObjects58[i].obj.id);
            i++;
        }
    }
    for (i = 5, j = 0; i < 199; j++) {
        if (D_80178310[j].id <= OBJECT_INVALID) {
            break;
        }
        if (D_80178310[j].id != OBJECT_147) {
            func_800A4F4C(&gObjects58[i]);
            gObjects58[i].obj.status = 2;
            gObjects58[i].obj.id = D_80178310[j].id;
            gObjects58[i].obj.pos.x = D_80178310[j].xPos;
            gObjects58[i].obj.pos.z = D_80178310[j].zPos1;
            gObjects58[i].obj.pos.y = D_80178310[j].yPos;
            gObjects58[i].obj.rot.y = D_80178310[j].unk_C;
            Object_Set1C(&gObjects58[i].unk_1C, gObjects58[i].obj.id);
            i++;
        }
    }
}

void func_800A5330(void) {
}

void func_800A5338(void) {
    Object_4C* var_s0_2;
    Object_58* var_s0;
    s32 i;
    s32 j;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_603B074);

    for (j = 0, var_s0 = gObjects58; j < 200; j++) {
        if (D_80178310[j].id <= OBJECT_INVALID) {
            break;
        }
        if (D_80178310[j].id < OBJECT_161) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[j].id;
            var_s0->obj.pos.x = D_80178310[j].xPos;
            var_s0->obj.pos.z = D_80178310[j].zPos1;
            var_s0->obj.pos.y = D_80178310[j].yPos;
            var_s0->obj.rot.y = D_80178310[j].unk_C;
            Object_Set1C(&var_s0->unk_1C, var_s0->obj.id);
            if (var_s0->obj.id == OBJECT_1) {
                var_s0->unk_1C.dList = D_6020760;
            }
            var_s0++;
        }
    }

    for (j = 0, var_s0_2 = gObjects4C; j < ARRAY_COUNT(gObjects4C); j++) {
        if (D_80178310[j].id <= OBJECT_INVALID) {
            break;
        }
        if (D_80178310[j].id == OBJECT_162) {
            Object_4C_Initialize(var_s0_2);
            var_s0_2->obj.status = 1;
            var_s0_2->obj.id = D_80178310[j].id;
            var_s0_2->obj.pos.x = D_80178310[j].xPos;
            var_s0_2->obj.pos.z = D_80178310[j].zPos1;
            var_s0_2->obj.pos.y = D_80178310[j].yPos;
            Object_Set1C(&var_s0_2->unk_1C, var_s0_2->obj.id);
            var_s0_2++;
        }
    }
    i = 0; // fake?
    Object_408_Initialize(&gObjects408[i]);
    gObjects408[i].obj.status = 1;
    gObjects408[i].obj.pos.x = 0.0f;
    gObjects408[i].obj.pos.y = 0.0f;
    gObjects408[i].obj.pos.z = 0.0f;
    gObjects408[i].obj.id = OBJECT_292;
    Object_Set1C(&gObjects408[i].unk_01C, gObjects408[i].obj.id);
}

void func_800A55B0(void) {
    Object_58* var_s0;
    s32 i;
    s32 j;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_6030B14);

    for (j = 0, var_s0 = gObjects58; j < 200; j++) {
        if (D_80178310[j].id <= OBJECT_INVALID) {
            break;
        }
        if (D_80178310[j].id < OBJECT_161) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[j].id;
            var_s0->obj.pos.x = D_80178310[j].xPos;
            var_s0->obj.pos.z = D_80178310[j].zPos1;
            var_s0->obj.pos.y = D_80178310[j].yPos;
            var_s0->obj.rot.y = D_80178310[j].unk_C;
            Object_Set1C(&var_s0->unk_1C, var_s0->obj.id);
            var_s0++;
        }
    }
    i = 0; // fake?
    Object_408_Initialize(&gObjects408[i]);
    gObjects408[i].obj.status = 1;
    gObjects408[i].obj.pos.x = 0.0f;
    gObjects408[i].obj.pos.y = 0.0f;
    gObjects408[i].obj.pos.z = 0.0f;
    gObjects408[i].obj.id = OBJECT_314;
    Object_Set1C(&gObjects408[i].unk_01C, gObjects408[i].obj.id);
    i = 1;
    Object_408_Initialize(&gObjects408[i]);
    gObjects408[i].obj.status = 1;
    gObjects408[i].obj.pos.x = 0.0f;
    gObjects408[i].obj.pos.y = 0.0f;
    gObjects408[i].obj.pos.z = 0.0f;
    gObjects408[i].obj.id = OBJECT_314;
    Object_Set1C(&gObjects408[i].unk_01C, gObjects408[i].obj.id);
    i = 2;
    Object_408_Initialize(&gObjects408[i]);
    gObjects408[i].obj.status = 1;
    gObjects408[i].obj.pos.x = 0.0f;
    gObjects408[i].obj.pos.y = 0.0f;
    gObjects408[i].obj.pos.z = 0.0f;
    gObjects408[i].obj.id = OBJECT_314;
    Object_Set1C(&gObjects408[i].unk_01C, gObjects408[i].obj.id);
}

void func_800A57E0(void) {
    s32 i = 0; // fake?

    Object_408_Initialize(&gObjects408[i]);
    gObjects408[i].obj.status = 1;
    gObjects408[i].obj.pos.x = 0.0f;
    gObjects408[i].obj.pos.y = 0.0f;
    gObjects408[i].obj.pos.z = 0.0f;
    gObjects408[i].obj.id = OBJECT_321;
    Object_Set1C(&gObjects408[i].unk_01C, gObjects408[i].obj.id);
}

void func_800A5844(void) {
    s32 i;

    D_80178410 = 0;
    D_8017827C = 0;
    D_80161684 = 0;
    D_80161A50 = 0;
    gOverlayStage = 0;
    D_8015F924 = D_80177CA0 = 0;
    D_80177CB0 = 0.0f;
    gSavedHitCount = D_80177A80 = D_80177838 = D_80177840 = D_8017829C = 0;
    D_8017782C = 1;
    if (((gCurrentLevel == LEVEL_VENOM_SW) && (D_80161A2E == 2)) || (gCurrentLevel == LEVEL_VENOM_2)) {
        return;
    }
    for (i = 1; i < 4; i++) {
        if (gSavedTeamHealth[i] < 0) {
            if (gSavedTeamHealth[i] == -1) {
                gSavedTeamHealth[i] = 0;
            }
        } else if (gSavedTeamHealth[i] == 0) {
            gSavedTeamHealth[i] = 0xFF;
        }
    }
}

void func_800A594C(void) {
    if (D_801778E8 != 0) {
        switch (D_8017789C) {
            case 0:
                sEnvSettings = SEGMENTED_TO_VIRTUAL(D_302DD70);
                break;
            case 1:
                sEnvSettings = SEGMENTED_TO_VIRTUAL(D_302DDB4);
                break;
            case 2:
                sEnvSettings = SEGMENTED_TO_VIRTUAL(D_302DDF8);
                break;
        }
    } else {
        sEnvSettings = SEGMENTED_TO_VIRTUAL(D_800D2F98[gCurrentLevel]);
    }
    if (D_8017782C == 0) {
        if (gCurrentLevel == LEVEL_SOLAR) {
            func_8001D1C8(0xFF, 1);
            func_80019218(0x4100C023, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_8001A55C(&gPlayer[0].unk_460, 0x3140807E);
        }
    } else if (gCurrentLevel == LEVEL_AQUAS) {
        sEnvSettings = SEGMENTED_TO_VIRTUAL(D_602E584);
    }
    D_80177C90 = sEnvSettings->seqId;
    gLevelType = sEnvSettings->type;
    D_801784AC = sEnvSettings->unk_04;
    gBgColor = sEnvSettings->bgColor;
    gFogRed = sEnvSettings->fogR;
    gFogGreen = sEnvSettings->fogG;
    gFogBlue = sEnvSettings->fogB;
    gFogNear = sEnvSettings->fogN;
    gFogFar = sEnvSettings->fogF;
    gLight1R = gLight2R = D_80161A70 = sEnvSettings->lightR;
    gLight1G = gLight2G = D_80161A74 = sEnvSettings->lightG;
    gLight1B = gLight2B = D_80161A78 = sEnvSettings->lightB;
    gAmbientR = sEnvSettings->ambR;
    gAmbientG = sEnvSettings->ambG;
    gAmbientB = sEnvSettings->ambB;
    D_801784D0 = D_801784F8 = D_80178520 = D_801784B8 = D_801784C4 = sEnvSettings->unk_20.x;
    D_801784D4 = D_801784FC = D_80178524 = D_801784BC = D_801784C8 = sEnvSettings->unk_20.y;
    D_801784D8 = D_80178500 = D_80178528 = D_801784C0 = D_801784CC = sEnvSettings->unk_20.z;
    D_80161A44 = 12800.0f;
    D_80178540 = 40;
    D_80178544 = 40;
    D_80161A3C = 45.0f;
}

// #define ARRAY_ALLOCATE(arr, count) (arr) = Memory_Allocate((count) * sizeof(*array))

void func_800A5D6C(void) {
    u32 i;

    D_80178288 = Memory_Allocate(1000 * sizeof(f32));
    D_80178290 = Memory_Allocate(1000 * sizeof(f32));
    D_80178298 = Memory_Allocate(1000 * sizeof(u32));
    Rand_SetSeed(1, 29000, 9876);
    for (i = 0; i < 1000; i++) {
        D_80178288[i] = (Rand_ZeroOneSeeded() * 480.0f) - 80.0f;
        D_80178290[i] = (Rand_ZeroOneSeeded() * 360.0f) - 60.0f;
        D_80178298[i] = FILL_COLOR(D_800C9C3C[i % ARRAY_COUNT(D_800C9C3C)]);
    }
}

void func_800A5EBC(void) {
    func_800A5D6C();
    D_80177940 = -25000.0f;
    D_80178410 = 600;
    if (gCurrentLevel == LEVEL_AREA_6) {
        D_80178410 = 300;
    }
    if (gCurrentLevel == LEVEL_UNK_15) {
        D_80178410 = 400;
    }
    if (gGameState != GSTATE_PLAY) {
        D_80178410 = 800;
    }
    if (gCurrentLevel == LEVEL_FORTUNA) {
        D_80178410 = 500;
    }
    if (D_801778E8 != 0) {
        D_80178410 = 0;
    }
    if (gCurrentLevel == LEVEL_BOLSE) {
        D_80178410 = 300;
        D_80177940 = -0.0f;
    }
    if (gCurrentLevel == LEVEL_TRAINING) {
        D_80178410 = 800;
        D_80177940 = -0.0f;
    }
}

void func_800A5FA0(Vec3f* arg0, u32 arg1, s32 arg2) {
    if (D_801778E8 == 0) {
        func_80019218(arg1, arg0, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80019218(arg1, arg0, arg2, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_800A6028(Vec3f* arg0, u32 arg1) {
    func_80019218(arg1, arg0, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_800A6070(Vec3f* arg0, u32 arg1) {
    func_80019218(arg1, arg0, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_800A60B8(UnkEntity1C* unkEnt1C) {
    s32 i;
    u8* ptr = (u8*) unkEnt1C;

    for (i = 0; i < sizeof(UnkEntity1C); i++, ptr++) {
        *ptr = 0;
    }
}

void func_800A60E8(UnkEntity30* unkEnt30) {
    s32 i;
    u8* ptr = (u8*) unkEnt30;

    for (i = 0; i < sizeof(UnkEntity30); i++, ptr++) {
        *ptr = 0;
    }
}

void func_800A6118(UnkEntity28* unkEnt28) {
    s32 i;
    u8* ptr = (u8*) unkEnt28;

    for (i = 0; i < sizeof(UnkEntity28); i++, ptr++) {
        *ptr = 0;
    }
}

void func_800A6148(void) {
    s16 i;
    s16 j;

    for (i = 0; i < ARRAY_COUNT(gUnkEntities1C); i++) {
        func_800A60B8(&gUnkEntities1C[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gUnkEntities28); i++) {
        func_800A6118(&gUnkEntities28[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gUnkEntities30); i++) {
        func_800A60E8(&gUnkEntities30[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gObjects80); i++) {
        Object_Kill(&gObjects80[i].obj, &gObjects80[i].sfxPos);
        Object_80_Initialize(&gObjects80[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gObjects4C); i++) {
        Object_4C_Initialize(&gObjects4C[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
        Object_Kill(&gObjects2F4[i].obj, &gObjects2F4[i].sfxPos);
        Object_2F4_Initialize(&gObjects2F4[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gObjects408); i++) {
        Object_Kill(&gObjects408[i].obj, &gObjects408[i].sfxPos);
        Object_408_Initialize(&gObjects408[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        Object_Kill(&gObjects8C[i].obj, &gObjects8C[i].sfxPos);
        Object_8C_Initialize(&gObjects8C[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gObjects6C); i++) {
        Object_Kill(&gObjects6C[i].obj, &gObjects6C[i].sfxPos);
        Object_6C_Initialize(&gObjects6C[i]);
    }
    for (i = 0; i < ARRAY_COUNT(gObjects70); i++) {
        Object_Kill(&gObjects70[i].obj, &gObjects70[i].sfxPos);
        Object_70_Initialize(&gObjects70[i]);
    }
    D_801782B8 = D_801782BC = D_801782C0 = D_801782D0 = D_80178284 = D_8017828C = D_8017812C = D_80177E70 = D_80177E78 =
        D_80177E80 = 0;
    D_80177F10.x = D_80177F10.y = D_80177F10.z = D_80177E88.x = D_80177E88.y = D_80177E88.z = 0.0f;
    for (i = 0; i < ARRAY_COUNT(D_80177E98); i++) {
        D_80177E98[i].x = D_80177E98[i].y = D_80177E98[i].z = 100.0f;
    }
    for (i = 0; i < ARRAY_COUNT(D_80176878); i++) {
        D_80176550[i] = 0;
        for (j = 0; j < ARRAY_COUNT(*D_80176878); j++) {
            D_80176878[i][j] = -5000.0f;
        }
    }
}

void func_800A6590(void) {
    if (D_80178340 != D_80178358) {
        if (D_80178340 < D_80178358) {
            D_80178340 += D_8017835C;
            if (D_80178340 >= D_80178358) {
                D_80178340 = D_80178358;
            }
        } else {
            D_80178340 -= D_8017835C;
            if (D_80178358 >= D_80178340) {
                D_80178340 = D_80178358;
            }
        }
    }
    D_8017835C = 0x10;
    Math_SmoothStepToF(&D_8017836C, 0.0f, 1.0f, 0.04f, 0.001f);
    if (D_80161A60 != 0) {
        D_80161A60--;
        if (D_80161A60 & 2) {
            D_80178348 = 255;
            D_80178350 = 255;
            D_80178354 = 255;
            D_80178340 = 254;
        } else {
            D_80178340 = 0;
        }
    }
}

void func_800A668C(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects70); i++) {
        if (gObjects70[i].obj.status == 0) {
            Object_70_Initialize(&gObjects70[i]);
            gObjects70[i].obj.status = 2;
            gObjects70[i].unk_60 = 0;
            gObjects70[i].obj.pos.x = xPos;
            gObjects70[i].obj.pos.y = yPos;
            gObjects70[i].obj.pos.z = zPos;
            break;
        }
    }
}

void func_800A670C(Object_2F4* obj2F4, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJECT_189;
    obj2F4->unk_0B8 = arg1;
    obj2F4->obj.pos.x = arg2;
    obj2F4->obj.pos.y = arg3;
    obj2F4->obj.pos.z = arg4;
    obj2F4->unk_10C = 0.5f;
    if ((arg1 == 0) || (arg1 == 1)) {
        obj2F4->unk_0E8.y = (Rand_ZeroOne() * 5.0f) + 10.0f;
        obj2F4->unk_0E8.x = 10.0f;

        if (arg1 == 0) {
            obj2F4->unk_0E8.x = -10.0f;
        }
        obj2F4->unk_0BC = 15;
    } else {
        if (gLevelType == 0) {
            obj2F4->unk_0E8.y = (Rand_ZeroOne() * 7.0f) + 7.0f;
            obj2F4->unk_0E8.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
            obj2F4->unk_0E8.z = (Rand_ZeroOne() * 5.0f) + 5.0f;
            if (D_80177880 == 1) {
                obj2F4->unk_0E8.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
            }
            obj2F4->unk_0BC = (s32) (Rand_ZeroOne() * 10.0f) + 10;
        } else {
            obj2F4->unk_0E8.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
            obj2F4->unk_0E8.y = (Rand_ZeroOne() - 0.5f) * 10.0f;
            obj2F4->unk_0E8.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
            obj2F4->unk_0BC = (s32) (Rand_ZeroOne() * 25.0f) + 25;
            obj2F4->unk_10C = 0.0f;
        }
        if (arg1 == 2) {
            obj2F4->unk_110 = (Rand_ZeroOne() * 1.5f) + 0.75f;
        } else if (arg1 == 4) {
            obj2F4->unk_110 = (Rand_ZeroOne() * 0.8f) + 0.3f;
            obj2F4->unk_0BC = (s32) (Rand_ZeroOne() * 50.0f) + 70;
        }
        obj2F4->obj.rot.x = Rand_ZeroOne() * 360.0f;
    }
    Object_Set1C(&obj2F4->unk_01C, obj2F4->obj.id);
}

void func_800A69F8(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    if (D_801778E8 == 0) {
        for (i = ARRAY_COUNT(gObjects2F4) - 1; i >= 10; i--) {
            if (gObjects2F4[i].obj.status == 0) {
                func_800A670C(&gObjects2F4[i], arg0, arg1, arg2, arg3);
                break;
            }
        }
    }
}

// has to be int. s32 and u32 don't match
int func_800A6A74(void) {
    return gGoldRingCount[0] && gGoldRingCount[1] && gGoldRingCount[2] && gGoldRingCount[3];
}

void func_800A6AC0(Player* player, s32 side, s32 damage) {
    if ((player->unk_1CC == 0) && (D_80177AB8[player->unk_1C4] < 1.0f)) {
        if (side == 1) {
            D_80177D40[player->unk_1C4] = 30;
            if (player->wings.rightState == 2) {
                gRightWingHealth[player->unk_1C4] -= damage;
                if (gRightWingHealth[player->unk_1C4] <= 0) {
                    func_800A69F8(1, player->unk_2D4.x, player->unk_2D4.y, player->unk_2D4.z);
                    player->wings.rightState = 1;
                    func_8007D0E0(player->unk_2D4.x, player->unk_2D4.y, player->unk_2D4.z, 2.0f);
                    D_80177D70[player->unk_1C4] = 50;
                    func_800A5FA0(&player->unk_460, 0x0900A02C, player->unk_1C4);
                    if (D_8015F90C == 0) {
                        D_8015F90C = 1000;
                    }
                }
            }
        } else if (side == 2) {
            D_80177D58[player->unk_1C4] = 30;
            if (player->wings.leftState == 2) {
                gLeftWingHealth[player->unk_1C4] -= damage;
                if (gLeftWingHealth[player->unk_1C4] <= 0) {
                    func_800A69F8(0, player->unk_2C8.x, player->unk_2C8.y, player->unk_2C8.z);
                    player->wings.leftState = 1;
                    func_8007D0E0(player->unk_2C8.x, player->unk_2C8.y, player->unk_2C8.z, 2.0f);
                    D_80177D88[player->unk_1C4] = 50;
                    func_800A5FA0(&player->unk_460, 0x0900A02C, player->unk_1C4);
                    if (D_8015F90C == 0) {
                        D_8015F90C = 1000;
                    }
                }
            }
        }
    }
}

void func_800A6CD0(Player* player, s32 arg1, s32 damage) {
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34 = 20.0f;

    player->unk_1A4 = damage;
    player->unk_21C = arg1;
    if ((damage == 39) || (damage == 41) || (damage == 42) || (damage == 43)) {
        damage = 40;
    }
    if (gExpertMode) {
        player->damage = damage * 2;
    } else {
        player->damage = damage;
    }
    if (player->damage != 0) {
        player->unk_220 = 4;
    }
    player->unk_284 = 0;
    player->unk_1F4 = 20;
    if (player->unk_1A4 > 40) {
        sp34 = (player->unk_110 * 0.3f) + 20.0f;
        player->unk_498 = 5;
    } else if ((gCurrentLevel == LEVEL_VENOM_2) && (D_80178284 == 0)) {
        player->unk_498 = 3;
    } else if ((gCurrentLevel == LEVEL_VENOM_1) || (gCurrentLevel == LEVEL_AQUAS)) {
        player->unk_498 = 5;
    } else {
        player->unk_498 = 20;
    }
    if (D_80177AD0[player->unk_1C4] != 0) {
        func_800A5FA0(&player->unk_460, 0x0903900E, player->unk_1C4);
        D_80177AE8[player->unk_1C4] = 5;
        D_80177AB8[player->unk_1C4] = 2.0f;
        player->damage = 0;
    } else {
        if (player->health != 0) {
            if (player->health < 50) {
                func_80019218(0x49008011, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else if (player->health < 100) {
                func_80019218(0x49008010, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        if (damage < 25) {
            func_800A5FA0(&player->unk_460, 0x0903900E, player->unk_1C4);
        } else {
            func_800A5FA0(&player->unk_460, 0x0903A00F, player->unk_1C4);
        }
    }
    Matrix_RotateY(gCalcMatrix, player->unk_114 * M_DTOR, 0);
    Matrix_RotateZ(gCalcMatrix, player->unk_0F8 * M_DTOR, 1);
    sp44.z = 0.0f;
    switch (player->unk_21C) {
        case 0:
            player->unk_224 = 20;
            player->unk_0D8.x = 0.f;
            player->unk_0D8.y = 0.f;
            player->unk_0D8.z = 0.f;
            break;
        case 1:
            sp44.x = -sp34;
            sp44.y = 0.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            player->unk_0D8.x = sp38.x;
            player->unk_0D8.y = sp38.y;
            player->unk_0D8.z = sp38.z;
            func_800A668C(player->unk_2D4.x - player->unk_0C0.x, player->unk_2D4.y,
                          player->unk_2D4.z - player->unk_0C0.z);
            func_800A6AC0(player, 1, 20);
            break;
        case 2:
            sp44.x = sp34;
            sp44.y = 0.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            player->unk_0D8.x = sp38.x;
            player->unk_0D8.y = sp38.y;
            player->unk_0D8.z = sp38.z;
            func_800A668C(player->unk_2C8.x - player->unk_0C0.x, player->unk_2C8.y,
                          player->unk_2C8.z - player->unk_0C0.z);
            func_800A6AC0(player, 2, 20);
            break;
        case 3:
            player->unk_224 = 20;
            func_800A668C(player->unk_2EC.x - player->unk_0C0.x, player->unk_2EC.y,
                          player->unk_2EC.z - player->unk_0C0.z);
            if (player->unk_1CC != 1) {
                sp44.x = 0.0f;
                sp44.y = -sp34;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
                player->unk_0D8.x = sp38.x;
                player->unk_0D8.y = sp38.y;
                player->unk_0D8.z = sp38.z;
            }
            if (Rand_ZeroOne() < 0.5f) {
                func_800A6AC0(player, 1, 15);
            } else {
                func_800A6AC0(player, 2, 15);
            }
            break;
        case 4:
            player->unk_224 = 20;
            func_800A668C(player->unk_2E0.x - player->unk_0C0.x, player->unk_2E0.y,
                          player->unk_2E0.z - player->unk_0C0.z);
            sp44.x = 0.0f;
            sp44.y = sp34;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            player->unk_0D8.x = sp38.x;
            player->unk_0D8.y = sp38.y;
            player->unk_0D8.z = sp38.z;
            if (Rand_ZeroOne() < 0.5f) {
                func_800A6AC0(player, 1, 15);
            } else {
                func_800A6AC0(player, 2, 15);
            }
            break;
    }
    if ((gCurrentLevel == LEVEL_VENOM_1) && (player->unk_1A4 == 42)) {
        if (player->unk_074 > 0.0f) {
            player->unk_0D8.x = -30.0f;
        } else {
            player->unk_0D8.x = 30.0f;
        }
        player->unk_498 = 10;
    }
}

void func_800A729C(Player* player, u32 arg1, f32 arg2, f32 arg3) {
    player->unk_21C = arg1;
    switch (arg1) {
        case 1:
        case 2:
            player->unk_074 = player->unk_08C.y;
            player->unk_0D8.x = 0.0f;
            player->unk_074 += D_800D2FEC[player->unk_21C];
            if (player->unk_1CC == 1) {
                player->unk_074 -= D_800D2FEC[player->unk_21C];
            }
            Math_SmoothStepToF(&player->unk_0D0, 2.0f, 1.0f, 2.0f, 0.00001f);
            break;
        case 3:
        case 4:
            player->unk_07C = player->unk_098;
            player->unk_0D8.z = 0.0f;
            player->unk_07C += D_800D2FEC[player->unk_21C];
            if (player->unk_1CC == 1) {
                player->unk_07C += D_800D2FEC[player->unk_21C];
            }
            player->unk_138 = player->unk_07C;
            Math_SmoothStepToF(&player->unk_0D0, 2.0f, 1.0f, 2.0f, 0.00001f);
            break;
        case 0:
        case 5:
            break;
    }
}

bool func_800A73E4(f32* arg0, s32* arg1, f32 posX, f32 posY, f32 posZ) {
    Vtx* spA4;
    u16* spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    s32 sp8C;
    f32 x0;
    f32 y0;
    f32 z0;
    f32 x1;
    f32 y1;
    f32 z1;
    f32 x2;
    f32 y2;
    f32 z2;
    f32 temp1;
    f32 dz21;
    f32 dx10;
    f32 dx21;
    f32 dy10;
    f32 dy21;
    f32 dz10;
    f32 sp48;
    f32 crz;
    f32 cry;
    f32 crx;

    switch (gCurrentLevel) {
        case LEVEL_SOLAR:
            spA4 = SEGMENTED_TO_VIRTUAL(D_6001C50);
            spA0 = SEGMENTED_TO_VIRTUAL(D_6022760);
            break;
        case LEVEL_ZONESS:
            spA4 = SEGMENTED_TO_VIRTUAL(D_6009ED0);
            spA0 = SEGMENTED_TO_VIRTUAL(D_602AC50);
            break;
        default:
            return false;
    }

    sp9C = (s32) ((posX + 2400.0f) / 300.0f);
    sp98 = (s32) ((posZ + D_80177D20 + 1500.0f + 2400.0f) / 300.0f);
    if ((sp9C < 0) || (sp9C >= 16) || (sp98 < 0) || (sp98 >= 16)) {
        return 0;
    }
    sp90 = Math_ModF(posX + 2400.0f, 300.0f);
    sp94 = Math_ModF(posZ + D_80177D20 + 1500.0f + 2400.0f, 300.0f);
    sp8C = (sp98 * 17) + sp9C;
    x0 = spA4[spA0[sp8C]].n.ob[0] * 3.0f;
    y0 = spA4[spA0[sp8C]].n.ob[1] * 2.0f;
    z0 = spA4[spA0[sp8C]].n.ob[2] * 3.0f;
    if (sp90 < sp94) {
        x1 = spA4[spA0[sp8C + 18]].n.ob[0] * 3.0f;
        y1 = spA4[spA0[sp8C + 18]].n.ob[1] * 2.0f;
        z1 = spA4[spA0[sp8C + 18]].n.ob[2] * 3.0f;
        x2 = spA4[spA0[sp8C + 17]].n.ob[0] * 3.0f;
        y2 = spA4[spA0[sp8C + 17]].n.ob[1] * 2.0f;
        z2 = spA4[spA0[sp8C + 17]].n.ob[2] * 3.0f;
    } else {
        x1 = spA4[spA0[sp8C + 1]].n.ob[0] * 3.0f;
        y1 = spA4[spA0[sp8C + 1]].n.ob[1] * 2.0f;
        z1 = spA4[spA0[sp8C + 1]].n.ob[2] * 3.0f;
        x2 = spA4[spA0[sp8C + 18]].n.ob[0] * 3.0f;
        y2 = spA4[spA0[sp8C + 18]].n.ob[1] * 2.0f;
        z2 = spA4[spA0[sp8C + 18]].n.ob[2] * 3.0f;
    }
    dx10 = x1 - x0;
    dx21 = x2 - x1;
    dy10 = y1 - y0;

    dy21 = y2 - y1;
    dz10 = z1 - z0;
    dz21 = z2 - z1;

    crx = (dy10 * dz21) - (dz10 * dy21);
    cry = (dz10 * dx21) - (dx10 * dz21);
    crz = (dx10 * dy21) - (dy10 * dx21);

    temp1 = -crx * x0 - cry * y0 - crz * z0;
    sp48 = (-temp1 - crx * posX - crz * (posZ + D_80177D20 + 1500.0f)) / cry;
    if (posY < sp48) {
        *arg0 = sp48;
        *arg1 = sp8C;
        return true;
    }
    return false;
}

s32 func_800A78C4(f32* hitbox, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    if ((fabsf(hitbox[0] + arg3 - arg6) < (hitbox[1] + D_8017853C)) &&
        (fabsf(hitbox[4] + arg1 - arg4) < (hitbox[5] + D_8017853C)) &&
        (fabsf(hitbox[2] + arg2 - arg5) < (hitbox[3] + D_8017853C))) {
        return true;
    }
    return false;
}

s32 func_800A7974(Player* player, f32* hitboxData, s32* index, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot,
                  f32 zRot, f32 arg9, f32 argA, f32 argB) {
    s32 spB4;
    s32 i;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fa0;
    f32 spA0;
    Vec3f sp94;
    Vec3f sp88;

    spB4 = *hitboxData++;
    if (spB4 != 0) {
        for (i = 0; i < spB4; i++, hitboxData += 6) {
            spA0 = 0;
            if (hitboxData[0] == 200000.0f) {
                Matrix_RotateZ(gCalcMatrix, -hitboxData[3] * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -hitboxData[1] * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -hitboxData[2] * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, -zRot * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -xRot * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -yRot * M_DTOR, 1);
                hitboxData += 4;
                spA0 = 1;
            } else {
                if (hitboxData[0] >= 300000.0f) {
                    hitboxData++;
                }
                Matrix_RotateZ(gCalcMatrix, -zRot * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -xRot * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -yRot * M_DTOR, 1);
            }
            if (!((arg9 == 0) && (argA == 0) && (argB == 0))) {
                Matrix_RotateZ(gCalcMatrix, -argB * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -arg9 * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -argA * M_DTOR, 1);
            }
            if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                var_fv0 = player->unk_2E0.x;
                var_fv1 = player->unk_2E0.y;
                var_fa0 = player->unk_2E0.z;
            } else {
                sp94.x = player->unk_2E0.x - xPos;
                sp94.y = player->unk_2E0.y - yPos;
                sp94.z = player->unk_2E0.z - zPos;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                var_fv0 = sp88.x + xPos;
                var_fv1 = sp88.y + yPos;
                var_fa0 = sp88.z + zPos;
            }
            if (func_800A78C4(hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                *index = i + 1;
                if (hitboxData[-1] == 300000.0f) {
                    return -1;
                }
                if (hitboxData[-1] == 400000.0f) {
                    return -2;
                }
                return 3;
            }
            if (hitboxData[-1] < 300000.0f) {
                if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                    var_fv0 = player->unk_2EC.x;
                    var_fv1 = player->unk_2EC.y;
                    var_fa0 = player->unk_2EC.z;
                } else {
                    sp94.x = player->unk_2EC.x - xPos;
                    sp94.y = player->unk_2EC.y - yPos;
                    sp94.z = player->unk_2EC.z - zPos;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                    var_fv0 = sp88.x + xPos;
                    var_fv1 = sp88.y + yPos;
                    var_fa0 = sp88.z + zPos;
                }
                if (func_800A78C4(hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                    *index = i + 1;
                    return 4;
                }
                if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                    var_fv0 = player->unk_2D4.x;
                    var_fv1 = player->unk_2D4.y;
                    var_fa0 = player->unk_2D4.z;
                } else {
                    sp94.x = player->unk_2D4.x - xPos;
                    sp94.y = player->unk_2D4.y - yPos;
                    sp94.z = player->unk_2D4.z - zPos;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                    var_fv0 = sp88.x + xPos;
                    var_fv1 = sp88.y + yPos;
                    var_fa0 = sp88.z + zPos;
                }
                if (func_800A78C4(hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                    *index = i + 1;
                    return 1;
                }
                if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                    var_fv0 = player->unk_2C8.x;
                    var_fv1 = player->unk_2C8.y;
                    var_fa0 = player->unk_2C8.z;
                } else {
                    sp94.x = player->unk_2C8.x - xPos;
                    sp94.y = player->unk_2C8.y - yPos;
                    sp94.z = player->unk_2C8.z - zPos;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                    var_fv0 = sp88.x + xPos;
                    var_fv1 = sp88.y + yPos;
                    var_fa0 = sp88.z + zPos;
                }
                if (func_800A78C4(hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                    *index = i + 1;
                    return 2;
                }
            }
        }
    }
    return 0;
}

bool func_800A8054(s32 objId, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, Vec3f* arg7, Vec3f* arg8) {
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    f32 pad1;
    f32 sp34;
    s32 var_s0;
    s32 var_v0;

    sp54.x = arg4;
    sp54.y = arg5;
    sp54.z = arg6;
    sp48.x = arg1;
    sp48.y = arg2;
    sp48.z = arg3;

    var_v0 = false;
    switch (objId) {
        case OBJECT_180:
            var_s0 = 0;
            break;
        case OBJECT_4:
        case OBJECT_5:
            var_s0 = 1;
            var_v0 = true;
            break;
        case OBJECT_149:
            var_s0 = 5;
            break;
        case OBJECT_150:
            var_s0 = 6;
            break;
        case OBJECT_308:
            var_s0 = 4;
            break;
        case OBJECT_312:
            var_s0 = 9;
            break;
        case OBJECT_309:
            var_s0 = 7;
            break;
        case OBJECT_UNK_1000:
            var_s0 = 3;
            break;
        case OBJECT_313:
            var_s0 = 8;
            break;
        case OBJECT_39:
            var_s0 = 1;
            break;
        case OBJECT_120:
            var_s0 = 18;
            var_v0 = true;
            break;
        case OBJECT_124:
            var_s0 = 15;
            var_v0 = true;
            break;
        case OBJECT_126:
            var_s0 = 16;
            var_v0 = true;
            break;
        case OBJECT_47:
            var_s0 = 7;
            var_v0 = true;
            break;
        case OBJECT_2:
            var_s0 = 2;
            var_v0 = true;
            break;
        case OBJECT_3:
        case OBJECT_69:
            var_s0 = 3;
            var_v0 = true;
            break;
        case OBJECT_143:
            var_s0 = 17;
            var_v0 = true;
            break;
        case OBJECT_140:
            var_s0 = 4;
            var_v0 = true;
            break;
        case OBJECT_141:
            var_s0 = 6;
            var_v0 = true;
            break;
        case OBJECT_117:
            var_s0 = 14;
            var_v0 = true;
            break;
        case OBJECT_70:
            var_s0 = 8;
            var_v0 = true;
            break;
        case OBJECT_72:
            var_s0 = 9;
            var_v0 = true;
            break;
        case OBJECT_71:
            var_s0 = 10;
            var_v0 = true;
            break;
        case OBJECT_73:
            var_s0 = 11;
            var_v0 = true;
            break;
        case OBJECT_67:
            var_s0 = 12;
            var_v0 = true;
            break;
        case OBJECT_74:
            var_s0 = 13;
            var_v0 = true;
            break;
        case OBJECT_118:
        case OBJECT_119:
        case OBJECT_121:
        case OBJECT_122:
        case OBJECT_123:
        case OBJECT_125:
        case OBJECT_127:
        case OBJECT_128:
        case OBJECT_129:
        case OBJECT_130:
        case OBJECT_131:
        case OBJECT_132:
        case OBJECT_133:
        case OBJECT_134:
        case OBJECT_135:
        case OBJECT_136:
        case OBJECT_137:
        case OBJECT_138:
        case OBJECT_139:
        case OBJECT_142:
        case OBJECT_144:
        case OBJECT_145:
        case OBJECT_146:
        case OBJECT_147:
        case OBJECT_148:
        case OBJECT_40:
        case OBJECT_41:
        case OBJECT_42:
        case OBJECT_43:
        case OBJECT_44:
        case OBJECT_45:
        case OBJECT_46:
        case OBJECT_48:
        case OBJECT_49:
        case OBJECT_50:
        case OBJECT_51:
        case OBJECT_52:
        case OBJECT_53:
        case OBJECT_54:
        case OBJECT_55:
        case OBJECT_56:
        case OBJECT_57:
        case OBJECT_58:
        case OBJECT_59:
        case OBJECT_60:
        case OBJECT_61:
        case OBJECT_62:
        case OBJECT_63:
        case OBJECT_64:
        case OBJECT_65:
        case OBJECT_66:
        case OBJECT_68:
        default:
            var_s0 = 0;
            var_v0 = true;
            break;
    }

    if (!var_v0) {
        if (func_800998FC(&sp54, &sp48, arg8, var_s0, &sp3C, &sp34) > 0) {
            return true;
        }
    } else {
        if (func_800A3690(&sp54, &sp48, var_s0, arg7)) {
            return true;
        }
    }
    return false;
}

// arg5 could be Vec3f (not Vec3f*)
s32 func_800A8304(Player* player, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    Vec3f sp84;
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;

    sp84.x = arg2;
    sp84.y = arg3;
    sp84.z = arg4;
    Matrix_RotateY(gCalcMatrix, -arg6 * M_DTOR, 0);
    sp78.x = player->unk_0C0.x;
    sp78.y = player->unk_0C0.y;
    sp78.z = player->unk_0C0.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp54);
    if ((player->unk_1CC == 1) || (player->unk_1CC == 3)) {
        sp78.x = player->unk_074 - sp84.x;
        sp78.y = player->unk_078 - sp84.y;
        sp78.z = player->unk_138 - sp84.z;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
        if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60,
                          &sp54)) {
            player->unk_078 = sp60.y;
            player->unk_104 = Math_RadToDeg(sp60.x);
            player->unk_10C = Math_RadToDeg(sp60.z);
            player->unk_0C0.y = 0.0f;
            if (player->unk_1CC == 3) {
                player->unk_0C0.y = -5.0f;
            }
            player->unk_1D4 = 1;
            return 5;
        }
        return 0;
    }
    sp78.x = player->unk_2E0.x - sp84.x;
    sp78.y = player->unk_2E0.y - sp84.y;
    sp78.z = player->unk_2E0.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 3;
    }
    sp78.x = player->unk_2EC.x - sp84.x;
    sp78.y = player->unk_2EC.y - sp84.y;
    sp78.z = player->unk_2EC.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 4;
    }
    sp78.x = player->unk_2D4.x - sp84.x;
    sp78.y = player->unk_2D4.y - sp84.y;
    sp78.z = player->unk_2D4.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 1;
    }
    sp78.x = player->unk_2C8.x - sp84.x;
    sp78.y = player->unk_2C8.y - sp84.y;
    sp78.z = player->unk_2C8.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 2;
    }
    return 0;
}

void func_800A86E4(Player* player) {
    s32 i;
    Object_6C* obj6C;
    s32 sp6C;

    for (i = 0, obj6C = gObjects6C; i < ARRAY_COUNT(gObjects6C); i++, obj6C++) {
        if ((obj6C->obj.status == 2) && ((player->unk_1C8 == 3) || (player->unk_1C8 == 5)) && (obj6C->unk_4A == 0) &&
            func_800A7974(player, obj6C->unk_1C.hitbox, &sp6C, obj6C->obj.pos.x, obj6C->obj.pos.y, obj6C->obj.pos.z,
                          0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)) {
            obj6C->unk_4C = 1;
            obj6C->unk_4E = D_801778A0;
        }
    }
}

void func_800A8804(Player* playerA, Player* playerB) {
    if (playerA->unk_498 == 0) {
        func_800A6CD0(playerA, 0, D_800D3000[playerA->unk_1CC][playerB->unk_1CC]);
        playerA->unk_288 = playerB->unk_1C4 + 1;
        playerB->unk_288 = playerA->unk_1C4 + 1;
    }
}

void func_800A887C(Player* player) {
    Vec3f sp3C;

    Matrix_Translate(gCalcMatrix, player->unk_074, player->unk_078, player->unk_138, 0);
    if (player->unk_1CC == 1) {
        player->unk_10C = 0.0f;
        player->unk_104 = 0.0f;

        sp3C.x = -40.0f;
        sp3C.y = 40.0f;
        sp3C.z = 0.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2C8);
        sp3C.x = 40.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2D4);
        sp3C.x = 0.0f;
        sp3C.z = -40.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2E0);
        sp3C.z = 40.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2EC);
    }
    if ((player->unk_1CC == 3) || (player->unk_1CC == 4)) {
        sp3C.x = 20.0f;
        sp3C.y = 20.0f;
        sp3C.z = 0.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2C8);
        sp3C.x = -20.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2D4);
        sp3C.x = 0.0f;
        sp3C.z = -20.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2E0);
        sp3C.z = 20.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2EC);
    }
    if ((player->unk_1CC == 0) || (player->unk_1CC == 2)) {
        Matrix_RotateY(gCalcMatrix, (player->unk_114 + 180.0f) * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, -(player->unk_0F8 * M_DTOR), 1);
        sp3C.y = 0.0f;
        sp3C.z = 0.0f;
        if (player->wings.leftState == 2) {
            sp3C.x = 40.0f;
        } else {
            sp3C.y = -10.0f;
            sp3C.x = 30.0f;
        }
        if (player->unk_1CC == 2) {
            sp3C.x = 24.0f;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2C8);
        if (player->wings.rightState == 2) {
            sp3C.x = -40.0f;
        } else {
            sp3C.x = -30.0f;
        }
        if (player->unk_1CC == 2) {
            sp3C.x = -24.0f;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2D4);
        sp3C.x = 0.0f;
        sp3C.y = 24.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2E0);
        sp3C.y = -24.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &player->unk_2EC);
    }
}

#ifdef NON_MATCHING
void func_800A8BA4(Player* player) {
    s32 i;
    s32 j;
    s32 temp_v0;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    Vec3f spfD4;
    Vec3f spC8;
    Vec3f spBC;
    f32 padB8;          // B8
    Object_2F4* obj2F4; // B4
    f32 padB0;          // B0
    Object_408* obj408; // AC
    Object_4C* obj4C;   // A8
    Object_58* obj58;   // A4
    Object_80* obj80;   // A0
    Player* opponent;   // 9C
    s32 sp98;
    f32 sp94;
    s32 sp90;
    f32 sp8C;

    func_800A887C(player);
    if (D_801784AC == 4) {
        switch (player->unk_1CC) {
            case 1:
                func_800444BC(player);
                break;
            case 2:
                if (func_E6A810_801B6AEC(player->unk_074, player->unk_078 - 12.0f, player->unk_138 + player->unk_144) !=
                    0) {
                    func_E6A810_801B6E20(player->unk_074, player->unk_138 + player->unk_144, &spE8, &spE0, &spE4);
                    player->unk_078 = spE0 + 10.0f;
                }
                break;
        }
    } else if (player->unk_1CC == 0) {
        if ((player->unk_2D4.y < (D_80177940 + 13.0f)) && (player->unk_1C8 != 4)) {
            if (D_80161A88 == 2) {
                player->unk_1F4 = 7;
                player->unk_0E4 = (player->unk_0D0 + player->unk_110) * 0.5f;
            } else {
                func_800A6CD0(player, 1, 0x15);
            }
            if (gCurrentLevel == LEVEL_FORTUNA) {
                func_8007BC7C(player->unk_2D4.x, player->unk_2D4.y, player->unk_2D4.z, 6.0f);
                func_8007BC7C(player->unk_2D4.x, player->unk_2D4.y, player->unk_2D4.z, 6.0f);
                func_8007BC7C(player->unk_2D4.x, player->unk_2D4.y, player->unk_2D4.z, 6.0f);
            }
        }
        if ((player->unk_2C8.y < (D_80177940 + 13.0f)) && (player->unk_1C8 != 4)) {
            if (D_80161A88 == 2) {
                player->unk_1F4 = 7;
                player->unk_0E4 = (player->unk_0D0 + player->unk_110) * 0.5f;
            } else {
                func_800A6CD0(player, 2, 0x15);
            }
            if (gCurrentLevel == LEVEL_FORTUNA) {
                func_8007BC7C(player->unk_2C8.x, player->unk_2C8.y, player->unk_2C8.z, 6.0f);
                func_8007BC7C(player->unk_2C8.x, player->unk_2C8.y, player->unk_2C8.z, 6.0f);
                func_8007BC7C(player->unk_2C8.x, player->unk_2C8.y, player->unk_2C8.z, 6.0f);
            }
        }
    } else if ((player->unk_1CC == 1) && (D_801778E8 == 0)) {
        func_800444BC(player);
    }

    if ((player->unk_498 == 0) || ((gCamCount != 1) && (player->unk_1CC != 0))) {
        if (D_80177880 == 1) {
            sp8C = 1100.0f;
            if ((gCurrentLevel == LEVEL_SECTOR_Y) || (gCurrentLevel == LEVEL_VENOM_2)) {
                sp8C = 4000.0f;
            }
            for (i = 0, obj58 = gObjects58; i < 200; i++, obj58++) {
                if (obj58->obj.status == 2) {
                    spC8.x = obj58->obj.pos.x - player->unk_074;
                    spC8.z = obj58->obj.pos.z - player->unk_138;
                    if (sqrtf(SQ(spC8.x) + SQ(spC8.z)) < sp8C) {
                        if ((obj58->obj.id == OBJECT_117) || (obj58->obj.id == OBJECT_143) ||
                            (obj58->obj.id == OBJECT_141) || (obj58->obj.id == OBJECT_149) ||
                            (obj58->obj.id == OBJECT_150) || (obj58->obj.id == OBJECT_148) ||
                            (obj58->obj.id == OBJECT_160) || (obj58->obj.id == OBJECT_1) ||
                            (obj58->obj.id == OBJECT_3) || (obj58->obj.id == OBJECT_140)) {
                            temp_v0 =
                                func_800A8304(player, obj58->obj.id, obj58->obj.pos.x, obj58->obj.pos.y,
                                              obj58->obj.pos.z, obj58->obj.rot.x, obj58->obj.rot.y, obj58->obj.rot.z);
                            if (temp_v0 != 0) {
                                if ((player->unk_1CC == 1) || (player->unk_1CC == 3)) {
                                    func_800A729C(player, temp_v0, obj58->obj.pos.x, obj58->obj.pos.z);
                                } else {
                                    func_800A6CD0(player, temp_v0, obj58->unk_1C.damage);
                                }
                            }
                            if ((gCurrentLevel == LEVEL_FORTUNA) || (gCurrentLevel == LEVEL_VENOM_SW)) {
                                temp_v0 = func_800A7974(player, obj58->unk_1C.hitbox, &sp98, obj58->obj.pos.x,
                                                        obj58->obj.pos.y, obj58->obj.pos.z, obj58->obj.rot.x,
                                                        obj58->obj.rot.y, obj58->obj.rot.z, 0.0f, 0.0f, 0.0f);
                                if ((temp_v0 != 0) && (temp_v0 < 0)) {
                                    if (player->unk_22C == 0) {
                                        func_8007A6F0(&obj58->obj.pos, 0x19000001);
                                    }
                                    player->unk_22C += 2;
                                    if (player->unk_22C >= 4) {
                                        player->unk_22C = 4;
                                    }
                                }
                            }
                        } else {
                            temp_v0 = func_800A7974(player, obj58->unk_1C.hitbox, &sp98, obj58->obj.pos.x,
                                                    obj58->obj.pos.y, obj58->obj.pos.z, obj58->obj.rot.x,
                                                    obj58->obj.rot.y, obj58->obj.rot.z, 0.0f, 0.0f, 0.0f);
                            if (temp_v0 != 0) {
                                if (temp_v0 < 0) {
                                    if (player->unk_22C == 0) {
                                        func_8007A6F0(&obj58->obj.pos, 0x19000001);
                                    }
                                    player->unk_22C += 2;
                                    if (player->unk_22C >= 4) {
                                        player->unk_22C = 4;
                                    }
                                } else if ((player->unk_1CC == 1) || (player->unk_1CC == 3)) {
                                    func_800A729C(player, temp_v0, obj58->obj.pos.x, obj58->obj.pos.z);
                                } else {
                                    func_800A6CD0(player, temp_v0, obj58->unk_1C.damage);
                                    if (obj58->obj.id == OBJECT_131) {
                                        Matrix_RotateY(gCalcMatrix, (obj58->obj.rot.y + 180.0f) * M_DTOR, 0);
                                        Matrix_MultVec3f(gCalcMatrix, &D_800D3040[sp98 - 1], &spBC);
                                        player->unk_0D8.x = spBC.x;
                                        player->unk_0D8.y = spBC.y;
                                        player->unk_0D8.z = spBC.z;

                                        player->unk_0E8 = player->unk_0E4 = 0.0f;
                                        player->unk_074 = player->unk_08C.y;
                                        player->unk_078 = player->unk_08C.z;
                                        player->unk_07C = player->unk_098;
                                        player->unk_114 = obj58->obj.rot.y + 180.0f;
                                        player->unk_498 = 5;
                                    }
                                    if ((obj58->obj.id == OBJECT_135) || (obj58->obj.id == OBJECT_136)) {
                                        if (obj58->obj.id == OBJECT_135) {
                                            Matrix_RotateY(gCalcMatrix, (obj58->obj.rot.y + 180.0f) * M_DTOR, 0);
                                            Matrix_MultVec3f(gCalcMatrix, &D_800D3088[sp98 - 1], &spBC);
                                        } else {
                                            Matrix_RotateY(gCalcMatrix, obj58->obj.rot.y * M_DTOR, 0);
                                            Matrix_MultVec3f(gCalcMatrix, &D_800D30B8[sp98 - 1], &spBC);
                                        }
                                        player->unk_0D8.x = spBC.x;
                                        player->unk_0D8.y = spBC.y;
                                        player->unk_0D8.z = spBC.z;
                                        player->unk_0E8 = 0.0f;
                                        player->unk_0E4 = 0.0f;
                                        player->unk_074 = player->unk_08C.y;
                                        player->unk_078 = player->unk_08C.z;
                                        player->unk_07C = player->unk_098;
                                        if (obj58->obj.id == OBJECT_135) {
                                            player->unk_114 = obj58->obj.rot.y + 180.0f;
                                        } else {
                                            player->unk_114 = obj58->obj.rot.y;
                                        }
                                        player->unk_498 = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            for (i = 0, obj80 = gObjects80; i < ARRAY_COUNT(gObjects80); i++, obj80++) {
                if ((obj80->obj.status == 2) && (obj80->obj.id != 0x3A) && (obj80->obj.id != 0x69) &&
                    (obj80->obj.id != 0x3B) && (obj80->obj.id != 0x3C) && (obj80->obj.id != 0x3D) &&
                    (obj80->obj.id != 0x42) && (obj80->obj.id != 0x43) && (obj80->obj.id != 0x46) &&
                    (obj80->obj.id != 0x48) && (obj80->obj.id != 0x47) && (obj80->obj.id != 0x49) &&
                    (obj80->obj.id != 0x4A) && (obj80->obj.id != 0x45) &&
                    ((player->unk_138 - 2000.0f) < obj80->obj.pos.z)) {
                    if ((obj80->obj.id == OBJECT_1) || (obj80->obj.id == OBJECT_4) || (obj80->obj.id == OBJECT_5) ||
                        (obj80->obj.id == OBJECT_47) || (obj80->obj.id == OBJECT_117) ||
                        (obj80->obj.id == OBJECT_120) || (obj80->obj.id == OBJECT_124) ||
                        (obj80->obj.id == OBJECT_126) || (obj80->obj.id == OBJECT_2) || (obj80->obj.id == OBJECT_3)) {
                        spC8.x = obj80->obj.pos.x - player->unk_074;
                        spC8.z = obj80->obj.pos.z - player->unk_138;
                        if (sqrtf(SQ(spC8.x) + SQ(spC8.z)) < 100.0f) {
                            temp_v0 =
                                func_800A8304(player, obj80->obj.id, obj80->obj.pos.x, obj80->obj.pos.y,
                                              obj80->obj.pos.z, obj80->obj.rot.x, obj80->obj.rot.y, obj80->obj.rot.z);
                            if (temp_v0 != 0) {
                                func_800A6CD0(player, temp_v0, obj80->unk_1C.damage);
                            }
                        }
                    } else {
                        padB0 = obj80->obj.rot.y;
                        if ((ObjectFunc) func_80066EA8 == obj80->unk_1C.action) {
                            padB0 = 0.0f;
                        }
                        temp_v0 = func_800A7974(player, obj80->unk_1C.hitbox, &sp98, obj80->obj.pos.x, obj80->obj.pos.y,
                                                obj80->obj.pos.z, obj80->obj.rot.x, padB0, obj80->obj.rot.z, 0.0f, 0.0f,
                                                0.0f);
                        if (temp_v0 != 0) {
                            if (temp_v0 < 0) {
                                if (temp_v0 == -1) {
                                    D_80178540 = 40;
                                    D_80178570 = 20;
                                    D_80178574 = 20;
                                    D_80178578 = 20;
                                    player->unk_23C = 0x50;
                                }
                                if (player->unk_22C == 0) {
                                    func_80019218(0x19000001, &obj80->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                }
                                player->unk_22C += 2;
                                if (player->unk_22C >= 4) {
                                    player->unk_22C = 4;
                                }
                            } else if (obj80->obj.id == OBJECT_54) {
                                if (player->unk_22C == 0) {
                                    func_80019218(0x19832019, &obj80->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                }
                                player->unk_22C += 2;
                                if (player->unk_22C >= 4) {
                                    player->unk_22C = 4;
                                }
                            } else {
                                func_800A6CD0(player, temp_v0, obj80->unk_1C.damage);
                                if ((obj80->obj.id == OBJECT_48) || (obj80->obj.id == OBJECT_55) ||
                                    (obj80->obj.id == OBJECT_49)) {
                                    Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);
                                    spC8.x = -(player->unk_0D0 + player->unk_110) * 0.7f;
                                    spC8.y = 0.0f;
                                    spC8.z = 0.0f;

                                    Matrix_MultVec3f(gCalcMatrix, &spC8, &spBC);
                                    player->unk_0D8.x = spBC.x;
                                    player->unk_0D8.y = spBC.y;
                                    player->unk_074 = player->unk_08C.y;
                                    player->unk_498 = 5;
                                } else if (obj80->obj.id == OBJECT_50) {
                                    if (player->unk_074 < obj80->obj.pos.x) {
                                        player->unk_0D8.x = -30.0f;
                                        player->unk_0E8 = 45.0f;
                                    } else {
                                        player->unk_0D8.x = 30.0f;
                                        player->unk_0E8 = -45.0f;
                                    }
                                    player->unk_0D8.y = 0.0f;
                                    player->unk_074 = player->unk_08C.y;
                                    player->unk_498 = 5;
                                } else if (obj80->obj.id == OBJECT_131) {
                                    Matrix_RotateY(gCalcMatrix, (obj80->obj.rot.y + 180.0f) * M_DTOR, 0);
                                    Matrix_RotateZ(gCalcMatrix, -obj80->obj.rot.z * M_DTOR, 1);
                                    Matrix_MultVec3f(gCalcMatrix, &D_800D3040[sp98 - 1], &spBC);
                                    player->unk_0D8.x = spBC.x;
                                    player->unk_0D8.y = spBC.y;
                                    player->unk_0E8 = 0.0f;
                                    player->unk_0E4 = 0.0f;
                                    player->unk_498 = 5;
                                    player->unk_074 = player->unk_08C.y;
                                    player->unk_078 = player->unk_08C.z;
                                }
                            }
                        }
                    }
                }
            }
        }
        for (i = 0, obj408 = gObjects408; i < ARRAY_COUNT(gObjects408); i++, obj408++) {
            if (obj408->obj.status == 2) {
                if ((obj408->obj.id == OBJECT_312) || (obj408->obj.id == OBJECT_308) ||
                    (obj408->obj.id == OBJECT_313) || (obj408->obj.id == OBJECT_309)) {
                    temp_v0 = func_800A8304(player, obj408->obj.id, obj408->obj.pos.x, obj408->obj.pos.y,
                                            obj408->obj.pos.z, obj408->obj.rot.x, obj408->obj.rot.y, obj408->obj.rot.z);
                    if (temp_v0 != 0) {
                        func_800A6CD0(player, temp_v0, obj408->unk_01C.damage);
                        break;
                    }
                } else if (obj408->obj.id == OBJECT_310) {
                    spfD4.x = fabsf(obj408->obj.pos.x - player->unk_074) * (5.0f / 6.0f);
                    spfD4.y = fabsf(obj408->obj.pos.y - player->unk_078) * 2.0f;
                    spfD4.z = fabsf(obj408->obj.pos.z - player->unk_138) * (5.0f / 6.0f);
                    if (sqrtf(VEC3F_SQ(spfD4)) < 1500.0f) {
                        func_800A6CD0(player, 0, obj408->unk_01C.damage);
                        player->unk_110 = 0.0f;
                        player->unk_498 = 5;
                        player->unk_0D8.y = 30.0f;
                        obj408->unk_062 = 1;
                        func_8007BFFC(((Rand_ZeroOne() - 0.5f) * 10.0f) + player->unk_074,
                                      (Rand_ZeroOne() * 10.0f) + player->unk_078,
                                      ((Rand_ZeroOne() - 0.5f) * 10.0f) + player->unk_138, 0.0f, 15.0f, 0.0f, 2.0f, 5);
                        for (j = 0; j < 10; j++) {
                            func_8007C484(((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_074,
                                          (Rand_ZeroOne() * 10.0f) + player->unk_078,
                                          ((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_138, player->unk_0C0.x,
                                          player->unk_0C0.y + 20.0f, player->unk_0C0.z, (Rand_ZeroOne() * 0.1f) + 0.1f,
                                          player->unk_1C4 + 11);
                        }
                    }
                } else {
                    if (obj408->obj.id == OBJECT_316) {
                        spfD4.x = fabsf(obj408->obj.pos.x - player->unk_074);
                        spfD4.y = fabsf((obj408->obj.pos.y - 300.0f) - player->unk_078) * 7.42f;
                        spfD4.z = fabsf(obj408->obj.pos.z - player->unk_138);
                        if (sqrtf(VEC3F_SQ(spfD4)) < 2700.0f) {
                            func_800A6CD0(player, 3, obj408->unk_01C.damage);
                        }
                    }
                    temp_v0 = func_800A7974(player, obj408->unk_01C.hitbox, &sp98, obj408->obj.pos.x, obj408->obj.pos.y,
                                            obj408->obj.pos.z, obj408->obj.rot.x, obj408->obj.rot.y, obj408->obj.rot.z,
                                            0.0f, 0.0f, 0.0f);
                    if (temp_v0 != 0) {
                        if (temp_v0 < 0) {
                            if (player->unk_22C == 0) {
                                func_80019218(0x19000001, &obj408->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            }
                            player->unk_22C += 2;
                            if (player->unk_22C >= 4) {
                                player->unk_22C = 4;
                            }
                        } else {
                            if ((obj408->obj.id == OBJECT_320) && (obj408->unk_056 != 0) && (sp98 == 5)) {
                                break;
                            }
                            func_800A6CD0(player, obj408->obj.id, obj408->unk_01C.damage);
                            if ((obj408->obj.id == OBJECT_303) && ((obj408->unk_04E == 2) || (obj408->unk_04E == 3)) &&
                                (sp98 >= 9)) {
                                player->unk_0D8.y = -100.0f;
                            }
                            if ((obj408->obj.id == OBJECT_320) && (sp98 < 5)) {
                                player->unk_0D8.x = obj408->unk_110;
                                player->unk_0D8.y = obj408->unk_114;
                            }
                        }
                    }
                }
            }
        }
        for (i = 0, obj2F4 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, obj2F4++) {
            if ((obj2F4->obj.status == 2) && (obj2F4->unk_0C2 == 0)) {
                if (obj2F4->obj.id == OBJECT_180) {
                    temp_v0 = func_800A8304(player, obj2F4->obj.id, obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                            obj2F4->obj.pos.z, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z);
                    if (temp_v0 != 0) {
                        func_800A6CD0(player, temp_v0, obj2F4->unk_01C.damage);
                    }
                } else if (obj2F4->obj.id == OBJECT_200) {
                    if (obj2F4->unk_0B4 == 42) {
                        temp_v0 = func_800A8304(player, 1000, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z,
                                                obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z);
                        if (temp_v0 != 0) {
                            func_800A6CD0(player, temp_v0, obj2F4->unk_01C.damage);
                        }
                    } else if (obj2F4->unk_0B4 == 63) {
                        spfD4.x = fabsf(obj2F4->obj.pos.x - player->unk_074);
                        spfD4.y = fabsf(obj2F4->obj.pos.y - player->unk_078);
                        spfD4.z = fabsf(obj2F4->obj.pos.z - player->unk_138);
                        if (sqrtf(VEC3F_SQ(spfD4)) < 900.0f) {
                            func_800A6CD0(player, 0, obj2F4->unk_01C.damage);
                            obj2F4->unk_0D0 = 3;
                        }
                    } else {
                        temp_v0 =
                            func_800A7974(player, obj2F4->unk_01C.hitbox, &sp98, obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                          obj2F4->obj.pos.z, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z,
                                          obj2F4->unk_2E8.x, obj2F4->unk_2E8.y, obj2F4->unk_2E8.z + obj2F4->unk_0F4.z);
                        if (temp_v0 != 0) {
                            if ((temp_v0 < 0) && (obj2F4->unk_0B4 == 38)) {
                                obj2F4->unk_01C.hitbox = SEGMENTED_TO_VIRTUAL(D_6032328);
                                if (D_80177E80 >= 0) {
                                    obj2F4->unk_046 = 2;
                                    D_80177E80++;
                                    if (D_80177E80 == 3) {
                                        func_800BA808(gMsg_ID_5504, RCID_FALCO);
                                    }
                                    func_80019218(D_800CFF54[D_80177E80], &gPlayer->unk_460, 0, &D_800C5D34,
                                                  &D_800C5D34, &D_800C5D3C);
                                    func_80019218(0x49008025, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                }
                            } else if (temp_v0 < 0) {
                                if (player->unk_22C == 0) {
                                    func_80019218(0x19000001, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34,
                                                  &D_800C5D3C);
                                }
                                player->unk_22C += 2;
                                if (player->unk_22C >= 4) {
                                    player->unk_22C = 4;
                                }
                            } else {
                                func_800A6CD0(player, temp_v0, obj2F4->unk_01C.damage);
                                obj2F4->unk_0D0 = 3;
                                obj2F4->unk_0D4 = player->unk_1C4 + 1;
                            }
                        }
                    }
                } else if ((obj2F4->obj.id >= 0xCD) && (obj2F4->obj.id < 0xD6)) {
                    temp_v0 = func_800A7974(player, obj2F4->unk_01C.hitbox, &sp98, obj2F4->unk_178 + obj2F4->obj.pos.x,
                                            obj2F4->unk_134 + obj2F4->obj.pos.y + 25.0f, obj2F4->obj.pos.z,
                                            obj2F4->unk_188, obj2F4->unk_17C, obj2F4->obj.rot.z, 0.0f, 0.0f, 0.0f);
                    if (temp_v0 != 0) {
                        obj2F4->unk_0D0 = 3;
                        if (obj2F4->unk_01C.damage != 0) {
                            func_800A6CD0(player, temp_v0, obj2F4->unk_01C.damage);
                        } else {
                            obj2F4->unk_0D0 = -1;
                        }
                    }
                } else {
                    temp_v0 = func_800A7974(player, obj2F4->unk_01C.hitbox, &sp98, obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                            obj2F4->obj.pos.z, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z,
                                            0.0f, 0.0f, 0.0f);
                    if (temp_v0 != 0) {
                        if (temp_v0 < 0) {
                            if (player->unk_22C == 0) {
                                func_80019218(0x19000001, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            }
                            player->unk_22C += 2;
                            if (player->unk_22C >= 4) {
                                player->unk_22C = 4;
                            }
                        } else {
                            obj2F4->unk_0D0 = 3;
                            if (obj2F4->obj.id == OBJECT_190) {
                                obj2F4->unk_0D0 = -1;
                            }
                            if (obj2F4->unk_01C.damage != 0) {
                                func_800A6CD0(player, temp_v0, obj2F4->unk_01C.damage);
                                if (obj2F4->obj.id == OBJECT_225) {
                                    player->unk_0D8.y = 0.0f;
                                }
                            } else {
                                obj2F4->unk_0D0 = -1;
                            }
                        }
                    }
                }
            }
        }
        for (i = 0, obj4C = gObjects4C; i < ARRAY_COUNT(gObjects4C); i++, obj4C++) {
            if (obj4C->obj.status == 2) {
                if ((player->unk_138 - 200.0f) < obj4C->obj.pos.z) {
                    temp_v0 = func_800A7974(player, obj4C->unk_1C.hitbox, &sp98, obj4C->obj.pos.x, obj4C->obj.pos.y,
                                            obj4C->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
                    if (temp_v0 != 0) {
                        if ((obj4C->obj.id == OBJECT_163) || (obj4C->obj.id == OBJECT_161) ||
                            (obj4C->obj.id == OBJECT_169) || (obj4C->obj.id == OBJECT_162)) {
                            obj4C->unk_46 = 1;
                            player->unk_1F4 = 6;
                            player->unk_21C = 0;
                        } else {
                            func_800A6CD0(player, temp_v0, obj4C->unk_1C.damage);
                        }
                    }
                }
            }
        }
    }
    func_800A86E4(player);
    if (gCamCount == 4) {
        for (i = 3, opponent = &gPlayer[3]; i >= 0; i--, opponent--) {
            if ((i != D_801778A0) && (opponent->unk_1C8 == 3)) {
                spC8.x = 25.0f;
                if (player->unk_1CC == 3) {
                    spC8.x = 4.0f;
                }
                spC8.y = 25.0f;
                if (opponent->unk_1CC == 3) {
                    spC8.y = 4.0f;
                }
                spBC.x = spBC.z = spC8.x + spC8.y;
                spC8.x = 23.0f;
                if (player->unk_1CC == 3) {
                    spC8.x = 7.0f;
                }
                spC8.y = 23.0f;
                if (opponent->unk_1CC == 3) {
                    spC8.y = 7.0f;
                }
                spBC.y = spC8.x + spC8.y;
                if ((fabsf(opponent->unk_138 - player->unk_138) <= spBC.z) &&
                    (fabsf(opponent->unk_078 - player->unk_078) <= spBC.y) &&
                    (fabsf(opponent->unk_074 - player->unk_074) <= spBC.x)) {
                    if ((player->unk_1CC == 3) && (opponent->unk_1CC == 3)) {
                        player->unk_074 = player->unk_08C.y;
                        player->unk_078 = player->unk_08C.z;
                        player->unk_07C = player->unk_138 = player->unk_098;
                        opponent->unk_074 = opponent->unk_08C.y;
                        opponent->unk_078 = opponent->unk_08C.z;
                        opponent->unk_07C = opponent->unk_138 = opponent->unk_098;
                        player->unk_0D8.x = (player->unk_074 - opponent->unk_08C.y) * 0.5f;
                        player->unk_0D8.z = (player->unk_138 - opponent->unk_138) * 0.5f;
                        opponent->unk_0D8.x = -player->unk_0D8.x;
                        opponent->unk_0D8.z = -player->unk_0D8.z;
                        opponent->unk_0D0 = player->unk_0D0 = 2.0f;
                    } else {
                        func_800A8804(player, opponent);
                        func_800A8804(opponent, player);
                    }
                }
            }
        }
    }
    if (D_80178294 != 0) {
        if (func_800A73E4(&sp94, &sp90, player->unk_2EC.x, player->unk_2EC.y, player->unk_2EC.z)) {
            if (gCurrentLevel == LEVEL_ZONESS) {
                player->unk_1F4 = 15;
                player->unk_0E4 = (player->unk_0D0 + player->unk_110) * 0.8f;
                func_8007B228(player->unk_2EC.x, sp94, player->unk_2EC.z, 1.0f);
            } else {
                if (player->unk_1F4 == 0) {
                    func_800A6CD0(player, 4, 0xA);
                }
                player->unk_0D8.y = 30.0f;
                player->unk_0E4 = (player->unk_0D0 + player->unk_110) * 0.8f;
            }
            if (player->unk_1C8 == 4) {
                player->unk_220 = 2;
                func_8007AFD0(player->unk_074, player->unk_138, 30.0f, 0.0f, 5.0f);
                func_8007AFD0(player->unk_074, player->unk_138, -30.0f, 0.0f, 5.0f);
            }
        }
        if (func_800A73E4(&sp94, &sp90, player->unk_074 + ((player->unk_2D4.x - player->unk_074) * 1.5f),
                          player->unk_078 + (player->unk_2D4.y - player->unk_078) * 1.5f, player->unk_2D4.z)) {
            if (gCurrentLevel == LEVEL_ZONESS) {
                func_8007B228(player->unk_074 + (player->unk_2D4.x - player->unk_074) * 1.5f, sp94, player->unk_2D4.z,
                              1.0f);
            } else {
                if (player->unk_1F4 == 0) {
                    func_800A6CD0(player, 1, 10);
                }
                player->unk_0D8.y = 30.0f;
            }
        }
        if (func_800A73E4(&sp94, &sp90, player->unk_074 + ((player->unk_2C8.x - player->unk_074) * 1.5f),
                          player->unk_078 + (player->unk_2C8.y - player->unk_078) * 1.5f, player->unk_2C8.z)) {
            if (gCurrentLevel == LEVEL_ZONESS) {
                func_8007B228(player->unk_074 + (player->unk_2C8.x - player->unk_074) * 1.5f, sp94, player->unk_2C8.z,
                              1.0f);
            } else {
                if (player->unk_1F4 == 0) {
                    func_800A6CD0(player, 2, 40);
                }
                player->unk_0D8.y = 30.0f;
            }
        }
    }
}
#else
void func_800A8BA4(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A8BA4.s")
#endif

void func_800AA800(Player* player) {
    s32 sp144;
    Object_58* var_s6;
    Object_80* var_fp;
    s32 temp_ft3;
    s32 var_s0;
    s32 var_s6_2;
    f32 tempx;
    f32 tempy;
    f32 tempz;
    f32 sp120;
    f32* temp_s0;
    s32 pad1;
    f32 var_fs0;
    f32 var_fs1;
    f32 tempx2;
    f32 tempy2;
    f32 tempz2;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    Vec3f spEC;
    Vec3f spE0;
    Vec3f spD4;
    Vec3f spC8;
    Vec3f spBC;
    Vec3f spB0;
    f32 spA8[2];
    Vec3f sp9C = D_800D30E8;
    s32 pad2;
    s32 pad3;
    s32 pad4;

    if (player->unk_240 == 0) {
        player->unk_064 = player->unk_074;
        player->unk_06C = player->unk_138 - player->unk_078;
        if (D_801784AC != 4) {
            if (gCamCount == 1) {
                player->unk_068 = D_80177940 + 3.0f;
            } else {
                player->unk_068 = D_80177940;
                if (player->unk_1CC == 3) {
                    player->unk_06C = player->unk_138;
                }
            }
            player->unk_248 = player->unk_24C = player->unk_070 = 0.0f;
        }
        sp100 = 0.0f;
        spFC = 0.0f;
        spF8 = 0.0f;
        if (gCamCount != 1) {
            if (player->unk_1CC == 3) {
                for (sp144 = 0; sp144 < 200; sp144++) {
                    var_s6 = &gObjects58[sp144];
                    if ((var_s6->obj.status == 2) &&
                        ((var_s6->obj.id == OBJECT_143) || (var_s6->obj.id == OBJECT_140) ||
                         (var_s6->obj.id == OBJECT_141)) &&
                        (fabsf(var_s6->obj.pos.x - player->unk_074) < 2000.0f) &&
                        (fabsf(var_s6->obj.pos.z - player->unk_138) < 2000.0f)) {
                        spC8.x = var_s6->obj.pos.x;
                        spC8.y = var_s6->obj.pos.y;
                        spC8.z = var_s6->obj.pos.z;
                        spD4.x = player->unk_074;
                        spD4.y = D_80177940;
                        spD4.z = player->unk_138;
                        var_s0 = 4;
                        if (var_s6->obj.id == OBJECT_141) {
                            var_s0 = 6;
                        } else if (var_s6->obj.id == OBJECT_143) {
                            var_s0 = 17;
                        }
                        if (func_800A3690(&spD4, &spC8, var_s0, &spBC) != 0) {
                            player->unk_068 = spBC.y + 1.0f;
                            player->unk_248 = spBC.x;
                            player->unk_24C = spBC.z;
                            break;
                        }
                    }
                }
            }
        } else {
            if ((D_80177880 == 1) && (gLevelType == 0)) {
                player->unk_064 = player->unk_074;
                player->unk_06C = player->unk_138;
                for (sp144 = 0, var_s6 = gObjects58; sp144 < 200; sp144++, var_s6++) {
                    if ((var_s6->obj.status == 2) &&
                        ((var_s6->obj.id == OBJECT_150) || (var_s6->obj.id == OBJECT_149) ||
                         (var_s6->obj.id == OBJECT_148) || (var_s6->obj.id == OBJECT_1) ||
                         (var_s6->obj.id == OBJECT_3)) &&
                        (fabsf(var_s6->obj.pos.x - player->unk_074) < 2500.0f) &&
                        (fabsf(var_s6->obj.pos.z - player->unk_138) < 2500.0f)) {
                        tempx = var_s6->obj.pos.x;
                        tempy = var_s6->obj.pos.y;
                        tempz = var_s6->obj.pos.z;
                        sp120 = var_s6->obj.rot.y;
                        Matrix_RotateY(gCalcMatrix, -sp120 * M_DTOR, 0);
                        spEC.x = player->unk_074 - tempx;
                        spEC.y = 0.0f;
                        spEC.z = player->unk_138 - tempz;
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spEC, &spE0);
                        spD4.x = spE0.x + tempx;
                        spD4.y = spE0.y + tempy;
                        spD4.z = spE0.z + tempz;
                        spC8.x = tempx;
                        spC8.y = tempy;
                        spC8.z = tempz;

                        if ((var_s6->obj.id == OBJECT_149) || (var_s6->obj.id == OBJECT_150)) {
                            if (var_s6->obj.id == OBJECT_149) {
                                var_s0 = 5;
                            } else {
                                var_s0 = 6;
                            }
                            if (func_800998FC(&spD4, &spC8, &sp9C, var_s0, &spB0, spA8) > 0) {
                                player->unk_068 = spB0.y;
                                player->unk_248 = spA8[0];
                                player->unk_24C = spA8[1];
                                player->unk_070 = (sp120 / 180.0f) * M_PI;
                            }
                        } else {
                            var_s0 = 0;
                            if (var_s6->obj.id == OBJECT_3) {
                                var_s0 = 3;
                            }
                            if (func_800A3690(&spD4, &spC8, var_s0, &spBC) != 0) {
                                player->unk_068 = spBC.y;
                                player->unk_248 = spBC.x;
                                player->unk_24C = spBC.z;
                                player->unk_070 = (sp120 / 180.0f) * M_PI;
                            }
                        }
                    }
                }
            }
            for (sp144 = 0, var_fp = gObjects80; (sp144 < 50) && (D_80177880 == 0) && (gCurrentLevel != 6);
                 sp144++, var_fp++) {
                if ((var_fp->obj.status == 2) && ((player->unk_138 - 3000.0f) < var_fp->obj.pos.z) &&
                    (var_fp->obj.id != 0) && (var_fp->obj.id != 8)) {
                    tempx = var_fp->obj.pos.x;
                    tempy = var_fp->obj.pos.y;
                    tempz = var_fp->obj.pos.z;
                    sp120 = var_fp->obj.rot.y;
                    if ((var_fp->obj.id == OBJECT_3) || (var_fp->obj.id == OBJECT_2) || (var_fp->obj.id == OBJECT_47) ||
                        (var_fp->obj.id == OBJECT_4) || (var_fp->obj.id == OBJECT_5)) {
                        Matrix_RotateY(gCalcMatrix, -sp120 * M_DTOR, 0);
                        for (var_fs1 = var_fs0 = -50.0f; var_fs0 > -500.0f; var_fs0 -= 5.0f, var_fs1 -= 5.0f) {
                            spEC.x = player->unk_074 - tempx;
                            spEC.y = player->unk_078 + var_fs0 - tempy;
                            spEC.z = player->unk_138 + var_fs1 - tempz;
                            Matrix_MultVec3fNoTranslate(gCalcMatrix, &spEC, &spE0);
                            if ((player->unk_078 + var_fs0) <= D_80177940) {
                                break;
                            }
                            spD4.x = spE0.x + tempx;
                            spD4.y = spE0.y + tempy;
                            spD4.z = spE0.z + tempz;
                            spC8.x = tempx;
                            spC8.y = tempy;
                            spC8.z = tempz;

                            var_s0 = 0;

                            if (var_fp->obj.id == OBJECT_47) {
                                var_s0 = 7;
                            }
                            if (var_fp->obj.id == OBJECT_2) {
                                var_s0 = 2;
                            } else if (var_fp->obj.id == OBJECT_3) {
                                var_s0 = 3;
                            } else if ((var_fp->obj.id == OBJECT_4) || (var_fp->obj.id == OBJECT_5)) {
                                var_s0 = 1;
                            }
                            if (func_800A3690(&spD4, &spC8, var_s0, &spBC) != 0) {
                                player->unk_068 = spBC.y;
                                player->unk_06C = player->unk_138 + var_fs1;
                                player->unk_248 = spBC.x;
                                player->unk_24C = spBC.z;
                                player->unk_070 = (sp120 / 180.0f) * M_PI;
                                break;
                            }
                        }
                    } else {
                        temp_s0 = var_fp->unk_1C.hitbox;
                        temp_ft3 = (s32) *temp_s0;
                        if (temp_ft3 != 0) {
                            if (var_fp->unk_1C.action == (ObjectFunc) func_80066EA8) {
                                sp120 = 0.0f;
                            }

                            for (var_s6_2 = 0, temp_s0++; var_s6_2 < temp_ft3; var_s6_2++, temp_s0 += 6) {
                                if (temp_s0[0] >= 300000.0f) {
                                    break;
                                }

                                if (temp_s0[0] == 200000.0f) {
                                    sp100 = temp_s0[1];
                                    spFC = temp_s0[2];
                                    spF8 = temp_s0[3];
                                    temp_s0 += 4;
                                    Matrix_RotateZ(gCalcMatrix, -spF8 * M_DTOR, 0);
                                    Matrix_RotateX(gCalcMatrix, -sp100 * M_DTOR, 1);
                                    Matrix_RotateY(gCalcMatrix, -spFC * M_DTOR, 1);
                                    Matrix_RotateY(gCalcMatrix, -sp120 * M_DTOR, 1);

                                } else {
                                    Matrix_RotateY(gCalcMatrix, -sp120 * M_DTOR, 0);
                                }
                                for (var_fs0 = var_fs1 = -50.0f; var_fs0 > -500.0f; var_fs0 -= 5.0f, var_fs1 -= 5.0f) {
                                    spEC.x = player->unk_074 - tempx;
                                    spEC.y = player->unk_078 + var_fs0 - tempy;
                                    spEC.z = player->unk_138 + var_fs1 - tempz;
                                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &spEC, &spE0);
                                    tempx2 = spE0.x + tempx;
                                    tempy2 = spE0.y + tempy;
                                    tempz2 = spE0.z + tempz;
                                    if (spEC.y + tempy <= D_80177940) {
                                        break;
                                    }
                                    if (func_800A78C4(temp_s0, tempx, tempy, tempz, tempx2, tempy2, tempz2) != 0) {
                                        if (D_80177940 < player->unk_068) {
                                            player->unk_068 = spEC.y + 15.0f + tempy;
                                            player->unk_06C = spEC.z + 10.0f + tempz;
                                            player->unk_248 = (sp100 / 180.0f) * M_PI;
                                            player->unk_070 = (sp120 / 180.0f) * M_PI;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void func_800AB2AC(void) {
    u8* ptr = (u8*) gPlayer;
    u32 i;

    for (i = 0; i < gCamCount * sizeof(Player); i++, ptr++) {
        *ptr = 0;
    }
}

void func_800AB304(Player* player) {
    u8* ptr = (u8*) player;
    u32 i;

    for (i = 0; i < sizeof(Player); i++, ptr++) {
        *ptr = 0;
    }
}

extern s32 D_801778B8;

void func_800AB334(void) {
    Vtx* var_v1_8;
    u8* ptr;
    s32 i;
    f32* fptr;

    switch (gCurrentLevel) {
        case LEVEL_TRAINING:
            func_8001DC6C(0, 0x1CU);
            D_8017796C = -1;
            break;
        case LEVEL_VENOM_1:
            func_8001DC6C(0, 6U);
            break;
        case LEVEL_VENOM_SW:
            func_8001DC6C(0, 6U);
            break;
        case LEVEL_VENOM_2:
            func_8001DC6C(0, 0xFU);
            func_8001D400(0);
            D_8017796C = -1;
            break;
    }
    D_80178294 = 0;
    switch (gCurrentLevel) {
        case LEVEL_SECTOR_Z:
            D_80177B8C = 1;
            break;
        case LEVEL_METEO:
        case LEVEL_SECTOR_X:
            if (D_8017827C == 1) {
                gFogRed = 178;
                gFogGreen = 190;
                gFogBlue = 90;
                gLight1R = 200;
                gLight1G = 200;
                gLight1B = 120;
                gAmbientR = 0;
                gAmbientG = 50;
                gAmbientB = 100;
            }
            break;
        case LEVEL_VENOM_2:
            D_80177A98 = 0;
            D_80177AB0 = 6;
            D_E9F1D0_801A7F78 = 0.0f;
            D_E9F1D0_801A7F70 = D_E9F1D0_801A7F78;
            D_E9F1D0_801A7F68 = D_E9F1D0_801A7F70;
            D_E9F1D0_801A7F60 = D_E9F1D0_801A7F68;
            D_E9F1D0_801A7F58 = D_E9F1D0_801A7F60;
            break;
        case LEVEL_AQUAS:
            D_80137E78 = 3;
            D_8015F970 = 1600.0f;
            D_E16C50_801C4188 = 128.0f;
            func_E16C50_801A9824();
            break;
        case LEVEL_TITANIA:
            func_E6A810_80188F30();
            D_801778B8 = -2;
            break;
        case LEVEL_MACBETH:
            func_E6A810_80199920();
            break;
        case LEVEL_ZONESS:
            D_801782C4 = Memory_Allocate(200 * sizeof(PosRot));
            ptr = (u8*) D_801782C4;
            for (i = 0; i < 200 * sizeof(PosRot); i++, ptr++) {
                *ptr = 0;
            }
            D_801784A4 = 0;
            /* fallthrough */
        case LEVEL_SOLAR:
            D_80178294 = 1;
            D_80177940 = -20000.0f;
            fptr = D_801782CC = Memory_Allocate(17 * 17 * sizeof(f32));
            for (i = 0; i < 17 * 17; i++, fptr++) {
                *fptr = 0.0f;
            }
            fptr = D_801782D4 = Memory_Allocate(17 * 17 * sizeof(f32));
            for (i = 0; i < 17 * 17; i++, fptr++) {
                *fptr = 0.0f;
            }
            fptr = D_801782DC = Memory_Allocate(17 * 17 * sizeof(f32));
            for (i = 0; i < 17 * 17; i++, fptr++) {
                *fptr = 0.0f;
            }
            fptr = D_801782E4 = Memory_Allocate(17 * 17 * sizeof(f32));
            for (i = 0; i < 17 * 17; i++, fptr++) {
                *fptr = 0.0f;
            }
            fptr = D_801782EC = Memory_Allocate(17 * 17 * sizeof(f32));
            for (i = 0; i < 17 * 17; i++, fptr++) {
                *fptr = 0.0f;
            }

            switch (gCurrentLevel) {
                case 7:
                    var_v1_8 = SEGMENTED_TO_VIRTUAL(D_6001C50);
                    break;
                case 8:
                    var_v1_8 = SEGMENTED_TO_VIRTUAL(D_6009ED0);
                    break;
            }
            for (i = 0; i < 17 * 17; i++, var_v1_8++) {
                if (var_v1_8->v.ob[0] == 800) {
                    var_v1_8->v.ob[0] = 1400;
                }
                if (var_v1_8->v.ob[0] == -800) {
                    var_v1_8->v.ob[0] = -1400;
                }
                if (var_v1_8->v.ob[2] == -800) {
                    var_v1_8->v.ob[2] = -1400;
                }
            }

            switch (gCurrentLevel) {
                case 7:
                    var_v1_8 = SEGMENTED_TO_VIRTUAL(D_6004500);
                    break;
                case 8:
                    var_v1_8 = SEGMENTED_TO_VIRTUAL(D_600C780);
                    break;
            }
            for (i = 0; i < 17 * 17; i++, var_v1_8++) {
                if (var_v1_8->v.ob[0] == 800) {
                    var_v1_8->v.ob[0] = 1400;
                }
                if (var_v1_8->v.ob[0] == -800) {
                    var_v1_8->v.ob[0] = -1400;
                }
                if (var_v1_8->v.ob[2] == -800) {
                    var_v1_8->v.ob[2] = -1400;
                }
            }
            break;
    }
}

void func_800AB964(void) {
    s32 i;
    s32 j;

    D_80178754 = 0;
    for (i = 0; i < 4; i++) {
        D_80177DB8[i] = 0;
        for (j = 0; j < 10; j++) {
            D_80177DD0[i][j] = 0;
        }
        gLaserStrength[i] = 0;
        gBombCount[i] = 0;
    }
    D_80177E7C = D_80177E74 = 0;
}

void func_800ABA08(void) {
    s32 i;

    func_800AB964();
    for (i = 0; i < 4; i++) {
        D_801778A0 = i;
        func_800AB304(&gPlayer[i]);
        func_800B0F50(&gPlayer[i]);
        func_800B44C4(&gPlayer[i]);
        func_800B7184(&gPlayer[i], 1);
    }
    func_800A6148();
}

void func_800ABAB4(void) {
    s32 i;

    D_80161A54 = 40.0f;
    for (i = 0; i < 4; i++) {
        gRumbleStatus[i] = 0;
    }

    if (gExpertMode != 0) {
        D_80177828 = 200;
    } else {
        D_80177828 = 100;
    }
    D_801779BC = 0;
    D_80137E78 = 2;
    D_80177C70 = 0;
    D_800CA234 = NULL;
    D_800CA238 = 0;
    func_8001A838(0x11403076U);
    func_8001A838(0x49000014U);
    Memory_FreeAll();
    D_80177C78 = D_80177C8C = D_80161734 = D_8015F908 = D_8015F90C = D_8015F910 = 0;
    D_800CA220 = 0;
    D_80177830 = 0;
    if (gCurrentLevel != LEVEL_VERSUS) {
        gOverlayStage = 0;
    }
    D_80161A2C = 1;
    D_80177A98 = D_80177AB0 = 1;
    D_80177AC8 = D_800D2F54 = 0;
    D_800CA230 = D_800D2F58 = 0.0f;
    D_80177880 = 0;
    D_80177CE8 = D_8015F968 = 0.0f;
    D_800D1970 = D_801778E8 = D_80178300 = D_80177E84 = 0;
    if (gCurrentLevel >= LEVEL_FORTUNA) {
        D_80177880 = 1;
        if (gCurrentLevel == LEVEL_VERSUS) {
            D_801778E8 = 1;
            func_800AB964();
        }
    }
    if ((gCurrentLevel == LEVEL_VENOM_2) && (D_8017827C == 1)) {
        D_80177880 = 1;
    }
    D_80177E7C = 0;
    func_800A594C();
    D_80161A62 = D_8017796C = D_80177B44 = D_80177B4C = D_8015F928 = D_8015F940 = D_80178284 = gFrameCount =
        D_80178480 = D_801782FC = D_801613A0 = D_80161690 = D_8015F900 = D_80177930 = 0;

    if (gCurrentLevel == LEVEL_SECTOR_X) {
        D_80177930 = 1;
    }
    D_80177CC0 = -25000.0f;
    D_80177950 = 1.0f;
    if ((gCurrentLevel == 19) && (D_8017827C == 2)) {
        D_80178348 = D_80178350 = D_80178354 = 255;
    } else {
        D_80178348 = D_80178350 = D_80178354 = 0;
    }
    D_80161A60 = D_80178360 = D_80178364 = D_80178368 = D_80161704 = D_80161708 = D_80178340 = D_80177C50 = D_8015F93C =
        D_80177B6C = 0;

    D_80177A80 = 0;
    D_80178340 = D_80178358 = 255;

    D_8017835C = 16;
    D_8017836C = 0.0f;
    D_8015F960 = 0.0f;
    D_80177940 = 0.0f;
    D_80178414 = D_80178420 = D_80178424 = D_80178428 = D_8017842C = D_80178430 = 0.0f;

    if ((gLevelType == LEVELTYPE_SPACE) || (gCurrentLevel == LEVEL_TRAINING)) {
        func_800A5EBC();
        if (gCurrentLevel != LEVEL_TRAINING) {
            D_80177A98 = 0;
        }
    } else {
        D_80178410 = 0;
    }
    gFogAlpha = 255;
    D_801784E8 = 5.0f;
    D_80178510 = 5.0f;
    D_80178538 = 5.0f;
    func_800A6148();
    D_801782C8 = 0;
    if (gCurrentLevel == LEVEL_TITANIA) {
        func_E6A810_801B5110(0.0f, 0.0f, 200.0f);
    }
    if (gCurrentLevel == LEVEL_AQUAS) {
        D_80177CC0 = 1000.0f;
    }
    D_80178488 = 0;
    gCamCount = 1;
    if (gCurrentLevel == LEVEL_VERSUS) {
        gCamCount = 4;
    }
    for (i = 1; i < 6; i++) {
        gTeamHealth[i] = gSavedTeamHealth[i];
    }
    gPlayer = Memory_Allocate(gCamCount * sizeof(Player));
    func_800AB2AC();
    for (i = 0; i < gCamCount; i++) {
        gPlayer[i].unk_1C8 = 1;
        D_80178380[i] = D_801783C0[i] = 0;
        D_80177BD0[i] = 0;
        D_80177C30[i] = 0;
    }
    if (D_80177880 == 1) {
        gObjects58 = Memory_Allocate(200 * sizeof(Object_58));
        for (i = 0; i < 200; i++) {
            gObjects58[i].obj.status = 0;
        }
        switch (gCurrentLevel) {
            case LEVEL_SECTOR_Z:
                if (D_8017782C == 0) {
                    func_E51970_8019EA68(&gObjects58);
                    func_8002F180();
                }
                break;
            case LEVEL_FORTUNA:
                func_E51970_8018BA2C(&gObjects58);
                func_8002F180();
                break;
            case LEVEL_KATINA:
                func_E51970_80198930(&gObjects58);
                if (D_8017782C == 0) {
                    func_8002F180();
                }
                break;
            case LEVEL_BOLSE:
                if (D_8017782C == 0) {
                    func_E51970_80191ED8(&gObjects58);
                    func_8002F180();
                }
                break;
            case LEVEL_VENOM_SW:
                func_E9F1D0_80196968(&gObjects58);
                if (D_8017827C == 0) {
                    func_8002F180();
                }
                break;
            case LEVEL_VENOM_2:
                if (D_8017827C == 1) {
                    if (D_8015F924 == 0) {
                        func_E9F1D0_801878A8(&gObjects58);
                    } else {
                        func_E9F1D0_801961AC(&gObjects58);
                    }
                }
                break;
            case LEVEL_VERSUS:
                func_800A4F7C();
                D_8017796C = -1;
                break;
        }
    }
    func_800AB334();
}

void func_800AC290(Player* player, Object_70* obj70, f32 arg2, f32 arg3, s32 arg4, f32 arg5) {
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C;

    Object_70_Initialize(obj70);
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4 + player->unk_4D8) * 0.017453292f), 1);
    Matrix_RotateZ(gCalcMatrix, -((player->unk_0F8 + player->unk_0F0) * 0.017453292f), 1);
    Matrix_Translate(gCalcMatrix, player->unk_084, player->unk_080, 0.0f, 1);
    if ((D_801778E8 != 0) && (arg4 <= OBJECT_1)) {
        arg5 *= 0.5f;
    }
    sp44.x = 0.0f;
    sp44.y = 0.0f;
    sp44.z = arg5;
    Matrix_MultVec3f(gCalcMatrix, &sp44, &sp38);
    sp44.x = arg2;
    sp44.y = -5.0f + arg3;
    sp44.z = 0.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp44, &sp2C);
    obj70->obj.status = 1;
    obj70->unk_20.x = sp38.x;
    obj70->unk_20.y = sp38.y;
    obj70->unk_20.z = sp38.z;
    obj70->unk_60 = 0;
    obj70->obj.id = arg4;

    if (D_801778E8 == 0) {
        obj70->unk_64 = 35;
    } else {
        obj70->unk_64 = 37;
    }
    if (obj70->obj.id == OBJECT_4) {
        obj70->obj.pos.x = player->unk_074 + sp2C.x;
        obj70->obj.pos.y = player->unk_078 + sp2C.y;
        obj70->obj.pos.z = player->unk_138 + sp2C.z;
        obj70->unk_64 = 38;
    } else {
        obj70->obj.pos.x = player->unk_074 + sp2C.x + (sp38.x * 1.2);
        obj70->obj.pos.y = player->unk_078 + sp2C.y + (sp38.y * 1.2);
        obj70->obj.pos.z = player->unk_138 + sp2C.z + (sp38.z * 1.2f);
    }
    obj70->obj.rot.x = player->unk_120 + player->unk_0E4 + player->unk_4D8;
    obj70->obj.rot.y = player->unk_0E8 + player->unk_114;
    obj70->obj.rot.z = player->unk_0F8;
    if (arg4 == 8) {
        if (gCurrentLevel == LEVEL_AQUAS) {
            obj70->unk_58 = Rand_ZeroOne() * 360.0f;
            obj70->unk_60 = Rand_ZeroOne() * 360.0f;
            obj70->unk_2C = player->unk_0E4 + player->unk_4D8;
            obj70->unk_30 = player->unk_0E8;
            obj70->unk_34 = player->unk_0F8;
            obj70->unk_5C = D_80178494;
        } else {
            obj70->unk_30 = player->unk_0E8 + player->unk_114;
            obj70->unk_2C = player->unk_0E4 + player->unk_4D8;
            if (arg5 <= 65.0f) {
                obj70->unk_5C = 1;
            }
            obj70->unk_64 = 30;
        }
    }
    obj70->unk_68 = player->unk_1C4;
}

void func_800AC650(Player* player, Object_70* obj70, s32 objId, f32 arg3) {
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;

    Object_70_Initialize(obj70);
    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 0);
    Matrix_RotateZ(gCalcMatrix, (player->unk_0EC + player->unk_0F0) * 0.017453292f, 1);
    Matrix_RotateY(gCalcMatrix, player->unk_114 * 0.017453292f, 1);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * 0.017453292f, 1);
    Matrix_RotateZ(gCalcMatrix, (-player->unk_12C - player->unk_130) * 0.017453292f, 1);
    Matrix_RotateY(gCalcMatrix, -player->unk_180 * 0.017453292f, 1);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * 0.017453292f, 1);
    sp54.x = 0;
    sp54.y = 0;
    sp54.z = arg3;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    Matrix_Translate(gCalcMatrix, 0.0f, player->unk_18C + 30.0f, 0, 0);
    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 1);
    Matrix_RotateZ(gCalcMatrix, (player->unk_0EC + player->unk_0F0) * 0.017453292f, 1);
    Matrix_RotateY(gCalcMatrix, player->unk_114 * 0.017453292f, 1);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * 0.017453292f, 1);
    Matrix_RotateZ(gCalcMatrix, (-player->unk_12C - player->unk_130) * 0.017453292f, 1);
    Matrix_Translate(gCalcMatrix, 0.0f, -30.0f, 0, 1);
    Matrix_Translate(gCalcMatrix, player->unk_084, player->unk_080, 0.0f, 1);
    Matrix_Translate(gCalcMatrix, 0.0f, 51.0f, -4.0f, 1);
    Matrix_RotateY(gCalcMatrix, -player->unk_180 * 0.017453292f, 1);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * 0.017453292f, 1);
    sp54.x = 0;
    sp54.y = 7;
    sp54.z = 0;
    Matrix_MultVec3f(gCalcMatrix, &sp54, &sp3C);
    obj70->unk_20.x = sp48.x;
    obj70->unk_20.y = sp48.y;
    obj70->unk_20.z = sp48.z;
    obj70->obj.pos.x = player->unk_074 + sp3C.x;
    obj70->obj.pos.y = player->unk_078 + sp3C.y;
    obj70->obj.pos.z = player->unk_138 + sp3C.z;
    obj70->obj.status = 1;
    obj70->unk_2C = -player->unk_17C;
    obj70->unk_30 = -player->unk_180;
    obj70->unk_34 = player->unk_12C;
    obj70->obj.rot.x = player->unk_0E4 + player->unk_120;
    obj70->obj.rot.y = player->unk_0E8 + player->unk_114;
    obj70->obj.rot.z = player->unk_0EC;
    obj70->unk_64 = 40;
    obj70->obj.id = objId;

    obj70->unk_68 = player->unk_1C4;
    if (objId == 8) {
        if (arg3 <= 65.0f) {
            obj70->unk_5C = 1;
        }
        obj70->unk_64 = 30;
        obj70->unk_30 = player->unk_0E8 + player->unk_114;
    }
}

void func_800ACA40(Player* player) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects70) - 1; i++) {
        if (gObjects70[i].obj.status == 0) {
            func_800AC650(player, &gObjects70[i], 5, 100.0f);
            func_800A5FA0(&player->unk_460, 0x09000014, player->unk_1C4);
            player->unk_1A0 = 2;
            break;
        }
    }
}

void func_800ACABC(Player* player) {
    s32 i;
    s32 laser = gLaserStrength[D_801778A0];

    if (player->wings.unk_14 > -8.0f) {
        laser = 0;
    }
    switch (laser) {
        case 0:
            for (i = 0; i < ARRAY_COUNT(gObjects70) - 1; i++) {
                if (gObjects70[i].obj.status == 0) {
                    func_800AC290(player, &gObjects70[i], 0.0f, 0.0f, 0, 400.0f / 3.0f);
                    func_800A5FA0(&player->unk_460, 0x09400000, player->unk_1C4);
                    D_80177AA0[player->unk_1C4] = 0.5f;
                    break;
                }
            }
            break;
        case 1:
        case 2:
            for (i = 0; i < ARRAY_COUNT(gObjects70) - 1; i++) {
                if (gObjects70[i].obj.status == 0) {
                    func_800AC290(player, &gObjects70[i], 0.0f, -10.0f, 1, 400.0f / 3.0f);
                    if (laser == 1) {
                        func_800A5FA0(&player->unk_460, 0x0940800C, player->unk_1C4);
                        D_80177AA0[player->unk_1C4] = 0.5f;
                    } else {
                        func_800A5FA0(&player->unk_460, 0x0940802B, player->unk_1C4);
                        D_80177AA0[player->unk_1C4] = 0.75f;
                    }
                    break;
                }
            }
            break;
    }
}

void func_800ACC7C(Player* player) {
    if ((gBombCount[player->unk_1C4] != 0) && (D_80177948[player->unk_1C4] & D_8017797C->button) &&
        (gObjects70[ARRAY_COUNT(gObjects70) - 1].obj.status == 0)) {
        if (D_801778E8 != 0) {
            gBombCount[player->unk_1C4] = 0;
        } else {
            gBombCount[player->unk_1C4]--;
        }
        if (player->unk_1CC == 0) {
            func_800AC290(player, &gObjects70[ARRAY_COUNT(gObjects70) - 1], 0.0f, 0.0f, 3, 180.0f);
        } else if (player->unk_1CC == 1) {
            func_800AC650(player, &gObjects70[ARRAY_COUNT(gObjects70) - 1], 3, 180.0f);
        } else {
            func_800ACDC0(player, &gObjects70[ARRAY_COUNT(gObjects70) - 1], 3);
        }
        gObjects70[ARRAY_COUNT(gObjects70) - 1].unk_48 = 30.0f;
        gObjects70[ARRAY_COUNT(gObjects70) - 1].unk_60 = 0;
        func_8001CB80(player->unk_1C4, 1);
        func_8001CCDC(player->unk_1C4, &gObjects70[ARRAY_COUNT(gObjects70) - 1].sfxPos);
    }
}

void func_800ACDC0(Player* player, Object_70* obj70, s32 objId) {
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;

    Object_70_Initialize(obj70);
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + player->unk_134 + 180.0f) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_134) * 0.017453292f), 1);
    Matrix_RotateZ(gCalcMatrix, -((player->unk_0F8 + player->unk_0F0 + player->unk_134) * 0.017453292f), 1);
    Matrix_RotateX(gCalcMatrix, player->unk_154 * 0.017453292f, 1);
    sp5C.x = 0.0f;
    sp5C.y = 0.0f;
    if (objId == OBJECT_3) {
        sp5C.z = 100.0f;
    } else {
        sp5C.z = 150.0f;
    }
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + player->unk_134 + 180.0f) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_134) * 0.017453292f), 1);
    Matrix_RotateZ(gCalcMatrix, -((player->unk_0F8 + player->unk_0F0 + player->unk_134) * 0.017453292f), 1);
    Matrix_Translate(gCalcMatrix, 0.0f, player->unk_080, 0, 1);
    Matrix_Translate(gCalcMatrix, -10.0f, 25.0f, 0.0f, 1);
    Matrix_RotateX(gCalcMatrix, player->unk_154 * 0.017453292f, 1);
    sp5C.x = 0.0f;
    sp5C.y = 0.0f;
    sp5C.z = 0;
    Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp44);
    obj70->unk_20.x = sp50.x;
    obj70->unk_20.y = sp50.y;
    obj70->unk_20.z = sp50.z;
    obj70->obj.pos.x = player->unk_074 + sp44.x;
    obj70->obj.pos.y = player->unk_078 + sp44.y;
    obj70->obj.pos.z = player->unk_138 + sp44.z;

    obj70->unk_44 = 1.0f;

    obj70->obj.status = 1;
    obj70->obj.id = objId;
    obj70->unk_64 = 30;
    obj70->unk_58 = 1;

    obj70->unk_68 = player->unk_1C4;
}

void func_800AD094(Player* player) {

    s32 i;
    for (i = 0; i < ARRAY_COUNT(gObjects70); i++) {
        if (gObjects70[i].obj.status == 0) {
            func_800ACDC0(player, &gObjects70[i], 6);
            func_800A5FA0(&player->unk_460, 0x09000014, player->unk_1C4);
            player->unk_1F8 = 2;
            player->unk_180 = 10.0f;
            break;
        }
    }
}

s32 func_800AD118(s32 arg0) {
    Object_2F4* var_v1;
    s32 i;

    for (i = 0, var_v1 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, var_v1++) {
        if ((var_v1->obj.status == 2) && (var_v1->unk_0CA[arg0] != 0)) {
            return 0;
        }
    }
    if (D_801778E8 != 0) {
        for (i = 0; i < gCamCount; i++) {
            if (((gPlayer[arg0].unk_1C8 == 3) || (gPlayer[arg0].unk_1C8 == 5)) && (D_80177B00[i][arg0] != 0)) {
                return 0;
            }
        }
    }
    return 1;
}

s32 func_800AD1F4(Player* player) {
    s32 var_a2;
    s32 i;

    if (D_80177974->button & A_BUTTON) {
        D_801779C8[player->unk_1C4]++;
        if (D_801779C8[player->unk_1C4] > 21) {
            D_801779C8[player->unk_1C4] = 21;
        }
        if (D_801779C8[player->unk_1C4] == 20) {
            func_80060F30(&player->unk_460, 0x0900302D, player->unk_1C4);
        }
        if ((!(D_80177974->button & R_TRIG) || !(D_80177974->button & Z_TRIG) || (player->unk_1CC != 0) ||
             (player->unk_1C8 != 3)) &&
            !(gFrameCount & 3) && (func_800AD118(player->unk_1C4) != 0)) {
            if (D_801779C8[player->unk_1C4] >= 21) {
                for (i = 0; i < 13; i++) {
                    if (gObjects70[i].obj.status == 0) {
                        if (player->unk_1CC == 0) {
                            func_800AC290(player, &gObjects70[i], 0.0f, 0.0f, 4, 400.0f);
                        } else {
                            func_800AC650(player, &gObjects70[i], 4, 400.0f);
                        }
                        return 1;
                    }
                }
            }
        }
    } else {
        if (D_801779C8[player->unk_1C4] != 0) {
            D_801779C8[player->unk_1C4]--;
        }
    }

    if (D_8017797C->button & A_BUTTON) {
        for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
            if ((gObjects2F4[i].obj.status == 2) && (gObjects2F4[i].unk_0CA[player->unk_1C4] != 0)) {
                if ((gObjects70[14 - player->unk_1C4].obj.status == 0) ||
                    (gObjects70[14 - player->unk_1C4].obj.id != 8) ||
                    ((gObjects70[14 - player->unk_1C4].obj.id == 8) &&
                     (gObjects70[14 - player->unk_1C4].unk_60 != 0))) {
                    if (player->unk_1CC == 0) {
                        func_800AC290(player, &gObjects70[14 - player->unk_1C4], 0.0f, 0.0f, 8, 70.0f);
                    } else {
                        func_800AC650(player, &gObjects70[14 - player->unk_1C4], 8, 70.0f);
                    }
                    func_80060F30(&player->unk_460, 0x09007029, player->unk_1C4);
                    D_80177BD0[player->unk_1C4] = 5;
                    return 1;
                }
                break;
            }
        }
        if (D_801779C8[player->unk_1C4] > 10) {
            if ((gObjects70[14 - player->unk_1C4].obj.status == 0) || (gObjects70[14 - player->unk_1C4].obj.id != 8) ||
                ((gObjects70[14 - player->unk_1C4].obj.id == 8) && (gObjects70[14 - player->unk_1C4].unk_44 > 1.0f))) {
                if (player->unk_1CC == 0) {
                    func_800AC290(player, &gObjects70[14 - player->unk_1C4], 0.0f, 0.0f, 8, 70.0f);
                } else {
                    func_800AC650(player, &gObjects70[14 - player->unk_1C4], 8, 70.0f);
                }
                func_80060F30(&player->unk_460, 0x09007029, player->unk_1C4);
                D_801779C8[player->unk_1C4] = 0;
                D_80177BD0[player->unk_1C4] = 5;
                return 1;
            }
        }
        D_801779C8[player->unk_1C4] = 0;
    }
    if (D_8017797C->button & B_BUTTON) {
        var_a2 = 0;
        for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
            if ((gObjects2F4[i].obj.status == 2) && (gObjects2F4[i].unk_0CA[player->unk_1C4] != 0)) {
                var_a2 = 1;
                break;
            }
        }
        for (i = 0; i < gCamCount; i++) {
            if (D_80177B00[i][player->unk_1C4] != 0) {
                var_a2 = 1;
                break;
            }
        }
        if (var_a2 != 0) {
            if ((gBombCount[player->unk_1C4] != 0) && (gObjects70[ARRAY_COUNT(gObjects70) - 1].obj.status == 0)) {
                gBombCount[player->unk_1C4]--;
                if (player->unk_1CC == 0) {
                    func_800AC290(player, &gObjects70[ARRAY_COUNT(gObjects70) - 1], 0.0f, 0.0f, 8, 60.0f);
                } else {
                    func_800AC650(player, &gObjects70[ARRAY_COUNT(gObjects70) - 1], 8, 60.0f);
                }
                gObjects70[ARRAY_COUNT(gObjects70) - 1].unk_48 = 30.0f;
                gObjects70[ARRAY_COUNT(gObjects70) - 1].unk_60 = 0;
                func_8001CB80(player->unk_1C4, 1);
                func_8001CCDC(player->unk_1C4, &gObjects70[ARRAY_COUNT(gObjects70) - 1].sfxPos);
                return 1;
            }
        }
    }
    return 0;
}

void func_800AD7F0(Player* player) {
    switch (player->unk_1CC) { /* irregular */
        case 0:
            if ((player->wings.rightState < 2) || (player->wings.leftState < 2)) {
                gLaserStrength[player->unk_1C4] = 0;
            }
            if (func_800AD1F4(player) == 0) {
                if (gLaserStrength[D_801778A0] > 0) {
                    Math_SmoothStepToF(&player->wings.unk_14, -10.0f, 1.0f, 0.5f, 0.0f);
                } else {
                    Math_SmoothStepToF(&player->wings.unk_14, 0.0f, 1.0f, 0.5f, 0.0f);
                }
                if (D_80177938[player->unk_1C4] & D_8017797C->button) {
                    func_800ACABC(player);
                    player->unk_244 = 8;
                }
                if (player->unk_244 != 0) {
                    player->unk_244--;
                    if ((D_80177938[player->unk_1C4] & D_80177974->button) && !(player->unk_244 & 3)) {
                        func_800ACABC(player);
                    }
                }
                func_800ACC7C(player);
            }
            break;
        case 1:
            if (func_800AD1F4(player) == 0) {
                if (D_80177938[player->unk_1C4] & D_8017797C->button) {
                    func_800ACA40(player);
                }
                func_800ACC7C(player);
            }
            break;
        case 3:
            if (D_8017797C->button & A_BUTTON) {
                player->unk_244 = 0;
            }
            if (D_80177974->button & A_BUTTON) {
                if (player->unk_244 == 0) {
                    func_800AD094(player);
                }
                player->unk_244++;
                if (player->unk_244 > 4) {
                    player->unk_244 = 0;
                }
            }
            func_800ACC7C(player);
            break;
    }
}

void func_800ADA28(Player* player) {
    f32 sp3C;
    f32 sp38;

    sp3C = 0.0f;
    if ((player->wings.rightState < 2) && (player->wings.leftState == 2)) {
        sp3C = -17.0f;
    } else if ((player->wings.leftState < 2) && (player->wings.rightState == 2)) {
        sp3C = 17.0f;
    }
    sp38 = 0.1f;
    if ((D_80177974->button & Z_TRIG) && !(D_80177974->button & R_TRIG)) {
        sp3C = 90.0f;
        sp38 = 0.2f;
        if (player->unk_12C < 70.0f) {
            Math_SmoothStepToF(&player->wings.unk_04, -70.0f, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_08, -70.0f, 0.3f, 100.0f, 0.f);
            Math_SmoothStepToF(&player->wings.unk_0C, 70.0f, 0.3f, 100.0f, 0.f);
            Math_SmoothStepToF(&player->wings.unk_10, 70.0f, 0.3f, 100.0f, 0.f);
            if (player->unk_078 < (D_80177940 + 70.0f)) {
                player->unk_078 += 6.0f;
            }
        }
    }

    if ((D_80177974->button & R_TRIG) && !(D_80177974->button & Z_TRIG)) {
        sp3C = -90.0f;
        sp38 = 0.2f;
        if (player->unk_12C > -70.0f) {
            Math_SmoothStepToF(&player->wings.unk_04, 70.0f, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_08, 70.0f, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_0C, -70.0f, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_10, -70.0f, 0.3f, 100.0f, 0.0f);
            if (player->unk_078 < (D_80177940 + 70.0f)) {
                player->unk_078 += 6.0f;
            }
        }
    }
    Math_SmoothStepToF(&player->unk_12C, sp3C, sp38, 10.0f, 0.f);
    if (D_8017797C->button & Z_TRIG) {
        player->unk_48C = 1;
        if (player->unk_1E0 != 0) {
            player->unk_1DC = 1;
            player->unk_1E8 = 10;
            player->unk_1EC = player->unk_1F0 = 30;
            player->unk_494 = 1;
        } else {
            player->unk_1E0 = 10;
        }
    }
    if (D_8017797C->button & R_TRIG) {
        player->unk_48C = 1;
        if (player->unk_1E4 != 0) {
            player->unk_1DC = 1;
            player->unk_1E8 = 10;
            player->unk_1EC = player->unk_1F0 = -30;
            player->unk_494 = 1;
        } else {
            player->unk_1E4 = 10;
        }
    }
}

void func_800ADD98(Player* player) {
    Math_SmoothStepToF(&player->unk_170, 0.0f, 1.0f, 0.2f, 0.0f);
    Math_SmoothStepToF(&player->unk_16C, 0.0f, 1.0f, 0.2f, 0.0f);
    if (D_8017797C->button & Z_TRIG) {
        if ((player->unk_1E0 != 0) && (player->unk_12C > 0.0f) && (player->unk_2BC < 10.0f)) {
            player->unk_1DC = 1;
            player->unk_1E8 = 15;
            player->unk_1EC = player->unk_1F0 = 20;
        } else {
            player->unk_1E0 = 10;
        }
    }
    if (D_8017797C->button & R_TRIG) {
        if ((player->unk_1E4 != 0) && (player->unk_12C < 0.0f) && (player->unk_2BC < 10.0f)) {
            player->unk_1DC = 1;
            player->unk_1E8 = 15;
            player->unk_1EC = player->unk_1F0 = -20;
        } else {
            player->unk_1E4 = 10;
        }
    }
    player->unk_18C = fabsf(__sinf(player->unk_12C * 0.017453292f) * 25.0f);
    player->unk_18C += fabsf(__sinf(player->unk_130 * 0.017453292f) * 20.0f);
}

void func_800ADF58(Player* player) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_v0;

    player->unk_140 = -player->unk_0C0.z;
    player->unk_144 += -player->unk_0C0.z;
    D_80177D08 = -player->unk_0C0.z;
    D_80177D20 = player->unk_144;
    D_80177CE8 += player->unk_140;
    if (D_801784AC == 4) {
        D_80177CC8 = player->unk_140;
    }
    if ((D_80178284 == 0) && (player->unk_144 > 500000.0f)) {
        player->unk_144 = 0.0f;
        player->unk_07C = 0.0f;
        D_80177DC8 = 0;
        func_800A6148();
    }
    player->unk_138 = player->unk_07C + player->unk_08C.x;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;

    while (1) {
        if (player->unk_0F8 > 360.0f) {
            player->unk_0F8 -= 360.0f;
        } else {
            break;
        }
    }
    while (1) {
        if (player->unk_0F8 < -360.0f) {
            player->unk_0F8 += 360.0f;
        } else {
            break;
        }
    }
    if (gCurrentLevel == LEVEL_UNK_15) {
        Math_SmoothStepToF(&player->unk_0B4, 10.0f, 0.1f, 0.5f, 0.0001f);
        player->unk_074 += Math_SmoothStepToF(&player->unk_0AC, player->unk_0B8, 0.1f, player->unk_0B4, 0.0001f);
        player->unk_078 += Math_SmoothStepToF(&player->unk_0B0, player->unk_0BC, 0.1f, player->unk_0B4, 0.0001f);
    } else {
        Math_SmoothStepToF(&player->unk_0B4, D_80177D08 * 0.54f, 0.1f, 2.0f, 0.0001f);
        D_801779E4 = Math_SmoothStepToF(&player->unk_0AC, player->unk_0B8, 0.1f, player->unk_0B4, 0.0001f);
        D_801779F4 = Math_SmoothStepToF(&player->unk_0B0, player->unk_0BC, 0.1f, player->unk_0B4, 0.0001f);
    }
    if (player->unk_210 != 0) {
        player->unk_210--;
        Math_SmoothStepToF(&player->unk_114, player->unk_118, 0.03f, 0.5f, 0.0001f);
        Math_SmoothStepToF(&player->unk_120, player->unk_124, 0.03f, 0.5f, 0.0001f);
    } else {
        Math_SmoothStepToF(&player->unk_114, 0.0f, 0.03f, 0.5f, 0.0001f);
        Math_SmoothStepToF(&player->unk_120, 0.0f, 0.03f, 0.5f, 0.0001f);
    }
}

void func_800AE278(Player* player) {
    f32 var_fv1;
    s32 var_v0;

    var_v0 = 0;
    if (gCamCount != 1) {
        if (player->unk_074 > 12000.0f) {
            var_v0 = 1;
            player->unk_074 -= 24000.0f;
            player->unk_040.x -= 24000.0f;
            player->unk_04C.x -= 24000.0f;
        }
        if (player->unk_074 < -12000.0f) {
            var_v0 = 1;
            player->unk_074 += 24000.0f;
            player->unk_040.x += 24000.0f;
            player->unk_04C.x += 24000.0f;
        }

        if (player->unk_07C > 12000.0f) {
            var_v0 = 1;
            player->unk_07C -= 24000.0f;
            player->unk_040.z -= 24000.0f;
            player->unk_04C.z -= 24000.0f;
        }
        if (player->unk_07C < -12000.0f) {
            var_v0 = 1;
            player->unk_07C += 24000.0f;
            player->unk_040.z += 24000.0f;
            player->unk_04C.z += 24000.0f;
        }
        if (var_v0 != 0) {
            D_80177B00[player->unk_1C4][0] = D_80177B00[player->unk_1C4][1] = D_80177B00[player->unk_1C4][2] =
                D_80177B00[player->unk_1C4][3] = 0;
        }
    } else {
        var_fv1 = 12500.0f;
        if (gCurrentLevel == LEVEL_CORNERIA) {
            var_fv1 = 8000.0f;
        } else if (gCurrentLevel == LEVEL_BOLSE) {
            var_fv1 = 10000.0f;
        } else if (gCurrentLevel == LEVEL_SECTOR_Z) {
            var_fv1 = 20000.0f;
        } else if ((gCurrentLevel == LEVEL_VENOM_2) && (D_80177AB0 >= 4)) {
            var_fv1 = 100000.0f;
        }
        if ((var_fv1 < fabsf(player->unk_074)) || (var_fv1 < fabsf(player->unk_07C))) {
            player->unk_1C8 = 5;
            player->unk_19C = 0;
            player->unk_1D0 = 0;
            player->unk_000 = 0.0f;
            player->unk_004 = 0.0f;
        }
    }
}

void func_800AE4A4(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AE4A4.s")

void func_800AECAC(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AECAC.s")

void func_800AF07C(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AF07C.s")

void func_800AF928(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AF928.s")

void func_800B00C0(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B00C0.s")

void func_800B0194(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B0194.s")

void func_800B0F50(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B0F50.s")

void func_800B2130(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2130.s")

void func_800B22C0(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B22C0.s")

void func_800B2574(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2574.s")

void func_800B2BE0(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2BE0.s")

void func_800B2C00(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2C00.s")

void func_800B3010(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B3010.s")

void func_800B3314(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B3314.s")

void func_800B39E0(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B39E0.s")

void func_800B40AC(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B40AC.s")

void func_800B415C(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B415C.s")

void func_800B41E0(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B41E0.s")

void func_800B41EC(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B41EC.s")

void func_800B42B0(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B42B0.s")

void func_800B44C4(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B44C4.s")

void func_800B46F8(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B46F8.s")

void func_800B48BC(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B48BC.s")

void func_800B56BC(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B56BC.s")

void func_800B5D30(Player* player, s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B5D30.s")

void func_800B5FBC(Player* player, s32 arg1, s32 arg2);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B5FBC.s")

void func_800B63BC(Player* player, s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B63BC.s")

void func_800B6848(Player* player, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B6848.s")

void func_800B6BFC(Player* player, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B6BFC.s")

void func_800B6F50(f32, f32, f32, f32, f32, f32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B6F50.s")

void func_800B7184(Player* player, s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B7184.s")

void func_800B71E4(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B71E4.s")

void func_800B73E0(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B73E0.s")

void func_800B79B0(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B79B0.s")

void func_800B832C(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B832C.s")

void func_800B852C(s32 arg0, Object_6C* obj6C);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B852C.s")

void func_800B86A4(f32* arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B86A4.s")

void func_800B86CC(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B86CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/D_800D82F0.s")

/*
 * File: fox_demo.c
 * System: Game Engine
 * Description: Starfox Cutscene Handler
 */

#include "global.h"

extern Gfx D_1024AC0[];
extern Gfx D_60320E0[];
extern Gfx D_7010970[];
extern Gfx* D_E000000;
extern Gfx* D_E003AB0;

extern s32 D_800C9E90[];

extern AnimationHeader D_60265B4[];
extern AnimationHeader D_602B8DC[];
extern AnimationHeader D_60034C4[];
extern AnimationHeader D_602A2CC[];
extern AnimationHeader D_602CEB4[];
extern AnimationHeader D_602B778[];

extern f32 D_80178454;
extern f32 D_80178458;
extern f32 D_80178464;
extern f32 D_80178468;
extern f32 D_80178474;
extern f32 D_80178478;

extern Gfx D_400AAE0[];
extern Gfx D_6000D80[];
extern Gfx D_600BAA0[];
extern Gfx D_60132A0[];
extern Gfx D_60132B0[];
extern Gfx D_6014A40[];
extern Gfx D_6020810[];

extern AnimationHeader D_6020A40;
extern Limb* D_6020C6C;
extern Limb* D_602D140;

Vec3f D_800C9F60[] = {
    { 2000.0f, 2000.0f, 2000.0f },
    { -2000.0f, 2000.0f, 2000.0f },
    { 0.0f, -3000.0f, 3000.0f },
    { 5000.0f, -3000.0f, -3000.0f },
};

f32 D_800C9F90[] = { 75.0f, -80.0f, 85.0f, 0.0f };

Vec3f D_800C9FA0[] = {
    { 200.0f, -10.0f, 200.0f },
    { -200.0f, 20.0f, 200.0f },
    { 0.0f, 50.0f, 400.0f },
    { -2000.0f, -1000.0f, 0.0f },
};

f32 D_800C9FD0[] = { -1200.0f, 1200.0f, 0.0f, 0.0f };

f32 D_800C9FE0[] = { 0.0f, 0.0f, 600.0f, 2000.0f };

f32 D_800C9FF0[] = { -100.0f, 0.0f, 100.0f, 500.0f };

f32 D_800CA000[] = { -150.0f, 150.0f, 0.0f, 0.0f };

f32 D_800CA010[] = { 0.0f, 0.0f, 80.0f, 1000.0f };

f32 D_800CA020[] = { 45.0f, -45.0f, 10.0f, 0.0f };

s32 D_800CA030[] = { 0, 0, 0, 1 };

s32 D_800CA040[] = { 0, 0, 0, 0 };

f32 D_800CA050[] = { 210.0f, -210.0f, 0.0f };

f32 D_800CA05C[] = { -60.0f, -60.0f, -120.0f };

f32 D_800CA068[] = { -150.0f, -150.0f, -300.0f };

f32 D_800CA074[] = { 360.0f, -360.0f, 0.0f };

f32 D_800CA080[] = { -400.0f, 0.0f, 400.0f };

f32 D_800CA08C[] = { 0.0f, 200.0f, 0.0f };

f32 D_800CA098[] = { 1.0f, -0.8999999762f, 0.6999999881f };

f32 D_800CA0A4[] = { 150.0f, 100.0f, 200.0f };

f32 D_800CA0B0[] = { 200.0f, 300.0f, 500.0f };

Vec3f D_800CA0BC[] = {
    { -1373.0, 484.0, -374.0 },
    { 1373.0, 484.0, -374.0 },
    { -1373.0, -704.0, -374.0 },
    { 1373.0, -704.0, -374.0 },
};

Vec3f D_800CA0EC[] = {
    { 0.0, 40.0, -2278.0 },
    { 295.0, -92.0, -1301.0 },
    { -295.0, -92.0, -1301.0 },
};

Vec3f D_800CA110[8] = {
    { 170.0f, -35.0f, -380.0f },   { -170.0f, -40.0f, -380.0f }, { 170.0f, -130.0f, -380.0f },
    { -170.0f, -140.0f, -380.0f }, { 140.0f, 40.0f, -250.0f },   { -150.0f, 40.0f, -250.0f },
    { 140.0f, 0.0f, -250.0f },     { -150.0f, 0.0f, -250.0f },
};

f32 D_800CA170[] = {
    0.150000006f, 0.4499999881f, 0.75f, 1.299999952f, 0.75f, 0.4499999881f, 0.150000006f, 0.0f,
};

f32 D_800CA190[] = { 5.0f, 5.199999809f };

f32 D_800CA198[] = {
    0.5f, 1.5f, 2.5f, 1.5f, 0.5f, 0.200000003f, 0.200000003f,
};

f32 D_800CA1B4[] = {
    -30.0f, -60.0f, -90.0f, -120.0f, -150.0f, -180.0f, -200.0, -210.0,
};

f32 D_800CA1D4[] = {
    1.5f, 0.8700000048f, 0.8299999833f, 0.75f, 0.6999999881f, 0.6000000238f, 0.400000006f, 0.1000000015f,
};

AnimationHeader* D_800CA1F4[] = {
    D_60265B4, D_602B8DC, D_60034C4, D_602A2CC, D_602CEB4, D_602B778, (AnimationHeader*) 0x0601F3B8,
};

extern void func_E6A810_8018769C(Player*);
extern void func_801882CC(Player*, OSContPad**, OSContPad**);
extern void func_8018CD8C(Player*);
extern void func_8018DA58(Object_2F4*);
extern void func_8018E084(Player*);
extern void func_8018ED9C(Object_2F4*);
extern void func_8018EF6C(Player*);
extern void func_8018F880(Player*);
extern void func_8018F94C(Player*);
extern void func_80191160(Player*);
extern void func_80192E20(Player*);
extern void func_80193A30(Player*);
extern void func_80193C4C(Player*);
extern void func_80194728(Player*);
extern void func_80195E44(Object_2F4*);
extern void func_80196BF8(Player*);
extern void func_80196D88(Player*);
extern void func_80197290(Player*);
extern void func_80197F10(Object_2F4*);
extern void func_801988B8(Player*);
extern void func_8019BA64(Player*);
extern void func_8019C85C(Player*);
extern void func_8019DD20(Object_2F4*);
extern void func_8019E5F0(Object_2F4*);
extern void func_8019EE60(Player*);
extern void func_8019FF00(Object_2F4*);
extern void func_E9F1D0_801A0AC0(Player*);
extern void func_801A8BE8(Object_2F4*);
extern void func_801AB9B0(Player*);
extern void func_E6A810_801AC754(Player*);
extern void func_801AF8F4(Player*, OSContPad**, OSContPad**);
extern void func_801B28BC(Object_2F4*);
extern void func_801B3D04(Player*, OSContPad**, OSContPad**);
extern void func_801BE0F0(Object_2F4*);

void func_80048AC0(s32 teamId) {
    s32 teamShield;

    if (teamId == 1) {
        if (gTeamShields[1] < 0x40) {
            func_800BA808(gMsg_ID_20303, RCID_FALCO);
            return;
        }
        if ((s32) (Play_GetMaxShields() * 0.8f) < gPlayer[0].shields) {
            func_800BA808(gMsg_ID_20017, RCID_FALCO);
            return;
        }
        if ((s32) (Play_GetMaxShields() * 0.3f) < gPlayer[0].shields) {
            func_800BA808(gMsg_ID_20019, RCID_FALCO);
            return;
        }
        func_800BA808(gMsg_ID_20018, RCID_FALCO);
        return;
    }

    teamShield = gTeamShields[teamId];

    if (teamShield > 160) {
        switch (teamId) {
            case 2:
                func_800BA808(gMsg_ID_20011, RCID_SLIPPY);
                break;
            case 3:
                func_800BA808(gMsg_ID_20012, RCID_PEPPY);
                break;
        }
    } else if (teamShield > 64) {
        switch (teamId) {
            case 2:
                func_800BA808(gMsg_ID_20013, RCID_SLIPPY);
                break;
            case 3:
                func_800BA808(gMsg_ID_20014, RCID_PEPPY);
                break;
        }
    } else {
        switch (teamId) {
            case 2:
                func_800BA808(gMsg_ID_20015, RCID_SLIPPY);
                break;
            case 3:
                func_800BA808(gMsg_ID_20016, RCID_PEPPY);
                break;
        }
    }
}

void func_80048CC4(Object_2F4* obj2F4, s32 arg1) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJ_2F4_195;
    obj2F4->obj.pos.x = D_800C9F60[arg1].x + gPlayer[0].pos.x;
    obj2F4->obj.pos.y = D_800C9F60[arg1].y + gPlayer[0].pos.y;
    obj2F4->obj.pos.z = D_800C9F60[arg1].z + gPlayer[0].unk_138;
    obj2F4->unk_0F4.y = 0.0f;
    obj2F4->unk_0F4.z = D_800C9F90[arg1];
    Object_SetInfo(&obj2F4->info, obj2F4->obj.id);

    if (arg1 == 3) {
        Audio_PlaySfx(0x11030010U, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        Audio_PlaySfx(0x31024059U, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        obj2F4->unk_0B6 = 1;
    } else {
        obj2F4->unk_07C = 1;
        Audio_PlaySfx(0x3100000CU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_80048E40(Player* player) {
    Vec3f sp5C;
    Vec3f sp50;
    s32 pad[2];
    f32 temp_ft3;
    f32 temp_ret;
    s32 temp_v1;

    gBosses[1].obj.status = 0;
    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);

    switch (player->unk_1D0) {
        case 0:
            player->unk_4DC = 0;
            func_8001A38C(1, &player->unk_460);
            player->unk_1D0++;
            D_80177A48[0] = 0.0f;
            D_80177A48[1] = 0.0f;
            D_80177A48[2] = 0.0f;
            player->wings.unk_2C = 1;
            D_80177A80 = 0;
            /* fallthrough */
        case 1:
            D_80177A48[1] -= D_80177A48[2];
            Math_SmoothStepToF(&D_80177A48[2], 1.2f, 0.1f, 0.01f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 0.1f, 0.002f, 0.0f);
            Math_SmoothStepToF(&player->unk_0D0, 0.0f, 1.0f, 0.5f, 0.0f);
            Matrix_RotateX(gCalcMatrix, -0.08726646f, 0);
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 1);
            sp5C.x = 0.0f;
            sp5C.y = 0.0f;
            sp5C.z = 300.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp50);
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->unk_138 + D_80177D20;

            switch (D_80177A80) {
                case 101:
                    if (gTeamShields[1] > 0) {
                        func_80048CC4(&gObjects2F4[0], 0);
                    }
                    if (gTeamShields[2] > 0) {
                        func_80048CC4(&gObjects2F4[1], 1);
                    }
                    if (gTeamShields[3] > 0) {
                        func_80048CC4(&gObjects2F4[2], 2);
                    }
                    break;

                case 100:
                    D_80177840 = 0x64;
                    break;

                case 200:
                    D_80177830 = 1;
                    break;

                case 400:
                    D_80177830 = 0;
                    break;

                case 420:
                    gObjects2F4[0].unk_0B8 = 1;
                    break;

                case 430:
                    gObjects2F4[1].unk_0B8 = 1;
                    break;

                case 440:
                    gObjects2F4[2].unk_0B8 = 1;
                    break;

                case 450:
                    Audio_PlaySfx(0x09000002U, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    player->unk_194 = 5.0f;
                    player->unk_190 = 5.0f;

                default:
                    break;
            }
            if (D_80177A80 >= 0x1C3) {
                Math_SmoothStepToF(&D_80177A48[0], 1.0f, 0.1f, 0.004f, 0.0f);
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.1f;
                player->unk_190 = 2.0f;

                if (D_80177A80 == 530) {
                    func_8001DBD0(0x32);
                }

                if (D_80177A80 > 540) {
                    D_80178358 = 255;
                    D_80178348 = (D_80178350 = (D_80178354 = 0));
                    D_8017835C = 8;
                    if (D_80178340 == 255) {
                        player->state_1C8 = PLAYERSTATE_1C8_6;
                        player->timer_1F8 = 0;
                        D_8017837C = 4;
                        if (gCurrentLevel == LEVEL_METEO) {
                            D_800D3180[1] = Play_CheckMedalStatus(0xC8U) + 1;
                        } else {
                            D_800D3180[2] = Play_CheckMedalStatus(0x96U) + 1;
                        }
                        D_80177930 = 2;
                    }
                }
            } else {
                D_80177978 = player->pos.x + sp50.x;
                D_80177980 = player->pos.y + sp50.y;
                D_80177988 = player->unk_138 + D_80177D20 + sp50.z;
            }

            break;
    }

    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);

    sp5C.x = 0.0f;
    sp5C.y = 0.0f;
    sp5C.z = player->unk_0D0 + player->unk_110;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
    player->vel.x = sp50.x;
    player->vel.z = sp50.z;
    player->vel.y = sp50.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->unk_138 = player->pos.z + player->unk_08C;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    player->unk_088 += 10.0f;
    player->unk_080 = (-__sinf(player->unk_088 * M_DTOR)) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_80049630(Object_2F4* obj2F4) {
    Vec3f sp3C;
    Vec3f sp30;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_18C[0].x = gPlayer[0].pos.x + D_800C9FA0[obj2F4->index].x;
            obj2F4->unk_18C[0].y = gPlayer[0].pos.y + D_800C9FA0[obj2F4->index].y;
            obj2F4->unk_18C[0].z = gPlayer[0].pos.z + D_800C9FA0[obj2F4->index].z;
            Math_SmoothStepToF(&obj2F4->obj.pos.x, obj2F4->unk_18C[0].x, 0.05f, 50.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->obj.pos.y, obj2F4->unk_18C[0].y, 0.05f, 50.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->obj.pos.z, obj2F4->unk_18C[0].z, 0.05f, 50.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->unk_0F4.x, gPlayer[0].unk_0E4, 0.1f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->unk_0F4.y, gPlayer[0].unk_0E8, 0.1f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->unk_0F4.z, 0.0f, 0.05f, 0.2f, 0.0001f);
            break;

        case 1:
            obj2F4->unk_0B8 = 2;
            Audio_PlaySfx(0x09000002U, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            obj2F4->timer_0BC = 0x96;
            obj2F4->unk_188 = 5.0f;

        case 2:
            obj2F4->unk_07C = 2;
            obj2F4->unk_114 += 2.0f;
            if (obj2F4->timer_0BC == 0) {
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            break;
    }
    Matrix_RotateY(gCalcMatrix, (obj2F4->unk_0F4.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(obj2F4->unk_0F4.x * M_DTOR), 1);

    sp3C.x = 0.0f;
    sp3C.y = 0.0f;
    sp3C.z = obj2F4->unk_114;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp3C, &sp30);

    obj2F4->vel.x = sp30.x;
    obj2F4->vel.y = sp30.y;
    obj2F4->vel.z = sp30.z;

    obj2F4->obj.rot.x = -obj2F4->unk_0F4.x;
    obj2F4->obj.rot.y = obj2F4->unk_0F4.y + 180.0f;
    obj2F4->obj.rot.z = -obj2F4->unk_0F4.z;
}

void func_8004990C(Player* player) {
    if (D_801784AC == 0) {
        D_80177CE8 += 60.0f;
    }
    player->unk_138 = player->pos.z + player->unk_08C;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
}

void func_80049968(Object_2F4* obj2F4, s32 arg1) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJ_2F4_195;
    obj2F4->obj.pos.x = D_800C9FD0[arg1];
    obj2F4->obj.pos.y = D_800C9FE0[arg1];
    obj2F4->obj.pos.z = D_800C9FF0[arg1] + ((void) 0, gPlayer)[0].unk_138;
    obj2F4->unk_114 = D_800CA000[arg1];
    obj2F4->unk_118 = D_800CA010[arg1];
    obj2F4->unk_0B6 = D_800CA030[arg1];
    obj2F4->unk_0B8 = D_800CA040[arg1];
    obj2F4->obj.rot.z = D_800CA020[arg1];
    obj2F4->obj.rot.y = 180.0f;
    obj2F4->vel.z = gPlayer[0].vel.z;
    Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
    obj2F4->unk_07C = 1;
    Audio_PlaySfx(0x3100000CU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_80049A9C(Object_8C* obj8c, f32 x, f32 y, f32 z) {
    Object_8C_Initialize(obj8c);
    obj8c->obj.status = 1;
    obj8c->obj.id = OBJ_8C_346;
    obj8c->timer_50 = 100;
    obj8c->scale2 = 0.2f;
    obj8c->obj.pos.x = x;
    obj8c->obj.pos.y = y;
    obj8c->obj.pos.z = z;
    obj8c->vel.z = 40.0f;
    obj8c->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8c->info, obj8c->obj.id);
}

void func_80049B44(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (!gObjects8C[i].obj.status) {
            x = (Rand_ZeroOne() - 0.5f) * 400.0f;
            y = (Rand_ZeroOne() - 0.5f) * 400.0f;
            z = (-D_80177D20 - 500.0f) - Rand_ZeroOne() * 500.0f;
            func_80049A9C(&gObjects8C[i], x, y, z);
            break;
        }
    }
}

void func_80049C0C(Player* player) {
    s32 var_v0;
    s32 pad[4];

    player->pos.x += player->vel.x;
    player->unk_228 = 0;
    player->unk_238 = 0;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    func_8004990C(player);

    player->unk_140 = -player->vel.z;
    player->unk_144 += -player->vel.z;
    D_80177D20 = player->unk_144;

    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->pos.x, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&player->pos.y, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.x, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);

    switch (player->unk_1D0) {
        case 0:
            player->unk_4DC = 0;
            D_80178414 = 100.0f;
            player->unk_1D0 = 1;
            D_80178410 = 1;
            D_80178488 = 0;
            player->vel.x = 0.0f;
            player->vel.y = 0.0f;
            player->vel.z = -500.0f;
            player->unk_0CC = -500.0f;

            if (gTeamShields[1] > 0) {
                func_80049968(&gObjects2F4[0], 0);
            }
            if (gTeamShields[2] > 0) {
                func_80049968(&gObjects2F4[1], 1);
            }
            if (gTeamShields[3] > 0) {
                func_80049968(&gObjects2F4[2], 2);
            }

            func_80049968(&gObjects2F4[3], 3);
            player->timer_1F8 = 0x32;
            break;

        case 1:
            Math_SmoothStepToF(&D_801779A8[player->num], 100.0f, 1.0f, 4.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
            D_80178414 *= 1.05f;
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 2;
                player->timer_1F8 = 0x96;
            }
            player->unk_190 = 2.0f;
            player->unk_08C -= 2.0f;
            gBlurAlpha = 128;
            break;

        case 2:
            Math_SmoothStepToF(&D_801779A8[player->num], 100.0f, 1.0f, 3.0f, 0.0f);
            if (D_80178414 < 20000.0f) {
                D_80178414 *= 1.01f;
            }

            if (player->timer_1F8 <= 100) {
                if (player->timer_1F8 == 100) {
                    func_800A6028(&player->unk_460, 0x0940802AU);
                    player->unk_194 = 5.0f;
                    player->unk_190 = 5.0f;
                }

                player->unk_08C += player->unk_0CC;
                player->unk_0CC = player->unk_0CC - 100.0f;

                if (player->unk_08C < -15000.0f) {
                    player->unk_08C = 0.0f;
                    player->unk_0CC = 0.0f;
                    player->unk_234 = 0;
                }
            }
            var_v0 = 1;
            player->unk_190 = 2.0f;

            if ((player->timer_1F8 == 0x5F) && (gTeamShields[1] > 0)) {
                gObjects2F4[0].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[0].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if ((player->timer_1F8 == 0x5A) && (gTeamShields[3] > 0)) {
                gObjects2F4[2].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[2].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if ((player->timer_1F8 == 85) && (gTeamShields[2] > 0)) {
                gObjects2F4[1].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[1].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (player->timer_1F8 == 60) {
                gObjects2F4[3].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[3].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
            }

            if (player->timer_1F8 == 50) {
                player->unk_1D0 = 4;
                player->timer_1F8 = 0;
            }
            break;

        case 4:
            Math_SmoothStepToF(&D_801779A8[player->num], 100.0f, 1.0f, 3.0f, 0.0f);
            player->unk_034 -= 0.5f;
            if (player->timer_1F8 == 0) {
                D_80178348 = D_80178350 = D_80178354 = 255;
                D_80178358 = 255;
                D_8017835C = 8;
                if (D_80178340 == 255) {
                    func_800A6148();
                    player->unk_1D0 = 5;
                    player->timer_1F8 = 0xA;
                    player->unk_08C = -10000.0f;
                    player->unk_0AC = player->unk_0B8 = player->unk_0B0 = player->unk_0BC = player->pos.x =
                        player->pos.y = player->pos.z = player->unk_130 = player->unk_034 = player->unk_138 =
                            player->vel.z = player->unk_144 = D_80177D20 = player->unk_144 = D_80177CB0 = D_80177D20 =
                                0.0f;

                    player->timer_27C = gSavedHitCount = D_80177DC8 = D_80177CA0 = 0;

                    player->unk_234 = 1;
                    D_8017827C = 1;
                    D_800CA230 = 0.15f;
                    Audio_PlaySfx(0x11407079U, &D_800C5D28, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_800AB334();
                }
            }
            break;

        case 5:
            Math_SmoothStepToF(&D_801779A8[player->num], 100.0f, 1.0f, 3.0f, 0.0f);
            if (player->timer_1F8 == 0) {
                D_80178358 = 0;
                D_8017835C = 8;
                if (D_80178340 == 0) {
                    player->unk_1D0 = 6;
                    player->timer_1F8 = 50;
                }
            }
            break;

        case 6:
            Math_SmoothStepToF(&D_80178414, 0.0f, 0.2f, 1000.0f, 0.1f);
            Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.2f, 500.0f, 0.1f);
            if (player->timer_1F8 < 0x1E) {
                for (var_v0 = 0; var_v0 < 3; var_v0++) {
                    func_80049B44();
                }
            }

            if (player->timer_1F8 == 30) {
                D_80178410 = 0x12C;
                func_8001D444(0, 0x803AU, 0, 0xFFU);
            }

            if (player->timer_1F8 == 0) {
                D_8015F960 = 0.0f;
                D_80178414 = 0.0f;
                player->state_1C8 = 3;
                player->unk_014 = 0.0f;
                player->unk_018 = 0.0f;
                D_801782B8 = 0;
                D_80178488 = 1;
            }
            Math_SmoothStepToF(&player->camEye.y, (player->pos.y * player->unk_148) + 50.0f, 0.2f, 15.0f, 0.01f);
            Math_SmoothStepToF(&player->camAt.y, (player->pos.y * player->unk_14C) + 20.0f, 0.2f, 15.0f, 0.01f);
            break;

        default:
            return;
    }
}

void func_8004A52C(Player* player) {
    D_80177A80 += 1;
    if (gLevelMode == LEVELMODE_ON_RAILS) {
        switch (gCurrentLevel) {
            case LEVEL_CORNERIA:
                func_8018F880(player);
                func_800AA800(player);
                break;

            case LEVEL_METEO:
                func_8018CD8C(player);
                break;

            case LEVEL_SECTOR_X:
                func_80193A30(player);
                break;

            case LEVEL_TITANIA:
                func_E6A810_8018769C(player);
                func_800AA800(player);
                break;

            case LEVEL_ZONESS:
                func_E16C50_8019D428(player);
                break;

            case LEVEL_MACBETH:
                func_E6A810_801AC754(player);
                break;

            case LEVEL_SECTOR_Y:
                func_E9F1D0_801A0AC0(player);
                break;

            case LEVEL_SOLAR:
                func_E16C50_801A10F4(player);
                break;

            case LEVEL_VENOM_1:
                func_801988B8(player);
                func_800AA800(player);
                break;

            case LEVEL_AQUAS:
                func_800935E8(player);
                break;

            case LEVEL_AREA_6:
                func_E16C50_8018DF74(player);
                break;
        }
        func_8004990C(player);
        return;
    }
    switch (gCurrentLevel) {
        case LEVEL_FORTUNA:
            func_8002ED60(player);
            func_800AA800(player);
            break;

        case LEVEL_VENOM_2:
            func_80196BF8(player);
            func_800AA800(player);
            break;

        case LEVEL_BOLSE:
            func_8018EF6C(player);
            func_800AA800(player);
            break;

        case LEVEL_KATINA:
            func_80192E20(player);
            func_800AA800(player);
            break;

        case LEVEL_SECTOR_Z:
            func_8019BA64(player);

        default:
            break;
    }
}

void func_8004A700(Object_2F4* obj2F4, s32 arg1) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJ_2F4_195;
    obj2F4->obj.pos.x = gPlayer[0].pos.x;
    obj2F4->obj.pos.y = gPlayer[0].pos.y - 1000.0f;
    obj2F4->obj.pos.z = gPlayer[0].pos.z;
    obj2F4->unk_114 = D_800CA050[arg1];
    obj2F4->unk_118 = D_800CA05C[arg1];
    obj2F4->unk_11C = D_800CA068[arg1];
    obj2F4->unk_120 = 4.0f;
    obj2F4->unk_130 = Rand_ZeroOne() * 100.0f;
    obj2F4->unk_134 = Rand_ZeroOne() * 100.0f;
    obj2F4->obj.rot.z = D_800CA074[arg1];
    obj2F4->unk_07C = 1;
    Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
    Audio_PlaySfx(0x3100000CU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8004A840(s32 obj2F4) {
    func_8004A700(&gObjects2F4[obj2F4], obj2F4);
}

void func_8004A888(Object_8C* obj8C) {
    Vec3f sp2C;
    Vec3f sp20;

    Matrix_RotateY(gCalcMatrix, (gPlayer[0].unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(gPlayer[0].unk_0E4 * M_DTOR), 1);
    Object_8C_Initialize(obj8C);

    obj8C->obj.status = 1;
    sp2C.x = (Rand_ZeroOne() - 0.5f) * 1500.0f;
    sp2C.y = (Rand_ZeroOne() - 0.5f) * 800.0f;
    sp2C.z = 3000.0f;

    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);

    obj8C->obj.pos.x = gPlayer[0].pos.x + sp20.x;
    obj8C->obj.pos.y = gPlayer[0].pos.y + sp20.y;
    obj8C->obj.pos.z = gPlayer[0].pos.z + sp20.z;
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    sp2C.z = -80.0f;

    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);

    obj8C->vel.x = sp20.x;
    obj8C->vel.y = sp20.y;
    obj8C->vel.z = sp20.z;
    obj8C->obj.id = OBJ_8C_352;
    obj8C->timer_50 = 0x28;
    obj8C->unk_46 = 0x90;
    obj8C->scale2 = (Rand_ZeroOne() * 30.0f) + 10.0f;

    if (Rand_ZeroOne() < 0.5f) {
        obj8C->obj.rot.z = 180.0f;
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8004AA84(void) {
    s32 i;

    if (!(gFrameCount & 7) && (gLevelType == LEVEL_CORNERIA)) {
        for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
            if (!gObjects8C[i].obj.status) {
                func_8004A888(&gObjects8C[i]);
                break;
            }
        }
    }
}

void func_8004AAF4(Player* player) {
    s32 pad;
    Vec3f sp70;
    Vec3f sp64;
    Object_2F4* var_s0;
    f32 var_s1;
    f32 var_s2;
    f32 var_s3;
    s32 i;
    s32 pad1;
    s32 pad2;

    D_80177A80 += 1;
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    if (D_80177A80 == 37) {
        D_80177E84 = 1;
        if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
            func_800BA808(gMsg_ID_19466, RCID_FOX);
            func_8001D444(0, 0x803DU, 0, 0xFFU);
        } else if (gCurrentLevel != LEVEL_TRAINING) {
            func_800BA808(gMsg_ID_20180, RCID_FOX);
            if (gCurrentLevel == 5) {
                func_8001D444(0, D_800C9E90[gCurrentLevel], 0, 2U);
            } else {
                func_8001D444(0, D_800C9E90[gCurrentLevel], 0, 0xFFU);
            }
        }
    }
    player->wings.unk_10 = 0.0f;
    player->wings.unk_08 = 0.0f;
    player->wings.unk_0C = 0.0f;
    player->wings.unk_04 = 0.0f;

    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 1.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.1f, 3.0f, 0.0f);

    switch (player->unk_1D0) {
        case 0:
            func_8001ACDC(0);
            D_80177A48[0] = 0.005f;
            D_80177A48[1] = 0.0f;
            D_80177A48[2] = 60.0f;
            D_80177A48[3] = 0.0f;
            player->wings.unk_2C = 1;
            player->unk_1D0++;
            D_80177A80 = 0;
            /* fallthrough */
        case 1:
            if (player->pos.y < 350.0f) {
                Math_SmoothStepToF(&player->pos.y, 350.0f, 0.1f, D_80177A48[3], 0.0f);
            }

            Math_SmoothStepToF(&D_80177A48[3], 10.0f, 1.0f, 1.0f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[1], 360.0f, 0.05f, 1.5f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[2], -70.0f, 0.1f, 0.7f, 0.0f);

            if (D_80177A48[1] > 220.0f) {
                player->unk_204 = 2;
            }

            if ((D_80177A80 >= 0x88) && (D_80177A80 < 0xB4)) {
                Math_SmoothStepToF(&D_801779A8[player->num], 30.0f, 1.0f, 10.0f, 0.0f);
            }

            if (D_80177A80 == 0x8A) {
                Audio_PlaySfx(0x09000007U, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (D_80177A80 == 0xBE) {
                Audio_PlaySfx(0x09000013U, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (D_80177A48[1] > 350.0f) {
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_014 = 0.0f;
                player->unk_018 = 0.1f;
                player->unk_194 = 10.0f;
                player->unk_190 = 10.0f;

                Audio_PlaySfx(0x09000002U, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

                D_801779A8[player->num] = 70.0f;

                if ((gCurrentLevel != 9) && (gCurrentLevel != 0xA)) {
                    D_800D1970 = 0;
                    for (i = 0, var_s0 = &gObjects2F4[2]; i < 3; i++, var_s0++) {
                        Object_2F4_Initialize(var_s0);
                        var_s0->obj.status = 1;
                        var_s0->obj.id = OBJ_2F4_198;
                        var_s0->obj.pos.x = D_800CA080[i] + player->pos.x;
                        var_s0->obj.pos.y = D_800CA08C[i] + player->pos.y;
                        var_s0->obj.pos.z = player->unk_138 - 1000.0f;
                        var_s0->unk_0F4.y = 180.0f;
                        Object_SetInfo(&var_s0->info, var_s0->obj.id);
                    }
                }
            }

            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, D_80177A48[2] * M_DTOR, 1);

            sp70.x = 0.0f;
            sp70.y = 0.0f;
            sp70.z = 200.0f;

            Matrix_MultVec3f(gCalcMatrix, &sp70, &sp64);

            if ((gCurrentLevel == LEVEL_CORNERIA) || (gCurrentLevel == LEVEL_VENOM_ANDROSS)) {
                sp64.x *= -1.0f;
            }
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.005f, 0.0f);
            Math_SmoothStepToF(&player->camEye.x, player->pos.x + sp64.x, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, player->pos.y + sp64.y, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.z, player->unk_138 + D_80177D20 + sp64.z, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.x, player->pos.x, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, player->pos.y, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, player->unk_138 + D_80177D20, *D_80177A48, 500.0f, 0.0f);
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);

    sp70.x = 0.0f;
    sp70.y = 0.0f;
    sp70.z = player->unk_0D0 + player->unk_110;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);

    player->vel.x = sp64.x;
    player->vel.z = sp64.z;
    player->vel.y = sp64.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z + player->unk_08C;
    player->camAt.z += player->vel.z;
    player->camEye.z += player->vel.z;

    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);

    func_800AA800(player);
}

void func_8004B368(Player* player) {
    s32 pad[5];
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
    s32 pad2[2];
    f32 var_fa1;

    player->unk_228 = 0;

    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 5.0f, 0.01f);

    switch (player->unk_1D0) {
        case 10:
            D_80177A48[2] = 0.0f;
            player->unk_1D0++;
            player->wings.unk_04 = 0.0f;
            player->wings.unk_0C = 0.0f;
            player->wings.unk_08 = 0.0f;
            player->wings.unk_10 = 0.0f;
            player->unk_130 = 0.0f;
            player->unk_12C = 0.0f;
            player->unk_110 = 0.0f;
            player->wings.unk_2C = 1;
            player->unk_0D0 = 40.0f;
            /* fallthrough */

        case 11:
            D_80177A48[0] = 0.0f;
            Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 1.0f, 5.0f, 0.0f);
            player->camAt.x += (D_80178440 - player->camAt.x) * 0.01f;
            player->camAt.y += (D_80178444 - player->camAt.y) * 0.01f;
            player->camAt.z += (D_80178448 - player->camAt.z) * 0.01f;
            player->camEye.x += ((player->camAt.x + (500.0f * player->unk_004)) - player->camEye.x) * 0.01f;
            player->camEye.y += ((player->camAt.y + 500.0f) - player->camEye.y) * 0.01f;
            player->camEye.z += ((D_80178448 + (2000.0f * D_80177950)) - player->camEye.z) * 0.01f;

            if (player->timer_1FC >= 0x1A) {
                D_80177A48[2] += 1.5f * player->unk_004;
                Math_SmoothStepToF(&player->unk_0EC, (player->unk_004 * (-450.0f)) * D_80177950, 0.2f, 20.0f, 0.1f);
            } else {
                D_80177A48[2] += 0.25f * player->unk_004;
                if (player->unk_0EC < (-360.0f)) {
                    player->unk_0EC += 360.0f;
                }
                if (player->unk_0EC > 360.0f) {
                    player->unk_0EC -= 360.0f;
                }
                Math_SmoothStepToF(&player->unk_0EC, (player->unk_004 * 20.0f) * D_80177950, 0.1f, 3.0f, 0.1f);
            }

            if (D_80177950 > 0.0f) {
                Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 3.0f, 0.1f);
            } else {
                Math_SmoothStepToF(&player->unk_0E8, 180.0f, 0.1f, 3.0f, 0.1f);
                Math_SmoothStepToF(&player->pos.x, player->camEye.x, 1.0f, 30.0f, 0.0f);
                D_80177A48[2] = 0.0f;
            }

            player->pos.x += D_80177A48[2];
            Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 3.0f, 0.1f);
            Math_SmoothStepToF(&player->pos.y, player->camEye.y + 5.0f, 0.1f, 1.0f, 0.0f);

            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 0;
                player->timer_1F8 = 0x78;
                player->timer_1FC = 0x14;
                D_80177A48[0] = 0.001f;
                D_80177978 = player->camEye.x;
                D_80177980 = player->camEye.y;
                D_80177988 = player->camEye.z;
                D_801779A0 = player->camAt.x;
                D_801779B8 = player->camAt.y;
                D_801779C0 = player->camAt.z;
            }
            break;

        case 0:
            if (player->timer_1F8 > 60) {
                Math_SmoothStepToF(&player->unk_0EC, (player->unk_004 * 60.0f) * D_80177950, 0.1f, 4.0f, 0.1f);
            }
            if (player->timer_1F8 < 80) {
                D_801779A0 = player->pos.x;
                D_801779B8 = player->pos.y;
                D_801779C0 = player->unk_138 + D_80177D20 + 30.0f;
                Math_SmoothStepToF(&D_80177A48[0], 0.05f, 0.1f, 0.0005f, 0.0f);
            }

            Math_SmoothStepToF(&player->pos.x, player->camEye.x, 0.1f, 10.0f, 0.0f);
            D_80177980 += ((player->camAt.y + 500.0f) - player->camEye.y) * 0.01f;
            player->camEye.y = D_80177980;
            var_fa1 = player->unk_004 * 190.0f;

            if ((D_80177950 > 0.0f) && (player->unk_004 > 0.0f)) {
                var_fa1 = 181.0f;
            }
            if ((D_80177950 > 0.0f) && (player->unk_004 < 0.0f)) {
                var_fa1 = -181.0f;
            }
            if ((D_80177950 < 0.0f) && (player->unk_004 > 0.0f)) {
                var_fa1 = 0.0f;
            }
            if ((D_80177950 < 0.0f) && (player->unk_004 < 0.0f)) {
                var_fa1 = 360.0f;
            }
            if (player->timer_1FC == 0) {
                Math_SmoothStepToF(&player->unk_0E8, var_fa1, 0.1f, 4.0f, 0.0f);
            }

            player->vel.y = 0.0f;
            Math_SmoothStepToF(&player->pos.y, player->camEye.y + 5.0f, 0.1f, 4.0f, 0.0f);

            if (player->timer_1F8 < 40) {
                Math_SmoothStepToF(&player->unk_0EC, player->unk_004 * 180.0f, 0.1f, 1.5f, 0.0f);
            }
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 1;
                player->timer_1F8 = 0x96;
                player->wings.unk_10 = 0.0f;
                player->wings.unk_08 = 0.0f;
                player->wings.unk_0C = 0.0f;
                player->wings.unk_04 = 0.0f;
            }
            break;

        case 1:
            Math_SmoothStepToF(&D_80177A48[0], 1.0f, 0.1f, 0.05f, 0.0f);
            player->unk_25C += 0.04f;
            if (player->unk_25C > 0.6f) {
                player->unk_25C = 0.6f;
            }

            player->unk_000 += 0.005f;
            if (player->unk_000 > 0.3f) {
                player->unk_000 = 0.3f;
            }
            Math_SmoothStepToF(&D_801779A0, player->pos.x, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779B8, player->pos.y, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779C0, player->unk_138 + D_80177D20 + 30.0f, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&player->pos.y, player->camEye.y + 5.0f, 0.1f, 4.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_0E4, 20.0f, 0.1f, 0.2f, 0.01f);
            Math_SmoothStepToF(&player->pos.x, player->camEye.x, 0.1f, 2.0f, 0.0f);

            if (player->timer_1F8 < 0x6F) {
                Math_SmoothStepToF(&player->unk_0EC, player->unk_004 * 360.0f, 0.1f, 2.5f, 0.0f);
            } else {
                Math_SmoothStepToF(&player->unk_0EC, player->unk_004 * 180.0f, 0.1f, 2.5f, 0.0f);
            }

            if ((180.0f - fabsf(player->unk_0EC)) <= 3.0f) {
                D_80161A88 = 1;
            }

            if (player->timer_1F8 == 0) {
                player->timer_1F8 = 0xC8;
                player->timer_1FC = 0x1F4;
                player->unk_1D0 = 2;
                player->unk_000 = (player->unk_004 = (player->unk_008 = (D_80178418 = 0.0f)));
                player->unk_0D0 = 0.0f;
                D_80177A48[6] = 0.0f;
            }
            break;

        case 2:
            player->pos.y += 5.0f;
            Matrix_RotateY(gCalcMatrix, ((player->unk_0E8 + 180.0f) + D_80178418) * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
            Matrix_RotateZ(gCalcMatrix, -((player->unk_0F8 + player->unk_0F0) * M_DTOR), 1);

            sp78.x = 0;
            sp78.y = 70.0f;
            sp78.z = -800.0f;

            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
            Math_SmoothStepToF(&D_801779A0, player->pos.x, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779B8, player->pos.y - D_80177A48[6], D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779C0, player->unk_138 + D_80177D20 - D_80177A48[6], D_80177A48[0], 50000.0f,
                               0.0f);
            Math_SmoothStepToF(&D_80177A48[6], 130.0f, 0.1f, 0.25f, 0.0f);
            player->unk_000 += 0.002f;

            if (player->unk_000 > 0.3f) {
                player->unk_000 = 0.3f;
            }

            D_80177978 += ((player->pos.x + sp6C.x) - D_80177978) * player->unk_000;
            D_80177980 += ((player->pos.y + sp6C.y) - D_80177980) * player->unk_000;
            D_80177988 += ((player->unk_138 + D_80177D20 + sp6C.z) - D_80177988) * player->unk_000;
            D_80178430 += 0.2f;
            D_8017842C += 0.2f;
            D_80178418 += player->unk_008;
            Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.1f, 2.0f, 0.0f);

            if (player->timer_1F8 == 0) {
                player->unk_008 += 0.01f;
                if (player->unk_008 > 0.63f) {
                    player->unk_008 = 0.63f;
                }
            } else {
                player->unk_008 -= 0.0005f;
                if (player->unk_008 < 0.0f) {
                    player->unk_008 = 0.0f;
                }
            }

            player->vel.y = 5.0f;

            if ((player->timer_1F8 == 50) && (gTeamShields[1] > 0)) {
                func_8004A840(0);
            }

            if ((player->timer_1F8 == 70) && (gTeamShields[2] > 0)) {
                func_8004A840(1);
            }

            if (player->timer_1F8 == 90) {
                func_800A6148();
                if (gTeamShields[3] > 0) {
                    func_8004A840(2);
                }
                D_80161A88 = 0;
            }

            Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
            Matrix_RotateZ(gCalcMatrix, -((player->unk_0F8 + player->unk_0F0) * M_DTOR), 1);

            if ((D_80178418 > 70.0f) && (D_80178418 < 280.0f)) {
                func_8004AA84();
            }
            sp78.x = gObjects2F4[0].unk_114 * gObjects2F4[0].unk_120;
            sp78.y = gObjects2F4[0].unk_118 * gObjects2F4[0].unk_120;
            sp78.z = gObjects2F4[0].unk_11C * gObjects2F4[0].unk_120;

            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);

            D_80178450[0] = player->pos.x + sp6C.x;
            D_80178460[0] = player->pos.y + sp6C.y;
            D_80178470[0] = player->unk_138 + sp6C.z;

            sp78.x = gObjects2F4[1].unk_114 * gObjects2F4[1].unk_120;
            sp78.y = gObjects2F4[1].unk_118 * gObjects2F4[1].unk_120;
            sp78.z = gObjects2F4[1].unk_11C * gObjects2F4[1].unk_120;

            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);

            D_80178454 = player->pos.x + sp6C.x;
            D_80178464 = player->pos.y + sp6C.y;
            D_80178474 = player->unk_138 + sp6C.z;

            sp78.x = gObjects2F4[2].unk_114 * gObjects2F4[2].unk_120;
            sp78.y = gObjects2F4[2].unk_118 * gObjects2F4[2].unk_120;
            sp78.z = gObjects2F4[2].unk_11C * gObjects2F4[2].unk_120;

            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);

            D_80178458 = player->pos.x + sp6C.x;
            D_80178468 = player->pos.y + sp6C.y;
            D_80178478 = player->unk_138 + sp6C.z;

            switch (D_80177A80) {
                case 0x14A:
                    D_80177840 = 100;
                    break;

                case 0x19A:
                    func_800BA808(gMsg_ID_2335, RCID_FOX);
                    break;

                case 0x226:
                    if ((gTeamShields[2] == (-1)) || (gTeamShields[2] == 0)) {
                        func_800BA808(gMsg_ID_20333, RCID_ROB64);
                    } else {
                        func_800BA808(gMsg_ID_2300, RCID_SLIPPY);
                    }
                    break;

                case 0x2AA:
                    if ((gTeamShields[3] == -1) || (gTeamShields[3] == 0)) {
                        func_800BA808(gMsg_ID_20332, RCID_ROB64);
                    } else {
                        func_800BA808(gMsg_ID_2310, RCID_PEPPY);
                    }
                    break;

                case 0x330:
                    if ((gTeamShields[1] == (-1)) || (gTeamShields[1] == 0)) {
                        func_800BA808(gMsg_ID_20331, RCID_ROB64);
                    } else {
                        func_800BA808(gMsg_ID_2320, RCID_FALCO);
                    }
                    break;
            }
            break;

        case 3:
            D_80178430 += 0.2f;
            D_8017842C += 0.2f;
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 4;
                player->timer_1F8 = 0x1E;
                player->unk_000 = 0.0f;
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
            }
            break;

        case 4:
            D_80178430 += 0.2f;
            D_8017842C += 0.2f;
            player->unk_190 = 2.0f;
            player->unk_25C += 0.1f;
            if (player->unk_25C > 0.6f) {
                player->unk_25C = 0.6f;
            }
            player->unk_000 += 1.0f;
            player->unk_0D0 = player->unk_000 * player->unk_000;
            if (player->timer_1F8 == 0) {
                D_80177A48[7] = player->vel.x;
                D_80177A48[8] = player->vel.y;
                D_80177A48[9] = player->vel.z;
                player->unk_1D0 = 5;
                player->unk_0D0 = 0.0f;
                player->timer_1F8 = 0xA;
                func_80078E50(player->pos.x, player->pos.y, player->unk_138, 30.0f);
            }
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y - D_80177A48[6];
            D_801779C0 = player->unk_138 + D_80177D20 - D_80177A48[6];
            break;

        case 5:
            D_801779A0 += D_80177A48[7];
            D_801779B8 += D_80177A48[8];
            D_801779C0 += D_80177A48[9];
            player->unk_234 = 0;
            if (player->timer_1F8 == 0) {
                player->state_1C8 = PLAYERSTATE_1C8_6;
                player->timer_1F8 = 0;
                D_8017837C = 4;
                func_8001DBD0(0xA);
                D_800D3180[gCurrentLevel] = Play_CheckMedalStatus(0x96U) + 1;
            }
            break;
    }

    switch (D_80177A80) {
        case 0x3C1:
            D_80177830 = 1;
            break;

        case 0x489:
            D_80177830 = 0;
            break;

        case 0x4E7:
            player->unk_1D0 = 3;
            player->timer_1F8 = 0xA;
            func_800A6028(&player->unk_460, 0x09000002U);
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            break;
    }

    Matrix_RotateY(gCalcMatrix, ((player->unk_114 + player->unk_0E8) + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * M_DTOR), 1);

    sp60.x = 0.0f;
    sp60.y = 0.0f;
    sp60.z = player->unk_0D0;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);

    player->vel.x = sp54.x;
    player->vel.z = sp54.z;
    player->vel.y = sp54.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->unk_0F8 = player->unk_0EC;
    player->unk_138 = player->pos.z;

    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.f);

    player->unk_088 += 10.0f;
    player->unk_080 = (-__sinf(player->unk_088 * M_DTOR)) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_8004C90C(Player* player) {
    func_E51970_80187520(90, player);
}

void func_8004C930(Player* player) {
    s32 sp24;
    s32 sp20;
    s32 btn;

    D_80177A80 += 1;

    switch (player->form) {
        case FORM_ARWING:
            if ((gCurrentLevel == LEVEL_VENOM_ANDROSS) || ((gCurrentLevel == LEVEL_VENOM_2) && (D_8017827C == 1))) {
                func_80193C4C(player);
            } else if (gCurrentLevel == LEVEL_SECTOR_X) {
                if (D_8017827C == 0) {
                    func_80194728(player);
                } else {
                    func_80048E40(player);
                }
            } else if (gCurrentLevel == LEVEL_AREA_6) {
                func_E16C50_8018ED78(player);
            } else if (gCurrentLevel == LEVEL_FORTUNA) {
                func_8004C90C(player);
                func_800AA800(player);
            } else if (gCurrentLevel == LEVEL_BOLSE) {
                func_8018F94C(player);
                func_800AA800(player);
            } else if (gCurrentLevel == LEVEL_SECTOR_Z) {
                func_8019C85C(player);
            } else if (gCurrentLevel == LEVEL_KATINA) {
                func_80197290(player);
                func_800AA800(player);
            } else if (gCurrentLevel == LEVEL_SECTOR_Y) {
                func_8019EE60(player);
                func_800AA800(player);
            } else if (gCurrentLevel == LEVEL_SOLAR) {
                func_E16C50_801A7930(player);
                func_800AA800(player);
            } else if (gCurrentLevel == LEVEL_ZONESS) {
                func_E16C50_8019D76C(player);
                func_800AA800(player);
            } else if (gCurrentLevel == LEVEL_VENOM_2) {
                func_80196D88(player);
                func_800AA800(player);
            } else if (gCurrentLevel == LEVEL_METEO) {
                if (D_8017827C == 0) {
                    func_8018E084(player);
                } else {
                    func_80048E40(player);
                }
            } else if ((gCurrentLevel == LEVEL_CORNERIA) && (gLevelMode == LEVELMODE_ALL_RANGE)) {
                func_80191160(player);
                func_800AA800(player);
            } else {
                if (D_80177A80 == 0xAA) {
                    func_8001D444(0, 0x26U, 0, 0xFFU);
                }
                func_8004B368(player);
                func_800AA800(player);
            }
            func_800B2130(player);
            break;

        case FORM_LANDMASTER:
            sp20 = gInputPress->button;
            sp24 = gInputHold->button;
            gInputPress->button = 0;
            btn = gInputPress->button;
            gInputHold->button = gInputPress->button;
            gInputPress->stick_y = btn;
            gInputPress->stick_x = btn;

            if (gCurrentLevel == LEVEL_TITANIA) {
                func_801882CC(player, &gInputPress, &gInputHold);
            } else if (D_80177930 != 0) {
                func_801AF8F4(player, &gInputPress, &gInputHold);
            } else {
                func_801B3D04(player, &gInputPress, &gInputHold);
            }

            func_80046358(player);
            gInputPress->button = sp20;
            gInputHold->button = sp24;
            break;

        case FORM_BLUE_MARINE:
            if (gCurrentLevel == LEVEL_AQUAS) {
                func_80095604(player);
            }
            break;
    }
}

void func_8004CCC0(Player* player) {
    Vec3f sp58;
    PosRot sp50;

    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, player->pos.y - 20.0f, 0.2f, 100.0f, 0.0f);

    sp50.rot.z = player->unk_0D0;
    sp58.x = Math_RadToDeg(Math_Atan2F(player->pos.x, player->unk_138));

    player->unk_2B4 = 1;
    player->unk_2BC += 1.0f;

    if (player->unk_2BC > 90.0f) {
        player->unk_2BC = 90.0f;
    }

    switch (player->unk_1D0) {
        case 0:
            if (player->unk_19C != 0) {
                player->timer_1F8 = 0xA;
            } else {
                player->timer_1F8 = 0x1E;
            }
            player->unk_1D0 = 1;
            if (player->unk_4D8 > 180.0f) {
                player->unk_4D8 -= 360.0f;
            }
            /* fallthrough */

        case 1:
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 2;
                if (player->unk_19C != 0) {
                    player->timer_1F8 = 0x3C;
                } else {
                    player->timer_1F8 = 0x50;
                }
            }
            player->camEye.x += player->vel.x * 0.2f;
            player->camEye.z += player->vel.z * 0.2f;
            Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
            break;

        case 2:
            if (player->unk_4D8 > 140.0f) {
                sp58.y = 0.0f;
            } else {
                sp58.y = 60.0f;
            }

            Math_SmoothStepToF(&player->wings.unk_04, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_08, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_0C, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_10, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_4D8, 190.0f, 0.1f, 6.0f, 0.001f);

            if (player->unk_4D8 > 180.0f) {
                player->unk_114 += 180.0f;
                if (player->unk_114 >= 360.0f) {
                    player->unk_114 -= 360.0f;
                }
                player->unk_4D8 = 360.0f - (player->unk_4D8 - 180.0f);
                if ((sp58.x - player->unk_114) < 180.0f) {
                    player->unk_12C = 180.0f;
                } else {
                    player->unk_12C = -180.0f;
                }
                player->unk_1D0 = 3;
                func_800A5FA0(&player->unk_460, 0x09000002U, player->num);
                player->unk_194 = 7.0f;
                player->unk_190 = 7.0f;
            }
            player->unk_004 -= 0.2f;
            break;

        case 3:
            Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.05f, 5.0f, 0.0f);

            sp58.y = player->unk_12C * 0.3f;

            Math_SmoothStepToF(&player->wings.unk_04, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_08, sp58.y, 0.3f, 100.0f, 0.0f);

            sp58.z = -sp58.y;

            Math_SmoothStepToF(&player->wings.unk_0C, sp58.z, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&player->wings.unk_10, sp58.z, 0.3f, 100.0f, 0.0f);

            player->unk_190 = 2.0f;
            player->camEye.x += player->vel.x * 0.1f;
            player->camEye.z += player->vel.z * 0.1f;

            if (player->unk_19C != 0) {
                player->camEye.x += player->vel.z * 0.2f;
                player->camEye.z += player->vel.x * 0.2f;
            }

            if (player->unk_19C == 0) {
                Math_SmoothStepToAngle(&player->unk_114, sp58.x, 0.1f, 2.0f, 0.0f);
            }

            if (player->pos.y < player->unk_0A0) {
                if (player->unk_004 < 0.0f) {
                    player->unk_004 += 0.2f;
                }
            } else {
                player->unk_004 -= 0.2f;
            }

            if (player->timer_1F8 == 0) {
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_014 = 0.0f;
                player->unk_018 = 0.0f;
            }
            break;
    }
    player->pos.y += player->unk_004;
    player->camAt.y += player->unk_004;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;

    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);

    sp50.rot.x = 0.0f;
    sp50.rot.y = 0.0f;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp50.rot, &sp50.pos);

    player->vel.x = sp50.pos.x;
    player->vel.z = sp50.pos.z;
    player->vel.y = sp50.pos.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;

    if (player->pos.y < player->unk_0A4) {
        player->pos.y = player->unk_0A4;
        player->vel.y = 0.0f;
    }
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;

    func_800B2574(player);
    func_800B2130(player);
    func_800AD7F0(player);
    func_800AA800(player);
    func_800A46A0(player);
}

void func_8004D3C8(s32 arg0) {
}

void func_8004D3D4(Player* player, s32 arg1, Item* arg2) {
    u16 itemId;

    Item_Initialize(arg2);

    arg2->obj.status = 1;
    arg2->obj.pos.x = player->pos.x;
    arg2->obj.pos.y = player->pos.y;
    arg2->obj.pos.z = player->unk_138;
    itemId = arg1 & 0xFFFF;
    arg2->obj.id = itemId;
    Object_SetInfo(&arg2->info, itemId);
}

void func_8004D440(Player* player) {
    s32 teamId;

    func_8001CA24(player->num);
    func_8001A55C(&player->unk_460, 0x0900C010U);
    func_800A5FA0(&player->unk_460, 0x0903F004U, player->num);
    player->state_1C8 = PLAYERSTATE_1C8_6;
    player->timer_1F8 = 0x46;
    player->timer_224 = 0x14;
    D_8017837C = 7;

    if (player->unk_1D4 != 0) {
        player->unk_284 = 0;
    }

    if (!gVersusMode) {
        if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
            func_800BA808(gMsg_ID_20318, RCID_FOX);
        } else {
            if ((gCurrentLevel != LEVEL_TRAINING) &&
                ((gTeamShields[1] > 0) || (gTeamShields[2] > 0) || (gTeamShields[3] > 0))) {
                do {
                    teamId = (s32) (Rand_ZeroOne() * 2.9f) + 1;
                } while (gTeamShields[teamId] <= 0);

                switch (teamId) {
                    case 1:
                        func_800BA808(gMsg_ID_20090, RCID_FALCO);
                        break;

                    case 2:
                        func_800BA808(gMsg_ID_20092, RCID_SLIPPY);
                        break;

                    case 3:
                        func_800BA808(gMsg_ID_20091, RCID_PEPPY);
                        break;
                }
            }
        }

        if (gCurrentLevel != LEVEL_TRAINING) {
            gLifeCount[gPlayerNum] -= 1;
        }
    } else {
        if (player->unk_288 > 0) {
            D_80177DD0[player->unk_288 - 1][D_80177DB8[player->unk_288 - 1]] = player->num;
            D_80177DB8[player->unk_288 - 1] += 1;
            if (D_801778A4 == D_80177DB8[player->unk_288 - 1]) {
                player->unk_288 = -1;
                if (player->unk_284 == 0) {
                    func_8007C688(player->pos.x, player->pos.y, player->unk_138, 3.0f, 0x3E8);
                }
            }
        }
        if (gBombCount[gPlayerNum] != 0) {
            gBombCount[gPlayerNum] = 0;
            func_8004D3D4(player, 0x147, &gItems[1]);
        }
        if (gLaserStrength[gPlayerNum] != 0) {
            gLaserStrength[gPlayerNum] = 0;
            func_8004D3D4(player, 0x142, &gItems[0]);
        }
    }
}

void func_8004D738(Player* player) {
    player->pos.y += 30.0f;
    func_8007D0E0(player->pos.x, player->pos.y, player->unk_138, 6.0f);
    if (gCamCount == 1) {
        func_8007BFFC(player->pos.x, player->pos.y, player->unk_138, 0.0f, 0.0f, 0.0f, 3.0f, 0x50);
        func_8007C688(player->pos.x, player->pos.y, player->unk_138, 3.0f, 0x320);
    } else {
        func_8007BFFC(player->pos.x, player->pos.y, player->unk_138, 0.0f, 0.0f, 0.0f, 3.0f, 0xA);
    }
    func_8004D440(player);
}

void func_8004D828(Player* player) {
    s32 i;
    Vec3f src;
    Vec3f dest;

    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 1.0f, 0.01f);
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;

    if ((gCurrentLevel != 6 || D_80178284 == 0) && (gLevelType == LEVELTYPE_PLANET || gCurrentLevel == LEVEL_BOLSE)) {
        player->vel.y -= 0.5f;
        player->unk_0E4 -= 2.0f;
    }

    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    player->unk_12C += 15.0f;

    if (player->unk_1D0 != 0) {
        player->unk_0E8 += 11.0f;
        player->unk_0E4 += 17.0f;
    }

    if (gCamCount == 1) {
        if (!(gFrameCount & 1)) {
            func_8007D24C((Rand_ZeroOne() - 0.5f) * 20.0 + player->pos.x,
                          (Rand_ZeroOne() - 0.5f) * 20.0 + player->pos.y, player->unk_138, 2.2f);
        }
    } else if (!(gFrameCount & 3)) {
        func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + player->pos.x,
                      (Rand_ZeroOne() - 0.5f) * 10.0f + player->pos.y,
                      ((Rand_ZeroOne() - 0.5f) * 10.0f) + player->unk_138, 2.2f);
    }

    if ((player->pos.y < player->unk_0A4) && (player->unk_1D0 == 0)) {
        player->pos.y = player->unk_0A4;
        player->unk_284 = 0;
        player->timer_220 = 0;
        player->vel.y = 10.0f;
        player->unk_1D0 = 1;

        func_800A6070(&player->unk_460, 0x29000000U);

        if ((gCurrentLevel == LEVEL_CORNERIA) || (gCurrentLevel == LEVEL_FORTUNA)) {
            func_80062C38(player->pos.x, player->pos.z);
        } else {
            func_8007D0E0(player->pos.x, player->pos.y, player->unk_138, 3.0f);
        }

        if (player->wings.rightState == 2) {
            func_800A69F8(1, player->hit1.x, player->hit1.y, player->hit1.z);
            player->wings.rightState = 1;
            func_8007D0E0(player->hit1.x, player->hit1.y, player->hit1.z, 2.0f);
        }
        if (player->wings.leftState == 2) {
            func_800A69F8(0, player->hit2.x, player->hit2.y, player->hit2.z);
            player->wings.leftState = 1;
            func_8007D0E0(player->hit2.x, player->hit2.y, player->hit2.z, 2.0f);
        }
    } else if (((player->timer_220 > 0) || (player->pos.y < player->unk_0A4) || (player->pos.y < D_80177CC0) ||
                (player->timer_1FC == 0)) &&
               (player->timer_1F8 == 0)) {
        if (gCamCount != 4) {
            if (player->unk_284 == 0) {
                func_8007C688(player->pos.x, player->pos.y, player->unk_138 - (2.0f * player->vel.z), 3.0f, 0x50);
            }
            if (player->pos.y < player->unk_0A4) {
                func_80062C38(player->pos.x, player->pos.z);
            }
        }
        if (gLevelType == LEVELTYPE_PLANET) {
            for (i = 0; i < 4; i++) {
                func_800A69F8(2, player->pos.x, player->pos.y, player->unk_138);
            }

            for (i = 0; i < 2; i++) {
                func_800A69F8(3, player->pos.x, player->pos.y, player->unk_138);
            }
        }
        func_8007D0E0(player->pos.x, player->pos.y, player->unk_138, 5.0f);
        func_8007BFFC(player->pos.x, player->pos.y, player->unk_138, player->vel.x, 0.0f, player->vel.z, 5.0f, 0x14);
        func_8004D440(player);
    }
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.05f, 5.0f, 0.00001f);
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + (player->unk_134 * 0.2f)) * M_DTOR, 0);
    Math_SmoothStepToF(&player->unk_000, 700.0f, 0.05f, 10.0f, 0.00001f);

    src.x = player->unk_004 * (player->unk_000 * 0.7f);
    src.y = player->unk_000 * 0.5f;
    src.z = player->unk_000 + (400.0f - player->unk_08C);

    Matrix_MultVec3f(gCalcMatrix, &src, &dest);

    player->camEye.x = player->pos.x + dest.x;
    player->camEye.z = player->pos.z + dest.z;

    player->camAt.x = player->pos.x;
    player->camAt.z = player->pos.z;

    if ((gLevelType == LEVELTYPE_PLANET) || (gCurrentLevel == LEVEL_BOLSE)) {
        player->camEye.y = (player->pos.y * player->unk_148) + dest.y;
        player->camEye.y -= player->unk_02C - 50.0f;
        player->camAt.y = ((player->pos.y * player->unk_14C) + 20.0f) + (player->unk_060 * 5.0f);
    } else {
        player->camEye.y = player->pos.y + dest.y;
        player->camAt.y = player->pos.y;
    }

    if (gVersusMode != 0) {
        func_800AE278(player);
    }
}

void func_8004DEF8(Player* player) {
    s32 pad[2];
    f32 sp34;
    s32 var_s0;

    if (player->unk_0E4 < 0.0f) {
        player->unk_0E4 += 1.0f;
    }
    if (player->unk_0E4 > 0.0f) {
        player->unk_0E4 -= 1.0f;
    }

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;

    if (((gCurrentLevel != LEVEL_VENOM_ANDROSS) || (D_80178284 == 0)) && (gLevelType == LEVELTYPE_PLANET)) {
        player->vel.y = player->vel.y - 0.5f;
    }

    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z + player->unk_08C;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    player->unk_12C = player->unk_12C + 15.0f;

    if (player->unk_1D0 != 0) {
        player->unk_0E8 += 14.0f;
        player->unk_0E4 += 26.0f;
    }

    if (!(gFrameCount & 1)) {
        sp34 = Rand_ZeroOne();
        func_8007D24C(((sp34 - 0.5f) * 20.0) + player->pos.x, ((Rand_ZeroOne() - 0.5f) * 20.0) + player->pos.y,
                      player->unk_138, 2.2f);
    }

    if ((player->pos.y < player->unk_0A4) && (player->unk_1D0 == 0)) {
        player->pos.y = player->unk_0A4;
        player->timer_220 = 0;
        player->vel.y = 10.0f;
        player->unk_1D0 = 1;
        func_800A6070(&player->unk_460, 0x29000000U);
        if (gCurrentLevel == LEVEL_CORNERIA) {
            func_80062C38(player->pos.x, player->pos.z);
        }

        if (player->wings.rightState == 2) {
            func_800A69F8(1, player->hit1.x, player->hit1.y, player->hit1.z);
            player->wings.rightState = 0;
            func_8007D0E0(player->hit1.x, player->hit1.y, player->hit1.z, 2.0f);
        }

        if (player->wings.leftState == 2) {
            func_800A69F8(0, player->hit2.x, player->hit2.y, player->hit2.z);
            player->wings.leftState = 0;
            func_8007D0E0(player->hit2.x, player->hit2.y, player->hit2.z, 2.0f);
        }
    } else if ((((player->timer_220 > 0) || (player->pos.y < player->unk_0A4)) || (player->timer_1FC == 0)) &&
               (player->timer_1F8 == 0)) {
        if (player->pos.y < player->unk_0A4) {
            func_8007C688(player->pos.x, D_80177940 + 20.0f, player->unk_138 - (2.0f * player->vel.z), 3.0f, 0x320);
            func_80062C38(player->pos.x, player->pos.z);
        }
        func_8007D0E0(player->pos.x, player->pos.y - (2.0f * player->vel.y), player->unk_138 - (2.0f * player->vel.z),
                      6.0f);
        func_8007BFFC(player->pos.x, player->pos.y - player->vel.y, player->unk_138 - (2.0f * player->vel.z), 0.0f,
                      0.0f, 0.0f, 3.0f, 0x14);
        if (gLevelType == LEVELTYPE_PLANET) {
            for (var_s0 = 0; var_s0 < 2; var_s0++) {
                func_800A69F8(2, player->pos.x, player->pos.y, player->unk_138);
            }

            for (var_s0 = 0; var_s0 < 4; var_s0++) {
                func_800A69F8(4, player->pos.x, player->pos.y, player->unk_138);
            }
        }
        func_8004D440(player);
    }

    player->unk_034 -= 3.0f;

    if (player->unk_1D0 != 0) {
        player->unk_034 += 10.0f;
    }

    if ((D_80161A88 == 2) && (player->pos.y <= player->unk_0A4)) {
        func_8007D9DC(player->pos.x, D_80177940 + 2.0f, player->unk_138, 3.0f, 20.0f, 0);
        func_8007ADF4(player->pos.x, D_80177940, player->unk_138, 0.1f, 2.0f);
    }
}

void func_8004E3D8(Player* player) {
    player->unk_228 = 0;
    player->unk_280 = 0;

    if (gFrameCount & 1) {
        D_80137E84[gPlayerNum] = 1;
    }

    switch (player->form) {
        case FORM_ARWING:
            if (gLevelMode == LEVELMODE_ALL_RANGE) {
                func_8004D828(player);
            } else {
                func_8004DEF8(player);
                func_800ADF58(player);
            }
            func_800A8BA4(player);
            func_800AA800(player);
            break;

        case FORM_LANDMASTER:
            func_8004D738(player);
            break;

        case FORM_BLUE_MARINE:
            func_801AB9B0(player);
            break;

        case FORM_ON_FOOT:
            func_8004D738(player);
            break;
    }
}

void func_8004E4D4(Object_2F4* obj2F4) {
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Player* sp38 = gPlayer;
    f32 sp34;

    obj2F4->unk_130 += 3.0f;
    obj2F4->unk_0F4.z = __sinf(obj2F4->unk_130 * M_DTOR) * 1.5f;
    obj2F4->unk_134 += 2.0f;
    sp34 = __sinf(obj2F4->unk_134 * M_DTOR) * 10.0f;

    switch (obj2F4->unk_0B8) {
        case 0:
            Math_SmoothStepToF(&obj2F4->obj.rot.z, 0.0f, 0.05f, 1.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.pos.x, obj2F4->unk_114 + sp38->pos.x, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.pos.y, obj2F4->unk_118 + sp38->pos.y + sp34, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.pos.z, obj2F4->unk_11C + sp38->unk_138, 0.03f, 10.0f, 0.0f);
            obj2F4->obj.rot.x = -sp38->unk_0E4;
            obj2F4->obj.rot.y = sp38->unk_0E8 + 180.0f;
            break;

        case 1:
            obj2F4->unk_0B8 = 2;
            obj2F4->timer_0BC = 0x32;
            obj2F4->unk_138 = 2.0f;
            Audio_PlaySfx(0x09000002U, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            obj2F4->unk_188 = 5.0f;
            /* fallthrough */

        case 2:
            if (gLevelType == LEVELTYPE_PLANET) {
                obj2F4->unk_168 += 0.4f;
                if (obj2F4->unk_168 > 0.6f) {
                    obj2F4->unk_168 = 0.6f;
                }
            }
            obj2F4->unk_07C = 2;
            obj2F4->unk_138 *= 1.2f;
            if (obj2F4->timer_0BC == 0) {
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            break;

        case 10:
            obj2F4->unk_0B8 = 0xB;
            obj2F4->timer_0BC = 0x96;
            obj2F4->timer_0BE = 0x28;
            Audio_PlaySfx(0x09000002U, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            obj2F4->unk_188 = 5.0f;
            /* fallthrough */
        case 11:
            obj2F4->unk_07C = 2;
            obj2F4->unk_138 += 2.0f;
            if (obj2F4->unk_138 > 50.0f) {
                obj2F4->unk_138 = 50.0f;
            }
            if (obj2F4->timer_0BE == 0) {
                switch (obj2F4->index) {
                    case 1:
                        obj2F4->obj.rot.y += 0.3f;
                        Math_SmoothStepToF(&obj2F4->obj.rot.z, -70.0f, 0.05f, 4.0f, 0.0f);
                        break;

                    case 2:
                        obj2F4->obj.rot.y -= 0.3f;
                        Math_SmoothStepToF(&obj2F4->obj.rot.z, 70.0f, 0.05f, 4.0f, 0.0f);
                        break;

                    case 3:
                        obj2F4->obj.rot.x -= 0.4f;
                        Math_SmoothStepToF(&obj2F4->obj.rot.z, 1000.0f, 0.05f, 6.0f, 0.0f);
                        break;
                }
            }

            if (obj2F4->timer_0BC == 0) {
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            break;

        case 30:
            obj2F4->unk_120 += D_800CA098[obj2F4->index];

            Matrix_RotateY(gCalcMatrix, obj2F4->unk_120 * M_DTOR, 0);

            sp54.x = 0.0f;
            sp54.y = D_800CA0A4[obj2F4->index];
            sp54.z = D_800CA0B0[obj2F4->index];

            Matrix_MultVec3f(gCalcMatrix, &sp54, &sp3C);

            obj2F4->unk_114 = sp3C.x;
            obj2F4->unk_118 = sp3C.y;
            obj2F4->unk_11C = sp3C.z - 100.0f;

            Math_SmoothStepToF(&obj2F4->obj.rot.z, __sinf(obj2F4->unk_120 * M_DTOR) * -30.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.pos.x, obj2F4->unk_114 + sp38->pos.x, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.pos.y, obj2F4->unk_118 + sp38->pos.y + sp34, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.pos.z, obj2F4->unk_11C + sp38->unk_138, 0.03f, 10.0f, 0.0f);
            break;

        case 31:
            Audio_PlaySfx(0x09000002U, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            obj2F4->unk_0B8 += 1;
            obj2F4->unk_188 = 5.0f;
            /* fallthrough */

        case 32:
            obj2F4->unk_07C = 2;
            Math_SmoothStepToF(&obj2F4->obj.rot.x, -20.0f, 0.1f, 0.5f, 0.0f);
            Math_SmoothStepToF(&obj2F4->unk_138, 25.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.rot.z, 0.0f, 0.1f, 0.5f, 0.0f);
            break;
    }
    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * M_DTOR, 1);

    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = obj2F4->unk_138;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);

    obj2F4->vel.x = sp48.x;
    obj2F4->vel.y = sp48.y;
    obj2F4->vel.z = sp48.z;
}

void func_8004EBD0(Object_2F4* obj2F4) {
    Vec3f src;
    Vec3f dest;

    if (obj2F4->unk_0B8 < 4) {
        obj2F4->unk_138 = 0.4f;

        obj2F4->obj.pos.x += (D_80178450[obj2F4->index] - obj2F4->obj.pos.x) * 0.4f;
        obj2F4->obj.pos.y += (D_80178460[obj2F4->index] - obj2F4->obj.pos.y) * 0.4f;
        obj2F4->obj.pos.z += (D_80178470[obj2F4->index] - obj2F4->obj.pos.z) * 0.4f;

        obj2F4->obj.rot.z *= 0.98f;
        obj2F4->obj.rot.x = -gPlayer[0].unk_0E4;
        obj2F4->obj.rot.y = gPlayer[0].unk_0E8 + 180.0f;

        if (1) {}

        obj2F4->unk_130 += 1.0f;
        if ((s32) obj2F4->unk_130 & 0x40) {
            obj2F4->unk_114 += 0.1f;
        } else {
            obj2F4->unk_114 -= 0.1f;
        }

        obj2F4->unk_134 += 1.2f;
        if ((s32) obj2F4->unk_134 & 0x40) {
            obj2F4->unk_118 += 0.1f;
        } else {
            obj2F4->unk_118 -= 0.1f;
        }
    }

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_120 *= 0.992f;
            if (obj2F4->unk_120 < 1.2f) {
                obj2F4->unk_0B8 += 1;
            }
            break;

        case 1:
            obj2F4->unk_120 *= 0.997f;
            if (obj2F4->unk_120 < 1.0f) {
                obj2F4->unk_120 = 1.0f;
                obj2F4->unk_0B8 += 1;
            }
            obj2F4->timer_0BC = 560;
            break;

        case 2:
            if (obj2F4->timer_0BC == 110) {
                gPlayer[0].timer_1F8 = 0x2710;
            }
            if (obj2F4->timer_0BC == 260) {
                gPlayer[0].timer_1FC = 0x2710;
            }
            if (obj2F4->timer_0BC == 0) {
                obj2F4->unk_0B8++;
                obj2F4->timer_0BC = 10;
                func_800A6028(&obj2F4->sfxPos, 0x09000002);
                obj2F4->unk_188 = 5.0f;
            }
            break;

        case 3:
            obj2F4->unk_07C = 2;
            if (obj2F4->timer_0BC == 0) {
                obj2F4->unk_0B8++;
                obj2F4->timer_0BC = 30;
            }
            break;

        case 4:
            obj2F4->unk_168 += 0.4f;
            if (obj2F4->unk_168 > 0.6f) {
                obj2F4->unk_168 = 0.6f;
            }
            obj2F4->unk_124.z += 1.0f;

            Matrix_RotateY(gCalcMatrix, (gPlayer[0].unk_0E8 + 180.0f) * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -(gPlayer[0].unk_0E4 * M_DTOR), 1);
            Matrix_RotateZ(gCalcMatrix, -((gPlayer[0].unk_0F8 + gPlayer[0].unk_0F0) * M_DTOR), 1);
            src.x = 0.0f;
            src.y = 0.0f;
            src.z = obj2F4->unk_124.z * obj2F4->unk_124.z;

            Matrix_MultVec3f(gCalcMatrix, &src, &dest);

            obj2F4->vel.x = dest.x;
            obj2F4->vel.y = dest.y;
            obj2F4->vel.z = dest.z;

            if (obj2F4->timer_0BC == 0) {
                func_80078E50(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 30.0f);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            break;
    }
    obj2F4->obj.pos.y += 5.0f;
    obj2F4->unk_168 -= 0.02f;
    if (obj2F4->unk_168 < 0.0f) {
        obj2F4->unk_168 = 0.0f;
    }
}

void func_8004F05C(Object_2F4* obj2F4) {
    if (((gLevelType == LEVELTYPE_PLANET) && (obj2F4->unk_0B6 == 0)) || (gCurrentLevel == LEVEL_BOLSE)) {
        obj2F4->unk_114 += 3.0f;
        obj2F4->unk_118 = __sinf(obj2F4->unk_114 * M_DTOR) * 1.5f;
    }

    switch (gCurrentLevel) {
        case LEVEL_BOLSE:
            switch (obj2F4->unk_0B6) {
                case 0:
                    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
                        obj2F4->unk_0F4.z += obj2F4->unk_0F4.y;
                        obj2F4->vel.x = __sinf(obj2F4->unk_0F4.z * M_DTOR) * 10.0f;
                        obj2F4->obj.rot.z = __sinf(obj2F4->unk_0F4.z * M_DTOR) * 40.0f;
                        break;
                    }

                    Math_SmoothStepToF(&obj2F4->obj.rot.z, obj2F4->unk_118, 0.05f, 0.3f, 0.0f);

                    switch (obj2F4->unk_0B8) {
                        case 0:
                            break;

                        case 1:
                            obj2F4->unk_0B8 = 2;
                            obj2F4->timer_0BC = 0x64;
                            Audio_PlaySfx(0x09000002U, &obj2F4->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            obj2F4->unk_188 = 5.0f;

                        case 2:
                            obj2F4->unk_07C = 2;
                            obj2F4->vel.z -= 5.0f;
                            if (obj2F4->timer_0BC == 0) {
                                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                            }
                            break;
                    }
                    break;

                case 31:
                    if (obj2F4->timer_0BC == 0) {
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    }
                    break;

                case 32:
                    obj2F4->obj.rot.z += obj2F4->unk_0F4.z;
                    if (obj2F4->timer_0BC == 0) {
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    }
                    break;

                case 30:
                    break;
            }
            break;

        case LEVEL_AREA_6:
            func_8018DA58(obj2F4);
            break;

        case LEVEL_SECTOR_Y:
            switch (obj2F4->unk_0B6) {
                case 0:
                    func_8019FF00(obj2F4);
                    break;

                case 42:
                    if (obj2F4->timer_0BC == 0) {
                        if (obj2F4->obj.pos.x >= -3500.0f) {
                            if (obj2F4->obj.pos.z <= 3000.0f) {
                                if ((fabsf(obj2F4->obj.pos.y) <= 400.0f) && (D_80177A80 < 0x12D)) {
                                    func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 8.0f);
                                }
                            }
                        }
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    }
                    break;

                case 43:
                    if (obj2F4->timer_0BC == 0) {
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    }
                    break;
            }
            break;

        case LEVEL_SECTOR_X:
            if ((obj2F4->unk_0B8 != 0) && (obj2F4->unk_0B8 == 1)) {
                obj2F4->vel.y += 0.1f;
                Math_SmoothStepToF(&obj2F4->obj.rot.x, -20.0f, 0.1f, 0.5f, 0.0f);
            }
            break;

        case LEVEL_SECTOR_Z:
        case LEVEL_KATINA:
            break;

        default:
            switch (obj2F4->unk_0B8) {
                case 0x64:
                    Math_SmoothStepToF(&obj2F4->obj.pos.x, obj2F4->unk_18C[0x14].x, 0.03f, 3.0f, 0.0f);
                    Math_SmoothStepToF(&obj2F4->obj.pos.y, obj2F4->unk_18C[0x14].y, 0.03f, 2.0f, 0.0f);
                    Math_SmoothStepToF(&obj2F4->obj.pos.z, obj2F4->unk_18C[0x14].z, 0.03f, 2.0f, 0.0f);
                    Math_SmoothStepToF(&obj2F4->obj.rot.z, 0.0f, 0.02f, 0.3f, 0);
                    break;

                case 0x0:
                    obj2F4->obj.rot.z = obj2F4->unk_0F4.z;
                    if (obj2F4->unk_0B6 == 0xA) {
                        obj2F4->obj.pos.z = gPlayer[0].camEye.z + 12000.0f;
                    }
                    break;

                case 0x1:
                    obj2F4->vel.y += 0.8f;
                    obj2F4->vel.x += 0.8f;
                    Math_SmoothStepToF(&obj2F4->obj.rot.z, 420.0f, 0.1f, 15.0f, 0.001f);
                    break;

                case 0x2:
                    obj2F4->vel.y += 0.8f;
                    obj2F4->vel.x -= 0.8f;
                    Math_SmoothStepToF(&obj2F4->obj.rot.z, -420.0f, 0.1f, 15.0f, 0.001f);
                    break;

                case 0x3:
                    obj2F4->vel.y += 1.2f;
                    obj2F4->vel.z += 0.1f;
                    Math_SmoothStepToF(&obj2F4->obj.rot.x, -45.0f, 0.1f, 15.0f, 0.001f);
                    break;

                case 0xA:
                    obj2F4->vel.x -= 1.0f;
                    Math_SmoothStepToF(&obj2F4->obj.rot.z, -45.0f, 0.05f, 0.5f, 0.0f);
                    break;

                case 0xB:
                    obj2F4->vel.x -= 2.0f;
                    Math_SmoothStepToF(&obj2F4->obj.rot.z, -70.0f, 0.1f, 6.0f, 0.0f);
                    Math_SmoothStepToF(&obj2F4->obj.rot.y, 225.0f, 0.05f, 2.0f, 0.0f);
                    break;

                case 0xC:
                    obj2F4->vel.x += 2.0f;
                    obj2F4->vel.y += 1.0f;
                    Math_SmoothStepToF(&obj2F4->obj.rot.z, 80.0f, 0.1f, 6.0f, 0.0f);
                    Math_SmoothStepToF(&obj2F4->obj.rot.x, -15.0f, 0.05f, 4.0f, 0.0f);
                    Math_SmoothStepToF(&obj2F4->obj.rot.y, 135.0f, 0.05f, 2.0f, 0.0f);
                    break;

                case 0xD:
                    obj2F4->vel.y += 2.0f;
                    Math_SmoothStepToF(&obj2F4->obj.rot.z, -400.0f, 0.2f, 14.0f, 0.0f);
                    Math_SmoothStepToF(&obj2F4->obj.rot.x, -45.0f, 0.05f, 4.0f, 0.0f);
                    break;
            }
            break;
    }
}

void func_8004F798(Object_2F4* obj2F4) {
    obj2F4->unk_07C = 2;

    switch (obj2F4->unk_0B8) {
        case 0:
            Math_SmoothStepToF(&obj2F4->obj.pos.x, obj2F4->unk_114, 0.05f, 50.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.pos.y, obj2F4->unk_118, 0.05f, 50.0f, 0.0f);
            Math_SmoothStepToF(&obj2F4->obj.rot.z, 0.0f, 0.05f, 1.0f, 0.0f);
            obj2F4->obj.pos.z -= 2.0f;
            break;

        case 1:
            obj2F4->unk_188 = 10.0f;
            obj2F4->vel.z -= 100.0f;
            if ((obj2F4->obj.pos.z + D_80177D20) < -15000.0f) {
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            break;
    }
}

void func_8004F8AC(Object_2F4* obj2F4) {

    if (gCurrentLevel == LEVEL_AQUAS) {
        func_80093164(obj2F4);
        return;
    }

    switch (gPlayer[0].state_1C8) {
        case PLAYERSTATE_1C8_7:
            switch (gCurrentLevel) {
                case LEVEL_SECTOR_Y:
                    if (gPlayer[0].unk_1D0 >= 3) {
                        func_8019FF00(obj2F4);
                    }
                    break;

                case LEVEL_SOLAR:
                    if (gPlayer[0].unk_1D0 >= 3) {
                        func_801A8BE8(obj2F4);
                    }
                    break;

                case LEVEL_ZONESS:
                    if (gPlayer[0].unk_1D0 >= 3) {
                        func_8019E5F0(obj2F4);
                    }
                    break;

                case LEVEL_VENOM_ANDROSS:
                case LEVEL_VENOM_2:
                    func_80195E44(obj2F4);
                    break;

                case LEVEL_KATINA:
                    func_80197F10(obj2F4);
                    break;

                case LEVEL_SECTOR_Z:
                    func_8019DD20(obj2F4);
                    break;

                case LEVEL_AREA_6:
                    func_8018DA58(obj2F4);
                    break;

                case LEVEL_METEO:
                    if (D_8017827C == 0) {
                        func_8018ED9C(obj2F4);
                        break;
                    }

                    func_80049630(obj2F4);
                    break;

                case LEVEL_FORTUNA:
                    if (obj2F4->unk_0B6 == 0xB) {
                        switch (obj2F4->unk_0B8) {
                            case 0:
                                if (D_80177A80 == 0x64) {
                                    obj2F4->unk_0B8 = 1;
                                    obj2F4->timer_0BC = 0x32;
                                    obj2F4->unk_050 = 255;
                                    Audio_PlaySfx(0x2902F026U, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34,
                                                  &D_800C5D3C);
                                }
                                break;

                            case 1:
                                Math_SmoothStepToF(&obj2F4->scale, 0.5f, 0.03f, 0.01f, 0.0f);
                                D_80178348 = D_80178340 = D_80178350 = D_80178354 = 0;

                                if ((obj2F4->timer_0BC == 0x2B) || (obj2F4->timer_0BC == 0x2E) ||
                                    (obj2F4->timer_0BC == 0x31)) {
                                    D_80178340 = 0xC0;
                                    D_80178348 = D_80178350 = D_80178354 = 255;
                                }

                                obj2F4->unk_050 -= 2;
                                if (obj2F4->unk_050 < 0) {
                                    obj2F4->unk_050 = 0;
                                    obj2F4->scale = 0.0f;
                                }

                                D_8017836C = obj2F4->unk_050 / 255.0f;
                                D_80178370 = gObjects2F4->obj.pos.x + 10.0f;
                                D_80178374 = gObjects2F4->obj.pos.y - 40.0f;
                                D_80178378 = gObjects2F4->obj.pos.z - 70.0f;
                                D_80178360 = 255;
                                D_80178364 = 255;
                                D_80178368 = 0x50;
                                break;
                        }
                    }
                    break;

                case LEVEL_CORNERIA:
                    if (gLevelMode == LEVELMODE_ALL_RANGE) {
                        func_8004E4D4(obj2F4);
                        break;
                    }

                    func_8004EBD0(obj2F4);
                    break;

                case LEVEL_SECTOR_X:
                    if (D_8017827C != 0) {
                        func_80049630(obj2F4);
                        break;
                    }

                    func_8004E4D4(obj2F4);
                    break;

                case LEVEL_TITANIA:
                    func_8004E4D4(obj2F4);
                    break;

                case LEVEL_MACBETH:
                    func_801B28BC(obj2F4);
                    break;

                case LEVEL_BOLSE:
                    func_8004F05C(obj2F4);
                    break;

                default:
                    func_8004EBD0(obj2F4);
                    break;
            }
            break;

        case PLAYERSTATE_1C8_2:
            func_8004F05C(obj2F4);
            break;

        case PLAYERSTATE_1C8_8:
            func_8004F798(obj2F4);
            break;

        case PLAYERSTATE_1C8_0:
            if (gCurrentLevel == LEVEL_SECTOR_Y) {
                func_8019FF00(obj2F4);
            }
            break;
    }
}

void func_8004FCB8(Object_2F4* obj2F4, s32 arg1) {
    f32 angle;
    f32 scale;
    s32 i;

    if (obj2F4->timer_0BC == 0) {
        obj2F4->timer_0BC = 32;
        obj2F4->unk_124.y = 0.3f;
    }

    if (obj2F4->unk_124.y > 0.0f) {
        scale = obj2F4->unk_124.y;
        obj2F4->unk_124.y -= 0.05f;
        RCP_SetupDL_49();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        gDPSetEnvColor(gMasterDisp++, 16, 16, 240, 255);
        angle = Math_Atan2F(gPlayer[0].camEye.x - gPlayer[0].camAt.x, gPlayer[0].camEye.z - gPlayer[0].camAt.z);

        for (i = arg1; i < (arg1 + 4); i++) {
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, D_800CA110[i].x + obj2F4->obj.pos.x, D_800CA110[i].y + obj2F4->obj.pos.y,
                             D_800CA110[i].z + obj2F4->obj.pos.z, 1);
            Matrix_RotateY(gGfxMatrix, angle, 1);
            Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
        }
    }
}

void func_8004FEC0(Object_2F4* obj2F4) {
    static f32 D_800CA210 = 0.0f;
    static f32 D_800CA214 = 0.0f;
    static f32 D_800CA218 = 0.0f;
    f32 sp2DC;
    f32 sp2D8;
    f32 sp2D4;
    s32 sp2D0;
    s32 pad2C4[3];
    Vec3f sp2B8;
    Vec3f sp2AC;
    Vec3f sp144[30];
    s32 pad[3];
    s32 animFrameData;
    f32 camX;
    f32 camY;
    f32 camZ;
    f32 y;
    f32 x;

    switch (obj2F4->unk_0B6) {
        case 1000:
            RCP_SetupDL(&gMasterDisp, 0x2D);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj2F4->unk_046);
            gSPDisplayList(gMasterDisp++, D_40018A0);

            if (obj2F4->unk_046 >= 0x33) {
                func_8005ADAC(obj2F4);
            }
            break;

        case 0:
            func_8005B388(obj2F4);
            break;

        case 1:
            if (gCurrentLevel == LEVEL_SECTOR_Z) {
                gSPFogPosition(gMasterDisp++, gFogNear, 1005);
            }
            obj2F4->info.bonus = 1;
            func_800515C4();
            break;

        case 10:
            RCP_SetupDL_40();
            Matrix_Scale(gGfxMatrix, 60.0f, 60.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6020810);
            break;

        case 11:
            RCP_SetupDL_64_2();
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            Matrix_Scale(gGfxMatrix, 60.0f, 60.0f, 1.0f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 10.0f, 1);
            Matrix_Scale(gGfxMatrix, obj2F4->scale, obj2F4->scale, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);

            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj2F4->unk_050);
            gDPSetEnvColor(gMasterDisp++, 255, 255, 00, obj2F4->unk_050);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;

        case 20:
            gSPDisplayList(gMasterDisp++, D_400AAE0);
            break;

        case 24:
            gSPDisplayList(gMasterDisp++, D_D009A40);
            func_8005ADAC(obj2F4);
            break;

        case 25:
            if (obj2F4->index & 1) {
                gSPDisplayList(gMasterDisp++, D_6001DA0);
            } else {
                gSPDisplayList(gMasterDisp++, D_6001360);
            }
            break;

        case 26:
            gSPDisplayList(gMasterDisp++, D_6004FE0);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
            func_8005B1E8(obj2F4, 2);
            break;

        case 28:
            gSPDisplayList(gMasterDisp++, D_400AAE0);
            Matrix_Translate(gGfxMatrix, 0.f, 0.f, -60.0f, 1);
            func_8005B1E8(obj2F4, 2);
            break;

        case 30:
            func_8005F670(&obj2F4->obj.pos);

            if (obj2F4->unk_046 != 0) {
                RCP_SetupDL(&gMasterDisp, 0x37);
                gSPClearGeometryMode(gMasterDisp++, 0x00002000);
                Rand_SetSeed(1, 29000, 9876);

                for (sp2D0 = 0; sp2D0 < 30; sp2D0++) {
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, ((Rand_ZeroOneSeeded() - 0.5f) * 3000.0f) * (*obj2F4).unk_164,
                                     ((Rand_ZeroOneSeeded() - 0.5f) * 3000.0f) * (*obj2F4).unk_164,
                                     ((Rand_ZeroOneSeeded() - 0.5f) * 3000.0f) * (*obj2F4).unk_164, 1);
                    Matrix_RotateY(gGfxMatrix, 2.0f * (Rand_ZeroOneSeeded() * 3.1415927f), 1);
                    Matrix_RotateZ(gGfxMatrix, (2.0f * gFrameCount) * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, 2.0f * (Rand_ZeroOneSeeded() * 3.1415927f), 1);

                    switch (sp2D0 & 3) {
                        case 0:
                            Matrix_Scale(gGfxMatrix, 1.0f, 0.3f, 1.0f, 1);
                            break;

                        case 1:
                            Matrix_Scale(gGfxMatrix, 0.3f, 1.0f, 1.0f, 1);
                            break;

                        case 2:
                            Matrix_Scale(gGfxMatrix, 1.0f, 0.5f, 1.0f, 1);
                            break;

                        case 3:
                            Matrix_Scale(gGfxMatrix, 0.5f, 1.0f, 1.0f, 1);
                            break;
                    }

                    Matrix_Scale(gGfxMatrix, (Rand_ZeroOneSeeded() * 8.0f) + 8.0f, (Rand_ZeroOneSeeded() * 8.0f) + 8.0f,
                                 10.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_1021E20);
                    Matrix_Pop(&gGfxMatrix);
                }

                break;
            }

            if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
                Matrix_Push(&gGfxMatrix);
                Matrix_RotateX(gGfxMatrix, 0.34906584f, 1);
                Matrix_RotateY(gGfxMatrix, (gFrameCount * 0.5f) * M_DTOR, 1);
                Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
            } else {
                Matrix_RotateX(gGfxMatrix, -0.17453292f, 1);
                Matrix_RotateY(gGfxMatrix, (gFrameCount * 0.3f) * M_DTOR, 1);
                Matrix_Scale(gGfxMatrix, 4.0f, 4.0f, 4.0f, 1);
                Matrix_Push(&gGfxMatrix);
            }

            Matrix_Translate(gGfxMatrix, 0.f, -590.0f, 0.f, 1);

            Matrix_SetGfxMtx(&gMasterDisp);

            gSPDisplayList(gMasterDisp++, D_600BAA0);

            Matrix_Push(&gGfxMatrix);

            RCP_SetupDL(&gMasterDisp, 0x40);

            switch ((gFrameCount >> 3) & 3) {
                case 0:
                    sp2DC = 255.0f;
                    sp2D8 = 0.0f;
                    sp2D4 = 0.0f;
                    break;

                case 1:
                    sp2DC = 0.0f;
                    sp2D8 = 255.0f;
                    sp2D4 = 0.0f;
                    break;

                case 2:
                    sp2DC = 0.0f;
                    sp2D8 = 0.0f;
                    sp2D4 = 255.0f;
                    break;

                case 3:
                    sp2DC = 255.0f;
                    sp2D8 = 255.0f;
                    sp2D4 = 0.0f;
                    break;
            }

            Math_SmoothStepToF(&D_800CA210, sp2DC, 1.0f, 20.0f, 0);
            Math_SmoothStepToF(&D_800CA214, sp2D8, 1.0f, 20.0f, 0);
            Math_SmoothStepToF(&D_800CA218, sp2D4, 1.0f, 20.0f, 0);

            gDPSetPrimColor(gMasterDisp++, 0, 0, (s32) D_800CA210, (s32) D_800CA214, (s32) D_800CA218, 128);

            if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
                Matrix_Scale(gGfxMatrix, 1.02f, 1.02f, 1.02f, 1);
            } else {
                Matrix_Scale(gGfxMatrix, 0.97f, 0.97f, 0.97f, 1);
            }

            Matrix_SetGfxMtx(&gMasterDisp);

            gDPSetTextureFilter(gMasterDisp++, 0 << 12);
            gSPDisplayList(gMasterDisp++, D_6000D80);
            gDPSetTextureFilter(gMasterDisp++, 2 << 12);

            Matrix_Pop(&gGfxMatrix);
            Matrix_Pop(&gGfxMatrix);

            if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) {
                Matrix_Scale(gGfxMatrix, 0.075f, 0.075f, 0.075f, 1);
                break;
            }
            break;

        case 31:
            RCP_SetupDL_21();
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_101ABD0);
            break;

        case 32:
            gSPDisplayList(gMasterDisp++, D_6008770);
            break;

        case 33:
            if ((obj2F4->index == 3) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7)) {
                gSPDisplayList(gMasterDisp++, D_D00B880);
            } else {
                gSPDisplayList(gMasterDisp++, D_600E050);
            }
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
            func_8005B1E8(obj2F4, 0);
            break;

        case 34:
            gSPDisplayList(gMasterDisp++, D_6001530);
            break;

        case 35:
            Matrix_Scale(gGfxMatrix, 0.125f, 0.125f, 0.125f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            /* fallthrough */
        case 39:
            gSPDisplayList(gMasterDisp++, D_60097E0);
            func_8004FCB8(obj2F4, 4);
            break;

        case 36:
            Matrix_Scale(gGfxMatrix, obj2F4->scale, obj2F4->scale, obj2F4->scale, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_601D730);
            func_8004FCB8(obj2F4, 0);
            break;

        case 37:
            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0, 0, (*obj2F4).unk_050, (*obj2F4).unk_054, (*obj2F4).unk_058,
                            (*obj2F4).unk_05C);
            gDPSetEnvColor(gMasterDisp++, (*obj2F4).unk_060, (*obj2F4).unk_064, (*obj2F4).unk_068, (*obj2F4).unk_06C);
            Matrix_Scale(gGfxMatrix, obj2F4->scale, obj2F4->unk_124.x, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;

        case 38:
            animFrameData = Animation_GetFrameData(D_800CA1F4[obj2F4->unk_060], obj2F4->unk_064, sp144);
            Math_SmoothStepToVec3fArray(sp144, obj2F4->unk_18C, 1, animFrameData, obj2F4->unk_11C, 100.0f, .0f);
            RCP_SetupDL_30(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 150, 255, 150, 255);
            Animation_DrawSkeleton(1, &D_602D140, obj2F4->unk_18C, 0, 0, obj2F4, &gIdentityMatrix);

            if (obj2F4->unk_114 != 0.0f) {
                RCP_SetupDL_49();
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
                gDPSetEnvColor(gMasterDisp++, 255, 32, 32, 255);
                Matrix_Translate(gGfxMatrix, 10.0f, -5.0f, -40.0f, 1);
                Matrix_RotateY(gGfxMatrix, (-obj2F4->obj.rot.y) * M_DTOR, 1);
                Graphics_SetScaleMtx(1.0f);
                Matrix_Scale(gGfxMatrix, obj2F4->unk_114, obj2F4->unk_114, obj2F4->unk_114, 1);

                camX = gPlayer[0].camEye.x - obj2F4->obj.pos.x;
                camY = gPlayer[0].camEye.y - obj2F4->obj.pos.y;
                camZ = gPlayer[0].camEye.z - (obj2F4->obj.pos.z + D_80177D20);

                y = -Math_Atan2F(camX, camZ);
                x = Math_Atan2F(camY, sqrtf(SQ(camZ) + SQ(camX)));

                Matrix_RotateY(gGfxMatrix, -y, 1);
                Matrix_RotateX(gGfxMatrix, -x, 1);

                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
                Math_SmoothStepToF(&obj2F4->unk_114, 0.0f, 0.1f, 0.2f, 0.05f);
            }

            if (obj2F4->unk_124.z != 0.0f) {
                RCP_SetupDL_49();
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
                gDPSetEnvColor(gMasterDisp++, 255, 48, 0, 255);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_RotateY(gCalcMatrix, (obj2F4->obj.rot.y - 90.0f) * M_DTOR, 0);

                sp2B8.x = 210.0f;
                sp2B8.y = 0.0f;
                sp2B8.z = 40.0f;

                Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f*) (&sp2B8), &sp2AC);
                Matrix_Translate(gGfxMatrix, obj2F4->obj.pos.x + sp2AC.x, obj2F4->obj.pos.y + sp2AC.y,
                                 obj2F4->obj.pos.z + sp2AC.z, 1);
                Matrix_Scale(gGfxMatrix, obj2F4->unk_124.z, obj2F4->unk_124.z, obj2F4->unk_124.z, 1);

                camX = gPlayer[0].camEye.x - obj2F4->obj.pos.x;
                camY = gPlayer[0].camEye.y - obj2F4->obj.pos.y;
                camZ = gPlayer[0].camEye.z - (obj2F4->obj.pos.z + D_80177D20);

                y = -Math_Atan2F(camX, camZ);
                x = Math_Atan2F(camY, sqrtf(SQ(camZ) + SQ(camX)));

                Matrix_RotateY(gGfxMatrix, -y, 1);
                Matrix_RotateX(gGfxMatrix, -x, 1);

                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
                Math_SmoothStepToF(&obj2F4->unk_124.z, 0.00f, 0.1f, 0.6f, 0);
            }
            break;

        case 40:
            gSPDisplayList(gMasterDisp++, D_60132A0);
            break;

        case 41:
            func_801BE0F0(obj2F4);
            break;

        case 42:
            gSPDisplayList(gMasterDisp++, D_6014A40);
            break;

        case 43:
            RCP_SetupDL_49();

            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj2F4->unk_050);
            gDPSetEnvColor(gMasterDisp++, 255, 0xC0, 128, 255);

            Matrix_RotateY(
                gGfxMatrix,
                Math_Atan2F(gPlayer[0].camEye.x - gPlayer[0].camAt.x, gPlayer[0].camEye.z - gPlayer[0].camAt.z), 1);
            Matrix_Scale(gGfxMatrix, obj2F4->unk_114, obj2F4->unk_114, obj2F4->unk_114, 1);

            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);

            if (obj2F4->unk_050 != 0) {
                obj2F4->unk_050 -= 7;
            }
            obj2F4->unk_114 += 0.2f;
            break;

        case 44:
            Animation_GetFrameData(&D_6020A40, obj2F4->unk_050, obj2F4->unk_18C);
            gSPClearGeometryMode(gMasterDisp++, 0x00002000);
            Animation_DrawSkeleton(1, &D_6020C6C, obj2F4->unk_18C, 0, 0, &obj2F4->index, &gIdentityMatrix);
            gSPSetGeometryMode(gMasterDisp++, 0x00002000);
            break;

        case 45:
            Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_600EEF0);
            break;

        case 46:
            gSPDisplayList(gMasterDisp++, D_601DE60);
            break;

        case 47:
            gSPDisplayList(gMasterDisp++, D_602B4C0);
            break;
    }
}

void func_800515C4(void) {
    Vec3f* var_s6_2;
    s32 i;
    s32 j;
    f32 sp9C[4];
    Gfx* var_fp;

    (void) "Demo_Time=%d\n";
    (void) "Demo_Time=%d\n";
    (void) "d Enm->wrk0 %d\n";

    if (gGameState == GSTATE_TITLE) {
        var_fp = D_60320E0;
    } else if (gGameState == GSTATE_CREDITS) {
        var_fp = D_7010970;
    } else {
        var_fp = D_1024AC0;
    }

    if (gCurrentLevel == LEVEL_TITANIA) {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, 1005);
    }

    if (D_80177B8C != 0) {
        gSPDisplayList(gMasterDisp++, &D_E000000);
    } else {
        gSPDisplayList(gMasterDisp++, &D_E003AB0);
    }

    if ((gCurrentLevel != LEVEL_AQUAS) &&
        ((gCurrentLevel != LEVEL_SECTOR_Z) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7))) {
        RCP_SetupDL_49();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        for (i = 0, var_s6_2 = D_800CA0BC; i < 4; i++, var_s6_2++) {
            if ((i != 1) || (D_80177B8C != 0)) {
                sp9C[i] = 0.0f;
                if (i < 2) {
                    if (!(gFrameCount & 0x38)) {
                        sp9C[i] = D_800CA170[gFrameCount & 7];
                    }
                    gDPSetEnvColor(gMasterDisp++, 255, 32, 32, 128);
                } else {
                    if (!((gFrameCount + 32) & 0x38)) {
                        sp9C[i] = D_800CA170[gFrameCount & 7];
                    }
                    gDPSetEnvColor(gMasterDisp++, 32, 32, 255, 128);
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, var_s6_2->x, var_s6_2->y, var_s6_2->z, 1);
                Matrix_Scale(gGfxMatrix, sp9C[i], sp9C[i], 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, var_fp);
                Matrix_Pop(&gGfxMatrix);
            }
        }

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 48);
        gDPSetEnvColor(gMasterDisp++, 255, 255, 0, 48);
        for (i = 0, var_s6_2 = D_800CA0EC; i < 3; i++, var_s6_2++) {
            sp9C[i] = D_800CA190[gFrameCount & 1];
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, var_s6_2->x, var_s6_2->y, var_s6_2->z, 1);
            Matrix_Scale(gGfxMatrix, sp9C[i], sp9C[i], 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, var_fp);

            for (j = 0; j < 4; j++) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_800CA1B4[2 * j], 1);
                Matrix_Scale(gGfxMatrix, D_800CA1D4[2 * j], D_800CA1D4[2 * j], 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, var_fp);
                Matrix_Pop(&gGfxMatrix);
            }
            Matrix_Pop(&gGfxMatrix);
        }

        if ((gCurrentLevel == LEVEL_METEO) && (gPlayer[0].timer_1FC != 0)) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
            gDPSetEnvColor(gMasterDisp++, 255, 255, 32, 128);
            Matrix_Translate(gGfxMatrix, D_80177A48[3] * (-74.0f), -232.0f, 1190.0f, 1);
            Matrix_Scale(gGfxMatrix, D_800CA198[gPlayer[0].timer_1FC], D_800CA198[gPlayer[0].timer_1FC], 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, var_fp);
        }
    }
}

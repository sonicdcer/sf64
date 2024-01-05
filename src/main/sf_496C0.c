#include "global.h"

#include "variables.h"

extern Gfx D_1024AC0[];
extern Gfx D_60320E0[];
extern Gfx* D_7010970[];
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

extern AnimationHeader D_6020A40[];
extern AnimationHeader D_6020C6C[];
extern AnimationHeader D_602D140[];

Vec3f D_800C9F60[] = { {
                           2000.0f,
                           2000.0f,
                           2000.0f,
                       },
                       {
                           -2000.0f,
                           2000.0f,
                           2000.0f,
                       },
                       {
                           0.0f,
                           -3000.0f,
                           3000.0f,
                       },
                       {
                           5000.0f,
                           -3000.0f,
                           -3000.0f,
                       } };

f32 D_800C9F90[] = { 75.0f, -80.0f, 85.0f, 0.0f };

Vec3f D_800C9FA0[] = { {
                           200.0f,
                           -10.0f,
                           200.0f,
                       },
                       {
                           -200.0f,
                           20.0f,
                           200.0f,
                       },
                       {
                           0.0f,
                           50.0f,
                           400.0f,
                       },
                       {
                           -2000.0f,
                           -1000.0f,
                           0.0f,
                       } };

f32 D_800C9FD0[] = { -1200.0f, 1200.0f, 0.0f, 0.0f };

f32 D_800C9FE0[] = {
    0.0f,
    0.0f,
    600.0f,
    2000.0f,
};

f32 D_800C9FF0[] = {
    -100.0f,
    0.0f,
    100.0f,
    500.0f,
};

f32 D_800CA000[] = {
    -150.0f,
    150.0f,
    0.0f,
    0.0f,
};

f32 D_800CA010[] = {
    0.0f,
    0.0f,
    80.0f,
    1000.0f,
};

f32 D_800CA020[] = {
    45,
    -45,
    10,
    0,
};

s32 D_800CA030[] = { 0, 0, 0, 1 };

s32 D_800CA040[] = { 0, 0, 0, 0 };

f32 D_800CA050[] = { 210.0f, -210.0f, 0.0f };

f32 D_800CA05C[] = {
    -60.0f,
    -60.0f,
    -120.0f,
};

f32 D_800CA068[] = {
    -150.0f,
    -150.0f,
    -300.0f,
};

f32 D_800CA074[] = {
    360.0f,
    -360.0f,
    0.0f,
};

f32 D_800CA080[] = {
    -400.0f,
    0.0f,
    400.0f,
};

f32 D_800CA08C[] = {
    0.0f,
    200.0f,
    0.0f,
};

f32 D_800CA098[] = {
    1.0f,
    -0.8999999762f,
    0.6999999881f,
};

f32 D_800CA0A4[] = {
    150.0f,
    100.0f,
    200.0f,
};

f32 D_800CA0B0[] = {
    200.0f,
    300.0f,
    500.0f,
};

Vec3f D_800CA0BC[] = {
    {
        -1373.0,
        484.0,
        -374.0,
    },
    {
        1373.0,
        484.0,
        -374.0,
    },
    {
        -1373.0,
        -704.0,
        -374.0,
    },
    {
        1373.0,
        -704.0,
        -374.0,
    },
};

Vec3f D_800CA0EC[] = {
    {
        0.0,
        40.0,
        -2278.0,
    },
    {
        295.0,
        -92.0,
        -1301.0,
    },
    {
        -295.0,
        -92.0,
        -1301.0,
    },
};

Vec3f D_800CA110[8] = {
    {
        170.0f,
        -35.0f,
        -380.0f,
    },
    {
        -170.0f,
        -40.0f,
        -380.0f,
    },
    {
        170.0f,
        -130.0f,
        -380.0f,
    },
    {
        -170.0f,
        -140.0f,
        -380.0f,
    },
    {
        140.0f,
        40.0f,
        -250.0f,
    },
    {
        -150.0f,
        40.0f,
        -250.0f,
    },
    {
        140.0f,
        0.0f,
        -250.0f,
    },
    {
        -150.0f,
        0.0f,
        -250.0f,
    },
};

f32 D_800CA170[] = {
    0.150000006f, 0.4499999881f, 0.75f, 1.299999952f, 0.75f, 0.4499999881f, 0.150000006f, 0.0f,
};

f32 D_800CA190[] = {
    5.0f,
    5.199999809f,
};

f32 D_800CA198[] = {
    0.5f, 1.5f, 2.5f, 1.5f, 0.5f, 0.200000003f, 0.200000003f,
};

f32 D_800CA1B4[] = {
    -30.0f, -60.0f, -90.0f, -120.0f, -150.0f, -180.0f, -200.0, -210.0,
};

f32 D_800CA1D4[] = {
    1.5f, 0.8700000048f, 0.8299999833f, 0.75f, 0.6999999881f, 0.6000000238f, 0.400000006f, 0.1000000015f,
};

extern AnimationHeader* D_800CA1F4[] = {
    D_60265B4, D_602B8DC, D_60034C4, D_602A2CC, D_602CEB4, D_602B778, (AnimationHeader*) 0x0601F3B8,
};

extern void func_80187520(s32, void*);
extern void func_800AB334(void);
extern void func_800ADF58(Player*);
extern void func_8004D440(Player*);
extern void func_80046358(Player*);
extern void func_8004B368(Player*);
extern void func_80095604(Player*);
extern void func_800B2130(Player*);
extern void func_801882CC(Player*, OSContPad**, OSContPad**);
extern void func_8018E084(Player*);
extern void func_8018F94C(Player*);
extern void func_80191160(Player*);
extern void func_80193C4C(Player*);
extern void func_80194728(Player*);
extern void func_80196D88(Player*);
extern void func_80197290(Player*);
extern void func_8019C85C(Player*);
extern void func_8019D76C(Player*);
extern void func_8019EE60(Player*);
extern void func_801A7930(Player*);
extern void func_801AF8F4(Player*, OSContPad**, OSContPad**);
extern void func_801B3D04(Player*, OSContPad**, OSContPad**);
extern void func_8002ED60(Player*);
extern void func_800935E8(Player*);
extern void func_8018769C(Player*);
extern void func_8018CD8C(Player*);
extern void func_8018DF74(Player*);
extern void func_8018EF6C(Player*);
extern void func_8018F880(Player*);
extern void func_80192E20(Player*);
extern void func_80193A30(Player*);
extern void func_80196BF8(Player*);
extern void func_801988B8(Player*);
extern void func_8019BA64(Player*);
extern void func_8019D428(Player*);
extern void func_801A0AC0(Player*);
extern void func_801A10F4(Player*);
extern void func_801AB9B0(Player*);
extern void func_801AC754(Player*);
extern void func_800A46A0(Player*);
extern void func_800AD7F0(Player*);
extern void func_800B2574(Player*);
extern void func_800AE278(Player*);
extern void func_80093164(Object_2F4*);
extern void func_800A6028(Vec3f*, u32);
extern void func_8018DA58(Object_2F4*);
extern void func_8018ED9C(Object_2F4*);
extern void func_80195E44(Object_2F4*);
extern void func_80197F10(Object_2F4*);
extern void func_8019DD20(Object_2F4*);
extern void func_8019E5F0(Object_2F4*);
extern void func_8019FF00(Object_2F4*);
extern void func_801A8BE8(Object_2F4*);
extern void func_801B28BC(Object_2F4*);

void func_80048AC0(s32 arg0) {
    s32 teamShield;

    if (arg0 == 1) {
        if (gTeamShields[1] < 0x40) {
            func_800BA808(gMsg_ID_20303, 0xA);
            return;
        }
        if ((s32) (Play_GetMaxShields() * 0.8f) < gPlayer->shields) {
            func_800BA808(gMsg_ID_20017, 0xA);
            return;
        }
        if ((s32) (Play_GetMaxShields() * 0.3f) < gPlayer->shields) {
            func_800BA808(gMsg_ID_20019, 0xA);
            return;
        }
        func_800BA808(gMsg_ID_20018, 0xA);
        return;
    }

    teamShield = gTeamShields[arg0];

    if (teamShield >= 0xA1) {
        switch (arg0) {
            case 2:
                func_800BA808(gMsg_ID_20011, 0x14);
                return;
            case 3:
                func_800BA808(gMsg_ID_20012, 0x1E);
                return;
        }
    } else if (teamShield >= 0x41) {
        switch (arg0) {
            case 2:
                func_800BA808(gMsg_ID_20013, 0x14);
                return;
            case 3:
                func_800BA808(gMsg_ID_20014, 0x1E);
                return;
        }
    } else {
        switch (arg0) {
            case 2:
                func_800BA808(gMsg_ID_20015, 0x14);
                return;
            case 3:
                func_800BA808(gMsg_ID_20016, 0x1E);
                return;
        }
    }
}

void func_80048CC4(Object_2F4* arg0, s32 arg1) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 0xC3;
    arg0->obj.pos.x = D_800C9F60[arg1].x + gPlayer[0].pos.x;
    arg0->obj.pos.y = D_800C9F60[arg1].y + gPlayer[0].pos.y;
    arg0->obj.pos.z = D_800C9F60[arg1].z + gPlayer[0].unk_138;
    arg0->unk_0F4.y = 0.0f;
    arg0->unk_0F4.z = D_800C9F90[arg1];
    Object_SetInfo(&arg0->info, arg0->obj.id);
    if (arg1 == 3) {
        Audio_PlaySfx(0x11030010U, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        Audio_PlaySfx(0x31024059U, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        arg0->unk_0B6 = 1;
    } else {
        arg0->unk_07C = 1;
        Audio_PlaySfx(0x3100000CU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_80048E40(Player* arg0) {
    Vec3f sp5C;
    Vec3f sp50;
    s8 pad[0x8];
    f32 temp_ft3;
    f32 temp_ret;
    s32 temp_v0;
    s32 temp_v1;

    gObjects408[1].obj.status = 0;
    Math_SmoothStepToF(&arg0->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0E4, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0E8, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0EC, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_08C, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&arg0->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);

    switch (arg0->unk_1D0) {
        case 0:
            arg0->unk_4DC = 0;
            func_8001A38C(1, &arg0->unk_460);
            arg0->unk_1D0 += 1;
            D_80177A48[0] = 0.0f;
            D_80177A48[1] = 0.0f;
            D_80177A48[2] = 0.0f;
            arg0->wings.unk_2C = 1;
            D_80177A80 = 0;

        case 1:
            D_80177A48[1] -= D_80177A48[2];
            Math_SmoothStepToF(&D_80177A48[2], 1.2f, 0.1f, 0.01f, 0.0f);
            Math_SmoothStepToF(D_80177A48, 0.1f, 0.1f, 0.002f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_0D0, 0.0f, 1.0f, 0.5f, 0.0f);
            Matrix_RotateX(gCalcMatrix, -0.08726646f, 0);
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 1);
            sp5C.x = 0.0f;
            sp5C.y = 0.0f;
            sp5C.z = 300.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp50);
            D_801779A0 = arg0->pos.x;
            D_801779B8 = arg0->pos.y;
            D_801779C0 = arg0->unk_138 + D_80177D20;

            switch (D_80177A80) {
                case 0x65:
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

                case 0x64:
                    D_80177840 = 0x64;
                    break;

                case 0xC8:
                    D_80177830 = 1;
                    break;

                case 0x190:
                    D_80177830 = 0;
                    break;

                case 0x1A4:
                    gObjects2F4[0].unk_0B8 = 1;
                    break;

                case 0x1AE:
                    gObjects2F4[1].unk_0B8 = 1;
                    break;

                case 0x1B8:
                    gObjects2F4[2].unk_0B8 = 1;
                    break;

                case 0x1C2:
                    Audio_PlaySfx(0x09000002U, &arg0->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    arg0->unk_194 = 5.0f;
                    arg0->unk_190 = 5.0f;

                default:
                    break;
            }
            if (D_80177A80 >= 0x1C3) {
                Math_SmoothStepToF(D_80177A48, 1.0f, 0.1f, 0.004f, 0.0f);
                arg0->unk_0D0 += 2.0f;
                arg0->unk_0E4 += 0.1f;
                arg0->unk_190 = 2.0f;
                if (D_80177A80 == 0x212) {
                    func_8001DBD0(0x32);
                }
                if (D_80177A80 >= 0x21D) {
                    D_80178358 = 0xFF;
                    D_80178348 = (D_80178350 = (D_80178354 = 0));
                    D_8017835C = 8;
                    if (D_80178340 == 0xFF) {
                        arg0->state_1C8 = PLAYERSTATE_1C8_6;
                        arg0->timer_1F8 = 0;
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
                D_80177978 = arg0->pos.x + sp50.x;
                D_80177980 = arg0->pos.y + sp50.y;
                D_80177988 = (arg0->unk_138 + D_80177D20) + sp50.z;
            }

            break;
    }

    Math_SmoothStepToF(&arg0->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
    Matrix_RotateY(gCalcMatrix, (arg0->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((arg0->unk_0E4 + arg0->unk_4D8) * M_DTOR), 1);

    sp5C.x = 0.0f;
    sp5C.y = 0.0f;
    sp5C.z = arg0->unk_0D0 + arg0->unk_110;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
    arg0->vel.x = sp50.x;
    arg0->vel.z = sp50.z;
    arg0->vel.y = sp50.y;

    arg0->pos.x += arg0->vel.x;
    arg0->pos.y += arg0->vel.y;
    arg0->pos.z += arg0->vel.z;

    arg0->unk_138 = arg0->pos.z + arg0->unk_08C;
    arg0->unk_0F8 = (arg0->unk_0EC + arg0->unk_12C) + arg0->unk_130;
    arg0->unk_088 += 10.0f;
    arg0->unk_080 = (-__sinf(arg0->unk_088 * M_DTOR)) * 0.3f;
    arg0->unk_0F4 += 8.0f;
    arg0->unk_0F0 = __sinf(arg0->unk_0F4 * M_DTOR);
}

void func_80049630(Object_2F4* obj2F4) {
    Vec3f sp3C;
    Vec3f sp30;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_18C[0].x = D_800C9FA0[obj2F4->index].x + gPlayer->pos.x;
            obj2F4->unk_18C[0].y = D_800C9FA0[obj2F4->index].y + gPlayer->pos.y;
            obj2F4->unk_18C[0].z = D_800C9FA0[obj2F4->index].z + gPlayer->pos.z;
            Math_SmoothStepToF(&obj2F4->obj.pos.x, obj2F4->unk_18C[0].x, 0.05f, 50.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->obj.pos.y, obj2F4->unk_18C[0].y, 0.05f, 50.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->obj.pos.z, obj2F4->unk_18C[0].z, 0.05f, 50.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->unk_0F4.x, gPlayer->unk_0E4, 0.1f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->unk_0F4.y, gPlayer->unk_0E8, 0.1f, 2.0f, 0.0001f);
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
    obj2F4->unk_0E8.x = sp30.x;
    obj2F4->unk_0E8.y = sp30.y;
    obj2F4->unk_0E8.z = sp30.z;
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

void func_80049968(Object_2F4* arg0, s32 arg1) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 0xC3;
    arg0->obj.pos.x = D_800C9FD0[arg1];
    arg0->obj.pos.y = D_800C9FE0[arg1];
    arg0->obj.pos.z = D_800C9FF0[arg1] + (((void) 0, gPlayer))->unk_138;
    arg0->unk_114 = D_800CA000[arg1];
    arg0->unk_118 = D_800CA010[arg1];
    arg0->unk_0B6 = D_800CA030[arg1];
    arg0->unk_0B8 = D_800CA040[arg1];
    arg0->obj.rot.z = D_800CA020[arg1];
    arg0->obj.rot.y = 180.0f;
    arg0->unk_0E8.z = gPlayer->vel.z;
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->unk_07C = 1;
    Audio_PlaySfx(0x3100000CU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_80049A9C(Object_8C* obj8c, f32 x, f32 y, f32 z) {
    Object_8C_Initialize(obj8c);
    obj8c->obj.status = 1;
    obj8c->obj.id = 0x15A;
    obj8c->timer_50 = 0x64;
    obj8c->scale2 = 0.2f;
    obj8c->obj.pos.x = x;
    obj8c->obj.pos.y = y;
    obj8c->obj.pos.z = z;
    obj8c->unk_54.z = 40.0f;
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

void func_80049C0C(Player* arg0) {
    s32 var_v0;
    char pad[0x10];

    arg0->pos.x += arg0->vel.x;
    arg0->unk_228 = 0;
    arg0->unk_238 = 0;
    arg0->pos.y += arg0->vel.y;
    arg0->pos.z += arg0->vel.z;
    func_8004990C(arg0);
    arg0->unk_140 = -arg0->vel.z;
    arg0->unk_144 += -arg0->vel.z;
    D_80177D20 = arg0->unk_144;
    Math_SmoothStepToF(&arg0->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0EC, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0E8, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->pos.x, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&arg0->pos.y, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camEye.x, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camEye.y, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camAt.x, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camAt.y, 0.0f, 0.1f, 50.0f, 0.0f);
    Math_SmoothStepToAngle(&arg0->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    switch (arg0->unk_1D0) {
        case 0:
            arg0->unk_4DC = 0;
            D_80178414 = 100.0f;
            arg0->unk_1D0 = 1;
            D_80178410 = 1;
            D_80178488 = 0;
            arg0->vel.x = 0.0f;
            arg0->vel.y = 0.0f;
            arg0->vel.z = -500.0f;
            arg0->unk_0CC = -500.0f;
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
            arg0->timer_1F8 = 0x32;
            return;
        case 1:
            Math_SmoothStepToF(&D_801779A8[arg0->num], 100.0f, 1.0f, 4.0f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
            D_80178414 *= 1.05f;
            if (arg0->timer_1F8 == 0) {
                arg0->unk_1D0 = 2;
                arg0->timer_1F8 = 0x96;
            }
            arg0->unk_190 = 2.0f;
            arg0->unk_08C -= 2.0f;
            gBlurAlpha = 0x80;
            return;
        case 2:
            Math_SmoothStepToF(&D_801779A8[arg0->num], 100.0f, 1.0f, 3.0f, 0.0f);
            if (D_80178414 < 20000.0f) {
                D_80178414 *= 1.01f;
            }
            if (arg0->timer_1F8 < 0x65) {
                if (arg0->timer_1F8 == 0x64) {
                    func_800A6028(&arg0->unk_460, 0x0940802AU);
                    arg0->unk_194 = 5.0f;
                    arg0->unk_190 = 5.0f;
                }
                arg0->unk_08C += arg0->unk_0CC;
                arg0->unk_0CC = arg0->unk_0CC - 100.0f;
                if (arg0->unk_08C < -15000.0f) {
                    arg0->unk_08C = 0.0f;
                    arg0->unk_0CC = 0.0f;
                    arg0->unk_234 = 0;
                }
            }
            var_v0 = 1;
            arg0->unk_190 = 2.0f;
            if (arg0->timer_1F8 == 0x5F && gTeamShields[1] > 0) {
                gObjects2F4[0].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[0].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_1F8 == 0x5A && gTeamShields[3] > 0) {
                gObjects2F4[2].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[2].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_1F8 == 0x55 && gTeamShields[2] > 0) {
                gObjects2F4[1].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[1].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_1F8 == 0x3C) {
                gObjects2F4[3].unk_0B8 = var_v0;
                Audio_PlaySfx(0x0940802AU, &gObjects2F4[3].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
            }
            if (arg0->timer_1F8 == 0x32) {
                arg0->unk_1D0 = 4;
                arg0->timer_1F8 = 0;
            }
            break;
        case 4:
            Math_SmoothStepToF(&D_801779A8[arg0->num], 100.0f, 1.0f, 3.0f, 0.0f);
            arg0->unk_034 -= 0.5f;
            if (arg0->timer_1F8 == 0) {
                D_80178348 = D_80178350 = D_80178354 = 0xFF;
                D_80178358 = 0xFF;
                D_8017835C = 8;
                if (D_80178340 == 0xFF) {
                    func_800A6148();
                    arg0->unk_1D0 = 5;
                    arg0->timer_1F8 = 0xA;
                    arg0->unk_08C = -10000.0f;
                    arg0->unk_0AC = arg0->unk_0B8 = arg0->unk_0B0 = arg0->unk_0BC = arg0->pos.x = arg0->pos.y =
                        arg0->pos.z = arg0->unk_130 = arg0->unk_034 = arg0->unk_138 = arg0->vel.z = arg0->unk_144 =
                            D_80177D20 = arg0->unk_144 = D_80177CB0 = D_80177D20 = 0.0f;

                    arg0->timer_27C = gSavedHitCount = D_80177DC8 = D_80177CA0 = 0;

                    arg0->unk_234 = 1;
                    D_8017827C = 1;
                    D_800CA230 = 0.15f;
                    Audio_PlaySfx(0x11407079U, &D_800C5D28, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_800AB334();
                }
            }
            break;
        case 5:
            Math_SmoothStepToF(&D_801779A8[arg0->num], 100.0f, 1.0f, 3.0f, 0.0f);
            if (arg0->timer_1F8 == 0) {
                D_80178358 = 0;
                D_8017835C = 8;
                if (D_80178340 == 0) {
                    arg0->unk_1D0 = 6;
                    arg0->timer_1F8 = 0x32;
                    return;
                }
            }
            break;
        case 6:
            Math_SmoothStepToF(&D_80178414, 0.0f, 0.2f, 1000.0f, 0.1f);
            Math_SmoothStepToF(&arg0->unk_08C, 0.0f, 0.2f, 500.0f, 0.1f);
            if (arg0->timer_1F8 < 0x1E) {
                for (var_v0 = 0; var_v0 < 3; var_v0++) {
                    func_80049B44();
                }
            }
            if (arg0->timer_1F8 == 0x1E) {
                D_80178410 = 0x12C;
                func_8001D444(0, 0x803AU, 0, 0xFFU);
            }
            if (arg0->timer_1F8 == 0) {
                D_8015F960 = 0.0f;
                D_80178414 = 0.0f;
                arg0->state_1C8 = 3;
                arg0->unk_014 = 0.0f;
                arg0->unk_018 = 0.0f;
                D_801782B8 = 0;
            test:;
                D_80178488 = 1;
            }
            Math_SmoothStepToF(&arg0->camEye.y, (arg0->pos.y * arg0->unk_148) + 50.0f, 0.2f, 15.0f, 0.01f);
            Math_SmoothStepToF(&arg0->camAt.y, (arg0->pos.y * arg0->unk_14C) + 20.0f, 0.2f, 15.0f, 0.01f);
            break;
        default:
            return;
    }
}

void func_8004A52C(Player* arg0) {
    D_80177A80 += 1;
    if (gLevelMode == 0) {
        switch (gCurrentLevel) {
            case LEVEL_CORNERIA:
                func_8018F880(arg0);
                func_800AA800(arg0);
                break;
            case LEVEL_METEO:
                func_8018CD8C(arg0);
                break;
            case LEVEL_SECTOR_X:
                func_80193A30(arg0);
                break;
            case LEVEL_TITANIA:
                func_8018769C(arg0);
                func_800AA800(arg0);
                break;
            case LEVEL_ZONESS:
                func_8019D428(arg0);
                break;
            case LEVEL_MACBETH:
                func_801AC754(arg0);
                break;
            case LEVEL_SECTOR_Y:
                func_801A0AC0(arg0);
                break;
            case LEVEL_SOLAR:
                func_801A10F4(arg0);
                break;
            case LEVEL_VENOM_1:
                func_801988B8(arg0);
                func_800AA800(arg0);
                break;
            case LEVEL_AQUAS:
                func_800935E8(arg0);
                break;
            case LEVEL_AREA_6:
                func_8018DF74(arg0);
                break;
        }
        func_8004990C(arg0);
        return;
    }
    switch (gCurrentLevel) {
        case LEVEL_FORTUNA:
            func_8002ED60(arg0);
            func_800AA800(arg0);
            return;
        case LEVEL_VENOM_2:
            func_80196BF8(arg0);
            func_800AA800(arg0);
            return;
        case LEVEL_BOLSE:
            func_8018EF6C(arg0);
            func_800AA800(arg0);
            return;
        case LEVEL_KATINA:
            func_80192E20(arg0);
            func_800AA800(arg0);
            return;
        case LEVEL_SECTOR_Z:
            func_8019BA64(arg0);
        default:
            return;
    }
}

void func_8004A700(Object_2F4* obj2F4, s32 arg1) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = 0xC3;
    obj2F4->obj.pos.x = gPlayer->pos.x;
    obj2F4->obj.pos.y = gPlayer->pos.y - 1000.0f;
    obj2F4->obj.pos.z = gPlayer->pos.z;
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

void func_8004A840(s32 arg0) {
    func_8004A700(&gObjects2F4[arg0], arg0);
}

void func_8004A888(Object_8C* arg0) {
    Vec3f sp2C;
    Vec3f sp20;

    Matrix_RotateY(gCalcMatrix, (gPlayer->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(gPlayer->unk_0E4 * M_DTOR), 1);
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    sp2C.x = (Rand_ZeroOne() - 0.5f) * 1500.0f;
    sp2C.y = (Rand_ZeroOne() - 0.5f) * 800.0f;
    sp2C.z = 3000.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
    arg0->obj.pos.x = gPlayer->pos.x + sp20.x;
    arg0->obj.pos.y = gPlayer->pos.y + sp20.y;
    arg0->obj.pos.z = gPlayer->pos.z + sp20.z;
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    sp2C.z = -80.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
    arg0->unk_54.x = sp20.x;
    arg0->unk_54.y = sp20.y;
    arg0->unk_54.z = sp20.z;
    arg0->obj.id = 0x160;
    arg0->timer_50 = 0x28;
    arg0->unk_46 = 0x90;
    arg0->scale2 = (Rand_ZeroOne() * 30.0f) + 10.0f;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->obj.rot.z = 180.0f;
    }
    Object_SetInfo(&arg0->info, arg0->obj.id);
}

void func_8004AA84(void) {
    s32 i;

    if (!(gFrameCount & 7) && gLevelType == LEVEL_CORNERIA) {
        for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
            if (!gObjects8C[i].obj.status) {
                func_8004A888(&gObjects8C[i]);
                break;
            }
        }
    }
}

void func_8004AAF4(Player* arg0) {
    s32 pad;
    Vec3f sp70;
    Vec3f sp64;
    Object_2F4* var_s0;
    f32 var_s1;
    f32 var_s2;
    f32 var_s3;
    s32 temp_v0;
    s32 pad1;
    s32 pad2;

    D_80177A80 += 1;
    Math_SmoothStepToAngle(&arg0->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    if (D_80177A80 == 0x25) {
        D_80177E84 = 1;
        if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
            func_800BA808(gMsg_ID_19466, 0);
            func_8001D444(0, 0x803DU, 0, 0xFFU);
        } else if (gCurrentLevel != LEVEL_TRAINING) {
            func_800BA808(gMsg_ID_20180, 0);
            if (gCurrentLevel == 5) {
                func_8001D444(0, D_800C9E90[gCurrentLevel], 0, 2U);
            } else {
                func_8001D444(0, D_800C9E90[gCurrentLevel], 0, 0xFFU);
            }
        }
    }
    arg0->wings.unk_10 = 0.0f;
    arg0->wings.unk_08 = 0.0f;
    arg0->wings.unk_0C = 0.0f;
    arg0->wings.unk_04 = 0.0f;
    Math_SmoothStepToF(&arg0->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0E8, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0EC, 0.0f, 0.1f, 1.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_12C, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_08C, 0.0f, 0.1f, 3.0f, 0.0f);
    switch (arg0->unk_1D0) {
        case 0:
            func_8001ACDC(0);
            D_80177A48[0] = 0.005f;
            D_80177A48[1] = 0.0f;
            D_80177A48[2] = 60.0f;
            D_80177A48[3] = 0.0f;
            arg0->wings.unk_2C = 1;
            arg0->unk_1D0 += 1;
            D_80177A80 = 0;
        case 1:
            if (arg0->pos.y < 350.0f) {
                Math_SmoothStepToF(&arg0->pos.y, 350.0f, 0.1f, D_80177A48[3], 0.0f);
            }
            Math_SmoothStepToF(&D_80177A48[3], 10.0f, 1.0f, 1.0f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[1], 360.0f, 0.05f, 1.5f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[2], -70.0f, 0.1f, 0.7f, 0.0f);
            if (D_80177A48[1] > 220.0f) {
                arg0->unk_204 = 2;
            }
            if ((D_80177A80 >= 0x88) && (D_80177A80 < 0xB4)) {
                Math_SmoothStepToF(&D_801779A8[arg0->num], 30.0f, 1.0f, 10.0f, 0.0f);
            }
            if (D_80177A80 == 0x8A) {
                Audio_PlaySfx(0x09000007U, &arg0->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (D_80177A80 == 0xBE) {
                Audio_PlaySfx(0x09000013U, &arg0->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (D_80177A48[1] > 350.0f) {
                arg0->state_1C8 = PLAYERSTATE_1C8_3;
                arg0->unk_014 = 0.0f;
                arg0->unk_018 = 0.1f;
                arg0->unk_194 = 10.0f;
                arg0->unk_190 = 10.0f;
                Audio_PlaySfx(0x09000002U, &arg0->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_801779A8[arg0->num] = 70.0f;
                if ((gCurrentLevel != 9) && (gCurrentLevel != 0xA)) {
                    D_800D1970 = 0;
                    for (temp_v0 = 0, var_s0 = &gObjects2F4[2]; temp_v0 < 3; temp_v0++, var_s0++) {
                        Object_2F4_Initialize(var_s0);
                        var_s0->obj.status = 1;
                        var_s0->obj.id = 0xC6;
                        var_s0->obj.pos.x = D_800CA080[temp_v0] + arg0->pos.x;
                        var_s0->obj.pos.y = D_800CA08C[temp_v0] + arg0->pos.y;
                        var_s0->obj.pos.z = arg0->unk_138 - 1000.0f;
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
            if ((gCurrentLevel == 0) || (gCurrentLevel == 9)) {
                sp64.x *= -1.0f;
            }
            Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.005f, 0.0f);
            Math_SmoothStepToF(&arg0->camEye.x, arg0->pos.x + sp64.x, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&arg0->camEye.y, arg0->pos.y + sp64.y, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&arg0->camEye.z, arg0->unk_138 + D_80177D20 + sp64.z, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&arg0->camAt.x, arg0->pos.x, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&arg0->camAt.y, arg0->pos.y, *D_80177A48, 500.0f, 0.0f);
            Math_SmoothStepToF(&arg0->camAt.z, arg0->unk_138 + D_80177D20, *D_80177A48, 500.0f, 0.0f);
            break;
    }
    Matrix_RotateY(gCalcMatrix, (arg0->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(arg0->unk_0E4 * M_DTOR), 1);

    sp70.x = 0.0f;
    sp70.y = 0.0f;
    sp70.z = arg0->unk_0D0 + arg0->unk_110;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
    arg0->vel.x = sp64.x;
    arg0->vel.z = sp64.z;
    arg0->vel.y = sp64.y;
    arg0->pos.x += arg0->vel.x;
    arg0->pos.y += arg0->vel.y;
    arg0->pos.z += arg0->vel.z;
    arg0->unk_138 = arg0->pos.z + arg0->unk_08C;
    arg0->camAt.z += arg0->vel.z;
    arg0->camEye.z += arg0->vel.z;

    arg0->unk_0F8 = arg0->unk_0EC + arg0->unk_12C + arg0->unk_130;
    arg0->unk_088 += 10.0f;
    arg0->unk_080 = -__sinf(arg0->unk_088 * M_DTOR) * 0.3f;
    arg0->unk_0F4 += 8.0f;
    arg0->unk_0F0 = __sinf(arg0->unk_0F4 * M_DTOR);

    func_800AA800(arg0);
}

void func_8004B368(Player* arg0) {
    s32 pad[5];
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
    s32 pad2[2];
    f32 var_fa1;
    arg0->unk_228 = 0;
    Math_SmoothStepToF(&arg0->unk_034, 0.0f, 0.1f, 5.0f, 0.01f);
    switch (arg0->unk_1D0) {
        case 10:
            D_80177A48[2] = 0.0f;
            arg0->unk_1D0 += 1;
            arg0->wings.unk_04 = 0.0f;
            arg0->wings.unk_0C = 0.0f;
            arg0->wings.unk_08 = 0.0f;
            arg0->wings.unk_10 = 0.0f;
            arg0->unk_130 = 0.0f;
            arg0->unk_12C = 0.0f;
            arg0->unk_110 = 0.0f;
            arg0->wings.unk_2C = 1;
            arg0->unk_0D0 = 40.0f;

        case 11:
            D_80177A48[0] = 0.0f;
            Math_SmoothStepToAngle(&arg0->unk_4D8, 0.0f, 1.0f, 5.0f, 0.0f);
            arg0->camAt.x += (D_80178440 - arg0->camAt.x) * 0.01f;
            arg0->camAt.y += (D_80178444 - arg0->camAt.y) * 0.01f;
            arg0->camAt.z += (D_80178448 - arg0->camAt.z) * 0.01f;
            arg0->camEye.x += ((arg0->camAt.x + (500.0f * arg0->unk_004)) - arg0->camEye.x) * 0.01f;
            arg0->camEye.y += ((arg0->camAt.y + 500.0f) - arg0->camEye.y) * 0.01f;
            arg0->camEye.z += ((D_80178448 + (2000.0f * D_80177950)) - arg0->camEye.z) * 0.01f;
            if (arg0->timer_1FC >= 0x1A) {
                D_80177A48[2] += 1.5f * arg0->unk_004;
                Math_SmoothStepToF(&arg0->unk_0EC, (arg0->unk_004 * (-450.0f)) * D_80177950, 0.2f, 20.0f, 0.1f);
            } else {
                D_80177A48[2] += 0.25f * arg0->unk_004;
                if (arg0->unk_0EC < (-360.0f)) {
                    arg0->unk_0EC += 360.0f;
                }
                if (arg0->unk_0EC > 360.0f) {
                    arg0->unk_0EC -= 360.0f;
                }
                Math_SmoothStepToF(&arg0->unk_0EC, (arg0->unk_004 * 20.0f) * D_80177950, 0.1f, 3.0f, 0.1f);
            }
            if (D_80177950 > 0.0f) {
                Math_SmoothStepToF(&arg0->unk_0E8, 0.0f, 0.1f, 3.0f, 0.1f);
            } else {
                Math_SmoothStepToF(&arg0->unk_0E8, 180.0f, 0.1f, 3.0f, 0.1f);
                Math_SmoothStepToF(&arg0->pos.x, arg0->camEye.x, 1.0f, 30.0f, 0.0f);
                D_80177A48[2] = 0.0f;
            }
            arg0->pos.x += D_80177A48[2];
            Math_SmoothStepToF(&arg0->unk_0E4, 0.0f, 0.1f, 3.0f, 0.1f);
            Math_SmoothStepToF(&arg0->pos.y, arg0->camEye.y + 5.0f, 0.1f, 1.0f, 0.0f);
            if (arg0->timer_1F8 == 0) {
                arg0->unk_1D0 = 0;
                arg0->timer_1F8 = 0x78;
                arg0->timer_1FC = 0x14;
                D_80177A48[0] = 0.001f;
                D_80177978 = arg0->camEye.x;
                D_80177980 = arg0->camEye.y;
                D_80177988 = arg0->camEye.z;
                D_801779A0 = arg0->camAt.x;
                D_801779B8 = arg0->camAt.y;
                D_801779C0 = arg0->camAt.z;
            }
            break;

        case 0:
            if (arg0->timer_1F8 >= 0x3D) {
                Math_SmoothStepToF(&arg0->unk_0EC, (arg0->unk_004 * 60.0f) * D_80177950, 0.1f, 4.0f, 0.1f);
            }
            if (arg0->timer_1F8 < 0x50) {
                D_801779A0 = arg0->pos.x;
                D_801779B8 = arg0->pos.y;
                D_801779C0 = (arg0->unk_138 + D_80177D20) + 30.0f;
                Math_SmoothStepToF(D_80177A48, 0.05f, 0.1f, 0.0005f, 0.0f);
            }
            Math_SmoothStepToF(&arg0->pos.x, arg0->camEye.x, 0.1f, 10.0f, 0.0f);
            D_80177980 += ((arg0->camAt.y + 500.0f) - arg0->camEye.y) * 0.01f;
            arg0->camEye.y = D_80177980;
            var_fa1 = arg0->unk_004 * 190.0f;
            if ((D_80177950 > 0.0f) && (arg0->unk_004 > 0.0f)) {
                var_fa1 = 181.0f;
            }
            if ((D_80177950 > 0.0f) && (arg0->unk_004 < 0.0f)) {
                var_fa1 = -181.0f;
            }
            if ((D_80177950 < 0.0f) && (arg0->unk_004 > 0.0f)) {
                var_fa1 = 0.0f;
            }
            if ((D_80177950 < 0.0f) && (arg0->unk_004 < 0.0f)) {
                var_fa1 = 360.0f;
            }
            if (arg0->timer_1FC == 0) {
                Math_SmoothStepToF(&arg0->unk_0E8, var_fa1, 0.1f, 4.0f, 0.0f);
            }
            arg0->vel.y = 0.0f;
            Math_SmoothStepToF(&arg0->pos.y, arg0->camEye.y + 5.0f, 0.1f, 4.0f, 0.0f);
            if (arg0->timer_1F8 < 0x28) {
                Math_SmoothStepToF(&arg0->unk_0EC, arg0->unk_004 * 180.0f, 0.1f, 1.5f, 0.0f);
            }
            if (arg0->timer_1F8 == 0) {
                arg0->unk_1D0 = 1;
                arg0->timer_1F8 = 0x96;
                arg0->wings.unk_10 = 0.0f;
                arg0->wings.unk_08 = 0.0f;
                arg0->wings.unk_0C = 0.0f;
                arg0->wings.unk_04 = 0.0f;
            }
            break;

        case 1:
            Math_SmoothStepToF(D_80177A48, 1.0f, 0.1f, 0.05f, 0.0f);
            arg0->unk_25C += 0.04f;
            if (arg0->unk_25C > 0.6f) {
                arg0->unk_25C = 0.6f;
            }
            arg0->unk_000 += 0.005f;
            if (arg0->unk_000 > 0.3f) {
                arg0->unk_000 = 0.3f;
            }
            Math_SmoothStepToF(&D_801779A0, arg0->pos.x, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779B8, arg0->pos.y, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779C0, (arg0->unk_138 + D_80177D20) + 30.0f, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&arg0->pos.y, arg0->camEye.y + 5.0f, 0.1f, 4.0f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_0E4, 20.0f, 0.1f, 0.2f, 0.01f);
            Math_SmoothStepToF(&arg0->pos.x, arg0->camEye.x, 0.1f, 2.0f, 0.0f);
            if (arg0->timer_1F8 < 0x6F) {
                Math_SmoothStepToF(&arg0->unk_0EC, arg0->unk_004 * 360.0f, 0.1f, 2.5f, 0.0f);
            } else {
                Math_SmoothStepToF(&arg0->unk_0EC, arg0->unk_004 * 180.0f, 0.1f, 2.5f, 0.0f);
            }
            if ((180.0f - fabsf(arg0->unk_0EC)) <= 3.0f) {
                D_80161A88 = 1;
            }
            if (arg0->timer_1F8 == 0) {
                arg0->timer_1F8 = 0xC8;
                arg0->timer_1FC = 0x1F4;
                arg0->unk_1D0 = 2;
                arg0->unk_000 = (arg0->unk_004 = (arg0->unk_008 = (D_80178418 = 0.0f)));
                arg0->unk_0D0 = 0.0f;
                D_80177A48[6] = 0.0f;
            }
            break;

        case 2:
            arg0->pos.y += 5.0f;
            Matrix_RotateY(gCalcMatrix, ((arg0->unk_0E8 + 180.0f) + D_80178418) * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -(arg0->unk_0E4 * M_DTOR), 1);
            Matrix_RotateZ(gCalcMatrix, -((arg0->unk_0F8 + arg0->unk_0F0) * M_DTOR), 1);
            sp78.x = 0;
            sp78.y = 70.0f;
            sp78.z = -800.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
            Math_SmoothStepToF(&D_801779A0, arg0->pos.x, D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779B8, arg0->pos.y - D_80177A48[6], D_80177A48[0], 50000.0f, 0.0f);
            Math_SmoothStepToF(&D_801779C0, (arg0->unk_138 + D_80177D20) - D_80177A48[6], D_80177A48[0], 50000.0f,
                               0.0f);
            Math_SmoothStepToF(&D_80177A48[6], 130.0f, 0.1f, 0.25f, 0.0f);
            arg0->unk_000 += 0.002f;
            if (arg0->unk_000 > 0.3f) {
                arg0->unk_000 = 0.3f;
            }
            D_80177978 += ((arg0->pos.x + sp6C.x) - D_80177978) * arg0->unk_000;
            D_80177980 += ((arg0->pos.y + sp6C.y) - D_80177980) * arg0->unk_000;
            D_80177988 += (((arg0->unk_138 + D_80177D20) + sp6C.z) - D_80177988) * arg0->unk_000;
            D_80178430 += 0.2f;
            D_8017842C += 0.2f;
            D_80178418 += arg0->unk_008;
            Math_SmoothStepToAngle(&arg0->unk_0EC, 0.0f, 0.1f, 2.0f, 0.0f);
            if (arg0->timer_1F8 == 0) {
                arg0->unk_008 += 0.01f;
                if (arg0->unk_008 > 0.63f) {
                    arg0->unk_008 = 0.63f;
                }
            } else {
                arg0->unk_008 -= 0.0005f;
                if (arg0->unk_008 < 0.0f) {
                    arg0->unk_008 = 0.0f;
                }
            }
            arg0->vel.y = 5.0f;
            if ((arg0->timer_1F8 == 0x32) && (gTeamShields[1] > 0)) {
                func_8004A840(0);
            }
            if ((arg0->timer_1F8 == 0x46) && (gTeamShields[2] > 0)) {
                func_8004A840(1);
            }
            if (arg0->timer_1F8 == 0x5A) {
                func_800A6148();
                if (gTeamShields[3] > 0) {
                    func_8004A840(2);
                }
                D_80161A88 = 0;
            }
            Matrix_RotateY(gCalcMatrix, (arg0->unk_0E8 + 180.0f) * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -(arg0->unk_0E4 * M_DTOR), 1);
            Matrix_RotateZ(gCalcMatrix, -((arg0->unk_0F8 + arg0->unk_0F0) * M_DTOR), 1);
            if ((D_80178418 > 70.0f) && (D_80178418 < 280.0f)) {
                func_8004AA84();
            }
            sp78.x = gObjects2F4[0].unk_114 * gObjects2F4[0].unk_120;
            sp78.y = gObjects2F4[0].unk_118 * gObjects2F4[0].unk_120;
            sp78.z = gObjects2F4[0].unk_11C * gObjects2F4[0].unk_120;
            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
            *D_80178450 = arg0->pos.x + sp6C.x;
            *D_80178460 = arg0->pos.y + sp6C.y;
            *D_80178470 = arg0->unk_138 + sp6C.z;
            sp78.x = gObjects2F4[1].unk_114 * gObjects2F4[1].unk_120;
            sp78.y = gObjects2F4[1].unk_118 * gObjects2F4[1].unk_120;
            sp78.z = gObjects2F4[1].unk_11C * gObjects2F4[1].unk_120;
            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
            D_80178454 = arg0->pos.x + sp6C.x;
            D_80178464 = arg0->pos.y + sp6C.y;
            D_80178474 = arg0->unk_138 + sp6C.z;
            sp78.x = gObjects2F4[2].unk_114 * gObjects2F4[2].unk_120;
            sp78.y = gObjects2F4[2].unk_118 * gObjects2F4[2].unk_120;
            sp78.z = gObjects2F4[2].unk_11C * gObjects2F4[2].unk_120;
            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
            D_80178458 = arg0->pos.x + sp6C.x;
            D_80178468 = arg0->pos.y + sp6C.y;
            D_80178478 = arg0->unk_138 + sp6C.z;
            switch (D_80177A80) {
                case 0x14A:
                    D_80177840 = 0x64;
                    break;

                case 0x19A:
                    func_800BA808(gMsg_ID_2335, 0);
                    break;

                case 0x226:
                    if ((gTeamShields[2] == (-1)) || (gTeamShields[2] == 0)) {
                        func_800BA808(gMsg_ID_20333, 0x5A);
                    } else {
                        func_800BA808(gMsg_ID_2300, 0x14);
                    }
                    break;

                case 0x2AA:
                    if ((gTeamShields[3] == (-1)) || (gTeamShields[3] == 0)) {
                        func_800BA808(gMsg_ID_20332, 0x5A);
                    } else {
                        func_800BA808(gMsg_ID_2310, 0x1E);
                    }
                    break;

                case 0x330:
                    if ((gTeamShields[1] == (-1)) || (gTeamShields[1] == 0)) {
                        func_800BA808(gMsg_ID_20331, 0x5A);
                    } else {
                        func_800BA808(gMsg_ID_2320, 0xA);
                    }
                    break;
            }

            break;

        case 3:
            D_80178430 += 0.2f;
            D_8017842C += 0.2f;
            if (arg0->timer_1F8 == 0) {
                arg0->unk_1D0 = 4;
                arg0->timer_1F8 = 0x1E;
                arg0->unk_000 = 0.0f;
                arg0->unk_194 = 5.0f;
                arg0->unk_190 = 5.0f;
            }
            break;

        case 4:
            D_80178430 += 0.2f;
            D_8017842C += 0.2f;
            arg0->unk_190 = 2.0f;
            arg0->unk_25C += 0.1f;
            if (arg0->unk_25C > 0.6f) {
                arg0->unk_25C = 0.6f;
            }
            arg0->unk_000 += 1.0f;
            arg0->unk_0D0 = arg0->unk_000 * arg0->unk_000;
            if (arg0->timer_1F8 == 0) {
                D_80177A48[7] = arg0->vel.x;
                D_80177A48[8] = arg0->vel.y;
                D_80177A48[9] = arg0->vel.z;
                arg0->unk_1D0 = 5;
                arg0->unk_0D0 = 0.0f;
                arg0->timer_1F8 = 0xA;
                func_80078E50(arg0->pos.x, arg0->pos.y, arg0->unk_138, 30.0f);
            }
            D_801779A0 = arg0->pos.x;
            D_801779B8 = arg0->pos.y - D_80177A48[6];
            D_801779C0 = (arg0->unk_138 + D_80177D20) - D_80177A48[6];
            break;

        case 5:
            D_801779A0 += D_80177A48[7];
            D_801779B8 += D_80177A48[8];
            D_801779C0 += D_80177A48[9];
            arg0->unk_234 = 0;
            if (arg0->timer_1F8 == 0) {
                arg0->state_1C8 = PLAYERSTATE_1C8_6;
                arg0->timer_1F8 = 0;
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
            arg0->unk_1D0 = 3;
            arg0->timer_1F8 = 0xA;
            func_800A6028(&arg0->unk_460, 0x09000002U);
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            break;
    }

    Matrix_RotateY(gCalcMatrix, ((arg0->unk_114 + arg0->unk_0E8) + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((arg0->unk_120 + arg0->unk_0E4) * M_DTOR), 1);
    sp60.x = 0.0f;
    sp60.y = 0.0f;
    sp60.z = arg0->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
    arg0->vel.x = sp54.x;
    arg0->vel.z = sp54.z;
    arg0->vel.y = sp54.y;
    arg0->pos.x += arg0->vel.x;
    arg0->pos.y += arg0->vel.y;
    arg0->pos.z += arg0->vel.z;
    arg0->unk_0F8 = arg0->unk_0EC;
    arg0->unk_138 = arg0->pos.z;

    Math_SmoothStepToF(&arg0->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&arg0->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.f);
    Math_SmoothStepToF(&arg0->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.f);
    Math_SmoothStepToF(&arg0->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.f);
    arg0->unk_088 += 10.0f;
    arg0->unk_080 = (-__sinf(arg0->unk_088 * M_DTOR)) * 0.3f;
    arg0->unk_0F4 += 8.0f;
    arg0->unk_0F0 = __sinf(arg0->unk_0F4 * M_DTOR);
}

void func_8004C90C(s32 arg0) {
    func_80187520(0x5A, arg0);
}

void func_8004C930(Player* arg0) {
    s32 sp24;
    s32 sp20;
    s32 btn;

    D_80177A80 += 1;
    switch (arg0->form) {
        case FORM_ARWING:
            if ((gCurrentLevel == LEVEL_VENOM_ANDROSS) || ((gCurrentLevel == LEVEL_VENOM_2) && (D_8017827C == 1))) {
                func_80193C4C(arg0);
            } else if (gCurrentLevel == LEVEL_SECTOR_X) {
                if (D_8017827C == 0) {
                    func_80194728(arg0);
                } else {
                    func_80048E40(arg0);
                }
            } else if (gCurrentLevel == LEVEL_AREA_6) {
                func_DF4260_8018ED78((Object_408*) arg0);
            } else if (gCurrentLevel == LEVEL_FORTUNA) {
                func_8004C90C(arg0);
                func_800AA800(arg0);
            } else if (gCurrentLevel == LEVEL_BOLSE) {
                func_8018F94C(arg0);
                func_800AA800(arg0);
            } else if (gCurrentLevel == LEVEL_SECTOR_Z) {
                func_8019C85C(arg0);
            } else if (gCurrentLevel == LEVEL_KATINA) {
                func_80197290(arg0);
                func_800AA800(arg0);
            } else if (gCurrentLevel == LEVEL_SECTOR_Y) {
                func_8019EE60(arg0);
                func_800AA800(arg0);
            } else if (gCurrentLevel == LEVEL_SOLAR) {
                func_801A7930(arg0);
                func_800AA800(arg0);
            } else if (gCurrentLevel == LEVEL_ZONESS) {
                func_8019D76C(arg0);
                func_800AA800(arg0);
            } else if (gCurrentLevel == LEVEL_VENOM_2) {
                func_80196D88(arg0);
                func_800AA800(arg0);
            } else if (gCurrentLevel == LEVEL_METEO) {
                if (D_8017827C == 0) {
                    func_8018E084(arg0);
                } else {
                    func_80048E40(arg0);
                }
            } else if ((gCurrentLevel == LEVEL_CORNERIA) && (gLevelMode == 1)) {
                func_80191160(arg0);
                func_800AA800(arg0);
            } else {
                if (D_80177A80 == 0xAA) {
                    func_8001D444(0, 0x26U, 0, 0xFFU);
                }
                func_8004B368(arg0);
                func_800AA800(arg0);
            }
            func_800B2130(arg0);
            return;
        case FORM_LANDMASTER:
            sp20 = gInputPress->button;
            sp24 = gInputHold->button;
            gInputPress->button = 0;
            btn = gInputPress->button;
            gInputHold->button = gInputPress->button;
            gInputPress->stick_y = btn;
            gInputPress->stick_x = btn;
            if (gCurrentLevel == 0xC) {
                func_801882CC(arg0, &gInputPress, &gInputHold);
            } else if (D_80177930 != 0) {
                func_801AF8F4(arg0, &gInputPress, &gInputHold);
            } else {
                func_801B3D04(arg0, &gInputPress, &gInputHold);
            }
            func_80046358(arg0);
            gInputPress->button = sp20;
            gInputHold->button = sp24;
            return;
        case FORM_BLUE_MARINE:
            if (gCurrentLevel == 0xD) {
                func_80095604(arg0);
            }
            return;
    }
}

void func_8004CCC0(Player* arg0) {
    Vec3f sp58;
    PosRot sp50;

    Math_SmoothStepToF(&arg0->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0EC, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0E8, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camEye.y, arg0->pos.y - 20.0f, 0.2f, 100.0f, 0.0f);
    sp50.rot.z = arg0->unk_0D0;
    sp58.x = Math_RadToDeg(Math_Atan2F(arg0->pos.x, arg0->unk_138));
    arg0->unk_2B4 = 1;
    arg0->unk_2BC += 1.0f;
    if (arg0->unk_2BC > 90.0f) {
        arg0->unk_2BC = 90.0f;
    }
    switch (arg0->unk_1D0) {
        case 0:
            if (arg0->unk_19C != 0) {
                arg0->timer_1F8 = 0xA;
            } else {
                arg0->timer_1F8 = 0x1E;
            }
            arg0->unk_1D0 = 1;
            if (arg0->unk_4D8 > 180.0f) {
                arg0->unk_4D8 -= 360.0f;
            }
        case 1:
            if (arg0->timer_1F8 == 0) {
                arg0->unk_1D0 = 2;
                if (arg0->unk_19C != 0) {
                    arg0->timer_1F8 = 0x3C;
                } else {
                    arg0->timer_1F8 = 0x50;
                }
            }
            arg0->camEye.x += arg0->vel.x * 0.2f;
            arg0->camEye.z += arg0->vel.z * 0.2f;
            Math_SmoothStepToF(&arg0->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
            break;
        case 2:
            if (arg0->unk_4D8 > 140.0f) {
                sp58.y = 0.0f;
            } else {
                sp58.y = 60.0f;
            }
            Math_SmoothStepToF(&arg0->wings.unk_04, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&arg0->wings.unk_08, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&arg0->wings.unk_0C, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&arg0->wings.unk_10, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_4D8, 190.0f, 0.1f, 6.0f, 0.001f);
            if (arg0->unk_4D8 > 180.0f) {
                arg0->unk_114 += 180.0f;
                if (arg0->unk_114 >= 360.0f) {
                    arg0->unk_114 -= 360.0f;
                }
                arg0->unk_4D8 = 360.0f - (arg0->unk_4D8 - 180.0f);
                if ((sp58.x - arg0->unk_114) < 180.0f) {
                    arg0->unk_12C = 180.0f;
                } else {
                    arg0->unk_12C = -180.0f;
                }
                arg0->unk_1D0 = 3;
                func_800A5FA0(&arg0->unk_460, 0x09000002U, arg0->num);
                arg0->unk_194 = 7.0f;
                arg0->unk_190 = 7.0f;
            }
            arg0->unk_004 -= 0.2f;
            break;
        case 3:
            Math_SmoothStepToF(&arg0->unk_12C, 0.0f, 0.05f, 5.0f, 0.0f);
            sp58.y = arg0->unk_12C * 0.3f;
            Math_SmoothStepToF(&arg0->wings.unk_04, sp58.y, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&arg0->wings.unk_08, sp58.y, 0.3f, 100.0f, 0.0f);
            sp58.z = -sp58.y;
            Math_SmoothStepToF(&arg0->wings.unk_0C, sp58.z, 0.3f, 100.0f, 0.0f);
            Math_SmoothStepToF(&arg0->wings.unk_10, sp58.z, 0.3f, 100.0f, 0.0f);
            arg0->unk_190 = 2.0f;
            arg0->camEye.x += arg0->vel.x * 0.1f;
            arg0->camEye.z += arg0->vel.z * 0.1f;
            if (arg0->unk_19C != 0) {
                arg0->camEye.x += arg0->vel.z * 0.2f;
                arg0->camEye.z += arg0->vel.x * 0.2f;
            }
            if (arg0->unk_19C == 0) {
                Math_SmoothStepToAngle(&arg0->unk_114, sp58.x, 0.1f, 2.0f, 0.0f);
            }
            if (arg0->pos.y < arg0->unk_0A0) {
                if (arg0->unk_004 < 0.0f) {
                    arg0->unk_004 += 0.2f;
                }
            } else {
                arg0->unk_004 -= 0.2f;
            }
            if (arg0->timer_1F8 == 0) {
                arg0->state_1C8 = PLAYERSTATE_1C8_3;
                arg0->unk_014 = 0.0f;
                arg0->unk_018 = 0.0f;
            }
            break;
    }
    arg0->pos.y += arg0->unk_004;
    arg0->camAt.y += arg0->unk_004;
    arg0->unk_0F8 = arg0->unk_0EC + arg0->unk_12C + arg0->unk_130;
    Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_4D8) * M_DTOR), 1);
    sp50.rot.x = 0.0f;
    sp50.rot.y = 0.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp50.rot, &sp50.pos);
    arg0->vel.x = sp50.pos.x;
    arg0->vel.z = sp50.pos.z;
    arg0->vel.y = sp50.pos.y;
    arg0->pos.x += arg0->vel.x;
    arg0->pos.y += arg0->vel.y;
    if (arg0->pos.y < arg0->unk_0A4) {
        arg0->pos.y = arg0->unk_0A4;
        arg0->vel.y = 0.0f;
    }
    arg0->pos.z += arg0->vel.z;
    arg0->unk_138 = arg0->pos.z;
    func_800B2574(arg0);
    func_800B2130(arg0);
    func_800AD7F0(arg0);
    func_800AA800(arg0);
    func_800A46A0(arg0);
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

void func_8004D440(Player* arg0) {
    s32 teamId;

    func_8001CA24(arg0->num);
    func_8001A55C(&arg0->unk_460, 0x0900C010U);
    func_800A5FA0(&arg0->unk_460, 0x0903F004U, arg0->num);
    arg0->state_1C8 = PLAYERSTATE_1C8_6;
    arg0->timer_1F8 = 0x46;
    arg0->timer_224 = 0x14;
    D_8017837C = 7;

    if (arg0->unk_1D4 != 0) {
        arg0->unk_284 = 0;
    }

    if (!gVersusMode) {
        if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
            func_800BA808(gMsg_ID_20318, 0);
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
        if (arg0->unk_288 > 0) {
            D_80177DD0[arg0->unk_288 - 1][D_80177DB8[arg0->unk_288 - 1]] = arg0->num;
            D_80177DB8[arg0->unk_288 - 1] += 1;
            if (D_801778A4 == D_80177DB8[arg0->unk_288 - 1]) {
                arg0->unk_288 = -1;
                if (arg0->unk_284 == 0) {
                    func_8007C688(arg0->pos.x, arg0->pos.y, arg0->unk_138, 3.0f, 0x3E8);
                }
            }
        }
        if (gBombCount[gPlayerNum] != 0) {
            gBombCount[gPlayerNum] = 0;
            func_8004D3D4(arg0, 0x147, &gItems[1]);
        }
        if (gLaserStrength[gPlayerNum] != 0) {
            gLaserStrength[gPlayerNum] = 0;
            func_8004D3D4(arg0, 0x142, &gItems[0]);
        }
    }
}

void func_8004D738(Player* arg0) {
    arg0->pos.y += 30.0f;
    func_8007D0E0(arg0->pos.x, arg0->pos.y, arg0->unk_138, 6.0f);
    if (gCamCount == 1) {
        func_8007BFFC(arg0->pos.x, arg0->pos.y, arg0->unk_138, 0.0f, 0.0f, 0.0f, 3.0f, 0x50);
        func_8007C688(arg0->pos.x, arg0->pos.y, arg0->unk_138, 3.0f, 0x320);
    } else {
        func_8007BFFC(arg0->pos.x, arg0->pos.y, arg0->unk_138, 0.0f, 0.0f, 0.0f, 3.0f, 0xA);
    }
    func_8004D440(arg0);
}

void func_8004D828(Player* arg0) {
    s32 i;
    Vec3f src;
    Vec3f dest;

    Math_SmoothStepToF(&arg0->unk_0E4, 0.0f, 0.1f, 1.0f, 0.01f);
    arg0->pos.x += arg0->vel.x;
    arg0->pos.y += arg0->vel.y;
    if ((gCurrentLevel != 6 || D_80178284 == 0) && (gLevelType == 0 || gCurrentLevel == 0x11)) {
        arg0->vel.y -= 0.5f;
        arg0->unk_0E4 -= 2.0f;
    }
    arg0->pos.z += arg0->vel.z;
    arg0->unk_138 = arg0->pos.z;
    arg0->unk_0F8 = (arg0->unk_0EC + arg0->unk_12C) + arg0->unk_130;
    arg0->unk_12C += 15.0f;
    if (arg0->unk_1D0 != 0) {
        arg0->unk_0E8 += 11.0f;
        arg0->unk_0E4 += 17.0f;
    }
    if (gCamCount == 1) {
        if (!(gFrameCount & 1)) {
            func_8007D24C((Rand_ZeroOne() - 0.5f) * 20.0 + arg0->pos.x, (Rand_ZeroOne() - 0.5f) * 20.0 + arg0->pos.y,
                          arg0->unk_138, 2.2f);
        }
    } else if (!(gFrameCount & 3)) {
        func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->pos.x, (Rand_ZeroOne() - 0.5f) * 10.0f + arg0->pos.y,
                      ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_138, 2.2f);
    }
    if ((arg0->pos.y < arg0->unk_0A4) && (arg0->unk_1D0 == 0)) {
        arg0->pos.y = arg0->unk_0A4;
        arg0->unk_284 = 0;
        arg0->timer_220 = 0;
        arg0->vel.y = 10.0f;
        arg0->unk_1D0 = 1;
        func_800A6070(&arg0->unk_460, 0x29000000U);
        if ((gCurrentLevel == 0) || (gCurrentLevel == 0xE)) {
            func_80062C38(arg0->pos.x, arg0->pos.z);
        } else {
            func_8007D0E0(arg0->pos.x, arg0->pos.y, arg0->unk_138, 3.0f);
        }
        if (arg0->wings.rightState == 2) {
            func_800A69F8(1, arg0->hit1.x, arg0->hit1.y, arg0->hit1.z);
            arg0->wings.rightState = 1;
            func_8007D0E0(arg0->hit1.x, arg0->hit1.y, arg0->hit1.z, 2.0f);
        }
        if (arg0->wings.leftState == 2) {
            func_800A69F8(0, arg0->hit2.x, arg0->hit2.y, arg0->hit2.z);
            arg0->wings.leftState = 1;
            func_8007D0E0(arg0->hit2.x, arg0->hit2.y, arg0->hit2.z, 2.0f);
        }
    } else if ((((arg0->timer_220 > 0 || arg0->pos.y < arg0->unk_0A4) || arg0->pos.y < D_80177CC0) ||
                arg0->timer_1FC == 0) &&
               arg0->timer_1F8 == 0) {
        if (gCamCount != 4) {
            if (arg0->unk_284 == 0) {
                func_8007C688(arg0->pos.x, arg0->pos.y, arg0->unk_138 - (2.0f * arg0->vel.z), 3.0f, 0x50);
            }
            if (arg0->pos.y < arg0->unk_0A4) {
                func_80062C38(arg0->pos.x, arg0->pos.z);
            }
        }
        if (gLevelType == 0) {
            for (i = 0; i < 4; i++) {
                func_800A69F8(2, arg0->pos.x, arg0->pos.y, arg0->unk_138);
            }

            for (i = 0; i < 2; i++) {
                func_800A69F8(3, arg0->pos.x, arg0->pos.y, arg0->unk_138);
            }
        }
        func_8007D0E0(arg0->pos.x, arg0->pos.y, arg0->unk_138, 5.0f);
        func_8007BFFC(arg0->pos.x, arg0->pos.y, arg0->unk_138, arg0->vel.x, 0.0f, arg0->vel.z, 5.0f, 0x14);
        func_8004D440(arg0);
    }
    Math_SmoothStepToF(&arg0->unk_034, 0.0f, 0.05f, 5.0f, 0.00001f);
    Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + (arg0->unk_134 * 0.2f)) * M_DTOR, 0);
    Math_SmoothStepToF(&arg0->unk_000, 700.0f, 0.05f, 10.0f, 0.00001f);
    src.x = arg0->unk_004 * (arg0->unk_000 * 0.7f);
    src.y = arg0->unk_000 * 0.5f;
    src.z = arg0->unk_000 + (400.0f - arg0->unk_08C);
    Matrix_MultVec3f(gCalcMatrix, &src, &dest);
    arg0->camEye.x = arg0->pos.x + dest.x;
    arg0->camEye.z = arg0->pos.z + dest.z;
    arg0->camAt.x = arg0->pos.x;
    arg0->camAt.z = arg0->pos.z;
    if ((gLevelType == 0) || (gCurrentLevel == 0x11)) {
        arg0->camEye.y = (arg0->pos.y * arg0->unk_148) + dest.y;
        arg0->camEye.y -= arg0->unk_02C - 50.0f;
        arg0->camAt.y = ((arg0->pos.y * arg0->unk_14C) + 20.0f) + (arg0->unk_060 * 5.0f);
    } else {
        arg0->camEye.y = arg0->pos.y + dest.y;
        arg0->camAt.y = arg0->pos.y;
    }
    if (gVersusMode != 0) {
        func_800AE278(arg0);
    }
}

void func_8004DEF8(Player* arg0) {
    s32 pad[2];
    f32 sp34;
    s32 var_s0;

    if (arg0->unk_0E4 < 0.0f) {
        arg0->unk_0E4 += 1.0f;
    }
    if (arg0->unk_0E4 > 0.0f) {
        arg0->unk_0E4 -= 1.0f;
    }

    arg0->pos.x += arg0->vel.x;
    arg0->pos.y += arg0->vel.y;

    if (((gCurrentLevel != LEVEL_VENOM_ANDROSS) || (D_80178284 == 0)) && (gLevelType == 0)) {
        arg0->vel.y = arg0->vel.y - 0.5f;
    }

    arg0->pos.z += arg0->vel.z;
    arg0->unk_138 = arg0->pos.z + arg0->unk_08C;
    arg0->unk_0F8 = (arg0->unk_0EC + arg0->unk_12C) + arg0->unk_130;
    arg0->unk_12C = arg0->unk_12C + 15.0f;

    if (arg0->unk_1D0 != 0) {
        arg0->unk_0E8 += 14.0f;
        arg0->unk_0E4 += 26.0f;
    }

    if (!(gFrameCount & 1)) {
        sp34 = Rand_ZeroOne();
        func_8007D24C(((sp34 - 0.5f) * 20.0) + arg0->pos.x, ((Rand_ZeroOne() - 0.5f) * 20.0) + arg0->pos.y,
                      arg0->unk_138, 2.2f);
    }

    if ((arg0->pos.y < arg0->unk_0A4) && (arg0->unk_1D0 == 0)) {
        arg0->pos.y = arg0->unk_0A4;
        arg0->timer_220 = 0;
        arg0->vel.y = 10.0f;
        arg0->unk_1D0 = 1;
        func_800A6070(&arg0->unk_460, 0x29000000U);
        if (gCurrentLevel == LEVEL_CORNERIA) {
            func_80062C38(arg0->pos.x, arg0->pos.z);
        }
        if (arg0->wings.rightState == 2) {
            func_800A69F8(1, arg0->hit1.x, arg0->hit1.y, arg0->hit1.z);
            arg0->wings.rightState = 0;
            func_8007D0E0(arg0->hit1.x, arg0->hit1.y, arg0->hit1.z, 2.0f);
        }
        if (arg0->wings.leftState == 2) {
            func_800A69F8(0, arg0->hit2.x, arg0->hit2.y, arg0->hit2.z);
            arg0->wings.leftState = 0;
            func_8007D0E0(arg0->hit2.x, arg0->hit2.y, arg0->hit2.z, 2.0f);
        }
    } else if ((((arg0->timer_220 > 0) || (arg0->pos.y < arg0->unk_0A4)) || (arg0->timer_1FC == 0)) &&
               (arg0->timer_1F8 == 0)) {
        if (arg0->pos.y < arg0->unk_0A4) {
            func_8007C688(arg0->pos.x, D_80177940 + 20.0f, arg0->unk_138 - (2.0f * arg0->vel.z), 3.0f, 0x320);
            func_80062C38(arg0->pos.x, arg0->pos.z);
        }
        func_8007D0E0(arg0->pos.x, arg0->pos.y - (2.0f * arg0->vel.y), arg0->unk_138 - (2.0f * arg0->vel.z), 6.0f);
        func_8007BFFC(arg0->pos.x, arg0->pos.y - arg0->vel.y, arg0->unk_138 - (2.0f * arg0->vel.z), 0.0f, 0.0f, 0.0f,
                      3.0f, 0x14);
        if (gLevelType == 0) {
            for (var_s0 = 0; var_s0 < 2; var_s0++) {
                func_800A69F8(2, arg0->pos.x, arg0->pos.y, arg0->unk_138);
            }

            for (var_s0 = 0; var_s0 < 4; var_s0++) {
                func_800A69F8(4, arg0->pos.x, arg0->pos.y, arg0->unk_138);
            }
        }
        func_8004D440(arg0);
    }
    arg0->unk_034 -= 3.0f;
    if (arg0->unk_1D0 != 0) {
        arg0->unk_034 += 10.0f;
    }
    if ((D_80161A88 == 2) && (arg0->pos.y <= arg0->unk_0A4)) {
        func_8007D9DC(arg0->pos.x, D_80177940 + 2.0f, arg0->unk_138, 3.0f, 20.0f, 0);
        func_8007ADF4(arg0->pos.x, D_80177940, arg0->unk_138, 0.1f, 2.0f);
    }
}

void func_8004E3D8(Player* arg0) {
    arg0->unk_228 = 0;
    arg0->unk_280 = 0;

    if (gFrameCount & 1) {
        D_80137E84[gPlayerNum] = 1;
    }
    switch (arg0->form) {
        case FORM_ARWING:
            if (gLevelMode == 1) {
                func_8004D828(arg0);
            } else {
                func_8004DEF8(arg0);
                func_800ADF58(arg0);
            }
            func_800A8BA4(arg0);
            func_800AA800(arg0);
            return;
        case FORM_LANDMASTER:
            func_8004D738(arg0);
            return;
        case FORM_BLUE_MARINE:
            func_801AB9B0(arg0);
            return;
        case FORM_ON_FOOT:
            func_8004D738(arg0);
            return;
    }
}

void func_8004E4D4(Object_2F4* arg0) {
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Player* sp38 = gPlayer;
    f32 sp34;

    arg0->unk_130 += 3.0f;
    arg0->unk_0F4.z = __sinf(arg0->unk_130 * M_DTOR) * 1.5f;
    arg0->unk_134 += 2.0f;
    sp34 = __sinf(arg0->unk_134 * M_DTOR) * 10.0f;

    switch (arg0->unk_0B8) {
        case 0:
            Math_SmoothStepToF(&arg0->obj.rot.z, 0.0f, 0.05f, 1.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.x, arg0->unk_114 + sp38->pos.x, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.y, arg0->unk_118 + sp38->pos.y + sp34, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.z, arg0->unk_11C + sp38->unk_138, 0.03f, 10.0f, 0.0f);
            arg0->obj.rot.x = -sp38->unk_0E4;
            arg0->obj.rot.y = sp38->unk_0E8 + 180.0f;
            break;

        case 1:
            arg0->unk_0B8 = 2;
            arg0->timer_0BC = 0x32;
            arg0->unk_138 = 2.0f;
            Audio_PlaySfx(0x09000002U, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_188 = 5.0f;

        case 2:
            if (gLevelType == 0) {
                arg0->unk_168 += 0.4f;
                if (arg0->unk_168 > 0.6f) {
                    arg0->unk_168 = 0.6f;
                }
            }
            arg0->unk_07C = 2;
            arg0->unk_138 *= 1.2f;
            if (arg0->timer_0BC == 0) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            break;

        case 10:
            arg0->unk_0B8 = 0xB;
            arg0->timer_0BC = 0x96;
            arg0->timer_0BE = 0x28;
            Audio_PlaySfx(0x09000002U, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_188 = 5.0f;

        case 11:
            arg0->unk_07C = 2;
            arg0->unk_138 += 2.0f;
            if (arg0->unk_138 > 50.0f) {
                arg0->unk_138 = 50.0f;
            }
            if (arg0->timer_0BE == 0) {
                switch (arg0->index) {
                    case 1:
                        arg0->obj.rot.y += 0.3f;
                        Math_SmoothStepToF(&arg0->obj.rot.z, -70.0f, 0.05f, 4.0f, 0.0f);
                        break;
                    case 2:
                        arg0->obj.rot.y -= 0.3f;
                        Math_SmoothStepToF(&arg0->obj.rot.z, 70.0f, 0.05f, 4.0f, 0.0f);
                        break;
                    case 3:
                        arg0->obj.rot.x -= 0.4f;
                        Math_SmoothStepToF(&arg0->obj.rot.z, 1000.0f, 0.05f, 6.0f, 0.0f);
                        break;
                }
            }
            if (arg0->timer_0BC == 0) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            break;

        case 30:
            arg0->unk_120 += D_800CA098[arg0->index];
            Matrix_RotateY(gCalcMatrix, arg0->unk_120 * M_DTOR, 0);
            sp54.x = 0.0f;
            sp54.y = D_800CA0A4[arg0->index];
            sp54.z = D_800CA0B0[arg0->index];
            Matrix_MultVec3f(gCalcMatrix, &sp54, &sp3C);
            arg0->unk_114 = sp3C.x;
            arg0->unk_118 = sp3C.y;
            arg0->unk_11C = sp3C.z - 100.0f;
            Math_SmoothStepToF(&arg0->obj.rot.z, __sinf(arg0->unk_120 * M_DTOR) * -30.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.x, arg0->unk_114 + sp38->pos.x, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.y, arg0->unk_118 + sp38->pos.y + sp34, 0.03f, 10.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.z, arg0->unk_11C + sp38->unk_138, 0.03f, 10.0f, 0.0f);
            break;

        case 31:
            Audio_PlaySfx(0x09000002U, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_0B8 += 1;
            arg0->unk_188 = 5.0f;

        case 32:
            arg0->unk_07C = 2;
            Math_SmoothStepToF(&arg0->obj.rot.x, -20.0f, 0.1f, 0.5f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_138, 25.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.rot.z, 0.0f, 0.1f, 0.5f, 0.0f);
            break;
    }
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1);
    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = arg0->unk_138;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    arg0->unk_0E8.x = sp48.x;
    arg0->unk_0E8.y = sp48.y;
    arg0->unk_0E8.z = sp48.z;
}

void func_8004EBD0(Object_2F4* arg0) {
    Vec3f src;
    Vec3f dest;

    if (arg0->unk_0B8 < 4) {
        arg0->unk_138 = 0.4f;

        arg0->obj.pos.x += (D_80178450[arg0->index] - arg0->obj.pos.x) * 0.4f;
        arg0->obj.pos.y += (D_80178460[arg0->index] - arg0->obj.pos.y) * 0.4f;
        arg0->obj.pos.z += (D_80178470[arg0->index] - arg0->obj.pos.z) * 0.4f;

        arg0->obj.rot.z *= 0.98f;
        arg0->obj.rot.x = -gPlayer->unk_0E4;
        arg0->obj.rot.y = gPlayer->unk_0E8 + 180.0f;

        if (1) {}

        arg0->unk_130 += 1.0f;
        if ((s32) arg0->unk_130 & 0x40) {
            arg0->unk_114 += 0.1f;
        } else {
            arg0->unk_114 -= 0.1f;
        }

        arg0->unk_134 += 1.2f;
        if ((s32) arg0->unk_134 & 0x40) {
            arg0->unk_118 += 0.1f;
        } else {
            arg0->unk_118 -= 0.1f;
        }
    }

    switch (arg0->unk_0B8) {
        case 0:
            arg0->unk_120 *= 0.992f;
            if (arg0->unk_120 < 1.2f) {
                arg0->unk_0B8 += 1;
            }
            break;
        case 1:
            arg0->unk_120 *= 0.997f;
            if (arg0->unk_120 < 1.0f) {
                arg0->unk_120 = 1.0f;
                arg0->unk_0B8 += 1;
            }
            arg0->timer_0BC = 0x230;
            break;
        case 2:
            if (arg0->timer_0BC == 0x6E) {
                gPlayer->timer_1F8 = 0x2710;
            }
            if (arg0->timer_0BC == 0x104) {
                gPlayer->timer_1FC = 0x2710;
            }
            if (arg0->timer_0BC == 0) {
                arg0->unk_0B8++;
                arg0->timer_0BC = 0xA;
                func_800A6028(&arg0->sfxPos, 0x09000002);
                arg0->unk_188 = 5.0f;
            }
            break;
        case 3:
            arg0->unk_07C = 2;
            if (arg0->timer_0BC == 0) {
                arg0->unk_0B8++;
                arg0->timer_0BC = 0x1E;
            }
            break;
        case 4:
            arg0->unk_168 += 0.4f;
            if (arg0->unk_168 > 0.6f) {
                arg0->unk_168 = 0.6f;
            }
            arg0->unk_124.z += 1.0f;
            Matrix_RotateY(gCalcMatrix, (gPlayer->unk_0E8 + 180.0f) * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -(gPlayer->unk_0E4 * M_DTOR), 1);
            Matrix_RotateZ(gCalcMatrix, -((gPlayer->unk_0F0 + gPlayer->unk_0F8) * M_DTOR), 1);
            src.x = 0.0f;
            src.y = 0.0f;
            src.z = arg0->unk_124.z * arg0->unk_124.z;
            Matrix_MultVec3f(gCalcMatrix, &src, &dest);
            arg0->unk_0E8.x = dest.x;
            arg0->unk_0E8.y = dest.y;
            arg0->unk_0E8.z = dest.z;
            if (arg0->timer_0BC == 0) {
                func_80078E50(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 30.0f);
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            break;
    }
    arg0->obj.pos.y += 5.0f;
    arg0->unk_168 -= 0.02f;
    if (arg0->unk_168 < 0.0f) {
        arg0->unk_168 = 0.0f;
    }
}

void func_8004F05C(Object_2F4* arg0) {
    if (((gLevelType == 0) && (arg0->unk_0B6 == 0)) || (gCurrentLevel == LEVEL_BOLSE)) {
        arg0->unk_114 += 3.0f;
        arg0->unk_118 = __sinf(arg0->unk_114 * M_DTOR) * 1.5f;
    }

    switch (gCurrentLevel) {
        case LEVEL_BOLSE:
            switch (arg0->unk_0B6) {
                case 0:
                    if (gPlayer->state_1C8 == PLAYERSTATE_1C8_2) {
                        arg0->unk_0F4.z += arg0->unk_0F4.y;
                        arg0->unk_0E8.x = __sinf(arg0->unk_0F4.z * M_DTOR) * 10.0f;
                        arg0->obj.rot.z = __sinf(arg0->unk_0F4.z * M_DTOR) * 40.0f;
                        break;
                    }
                    Math_SmoothStepToF(&arg0->obj.rot.z, arg0->unk_118, 0.05f, 0.3f, 0.0f);
                    switch (arg0->unk_0B8) {
                        case 0:
                            break;

                        case 1:
                            arg0->unk_0B8 = 2;
                            arg0->timer_0BC = 0x64;
                            Audio_PlaySfx(0x09000002U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            arg0->unk_188 = 5.0f;

                        case 2:
                            arg0->unk_07C = 2;
                            arg0->unk_0E8.z -= 5.0f;
                            if (arg0->timer_0BC == 0) {
                                Object_Kill(&arg0->obj, &arg0->sfxPos);
                            }
                            break;
                    }
                    break;
                case 31:
                    if (arg0->timer_0BC == 0) {
                        Object_Kill(&arg0->obj, &arg0->sfxPos);
                    }
                    break;

                case 32:
                    arg0->obj.rot.z += arg0->unk_0F4.z;
                    if (arg0->timer_0BC == 0) {
                        Object_Kill(&arg0->obj, &arg0->sfxPos);
                    }
                    break;

                case 30:
                    break;
            }
            break;
        case LEVEL_AREA_6:
            func_8018DA58(arg0);
            break;

        case LEVEL_SECTOR_Y:
            switch (arg0->unk_0B6) {
                case 0:
                    func_8019FF00(arg0);
                    break;

                case 42:
                    if (arg0->timer_0BC == 0) {
                        if (arg0->obj.pos.x >= -3500.0f) {
                            if (arg0->obj.pos.z <= 3000.0f) {
                                if ((fabsf(arg0->obj.pos.y) <= 400.0f) && (D_80177A80 < 0x12D)) {
                                    func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 8.0f);
                                }
                            }
                        }
                        Object_Kill(&arg0->obj, &arg0->sfxPos);
                    }
                    break;

                case 43:
                    if (arg0->timer_0BC == 0) {
                        Object_Kill(&arg0->obj, &arg0->sfxPos);
                    }
                    break;
            }
            break;
        case LEVEL_SECTOR_X:
            if ((arg0->unk_0B8 != 0) && (arg0->unk_0B8 == 1)) {
                arg0->unk_0E8.y += 0.1f;
                Math_SmoothStepToF(&arg0->obj.rot.x, -20.0f, 0.1f, 0.5f, 0.0f);
            }
            break;
        case LEVEL_SECTOR_Z:
        case LEVEL_KATINA:
            break;
        default:
            switch (arg0->unk_0B8) {
                case 0x64:
                    Math_SmoothStepToF(&arg0->obj.pos.x, arg0->unk_18C[0x14].x, 0.03f, 3.0f, 0.0f);
                    Math_SmoothStepToF(&arg0->obj.pos.y, arg0->unk_18C[0x14].y, 0.03f, 2.0f, 0.0f);
                    Math_SmoothStepToF(&arg0->obj.pos.z, arg0->unk_18C[0x14].z, 0.03f, 2.0f, 0.0f);
                    Math_SmoothStepToF(&arg0->obj.rot.z, 0.0f, 0.02f, 0.3f, 0);
                    break;

                case 0x0:
                    arg0->obj.rot.z = arg0->unk_0F4.z;
                    if (arg0->unk_0B6 == 0xA) {
                        arg0->obj.pos.z = gPlayer->camEye.z + 12000.0f;
                    }
                    break;

                case 0x1:
                    arg0->unk_0E8.y += 0.8f;
                    arg0->unk_0E8.x += 0.8f;
                    Math_SmoothStepToF(&arg0->obj.rot.z, 420.0f, 0.1f, 15.0f, 0.001f);
                    break;

                case 0x2:
                    arg0->unk_0E8.y += 0.8f;
                    arg0->unk_0E8.x -= 0.8f;
                    Math_SmoothStepToF(&arg0->obj.rot.z, -420.0f, 0.1f, 15.0f, 0.001f);
                    break;

                case 0x3:
                    arg0->unk_0E8.y += 1.2f;
                    arg0->unk_0E8.z += 0.1f;
                    Math_SmoothStepToF(&arg0->obj.rot.x, -45.0f, 0.1f, 15.0f, 0.001f);
                    break;

                case 0xA:
                    arg0->unk_0E8.x -= 1.0f;
                    Math_SmoothStepToF(&arg0->obj.rot.z, -45.0f, 0.05f, 0.5f, 0.0f);
                    break;

                case 0xB:
                    arg0->unk_0E8.x -= 2.0f;
                    Math_SmoothStepToF(&arg0->obj.rot.z, -70.0f, 0.1f, 6.0f, 0.0f);
                    Math_SmoothStepToF(&arg0->obj.rot.y, 225.0f, 0.05f, 2.0f, 0.0f);
                    break;

                case 0xC:
                    arg0->unk_0E8.x += 2.0f;
                    arg0->unk_0E8.y += 1.0f;
                    Math_SmoothStepToF(&arg0->obj.rot.z, 80.0f, 0.1f, 6.0f, 0.0f);
                    Math_SmoothStepToF(&arg0->obj.rot.x, -15.0f, 0.05f, 4.0f, 0.0f);
                    Math_SmoothStepToF(&arg0->obj.rot.y, 135.0f, 0.05f, 2.0f, 0.0f);
                    break;

                case 0xD:
                    arg0->unk_0E8.y += 2.0f;
                    Math_SmoothStepToF(&arg0->obj.rot.z, -400.0f, 0.2f, 14.0f, 0.0f);
                    Math_SmoothStepToF(&arg0->obj.rot.x, -45.0f, 0.05f, 4.0f, 0.0f);
                    break;
            }
            break;
    }
}

void func_8004F798(Object_2F4* arg0) {
    arg0->unk_07C = 2;

    switch (arg0->unk_0B8) {
        case 0:
            Math_SmoothStepToF(&arg0->obj.pos.x, arg0->unk_114, 0.05f, 50.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.y, arg0->unk_118, 0.05f, 50.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.rot.z, 0.0f, 0.05f, 1.0f, 0.0f);
            arg0->obj.pos.z -= 2.0f;
            break;

        case 1:
            arg0->unk_188 = 10.0f;
            arg0->unk_0E8.z -= 100.0f;
            if ((arg0->obj.pos.z + D_80177D20) < -15000.0f) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            break;
    }
}

void func_8004F8AC(Object_2F4* arg0) {

    if (gCurrentLevel == LEVEL_AQUAS) {
        func_80093164(arg0);
        return;
    }

    switch (gPlayer->state_1C8) {
        case PLAYERSTATE_1C8_7:
            switch (gCurrentLevel) {
                case LEVEL_SECTOR_Y:
                    if (gPlayer->unk_1D0 >= 3) {
                        func_8019FF00(arg0);
                    }
                    break;
                case LEVEL_SOLAR:
                    if (gPlayer->unk_1D0 >= 3) {
                        func_801A8BE8(arg0);
                    }
                    break;
                case LEVEL_ZONESS:
                    if (gPlayer->unk_1D0 >= 3) {
                        func_8019E5F0(arg0);
                    }
                    break;
                case LEVEL_VENOM_ANDROSS:
                case LEVEL_VENOM_2:
                    func_80195E44(arg0);
                    break;
                case LEVEL_KATINA:
                    func_80197F10(arg0);
                    break;
                case LEVEL_SECTOR_Z:
                    func_8019DD20(arg0);
                    break;
                case LEVEL_AREA_6:
                    func_8018DA58(arg0);
                    break;
                case LEVEL_METEO:
                    if (D_8017827C == 0) {
                        func_8018ED9C(arg0);
                        break;
                    }
                    func_80049630(arg0);
                    break;
                case LEVEL_FORTUNA:
                    if (arg0->unk_0B6 == 0xB) {
                        switch (arg0->unk_0B8) {
                            case 0:
                                if (D_80177A80 == 0x64) {
                                    arg0->unk_0B8 = 1;
                                    arg0->timer_0BC = 0x32;
                                    arg0->unk_050 = 0xFF;
                                    Audio_PlaySfx(0x2902F026U, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                }
                                break;
                            case 1:
                                Math_SmoothStepToF(&arg0->scale, 0.5f, 0.03f, 0.01f, 0.0f);
                                D_80178348 = D_80178340 = D_80178350 = D_80178354 = 0;
                                if ((arg0->timer_0BC == 0x2B) || (arg0->timer_0BC == 0x2E) ||
                                    (arg0->timer_0BC == 0x31)) {
                                    D_80178340 = 0xC0;
                                    D_80178348 = D_80178350 = D_80178354 = 0xFF;
                                }
                                arg0->unk_050 -= 2;
                                if (arg0->unk_050 < 0) {
                                    arg0->unk_050 = 0;
                                    arg0->scale = 0.0f;
                                }
                                D_8017836C = arg0->unk_050 / 255.0f;
                                D_80178370 = gObjects2F4->obj.pos.x + 10.0f;
                                D_80178374 = gObjects2F4->obj.pos.y - 40.0f;
                                D_80178378 = gObjects2F4->obj.pos.z - 70.0f;
                                D_80178360 = 0xFF;
                                D_80178364 = 0xFF;
                                D_80178368 = 0x50;
                                break;
                        }
                    }
                    break;
                case LEVEL_CORNERIA:
                    if (gLevelMode == 1) {
                        func_8004E4D4(arg0);
                        break;
                    }
                    func_8004EBD0(arg0);
                    break;
                case LEVEL_SECTOR_X:
                    if (D_8017827C != 0) {
                        func_80049630(arg0);
                        break;
                    }
                    func_8004E4D4(arg0);
                    break;
                case LEVEL_TITANIA:
                    func_8004E4D4(arg0);
                    break;
                case LEVEL_MACBETH:
                    func_801B28BC(arg0);
                    break;
                case LEVEL_BOLSE:
                    func_8004F05C(arg0);
                    break;
                default:
                    func_8004EBD0(arg0);
                    break;
            }
            break;
        case PLAYERSTATE_1C8_2:
            func_8004F05C(arg0);
            break;
        case PLAYERSTATE_1C8_8:
            func_8004F798(arg0);
            break;
        case PLAYERSTATE_1C8_0:
            if (gCurrentLevel == LEVEL_SECTOR_Y) {
                func_8019FF00(arg0);
            }
            break;
    }
}

void func_8004FCB8(Object_2F4* arg0, s32 arg1) {
    f32 angle;
    f32 scale;
    s32 i;

    if (arg0->timer_0BC == 0) {
        arg0->timer_0BC = 32;
        arg0->unk_124.y = 0.3f;
    }

    if (arg0->unk_124.y > 0.0f) {
        scale = arg0->unk_124.y;
        arg0->unk_124.y -= 0.05f;
        RCP_SetupDL_49();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        gDPSetEnvColor(gMasterDisp++, 16, 16, 240, 255);
        angle = Math_Atan2F(gPlayer->camEye.x - gPlayer->camAt.x, gPlayer->camEye.z - gPlayer->camAt.z);

        for (i = arg1; i < (arg1 + 4); i++) {
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, D_800CA110[i].x + arg0->obj.pos.x, D_800CA110[i].y + arg0->obj.pos.y,
                             D_800CA110[i].z + arg0->obj.pos.z, 1);
            Matrix_RotateY(gGfxMatrix, angle, 1);
            Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
        }
    }
}

void func_8004FEC0(Object_2F4* arg0) {
    static f32 D_800CA210 = 0;
    static f32 D_800CA214 = 0;
    static f32 D_800CA218 = 0;
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

    switch (arg0->unk_0B6) {
        case 1000:
            RCP_SetupDL(&gMasterDisp, 0x2D);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_046);
            gSPDisplayList(gMasterDisp++, D_40018A0);

            if (arg0->unk_046 >= 0x33) {
                func_8005ADAC(arg0);
            }
            break;

        case 0:
            func_8005B388(arg0);
            break;

        case 1:
            if (gCurrentLevel == LEVEL_SECTOR_Z) {
                gSPFogPosition(gMasterDisp++, gFogNear, 1005);
            }
            arg0->info.bonus = 1;
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
            Matrix_Scale(gGfxMatrix, arg0->scale, arg0->scale, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);

            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_050);
            gDPSetEnvColor(gMasterDisp++, 255, 255, 00, arg0->unk_050);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;

        case 20:
            gSPDisplayList(gMasterDisp++, D_400AAE0);
            break;

        case 24:
            gSPDisplayList(gMasterDisp++, D_D009A40);
            func_8005ADAC(arg0);
            break;

        case 25:
            if (arg0->index & 1) {
                gSPDisplayList(gMasterDisp++, D_6001DA0);
                break;
            } else {
                gSPDisplayList(gMasterDisp++, D_6001360);
                break;
            }

        case 26:
            gSPDisplayList(gMasterDisp++, D_6004FE0);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
            func_8005B1E8(arg0, 2);
            break;

        case 28:
            gSPDisplayList(gMasterDisp++, D_400AAE0);
            Matrix_Translate(gGfxMatrix, 0.f, 0.f, -60.0f, 1);
            func_8005B1E8(arg0, 2);
            break;

        case 30:
            func_8005F670(&arg0->obj.pos);

            if (arg0->unk_046 != 0) {
                RCP_SetupDL(&gMasterDisp, 0x37);
                gSPClearGeometryMode(gMasterDisp++, 0x00002000);
                Rand_SetSeed(1, 29000, 9876);

                for (sp2D0 = 0; sp2D0 < 30; sp2D0++) {
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, ((Rand_ZeroOneSeeded() - 0.5f) * 3000.0f) * (*arg0).unk_164,
                                     ((Rand_ZeroOneSeeded() - 0.5f) * 3000.0f) * (*arg0).unk_164,
                                     ((Rand_ZeroOneSeeded() - 0.5f) * 3000.0f) * (*arg0).unk_164, 1);
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

            if (gPlayer->state_1C8 == PLAYERSTATE_1C8_2) {
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

            gDPSetPrimColor(gMasterDisp++, 0, 0, (s32) D_800CA210, (s32) D_800CA214, (s32) D_800CA218, 0x80);

            if (gPlayer->state_1C8 == PLAYERSTATE_1C8_2) {
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

            if (gPlayer->state_1C8 == PLAYERSTATE_1C8_7) {
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
            if ((arg0->index == 3) && (gPlayer->state_1C8 == PLAYERSTATE_1C8_7)) {
                gSPDisplayList(gMasterDisp++, D_D00B880);
            } else {
                gSPDisplayList(gMasterDisp++, D_600E050);
            }
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
            func_8005B1E8(arg0, 0);
            break;

        case 34:
            gSPDisplayList(gMasterDisp++, D_6001530);
            break;

        case 35:
            Matrix_Scale(gGfxMatrix, 0.125f, 0.125f, 0.125f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);

        case 39:
            gSPDisplayList(gMasterDisp++, D_60097E0);
            func_8004FCB8(arg0, 4);
            break;

        case 36:
            Matrix_Scale(gGfxMatrix, arg0->scale, arg0->scale, arg0->scale, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_601D730);
            func_8004FCB8(arg0, 0);
            break;

        case 37:
            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0, 0, (*arg0).unk_050, (*arg0).unk_054, (*arg0).unk_058, (*arg0).unk_05C);
            gDPSetEnvColor(gMasterDisp++, (*arg0).unk_060, (*arg0).unk_064, (*arg0).unk_068, (*arg0).unk_06C);
            Matrix_Scale(gGfxMatrix, arg0->scale, arg0->unk_124.x, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;

        case 38:
            animFrameData = Animation_GetFrameData(D_800CA1F4[arg0->unk_060], arg0->unk_064, sp144);
            Math_SmoothStepToVec3fArray(sp144, arg0->unk_18C, 1, animFrameData, arg0->unk_11C, 100.0f, .0f);
            RCP_SetupDL_30(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 0x96, 0xFF, 0x96, 0xFF);
            Animation_DrawSkeleton(1, &D_602D140, arg0->unk_18C, 0, 0, arg0, &gIdentityMatrix);

            if (arg0->unk_114 != 0.0f) {
                RCP_SetupDL_49();
                gDPSetPrimColor(gMasterDisp++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gMasterDisp++, 0xFF, 0x20, 0x20, 0xFF);
                Matrix_Translate(gGfxMatrix, 10.0f, -5.0f, -40.0f, 1);
                Matrix_RotateY(gGfxMatrix, (-arg0->obj.rot.y) * M_DTOR, 1);
                Graphics_SetScaleMtx(1.0f);
                Matrix_Scale(gGfxMatrix, arg0->unk_114, arg0->unk_114, arg0->unk_114, 1);

                camX = gPlayer->camEye.x - arg0->obj.pos.x;
                camY = gPlayer->camEye.y - arg0->obj.pos.y;
                camZ = gPlayer->camEye.z - (arg0->obj.pos.z + D_80177D20);

                y = -Math_Atan2F(camX, camZ);
                x = Math_Atan2F(camY, sqrtf(SQ(camZ) + SQ(camX)));

                Matrix_RotateY(gGfxMatrix, -y, 1);
                Matrix_RotateX(gGfxMatrix, -x, 1);

                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
                Math_SmoothStepToF(&arg0->unk_114, 0.0f, 0.1f, 0.2f, 0.05f);
            }

            if (arg0->unk_124.z != 0.0f) {
                RCP_SetupDL_49();
                gDPSetPrimColor(gMasterDisp++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gMasterDisp++, 0xFF, 0x30, 0x00, 0xFF);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_RotateY(gCalcMatrix, (arg0->obj.rot.y - 90.0f) * M_DTOR, 0);

                sp2B8.x = 210.0f;
                sp2B8.y = 0.0f;
                sp2B8.z = 40.0f;

                Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f*) (&sp2B8), &sp2AC);
                Matrix_Translate(gGfxMatrix, arg0->obj.pos.x + sp2AC.x, arg0->obj.pos.y + sp2AC.y,
                                 arg0->obj.pos.z + sp2AC.z, 1);
                Matrix_Scale(gGfxMatrix, arg0->unk_124.z, arg0->unk_124.z, arg0->unk_124.z, 1);

                camX = gPlayer->camEye.x - arg0->obj.pos.x;
                camY = gPlayer->camEye.y - arg0->obj.pos.y;
                camZ = gPlayer->camEye.z - (arg0->obj.pos.z + D_80177D20);

                y = -Math_Atan2F(camX, camZ);
                x = Math_Atan2F(camY, sqrtf((camZ * camZ) + (camX * camX)));

                Matrix_RotateY(gGfxMatrix, -y, 1);
                Matrix_RotateX(gGfxMatrix, -x, 1);

                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
                Math_SmoothStepToF(&arg0->unk_124.z, 0.00f, 0.1f, 0.6f, 0);
            }
            break;

        case 40:
            gSPDisplayList(gMasterDisp++, D_60132A0);
            break;

        case 41:
            func_801BE0F0(arg0);
            break;

        case 42:
            gSPDisplayList(gMasterDisp++, D_6014A40);
            break;

        case 43:
            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_050);
            gDPSetEnvColor(gMasterDisp++, 0xFF, 0xC0, 0x80, 0xFF);
            Matrix_RotateY(gGfxMatrix,
                           Math_Atan2F(gPlayer->camEye.x - gPlayer->camAt.x, gPlayer->camEye.z - gPlayer->camAt.z), 1);
            Matrix_Scale(gGfxMatrix, arg0->unk_114, arg0->unk_114, arg0->unk_114, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            if (arg0->unk_050 != 0) {
                arg0->unk_050 -= 7;
            }
            arg0->unk_114 += 0.2f;
            break;

        case 44:
            Animation_GetFrameData(&D_6020A40, arg0->unk_050, arg0->unk_18C);
            gSPClearGeometryMode(gMasterDisp++, 0x00002000);
            Animation_DrawSkeleton(1, &D_6020C6C, arg0->unk_18C, 0, 0, &arg0->index, &gIdentityMatrix);
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
        var_fp = &D_7010970[0];
    } else {
        var_fp = D_1024AC0;
    }

    if (gCurrentLevel == LEVEL_TITANIA) {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, 0x3ED);
    }

    if (D_80177B8C != 0) {
        gSPDisplayList(gMasterDisp++, &D_E000000);
    } else {
        gSPDisplayList(gMasterDisp++, &D_E003AB0);
    }

    if ((gCurrentLevel != LEVEL_AQUAS) &&
        ((gCurrentLevel != LEVEL_SECTOR_Z) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_7))) {
        RCP_SetupDL_49();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
        for (i = 0, var_s6_2 = D_800CA0BC; i < 4; i++, var_s6_2++) {
            if ((i != 1) || (D_80177B8C != 0)) {
                sp9C[i] = 0.0f;
                if (i < 2) {
                    if (!(gFrameCount & 0x38)) {
                        sp9C[i] = D_800CA170[gFrameCount & 7];
                    }
                    gDPSetEnvColor(gMasterDisp++, 0xFF, 0x20, 0x20, 0x80);
                } else {
                    if (!((gFrameCount + 0x20) & 0x38)) {
                        sp9C[i] = D_800CA170[gFrameCount & 7];
                    }
                    gDPSetEnvColor(gMasterDisp++, 0x20, 0x20, 0xFF, 0x80);
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, var_s6_2->x, var_s6_2->y, var_s6_2->z, 1);
                Matrix_Scale(gGfxMatrix, sp9C[i], sp9C[i], 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, var_fp);
                Matrix_Pop(&gGfxMatrix);
            }
        }

        gDPSetPrimColor(gMasterDisp++, 0, 0, 0xFF, 0xFF, 0xFF, 0x30);
        gDPSetEnvColor(gMasterDisp++, 0xFF, 0xFF, 0x00, 0x30);
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
        if ((gCurrentLevel == LEVEL_METEO) && (gPlayer->timer_1FC != 0)) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 0xFF, 0xFF, 0xFF, 0x80);
            gDPSetEnvColor(gMasterDisp++, 0xFF, 0xFF, 0x20, 0x80);
            Matrix_Translate(gGfxMatrix, D_80177A48[3] * (-74.0f), -232.0f, 1190.0f, 1);
            Matrix_Scale(gGfxMatrix, D_800CA198[gPlayer->timer_1FC], D_800CA198[gPlayer->timer_1FC], 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, var_fp);
        }
    }
}

#include "global.h"

extern s32 D_i6_801A6760[12];

void func_i6_80187530(Actor* actor) {
    s32 index;

    switch (actor->unk_048) {
        case 0:
            break;
        case 1:
            actor->unk_0B6 += (s32) actor->fwork[22];
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6014658)) {
                actor->unk_0B6 = Animation_GetFrameCount(&D_6014658) - 1;
            }
            break;
        case 2:
            actor->unk_0B6 -= (s32) actor->fwork[22];
            if (actor->unk_0B6 <= 0) {
                actor->unk_0B6 = 0;
            }
            break;
        default:
            break;
    }

    index = actor->unk_0B6 / 18.0f;
    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_i6_801A6760[index]);
    actor->obj.rot.z = D_i6_801A7F68;
}

s32 func_i6_8018767C(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 13) {
        *arg1 = 0;
    }
    return 0;
}

extern Limb* D_6014844[];

void func_i6_8018769C(Actor* actor) {
    Vec3f sp28[20];

    Animation_GetFrameData(&D_6014658, actor->unk_0B6, sp28);
    Animation_DrawSkeleton(1, D_6014844, sp28, func_i6_8018767C, NULL, NULL, &gIdentityMatrix);
}

extern s32* D_C039290;
extern s32* D_C03A290;

void func_i6_801876FC(void) {
    f32 temp_ft3;
    s32 *var_s0;
    s32 *var_s3;
    s32 i;
    s32 j;
    
    var_s0 = SEGMENTED_TO_VIRTUAL(&D_C039290);
    var_s3 = SEGMENTED_TO_VIRTUAL(&D_C03A290);
    
    for (i = 0; i < 0x400; i += 32) {
        temp_ft3 = 4.0f * __sinf(((f32) (((i / 32) + (((s32) gGameFrameCount) / 2)) & 0x1F)) * 0.19634955f);
        
        for (j = 0; j < 32; j++) {
            var_s0[i + ((((s32) temp_ft3) + j) & 0x1F)] = var_s3[i + j];
        }    
    }
}


extern ObjectInit* D_C0356CC;
extern f32* D_C038CCC;

void func_i6_801878A8() {
    Actor* var_s0_2;
    Item* var_s0_3;
    Object_58* var_s0;
    s32 i;

    D_80178310 = SEGMENTED_TO_VIRTUAL(&D_C0356CC);

    for (var_s0 = gObjects58, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }

        if (D_80178310[i].id < 0xA1) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[i].id;
            var_s0->obj.pos.x = D_80178310[i].xPos;
            var_s0->obj.pos.z = -D_80178310[i].zPos1;
            var_s0->obj.pos.z += D_80178310[i].zPos2;
            var_s0->obj.pos.y = D_80178310[i].yPos;
            var_s0->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&var_s0->info, var_s0->obj.id);
            if (var_s0->obj.id == 0x83) {
                var_s0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_C038CCC);
            }
            var_s0++;
        }
    }

    for (var_s0_2 = &gActors[1], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }

        if ((D_80178310[i].id < 0x124) && (D_80178310[i].id >= 0xB0)) {
            Actor_Initialize(var_s0_2);
            var_s0_2->obj.status = 2;
            var_s0_2->obj.id = D_80178310[i].id;
            var_s0_2->obj.pos.x = D_80178310[i].xPos;
            var_s0_2->obj.pos.z = -D_80178310[i].zPos1;
            var_s0_2->obj.pos.z += D_80178310[i].zPos2;
            var_s0_2->obj.pos.y = D_80178310[i].yPos;
            var_s0_2->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&var_s0_2->info, var_s0_2->obj.id);
            var_s0_2++;
        }
    }

    for (var_s0_3 = gItems, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if ((D_80178310[i].id < 0x153) && (D_80178310[i].id >= 0x142)) {
            Item_Initialize(var_s0_3);
            var_s0_3->obj.status = 2;
            var_s0_3->obj.id = D_80178310[i].id;
            var_s0_3->obj.pos.x = D_80178310[i].xPos;
            var_s0_3->obj.pos.z = -D_80178310[i].zPos1;
            var_s0_3->obj.pos.z += D_80178310[i].zPos2;
            var_s0_3->obj.pos.y = D_80178310[i].yPos;
            Object_SetInfo(&var_s0_3->info, var_s0_3->obj.id);
            var_s0_3++;
        }
    }
}

extern ObjectInit* D_C036310;
extern ObjectInit* D_C036B6C;
extern ObjectInit* D_C03733C;

void func_i6_80187C5C(void) {
    Actor* var_s0_2;
    Item* var_s0_3;
    Object_58* var_s0;
    s32 i;

    switch ((s32) (Rand_ZeroOne() * 2.9f)) {
        case 0:
            D_80178310 = SEGMENTED_TO_VIRTUAL(&D_C036310);
            break;
        case 1:
            D_80178310 = SEGMENTED_TO_VIRTUAL(&D_C036B6C);
            break;
        default:
        case 2:
            D_80178310 = SEGMENTED_TO_VIRTUAL(&D_C03733C);
            break;
    }

    for (var_s0 = gObjects58, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }

        if (D_80178310[i].id < 0xA1) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[i].id;
            var_s0->obj.pos.x = D_80178310[i].xPos;
            var_s0->obj.pos.z = -D_80178310[i].zPos1;
            var_s0->obj.pos.z += D_80178310[i].zPos2;
            var_s0->obj.pos.y = D_80178310[i].yPos;
            var_s0->obj.rot.y = D_80178310[i].rot.y;
            if (var_s0->obj.id == 0x93) {
                var_s0->unk40[0] = D_80178310[i].rot.z;
            }
            Object_SetInfo(&var_s0->info, var_s0->obj.id);
            if (var_s0->obj.id == 0x83) {
                var_s0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_C038CCC);
            }
            var_s0++;
        }
    }

    for (var_s0_2 = &gActors[1], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }

        if ((D_80178310[i].id < 0x124) && (D_80178310[i].id >= 0xB0)) {
            Actor_Initialize(var_s0_2);
            var_s0_2->obj.status = 2;
            var_s0_2->obj.id = D_80178310[i].id;
            var_s0_2->obj.pos.x = D_80178310[i].xPos;
            var_s0_2->obj.pos.z = -D_80178310[i].zPos1;
            var_s0_2->obj.pos.z += D_80178310[i].zPos2;
            var_s0_2->obj.pos.y = D_80178310[i].yPos;
            var_s0_2->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&var_s0_2->info, var_s0_2->obj.id);
            var_s0_2++;
        }
    }

    for (var_s0_3 = gItems, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if ((D_80178310[i].id < 0x153) && (D_80178310[i].id >= 0x142)) {
            Item_Initialize(var_s0_3);
            var_s0_3->obj.status = 2;
            var_s0_3->obj.id = D_80178310[i].id;
            var_s0_3->obj.pos.x = D_80178310[i].xPos;
            var_s0_3->obj.pos.z = -D_80178310[i].zPos1;
            var_s0_3->obj.pos.z += D_80178310[i].zPos2;
            var_s0_3->obj.pos.y = D_80178310[i].yPos;
            Object_SetInfo(&var_s0_3->info, var_s0_3->obj.id);
            var_s0_3++;
        }
    }
}

void func_i6_801880E4(Actor* arg0) {
    s32 i;
    Vec3f sp60;
    Object_58* var_v0;
    f32 sp58;
    f32 var_fv0;
    Vec3f sp48;
    Vec3f sp3C;
    f32 temp_fv1;

    for (var_v0 = gObjects58, i = 0; i < 0xC8; i++, var_v0++) {
        if ((var_v0->obj.id == 0x93) && ((u8) arg0->unk_04E == (u8) var_v0->unk40[0])) {
            arg0->fwork[3] = var_v0->obj.pos.x;
            arg0->fwork[4] = var_v0->obj.pos.y;
            arg0->fwork[5] = var_v0->obj.pos.z;
            break;
        }
    }
    arg0->fwork[2] = 3.0f;
    sp60.z = arg0->fwork[3] - arg0->obj.pos.x;
    sp60.y = arg0->fwork[4] - arg0->obj.pos.y;
    sp60.x = arg0->fwork[5] - arg0->obj.pos.z;
    if ((fabsf(sp60.z) < 300.0f) && (fabsf(sp60.y) < 300.0f) && (fabsf(sp60.x) < 300.0f)) {
        arg0->unk_04E += 1;
    }
    if (!(gGameFrameCount & 0x1F)) {
        arg0->iwork[0xB] = 1;
        arg0->fwork[1] = 47.0f;
        if ((fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 1000.0f) &&
            (fabsf(arg0->obj.pos.y - gPlayer[0].pos.y) < 500.0f) &&
            (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 1000.0f)) {
            arg0->iwork[0xB] = 2;
            arg0->fwork[1] = 65.0f;
        }
    }

    Math_SmoothStepToF(arg0->fwork, arg0->fwork[1], 0.2f, 3.0f, 0.00001f);
    sp58 = Math_RadToDeg(Math_Atan2F(sp60.z, sp60.x));
    Math_SmoothStepToAngle(&arg0->unk_0F4.x, Math_RadToDeg(Math_Atan2F(sp60.y, sqrtf(SQ(sp60.z) + SQ(sp60.x)))), 0.1f,
                           arg0->fwork[2], 0.0f);
    temp_fv1 = Math_SmoothStepToAngle(&arg0->unk_0F4.y, sp58, 0.1f, arg0->fwork[2], 0.0001f) * 40.0f;
    if (temp_fv1 < 0.0f) {
        var_fv0 = temp_fv1 * -1.0f;
    } else {
        var_fv0 = 360.0f - temp_fv1;
    }
    Math_SmoothStepToAngle(&arg0->obj.rot.z, var_fv0, 0.1f, 3.0f, 0.01f);

    arg0->obj.rot.y = arg0->unk_0F4.y;
    arg0->obj.rot.x = -arg0->unk_0F4.x;
    Matrix_RotateY(gCalcMatrix, arg0->unk_0F4.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -arg0->unk_0F4.x * M_DTOR, 1);
    sp48.x = 0;
    sp48.y = 0;
    sp48.z = arg0->fwork[0];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp48, &sp3C);
    arg0->vel.x = sp3C.x;
    arg0->vel.y = sp3C.y;
    arg0->vel.z = sp3C.z;
}

void func_i6_80188448(Actor* arg0) {
    func_8005B388(arg0);
}

void func_i6_80188468(void) {
    Actor* actor = &gActors[0];

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.pos.x = -23180.0f;
    actor->obj.pos.y = 300.0f;
    actor->obj.pos.z = -11959.0f;
    actor->iwork[0xB] = 1;
    actor->iwork[0xE] = 1;
    actor->obj.id = 0xC7;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i6_80188528(Actor* arg0) {
    Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.2f, 0.5f, 0.0f);
    Math_SmoothStepToF(&arg0->vel.y, 0.0f, 0.2f, 0.5f, 0.0f);
    Math_SmoothStepToF(&arg0->vel.z, 0.0f, 0.2f, 0.5f, 0.0f);
    if (arg0->unk_0D0 != 0) {
        func_8007A6F0(&arg0->obj.pos, 0x2903A008);
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 3.0f, 5);
    } else if (arg0->timer_0BC == 0) {
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }
    arg0->obj.rot.y = RAD_TO_DEG(-gPlayer[0].unk_058);
    arg0->obj.rot.x = RAD_TO_DEG(gPlayer[0].unk_05C);
    arg0->unk_0F4.z += arg0->fwork[0];
}

extern Gfx* D_6009300;

void func_i6_80188660(Actor* arg0) {

    RCP_SetupDL(&gMasterDisp, 0x3D);
    GPC(255, 255, 255, 255);
    Matrix_RotateZ(gGfxMatrix, arg0->unk_0F4.z * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 1.1f, 0.9f, 1.0f, 1);
    Matrix_RotateZ(gGfxMatrix, -arg0->unk_0F4.z * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 1.1f, 0.9f, 1.0f, 1);
    Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(&D_6009300);
}

void func_i6_801887B0(Actor* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Actor_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x11E;
    arg0->vel.x = arg4;
    arg0->vel.y = arg5;
    arg0->vel.z = arg6;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->fwork[0] = 10.0f;
    } else {
        arg0->fwork[0] = -10.0f;
    }
    arg0->timer_0BC = 300;
    Object_SetInfo(&arg0->info, arg0->obj.id);
}

void func_i6_8018887C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == 0) {
            func_i6_801887B0(&gActors[i], arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        }
    }
}

void func_i6_801888F4(Actor* arg0) {
    s32 i;

    arg0->obj.rot.z -= 8.0f;
    if ((arg0->timer_0BC & 1) == 1) {
        func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f);
    }
    if ((arg0->timer_0BC == 0) || (arg0->unk_0D0 != 0)) {
        func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, 7.0f,
                      20);
        func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 10.0f, 5);

        for (i = 0; i < 6; i++) {
            func_800794CC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
        }

        func_8007A6F0(&arg0->obj.pos, 0x2903B009);
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5);
        gHitCount += 6;
        D_80177850 = 0xF;
    }
}

void func_i6_80188A4C(Boss* arg0) {

    if (arg0->damage >= 21) {
        arg0->damage = 20;
    }
    if (arg0->dmgType != 0) {
        arg0->dmgType = 0;
        if (arg0->actionState < 0xA && !(arg0->fwork[0x15] < 250.0f)) {
            switch (arg0->dmgPart) {
                case 0:
                    arg0->swork[1] = 0xF;
                    arg0->swork[7] = 0x1E;
                    return;
                case 1:
                case 2:
                    if (arg0->swork[4] == 0) {
                        arg0->swork[2] = 0xA;
                        arg0->swork[3] = 0xF;
                        Audio_PlaySfx(0x2943500FU, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        arg0->health -= arg0->damage;
                        if ((arg0->health != 0) && (arg0->health <= 0)) {
                            D_Timer_80161A60 = 8;
                            Audio_PlaySfx(0x2940D09AU, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            func_80042EC0(arg0);
                            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                            arg0->actionState = 20;
                            arg0->swork[1] = 1000;
                            arg0->swork[2] = 1000;
                            arg0->swork[6] = 1;
                            D_80177A48[0] = 0.0f;
                            D_80177A48[1] = 0.1f;
                            D_80177A80 = 0;
                            func_8001A55C(&arg0->sfxPos, 0x11034074U);
                            func_8001A55C(&arg0->sfxPos, 0x31408097U);
                            func_800182F4(0x100100FF);
                            func_800182F4(0x110100FF);
                        }
                    }
                    break;
                default:
                    if (arg0->swork[4] == 0) {
                        arg0->swork[8]++;
                        if (arg0->swork[8] >= 6) {
                            arg0->swork[8] = 0;
                            arg0->actionState = 12;
                            arg0->timer_050 = 50;
                            arg0->fwork[3] = gPlayer[0].pos.x;
                            arg0->fwork[5] = gPlayer[0].unk_138;
                            Audio_PlaySfx(0x2940B096U, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        }
                    }
                    break;
            }
        }
    }
}

extern AnimationHeader D_600C038;

void func_i6_80188CB8(Boss* arg0) {
    s32 i;
    Vec3f sp50;
    Vec3f sp44;

    arg0->unk_04C++;
    if (arg0->unk_04C >= Animation_GetFrameCount(&D_600C038)) {
        arg0->unk_04C = 0;
    }
    Animation_GetFrameData(&D_600C038, arg0->unk_04C, arg0->vwork);

    if (arg0->swork[3] != 0) {
        arg0->swork[3]--;
    }

    if (arg0->swork[2] != 0) {
        arg0->swork[2]--;
        Math_SmoothStepToF(&arg0->fwork[15], -15.0f, 0.8f, 5.0f, 0.0f);
        Math_SmoothStepToF(&arg0->fwork[16], 0.05f, 0.8f, 0.02f, 0.0f);
    } else {
        Math_SmoothStepToF(&arg0->fwork[15], 4.0f, 0.05f, 0.2f, 0.0f);
        Math_SmoothStepToF(&arg0->fwork[16], 0.03f, 0.05f, 0.001f, 0.0f);
    }
    Math_SmoothStepToF(&arg0->fwork[10], arg0->fwork[11], arg0->fwork[12], arg0->fwork[13], 0.0f);
    if (arg0->swork[1] != 0) {
        arg0->swork[1]--;
        arg0->fwork[11] = 30.0f;
        arg0->fwork[12] = 0.8f;
        arg0->fwork[13] = 3.0f;
    } else {
        arg0->fwork[11] = 8.0f;
        arg0->fwork[12] = 0.05f;
        arg0->fwork[13] = 0.5f;
    }

    if (arg0->swork[7] != 0) {
        arg0->swork[7]--;
        if (!(gGameFrameCount & 1)) {
            func_i6_8018887C(((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.x,
                             ((Rand_ZeroOne() - 0.5f) * 300.0f) + (arg0->obj.pos.y - 250.0f),
                             ((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 50.0f,
                             (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() - 0.5f) * 50.0f);
        }
    }
    arg0->fwork[14] += arg0->fwork[15];
    Matrix_RotateY(gCalcMatrix, -gPlayer[0].unk_058, 0);
    sp50.x = arg0->vel.z * 0.25f;
    sp50.y = 0.0f;
    sp50.z = arg0->vel.x * 0.25f;
    Matrix_MultVec3f(gCalcMatrix, &sp50, &sp44);
    arg0->fwork[18] = -sp44.z;
    arg0->fwork[17] = sp44.x;
    arg0->swork[4] = 0;
    arg0->fwork[19] = -26.0f;

    for (i = 10; i < 12; i++) {
        if ((gActors[i].obj.status == 2) && (gActors[i].obj.id == 0xC5)) {

            gUnkEntities30[i].mode = 50;
            gUnkEntities30[i].unk_28 = 1.0f;
            gUnkEntities30[i].unk_04.x = arg0->obj.pos.x;
            gUnkEntities30[i].unk_04.y = arg0->obj.pos.y - 200.0f;
            gUnkEntities30[i].unk_04.z = arg0->obj.pos.z;
            gUnkEntities30[i].timer = 3;
            gUnkEntities30[i].unk_10.x = gActors[i].obj.pos.x;
            gUnkEntities30[i].unk_10.y = gActors[i].obj.pos.y;
            gUnkEntities30[i].unk_10.z = gActors[i].obj.pos.z;
            arg0->swork[4] = 1;
        }
    }
}

void func_i6_80189098(Boss* arg0) {
    Actor* actor = &gActors[10];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = 0xC5;
    actor->unk_0E4 = 10;
    actor->unk_0E6 = 0;
    actor->unk_0CE = 200;
    actor->obj.pos.x = 200.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = arg0->obj.pos.z;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_800CBEA8);

    actor++;

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = 0xC5;
    actor->unk_0E4 = 0xA;
    actor->unk_0E6 = 0;
    actor->unk_0CE = 200;
    actor->obj.pos.x = -200.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = arg0->obj.pos.z;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_800CBEA8);

    gActors[0].unk_0B8 = 2;
}

extern void func_800B56BC(Player*);

void func_i6_80189214(void) {
    s32 i;
    Player* player = &gPlayer[0];

    func_800A6148();

    for (i = 0; i < 200; i++) {
        gObjects58[i].obj.status = 0;
    }

    gLevelMode = 0;
    player->unk_204 = 0;
    gPlayer[0].pos.x = 0.0f;
    player->camEye.z = 400.0f;
    player->camAt.z = player->camEye.z - 1000.0f;

    player->unk_148 = player->unk_14C = 0.74f;
    player->camEye.y = player->pos.y * player->unk_14C + 10.0f;
    player->camEye.x = player->pos.x * player->unk_148;
    D_80177DC8 = 0;
    // FAKE
    if (1) {}
    player->camAt.x = 0.0f;
    player->camAt.y = 0.0f;
    player->unk_114 = 0.0f;
    player->unk_144 = 0.0f;
    D_80177D20 = 0.0f;
    player->unk_018 = player->unk_014 = 1.0f;
    player->pos.z = player->unk_138 = -player->unk_144;
    func_800B56BC(player);
}

void func_i6_8018933C(Actor* arg0) {
    if ((fabsf(arg0->obj.pos.x - gPlayer->pos.x) < 1000.0f) && (fabsf(arg0->obj.pos.z - gPlayer->unk_138) < 1000.0f)) {
        D_Timer_80177B44 = 0x32;
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }
}

void func_i6_801893B8(Actor* arg0) {

    if (D_8015F924 == 0) {
        arg0->unk_04E++;
        switch (arg0->unk_04E) {
            case 200:
                func_800BA808(gMsg_ID_8250, RCID_ANDROSS_RED);
                return;
            case 400:
                func_800BA808(gMsg_ID_8255, RCID_ANDROSS_RED);
                return;
            case 600:
                func_800BA808(gMsg_ID_8260, RCID_ANDROSS_RED);
                return;
            case 800:
                func_800BA808(gMsg_ID_19325, RCID_ANDROSS_RED);
                break;
        }
    }
}

void func_i6_80193710(void);

void func_i6_80189470(Actor* arg0) {
    s32 i;
    Player* player = &gPlayer[0];

    if ((D_80177AB0 != 7) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) &&
        (fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 9000.0f) &&
        (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 9000.0f)) {
        D_80177AB0 = 7;
        func_800BA808(gMsg_ID_19370, RCID_JAMES);
        func_800182F4(0x101400FF);
        func_800182F4(0x111400FF);
    }

    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 500.0f) &&
        (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 500.0f)) {
        func_8001A838(0x11403076);
        func_8001D400(0);
        gCurrentLevel = LEVEL_VENOM_2;
        D_8017827C = 1;
        D_800D2F68 = 1;
        player->state_1C8 = PLAYERSTATE_1C8_7;
        player->unk_1D0 = 3;
        player->unk_144 = D_80177D20 = 0.0f;
        D_80177AB0 = D_80177A98 = 1;
        player->camEye.x = 1200.0f;
        player->camEye.z = 1200.0f;
        player->camEye.y = 1800.0f;
        D_801779A0 = 0.0f;
        D_801779B8 = 620.0f;
        D_801779C0 = 0.0f;
        player->unk_234 = 0;
        player->unk_034 = 0.0f;
        D_80177A48[0] = 1.0f;
        func_800A6148();

        for (i = 0; i < 200; i++) {
            gObjects58[i].obj.status = 0;
        }

        func_i6_80193710();
        D_8017782C = 1;
        func_800A594C();
        D_80178348 = D_80178350 = D_80178354 = 0;
        D_80178340 = D_80178358 = 0xFF;
        player->timer_1F8 = 2;
        D_80177A80 = 0;
        D_80177A48[1] = 0.0f;
    }
}

extern void func_8004D440(Player*);

void func_i6_80189724(Actor* arg0) {
    s32 i;
    Vec3f sp70;
    Vec3f sp64;
    Vec3f sp58;

    if ((fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 2000.0f) && (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 2000.0f)) {
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0);
        sp70.x = 0.0f;
        sp70.y = 0.0f;
        sp70.z = -30.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp58);
        Matrix_RotateZ(gCalcMatrix, 2.0f * (Rand_ZeroOne() * M_PI), 1);
        sp70.x = Rand_ZeroOne() * 300.0f;
        sp70.y = 0.0f;
        sp70.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);

        arg0->vel.x = sp58.x * 0.2f;
        arg0->vel.y = sp58.y * 0.2f;
        arg0->vel.z = sp58.z * 0.2f;
        for (i = 0; i < 1; i++) {
            func_8007797C(arg0->obj.pos.x + sp64.x, arg0->obj.pos.y + sp64.y, arg0->obj.pos.z + sp64.z, sp58.x, sp58.y, sp58.z, (Rand_ZeroOne() * 2.5f) + 15.5f);
        }
    }
    if ((fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 500.0f) && (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 500.0f)) {
        if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3 || gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
            gPlayer[0].shields = 0;
            gRightWingHealth[0] = gLeftWingHealth[0] = 0;
            Player_ApplyDamage(&gPlayer[0], 1, 60);
            Player_ApplyDamage(&gPlayer[0], 2, 60);
            arg0->timer_0BC = 10;
            gPlayer[0].timer_220 = 200;
        }
    }
    if (arg0->timer_0BC == 1) {
        func_8004D440(&gPlayer[0]);
    }
}

void func_i6_801899E4(Effect* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5) {

    Effect_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x165;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_4C = arg5;
    arg0->scale2 = (Rand_ZeroOne() * 0.8f + 0.3f) * arg4;
    arg0->timer_50 = 0x64;
    arg0->obj.rot.x = Rand_ZeroOne() * 360.0f;
    arg0->unk_60.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
    arg0->unk_60.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
    arg0->unk_60.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
    Object_SetInfo(&arg0->info, arg0->obj.id);
}

void func_i6_80189B00(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    for (i = 50; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i6_801899E4(&gEffects[i], arg0, arg1, arg2, arg3, 0);
            break;
        }
    }
}

extern f32 D_800C9C30;
extern u16 D_800C9E90[][2];

void func_i6_801876FC(void);

void func_i6_80189B70(Boss* arg0) {
    s32 i;
    s32 sp98;
    s32 var_v0_2;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s32 pad84;
    f32 sp80;
    s32 pad7C;
    Vec3f sp70;
    Vec3f sp64;
    Vec3f sp58;
    s32 pad;

    func_i6_80188A4C(arg0);
    func_i6_80188CB8(arg0);
    arg0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_C038F24);
    Math_SmoothStepToF(&D_800C9C30, 255.0f, 1.0f, 4.0f, 0);
    Math_SmoothStepToF(&arg0->unk_3F8, 10.0f, 0.2f, 0.2f, 0);
    if (!(gGameFrameCount & 0x10)) {
        Math_SmoothStepToF(&arg0->fwork[25], 255.0f, 1.0f, 10.0f, 0);
    } else {
        Math_SmoothStepToF(&arg0->fwork[25], 100.0f, 1.0f, 10.0f, 0);
    }
    if ((fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 300.0f) && (fabsf((arg0->obj.pos.y - 300.0f) - gPlayer[0].pos.y) < 300.0f) && (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 300.0f) && (arg0->actionState < 0xB) && (arg0->timer_05A == 0)) {
        arg0->actionState = 11;
        arg0->timer_050 = 150;
        Audio_PlaySfx(0x31408097, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    switch (arg0->actionState) {
        case 0:
            arg0->health = 200;
            D_80177AB0 = 3;
            arg0->fwork[19] = -26.0f;
            arg0->fwork[10] = 8.0f;
            func_i6_80189098(arg0);
            arg0->swork[5] = 0x12C;
            arg0->actionState++;
            Audio_PlaySfx(0x11034074, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->fwork[21] = 255.0f;
            arg0->fwork[22] = 255.0f;
            arg0->fwork[23] = 0.0f;
            arg0->fwork[24] = 0.0f;
            break;
        case 10:
            arg0->fwork[23] = 0.0f;
            arg0->fwork[24] = 0.0f;
            arg0->fwork[21] = 255.0f;
            arg0->fwork[22] = 255.0f;
            arg0->fwork[1] = 10.0f;
            arg0->fwork[2] = 2.0f;
            arg0->fwork[3] = 0.0f;
            arg0->fwork[4] = 0.0f;
            arg0->fwork[5] = gPlayer[0].pos.z - 3000.0f;
            arg0->fwork[19] = -26.0f;
            arg0->swork[5] = 100;
            if (arg0->timer_050 == 0) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_9;
                gPlayer[0].unk_1D0 = 0;
                arg0->actionState = 1;
                gPlayer[0].unk_240 = 1;
            }
            break;
        case 1:
            if ((gPlayer[0].state_1C8 != PLAYERSTATE_1C8_9) && (arg0->timer_050 == 0)) {
                arg0->fwork[2] = 1.6f;
                arg0->timer_050 = (s32) Rand_ZeroOne() * 50.0f + 50;
                arg0->fwork[3] = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                arg0->fwork[4] = (Rand_ZeroOne() - 0.5f) * 1000.0f;
                arg0->fwork[5] = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                if (Rand_ZeroOne() < 0.3f) {
                    arg0->actionState = 2;
                    arg0->timer_050 = (s32) Rand_ZeroOne() * 100.0f + 50;
                    arg0->fwork[1] = 0.0f;
                }
            }
            break;
        case 2:
            if (arg0->timer_050 == 0) {
                arg0->actionState = 1;
                arg0->timer_050 = (s32) Rand_ZeroOne() * 50.0f + 50;
                arg0->fwork[1] = 50.0f;
            }
            break;
        case 11:
            arg0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_800CBF34);
            if (arg0->timer_050 < 0x78) {
                D_80178348 = D_80178350 = D_80178354 = 0xFF;
                D_80178358 = 0x50;
                D_8017835C = 1;
                gPlayer[0].timer_224 = gGameFrameCount & 7;
                gPlayer[0].timer_220 = 3;
                Math_SmoothStepToF(&D_801779A8[gMainController], 40.0f, 1.0f, 3.0f, 0.0f);
                if (!(gGameFrameCount & 0x1F) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3)) {
                    Player_ApplyDamage(&gPlayer[0], 3, 10);
                }
            }
            Math_SmoothStepToF(&gPlayer[0].unk_0D0, 0.0f, 2.0f, 2.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].pos.x, arg0->obj.pos.x, 0.8f, 50.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].pos.y, arg0->obj.pos.y - 300.0f, 0.8f, 50.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].pos.z, arg0->obj.pos.z, 0.8f, 50.0f, 0.0f);
            arg0->fwork[11] = 45.0f;
            arg0->fwork[12] = 0.8f;
            arg0->fwork[13] = 1.0f;
            arg0->fwork[19] = 23.0f;
            arg0->fwork[1] = 0.0f;
            gPlayer[0].unk_238 = 1;
            Math_SmoothStepToF(&D_800CA230, 0.15f, 0.2f, 0.004f, 0.0f);
            if (arg0->timer_050 == 120) {
                Audio_PlaySfx(0x1940306E, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_050 == 0) {
                gPlayer[0].unk_0D0 = D_80161A54;
                gPlayer[0].unk_238 = 0;
                D_80178358 = 0;
                arg0->timer_05A = 50;
                if (arg0->swork[4] != 0) {
                    arg0->actionState = 1;
                    arg0->timer_050 = (s32) Rand_ZeroOne() * 50.0f + 50;
                    arg0->fwork[1] = 50.0f;
                } else {
                    arg0->actionState = 3;
                }
                func_8001A55C(&arg0->sfxPos, 0x31408097);
            }
            break;
        case 3:
            arg0->fwork[1] = 42.0f;
            arg0->fwork[2] = 1.3f;
            arg0->fwork[3] = gPlayer[0].pos.x;
            arg0->fwork[4] = gPlayer[0].pos.y;
            arg0->fwork[5] = gPlayer[0].unk_138;
            break;
        case 12:
            arg0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_800CBF34);
            arg0->fwork[1] = 0;
            arg0->fwork[24] = 0.2f;
            arg0->fwork[22] = 0.0f;
            if ((arg0->fwork[22] < 1.0f) && (arg0->timer_050 == 0)) {
                sp90 = arg0->fwork[3] - arg0->obj.pos.x;
                sp88 = arg0->fwork[5] - arg0->obj.pos.z;
                Matrix_RotateY(gCalcMatrix, Math_Atan2F(sp90, sp88), 0);
                sp70.x = 0.0f;
                sp70.y = 0.0f;
                sp70.z = 4000.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
                arg0->obj.pos.x = arg0->fwork[3] + sp64.x;
                arg0->obj.pos.z = arg0->fwork[5] + sp64.z;
                arg0->unk_078.y = Math_RadToDeg(Math_Atan2F(sp90, sp88));
                arg0->actionState = 0xD;
                Audio_PlaySfx(0x1940306E, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->timer_054 = 90;
            }
            break;
        case 13:
            arg0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_800CBF34);
            arg0->fwork[0x18] = 0.0f;
            arg0->fwork[0x16] = 255.0f;
            if (250.0f < arg0->fwork[0x16]) {
                arg0->actionState = 3;
            }
            break;
        case 20:
            D_80177A80 += 1;
            arg0->fwork[0] = 0.0f;
            arg0->fwork[1] = 0.0f;
            arg0->obj.rot.z += 0.2f;
            arg0->obj.rot.x += 0.1f;
            arg0->obj.pos.y -= 3.0f;
            Matrix_RotateY(gCalcMatrix, -gPlayer[0].unk_058, 0U);
            sp70.x = (Rand_ZeroOne() - 0.5f) * 700.0f;
            sp70.y = (Rand_ZeroOne() - 0.5f) * 300.0f;
            sp70.z = 500.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp70, &sp64);
            func_8007797C(arg0->obj.pos.x + sp64.x, arg0->obj.pos.y + sp64.y, arg0->obj.pos.z + sp64.z, 0.0f, 0.0f, 0.0f, (Rand_ZeroOne() * 5.0f) + 7.0f);
            if (!(gGameFrameCount & 1)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 600.0f) + arg0->obj.pos.x, (Rand_ZeroOne() * 100.0f) + (arg0->obj.pos.y + 100.0f), arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, (Rand_ZeroOne() * 0.3f) + 0.5f, 0);
            }
            sp70.x = 0.0f;
            sp70.y = 0.0f;
            sp70.z = 2000.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp70, &sp64);
            Math_SmoothStepToF(&D_80177A48[0], 100.0f, 1.0f, 2.0f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[1], 100.0f, 1.0f, 10.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.x, arg0->obj.pos.x + sp64.x, 0.02f, D_80177A48[0], 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.y, arg0->obj.pos.y + sp64.y, 0.02f, D_80177A48[0], 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.z, arg0->obj.pos.z + sp64.z, 0.02f, D_80177A48[0], 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camAt.x, arg0->obj.pos.x, 0.05f, D_80177A48[1], 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camAt.y, arg0->obj.pos.y, 0.05f, D_80177A48[1], 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camAt.z, arg0->obj.pos.z, 0.05f, D_80177A48[1], 0.0f);
            Math_SmoothStepToF(&gPlayer[0].unk_034, 0.0f, 0.5f, 0.5f, 0.0f);

            if (D_80177A80 == 0x32) {
                func_800BA808(gMsg_ID_19335, RCID_ANDROSS_RED);
            }
            if (D_80177A80 == 0xC8) {
                D_80178284 = 0;
                gPlayer[0].unk_0D0 = D_80161A54;
                func_8001CA24(0);
                arg0->actionState = 21;
                func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 60.0f, 5);
                func_8007A568(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 40.0f);

                for (i = 0; i < ARRAY_COUNT(gActors); i++) {
                    if ((gActors[i].obj.status == 2) && (gActors[i].obj.id == 0x11E)) {
                        Object_Kill(&gActors[i].obj, &gActors[i].sfxPos);
                    }
                }
                D_80177AB0 = 4;
                D_80177A80 = 0;
            }
            break;
        case 21:
            func_i6_801876FC();
            D_80177A80++;
            D_80178480 = 10;
            if (D_80177A80 < 200) {
                D_80178380[0] += 4;
                if (D_80178380[0] >= 0xFF) {
                    D_80178380[0] = 0xFF;
                }
                D_80178390[0] = D_801783A0[0] = D_801783B0[0] = 0xFF;
                Math_SmoothStepToF(&D_800CA230, 0.15f, 0.2f, 0.004f, 0.0f);
                Math_SmoothStepToF(&D_801779A8[gMainController], 70.0f, 1.0f, 4.0f, 0.0f);
            }
            switch (D_80177A80) {
                case 30:
                    gRadioState = 0;
                    func_800BA808(gMsg_ID_20318, RCID_FOX);
                    gPlayer[0].timer_220 = 0xC8;
                    break;
                case 350:
                    func_800BA808(gMsg_ID_19468, RCID_JAMES);
                    break;
                case 500:
                    func_800BA808(gMsg_ID_19350, RCID_FOX);
                    D_8015F924 = 1;
                    break;
                case 600:
                    D_80177AB0 = 5;
                    gFogRed = 0x81;
                    gFogGreen = 0x1B;
                    gFogBlue = 0;
                    gFogNear = 0x3E4;
                    gFogFar = 0x3EF;
                    gBgColor = 0x4081;
                    D_80161A44 = 30000.0f;
                    gGroundLevel = -50.0f;
                    gPlayer[0].pos.x = -25995.0f;
                    gPlayer[0].pos.y = 300.0f;
                    gPlayer[0].pos.z = -11140.0f;
                    gPlayer[0].unk_08C = 0.0f;
                    gPlayer[0].unk_114 = 271.0f;
                    gPlayer[0].unk_110 = gPlayer[0].unk_4D8 = gPlayer[0].unk_0E8 = gPlayer[0].unk_0E4 = gPlayer[0].unk_0EC = 0.0f;
                    gPlayer[0].unk_12C = 150.0f;
                    gPlayer[0].unk_034 = -90.0f;
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer[0].unk_1D0 = 0x64;
                    gPlayer[0].timer_1F8 = 0xF0;
                    gPlayer[0].unk_234 = 1;
                    D_80177A48[5] = -1200.0f;
    
                    func_i6_80188468();
                    func_i6_80187C5C();
                    gPlayer[0].unk_014 = 1.0f;
                    func_800B7184(gPlayer, 1);
                    func_8001C8B8(0);
                    func_8001D444(0, D_800C9E90[gCurrentLevel][1], 0, 0xFF);
                    Audio_PlaySfx(0x11403076, &D_800C5D28, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    
                    D_80177CA4 = gHitCount;
                    break;
                case 800:
                    func_800BA808(gMsg_ID_19340, RCID_JAMES);
                    break;
                case 1000:
                    func_8001D400(0);
                    break;
                case 1300:
                    func_800BA808(gMsg_ID_19355, RCID_JAMES);
                    break;
                case 1800:
                    func_800BA808(gMsg_ID_19360, RCID_JAMES);
                    break;
            }
            if (D_80177A80 > 600) {
                Math_SmoothStepToF(&D_801779A8[gMainController], 10.0f, 1.0f, 2.0f, 0.0f);
            }
            arg0->obj.pos.y = 10000.0f;

            if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && !(gGameFrameCount & 3)) {
                Matrix_RotateY(gCalcMatrix, (gPlayer[0].unk_114 + gPlayer[0].unk_0E8) * M_DTOR, 0U);
                sp70.x = (Rand_ZeroOne() - 0.5f) * 800.0f;
                sp70.y = 600.0f;
                sp70.z = (Rand_ZeroOne() * 1000.0f) + -3000.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
                func_i6_80189B00(gPlayer[0].pos.x + sp64.x, sp64.y, gPlayer[0].unk_138 + sp64.z, 1.2f);

            }
            if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0) {
                Matrix_RotateY(gCalcMatrix, -gPlayer[0].unk_058, 0);
                sp70.x = 0.0f;
                sp70.y = 0.0f;
                sp70.z = -50.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp58);
                Matrix_RotateZ(gCalcMatrix, 2.0f * (Rand_ZeroOne() * M_PI), 1);
                sp70.x = Rand_ZeroOne() * 50.0f + 120.0f;
                sp70.y = 0.0f;
                sp70.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
                if (D_80177A80 < 1000) {
                    var_v0_2 = 1;
                } else if (D_80177A80 < 1500) {
                    var_v0_2 = 3;
                } else if (D_80177A80 < 2000) {
                    var_v0_2 = 1;
                } else {
                    var_v0_2 = 1;
                }
                sp98 = 1;
                if (!(gGameFrameCount & var_v0_2)) {
                    for (i = 0; i < sp98; i++) {
                        func_8007797C(gPlayer[0].camEye.x + sp64.x, gPlayer[0].camEye.y + sp64.y, gPlayer[0].camEye.z + sp64.z, sp58.x, sp58.y, sp58.z, (Rand_ZeroOne() * 2.5f) + 2.5f);
                    }
                }
            }
            break;
    }
    sp90 = arg0->fwork[3] - arg0->obj.pos.x;
    sp8C = arg0->fwork[4] - arg0->obj.pos.y;
    sp88 = arg0->fwork[5] - arg0->obj.pos.z;
    sp80 = Math_RadToDeg(Math_Atan2F(sp90, sp88));
    Math_SmoothStepToAngle(&arg0->unk_078.x, Math_RadToDeg(Math_Atan2F(sp8C, sqrtf(SQ(sp90) + SQ(sp88)))), 0.1f, arg0->fwork[2], 0.0f);
    Math_SmoothStepToAngle(&arg0->unk_078.y, sp80, 0.1f, arg0->fwork[2], 0.0f);
    if (arg0->swork[4] != 0) {
        Math_SmoothStepToAngle(&arg0->obj.rot.y, Math_RadToDeg(-gPlayer[0].unk_058), 0.3f, 5.0f, 0.0f);
    } else if (arg0->timer_054 == 0) {
        Math_SmoothStepToAngle(&arg0->obj.rot.y, Math_RadToDeg(-gPlayer[0].unk_058), 0.3f, 1.5f, 0.0f);
    }
    Math_SmoothStepToF(arg0->fwork, arg0->fwork[1], 0.2f, 1.0f, 0.00001f);
    Matrix_RotateY(gCalcMatrix, arg0->unk_078.y * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -arg0->unk_078.x * M_DTOR, 1U);
    sp70.x = 0.0f;
    sp70.y = 0.0f;
    sp70.z = arg0->fwork[0];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
    arg0->vel.x = sp64.x;
    arg0->vel.y = sp64.y;
    arg0->vel.z = sp64.z - D_80177D08;
    if (arg0->actionState < 20) {
        gUnkEntities28[59].unk_00 = 1;
        gUnkEntities28[59].unk_02 = 0x66;
        gUnkEntities28[59].pos.x = arg0->obj.pos.x;
        gUnkEntities28[59].pos.y = arg0->obj.pos.y;
        gUnkEntities28[59].pos.z = arg0->obj.pos.z;
        gUnkEntities28[59].unk_10 = arg0->unk_078.y + 180.0f;
    }
    gActors[10].info.unk_1C = 1.0f;
    gActors[11].info.unk_1C = 1.0f;
    if (arg0->swork[5] != 0) {
        arg0->swork[5]--;
        if (arg0->swork[5] == 0) {
            Audio_PlaySfx(0x11032075, &gActors[10].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_PlaySfx(0x11032075, &gActors[11].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_PlaySfx(0x3103108B, &gActors[10].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_PlaySfx(0x3103108B, &gActors[11].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        gActors[10].obj.pos.x = arg0->obj.pos.x + 200.0f;
        gActors[10].obj.pos.y = arg0->obj.pos.y - 200.0f;
        gActors[10].obj.pos.z = arg0->obj.pos.z + 200.0f;
        gActors[10].unk_0B8 = 0;
        gActors[10].timer_0C2 = 20;
        gActors[10].info.unk_1C = 0.0f;
        gActors[11].obj.pos.x = arg0->obj.pos.x - 200.0f;
        gActors[11].obj.pos.y = arg0->obj.pos.y - 200.0f;
        gActors[11].obj.pos.z = arg0->obj.pos.z + 200.0f;
        gActors[11].unk_0B8 = 0;
        gActors[11].timer_0C2 = 20;
        gActors[11].info.unk_1C = 0.0f;
    }
    Math_SmoothStepToF(&arg0->fwork[0x15], arg0->fwork[0x16], 1.0f, 6.0f, 0);
    Math_SmoothStepToF(&arg0->fwork[0x17], arg0->fwork[0x18], 0.3f, 0.01f, 0);
}

s32 func_i6_8018B47C(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* data) {
    Boss* boss = (Boss*)data;

    if (boss->fwork[21] >= 254.0f) {
        if (arg0 == 2) {
            RCP_SetupDL(&gMasterDisp, 0x16);
            GPC((s32) boss->fwork[25], 255, 255, 255);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x17);
        }
    } else {
        RCP_SetupDL(&gMasterDisp, 0x33);
        GPC(255, 255, 255, (s32) boss->fwork[21]);
    }
    if ((arg0 == 2) && (boss->swork[6] != 0)) {
        *arg1 = NULL;
        return 0;
    }
    if ((arg0 == 1) || (arg0 == 2)) {
        Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, 1);
        Matrix_RotateZ(gCalcMatrix, arg3->z * M_DTOR, 1U);
        Matrix_RotateY(gCalcMatrix, arg3->y * M_DTOR, 1U);
        Matrix_RotateX(gCalcMatrix, arg3->x * M_DTOR, 1U);
        if (*arg1 != NULL) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Push(&gCalcMatrix);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
            if (arg0 == 1) {
                Matrix_RotateY(gGfxMatrix, -boss->fwork[14] * M_DTOR, 1U);
                Matrix_Scale(gGfxMatrix, boss->fwork[16] + 1.0f, 1.0f, 1.0f - boss->fwork[16], 1);
                Matrix_RotateY(gGfxMatrix, boss->fwork[14] * M_DTOR, 1U);
            } else {
                Matrix_RotateY(gGfxMatrix, boss->fwork[14] * 1.5f * M_DTOR, 1U);
                Matrix_Scale(gGfxMatrix,  2.0f * boss->fwork[16] + 1.0f, 1.0f, 1.0f -  2.0f * boss->fwork[16], 1);
                Matrix_RotateY(gGfxMatrix, -boss->fwork[14] * 1.5f * M_DTOR, 1);
            }
            Matrix_SetGfxMtx(&gMasterDisp);
            if ((boss->swork[3] & 1) && (boss->fwork[21] >= 254.0f)) {
                RCP_SetupDL(&gMasterDisp, 0x1B);
                GPC(255, 0, 0, 255);
            }

            GDL(*arg1);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Pop(&gCalcMatrix);
        }
        return 1;
    }
    return 0;
}

extern Limb* D_600C0A4;
extern Gfx* D_600C2D0;
extern Gfx* D_600C560;

void func_i6_8018B8C0(Boss* arg0) {
    s32 j;
    s32 i;
    f32 temp;
    s32 pad;
    Vec3f spAC;
    Vec3f spA0;

    if (arg0->actionState != 21) {
        Matrix_RotateZ(gGfxMatrix, -(f32)gGameFrameCount * 20.0f * M_DTOR, 1);
        Matrix_Scale(gGfxMatrix, arg0->fwork[23] + 1.0f, 1.0f - arg0->fwork[23], 1.0f, 1);
        Matrix_RotateZ(gGfxMatrix, gGameFrameCount * 20.0f * M_DTOR, 1);
        Matrix_Scale(gGfxMatrix, arg0->fwork[23] + 1.0f, 1.0f - arg0->fwork[23], 1.0f, 1);
        Matrix_Scale(gGfxMatrix, arg0->unk_3F8, arg0->unk_3F8, arg0->unk_3F8, 1);
        Animation_DrawSkeleton(0, &D_600C0A4, arg0->vwork, func_i6_8018B47C, NULL, arg0, &gIdentityMatrix);
        if (arg0->fwork[21] >= 254) {
            RCP_SetupDL(&gMasterDisp, 0x36);
            GPC(255, 64, 64, 255);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x46);
            GPC(255, 64, 64, (s32) arg0->fwork[21]);
        }
        GCGM_BACK();
        Matrix_Translate(gGfxMatrix, 0.0f, -16.0f, 0.0f, 1);
        Matrix_Scale(gGfxMatrix, 0.3f, 0.6f, 0.3f, 1);

        for (i = 0; i < 30; i++) {
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateY(gCalcMatrix, i * 50.0f * M_DTOR, 0U);
            spAC.x = 0.0f;
            spAC.y = 0.0f;
            spAC.z = i * 0.8f;
            Matrix_MultVec3f(gCalcMatrix, &spAC, &spA0);
            Matrix_Translate(gGfxMatrix, spA0.x, 10.0f, spA0.z, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * -arg0->obj.rot.y - gPlayer[0].unk_058, 1);

            for (j = 0; j < 10; j++) {
                Matrix_Translate(gGfxMatrix, 0.0f, -10.0f, 0.0f, 1);
                temp = __sinf(((s32) arg0->fwork[19] * (i * 10 + j) + gGameFrameCount * 5) * M_DTOR) * arg0->fwork[10];
                Matrix_RotateZ(gGfxMatrix, (arg0->fwork[18] + temp) * M_DTOR, 1);
                Matrix_RotateX(gGfxMatrix, arg0->fwork[17] * M_DTOR, 1);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, -5.0f, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (j == 9) {
                    GDL(&D_600C2D0);
                } else {
                    GDL(&D_600C560);
                }
                Matrix_Pop(&gGfxMatrix);
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

extern Vtx* D_C017598;
extern Vtx* D_C038FE8;

void func_i6_8018BDD8(void) {
    s32 i;
    f32 spC0[0x11];
    f32 sp7C[0x11];
    s32 temp_lo;
    Vtx* sp74;
    Vtx* sp70;

    sp74 = SEGMENTED_TO_VIRTUAL(&D_C038FE8);
    sp70 = SEGMENTED_TO_VIRTUAL(&D_C017598);

    for (i = 0; i < 0x11; i++) {
        if (i == 0 || i == 0x10) {
            spC0[i] = 0.0f;
            sp7C[i] = 0.0f;
        } else if (gLevelMode == LEVELMODE_ALL_RANGE) {
            spC0[i] = (Rand_ZeroOne() - 0.5f) * 120.0f;
            sp7C[i] = (Rand_ZeroOne() - 0.5f) * 120.0f;
        } else {
            spC0[i] = (Rand_ZeroOne() - 0.5f) * 30.0f;
            sp7C[i] = (Rand_ZeroOne() - 0.5f) * 30.0f;
        }
    }

    
    for (i = 0; i < 0x22; i++) {
        temp_lo = (sp74[i].v.ob[2] + 200) / 25;
        sp70[i].v.ob[0] = sp74[i].v.ob[0] + spC0[temp_lo];
        sp70[i].v.ob[1] = sp74[i].v.ob[1] + sp7C[temp_lo];
    }
    
    if (D_80178284 != 0) {
        Math_SmoothStepToF(&D_i6_801A7F58, 0.0f, 1.0f, 10.0f, 0.0f);
    } else {
        Math_SmoothStepToF(&D_i6_801A7F58, D_i6_801A7F60, 1.0f, 1.0f, 0.0f);
    }

    D_i6_801A7F68 += D_i6_801A7F70;
    Math_SmoothStepToF(&D_i6_801A7F70, D_i6_801A7F78, 1.0f, 0.1f, 0.0f);
}

void func_i6_8018C390(Player* arg0) {

    arg0->unk_2B4 = 1;
    arg0->unk_280 = 0;
    switch (arg0->unk_1D0) {
        case 2:
        case 3:
            break;
        case 0:
            Math_SmoothStepToF(&arg0->pos.x, gBosses->obj.pos.x, 0.5f, 30.0f, 0);
            Math_SmoothStepToF(&arg0->pos.y, gBosses->obj.pos.y - 150.0f, 0.5f, 30.0f, 0);
            Math_SmoothStepToF(&arg0->pos.z, gBosses->obj.pos.z - 100.0f, 0.5f, 60.0f, 0);
            D_80177D20 = arg0->unk_144 = -arg0->pos.z;
            Math_SmoothStepToF(&arg0->camEye.z, 2000.0f, 0.05f, 20.0f, 0);
            Math_SmoothStepToF(&arg0->camEye.x, 0.0f, 0.05f, 10.0f, 0);
            Math_SmoothStepToF(&arg0->camEye.y, 0.0f, 0.05f, 10.0f, 0);
            Math_SmoothStepToF(&arg0->camAt.x, 0.0f, 0.05f, 10.0f, 0);
            Math_SmoothStepToF(&arg0->camAt.y, 0.0f, 0.05f, 10.0f, 0);
            Math_SmoothStepToF(&arg0->camAt.z, 100.0f, 0.05f, 10.0f, 0.0f);
            break;
        case 1:
            arg0->unk_0E4 += 15.0f;

            if (arg0->unk_0E4 > 180.0f) {
                arg0->unk_0E4 -= 360.0f;
            }
            arg0->unk_0E8 += 9.0f;
            if (arg0->unk_0E8 > 180.0f) {
                arg0->unk_0E8 -= 360.0f;
            }
            Math_SmoothStepToF(&arg0->camEye.z, 400.0f, 0.05f, 20.0f, 0.0f);
            if (arg0->timer_1F8 != 0) {
                if (gControllerPress[gMainController].button != 0) {
                    arg0->timer_1F8--;
                }
            }
            if (arg0->timer_1F8 == 0) {
                arg0->state_1C8 = PLAYERSTATE_1C8_3;
                arg0->unk_014 = 0.0f;
                arg0->unk_018 = 0.0f;
            }
            break;
    }
    arg0->unk_138 = arg0->pos.z + arg0->unk_08C;
    func_800A46A0(arg0);
}

void func_i6_8018C660(Effect* arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    Effect_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x18C;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_4C = arg4;
    arg0->scale2 = (Rand_ZeroOne() * 2.5f) + 5.0f;
    arg0->unk_60.x = (Rand_ZeroOne() - 0.5f) * 20.0f;
    arg0->unk_60.y = (Rand_ZeroOne() - 0.5f) * 20.0f;
    Object_SetInfo(&arg0->info, arg0->obj.id);
}


void func_i6_8018C734(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    s32 i;
    
    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i6_8018C660(&gEffects[i], arg0, arg1, arg2, arg3);
            break;
        }
    }
}

void func_i6_8018C7A0(Effect* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    Effect_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x18C;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->vel.x = arg4;
    arg0->vel.y = arg5;
    arg0->vel.z = arg6;
    arg0->unk_4E = 1;
    arg0->unk_4C = arg7;
    if (arg7 < 8) {
        arg0->scale2 = (Rand_ZeroOne() * 2.5f) + 5.0f;
    }
    arg0->obj.rot.x = Rand_ZeroOne() * 360.0f;
    arg0->obj.rot.y = Rand_ZeroOne() * 360.0f;
    arg0->unk_60.x = (Rand_ZeroOne() * 10.0f) + 10.0f;
    arg0->unk_60.y = (Rand_ZeroOne() * 10.0f) + 10.0f;
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->info.unk_10 = 100.0f;
}


void func_i6_8018C8D4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    s32 i;
    
    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i6_8018C7A0(&gEffects[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            break;
        }
    }
}

void func_i6_8018C958(Effect* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    Effect_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x18C;
    arg0->unk_4E = 0xA;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->vel.x = arg4;
    arg0->vel.y = arg5;
    arg0->vel.z = arg6;
    arg0->scale1 = arg7;
    arg0->scale2 = arg7 * 0.1f;
    arg0->unk_44 = 0x64;
    arg0->obj.rot.z = Rand_ZeroOne() * 360.0f;
    arg0->unk_60.z = (Rand_ZeroOne() - 0.5f) * 20.0f;
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->info.unk_14 = 1;
    arg0->info.unk_10 = 100.0f;
}


void func_i6_8018CA50(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    s32 i;
    
    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i6_8018C958(&gEffects[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            break;
        }
    }
}

void func_i6_8018CAD4(Effect* arg0) {
    s32 i;
    Item* sp70;
    Vec3f sp64;
    Vec3f sp58;
    f32 pad54;
    f32 sp50;
    f32 pad4C;
    f32 sp48;
    f32 sp44;
    f32 pad40;
    f32 pad3C;
    f32 sp38;
    f32 sp34;

    arg0->obj.rot.x += arg0->unk_60.x;
    arg0->obj.rot.y += arg0->unk_60.y;
    switch (arg0->unk_4E) {
        case 0:
            if (gBosses[0].actionState == 0x11) {
                Math_SmoothStepToF(&arg0->obj.pos.x, gBosses[0].obj.pos.x, 0.03f, 10.0f, 0);
                Math_SmoothStepToF(&arg0->obj.pos.y, gBosses[0].obj.pos.y - 200.0f, 0.03f, 10.0f, 0);
                pad54 = arg0->obj.pos.x;
                sp50 = arg0->obj.pos.y;
                pad4C = arg0->obj.pos.z;
                pad3C = gBosses[0].obj.pos.x;
                sp38 = gBosses[0].obj.pos.y - 150.0f;
                sp34 = gBosses[0].obj.pos.z - 100.0f;
                sp44 = Math_Atan2F(pad3C - pad54, sp34 - pad4C);
                pad40 = sqrtf(SQ(pad3C - pad54) + SQ(sp34 - pad4C));
                sp48 = -Math_Atan2F(sp38 - sp50, pad40);
                Matrix_RotateY(gCalcMatrix, sp44, 0);
                Matrix_RotateX(gCalcMatrix, sp48, 1);
                sp64.y = sp64.x = 0.0f;
                sp64.z = 30.0f;
                Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
                arg0->vel.x = sp58.x;
                arg0->vel.y = sp58.y;
                arg0->vel.z = sp58.z - D_80177D08;
                if ((fabsf(arg0->obj.pos.x - gBosses[0].obj.pos.x) <= 100.0f) && (fabsf(arg0->obj.pos.z - (gBosses[0].obj.pos.z - 100.0f)) <= 100.0f)) {
                    Object_Kill(&arg0->obj, &arg0->sfxPos);
                }
            } else {
                arg0->info.unk_10 = 100.0f;
                Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.05f, 1.0f, 0);
                Math_SmoothStepToF(&arg0->vel.y, 0.0f, 0.05f, 1.0f, 0);
                Math_SmoothStepToF(&arg0->vel.z, 70.0f, 0.05f, 2.0f, 0);
                func_8007A774(&gPlayer[0], arg0, 100.0f);
                if (arg0->unk_44 != 0) {
                    func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 10.0f);
                    func_8007A6F0(&arg0->obj.pos, 0x2903A008);
                    Object_Kill(&arg0->obj, &arg0->sfxPos);
                }
            }
            arg0->unk_44 = 0;
            break;
        case 1:
            func_8007A774(&gPlayer[0], arg0, 100.0f);
            if (arg0->unk_44 != 0) {
                func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 10.0f);
                func_8007A6F0(&arg0->obj.pos, 0x2903A008);
                Object_Kill(&arg0->obj, &arg0->sfxPos);
                if (Rand_ZeroOne() < 0.1f) {
                    sp70 = gItems;
                    for (i = 0; i < 20; i++, sp70++) {
                        if (sp70->obj.status == 0) {
                            Item_Initialize(sp70);
                            sp70->obj.status = 1;
                            if (Rand_ZeroOne() < 0.5f) {
                                sp70->obj.id = 0x144;
                            } else {
                                sp70->obj.id = 0x147;
                            }
                            sp70->obj.pos.x = arg0->obj.pos.x;
                            sp70->obj.pos.y = arg0->obj.pos.y;
                            sp70->obj.pos.z = arg0->obj.pos.z;
                            sp70->timer_4A = 8;
                            Object_SetInfo(&sp70->info, sp70->obj.id);
                            sp70->unk_50 = 90.0f;
                            break;
                        }
                    }
                }
            }
            break;
        case 10:
            arg0->obj.rot.z += arg0->unk_60.z;
            Math_SmoothStepToF(&arg0->scale2, arg0->scale1, 0.05f, 0.3f, 0);
            Math_SmoothStepToF(&arg0->vel.y, 0.0f, 0.05f, 0.5f, 0.0f);
            Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.05f, 0.5f, 0.0f);
            arg0->unk_44 -= 10;
            if (arg0->unk_44 < 0) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            break;
    }
}

extern Gfx* D_2010A30;
extern Gfx* D_i6_801A6790[];

void func_i6_8018CF98(Effect* arg0) {

    if (arg0->unk_4E == 0xA) {
        GPC(255, 255, 255, arg0->unk_44);
        Matrix_Scale(gGfxMatrix, arg0->scale2, arg0->scale2, arg0->scale2, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(&D_2010A30);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x1D);
        if (arg0->unk_4C < 8) {
            Matrix_Scale(gGfxMatrix, arg0->scale2, arg0->scale2, arg0->scale2, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
        }
        GDL(D_i6_801A6790[arg0->unk_4C]);
        RCP_SetupDL(&gMasterDisp, 0x40);
    }
}

void func_i6_8018D0D8(Boss* arg0) {
    if ((gPlayer[0].timer_498 == 0) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (fabsf(arg0->vwork[0xA].x - gPlayer[0].pos.x) < 700.0f) && (fabsf(arg0->vwork[0xA].y - gPlayer[0].pos.y) < 700.0f)) {
        Player_ApplyDamage(&gPlayer[0], 0, 40);
    }
}

extern f32 D_i6_801A7F5C;
extern f32 D_i6_801A7F6C;
extern f32 D_i6_801A7F74;
extern f32 D_i6_801A7F7C;
extern f32 D_i6_801A8430;
extern f32 D_i6_801A7F64;

void func_i6_8018D16C(Boss* arg0) {
    func_8001D400(0x18);
    D_i6_801A7F5C = D_i6_801A7F64 = D_i6_801A7F6C = D_i6_801A7F74 = D_i6_801A7F7C = D_i6_801A8430 = 0.0f;
    D_800C9C30 = 0.0f;
    arg0->health = 100;
    arg0->fwork[18] = 1.0f;
    arg0->fwork[17] = 1.0f;
    gLight1R = 0xFF;
    gLight1G = 80;
    gLight1B = 20;
    gAmbientR = 1;
    gAmbientG = 0;
    gAmbientB = 20;
    arg0->timer_058 = 10;
    arg0->swork[4] = arg0->swork[5] = 200;
    arg0->swork[6] = 100;
    D_80178284 = 1;
    D_80177AB0 = 1;
    arg0->info.hitbox[16] = 200.0f;
    arg0->info.hitbox[22] = 200.0f;
    func_8001D444(0, 0x8021, 0, 0);
}

void func_i6_8018D2B0(Boss* arg0) {
    s32 i;
    Vec3f sp68;

    if ((arg0->swork[5] < 0) && (arg0->swork[4] < 0)) {
        if ((arg0->dmgType != 0) && (arg0->dmgPart == 0 || arg0->dmgPart == 1)) {
            arg0->dmgType = 0;
            if (arg0->actionState < 0xC) {
                arg0->health -= arg0->damage;
                arg0->timer_05C = 20;
                if ((arg0->actionState == 9) || (arg0->actionState == 10)) {
                    if (arg0->health <= 0) {
                        D_Timer_80161A60 = 8;
                        Audio_PlaySfx(0x2940D09A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        Audio_PlaySfx(0x31009063, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        Audio_PlaySfx(0x19403070, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        func_8001A55C(&arg0->sfxPos, 0x11030073);
                        func_800182F4(0x100100FF);
                        func_800182F4(0x110100FF);
                        arg0->actionState = 31;
                        arg0->timer_050 = 200;
                        gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
                        gPlayer->unk_1D0 = 0;
                    } else if (arg0->health < 0x32) {
                        Audio_PlaySfx(0x2943500F, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                } else if (arg0->health <= 0) {
                    Audio_PlaySfx(0x19403070, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_800182F4(0x100100FF);
                    func_800182F4(0x110100FF);
                    if (D_8017827C == 0) {
                        arg0->actionState = 30;
                    } else {
                        arg0->actionState = 32;
                    }
                    arg0->fwork[9] = 0.0f;
                    arg0->unk_04C = 0;
                    D_80177A80 = 0;
                    arg0->timer_05C = 100;
                } else {
                    Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
        }
    } else if (arg0->dmgType != 0) {
        switch (arg0->dmgPart) {
            case 0:
                if (arg0->actionState < 11) {
                    arg0->swork[6] -= arg0->damage;
                    arg0->swork[0] = 30;
                    Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (arg0->swork[6] <= 0) {
                        arg0->swork[6] = 100;
                        arg0->actionState = 12;
                        arg0->timer_050 = 120;
                        arg0->unk_04C = 0;
                        arg0->fwork[9] = 0.0f;
                        Audio_PlaySfx(0x1940306F, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
                break;
            case 1:
                if (arg0->actionState < 12) {
                    arg0->swork[6] -= arg0->damage;
                    arg0->swork[1] = 30;
                    Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (arg0->swork[6] <= 0) {
                        arg0->swork[6] = 100;
                        arg0->actionState = 13;
                        arg0->timer_050 = 120;
                        arg0->unk_04C = 0;
                        arg0->fwork[9] = 0.0f;
                        Audio_PlaySfx(0x1940306F, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
                break;
            case 2:
            case 3:
                if (arg0->swork[7] == 0) {
                    arg0->swork[arg0->dmgPart] = 30;
                    if (arg0->dmgPart == 2) {
                        sp68.x = arg0->vwork[0].x;
                        sp68.y = arg0->vwork[0].y;
                        sp68.z = arg0->vwork[0].z;
                        arg0->swork[4] -= arg0->damage;
                        if (arg0->swork[4] < 0) {
                            arg0->info.hitbox[16] = 0.0f;
                            func_8007BFFC(arg0->vwork[0].x, arg0->vwork[0].y, arg0->vwork[0].z, 0.0f, 0.0f, 0.0f, 20.0f, 0xF);

                            for (i = 0; i < 30; i++) {
                                func_800794CC(arg0->vwork[0].x + ((Rand_ZeroOne() - 0.5f) * 500.0f), arg0->vwork[0].y + ((Rand_ZeroOne() - 0.5f) * 500.0f), arg0->vwork[0].z, Rand_ZeroOne() + 1.0f);
                            }
                            func_8007B344(arg0->vwork[0].x, arg0->vwork[0].y, arg0->vwork[0].z, 20.0f, 5);
                            func_8007A6F0(&sp68, 0x2903B009);
                        } else {
                            func_8007A6F0(&sp68, 0x29034003);
                        }
                    } else {
                        sp68.x = arg0->vwork[1].x;
                        sp68.y = arg0->vwork[1].y;
                        sp68.z = arg0->vwork[1].z;
                        arg0->swork[5] -= arg0->damage;
                        if (arg0->swork[5] < 0) {
                            arg0->info.hitbox[22] = 0.0f;
                            func_8007BFFC(arg0->vwork[1].x, arg0->vwork[1].y, arg0->vwork[1].z, 0.0f, 0.0f, 0.0f, 20.0f, 0xF);
                            
                            for (i = 0; i < 30; i++) {
                                func_800794CC(arg0->vwork[1].x + ((Rand_ZeroOne() - 0.5f) * 500.0f), arg0->vwork[1].y + ((Rand_ZeroOne() - 0.5f) * 500.0f), arg0->vwork[1].z, Rand_ZeroOne() + 1.0f);
                            }
                            func_8007B344(arg0->vwork[1].x, arg0->vwork[1].y, arg0->vwork[1].z, 20.0f, 5);
                            func_8007A6F0(&sp68, 0x2903B009);
                        } else {
                            func_8007A6F0(&sp68, 0x29034003);
                        }
                    }
                }
                break;
        }
        arg0->dmgType = 0;
    }
}

void func_i6_8018D9C0(Boss* arg0) {

    switch (arg0->actionState) {
        case 2:
            arg0->actionState = 3;
            break;
        case 3:
            arg0->actionState = 4;
            break;
        case 4:
            arg0->actionState = 5;
            arg0->timer_050 = 30;
            break;
        case 5:
            arg0->actionState = 6;
            arg0->timer_050 = 40;
            break;
        case 6:
            arg0->actionState = 17;
            arg0->timer_050 = 180;
            arg0->fwork[16] = 0.0f;
            break;
        case 12:
        case 13:
        case 14:
            arg0->actionState = 7;
            arg0->timer_050 = 150;
            break;
        default:
            arg0->actionState = 2;
            break;
    }
    arg0->fwork[9] = 0.0f;
    arg0->unk_04C = 0;
    arg0->fwork[1] = 0.0f;
    arg0->fwork[4] = 0.0f;
    arg0->fwork[7] = 0.0f;
}


void func_i6_8018DA94(Boss* arg0, Vec3f* arg1) {
    s32 i;

    func_8007BFFC(arg1->x, arg1->y, arg1->z, 0.0f, 0.0f, 0.0f, 10.0f, 10);
    for (i = 0; i < 7; i++) {
        func_800794CC(((Rand_ZeroOne() - 0.5f) * 200.0f) + arg1->x, ((Rand_ZeroOne() - 0.5f) * 200.0f) + arg1->y, arg1->z, (Rand_ZeroOne() * 0.5f) + 1.0f);
    }
    func_8007B344(arg1->x, arg1->y, arg1->z, 10.0f, 5);
    Audio_PlaySfx(0x2903B009, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

extern AnimationHeader D_C00208C;
extern AnimationHeader D_C002654;
extern AnimationHeader D_C002B08;
extern AnimationHeader D_C006F08;
extern AnimationHeader D_C00DE48;
extern AnimationHeader D_C00E598;
extern AnimationHeader D_C017050;
extern AnimationHeader D_C017430;
extern AnimationHeader D_C018BC4;
extern AnimationHeader D_C023B54;
extern AnimationHeader D_C0240D0;
extern AnimationHeader D_C025C00;
extern AnimationHeader D_C029F74;
extern AnimationHeader D_C02E494;
extern AnimationHeader D_C02EDA0;
extern AnimationHeader D_C030244;
extern AnimationHeader D_C033780;
extern AnimationHeader D_C033D98;
extern Vec3f D_i6_801A67B8;
extern Vec3f D_i6_801A7F80;

void func_i6_8018DBF0(Boss* arg0) {
    s32 i;
    s32 var_v0;
    Vec3f spD0[100];
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Effect* var_s1;
    PlayerShot* var_s0_2;
    Boss* boss1;
    Player* player;
    f32 var_fs1;
    f32 var_fv1;
    s16 frameData;
    s32 spA4;
    s32 pad;

    player = &gPlayer[0];
    gBossFrameCount++;
    
    spA4 = arg0->actionState;


    func_i6_801876FC();
    gAmbientR = 10;
    gAmbientG = 0;
    gAmbientB = 20;
    D_8017812C = 0;
    arg0->fwork[19] += 5.0f;
    if (arg0->swork[9] != 0) {
        arg0->swork[9]--;
        Math_SmoothStepToF(&arg0->fwork[17], 1.5f, 0.7f, 0.4f, 0);
    } else {
        Math_SmoothStepToF(&arg0->fwork[17], 1.0f, 0.2f, 0.3f, 0);
    }

    arg0->fwork[18] = arg0->fwork[17];
    if (arg0->swork[10] != 0) {
        arg0->swork[10]--;
        if (arg0->swork[10] < 20) {
            var_v0 = 0x1F;
        } else if (arg0->swork[10] < 30) {
            var_v0 = 7;
        } else if (arg0->swork[10] < 40) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        if (!(gGameFrameCount & var_v0)) {
            func_i6_8018CA50(arg0->vwork[6].x, arg0->vwork[6].y, arg0->vwork[6].z, 0.0f, -30.0f, 0.0f, 30.0f);
            func_i6_8018CA50(arg0->vwork[7].x, arg0->vwork[7].y, arg0->vwork[7].z, 0.0f, -30.0f, 0.0f, 30.0f);
            func_i6_8018CA50(arg0->vwork[8].x, arg0->vwork[8].y, arg0->vwork[8].z, -30.0f, 0.0f, 0.0f, 30.0f);
            func_i6_8018CA50(arg0->vwork[9].x, arg0->vwork[9].y, arg0->vwork[9].z, 30.0f, 0.0f, 0.0f, 30.0f);
        }
    }
    Math_SmoothStepToF(&arg0->fwork[20], 0.0f, 1.0f, 0.1f, 0.01f);
    Math_SmoothStepToF(&arg0->fwork[21], 0.0f, 1.0f, 0.05f, 0.001f);
    func_i6_8018D2B0(arg0);
    arg0->swork[7] = 0;
    arg0->fwork[14] = arg0->fwork[15] = 0.0f;
    if (arg0->actionState >= 2) {
        gBlurAlpha = 0x80;
    }

    for (i = 0; i < 4; i++) {
        if (arg0->swork[i] > 0) {
            arg0->swork[i]--;
        }
    }
    Math_SmoothStepToF(&arg0->obj.pos.z, gPlayer[0].pos.z + arg0->fwork[6], arg0->fwork[8], arg0->fwork[7], 0);
    Math_SmoothStepToF(&arg0->obj.pos.x, arg0->fwork[0], arg0->fwork[2], arg0->fwork[1], 0);
    Math_SmoothStepToF(&arg0->obj.pos.y, arg0->fwork[3], arg0->fwork[5], arg0->fwork[4], 0);
    Math_SmoothStepToF(&arg0->fwork[11], 0.0f, 0.1f, 2.0f, 0);
    Math_SmoothStepToF(&arg0->fwork[12], 0.0f, 0.1f, 2.0f, 0);
    Math_SmoothStepToF(&arg0->fwork[13], 0.0f, 0.1f, 2.0f, 0);
    if (player->unk_234 != 0) {
        spCC = gPlayer[0].pos.x - arg0->vwork[2].x;
        spC8 = gPlayer[0].pos.y - arg0->vwork[2].y;
        spC4 = gPlayer[0].unk_138 - arg0->vwork[2].z;
        var_fs1 = Math_RadToDeg(Math_Atan2F(spCC, spC4));
        var_fv1 = Math_RadToDeg(Math_Atan2F(spC8, sqrtf(SQ(spCC) + SQ(spC4))));

        if ((var_fs1 > 30.0f) && (var_fs1 < 180.0f)) {
            var_fs1 = 30.0f;
        }
        if ((var_fs1 < 330.0f) && (var_fs1 > 180.0f)) {
            var_fs1 = 330.0f;
        }
        if ((var_fv1 > 30.0f) && (var_fv1 < 180.0f)) {
            var_fv1 = 30.0f;
        }
        if ((var_fv1 < 330.0f) && (var_fv1 > 180.0f)) {
            var_fv1 = 330.0f;
        }
    } else {
        var_fs1 = 0.0f;
        var_fv1 = 345.0f;
    }
    Math_SmoothStepToAngle(&arg0->vwork[4].x, var_fv1, 0.5f, 5.0f, 0);
    Math_SmoothStepToAngle(&arg0->vwork[4].y, var_fs1, 0.5f, 5.0f, 0);
    if (player->unk_234 != 0) {
        spCC = gPlayer[0].pos.x - arg0->vwork[3].x;
        spC8 = gPlayer[0].pos.y - arg0->vwork[3].y;
        spC4 = gPlayer[0].unk_138 - arg0->vwork[3].z;
        var_fs1 = Math_RadToDeg(Math_Atan2F(spCC, spC4));
        var_fv1 = Math_RadToDeg(Math_Atan2F(spC8, sqrtf(SQ(spCC) + SQ(spC4))));
        if ((var_fs1 > 30.0f) && (var_fs1 < 180.0f)) {
            var_fs1 = 30.0f;
        }
        if ((var_fs1 < 330.0f) && (var_fs1 > 180.0f)) {
            var_fs1 = 330.0f;
        }
        if ((var_fv1 > 30.0f) && (var_fv1 < 180.0f)) {
            var_fv1 = 30.0f;
        }
        if ((var_fv1 < 330.0f) && (var_fv1 > 180.0f)) {
            var_fv1 = 330.0f;
        }
    } else {
        var_fs1 = 0.0f;
        var_fv1 = 345.0f;
    }
    Math_SmoothStepToAngle(&arg0->vwork[5].x, var_fv1, 0.5f, 5.0f, 0);
    Math_SmoothStepToAngle(&arg0->vwork[5].y, var_fs1, 0.5f, 5.0f, 0);
    switch (arg0->actionState) {
        case 0:
            arg0->fwork[8] = 0.1f;
            arg0->fwork[7] = 50.0f;
            arg0->actionState = 1;
            arg0->timer_050 = 60;
            arg0->timer_052 = 80;
            arg0->timer_054 = 150;
            arg0->fwork[9] = 1.0f;
            /* fallthrough */
        case 1:
            arg0->timer_05A = 100;
            if (arg0->timer_054 == 65) {
                Audio_PlaySfx(0x1940306E, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_050 != 0) {
                arg0->fwork[6] = -3000.0f;
            } else {
                arg0->fwork[6] = -1000.0f;
                Math_SmoothStepToF(&D_i6_801A7F5C, gLight1R, 1.0f, 4.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F64, gLight1G, 1.0f, 3.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F6C, gLight1B, 1.0f, 3.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F74, gAmbientR, 1.0f, 2.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F7C, gAmbientG, 1.0f, 2.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A8430, gAmbientB, 1.0f, 2.0f, 0.0f);
            }
            Math_SmoothStepToF(&D_800C9C30, 32.0f, 1.0f, 0.5f, 0.0f);
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.2f, 3.0f, 0);
            arg0->fwork[8] = 0.1f;
            Math_SmoothStepToF(&arg0->fwork[7], 200.0f, 1.0f, 10.0f, 0);
            if (arg0->timer_052 == 0) {
                arg0->unk_04C++;
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C002B08)) {
                    arg0->unk_04C = 0;
                }
                frameData = Animation_GetFrameData(&D_C002B08, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            } else {
                if (arg0->timer_052 < 0x10) {
                    arg0->unk_04C++;
                    if (arg0->unk_04C >= Animation_GetFrameCount(&D_C033D98)) {
                        arg0->unk_04C = Animation_GetFrameCount(&D_C033D98) - 1;
                    }
                }
                frameData = Animation_GetFrameData(&D_C033D98, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
                if (arg0->timer_052 == 1) {
                    arg0->unk_04C = 0;
                }
            }
            Math_SmoothStepToF(&arg0->fwork[9], 0.2f, 1.0f, 0.01f, 0);
            if (arg0->timer_054 == 0) {
                arg0->actionState = 2;
                arg0->unk_04C = 0;
                arg0->fwork[7] = arg0->fwork[9] = 0.0f;
                arg0->vel.z = -20.0f;
            }
            break;
        case 2:
            arg0->fwork[6] = -4000.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 30.0f, 1.0f, 5.0f, 0);
            arg0->fwork[0] = 0.0f;
            arg0->fwork[2] = 0.05f;
            arg0->fwork[3] = 0.0f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 10.0f, 1.0f, 0.5f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 10.0f, 1.0f, 0.5f, 0);
            Math_SmoothStepToF(&arg0->fwork[9], 0.7f, 1.0f, 0.005f, 0);
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C033780)) {
                func_i6_8018D9C0(arg0);
            }
            frameData = Animation_GetFrameData(&D_C033780, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            break;
        case 3:
            if (arg0->swork[4] < 0) {
                func_i6_8018D9C0(arg0);
            } else {
                arg0->fwork[0] = player->pos.x;
                arg0->fwork[3] = player->pos.y + 1000.0f;
                if (arg0->unk_04C == 60) {
                    Audio_PlaySfx(0x1940306A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (arg0->unk_04C > 60) {
                    if (arg0->unk_04C == 76) {
                        arg0->fwork[7] = 0.0f;
                    }
                    if (arg0->unk_04C > 76) {
                        arg0->fwork[6] = -2500.0f;
                        arg0->fwork[8] = 0.1f;
                        Math_SmoothStepToF(&arg0->fwork[7], 100.0f, 1.0f, 10.0f, 0);
                    } else {
                        arg0->fwork[6] = -1500.0f;
                        arg0->fwork[8] = 0.3f;
                        Math_SmoothStepToF(&arg0->fwork[7], 200.0f, 1.0f, 40.0f, 0);
                    }
                    arg0->fwork[2] = 0.05f;
                    arg0->fwork[5] = 0.05f;
                    Math_SmoothStepToF(&arg0->fwork[1], 2.0f, 1.0f, 0.5f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 2.0f, 1.0f, 0.5f, 0);
                    arg0->swork[7] = 1;
                    arg0->fwork[14] = -100.0f;
                    arg0->fwork[15] = -50.0f;
                } else {
                    arg0->fwork[6] = -4000.0f;
                    arg0->fwork[8] = 0.05f;
                    Math_SmoothStepToF(&arg0->fwork[7], 30.0f, 1.0f, 2.0f, 0);
                    arg0->fwork[2] = 0.1f;
                    arg0->fwork[5] = 0.1f;
                    arg0->fwork[14] = 50.0f;
                    Math_SmoothStepToF(&arg0->fwork[1], 20.0f, 1.0f, 1.0f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 20.0f, 1.0f, 1.0f, 0);
                }
                Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
                arg0->unk_04C++;
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C029F74)) {
                    func_i6_8018D9C0(arg0);
                }
                frameData = Animation_GetFrameData(&D_C029F74, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            }
            break;
        case 4:
            if (arg0->swork[4] < 0) {
                func_i6_8018D9C0(arg0);
            } else {
                arg0->fwork[0] = player->pos.x;
                arg0->fwork[3] = player->pos.y;
                if (arg0->unk_04C == 55) {
                    Audio_PlaySfx(0x1940306A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (arg0->unk_04C > 55) {
                    arg0->fwork[6] = -1500.0f;
                    arg0->fwork[8] = 0.3f;
                    Math_SmoothStepToF(&arg0->fwork[7], 200.0f, 1.0f, 40.0f, 0);
                    arg0->swork[7] = 1;
                    arg0->fwork[2] = 0.05f;
                    arg0->fwork[5] = 0.05f;
                    arg0->fwork[14] = -100.0f;
                    Math_SmoothStepToF(&arg0->fwork[1], 2.0f, 1.0f, 1.0f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 2.0f, 1.0f, 1.0f, 0);
                } else {
                    arg0->fwork[6] = -4000.0f;
                    arg0->fwork[8] = 0.05f;
                    Math_SmoothStepToF(&arg0->fwork[7], 30.0f, 1.0f, 2.0f, 0);
                    arg0->fwork[2] = 0.1f;
                    arg0->fwork[5] = 0.1f;
                    arg0->fwork[14] = 50.0f;
                    Math_SmoothStepToF(&arg0->fwork[1], 30.0f, 1.0f, 1.0f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 1.0f, 0);
                }
                Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
                arg0->unk_04C++;
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C02E494)) {
                    func_i6_8018D9C0(arg0);
                }
                frameData = Animation_GetFrameData(&D_C02E494, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            }
            break;
        case 5:
            if (arg0->swork[5] < 0) {
                func_i6_8018D9C0(arg0);
            } else {
                arg0->fwork[0] = player->pos.x;
                arg0->fwork[3] = player->pos.y + 500.0f;
                if (arg0->timer_050 != 0) {
                    arg0->fwork[6] = -4000.0f;
                    arg0->fwork[8] = 0.05f;
                    Math_SmoothStepToF(&arg0->fwork[7], 30.0f, 1.0f, 5.0f, 0);
                    arg0->fwork[2] = 0.1f;
                    arg0->fwork[5] = 0.1f;
                    Math_SmoothStepToF(&arg0->fwork[1], 30.0f, 1.0f, 2.0f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 2.0f, 0);
                } else {
                    arg0->unk_04C++;
                    arg0->fwork[6] = -1400.0f;
                    arg0->fwork[8] = 0.2f;
                    Math_SmoothStepToF(&arg0->fwork[7], 200.0f, 1.0f, 40.0f, 0);
                    arg0->fwork[2] = 0.05f;
                    arg0->fwork[5] = 0.05f;
                    Math_SmoothStepToF(&arg0->fwork[1], 2.0f, 1.0f, 1.0f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 2.0f, 1.0f, 1.0f, 0);
                    if (arg0->unk_04C == 5) {
                        Audio_PlaySfx(0x1940306B, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    arg0->swork[7] = 1;
                    arg0->fwork[14] = 100.0f;
                }
                Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C030244)) {
                    func_i6_8018D9C0(arg0);
                }
                frameData = Animation_GetFrameData(&D_C030244, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            }
            break;
        case 6:
            if ((arg0->swork[4] < 0) || (arg0->swork[5] < 0)) {
                func_i6_8018D9C0(arg0);
            } else {
                if (arg0->timer_050 == 1) {
                    Audio_PlaySfx(0x1940306C, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (arg0->timer_050 != 0) {
                    arg0->fwork[6] = -4000.0f;
                    arg0->fwork[8] = 0.05f;
                    Math_SmoothStepToF(&arg0->fwork[7], 40.0f, 1.0f, 3.0f, 0);
                    arg0->fwork[2] = 0.05f;
                    arg0->fwork[5] = 0.05f;
                    Math_SmoothStepToF(&arg0->fwork[1], 30.0f, 1.0f, 1.0f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 1.0f, 0);
                    arg0->fwork[0] = player->pos.x;
                    arg0->fwork[3] = player->pos.y + 300.0f;
                } else {
                    arg0->unk_04C++;
                    arg0->fwork[6] = -2000.0f;
                    arg0->fwork[8] = 0.2f;
                    Math_SmoothStepToF(&arg0->fwork[7], 50.0f, 1.0f, 10.0f, 0);
                    arg0->fwork[2] = 0.1f;
                    arg0->fwork[5] = 0.1f;
                    Math_SmoothStepToF(&arg0->fwork[1], 10.0f, 1.0f, 1.0f, 0);
                    Math_SmoothStepToF(&arg0->fwork[4], 10.0f, 1.0f, 1.0f, 0);
                    arg0->swork[7] = 1;
                    if (arg0->unk_04C > 18) {
                        Math_SmoothStepToF(&arg0->fwork[11], 110.0f, 1.0f, 18.0f, 0);
                        Math_SmoothStepToF(&arg0->fwork[12], 20.0f, 1.0f, 3.6f, 0);
                        Math_SmoothStepToF(&arg0->fwork[13], 80.0f, 1.0f, 15.0f, 0);
                    }
                    if (arg0->unk_04C == 25) {
                        Audio_PlaySfx(0x09008015, &D_i6_801A67B8, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
                Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C02EDA0)) {
                    func_i6_8018D9C0(arg0);
                }
                frameData = Animation_GetFrameData(&D_C02EDA0, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            }
            break;
        case 7:
            if (arg0->swork[5] < 0) {
                func_i6_8018D9C0(arg0);
            } else {
                if (arg0->unk_04C == 0x30) {
                    Audio_PlaySfx(0x3103108B, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (arg0->unk_04C > 48) {
                    func_i6_8018D0D8(arg0);
                }
                if (arg0->unk_04C > 45) {
                    Math_SmoothStepToF(&arg0->fwork[20], 1.0f, 1.0f, 0.2f, 0.01f);
                    Math_SmoothStepToF(&arg0->fwork[21], 1.0f, 0.5f, 0.15f, 0.01f);
                    if (!(gGameFrameCount & 1)) {
                        gAmbientR = 200;
                        gAmbientG = 90;
                        gAmbientB = 255;
                    } else {
                        gAmbientR = 100;
                        gAmbientG = 45;
                        gAmbientB = 255 / 2; // could also just be 127
                    }
                } else {
                    Math_SmoothStepToF(&arg0->fwork[20], 0.15f, 1.0f, 0.15f, 0.01f);
                    Math_SmoothStepToF(&arg0->fwork[21], 0.5f, 1.0f, 0.11f, 0.001f);
                }
                arg0->fwork[0] = player->pos.x + 500.0f;
                arg0->fwork[3] = player->pos.y + 750.0f;
                arg0->fwork[6] = -5000.0f;
                arg0->fwork[8] = 0.05f;
                Math_SmoothStepToF(&arg0->fwork[7], 60.0f, 1.0f, 5.0f, 0);
                arg0->fwork[2] = 0.05f;
                arg0->fwork[5] = 0.05f;
                Math_SmoothStepToF(&arg0->fwork[1], 5.0f, 1.0f, 2.0f, 0);
                Math_SmoothStepToF(&arg0->fwork[4], 5.0f, 1.0f, 2.0f, 0);
                Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
                arg0->unk_04C++;
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C018BC4)) {
                    arg0->unk_04C = Animation_GetFrameCount(&D_C018BC4) - 1;
                    if (arg0->timer_050 == 0) {
                        func_i6_8018D9C0(arg0);
                    }
                }
                frameData = Animation_GetFrameData(&D_C018BC4, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            }
            break;
        case 12:
            if ((arg0->swork[4] < 0) || (arg0->swork[5] < 0)) {
                arg0->actionState = 0xE;
                arg0->unk_04C = 0;
                arg0->fwork[9] = 0.0f;
            } else {
                arg0->fwork[6] = -3000.0f;
                arg0->fwork[8] = 0.05f;
                Math_SmoothStepToF(&arg0->fwork[7], 40.0f, 1.0f, 2.0f, 0);
                arg0->fwork[2] = 0.05f;
                arg0->fwork[5] = 0.05f;
                Math_SmoothStepToF(&arg0->fwork[1], 20.0f, 1.0f, 1.0f, 0);
                Math_SmoothStepToF(&arg0->fwork[4], 20.0f, 1.0f, 1.0f, 0);
                arg0->fwork[0] = player->pos.x;
                arg0->fwork[3] = player->pos.y;
                Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
                arg0->unk_04C++;
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C025C00)) {
                    arg0->unk_04C = Animation_GetFrameCount(&D_C025C00) - 1;
                    if (arg0->timer_050 == 0) {
                        func_i6_8018D9C0(arg0);
                    }
                }
                frameData = Animation_GetFrameData(&D_C025C00, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            }
            break;
        case 13:
            if ((arg0->swork[4] < 0) || (arg0->swork[5] < 0)) {
                arg0->actionState = 14;
                arg0->unk_04C = 0;
                arg0->fwork[9] = 0.0f;
            } else {
                arg0->fwork[6] = -3000.0f;
                arg0->fwork[8] = 0.05f;
                Math_SmoothStepToF(&arg0->fwork[7], 20.0f, 1.0f, 2.0f, 0);
                arg0->fwork[2] = 0.05f;
                arg0->fwork[5] = 0.05f;
                Math_SmoothStepToF(&arg0->fwork[1], 20.0f, 1.0f, 1.0f, 0);
                Math_SmoothStepToF(&arg0->fwork[4], 20.0f, 1.0f, 1.0f, 0);
                arg0->fwork[0] = player->pos.x;
                arg0->fwork[3] = player->pos.y;
                Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
                arg0->unk_04C++;
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C006F08)) {
                    arg0->unk_04C = Animation_GetFrameCount(&D_C006F08) - 1;
                    if (arg0->timer_050 == 0) {
                        func_i6_8018D9C0(arg0);
                    }
                }
                frameData = Animation_GetFrameData(&D_C006F08, arg0->unk_04C, spD0);
                Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            }
            break;
        case 14:
            arg0->fwork[6] = -3000.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 20.0f, 1.0f, 2.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 20.0f, 1.0f, 1.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 20.0f, 1.0f, 1.0f, 0);
            arg0->fwork[0] = player->pos.x;
            arg0->fwork[3] = player->pos.y;
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C002654)) {
                arg0->unk_04C = 0;
                if (arg0->timer_050 == 0) {
                    func_i6_8018D9C0(arg0);
                }
            }
            frameData = Animation_GetFrameData(&D_C002654, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            break;
        case 15:
            if (arg0->swork[8] == 1) {
                arg0->fwork[6] = 100.0f;
            } else {
                arg0->fwork[6] = -3000.0f;
            }
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 60.0f, 1.0f, 5.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 20.0f, 1.0f, 1.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 20.0f, 1.0f, 1.0f, 0);
            arg0->fwork[0] = 0.0f;
            arg0->fwork[3] = 0.0f;
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
            if (arg0->unk_04C == 15) {
                Audio_PlaySfx(0x29022088, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if ((arg0->unk_04C > 35) && (arg0->unk_04C < 150) && !(arg0->unk_04C & 0x1F)) {
                Audio_PlaySfx(0x29022089, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if (player->state_1C8 == PLAYERSTATE_1C8_11) {
                    D_Timer_80177BD0[0] = 10;
                }
            }
            if ((arg0->unk_04C == 20) && (player->state_1C8 == PLAYERSTATE_1C8_11)) {
                player->unk_234 = 0;
                for(i = 0; i < ARRAY_COUNT(gEffects); i++) {
                    if (gEffects[i].obj.id == 0x18C) {
                        Object_Kill(&gEffects[i].obj, &gEffects[i].sfxPos);
                    }
                }
            }
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C00DE48)) {
                arg0->unk_04C = Animation_GetFrameCount(&D_C00DE48) - 1;
                if (arg0->timer_050 == 0) {
                    arg0->actionState = 16;
                    arg0->unk_04C = 0;
                    arg0->timer_050 = 30;
                    arg0->fwork[9] = 0.0f;
                }
            }
            frameData = Animation_GetFrameData(&D_C00DE48, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            if ((arg0->unk_04C == 45) && (arg0->swork[8] == 2)) {
                arg0->actionState = 18;
                arg0->unk_04C = 0;
                arg0->unk_044 = 0;
                arg0->timer_050 = 40;
                arg0->fwork[9] = 0.0f;
            }
            break;
        case 16:
            if (arg0->swork[8] == 1) {
                arg0->fwork[6] = 100.0f;
            } else {
                arg0->fwork[6] = -3000.0f;
            }
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 50.0f, 1.0f, 2.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 20.0f, 1.0f, 1.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 20.0f, 1.0f, 1.0f, 0);
            arg0->fwork[0] = player->pos.x;
            arg0->fwork[3] = player->pos.y + 100.0f;
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
            if (arg0->timer_050 == 0) {
                arg0->unk_04C++;
                if (arg0->unk_04C >= Animation_GetFrameCount(&D_C023B54)) {
                    arg0->unk_04C = Animation_GetFrameCount(&D_C023B54) - 1;
                    func_i6_8018D9C0(arg0);
                }
            }
            frameData = Animation_GetFrameData(&D_C023B54, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            if (arg0->unk_04C == 10) {
                Audio_PlaySfx(0x3140208A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if ((arg0->unk_04C == 13) && (player->state_1C8 == PLAYERSTATE_1C8_11)) {
                player->unk_234 = 1;
                player->unk_1D0 = 1;
                player->timer_1F8 = 60;
                player->timer_498 = 50;
                arg0->swork[8] = 0;
                D_Timer_80177BD0[0] = 30;
                if (player->wings.rightState == 2) {
                    gRightWingHealth[0] = 0;
                    player->wings.rightState = 1;
                    func_i6_8018C8D4(arg0->obj.pos.x, arg0->obj.pos.y - 200.0f, arg0->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, 10.0f, 8);
                }
                if (player->wings.leftState == 2) {
                    gLeftWingHealth[0] = 0;
                    player->wings.leftState = 1;
                    func_i6_8018C8D4(arg0->obj.pos.x, arg0->obj.pos.y - 200.0f, arg0->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, 10.0f, 9);
                }
            }
            if (arg0->unk_04C >= 10) {
                if (arg0->unk_04C < 20) {
                    for(i = 0; i < 10; i++) {
                        func_i6_8018C8D4(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 100.0f), (arg0->obj.pos.y - 200.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), arg0->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 50.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, (Rand_ZeroOne() * 5.0f) + 5.0f, (s32) ((f64) Rand_ZeroOne() * 7.9));
                    }
                }
            }
            break;
        case 17:
            // FAKE!!
            if (1){}if (1){}if (1){}if (1){}
            Math_SmoothStepToF(&D_801779A8[gMainController], 50.0f, 1.0f, 1.8f, 0.0f);
            arg0->timer_056 = 50;

            if ((arg0->timer_050 > 70) && (arg0->timer_050 < 1000) && !(gGameFrameCount & 3)) {
                func_i6_8018C734(gPlayer[0].camEye.x + ((Rand_ZeroOne() - 0.5f) * 3000.0f), gPlayer[0].camEye.y + ((Rand_ZeroOne() - 0.5f) * 3000.0f), gPlayer[0].camEye.z - D_80177D20, (s32) ((f64) Rand_ZeroOne() * 7.9));
            }
            if (arg0->timer_050 > 0) {
                var_s0_2 = gPlayerShots;
                var_s1 = gEffects;
                for (i = 0; i < 16; i++, var_s0_2++) {
                    Math_SmoothStepToF(&var_s0_2->obj.pos.x, arg0->obj.pos.x, 0.5f, arg0->fwork[16], 0);
                    Math_SmoothStepToF(&var_s0_2->obj.pos.y, arg0->obj.pos.y - 100.0f, 0.5f, arg0->fwork[16], 0);
                    Math_SmoothStepToF(&var_s0_2->vel.x, 0.0f, 0.9f, 5.0f, 0);
                    Math_SmoothStepToF(&var_s0_2->vel.y, 0.0f, 0.9f, 5.0f, 0);
                    if ((var_s0_2->obj.id == 3) && (var_s0_2->obj.status == 1) && (var_s0_2->unk_5C == 0) && (fabsf(var_s0_2->obj.pos.x - arg0->obj.pos.x) < 200.0f) && (fabsf(var_s0_2->obj.pos.y - (arg0->obj.pos.y - 100.0f)) < 200.0f) && (fabsf(var_s0_2->obj.pos.z - (arg0->obj.pos.z - 200.0f)) < 100.0f)) {
                        Object_Kill(&var_s0_2->obj, &var_s0_2->sfxPos);
                        arg0->actionState = 0xF;
                        arg0->fwork[9] = 0.2f;
                        arg0->unk_04C = 0;
                        arg0->swork[8] = 2;
                        Audio_PlaySfx(0x1940306D, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    } 
                }
                for (i = 0; i < ARRAY_COUNT(gEffects); i++, var_s1++) {
                    if ((var_s1->obj.status != 0) && (var_s1->obj.id != 0x18C)) {
                        Math_SmoothStepToF(&var_s1->obj.pos.x, arg0->obj.pos.x, 0.5f, arg0->fwork[16], 0);
                        Math_SmoothStepToF(&var_s1->obj.pos.y, arg0->obj.pos.y - 100.0f, 0.5f, arg0->fwork[16], 0);
                        Math_SmoothStepToF(&var_s1->obj.pos.z, arg0->obj.pos.z - 200.0f, 0.5f, arg0->fwork[16], 0);
                        Math_SmoothStepToF(&var_s1->vel.x, 0.0f, 0.9f, 5.0f, 0);
                        Math_SmoothStepToF(&var_s1->vel.y, 0.0f, 0.9f, 5.0f, 0);
                        Math_SmoothStepToF(&var_s1->vel.z, 0.0f, 0.9f, 10.0f, 0);
                        if ((fabsf(var_s1->obj.pos.x - arg0->obj.pos.x) < 200.0f) && (fabsf(var_s1->obj.pos.y - (arg0->obj.pos.y - 100.0f)) < 200.0f) && (fabsf(var_s1->obj.pos.z - (arg0->obj.pos.z - 200.0f)) < 100.0f)) {
                            Object_Kill(&var_s1->obj, &var_s1->sfxPos);
                        }
                    }
                }
                Math_SmoothStepToF(&player->pos.x, arg0->obj.pos.x, 0.1f, arg0->fwork[16], 0);
                Math_SmoothStepToF(&player->pos.y, arg0->obj.pos.y - 150.0f, 0.1f, arg0->fwork[16], 0);
                Math_SmoothStepToF(&arg0->fwork[16], 35.0f, 1.0f, 0.5f, 0);
                if (fabsf(player->unk_138 - arg0->obj.pos.z) < 200.0f) {
                    arg0->actionState = 15;
                    arg0->swork[8] = 1;
                    arg0->fwork[9] = 0.2f;
                    arg0->unk_04C = 0;
                    if (player->state_1C8 == PLAYERSTATE_1C8_3) {
                        player->state_1C8 = PLAYERSTATE_1C8_11;
                        player->unk_1D0 = 0;
                    }
                    break;
                }
            }
            arg0->fwork[8] = 0.1f;
            arg0->fwork[2] = 0.1f;
            arg0->fwork[5] = 0.1f;
            arg0->fwork[6] = -300.0f;
            Math_SmoothStepToF(&arg0->fwork[1], 20.0f, 1.0f, 1.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 1.0f, 0);
            arg0->fwork[0] = 0.0f;
            arg0->fwork[3] = 150.0f;
            Math_SmoothStepToF(&arg0->fwork[7], 20.0f, 0.1f, 0.1f, 0);
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.01f, 0);
            if (arg0->unk_04C == 10) {
                Audio_PlaySfx(0x31022087, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C0240D0)) {
                arg0->unk_04C = 0;
                if (arg0->timer_050 == 0) {
                    arg0->actionState = 15;
                    arg0->swork[8] = 0;
                    arg0->fwork[9] = 0.0f;
                }
            }
            frameData = Animation_GetFrameData(&D_C0240D0, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);

            break;
        case 18:
            arg0->fwork[6] = -3000.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 70.0f, 1.0f, 7.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 30.0f, 1.0f, 3.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 3.0f, 0);
            arg0->fwork[0] = 0.0f;
            arg0->fwork[3] = 0.0f;
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.05f, 0);
            switch (arg0->unk_044) {
                case 0:
                    if (arg0->timer_050 != 0) {
                        frameData = Animation_GetFrameData(&D_C00DE48, 45, spD0);
                        Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
                    } else {
                        arg0->unk_044 = 1;
                        arg0->timer_050 = 30;
                        arg0->swork[9] = 20;
                        arg0->fwork[9] = 0.0f;
                        func_8001CE28(0, &arg0->sfxPos);
                        arg0->timer_05C = 50;
                    }
                    break;
                case 1:
                    if (arg0->timer_050 != 0) {
                        frameData = Animation_GetFrameData(&D_C017430, 0, spD0);
                        Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
                    } else {
                        arg0->unk_044 = 2;
                        arg0->timer_050 = 70;
                        arg0->fwork[9] = 0.0f;
                        Audio_PlaySfx(0x1940307C, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    if (arg0->timer_050 == 15) {
                        arg0->swork[10] = 80;
                    }
                    break;
                case 2:
                    if (arg0->timer_050 == 0) {
                        func_i6_8018D9C0(arg0);
                    }
                    arg0->unk_04C++;
                    if (arg0->unk_04C >= Animation_GetFrameCount(&D_C00E598)) {
                        arg0->unk_04C = 0;
                    }
                    frameData = Animation_GetFrameData(&D_C00E598, arg0->unk_04C, spD0);
                    Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
                    break;
            }
            break;
        case 20:
            arg0->fwork[6] = -3000.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 70.0f, 1.0f, 7.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 50.0f, 1.0f, 5.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 50.0f, 1.0f, 5.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.05f, 0);
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C017050)) {
                func_i6_8018D9C0(arg0);
            }
            frameData = Animation_GetFrameData(&D_C017050, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            break;
        case 30:
            arg0->fwork[6] = -3000.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 70.0f, 1.0f, 7.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 30.0f, 1.0f, 3.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 3.0f, 0);
            arg0->fwork[0] = 0.0f;
            arg0->fwork[3] = 0.0f;
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.05f, 0);
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C017050)) {
                arg0->unk_04C = 0;
            }
            frameData = Animation_GetFrameData(&D_C017050, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            if (!(gGameFrameCount & 1)) {
                func_8007C484(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.z, 0.0f, 0.0f, arg0->vel.z, (Rand_ZeroOne() * 0.2f) + 0.2f, 0);
            }
            if (D_80177A80 >= 0x33) {
                func_8007D0E0(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.z, (Rand_ZeroOne() * 3.0f) + 3.0f);
            }

            D_80177A80++;
            
            switch (D_80177A80) {
                case 60:
                    arg0->swork[17] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[19]);
                    break;
                case 70:
                    arg0->swork[19] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[21]);
                    break;
                case 80:
                    arg0->swork[11] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[13]);
                    break;
                case 90:
                    arg0->swork[12] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[14]);
                    break;
                case 100:
                    arg0->swork[22] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[24]);
                    break;
                case 110:
                    arg0->swork[23] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[25]);
                    break;
                case 120:
                    arg0->swork[18] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[19]);
                    arg0->actionState = 9;
                    arg0->health = 100;
                    arg0->timer_050 = 50;
                    arg0->fwork[9] = 0.0f;
                    Audio_PlaySfx(0x11030073, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_8001D444(0, 0x8021, 0, 0xFF);
                    break;
            }
            break;
        case 9:
            arg0->fwork[6] = -3000.0f;
            if (arg0->timer_050 == 0) {
                arg0->actionState = 10;
                arg0->timer_050 = 100;
            }
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 60.0f, 1.0f, 3.0f, 0);
            arg0->fwork[0] = player->pos.x;
            arg0->fwork[3] = player->pos.y;
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.05f, 0);
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C00208C)) {
                arg0->unk_04C = 0;
            }
            frameData = Animation_GetFrameData(&D_C00208C, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);

            func_8007C484(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 700.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 700.0f), arg0->obj.pos.z, 0.0f, 0.0f, gPlayer[0].vel.z, (Rand_ZeroOne() * 0.15f) + 0.15f, 0);
            break;
        case 10:
            arg0->fwork[6] = 0.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 60.0f, 1.0f, 3.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.05f, 0);
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C00208C)) {
                arg0->unk_04C = 0;
            }
            frameData = Animation_GetFrameData(&D_C00208C, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);

            func_8007C484(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 700.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 700.0f), arg0->obj.pos.z, 0.0f, 0.0f, gPlayer[0].vel.z, (Rand_ZeroOne() * 0.15f) + 0.15f, 0);
            if (arg0->timer_050 == 0) {
                arg0->actionState = 9;
                arg0->timer_050 = 130;
            }
            break;
        case 31:
            arg0->obj.rot.x += 1.0f;
            arg0->obj.rot.y += 0.3f;
            arg0->obj.rot.z += 0.7f;
            arg0->fwork[6] = -3000.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 70.0f, 1.0f, 7.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 30.0f, 1.0f, 3.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 3.0f, 0);
            arg0->fwork[0] = 0.0f;
            arg0->fwork[3] = 0.0f;
            if (!(gGameFrameCount & 1)) {
                func_8007C484(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.z, 0.0f, 0.0f, arg0->vel.z, (Rand_ZeroOne() * 0.2f) + 0.2f, 0);
            }
            func_8007D0E0(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.z, (Rand_ZeroOne() * 5.0f) + 5.0f);
            break;
        case 32:
            arg0->fwork[6] = -3000.0f;
            arg0->fwork[8] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[7], 70.0f, 1.0f, 7.0f, 0);
            arg0->fwork[2] = 0.05f;
            arg0->fwork[5] = 0.05f;
            Math_SmoothStepToF(&arg0->fwork[1], 30.0f, 1.0f, 3.0f, 0);
            Math_SmoothStepToF(&arg0->fwork[4], 30.0f, 1.0f, 3.0f, 0);
            arg0->fwork[0] = 0.0f;
            arg0->fwork[3] = 0.0f;
            Math_SmoothStepToF(&arg0->fwork[9], 1.0f, 1.0f, 0.05f, 0);
            arg0->unk_04C++;
            if (arg0->unk_04C >= Animation_GetFrameCount(&D_C017050)) {
                arg0->unk_04C = 0;
            }
            frameData = Animation_GetFrameData(&D_C017050, arg0->unk_04C, spD0);
            Math_SmoothStepToVec3fArray(spD0, &D_i6_801A7F80, 1, frameData, arg0->fwork[9], 100.0f, 0.0f);
            if (!(gGameFrameCount & 1)) {
                func_8007C484(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.z, 0.0f, 0.0f, arg0->vel.z, (Rand_ZeroOne() * 0.2f) + 0.2f, 0);
            }

            if (D_80177A80 > 50) {
                func_8007D0E0(arg0->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f), arg0->obj.pos.z, (Rand_ZeroOne() * 3.0f) + 3.0f);
            }

            D_80177A80++;
            
            switch (D_80177A80) {
                case 60:
                    arg0->swork[17] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[19]);
                    break;
                case 70:
                    arg0->swork[19] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[21]);
                    break;
                case 80:
                    arg0->swork[14] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[16]);
                    break;
                case 90:
                    arg0->swork[13] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[15]);
                    break;
                case 100:
                    func_i6_8018DA94(arg0, &arg0->vwork[13]);
                    break;
                case 110:
                    func_i6_8018DA94(arg0, &arg0->vwork[14]);
                    break;
                case 120:
                    arg0->swork[20] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[22]);
                    break;
                case 130:
                    arg0->swork[21] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[23]);
                    break;
                case 140:
                    arg0->swork[22] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[24]);
                    break;
                case 150:
                    arg0->swork[23] = 2;
                    func_i6_8018DA94(arg0, &arg0->vwork[25]);
                    break;
                case 160:
                    arg0->swork[16] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[18]);
                    break;
                case 170:
                    arg0->swork[15] = 1;
                    func_i6_8018DA94(arg0, &arg0->vwork[17]);
                    break;
                case 173:
                    func_8007A6F0(&arg0->obj.pos, 0x2940C00A);
                    func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 100.0f, 4);
                    break;
                case 180:
                    boss1 = &gBosses[1];
                    Boss_Initialize(boss1);
                    boss1->obj.status = 1;
                    boss1->obj.id = 0x141;
                    boss1->obj.pos.x = arg0->obj.pos.x;
                    boss1->obj.pos.y = arg0->obj.pos.y;
                    boss1->obj.pos.z = arg0->obj.pos.z;
                    boss1->swork[1] = 100;
                    boss1->actionState = 10;
                    boss1->timer_050 = 180;
                    boss1->unk_3F8 = 5.0f;
                    Object_SetInfo(&boss1->info, boss1->obj.id);
                    Object_Kill(&arg0->obj, &arg0->sfxPos);
                    D_80177AB0 = 3;
                    func_i6_80189098(arg0);
                    func_800BA808(gMsg_ID_19330, RCID_ANDROSS_RED);
                    break;
            }
            Math_SmoothStepToF(&D_800C9C30, 0.0f, 1.0f, 0.3f, 0.0f);
            break;
    }
    if (arg0->swork[4] >= 0) {
        arg0->info.hitbox[13] = arg0->vwork[0].z - arg0->obj.pos.z;
        arg0->info.hitbox[15] = arg0->vwork[0].y - arg0->obj.pos.y;
        arg0->info.hitbox[17] = arg0->vwork[0].x - arg0->obj.pos.x;
        if (arg0->swork[7] != 0) {
            arg0->info.hitbox[14] = 280.0f;
            arg0->info.hitbox[16] = 200.0f;
            arg0->info.hitbox[18] = 200.0f;
        } else {
            arg0->info.hitbox[14] = 100.0f;
            arg0->info.hitbox[16] = 100.0f;
            arg0->info.hitbox[18] = 100.0f;
        }
    } else {
        arg0->info.hitbox[16] = 0.0f;
    }
    if (arg0->swork[5] >= 0) {
        arg0->info.hitbox[19] = arg0->vwork[1].z - arg0->obj.pos.z;
        arg0->info.hitbox[21] = arg0->vwork[1].y - arg0->obj.pos.y;
        arg0->info.hitbox[23] = arg0->vwork[1].x - arg0->obj.pos.x;
        if (arg0->swork[7] != 0) {
            arg0->info.hitbox[20] = 280.0f;
            arg0->info.hitbox[22] = 200.0f;
            arg0->info.hitbox[24] = 200.0f;
        } else {
            arg0->info.hitbox[20] = 100.0f;
            arg0->info.hitbox[22] = 100.0f;
            arg0->info.hitbox[24] = 100.0f;
        }
    } else {
        arg0->info.hitbox[22] = 0.0f;
    }
    arg0->info.hitbox[1] = arg0->vwork[2].z - arg0->obj.pos.z;
    arg0->info.hitbox[3] = arg0->vwork[2].y - arg0->obj.pos.y;
    arg0->info.hitbox[5] = arg0->vwork[2].x - arg0->obj.pos.x;
    arg0->info.hitbox[7] = arg0->vwork[3].z - arg0->obj.pos.z;
    arg0->info.hitbox[9] = arg0->vwork[3].y - arg0->obj.pos.y;
    arg0->info.hitbox[11] = arg0->vwork[3].x - arg0->obj.pos.x;
    if ((spA4 == 17) && (arg0->actionState != 17)) {
        func_8001A55C(&arg0->sfxPos, 0x31022087);
    }
    if ((spA4 == 7) && (arg0->actionState != 7)) {
        func_8001A55C(&arg0->sfxPos, 0x3103108B);
    }
}

extern Gfx D_C002B20;
extern Gfx D_C002F00;
extern Gfx D_C0043D0;
extern Gfx D_C004860;
extern Gfx D_C015740;
extern Gfx D_C022520;
extern Vec3f D_i6_801A67C4;
extern f32 D_i6_801A67D0;
extern f32 D_i6_801A67D4;
extern f32 D_i6_801A67D8;
extern Vec3f D_i6_801A67DC;
extern f32 D_i6_801A67E8;
extern f32 D_i6_801A67EC;
extern f32 D_i6_801A67F0;
extern Vec3f D_i6_801A67F4;

s32 func_i6_801917F0(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* data) {
    Vec3f sp94;
    Vec3f sp88;
    f32 sp84;
    Boss* boss = (Boss*)data;

    sp94 = D_i6_801A67F4;
    sp84 = 1.0f;
    if ((arg0 >= 0xD) && (arg0 < 0x33)) {
        if (boss->actionState < 2) {
            *arg1 = NULL;
        } else {
            RCP_SetupDL(&gMasterDisp, 0x1D);
            gSPTexture(gMasterDisp++, 6600, 6600, 0, G_TX_RENDERTILE, G_ON);
            gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
            if (((arg0 >= 0x17) && (arg0 < 0x21)) || (arg0 == 0x32)) {
                if (boss->swork[5] < 0) {
                    *arg1 = NULL;
                } else if (boss->swork[3] & 1) {
                    RCP_SetupDL(&gMasterDisp, 0x1B);
                    GPC(255, 0, 0, 255);
                }
            } else if (boss->swork[4] < 0) {
                *arg1 = NULL;
            } else if (boss->swork[2] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1B);
                GPC(255, 0, 0, 255);
            }
        }
    } else if (!(boss->timer_05C & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x1D);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x1B);
        GPC(255, 0, 0, 255);
    }
    
    switch (arg0) {
        case 59:
            if (boss->swork[18] == 1) {
                *arg1 = &D_C004860;
            }
            if (boss->swork[18] == 2) {
                *arg1 = NULL;
            }
            break;
        case 3:
            arg3->z -= boss->vwork[4].x;
            arg3->y -= boss->vwork[4].y;
            if (boss->swork[0] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1B);
                GPC(255, 0, 0, 255);
            }
            if (boss->swork[11] != 0) {
                *arg1 = &D_C0043D0;
                RCP_SetupDL(&gMasterDisp, 0x15);
            }
            sp84 = boss->fwork[17];
            break;
        case 4:
            arg3->z -= boss->vwork[5].x;
            arg3->y -= boss->vwork[5].y;
            if (boss->swork[1] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1B);
                GPC(255, 0, 0, 255);
            }
            if (boss->swork[12] != 0) {
                *arg1 = &D_C015740;
                RCP_SetupDL(&gMasterDisp, 0x15);
            }
            sp84 = boss->fwork[17];
            break;
        case 5:
            if (boss->swork[17] == 1) {
                *arg1 = &D_C002B20;
            }
            if (boss->swork[17] == 2) {
                *arg1 = NULL;
            }
            sp84 = boss->fwork[17];
            break;
        case 6:
            if (boss->swork[19] == 1) {
                *arg1 = &D_C002F00;
            }
            if (boss->swork[19] == 2) {
                *arg1 = NULL;
            }
            sp84 = boss->fwork[17];
            break;
        case 1:
            if (boss->swork[14] != 0) {
                *arg1 = NULL;
            }
            break;
        case 2:
            if (boss->swork[13] != 0) {
                *arg1 = NULL;
            }
            break;
        case 7:
            if (boss->swork[20] != 0) {
                *arg1 = NULL;
            }
            sp84 = boss->fwork[18];
            break;
        case 8:
            if (boss->swork[21] != 0) {
                *arg1 = NULL;
            }
            sp84 = boss->fwork[18];
            break;
        case 9:
            if (boss->swork[23] != 0) {
                *arg1 = NULL;
            }
            sp84 = boss->fwork[18];
            break;
        case 10:
            if (boss->swork[22] != 0) {
                *arg1 = NULL;
            }
            sp84 = boss->fwork[18];
            break;
        case 11:
            if (boss->swork[16] != 0) {
                *arg1 = NULL;
            }
            break;
        case 12:
            if (boss->swork[15] != 0) {
                *arg1 = NULL;
            }
            break;
        case 49:
            arg2->x -= boss->fwork[11];
            arg2->y += boss->fwork[12];
            arg2->z += boss->fwork[13];
            Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, 1);
            Matrix_RotateZ(gCalcMatrix, arg3->z * M_DTOR, 1);
            Matrix_RotateY(gCalcMatrix, arg3->y * M_DTOR, 1);
            Matrix_RotateX(gCalcMatrix, arg3->x * M_DTOR, 1);
            if (*arg1 != NULL) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Push(&gCalcMatrix);
                Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(*arg1);
                RCP_SetupDL(&gMasterDisp, 0x29);
                switch (gGameFrameCount & 3) {
                    case 0:
                        GPC(255, 0, 0, 255);
                        break;
                    case 1:
                        GPC(0, 255, 0, 255);
                        break;
                    case 2:
                        GPC(0, 0, 255, 255);
                        break;
                    case 3:
                        GPC(255, 255, 255, 255);
                        break;
                }
                Matrix_Translate(gGfxMatrix, D_i6_801A67DC.x, D_i6_801A67DC.y, D_i6_801A67DC.z, 1);
                Matrix_RotateZ(gGfxMatrix, D_i6_801A67F0 * M_DTOR, 1);
                Matrix_RotateY(gGfxMatrix, D_i6_801A67EC * M_DTOR, 1);
                Matrix_RotateX(gGfxMatrix, D_i6_801A67E8 * M_DTOR, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(&D_C022520);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Pop(&gCalcMatrix);
            }
            return true;
        case 50:
            arg2->x -= boss->fwork[11];
            arg2->y += boss->fwork[12];
            arg2->z -= boss->fwork[13];
            Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, 1);
            Matrix_RotateZ(gCalcMatrix, arg3->z * M_DTOR, 1);
            Matrix_RotateY(gCalcMatrix, arg3->y * M_DTOR, 1);
            Matrix_RotateX(gCalcMatrix, arg3->x * M_DTOR, 1);
            if (*arg1 != NULL) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Push(&gCalcMatrix);
                Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(*arg1);
                RCP_SetupDL(&gMasterDisp, 0x29);
                switch (gGameFrameCount & 3) {
                    case 0:
                        GPC(255, 0, 0, 255);
                        break;
                    case 1:
                        GPC(0, 255, 0, 255);
                        break;
                    case 2:
                        GPC(0, 0, 255, 255);
                        break;
                    case 3:
                        GPC(255, 255, 255, 255);
                        break;
                }
                Matrix_Translate(gGfxMatrix, D_i6_801A67C4.x, D_i6_801A67C4.y, D_i6_801A67C4.z, 1);
                Matrix_RotateZ(gGfxMatrix, D_i6_801A67D8 * M_DTOR, 1);
                Matrix_RotateY(gGfxMatrix, D_i6_801A67D4 * M_DTOR, 1);
                Matrix_RotateX(gGfxMatrix, D_i6_801A67D0 * M_DTOR, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(&D_C022520);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Pop(&gCalcMatrix);
            }
            return true;
        default:
            break;
    }

    Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, 1);
    Matrix_RotateZ(gCalcMatrix, arg3->z * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, arg3->y * M_DTOR, 1);
    Matrix_RotateX(gCalcMatrix, arg3->x * M_DTOR, 1);
    Matrix_Push(&gCalcMatrix);
    Matrix_Scale(gCalcMatrix, sp84, sp84, sp84, 1);
    if (*arg1 != NULL) {
        Matrix_MultVec3f(gCalcMatrix, &sp94, &sp88);
        func_8005F670(&sp88);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(*arg1);
    }
    Matrix_Pop(&gCalcMatrix);
    return true;
}


extern Vec3f D_i6_801A6800;
extern Vec3f D_i6_801A680C;
extern Vec3f D_i6_801A6818;
extern Vec3f D_i6_801A6824;
extern Vec3f D_i6_801A6830;
extern Vec3f D_i6_801A683C;
extern Vec3f D_i6_801A6848;
extern Vec3f D_i6_801A6854;
extern Vec3f D_i6_801A6860;
extern Vec3f D_i6_801A686C;

void func_i6_801924B4(s32 arg0, Vec3f* arg1, void* data) {
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f sp70;
    Vec3f sp64;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;
    Vec3f sp28;
    Boss* boss = (Boss*)data;

    sp94 = D_i6_801A6800;
    sp88 = D_i6_801A680C;
    sp7C = D_i6_801A6818;
    sp70 = D_i6_801A6824;
    sp64 = D_i6_801A6830;
    sp58 = D_i6_801A683C;
    sp4C = D_i6_801A6848;
    sp40 = D_i6_801A6854;
    sp34 = D_i6_801A6860;
    sp28 = D_i6_801A686C;
    switch (arg0) {
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp7C, &boss->vwork[2]);
            break;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp7C, &boss->vwork[3]);
            break;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp4C, &boss->vwork[6]);
            Matrix_MultVec3f(gCalcMatrix, &sp58, &boss->vwork[7]);
            break;
        case 12:
            Matrix_MultVec3f(gCalcMatrix, &sp34, &boss->vwork[9]);
            break;
        case 11:
            Matrix_MultVec3f(gCalcMatrix, &sp40, &boss->vwork[8]);
            break;
        case 20:
            Matrix_MultVec3f(gCalcMatrix, &sp70, &boss->vwork[0]);
            break;
        case 28:
            Matrix_MultVec3f(gCalcMatrix, &sp64, &boss->vwork[1]);
            break;
        case 25:
            Matrix_MultVec3f(gCalcMatrix, &sp88, &boss->vwork[10]);
            break;
    }
    if (boss->actionState >= 0x1E) {
        switch (arg0) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[16]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[15]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[13]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[14]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[19]);
                return;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[21]);
                return;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[22]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[23]);
                return;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[25]);
                return;
            case 10:
                Matrix_MultVec3f(gCalcMatrix, &sp94, &boss->vwork[24]);
                return;
            case 11:
                Matrix_MultVec3f(gCalcMatrix, &sp28, &boss->vwork[18]);
                return;
            case 12:
                Matrix_MultVec3f(gCalcMatrix, &sp28, &boss->vwork[17]);
                break;
        }
    }
}

extern Limb* D_C01CC3C;
extern Vec3f D_i6_801A7F80;

void func_i6_801928C8(Boss* arg0) {

    if (arg0->timer_058 == 0) {
        // FAKE
        if (1) {}
        if (arg0->actionState < 2) {
            Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, D_i6_801A7F5C, D_i6_801A7F64, D_i6_801A7F6C, D_i6_801A7F74, D_i6_801A7F7C, D_i6_801A8430);
        }
        Matrix_Scale(gCalcMatrix, 10.0f, 10.0f, 10.0f, 1);
        Animation_DrawSkeleton(2, &D_C01CC3C, &D_i6_801A7F80, func_i6_801917F0, func_i6_801924B4, arg0, gCalcMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        if (arg0->fwork[20] > 0.05f) {
            Matrix_Translate(gGfxMatrix, arg0->vwork[10].x, arg0->vwork[10].y, arg0->vwork[10].z + D_80177D20, 1);
            if (arg0->fwork[21] > 0.05f) {
                Matrix_Push(&gGfxMatrix);
                RCP_SetupDL(&gMasterDisp, 0x43);
                GPC(255, 255, 255, 192);
                GEC(255, 0, 128, 192);
                Matrix_Scale(gGfxMatrix, arg0->fwork[21] * 7.0f, arg0->fwork[21] * 7.0f, arg0->fwork[21] * 7.0f, 1);
                if (gGameFrameCount & 1) {
                    Matrix_Scale(gGfxMatrix, 1.1f, 1.1f, 1.1f, 1);
                }
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(D_1024AC0);
                Matrix_Pop(&gGfxMatrix);
            }
            Matrix_Scale(gGfxMatrix, arg0->fwork[20] * 10.0f, arg0->fwork[20] * 10.0f, arg0->fwork[20] * 10.0f, 1);
            Matrix_RotateZ(gGfxMatrix, arg0->fwork[0x13] * M_DTOR, 1);
            RCP_SetupDL(&gMasterDisp, 0x40);
            if (gGameFrameCount & 1) {
                GPC(255, 255, 255, 128);
            } else {
                GPC(255, 255, 255, 30);
            }
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateZ(gGfxMatrix, 0.0f, 1);
            Matrix_RotateX(gGfxMatrix, 0.2617994f, 1);
            Matrix_Scale(gGfxMatrix, 0.3f, 1.0f, 1.0f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 200.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_C017440);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateZ(gGfxMatrix, 2.0943952f, 1);
            Matrix_RotateX(gGfxMatrix, 0.2617994f, 1);
            Matrix_Scale(gGfxMatrix, 0.3f, 1.0f, 1.0f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 200.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_C017440);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateZ(gGfxMatrix, 4.1887903f, 1);
            Matrix_RotateX(gGfxMatrix, 0.2617994f, 1);
            Matrix_Scale(gGfxMatrix, 0.3f, 1.0f, 1.0f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 200.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_C017440);
            Matrix_Pop(&gGfxMatrix);
        }
        Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR, gAmbientG, gAmbientB);
    }
}

void func_i6_80192E94(Actor* arg0) {
    Actor* var_v0;
    s32 i;

    switch (arg0->unk_0B8) {
        case 0:
            if (arg0->obj.pos.x >= 0.0f) {
                arg0->unk_0B8 = 1;
            } else {
                arg0->unk_0B8 = 2;
            }
            arg0->vwork[0].x = arg0->obj.pos.x;
            arg0->vwork[0].y = arg0->obj.pos.y - 300.0f;
            arg0->vwork[0].z = arg0->obj.pos.z;
            arg0->unk_0CE = 30;
            arg0->unk_0F4.z = arg0->obj.rot.z;
            Audio_PlaySfx(0x11000028, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 1:
            var_v0 = gActors;
            for (i = 0; i < 60; i++, var_v0++) {
                if ((i != arg0->index) && (var_v0->obj.status == 2) && (var_v0->obj.id == 0x11D) && (fabsf(var_v0->obj.pos.z - arg0->obj.pos.z) < 200.0f)) {
                    arg0->timer_0BC = 5;
                    var_v0->timer_0BC = 5;
                    gUnkEntities30[arg0->index].mode = 50;
                    gUnkEntities30[arg0->index].unk_28 = 1.0f;
                    gUnkEntities30[arg0->index].unk_04.x = arg0->obj.pos.x;
                    gUnkEntities30[arg0->index].unk_04.y = arg0->obj.pos.y;
                    gUnkEntities30[arg0->index].unk_04.z = arg0->obj.pos.z;
                    gUnkEntities30[arg0->index].unk_10.x = var_v0->obj.pos.x;
                    gUnkEntities30[arg0->index].unk_10.y = var_v0->obj.pos.y;
                    gUnkEntities30[arg0->index].unk_10.z = var_v0->obj.pos.z;
                    gUnkEntities30[arg0->index].timer = 3;
                    break;
                }
            }
            /* fallthrough */
        case 2:
            arg0->obj.rot.z = arg0->unk_0F4.z + D_i6_801A7F68;
            Matrix_RotateZ(gCalcMatrix, M_DTOR * D_i6_801A7F68, 0U);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, arg0->vwork, &arg0->obj.pos);
            arg0->obj.pos.y += 300.0f;
            break;
    }
    
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        arg0->unk_0CE -= arg0->unk_0D6;
        if (arg0->unk_0CE <= 0) {
            func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f);
            for(i = 0; i < 7; i++) {
                func_80079618((( Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->obj.pos.y, arg0->obj.pos.z, (Rand_ZeroOne() * 0.5f) + 0.5f);
            }
            func_8007A6F0(&arg0->obj.pos, 0x2903A008);
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
    }
}

extern Gfx* D_6007E20;

void func_i6_80193244(Actor* arg0) {

    GDL(&D_6007E20);
    if (arg0->timer_0BC != 0) {
        f32 var_fv0;
        u8 sp2F;
        
        var_fv0 = 2.5f;
        sp2F = 0x10;
        if (gGameFrameCount & 1) {
            sp2F = 0x40;
            var_fv0 *= 1.2f;
        }
        Matrix_Scale(gGfxMatrix, var_fv0, var_fv0, var_fv0, 1);
        Matrix_RotateX(gGfxMatrix, 1.5707964f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x43);
        GPC(255, 255, 255, sp2F);
        GEC(255, 128, 128, sp2F);
        GDL(D_1024AC0);
    }
}

extern Gfx* D_C038AC4;

void func_i6_80193380(Object_80* arg0) {

    switch (arg0->unk_48) {
        case 0:
            if (fabsf(arg0->obj.pos.z - gPlayer->unk_138) < 1800.0f) {
                arg0->unk_48 = 1;
                arg0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_C038AC4);
            }
            break;
        case 1:
            arg0->info.hitbox[7] = -130.0f - (arg0->unk_44 * 1.6f);
            arg0->info.hitbox[17] = -130.0f - (arg0->unk_44 * 1.6f);
            arg0->info.hitbox[27] = -130.0f - (arg0->unk_44 * 1.6f);
            arg0->unk_44 += 2;
            if (arg0->unk_44 >= Animation_GetFrameCount(&D_6014658)) {
                arg0->unk_44 = Animation_GetFrameCount(&D_6014658) - 1;
            }
            break;
    }
    arg0->obj.rot.z = D_i6_801A7F68;
}

s32 func_i6_801934EC(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 13) {
        *arg1 = NULL;
    }
    return false;
}

void func_i6_8019350C(Object_80* arg0) {
    Vec3f sp28[20];

    Animation_GetFrameData(&D_6014658, arg0->unk_44, sp28);
    Animation_DrawSkeleton(1, D_6014844, sp28, func_i6_801934EC, NULL, NULL, &gIdentityMatrix);
}

void func_i6_8019356C(Object_80* arg0) {
    arg0->obj.rot.z = D_i6_801A7F68;
    arg0->obj.pos.z += arg0->unk_60;
    if (arg0->timer_4C == 1) {
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }
}

s32 func_i6_801935B4(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 != 13) {
        *arg1 = NULL;
    }
    return false;
}

void func_i6_801935D4(Object_80* arg0) {
    Vec3f sp30[20];

    Animation_GetFrameData(&D_6014658, arg0->unk_44, sp30);
    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        GCGM_BACK();
    }
    Animation_DrawSkeleton(1, D_6014844, sp30, func_i6_801935B4, NULL, NULL, &gIdentityMatrix);
}

void func_i6_80193668(Object_80* arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    Object_80_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x83;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_60 = -40.0f;
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->timer_4C = (arg4 * 0x32) + 100;
    arg0->info.unk_10 = 100000.0f;
}

void func_i6_80193710(void) {
    Actor* var_s0_2;
    Object_58* var_s0;
    Boss* boss;
    s32 i;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[gCurrentLevel]);

    for (var_s0 = gObjects58, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        
        if (D_80178310[i].id < 0xA1) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[i].id;
            var_s0->sfxPos.x = var_s0->obj.pos.x = D_80178310[i].xPos;
            var_s0->sfxPos.y = var_s0->obj.pos.y = D_80178310[i].yPos;
            var_s0->sfxPos.z = var_s0->obj.pos.z = -D_80178310[i].zPos1;
            var_s0->unk_54 = var_s0->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&var_s0->info, var_s0->obj.id);
            var_s0++;
        }
    }

    for (var_s0_2 = &gActors[30], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }

        if ((D_80178310[i].id >= 0xB0) && (D_80178310[i].id < 0x124)) {
            Actor_Initialize(var_s0_2);
            var_s0_2->obj.status = 1;
            var_s0_2->obj.id = D_80178310[i].id;
            var_s0_2->fwork[10] = var_s0_2->obj.pos.x = D_80178310[i].xPos;
            var_s0_2->fwork[11] = var_s0_2->obj.pos.y = D_80178310[i].yPos;
            var_s0_2->fwork[12] = var_s0_2->obj.pos.z = -D_80178310[i].zPos1;
            var_s0_2->fwork[13] =var_s0_2->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&var_s0_2->info, var_s0_2->obj.id);
            var_s0_2++;
        }
    }

    boss = &gBosses[0];
    Boss_Initialize(boss);
    boss->obj.status = 1;
    boss->obj.id = 0x138;
    Object_SetInfo(&boss->info, boss->obj.id);
}

void func_i6_801939A0(s32 arg0) {
    Actor* actor = &gActors[arg0];

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = 0xC3;
    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = gPlayer[0].camAt.y;
    actor->obj.pos.z = 0.0f;
    actor->iwork[11] = 1;
    actor->unk_0F4.x = 90.0f;
    actor->fwork[0] = 50.0f;
    actor->fwork[1] = 6.5f;
    if (arg0 == 10) {
        actor->iwork[14] = 1;
    }
    if (arg0 == 1) {
        actor->unk_0B8 = 1;
        actor->unk_046 = 0xFF;
        actor->unk_0B6 = 1000;
    }
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x09000002, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

extern Vec3f D_i6_801A6878[4];

void func_i6_80193AE4(s32 arg0) {
    Actor* actor = &gActors[arg0];

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = 0xC3;
    actor->obj.pos.x = D_i6_801A6878[arg0].x;
    actor->obj.pos.y = D_i6_801A6878[arg0].y;
    actor->obj.pos.z = D_i6_801A6878[arg0].z;
    Object_SetInfo(&actor->info, actor->obj.id);
    if (arg0 == 0) {
        actor->unk_0B8 = 200;
        actor->unk_0B6 = 1;
        Audio_PlaySfx(0x11030010, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }
    actor->iwork[11] = 1;
    actor->fwork[7] = Rand_ZeroOne() * 360.0f;
    actor->fwork[8] = Rand_ZeroOne() * 360.0f;
    actor->unk_0B8 = 0x64;
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

extern s32 D_i6_80196D00;
extern f32 D_i6_801A7F40;
extern f32 D_i6_801A7F44;
extern f32 D_i6_801A7F48;
extern f32 D_i6_801A7F4C;
extern f32 D_i6_801A7F50;
extern f32 D_i6_801A7F54;

void func_i6_80193C4C(Player* player) {
    s32 i;
    s32 sp90;
    f32 sp8C;
    Boss* boss = &gBosses[0];
    f32 sp84;
    f32 sp80;
    Vec3f sp74;
    Vec3f sp68;
    s32 temp_v0_2;


    Math_SmoothStepToF(D_80177A48, 1.0f, 1.0f, 0.01f, 0.0f);
    player->wings.unk_04 = player->wings.unk_08 = player->wings.unk_0C = player->wings.unk_10 = 0.0f;
    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;
            player->wings.unk_2C = 1;
            D_80177A48[0] = 0.0f;
            if (player->unk_4D8 > 180.0f) {
                player->unk_4D8 -= 360.0f;
            }
            player->unk_1D0++;
            player->timer_1F8 = 50;
            player->vel.z = -40.0f;
            /* fallthrough */
        case 1:
            Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
            Math_SmoothStepToF(&boss->vel.z, -40.0f, 1.0f, 1.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 10.0f, 0.0f);
            Math_SmoothStepToF(&player->vel.x, 0.0f, 1.0f, 3.0f, 0.0f);
            Math_SmoothStepToF(&player->vel.y, 0.0f, 1.0f, 3.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.x, player->pos.x, 0.1f, 15.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, player->pos.y + 30.0f, 0.1f, 15.0f, 0.0f);
            if (player->timer_1F8 == 0) {
                player->pos.y += __sinf(player->unk_0E4 * M_DTOR) * 15.0f;
                Math_SmoothStepToF(&player->unk_0E4, 180.0f, 0.1f, 5.0f, 0.0f);
                Math_SmoothStepToF(&player->vel.z, 40.0f, 1.0f, 2.0f, 0.0f);
            } else {
                Math_SmoothStepToF(&player->unk_08C, 0.0f, 1.0f, 5.0f, 0.0f);
                Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 10.0f, 0.0f);
            }
            player->camEye.z += player->vel.z * 0.5f;
            switch (D_80177A80) {
                case 80:
                    func_8007A568(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 40.0f);
                    func_8007A6F0(&boss->obj.pos, 0x2940C00A);
                    /* fallthrough */
                case 85:
                case 90:
                    func_8007B344(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 250.0f, 6);
                    break;
                case 86:
                    Object_Kill(&boss->obj, &boss->sfxPos);
                    D_80177AB0 = 0;
                    break;
                case 111:
                    player->unk_1D0 = 2;
                    Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    player->unk_190 = player->unk_194 = 7.0f;
                    D_80177A48[0] = 0.0f;
                    D_80177A48[1] = 0.0f;
                    D_80177A48[2] = 0.5f;
                    D_80177A48[3] = 1000.0f;
                    // todo chain assign
                    D_80177A48[4] = D_80177A48[5] = D_80177A48[6] = D_80177A48[7] = 0.0f;
                    D_80177A48[8] = 1.5f;
                    D_80177A80 = 0;
                    break;
            }
            D_801779A0 = gBosses[0].obj.pos.x;
            D_801779B8 = gBosses[0].obj.pos.y;
            D_801779C0 = gBosses[0].obj.pos.z + D_80177D20;
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
            break;
        case 2:
            player->unk_190 = D_80177A48[8];
            sp90 = 0;
            sp68.x = (Rand_ZeroOne() - 0.5f) * 150.0f;
            sp68.y = (Rand_ZeroOne() - 0.5f) * 150.0f;
            sp68.z = 0.0f;
            if (D_80177A80 == 50) {
                Audio_PlaySfx(0x11403071, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_8001D400(0);
            }
            if (D_80177A80 > 40) {
                sp90 = 1;
            }
            if (D_80177A80 < 30) {
                Math_SmoothStepToF(&D_80177A48[2], 0.5f, 1.0f, 0.05f, 0.0f);
            } else if (D_80177A80 <= 150) {
                Math_SmoothStepToF(&D_80177A48[1], 300.0f, 0.1f, D_80177A48[5], 0.0f);
                Math_SmoothStepToF(&D_80177A48[2], 0.95f, 1.0f, 0.05f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[3], 300.0f, 0.1f, 5.0f, 0.0f);
                if (D_80177A80 == 150) {
                    D_80177A48[5] = 0.0f;
                }
            } else {
                Math_SmoothStepToF(&D_80177A48[1], 0.0f, 0.1f, D_80177A48[5], 0.0f);
                Math_SmoothStepToF(&D_80177A48[2], 0.85f, 1.0f, 0.01f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[3], 200.0f, 0.1f, 5.0f, 0.0f);
                D_80177A48[4] += 4.5f;
                D_80177AB0 = 2;
                Matrix_RotateZ(gCalcMatrix, 2.0f * (Rand_ZeroOne() * M_PI), 0);
                sp74.x = Rand_ZeroOne() * 50.0f + 120.0f;
                sp74.y = 0.0f;
                sp74.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);
            }
            Math_SmoothStepToF(&D_80177A48[5], 3.0f, 1.0f, 0.05f, 0.0f);
            player->camEye.z += player->vel.z * D_80177A48[2];
            if (D_80177A80 > 230) {
                player->unk_08C -= 7.0f;
            }
            if (D_80177A80 > 230) {
                Math_SmoothStepToF(&D_80177A48[7], 3.0f, 1.0f, 0.1f, 0.0f);
                player->unk_034 -= D_80177A48[7];
            }
            

            for (i = 0; i < sp90; i++) {
                func_8007797C(player->pos.x + sp68.x, player->pos.y + sp68.y, player->pos.z - (D_80177A48[3] + D_80177A48[4]), 0.0f, 0.0f, 50.0f, (Rand_ZeroOne() * 2.5f) + 2.5f);
            }

            Math_SmoothStepToF(&player->camEye.x, D_80177A48[1] + player->pos.x, 0.1f, 15.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, player->pos.y + 30.0f, 0.1f, 15.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_0EC, -180.0f, 0.02f, D_80177A48[6], 0.0f);
            Math_SmoothStepToF(&D_80177A48[6], 3.0f, 1.0f, 0.05f, 0.0f);
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->unk_138 + D_80177D20;
            if (D_80177A80 > 200) {
                player->unk_25C += 0.03f;
                if (player->unk_25C > 0.6f) {
                    player->unk_25C = 0.6f;
                }
                Math_SmoothStepToF(&player->unk_034, 3.0f, 0.5f, 0.1f, 0.0f);
                Math_SmoothStepToF(D_801779A8, 70.0f, 1.0f, 2.0f, 0.0f);
            }
            
            switch (D_80177A80) {
                case 60:
                    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                        if ((gEffects[i].obj.id == 0x17F) && (gEffects[i].obj.status == 2)) {
                            Object_Kill(&gEffects[i].obj, &gEffects[i].sfxPos);
                            break;
                        } 
                    }
                    break;
                case 25:
                    for (i = 0; i < 12; i++) {
                        func_i6_80193668(&gObjects80[i], player->pos.x, player->pos.y, (player->camEye.z - D_80177D20) + (2195.0f * i), i);
                    }
                    break;
                case 150:
                    Audio_PlaySfx(0x1900602A, &D_800C5D28, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 340:
                    func_8001A55C(&player->unk_460, 0x11403071);
                    func_8001D400(0);
                    D_800D2F68 = 0;
                    gBlurAlpha = 0xFF;
                    gCurrentLevel = LEVEL_VENOM_2;
                    D_8017827C = LEVELMODE_ALL_RANGE;
                    gLevelMode = LEVELMODE_ALL_RANGE;
                    player->unk_1D0 = 3;
                    player->unk_144 = D_80177D20 = 0.0f;
                    D_80177AB0 = D_80177A98 = 1;
                    player->camEye.x = 1200.0f;
                    player->camEye.z = 1200.0f;
                    player->camEye.y = 1800.0f;
                    D_801779A0 = 0.0f;
                    D_801779B8 = 620.0f;
                    D_801779C0 = 0.0f;
                    player->unk_034 = 0.0f;
                    player->unk_234 = 0;
                    D_80177A48[0] = 1.0f;
                    func_800A6148();
                    gObjects58 = Memory_Allocate(200 * sizeof(Object_58));
                    for (i = 0; i < 200; i++) {
                        gObjects58[i].obj.status = 0;
                    }
                    func_i6_80193710();
                    D_8017782C = LEVELMODE_ALL_RANGE;
                    func_800A594C();
                    // todo chain assign
                    D_80178348 = D_80178350 = D_80178354 = 0;
                    D_80178340 = D_80178358 = 0xFF;
                    player->timer_1F8 = 2;
                    D_80177A80 = 0;
                    D_80177A48[1] = 0.0f;
                    break;
            }
            break;
        case 3:
            if (player->timer_1F8 == 0) {
                // todo chain assign
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178340 = D_80178358 = 0;
            } else {
                // todo chain assign
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178340 = D_80178358 = 0xFF;
            }
            
            if ((D_80177A80 == 20) && (D_800D2F68 != 0)) {
                func_i6_801939A0(1);
            }
            if (D_80177A80 == 40) {
                func_i6_801939A0(10);
                Audio_PlaySfx(0x2940F026, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_80178480 = 30;
                gOverlayStage = 1;
                D_Timer_80177BD0[0] = 30;
            }
            if (D_80177A80 > 40) {
                for (i = 0; i < 3; i++) {
                    func_8007797C(boss->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 150.0f), boss->obj.pos.y + 500.0f, boss->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 150.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 60.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 5.5f) + 5.5f);
                }
                Math_SmoothStepToF(&D_801779B8, gActors[10].obj.pos.y, 1.0f, D_80177A48[1], 0.0f);
                Math_SmoothStepToF(&D_80177A48[1], 1000.0f, 1.0f, 5.0f, 0.0f);
            } else {
                Math_SmoothStepToF(&player->camEye.z, 1640.0f, 0.05f, 50.0f, 0.0f);
                Math_SmoothStepToF(&player->camEye.y, 110.0f, 0.05f, 50.0f, 0.0f);
                Math_SmoothStepToF(&player->camEye.x, 0.0f, 0.05f, 50.0f, 0.0f);
                Math_SmoothStepToF(&D_801779B8, 630.0f, 0.05f, 50.0f, 0.0f);
            }

            if (D_80177A80 == 70) {
                func_8001D444(0, 0x8040, 0, 0xFF);
            }
            if (D_80177A80 == 150) {
                player->unk_1D0++;
                D_80177A48[0] = 1.0f;
                D_80177A48[1] = 1000.0f;
                D_80177A48[2] = 0;
                D_80177A48[3] = 1.0f;
                gActors[10].obj.pos.y = 1500.0f;
                gActors[10].unk_0F4.z = 180.0f;
                D_80177AB0 = 0;
                gFogFar = 1030;
                D_i6_801A7F40 = gLight1R;
                D_i6_801A7F44 = gLight1G;
                D_i6_801A7F48 = gLight1B;
                D_i6_801A7F4C = gAmbientR;
                D_i6_801A7F50 = gAmbientG;
                D_i6_801A7F54 = gAmbientB;
                D_801784D4 = -50.0f;
                D_80177930 = 1;
                for (i = 0; i < 200; i++) {
                    gObjects58[i].obj.status = 0;
                }
            }
            break;
        case 4:
            player->unk_034 += D_80177A48[3];
            if (D_80177A80 > 190) {
                Math_SmoothStepToF(&D_80177A48[3], 0.3f, 0.05f, 0.02f, 0.0f);
            }
            if (D_80177A80 > 205) {
                Math_SmoothStepToF(&D_i6_801A7F40, 130.0f, 1.0f, 10.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F44, 160.0f, 1.0f, 10.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F48, 80.0f, 1.0f, 10.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F4C, 10.0f, 1.0f, 5.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F50, 10.0f, 1.0f, 5.0f, 0.0f);
                Math_SmoothStepToF(&D_i6_801A7F54, 10.0f, 1.0f, 5.0f, 0.0f);
            }
            gLight1R = D_i6_801A7F40;
            gLight1G = D_i6_801A7F44;
            gLight1B = D_i6_801A7F48;
            gAmbientR = D_i6_801A7F4C;
            gAmbientG = D_i6_801A7F50;
            gAmbientB = D_i6_801A7F54;
            Math_SmoothStepToF(&D_80177A48[1], -5000.0f, 0.05f, 15.0f, 0.0f);
            player->camEye.x = gActors[10].obj.pos.x + 50.0f;
            player->camEye.y = gActors[10].obj.pos.y + D_80177A48[1];
            player->camEye.z = gActors[10].obj.pos.z;
            D_801779A0 = gActors[10].obj.pos.x;
            D_801779B8 = gActors[10].obj.pos.y + 50.0f;
            D_801779C0 = gActors[10].obj.pos.z;
            if (!(gGameFrameCount & 3) && (D_80177A80 < 215)) {
                func_8007797C(boss->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 350.0f), boss->obj.pos.y + 500.0f, boss->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 350.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 60.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 5.5f) + 15.5f);
            }
            sp80 = Rand_ZeroOne() * 40.0f;
            for (i = 0; i < 36; i += 4) {
                sp8C = __sinf((i * 10.0f * M_DTOR) + sp80) * D_80177A48[2];
                sp84 = __cosf((i * 10.0f * M_DTOR) + sp80) * D_80177A48[2];
                func_8007797C(sp8C, 300.0f, sp84, 0.0f, 0.0f, 0.0f, (Rand_ZeroOne() * 5.5f) + 15.5f);
            }
            Math_SmoothStepToF(&D_80177A48[2], 10000.0f, 0.05f, 20.0f, 0.0f);
            if (D_80177A80 == 220) {
                func_i6_80193AE4(0);
                if (gTeamShields[1] > 0) {
                    func_i6_80193AE4(1);
                }
                if (gTeamShields[2] > 0) {
                    func_i6_80193AE4(2);
                }
                if (gTeamShields[3] > 0) {
                    func_i6_80193AE4(3);
                }
            }

            if (D_80177A80 == 190) {
                func_800A5D6C();
                D_80178410 = 1000;
                player->unk_204 = 0;
            }
            if (D_80177A80 == 360) {
                D_80177A80 = 340;
                player->unk_1D0++;
                D_80177A48[0] = 1.0f;
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = 0.0f;
                D_80177A48[3] = 0.0f;
                D_80177A48[4] = 0.0f;
                player->camEye.x = D_80177978 = 100.0f;
                player->camEye.y = D_80177980 = 14800.0f;
                player->camEye.z = D_80177988 = -1500.0f;
                D_801779A0 = 0.0f;
                D_801779B8 = 15000.0f;
                D_801779C0 = 0;
                player->unk_034 = 0.0f;
                // todo chain assigns
                gActors[10].unk_0B8 = 0x65;
                gActors[10].fwork[0] = 0.0f;
                gActors[10].obj.pos.y = 14500.0f;
                gActors[10].unk_0F4.z = 70.0f;
                gActors[10].unk_0F4.x = gActors[10].unk_0F4.y = 0.0f;
                D_80178340 = D_80178358 = 0xFF;
                D_80178348 = D_80178350 = D_80178354 = 0;
                player->timer_1F8 = 3;
                D_80178410 = 500;
            }
            if (D_80177A80 == 250) {
                D_80177840 = 100;
            }
            break;
        case 5:
            if (player->timer_1F8 == 1) {
                D_80178340 = D_80178358 = 0;
            }
            if (D_800D2F68 != 0) {
                if (D_80177A80 >= 1000) {
                    D_801779A0 += D_80177A48[4] * 0.15f;
                    D_80177988 += D_80177A48[4];
                    Math_SmoothStepToF(&D_80177A48[4], 20.0f, 1.0f, 0.1f, 0.0f);
                } else {
                    D_80177988 = gActors[10].obj.pos.z - 20.0f;
                }
                if ((D_80177A80 >= 920) && (gTeamShields[3] > 0)) {
                    if (D_80177A80 == 920) {
                        player->timer_1F8 = 25;
                    }
                    gActors[10].fwork[19] = __sinf((f32) player->timer_1F8 * 40.0f * M_DTOR) * 5.0f;
                } else {
                    if (D_80177A80 < 850) {
                        switch (D_80177A80) {
                            case 600:
                                D_80177A48[2] = 80.0f;
                                D_80177A48[3] = -45.0f;
                                break;
                            case 650:
                                D_80177A48[2] = 0.0f;
                                break;
                            case 680:
                                D_80177A48[2] = 45.0f;
                                D_80177A48[3] = -20.0f;
                                break;
                            case 750:
                                D_80177A48[2] = 90.0f;
                                D_80177A48[3] = -30.0f;
                                break;
                            case 780:
                                D_80177A48[2] = 30.0f;
                                D_80177A48[3] = -45.0f;
                                break;
                            case 830:
                                D_80177A48[2] = -20.0f;
                                D_80177A48[3] = -25.0f;
                                break;
                            default:
                                // D_80177A48[2] = 0.0f;
                                break;
                        }
                    }
                    if (D_80177A80 > 880) {
                        Math_SmoothStepToF(&gActors[10].fwork[19], 0.0f, 0.2f, 2.0f, 0.0f);
                        Math_SmoothStepToF(&gActors[10].fwork[20], 0.0f, 0.2f, 2.0f, 0.0f);
                    } else {
                        Math_SmoothStepToF(&gActors[10].fwork[19], D_80177A48[2], 0.2f, 2.0f, 0.0f);
                        Math_SmoothStepToF(&gActors[10].fwork[20], D_80177A48[3], 0.2f, 2.0f, 0.0f);
                    }
                }
                D_80177A48[0] = 0.01f;
                Math_SmoothStepToF(&D_80177A48[1], 10.0f, 1.0f, 0.1f, 0.0f);
                Math_SmoothStepToF(&player->camEye.x, gActors[10].obj.pos.x - 50.0f, D_80177A48[0], D_80177A48[1], 0);
                Math_SmoothStepToF(&player->camEye.y, gActors[10].obj.pos.y + 10.0f, D_80177A48[0], D_80177A48[1], 0);
                Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], D_80177A48[1], 0);
                D_801779B8 = __sinf((f32) gGameFrameCount * 5.5f * M_DTOR) + 15000.0f;
            } else {
                D_80177978 -= 1.0f;
                D_80177980 += 0.3f;
                D_80177988 += 4.0f;
                D_801779B8 = (__sinf((f32) gGameFrameCount * 1.5f * M_DTOR) * 10.0f) + 15000.0f;
                Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
                Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
                Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
            }
            if (D_800D2F68 != 0) {
                switch (D_80177A80) {
                    case 400:
                        func_800BA808(gMsg_ID_19400, RCID_PEPPY);
                        break;
                    case 500:
                        func_800BA808(gMsg_ID_19410, RCID_SLIPPY);
                        break;
                    case 600:
                        func_800BA808(gMsg_ID_19420, RCID_FALCO);
                        break;
                    case 800:
                        func_800BA808(gMsg_ID_19430, RCID_PEPPY);
                        break;
                    case 900:
                        if (gTeamShields[3] > 0) {
                            func_800BA808(gMsg_ID_19440, RCID_FOX);
                        }
                        break;
                    case 1050:
                        D_80177830 = 1;
                        break;
                    case 1250:
                        D_80177830 = 0;
                        break;
                }
                if (D_80177A80 > 1300) {
                    D_80178288[109] += 1.0f;
                    D_80178290[109] += 0.5f;
                    temp_v0_2 = (s32) (Rand_ZeroOne() * 100.0f);
                    D_80178298[109] = FILL_COLOR(D_800C9C3C[temp_v0_2 & 0xF]);
                }
            } else {
                switch (D_80177A80) {
                    case 400:
                        func_800BA808(gMsg_ID_8300, RCID_PEPPY);
                        break;
                    case 500:
                        func_800BA808(gMsg_ID_8310, RCID_SLIPPY);
                        break;
                    case 600:
                        func_800BA808(gMsg_ID_8320, RCID_FALCO);
                        D_80177A80 += 230;
                        break;
                    case 1050:
                        D_80177830 = 1;
                        break;
                    case 1250:
                        D_80177830 = 0;
                        break;
                }
            }
            if (D_80177A80 == 1400) {
                func_8001DBD0(40);
            }
            if (D_80177A80 > 1400) {
                // todo chain assign
                D_8017835C = 4;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178358 = 0xFF;
                if (D_80178340 == 0xFF) {
                    gNextGameState = 8;
                    D_i6_80196D00 = 0;
                    D_800D3180[9] = Play_CheckMedalStatus(200) + 1;
                    func_8001DC6C(0, 0x1B);
                }
            }
            break;
        case 100:
            D_80178380[0] -= 4;
            if (D_80178380[0] >= 0x100) {
                D_80178380[0] = 0;
            }
            Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);
            sp74.x = 0.0f;
            sp74.y = 0.0f;
            sp74.z = player->unk_0D0;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);
            player->vel.x = sp68.x;
            player->vel.z = sp68.z;
            player->vel.y = sp68.y;
            if (player->timer_1F8 == 0) {
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_014 = 0.2f;
                player->unk_018 = 0.0f;
                player->unk_01C = 0.05f;
                D_80177AB0 = 6;
                D_80161A44 = 12800.0f;
            }
            D_80177A48[0] = 1.0f;
            D_801779A0 = (2.0f * __sinf((f32) gGameFrameCount * 40.0f * M_DTOR)) + player->pos.x;
            D_801779B8 = (2.0f * __sinf((f32) gGameFrameCount * 30.0f * M_DTOR)) + player->pos.y;
            D_801779C0 = (2.0f * __sinf((f32) gGameFrameCount * 50.0f * M_DTOR)) + player->pos.z;
            sp74.x = 0.0f;
            sp74.y = 0.0f;
            sp74.z = D_80177A48[5];
            Math_SmoothStepToF(&D_80177A48[5], -400.0f, 0.05f, 5.0f, 0.0f);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);
            D_80177978 = player->pos.x + sp68.x;
            D_80177980 = player->pos.y + sp68.y;
            D_80177988 = player->pos.z + sp68.z;
            Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
            Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
            Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
            Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 0.7f, 0.0f);
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 0.4f, 0.0f);
            break;
    }
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z + player->unk_08C;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
}

void func_i6_80195E44(Actor* arg0) {
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;

    sp34 = 0.0f;
    
    switch (arg0->unk_0B8) {
        case 0:
            arg0->unk_0F4.z += arg0->fwork[1];
            if (D_80177A80 > 250) {
                Math_SmoothStepToF(&arg0->fwork[1], 0.5f, 0.1f, 0.04f, 0.0f);
            } else {
                Math_SmoothStepToF(&arg0->fwork[1], -2.0f, 0.1f, 0.04f, 0.0f);
            }
            break;
        case 1:
            arg0->unk_0F4.z += arg0->fwork[1];
            Math_SmoothStepToF(&arg0->fwork[1], -2.0f, 0.1f, 0.04f, 0.0f);
            if (D_80177A80 == 55) {
                arg0->unk_0B8 += 1;
            }
            break;
        case 2:
            Math_SmoothStepToF(&arg0->unk_0F4.x, 180.0f, 0.1f, 1.0f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_0F4.y, 200.0f, 0.1f, 1.0f, 0.0f);
            arg0->unk_046 -= 5;
            if (arg0->unk_046 < 0) {
                arg0->unk_046 = 0;
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            break;
        case 101:
            Math_SmoothStepToF(&arg0->unk_0F4.z, 0.0f, 0.03f, 0.5f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.x, 0.0f, 0.03f, 5.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.y, 15000.0f, 0.03f, 5.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.z, 0.0f, 0.03f, 5.0f, 0.0f);
            break;
        case 100:
            arg0->fwork[7] += 3.0f;
            arg0->unk_0F4.z = __sinf(arg0->fwork[7] * M_DTOR) * 1.5f;
            arg0->fwork[8] += 2.0f;
            sp34 = __sinf(arg0->fwork[8] * M_DTOR) * 0.5f;
            break;
        case 200:
            break;
    }
    Matrix_RotateY(gCalcMatrix, (arg0->unk_0F4.y + 180.0f) * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -(arg0->unk_0F4.x * M_DTOR), 1U);
    sp44.x = 0.0f;
    sp44.y = 0.0f;
    sp44.z = arg0->fwork[0];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
    arg0->vel.x = sp38.x;
    arg0->vel.y = sp38.y + sp34;
    arg0->vel.z = sp38.z;
    arg0->obj.rot.x = -arg0->unk_0F4.x;
    arg0->obj.rot.y = arg0->unk_0F4.y + 180.0f;
    arg0->obj.rot.z = -arg0->unk_0F4.z;
}

void func_i6_801961AC(void) {
    Boss* boss = &gBosses[0];
    
    Boss_Initialize(boss);
    boss->obj.status = 2;
    boss->actionState = 21;
    boss->obj.id = 0x141;
    Object_SetInfo(&boss->info, boss->obj.id);
    D_80177A80 = 599;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/D_i6_801A6BA0.s")

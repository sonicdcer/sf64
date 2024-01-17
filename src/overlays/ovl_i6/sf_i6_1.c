#include "global.h"

extern s32 D_i6_801A6760[12];
extern f32 D_i6_801A7F64[2];

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
    actor->obj.rot.z = D_i6_801A7F64[1];
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801876FC.s")

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

void func_i6_80189098(Object* arg0) {
    Actor* actor = &gActors[10];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = 0xC5;
    actor->unk_0E4 = 10;
    actor->unk_0E6 = 0;
    actor->unk_0CE = 200;
    actor->obj.pos.x = 200.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = arg0->pos.z;
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
    actor->obj.pos.z = arg0->pos.z;
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80189724.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801899E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80189B00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80189B70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018B47C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018B8C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018BDD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018C390.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018C660.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018C734.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018C7A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018C8D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018C958.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018CA50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018CAD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018CF98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018D0D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018D16C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018D2B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018D9C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018DA94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8018DBF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801917F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801924B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801928C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80192E94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80193244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80193380.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801934EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8019350C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_8019356C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801935B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801935D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80193668.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80193710.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801939A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80193AE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80193C4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_80195E44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/func_i6_801961AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/sf_i6_1/D_i6_801A6BA0.s")

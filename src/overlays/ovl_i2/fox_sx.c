#include "global.h"

UNK_TYPE D_i2_80195D80;
f32 D_i2_80195D88[3];
f32 D_i2_80195D98[3];

s32 D_i2_80195640 = 0;
Vec3f D_i2_80195644 = { 73.0f, -102.0f, 80.0f };
f32 D_i2_80195650[] = {
    90.0f,
    0.0f,
    0.0f,
};
Vec3f D_i2_8019565C = { 73.0f, -102.0f, -80.0f };
f32 D_i2_80195668[] = {
    90.0f,
    0.0f,
    0.0f,
};
Vec3f D_i2_80195674 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i2_80195680 = { 87.0f, -323.0f, 200.0f };
Vec3f D_i2_8019568C = { 87.0f, -323.0f, -200.0f };
Vec3f D_i2_80195698 = { 87.0f, -323.0f, 200.0f };
Vec3f D_i2_801956A4 = { 87.0f, -323.0f, -200.0f };
Vec3f D_i2_801956B0[5] = {
    { 0.0f, 2300.0f, -5000.0f },   { -600.0f, 2200.0f, -5000.0f }, { -300.0f, 2270.0f, -5000.0f },
    { 300.0f, 2270.0f, -5000.0f }, { 600.0f, 2200.0f, -5000.0f },
};
Vec3f D_i2_801956EC[3] = {
    { 150.0f, 250.0f, 50.0f },
    { -150.0f, -50.0f, 50.0f },
    { 150.0f, -50.0f, 50.0f },
};
f32 D_i2_80195710[4] = { -1200.0f, 1000.0f, 0.0f, 0.0f };
f32 D_i2_80195720[4] = { -300.0f, 400.0f, -400.0f, 0.0f };
f32 D_i2_80195730[4] = { -800.0f, -800.0f, -1000.0f, -8000.0f };
f32 D_i2_80195740[4] = { -150.0f, 150.0f, 0.0f, 0.0f };
f32 D_i2_80195750[4] = { 20.0f, 0.0f, -70.0f, 0.0f };
f32 D_i2_80195760[4] = { -250.0f, -200.0f, -400.0f, -8000.0f };
f32 D_i2_80195770[3] = { 120.0f, 180.0f, -150.0f };
s16 D_i2_8019577C[3] = { 2, 3, 4 };

extern Gfx D_60010C0[];
extern Gfx D_6006810[];
extern Gfx D_6009C30[];
extern AnimationHeader D_60206DC;
extern Limb* D_6020C68;
extern Gfx D_6020D20[];
extern f32 D_60328CC[];

extern void func_i2_8018FBBC(f32*);
extern void func_i2_80193208(s32, Vec3f*, void*);

void func_i2_8018F030(void) {
    s32 i;
    Actor* actor = &gActors[0];

    for (i = 0; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status == 0) {
            Actor_Initialize(actor);
            actor->obj.status = 1;
            actor->obj.id = OBJ_ACTOR_203;
            actor->unk_0B6 = 1;
            actor->obj.rot.y = 180.0f;
            actor->obj.pos.x = gPlayer->camEye.x - 300.0f;
            actor->obj.pos.y = gPlayer->camEye.y + 200.0f;
            actor->obj.pos.z = gPlayer->camEye.z - D_80177D20 + 300.0f;
            actor->iwork[11] = 1;
            actor->unk_0E4 = 2;
            Object_SetInfo(&actor->info, actor->obj.id);
            func_800BA808(gMsg_ID_5475, RCID_SLIPPY);
            break;
        }
    }
}

void func_i2_8018F124(void) {
    Actor* actor = &gActors[50];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = 0xCB;
    actor->unk_0B6 = -1;
    actor->obj.pos.x = gPlayer->camEye.x + 3000.0f;
    actor->obj.pos.y = gPlayer->camEye.y - 3000.0f;
    actor->obj.pos.z = gPlayer->pos.z + 30000.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.unk_10 = 100000.0f;
}

void func_i2_8018F1DC(Actor* actor) {
    Vec3f src;
    Vec3f dest;

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 100.0f;
    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor->unk_0F4.x * M_DTOR, 1);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
    func_8006EEFC(actor->index, actor->obj.pos.x + (dest.x * 1.5), actor->obj.pos.y + (dest.y * 1.5),
                  actor->obj.pos.z + (dest.z * 1.5), dest.x, dest.y, dest.z, actor->unk_0F4.x,
                  actor->unk_0F4.y + 180.0f, 0.0f);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_sx/func_i2_8018F330.s")

void func_i2_8018F884(Actor* actor) {
    switch (actor->unk_0B6) {
        case 0:
            gSPDisplayList(gMasterDisp++, D_6020D20);
            return;
        case 1:
        case 2:
        case 10:
            func_8005B388(actor);
            return;
        case -1:
            actor->obj.rot.y = (-gPlayer[gPlayerNum].unk_058 * 180.0f) / M_PI;
            actor->obj.rot.x = (gPlayer[gPlayerNum].unk_05C * 180.0f) / M_PI;
            RCP_SetupDL(&gMasterDisp, 0x40);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 220, 70, 30, 255);
            Matrix_Scale(gGfxMatrix, 70.0f, 70.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_60010C0);
        default:
            return;
    }
}

void func_i2_8018FA04(f32 x, f32 y, f32 z) {
    s32 i;
    Actor* actor;
    f32 yPos;
    f32 xPos;
    s32 pad;
    Vec3f src;
    Vec3f dest;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        actor = &gActors[i];
        if (actor->obj.status == 0) {
            Actor_Initialize(actor);
            actor->obj.status = 1;
            actor->obj.id = OBJ_ACTOR_203;
            actor->obj.pos.x = x;
            actor->obj.pos.y = y;
            actor->obj.pos.z = z;
            Object_SetInfo(&actor->info, actor->obj.id);
            actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_60328CC);
            xPos = Math_Atan2F(gPlayer->pos.x - x, gPlayer->unk_138 - z);
            yPos = -Math_Atan2F(gPlayer->pos.y - y, sqrtf(SQ(gPlayer->unk_138 - z) + SQ(gPlayer->pos.x - x)));
            Matrix_RotateY(gCalcMatrix, xPos, 0);
            Matrix_RotateX(gCalcMatrix, yPos, 1);
            src.x = 0.0f;
            src.y = 0.0f;
            src.z = 60.0f;
            Matrix_MultVec3f(gCalcMatrix, &src, &dest);
            actor->vel.x = dest.x;
            actor->vel.y = dest.y;
            actor->vel.z = dest.z - D_80177D08;
            break;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_sx/func_i2_8018FBBC.s")

void func_i2_8018FE38(Boss* boss) {
    f32 sp2C[3];
    Vec3f sp20;

    if (boss->actionState == 0) {
        Animation_GetFrameData(&D_60206DC, boss->unk_04C, boss->vwork);
        Math_Vec3fFromAngles(&sp20, boss->obj.rot.x, boss->obj.rot.y, 20.0f);
        boss->vel.x = sp20.x;
        boss->vel.y = sp20.y;
        boss->vel.z = sp20.z;
        boss->actionState++;
    } else {
        if (boss->obj.id == 0x130) {
            sp2C[0] = boss->fwork[11];
            sp2C[1] = boss->fwork[12];
            sp2C[2] = boss->fwork[13];
        } else {
            sp2C[0] = boss->fwork[8];
            sp2C[1] = boss->fwork[9];
            sp2C[2] = boss->fwork[10];
        }
        func_i2_8018FBBC(sp2C);
    }
    if (boss->dmgType == 1) {
        boss->dmgType = 0;
        func_8007A6F0(&boss->obj.pos, 0x29121007);
    }
}

void func_i2_8018FF20(Boss* boss) {
    func_i2_8018FE38(boss);
}

s32 func_i2_8018FF40(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (((arg0 >= 0xC) && (arg0 < 0x16)) || ((arg0 >= 0x24) && (arg0 < 0x28))) {
        return 0;
    }
    *arg1 = NULL;
    return 0;
}

void func_i2_8018FF84(Boss* boss) {
    Animation_DrawSkeleton(3, &D_6020C68, boss->vwork, func_i2_8018FF40, func_i2_80193208, boss, gCalcMatrix);
}

s32 func_i2_8018FFDC(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (((arg0 >= 2) && (arg0 < 0xC)) || ((arg0 >= 0x20) && (arg0 < 0x24))) {
        return 0;
    }
    *arg1 = NULL;
    return 0;
}

void func_i2_80190020(Boss* boss) {
    Animation_DrawSkeleton(3, &D_6020C68, boss->vwork, func_i2_8018FFDC, func_i2_80193208, boss, gCalcMatrix);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_sx/func_i2_80190078.s")

s32 func_i2_80192AF0(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Vec3f sp64 = D_i2_80195674;
    Vec3f sp58;
    Boss* boss = (Boss*) arg4;

    if (D_i2_80195640 != 0) {
        *arg1 = NULL;
    }

    if (!((s32) boss->timer_05C & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x1D);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x1B);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 0, 0, 255);
    }

    switch (arg0) {
        case 1:
            arg3->x += boss->fwork[4] + boss->fwork[5];
            arg3->z += boss->fwork[6] + boss->fwork[7];
            if (boss->timer_054 & 1) {
                RCP_SetupDL_27();
                gDPSetPrimColor(gMasterDisp++, 0, 0, 64, 64, 255, 255);
            }
            if (boss->swork[4] == 1) {
                *arg1 = D_6006810;
            } else if (boss->swork[4] == 2) {
                *arg1 = NULL;
            }

            Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, 1);
            Matrix_RotateZ(gCalcMatrix, arg3->z * M_DTOR, 1);
            Matrix_RotateY(gCalcMatrix, arg3->y * M_DTOR, 1);
            Matrix_RotateX(gCalcMatrix, arg3->x * M_DTOR, 1);

            if (*arg1 != NULL) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Push(&gCalcMatrix);
                Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
                func_8005F670(&sp58);
                Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, *arg1);
                if (boss->swork[4] == 0) {
                    RCP_SetupDL(&gMasterDisp, 0x29);
                    if (!(gFrameCount & 1)) {
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
                    } else {
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
                    }
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, D_i2_80195644.x, D_i2_80195644.y, D_i2_80195644.z, (u8) 1);
                    Matrix_RotateZ(gGfxMatrix, D_i2_80195650[2] * M_DTOR, 1);
                    Matrix_RotateY(gGfxMatrix, D_i2_80195650[1] * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, D_i2_80195650[0] * M_DTOR, 1);
                    Matrix_RotateZ(gGfxMatrix, 2.0f * gFrameCount * M_DTOR, 1);
                    Matrix_Scale(gGfxMatrix, boss->fwork[45], boss->fwork[45], boss->fwork[45], 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_6009C30);
                    Matrix_Pop(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, D_i2_8019565C.x, D_i2_8019565C.y, D_i2_8019565C.z, (u8) 1);
                    Matrix_RotateZ(gGfxMatrix, D_i2_80195668[2] * M_DTOR, 1);
                    Matrix_RotateY(gGfxMatrix, D_i2_80195668[1] * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, D_i2_80195668[0] * M_DTOR, 1);
                    Matrix_RotateZ(gGfxMatrix, 2.0f * -gFrameCount * M_DTOR, 1);
                    Matrix_Scale(gGfxMatrix, boss->fwork[45], boss->fwork[45], boss->fwork[45], 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_6009C30);
                }
                Matrix_Pop(&gGfxMatrix);
                Matrix_Pop(&gCalcMatrix);
            }
            return 1;
        case 34:
            arg3->x += boss->fwork[27];
            break;
        case 33:
            arg2->z -= boss->fwork[31];
            arg2->y -= boss->fwork[29];
            arg2->x -= boss->fwork[30];
            break;
        case 38:
            arg3->x += boss->fwork[28];
            break;
        case 37:
            arg2->z += boss->fwork[34];
            arg2->y += boss->fwork[32];
            arg2->x -= boss->fwork[33];
            break;
        case 35:
            arg2->x -= boss->fwork[14];
            arg2->y -= boss->fwork[16];
            arg2->z -= boss->fwork[15];
            if (boss->actionState == 0x14) {
                arg3->x += boss->fwork[14] * 0.2f;
                arg3->y += boss->fwork[14] * 0.1f;
            }
            break;
        case 39:
            arg2->x += boss->fwork[17];
            arg2->y -= boss->fwork[19];
            arg2->z += boss->fwork[18];
            if (boss->actionState == 0x14) {
                arg3->x += boss->fwork[17] * 0.1f;
                arg3->z += boss->fwork[17] * 0.2f;
            }
            break;
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_sx/func_i2_80193208.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_sx/func_i2_80193434.s")

void func_i2_80193800(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);

    actor->obj.status = 2;
    actor->obj.id = 0xC3;
    actor->obj.pos.x = D_i2_801956B0[arg1].x;
    actor->obj.pos.y = D_i2_801956B0[arg1].y;
    actor->obj.pos.z = D_i2_801956B0[arg1].z;
    actor->vel.z = 30.0f;
    actor->vel.y = -16.0f;
    actor->unk_0B6 = 0x14;
    actor->obj.rot.x = 15.0f;

    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x31000011U, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i2_801938D8(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i2_801956EC[arg1].x + gPlayer->camEye.x;
    actor->obj.pos.y = D_i2_801956EC[arg1].y + gPlayer->camEye.y;
    actor->obj.pos.z = D_i2_801956EC[arg1].z + gPlayer->camEye.z;
    actor->unk_0B8 = 1;
    actor->iwork[0xB] = 1;
    actor->vel.z = -30.0f;
    actor->vel.y = 0.0f;
    actor->obj.rot.y = 180.0f;
    actor->obj.rot.x = 10.0f;
    if (arg1 == 2) {
        actor->obj.rot.z = -20.0f;
    }
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x09000002U, &actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i2_80193A30(Player* player) {
    s32 i;
    Vec3f src;
    Vec3f dest;
    f32 x;
    f32 y;
    f32 z;
    f32 xzDeg;
    f32 xyzDeg;

    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;
            for (i = 0; i < 5; i++) {
                func_i2_80193800(&gActors[5 + i], i);
            }
            player->unk_1D0 = 1;
            player->camEye.x = D_80177978 = 100.0f;
            player->camEye.y = D_80177980 = 0.0f;
            player->camEye.z = D_80177988 = -200.0f;
            player->camAt.x = D_801779A0 = 0.0f;
            player->camAt.y = D_801779B8 = 0.0f;
            player->camAt.z = D_801779C0 = -1000.0f;
            player->unk_034 = -5.0f;
            player->unk_0D0 = 0.0f;
            D_80178340 = 0xFF;
            /* fallthrough */
        case 1:
            if (D_80177A80 < 3) {
                D_80178340 = 0xFF;
            }
            D_80177A48[0] = 0.5f;
            D_801779A0 = gActors[5].obj.pos.x;
            D_801779C0 = gActors[5].obj.pos.z;
            player->unk_034 -= 0.1f;
            if (D_80177A80 == 0x8C) {
                x = gActors[5].obj.pos.x;
                y = gActors[5].obj.pos.y - (player->camEye.y + 50.0f);
                z = gActors[5].obj.pos.z - (player->camEye.z + 20.0f);
                xzDeg = Math_RadToDeg(Math_Atan2F(x, z));
                xyzDeg = Math_RadToDeg(-Math_Atan2F(y, sqrtf(SQ(x) + SQ(z))));
                Matrix_RotateY(gCalcMatrix, M_DTOR * xzDeg, 0);
                Matrix_RotateX(gCalcMatrix, M_DTOR * xyzDeg, 1);
                src.y = src.x = 0.0f;
                src.z = 100.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                func_8006EEFC(0x64, 0.0f, player->camEye.y + 50.0f, player->camEye.z + 20.0f, dest.x, dest.y, dest.z,
                              xyzDeg, xzDeg, 0.0f);
            }
            if (D_80177A80 == 0x8F) {
                Object_Kill(&gPlayerShots->obj, &gPlayerShots->sfxPos);
                func_8007BFFC(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 0.0f, 0.0f, 0.0f, 3.0f,
                              0x28);
                func_8007D2C8(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 6.0f);
                func_8007B344(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 5.0f, 5);
                Object_Kill(&gActors[5].obj, &gActors[5].sfxPos);
                for (i = 0; i < 20; i++) {
                    func_80079618(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 0.5f);
                }
                func_8007A6F0(&gActors[5].obj.pos, 0x2903B009);
                player->unk_1D0 += 1;
                D_80177A48[0] = 0.1f;
            }
            break;
        case 2:
            if (D_80177A80 == 0xAA) {
                player->pos.x = 0.0f;
                player->pos.y = player->camEye.y + 50.0f;
                player->unk_1D0 += 1;
                player->pos.z = player->camEye.z + 20.0f;
                player->unk_194 = 10.0f;
                player->unk_190 = 10.0f;
                player->unk_0D0 = 30.0f;
                player->unk_0EC = -80.0f;
                player->unk_0E4 = -20.0f;
                Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                for (i = 6; i < 10; i++) {
                    Object_Kill(&gActors[i].obj, &gActors[i].sfxPos);
                }
                D_80177A48[0] = 0.0f;
            }
            break;
        case 3:
            if (D_80177A80 >= 0xC9) {
                D_801779A0 = player->pos.x;
                D_801779B8 = player->pos.y;
                D_801779C0 = player->pos.z;
                Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.01f, 0);
            }

            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.5f, 0.07f, 0);
            Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.2f, 2.0f, 0);
            Math_SmoothStepToF(&player->unk_0E4, 20.0f, 0.1f, 1.0f, 0);

            switch (D_80177A80) {
                case 0xC3:
                    if (gTeamShields[1] > 0) {
                        func_i2_801938D8(&gActors[0], 0);
                    }
                    break;
                case 0xD5:
                    if (gTeamShields[2] > 0) {
                        func_i2_801938D8(&gActors[1], 1);
                    }
                    break;
                case 0xE5:
                    if (gTeamShields[3] > 0) {
                        func_i2_801938D8(&gActors[2], 2);
                    }
                    break;
            }

            if (D_80177A80 >= 0x12D) {
                player->unk_1D0 += 1;
                player->timer_1F8 = 0x28;
                D_80177A48[0] = 0.0f;
                gActors[0].obj.pos.z -= player->pos.z;
                gActors[1].obj.pos.z -= player->pos.z;
                gActors[2].obj.pos.z -= player->pos.z;
                player->camEye.z -= player->pos.z;
                D_80177988 -= player->pos.z;
                player->camAt.z -= player->pos.z;
                D_801779C0 -= player->pos.z;
                player->pos.z = 0.0f;
                player->unk_0D0 = 0.0f;
            }
            break;
        case 4:
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.2f, 0.5f, 0);
            Math_SmoothStepToF(&player->pos.y, 350.0f, 0.1f, 15.0f, 0);
            Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 2.0f, 0);
            D_80177978 = player->pos.x;
            D_80177980 = (player->pos.y * player->unk_148) + 50.0f;
            D_80177988 = 400.0f;
            D_801779A0 = player->pos.x;
            D_801779B8 = (player->pos.y * player->unk_148) + 20.0f;
            D_801779C0 = player->unk_138;
            Math_SmoothStepToF(D_80177A48, 1.0f, 1.0f, 0.01f, 0);
            if (player->timer_1F8 == 0) {
                player->unk_0D0 = D_80161A54;
                func_8001D444(0U, D_80177C90, 0U, 0xFFU);
                D_80177838 = 0x50;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_1D0 = 0;
                player->timer_1F8 = 0;
                player->timer_1FC = 0;
                player->camEye.y = player->pos.y * player->unk_148 + 50.0f;
                player->camEye.z = 400.0f;
                player->camAt.y = player->pos.y * player->unk_148 + 20.0f;
                player->camAt.z = player->unk_138;
                player->camAt.x = player->camEye.x = player->pos.x;
                D_80178488 = 1;
                for (i = 0; i < 3; i++) {
                    Object_Kill(&gActors[i].obj, &gActors[i].sfxPos);
                }
            }
            break;
    }
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 20000.0f, 0);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * 0.017453292f), 1U);
    src.x = 0.0f;
    src.y = 0.0f;
    src.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
    player->vel.x = dest.x;
    player->vel.z = dest.z;
    player->vel.y = dest.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z + player->unk_08C;
}

void func_i2_801944D4(Actor* actor, s32 arg1) {
    Vec3f srcA;
    Vec3f destA;
    Vec3f srcB;
    Vec3f destB;
    Player* player = &gPlayer[0];

    Matrix_RotateY(gCalcMatrix, player->unk_0E8 * 0.017453292f, 0U);
    srcA.x = D_i2_80195710[arg1];
    srcA.y = D_i2_80195720[arg1];
    srcA.z = D_i2_80195730[arg1];
    srcB.x = D_i2_80195740[arg1];
    srcB.y = D_i2_80195750[arg1];
    srcB.z = D_i2_80195760[arg1];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &srcA, &destA);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &srcB, &destB);

    Actor_Initialize(actor);
    actor->obj.pos.x = player->pos.x + destA.x;
    actor->obj.pos.y = player->pos.y + destA.y;
    actor->obj.pos.z = player->unk_138 + destA.z;
    actor->fwork[0] = destB.x;
    actor->fwork[1] = destB.y;
    actor->fwork[2] = destB.z;
    actor->fwork[7] = Rand_ZeroOne() * 360.0f;
    actor->fwork[8] = Rand_ZeroOne() * 360.0f;
    actor->vel.x = player->vel.x;
    actor->vel.y = player->vel.y;
    actor->vel.z = player->vel.z;
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    Object_SetInfo(&actor->info, actor->obj.id);
    if (arg1 == 3) {
        actor->unk_0B6 = 1;
        actor->unk_0B8 = 0x14;
        actor->obj.rot.x = -player->unk_0E4 - 10.0f;
        actor->obj.rot.y = (player->unk_0E8 + 180.0f) - 10.0f;
        actor->fwork[9] = 10.0f;
        return;
    }
    actor->obj.rot.z = D_i2_80195770[arg1];
    actor->iwork[0xB] = 1;
    actor->iwork[0xE] = D_i2_8019577C[arg1];
    Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i2_80194728(Player* player) {
    Vec3f sp54;
    Vec3f sp48;
    s32 pad[5];

    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 3.0f,  0.0f);
    Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 3.0f,  0.0f);
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 3.0f,  0.0f);
    Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.1f, 3.0f,  0.0f);
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f,  0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);

    D_80178430 += 0.2f;
    D_8017842C -= 0.2f;

    switch (player->unk_1D0) {
        case 0:
            func_8001A38C(1U, &player->unk_460);
            player->unk_1D0 += 1;
            D_80177A48[1] = 0.05f;
            D_80177A48[0] = 0.02f;
            D_80177A48[2] = 0.0f;
            D_80177A48[3] = D_80177A48[2];
            D_80177A80 = 0;
            D_80177A48[2] = 100.0f;
            D_80177A48[4] = 100.0f;
            D_80177A48[5] = 0.0f;
            player->wings.unk_2C = 1;
            func_800A6148();

        case 1:
            if (D_80177A80 >= 0x3DF) {
                Math_SmoothStepToF(D_80177A48 + 3, 0.0f, 0.1f, 0.01f, 0.0f);
            } else if (D_80177A80 >= 0x79) {
                Math_SmoothStepToF(D_80177A48 + 3, -0.5f, 0.1f, 0.02f, 0.0f);
                Math_SmoothStepToF(D_80177A48 + 4, 300.0f, 0.1f, 2.0f, 0.0f);
                Math_SmoothStepToF(D_80177A48 + 5, -50.0f, 0.1f, 1.0f, 0.0f);
            }
            D_80177A48[2] += D_80177A48[3];
            Math_SmoothStepToF(&player->unk_0D0, 0.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.002f, 0.0f);
            Math_SmoothStepToF(D_80177A48 + 1, 0.1f, 1.0f, 0.002f, 0.0f);
            Matrix_RotateY(gCalcMatrix, player->unk_0E8 * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 1U);
            Matrix_Push(&gCalcMatrix);
            Matrix_RotateY(gCalcMatrix, D_80177A48[2] * 0.017453292f, 1U);
            sp54.x = 0.0f;
            sp54.y = 30.0f;
            sp54.z = D_80177A48[4];
            Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);
            Math_SmoothStepToF(&player->camEye.x, player->pos.x + sp48.x, D_80177A48[0], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, player->pos.y + sp48.y, D_80177A48[0], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.z, player->unk_138 + D_80177D20 + sp48.z, D_80177A48[0], 500.0f, 0.0f);
            Matrix_Pop(&gCalcMatrix);
            sp54.x = 0.0f;
            sp54.y = 0;
            sp54.z = D_80177A48[5];
            Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);
            Math_SmoothStepToF(&player->camAt.x, player->pos.x + sp48.x, D_80177A48[1], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, player->pos.y + sp48.y, D_80177A48[1], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, player->unk_138 + D_80177D20 + sp48.z, D_80177A48[1], 500.0f, 0.0f);
            break;
        case 2:
            player->unk_0D0 += 2.0f;
            if (player->timer_1F8 == 0) {
                Math_SmoothStepToAngle(&player->unk_0E4, 20.0f, 0.1f, 0.5f, 0.0f);
            }

            if (D_80177A80 == 0x4AB) {
                func_8001DBD0(0xA);
            }

            if (D_80177A80 >= 0x4AC) {
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178358 = 0xFF;
                if (D_80178340 == 0xFF) {
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    D_8017837C = 4;
                    player->timer_1F8 = 0;
                    func_800A6148();
                    D_800D3180[2] = Play_CheckMedalStatus(0x96U) + 1;
                }
            }
            break;
    }

    switch (D_80177A80) {
        case 0x2C2:
            D_80177830 = 1;
            break;

        case 0x38A:
            D_80177830 = 0;
            break;

        case 0x64:
            if (gTeamShields[1] > 0) {
                func_i2_801944D4(&gActors[1], 0);
            }
            if (gTeamShields[2] > 0) {
                func_i2_801944D4(&gActors[2], 1);
            }
            if (gTeamShields[3] > 0) {
                func_i2_801944D4(&gActors[3], 2);
            }
            break;
        case 0x1E:
            func_8001D444(0U, 0x26U, 0U, 0xFFU);
            break;
        case 0x3C:
            D_80177840 = 0x64;
            break;

        case 0x38E:
            gOverlayStage = 1;
            break;

        case 0x398:
            gActors[3].iwork[14] = 0;
            gActors[2].iwork[14] = 0;
            gActors[1].iwork[14] = 0;
            func_i2_801944D4(gActors, 3);
            Audio_PlaySfx(0x11030010U, &gActors->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 0x41A:
            gActors[1].unk_0B8 = 0xA;
            break;

        case 0x442:
            gActors[2].unk_0B8 = 0xA;
            break;

        case 0x460:
            gActors[3].unk_0B8 = 0xA;
            break;

        case 0x488:
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_1D0 = 2;
            player->timer_1F8 = 0x28;
            player->unk_194 = 5.0f;
            player->unk_190 = 5.0f;
            break;
    }
    if (gTeamShields[2] != -2) {
        switch (D_80177A80) {
            case 0x8C:
                func_800BA808(gMsg_ID_20010, RCID_FOX);
                break;

            case 0xE4:
                switch (gTeamShields[2]) {
                    case -1:
                        func_800BA808(gMsg_ID_20339, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20345, RCID_ROB64);
                        break;

                    default:
                        func_80048AC0(2);
                        break;
                }
                break;

            case 0x177:
                switch (gTeamShields[3]) {
                    case -1:
                        func_800BA808(gMsg_ID_20338, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20344, RCID_ROB64);
                        break;

                    default:
                        func_80048AC0(3);
                        break;
                }
                break;

            case 0x209:
                func_80048AC0(1);
                switch (gTeamShields[1]) {
                    case -1:
                        func_800BA808(gMsg_ID_20337, RCID_ROB64);
                        break;
                    case 0:
                        func_800BA808(gMsg_ID_20343, RCID_ROB64);
                        break;

                    default:
                        func_80048AC0(1);
                        break;
                }
                break;
        }
    } else {
        switch (D_80177A80) {
            case 0x8C:
                func_800BA808(gMsg_ID_5500, RCID_FOX);
                break;

            case 0x10E:
                func_800BA808(gMsg_ID_5503, RCID_ROB64);
                break;

            case 0x1A7:
                switch (gTeamShields[3]) {
                    case -1:
                        func_800BA808(gMsg_ID_20338, RCID_ROB64);
                        break;
                    case 0:
                        func_800BA808(gMsg_ID_20344, RCID_ROB64);
                        break;
                    default:
                        func_800BA808(gMsg_ID_5501, RCID_PEPPY);
                        break;
                }
                break;

            case 0x239:
                func_80048AC0(1);
                switch (gTeamShields[1]) {
                    case -1:
                        func_800BA808(gMsg_ID_20337, RCID_ROB64);
                        break;
                    case 0:
                        func_800BA808(gMsg_ID_20343, RCID_ROB64);
                        break;
                    default:
                        func_800BA808(gMsg_ID_5502, RCID_FALCO);
                        break;
                }
                break;
        }
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_4D8) * 0.017453292f), 1U);
    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = player->unk_0D0 + player->unk_110;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    player->vel.x = sp48.x;
    player->vel.z = sp48.z;
    player->vel.y = sp48.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z + player->unk_08C;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * 0.017453292f) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * 0.017453292f);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_sx/D_i2_80195A50.s")

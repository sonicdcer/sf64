#include "global.h"

s32 D_i2_80195D80;
f32 D_i2_80195D88[3];
f32 D_i2_80195D98[3];

s32 D_i2_80195640 = 0;
Vec3f D_i2_80195644 = { 73.0f, -102.0f, 80.0f };
Vec3f D_i2_80195650 = { 90.0f, 0.0f, 0.0f };
Vec3f D_i2_8019565C = { 73.0f, -102.0f, -80.0f };
Vec3f D_i2_80195668 = { 90.0f, 0.0f, 0.0f };

extern Gfx D_60010C0[];
extern Gfx D_6006810[];
extern Gfx D_6009C30[];
extern AnimationHeader D_6009FF8;
extern AnimationHeader D_600A2D4;
extern AnimationHeader D_600F890;
extern AnimationHeader D_60123BC;
extern AnimationHeader D_6013798;
extern AnimationHeader D_60158C4;
extern AnimationHeader D_6016E28;
extern AnimationHeader D_601AA28;
extern AnimationHeader D_601C690;
extern AnimationHeader D_60206DC;
extern Limb* D_6020C68;
extern Gfx D_6020D20[];
extern Gfx D_603265C[];
extern Gfx D_6032768[];
extern f32 D_60328CC[];
extern s32 D_800C9E90[];

extern void func_i2_8018F030(void);
extern s32 func_i2_80192AF0(s32, Gfx**, Vec3f*, Vec3f*, void*);
extern void func_i2_80193208(s32, Vec3f*, void*);
extern void func_8001D9E0(s32, u16, s32, s32, s32);
extern void func_800B5D30(Player*, s32);

void func_i2_8018F030(void) {
    s32 i;
    Actor* actor = &gActors[0];

    for (i = 0; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status == OBJ_FREE) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = OBJ_ACTOR_203;
            actor->unk_0B6 = 1;
            actor->obj.rot.y = 180.0f;
            actor->obj.pos.x = gPlayer->camEye.x - 300.0f;
            actor->obj.pos.y = gPlayer->camEye.y + 200.0f;
            actor->obj.pos.z = gPlayer->camEye.z - D_80177D20 + 300.0f;
            actor->iwork[11] = 1;
            actor->unk_0E4 = 2;
            Object_SetInfo(&actor->info, actor->obj.id);
            Radio_PlayMessage(gMsg_ID_5475, RCID_SLIPPY);
            break;
        }
    }
}

void func_i2_8018F124(void) {
    Actor* actor = &gActors[50];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_203;
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

void func_i2_8018F330(Actor* actor) {
    f32 sp34;

    switch (actor->unk_0B6) {
        case 0:
            actor->obj.rot.x += 7.0f;
            actor->obj.rot.y += 5.0f;
            break;

        case 1:
            actor->unk_0F4.z += 3.0f;
            actor->obj.rot.z = __sinf((actor->unk_0F4.z + 90.0f) * M_DTOR) * 60.0f;
            sp34 = fabsf(actor->obj.pos.z - gBosses[0].obj.pos.z) * 0.1f;
            Math_SmoothStepToF(&actor->obj.pos.x, gBosses[0].obj.pos.x + __sinf(actor->unk_0F4.z * M_DTOR) * sp34, 0.1f,
                               20.0f, 0.0f);
            Math_SmoothStepToF(&actor->obj.pos.y, gBosses[0].obj.pos.y, 0.1f, 20.0f, 0.0f);
            Math_SmoothStepToF(&actor->obj.pos.z, gBosses[0].obj.pos.z, 1.0f, 55.0f, 0);
            if (gBosses[0].state == 20) {
                actor->unk_0B6 = 10;
                break;
            }

            if (!(gGameFrameCount & 3) && (Rand_ZeroOne() < 0.2f)) {
                func_i2_8018F1DC(actor);
            }

            if ((gBosses[0].unk_04C == 75) && (gBosses[0].state == 85)) {
                actor->unk_0B6 = 2;
                actor->vel.x = 10.0f;
                actor->vel.y = -10.0f;
                actor->vel.z = 30.0f;
                Radio_PlayMessage(gMsg_ID_4111, RCID_SLIPPY);
                func_8007A6F0(&actor->obj.pos, 0x2903A008);
                gBosses[0].swork[6] = 0;
                gTeamShields[2] = -2;
                gPlayer->state_1C8 = PLAYERSTATE_1C8_0;
                actor->timer_0BC = 200;
                actor->iwork[14] = 3;
                actor->fwork[0] = 0.0f;
                actor->fwork[1] = 0.0f;
                D_80161A44 = 30000.0f;
                func_i2_8018F124();
            }
            break;

        case 2:
            if (actor->timer_0BC == 100) {
                Radio_PlayMessage(gMsg_ID_20294, RCID_FOX);
            }

            actor->obj.rot.x += 5.5f;
            actor->obj.rot.y += 5.0f;

            if (!(gGameFrameCount & 7)) {
                func_8007D10C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.5f);
            }

            Math_SmoothStepToF(&actor->fwork[0], 0.5f, 1.0f, 0.01f, 0);
            Math_SmoothStepToF(&actor->fwork[1], 0.1f, 1.0f, 0.01f, 0);
            Math_SmoothStepToF(&gPlayer->camAt.x, actor->obj.pos.x, actor->fwork[0], 100.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer->camAt.y, actor->obj.pos.y, actor->fwork[0], 100.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer->camAt.z, actor->obj.pos.z + D_80177D20, actor->fwork[0], 100.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer->camEye.x, actor->obj.pos.x - 30.0f, actor->fwork[1], 20.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer->camEye.y, actor->obj.pos.y, actor->fwork[1], 20.0f, 0.0f);
            if (actor->timer_0BC == 0) {
                gPlayer->state_1C8 = PLAYERSTATE_1C8_3;
                if (gPlayer->unk_238 != 0) {
                    func_800B5D30(gPlayer, 1);
                }
                D_80161A44 = 12800.0f;
                Object_Kill(&gActors[50].obj, gActors[50].sfxPos);
            }
            break;

        case 10:
            Math_SmoothStepToF(&actor->obj.rot.y, 90.0f, 0.1f, 10.0f, 0.0f);
            Math_SmoothStepToF(&actor->obj.rot.z, 90.0f, 1.0f, 10.0f, 0.0f);
            Math_SmoothStepToF(&actor->obj.pos.x, gBosses[0].obj.pos.x + 10000.0f, 0.1f, 40.0f, 0.0f);
            Math_SmoothStepToF(&actor->obj.pos.y, gBosses[0].obj.pos.y + 5000.0f, 0.1f, 10.0f, 0.0f);
            Math_SmoothStepToF(&actor->obj.pos.z, gBosses[0].obj.pos.z, 1.0f, 55.0f, 0.0f);
            break;
    }
}

void func_i2_8018F884(Actor* actor) {
    switch (actor->unk_0B6) {
        case 0:
            gSPDisplayList(gMasterDisp++, D_6020D20);
            break;

        case 1:
        case 2:
        case 10:
            func_8005B388(actor);
            break;

        case -1:
            actor->obj.rot.y = (-gPlayer[gPlayerNum].unk_058 * 180.0f) / M_PI;
            actor->obj.rot.x = (gPlayer[gPlayerNum].unk_05C * 180.0f) / M_PI;
            RCP_SetupDL(&gMasterDisp, 0x40);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 220, 70, 30, 255);
            Matrix_Scale(gGfxMatrix, 70.0f, 70.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_60010C0);

        default:
            break;
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
        if (actor->obj.status == OBJ_FREE) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
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

void func_i2_8018FBBC(Vec3f* pos) {
    s32 i;
    Actor* actor;
    f32 xPos;
    f32 yPos;
    Vec3f src;
    Vec3f dest;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        actor = &gActors[i];
        if ((actor->obj.status >= OBJ_ACTIVE) && (fabsf(pos->x - actor->obj.pos.x) < 2500.0f) &&
            (fabsf(pos->z - actor->obj.pos.z) < 2500.0f) && (actor->state != 1000) && (actor->timer_0C2 == 0) &&
            (actor->scale < 0.0f) &&
            func_80062DBC(pos, actor->info.hitbox, &actor->obj, actor->vwork[29].x, actor->vwork[29].y,
                          actor->vwork[29].z + actor->unk_0F4.z)) {
            func_800A6028(actor->sfxPos, 0x09000004);
            actor->state = 1000;
            xPos = Math_Atan2F(actor->obj.pos.x - pos->x, actor->obj.pos.z - pos->z);
            yPos = -Math_Atan2F(actor->obj.pos.y - pos->y,
                                sqrtf(SQ(actor->obj.pos.x - pos->x) + SQ(actor->obj.pos.z - pos->z)));
            Matrix_RotateY(gCalcMatrix, xPos, 0);
            Matrix_RotateX(gCalcMatrix, yPos, 1);
            src.x = 0.0f;
            src.y = 0.0f;
            src.z = 20.0f;
            Matrix_MultVec3f(gCalcMatrix, &src, &dest);
            actor->vel.x = dest.x;
            actor->vel.z = 10.0f;
            actor->vel.y = dest.y;
            actor->fwork[15] = actor->vel.x * 0.2f;
            actor->fwork[16] = actor->vel.y * -0.2f;
            actor->timer_0C6 = 10;
        }
    }
}

void func_i2_8018FE38(Boss* boss) {
    Vec3f sp2C;
    Vec3f sp20;

    if (boss->state == 0) {
        Animation_GetFrameData(&D_60206DC, boss->unk_04C, boss->vwork);
        Math_Vec3fFromAngles(&sp20, boss->obj.rot.x, boss->obj.rot.y, 20.0f);
        boss->vel.x = sp20.x;
        boss->vel.y = sp20.y;
        boss->vel.z = sp20.z;
        boss->state++;
    } else {
        if (boss->obj.id == OBJ_BOSS_304) {
            sp2C.x = boss->fwork[11];
            sp2C.y = boss->fwork[12];
            sp2C.z = boss->fwork[13];
        } else {
            sp2C.x = boss->fwork[8];
            sp2C.y = boss->fwork[9];
            sp2C.z = boss->fwork[10];
        }
        func_i2_8018FBBC(&sp2C);
    }
    if (boss->dmgType == DMG_BEAM) {
        boss->dmgType = DMG_NONE;
        func_8007A6F0(&boss->obj.pos, 0x29121007);
    }
}

void func_i2_8018FF20(Boss* boss) {
    func_i2_8018FE38(boss);
}

bool func_i2_8018FF40(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    if (((limbIndex >= 12) && (limbIndex < 22)) || ((limbIndex >= 36) && (limbIndex < 40))) {
        return 0;
    }
    *dList = NULL;
    return 0;
}

void func_i2_8018FF84(Boss* boss) {
    Animation_DrawSkeleton(3, &D_6020C68, boss->vwork, func_i2_8018FF40, func_i2_80193208, boss, gCalcMatrix);
}

bool func_i2_8018FFDC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    if (((limbIndex >= 2) && (limbIndex < 12)) || ((limbIndex >= 32) && (limbIndex < 36))) {
        return 0;
    }
    *dList = NULL;
    return 0;
}

void func_i2_80190020(Boss* boss) {
    Animation_DrawSkeleton(3, &D_6020C68, boss->vwork, func_i2_8018FFDC, func_i2_80193208, boss, gCalcMatrix);
}

void func_i2_80190078(Boss* boss) {
    u8 attack;
    s32 i;
    Vec3f sp80[50];
    Vec3f sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s32 frameData;

    gBossFrameCount++;
    D_80178540 = 5;
    attack = false;

    if (gBossFrameCount < 150) {
        D_80178570 = 20;
        D_80178574 = 20;
        D_80178578 = 20;
    }

    PRINTF("たかおちゃん よう見ときや！\n");                      // Takao-chan, look at it!
    PRINTF("ボス面累計時間 : <%d>フレーム\n\n", gBossFrameCount); // Boss stage total time: <%d> frames.

    switch (gBossFrameCount) {
        case 175:
            Radio_PlayMessage(gMsg_ID_5473, RCID_FOX);
            break;

        case 300:
            Radio_PlayMessage(gMsg_ID_5492, RCID_BOSS_SECTORX);
            break;

        case 400:
            Radio_PlayMessage(gMsg_ID_2225, RCID_SLIPPY);
            break;

        case 556:
            gShowBossHealth = 1;
            break;

        case 540:
            Radio_PlayMessage(gMsg_ID_5493, RCID_BOSS_SECTORX);
            break;
    }

    if (gBossFrameCount > 556) {
        // approximately 700 / 256
        gBossHealthBar = (boss->swork[3] + boss->health) / 2.73f;
    }

    sp68 = gPlayer[0].pos.x - boss->obj.pos.x;
    sp64 = gPlayer[0].unk_138 - (boss->obj.pos.z + (-237.0f));

    if (boss->swork[7] != 0) {
        sp70 = Math_RadToDeg(Math_Atan2F(sp68, sp64));
        sp6C = Math_RadToDeg(-Math_Atan2F(gPlayer[0].pos.y - (boss->obj.pos.y + 334.0f), sqrtf(SQ(sp68) + SQ(sp64))));
        Math_SmoothStepToAngle(&boss->fwork[4], sp70, 0.1f, 5.0f, 0.00001f);
        Math_SmoothStepToAngle(&boss->fwork[6], sp6C, 0.1f, 5.0f, 0.00001f);
    } else {
        Math_SmoothStepToF(&boss->fwork[4], 182.0f, 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToAngle(&boss->fwork[6], 0.0f, 0.1f, 1.0f, 0.00001f);
    }

    boss->fwork[5] = __sinf((boss->timer_054 * 50.0f) * M_DTOR) * boss->timer_054;
    boss->fwork[7] = __sinf((boss->timer_054 * 30.0f) * M_DTOR) * boss->timer_054 * 0.5f;

    Math_SmoothStepToF(&boss->obj.pos.z, gPlayer[0].pos.z + boss->fwork[1], 0.1f, boss->fwork[42], 0);
    Math_SmoothStepToF(&boss->obj.pos.y, boss->fwork[2], 0.05f, boss->fwork[43], 0);
    Math_SmoothStepToF(&boss->obj.pos.x, boss->fwork[3], 0.05f, boss->fwork[44], 0);
    Math_SmoothStepToAngle(&boss->obj.rot.z, boss->fwork[41], 0.05f, 2.0f, 0);

    if (boss->state != 5) {
        Math_SmoothStepToF(&boss->fwork[29], 0.f, 0.1f, 50.0f, 0);
        Math_SmoothStepToF(&boss->fwork[30], 0.f, 0.1f, 50.0f, 0);
        Math_SmoothStepToF(&boss->fwork[31], 0.f, 0.1f, 50.0f, 0);
        Math_SmoothStepToF(&boss->fwork[32], 0.f, 0.1f, 50.0f, 0);
        Math_SmoothStepToF(&boss->fwork[33], 0.f, 0.1f, 50.0f, 0);
        Math_SmoothStepToF(&boss->fwork[34], 0.f, 0.1f, 50.0f, 0);
        if (boss->state != 4) {
            Math_SmoothStepToF(&boss->fwork[27], 0.0f, 0.1f, 2.0f, 0);
            Math_SmoothStepToF(&boss->fwork[28], 0.0f, 0.1f, 2.0f, 0);
        }
    }

    if (boss->dmgType != 0) {
        boss->dmgType = 0;
        if (boss->swork[0] == 1) {
            if ((boss->dmgPart == 0) && ((boss->fwork[4] < 45.0f) || (boss->fwork[4] > 315.0f))) {
                Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->swork[3] -= boss->damage;
                boss->timer_054 = 20;
                func_8007C120(boss->obj.pos.x, boss->obj.pos.y + 334.0f, -237.0f + boss->obj.pos.z, boss->vel.x,
                              boss->vel.y, boss->vel.z, 0.2f, 20);

                if (boss->swork[3] <= 0) {
                    func_8007BFFC(boss->obj.pos.x, boss->obj.pos.y + 300.0f, boss->obj.pos.z, 0.0f, 0.0f, 0.0f, 10.0f,
                                  50);

                    func_8007C120(boss->obj.pos.x, boss->obj.pos.y + 334.0f, -237.0f + boss->obj.pos.z, boss->vel.x,
                                  boss->vel.y, boss->vel.z, 0.15f, 70);
                    for (i = 0; i < 10; i++) {
                        func_800A69F8(4, boss->obj.pos.x, boss->obj.pos.y + 334.0f, -237.0f + boss->obj.pos.z);
                    }

                    func_8007A6F0(&boss->obj.pos, 0x2940C00A);
                    boss->state = 7;
                    boss->timer_050 = 80;
                    boss->swork[0] = 0;
                    boss->timer_05C = 80;
                    boss->swork[1] = 0;
                    boss->fwork[0] = 0.0f;
                    boss->unk_04C = 0;
                    boss->swork[4] = 1;
                    boss->health = 1;
                    boss->swork[7] = 1;
                    func_8001A55C(D_i2_80195D88, 0x31032061);
                    func_8001A55C(D_i2_80195D98, 0x31032061);
                    boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_603265C);
                    func_800182F4(0x100100FF);
                    func_800182F4(0x110100FF);
                    boss->timer_052 = 40;
                    D_Timer_80161A60 = 5;
                }
            } else {
                func_8007A6F0(&boss->obj.pos, 0x29121007);
            }
        } else {
            func_8007A6F0(&boss->obj.pos, 0x29121007);
        }

        if (boss->swork[0] == 2) {
            if (boss->dmgPart == 0) {
                boss->health -= boss->damage;

                Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

                if (boss->health <= 0) {
                    D_8017796C = -1;
                    boss->obj.rot.y = Math_ModF(boss->obj.rot.y, 360.0f);
                    boss->state = 20;
                    boss->timer_050 = 300;
                    boss->fwork[0] = 0.0f;
                    boss->unk_04C = 0;

                    Radio_PlayMessage(gMsg_ID_5499, RCID_BOSS_SECTORX);

                    func_8007BFFC(boss->obj.pos.x, boss->obj.pos.y + 300.0f, boss->obj.pos.z, 0.0f, 0.0f, 0.0f, 10.0f,
                                  50);

                    func_8007C120(boss->obj.pos.x, boss->obj.pos.y + 334.0f, -237.0f + boss->obj.pos.z, boss->vel.x,
                                  boss->vel.y, boss->vel.z, 0.15f, 70);

                    for (i = 0; i < 10; i++) {
                        func_800A69F8(4, boss->obj.pos.x, boss->obj.pos.y + 334.0f, -237.0f + boss->obj.pos.z);
                    }

                    boss->swork[4] = 2;

                    Audio_PlaySfx(0x2940D09A, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

                    D_Timer_80161A60 = 8;
                    func_800182F4(0x100100FF);
                    func_800182F4(0x110100FF);
                    func_80042EC0(boss);
                    boss->info.hitbox = D_800CBF34;
                }

                boss->timer_054 = 20;
                boss->timer_05C = boss->timer_054;
                func_8007C120(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, boss->vel.x, boss->vel.y, boss->vel.z,
                              0.2f, 10);
            } else {
                func_8007A6F0(&boss->obj.pos, 0x29121007);
            }
        }
    }

    if (((boss->state != 8) && (boss->state != 20)) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_3)) {
        boss->state = 8;
        boss->fwork[0] = 0.0f;
        func_8001A55C(D_i2_80195D88, 0x31032061);
        func_8001A55C(D_i2_80195D98, 0x31032061);
    }

    boss->vel.z = -20.0f;

    switch (boss->state) {
        case 0:
            boss->swork[7] = 1;
            boss->obj.pos.x = gPlayer[0].unk_0AC;
            boss->swork[0] = 0;
            Animation_GetFrameData(&D_60206DC, boss->unk_04C, boss->vwork);
            boss->fwork[1] = -2000.0f;
            boss->fwork[14] = 300.0f;
            boss->fwork[17] = -300.0f;
            boss->fwork[16] = 3500.0f;
            boss->fwork[19] = 3000.0f;
            boss->state = 90;
            boss->timer_050 = 450;
            boss->swork[3] = 400;
            boss->health = 300;
            boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6032550);
            gBossActive = 1;
            func_8001D444(0, D_800C9E90[gCurrentLevel], 0, 255);
            boss->swork[6] = 1;
            boss->fwork[44] = 5.0f;
            boss->fwork[43] = 5.0f;
            boss->fwork[42] = 30.0f;
            break;

        case 90:
            if ((boss->timer_050 == 110) || (boss->timer_050 == 66)) {
                Audio_PlaySfx(0x29433022, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (fabsf(Math_SmoothStepToF(&boss->fwork[16], 0.0f, 0.1f, 10.0f, 0)) < 8.0f) {
                Math_SmoothStepToF(&boss->fwork[14], 0.0f, 0.2f, 10.0f, 0);
                if (!(boss->timer_050 & 7)) {
                    func_8007C120(boss->obj.pos.x + 312.0f, boss->obj.pos.y, boss->obj.pos.z - 173.0f, boss->vel.x,
                                  boss->vel.y, boss->vel.z, 0.2f, 8);
                }
            }

            if (fabsf(Math_SmoothStepToF(&boss->fwork[19], 0.0f, 0.1f, 10.0f, 0)) < 8.0f) {
                Math_SmoothStepToF(&boss->fwork[17], 0.0f, 0.2f, 10.0f, 0);
                if (!(boss->timer_050 & 7)) {
                    func_8007C120(boss->obj.pos.x - 312.0f, boss->obj.pos.y, boss->obj.pos.z - 173.0f, boss->vel.x,
                                  boss->vel.y, boss->vel.z, 0.2f, 8);
                }
            }

            if (boss->timer_050 == 0) {
                boss->state = 100;
                boss->fwork[0] = 0.0f;
                Audio_PlaySfx(0x29400023, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            boss->fwork[43] = boss->fwork[44] = 5.0f;
            boss->fwork[42] = 30.0f;
            break;

        case 100:
            boss->fwork[1] = -2000.0f;

            frameData = Animation_GetFrameData(&D_60206DC, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(&boss->fwork[0], 1.0f, 1.0f, 0.05f, 0);
            boss->unk_04C++;

            if (boss->unk_04C >= Animation_GetFrameCount(&D_60206DC)) {
                boss->unk_04C = 0;
                boss->state = 1;
                boss->fwork[0] = 0.0f;
                Audio_PlaySfx(0x29402024, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            boss->fwork[43] = boss->fwork[44] = 5.0f;
            boss->fwork[42] = 30.0f;
            break;

        case 1:
            boss->fwork[1] = -1800.0f;
            boss->fwork[3] = gPlayer[0].pos.x;
            boss->fwork[2] = gPlayer[0].pos.y;
            boss->fwork[42] = 30.0f;
            boss->fwork[44] = 5.0f;
            boss->fwork[43] = 5.0f;

            frameData = Animation_GetFrameData(&D_6016E28, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.05f, 0);

            boss->unk_04C++;
            if (boss->unk_04C >= Animation_GetFrameCount(&D_6016E28)) {
                boss->unk_04C = 0;
                boss->state = 2;
                boss->fwork[0] = 0.0f;
                boss->swork[1] = 1;
                boss->swork[0] = 1;
                Radio_PlayMessage(gMsg_ID_5494, RCID_BOSS_SECTORX);
            }
            break;

        case 2:
            attack = true;
            boss->fwork[3] = gPlayer[0].pos.x;
            boss->fwork[2] = gPlayer[0].pos.y;

            if (boss->unk_04C > 60) {
                boss->fwork[1] = -1000.0f;
                Math_SmoothStepToF(&boss->fwork[42], 100.0f, 1.0f, 20.0f, 0);
                boss->fwork[43] = boss->fwork[44] = 10.0f;
            } else {
                boss->fwork[1] = -2000.0f;
                Math_SmoothStepToF(&boss->fwork[42], 30.0f, 1.0f, 3.0f, 0);
                boss->fwork[43] = boss->fwork[44] = 10.0f;
            }

            if (boss->unk_04C == 60) {
                Audio_PlaySfx(0x2902401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->fwork[42] = 0.0f;
            }

            frameData = Animation_GetFrameData(&D_60123BC, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.05f, 0);

            boss->unk_04C++;
            if (boss->unk_04C >= Animation_GetFrameCount(&D_60123BC)) {
                boss->unk_04C = 0;
                boss->state = 3;
                boss->fwork[42] = boss->fwork[43] = boss->fwork[44] = boss->fwork[0] = 0.0f;
                boss->swork[7] = 0;
            }
            break;

        case 3:
            attack = true;
            boss->fwork[3] = gPlayer[0].pos.x;
            boss->fwork[2] = gPlayer[0].pos.y;

            if (boss->unk_04C >= 61) {
                boss->fwork[1] = -1000.0f;
                Math_SmoothStepToF(&boss->fwork[42], 100.0f, 1.0f, 20.0f, 0);
                boss->fwork[44] = 10.0f;
                boss->fwork[43] = 10.0f;
            } else {
                boss->fwork[1] = -2500.0f;
                Math_SmoothStepToF(&boss->fwork[42], 30.0f, 1.0f, 3.0f, 0);
                boss->fwork[44] = 10.0f;
                boss->fwork[43] = 10.0f;
            }

            if (boss->unk_04C == 60) {
                Audio_PlaySfx(0x2902401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->fwork[42] = 0.0f;
            }

            frameData = Animation_GetFrameData(&D_6013798, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.05f, 0);

            boss->unk_04C++;
            if (boss->unk_04C >= Animation_GetFrameCount(&D_6013798)) {
                boss->unk_04C = 0;
                boss->fwork[0] = 0.0f;
                if (boss->swork[3] <= 250) {
                    boss->state = 4;
                    boss->timer_050 = 100;
                    Radio_PlayMessage(gMsg_ID_5495, RCID_BOSS_SECTORX);
                    boss->fwork[44] = 0.0f;
                    boss->fwork[43] = 0.0f;
                    boss->fwork[42] = 0.0f;
                } else {
                    boss->state = 1;
                    boss->swork[1] = 1;
                    boss->swork[7] = 1;
                }
            }
            break;

        case 4:
            boss->swork[7] = 0;
            boss->fwork[1] = -3000.0f;
            boss->fwork[3] = gPlayer[0].pos.x;
            boss->fwork[2] = gPlayer[0].pos.y;

            Math_SmoothStepToF(&boss->fwork[44], 10.0f, 1.0f, 1.0f, 0);
            Math_SmoothStepToF(&boss->fwork[43], 10.0f, 1.0f, 1.0f, 0);
            Math_SmoothStepToF(&boss->fwork[42], 50.0f, 1.0f, 3.0f, 0);

            frameData = Animation_GetFrameData(&D_6016E28, 0, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.05f, 0);
            Math_SmoothStepToF(&boss->fwork[27], 30.0f, 0.05f, 1.0f, 0);
            Math_SmoothStepToF(&boss->fwork[28], -30.0f, 0.05f, 1.0f, 0);

            if (boss->timer_050 == 0) {
                boss->state = 5;
                boss->timer_050 = 100;
                Radio_PlayMessage(gMsg_ID_5496, RCID_FOX);
            }
            break;

        case 5:
            sp74.x = boss->fwork[8] + boss->obj.pos.x;
            sp74.y = boss->fwork[9] + boss->obj.pos.y;
            sp74.z = boss->fwork[10] + boss->obj.pos.z;

            func_8005F0E8(D_i2_80195D88, &sp74);
            Audio_PlaySfx(0x31032061, D_i2_80195D88, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            sp74.x = boss->fwork[11] + boss->obj.pos.x;
            sp74.y = boss->fwork[12] + boss->obj.pos.y;
            sp74.z = boss->fwork[13] + boss->obj.pos.z;

            func_8005F0E8(D_i2_80195D98, &sp74);
            Audio_PlaySfx(0x31032061, D_i2_80195D98, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            Math_SmoothStepToF(&boss->fwork[27], 30.0f, 0.05f, 1.0f, 0);
            Math_SmoothStepToF(&boss->fwork[28], -30.0f, 0.05f, 1.0f, 0);

            sp60 = fabsf(boss->obj.pos.x + boss->fwork[8] - gPlayer[0].pos.x) * 0.1f;

            if (sp60 > 5.0f) {
                sp60 = 5.0f;
            }

            if ((boss->obj.pos.x + boss->fwork[8]) < gPlayer[0].pos.x) {
                boss->fwork[29] += sp60;
            }

            if (gPlayer[0].pos.x < (boss->obj.pos.x + boss->fwork[8])) {
                boss->fwork[29] -= sp60;
            }

            sp60 = fabsf((boss->obj.pos.y + boss->fwork[9]) - gPlayer[0].pos.y) * 0.1f;

            if (sp60 > 5.0f) {
                sp60 = 5.0f;
            }

            if ((boss->obj.pos.y + boss->fwork[9]) < gPlayer[0].pos.y) {
                boss->fwork[30] += sp60;
            }

            if (gPlayer[0].pos.y < (boss->obj.pos.y + boss->fwork[9])) {
                boss->fwork[30] -= sp60;
            }

            sp60 = fabsf((boss->obj.pos.x + boss->fwork[11]) - gPlayer[0].pos.x) * 0.1f;

            if (sp60 > 5.0f) {
                sp60 = 5.0f;
            }

            if ((boss->obj.pos.x + boss->fwork[11]) < gPlayer[0].pos.x) {
                boss->fwork[32] += sp60;
            }

            if (gPlayer[0].pos.x < (boss->obj.pos.x + boss->fwork[11])) {
                boss->fwork[32] -= sp60;
            }

            sp60 = fabsf((boss->obj.pos.y + boss->fwork[12]) - gPlayer[0].pos.y) * 0.1f;

            if (sp60 > 5.0f) {
                sp60 = 5.0f;
            }

            if ((boss->obj.pos.y + boss->fwork[12]) < gPlayer[0].pos.y) {
                boss->fwork[33] += sp60;
            }

            if (gPlayer[0].pos.y < (boss->obj.pos.y + boss->fwork[12])) {
                boss->fwork[33] -= sp60;
            }

            Math_SmoothStepToF(&boss->fwork[31], 4000.0f, 1.0f, 80.0f, 0);

            if (boss->timer_050 < 70) {
                Math_SmoothStepToF(&boss->fwork[34], 4000.0f, 1.0f, 80.0f, 0);
            }

            if (boss->timer_050 == 0) {
                boss->state = 6;
                boss->timer_050 = 122;
            }
            break;

        case 6:
            if ((boss->timer_050 == 20) || (boss->timer_050 == 30)) {
                Audio_PlaySfx(0x29433022, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (boss->timer_050 == 0) {
                boss->unk_04C = 0;
                boss->state = 1;
                boss->swork[1] = 1;
                func_8001A55C(D_i2_80195D88, 0x31032061);
                func_8001A55C(D_i2_80195D98, 0x31032061);
                boss->fwork[0] = 0.0f;
                boss->fwork[44] = 0.0f;
                boss->fwork[43] = 0.0f;
                boss->fwork[42] = 0.0f;
                boss->swork[7] = 1;
            }
            break;

        case 7:
            if (boss->timer_052 == 1) {
                Radio_PlayMessage(gMsg_ID_15252, RCID_SLIPPY);
            }
            boss->fwork[41] = 20.0;
            boss->fwork[2] = -400.0f;
            boss->fwork[42] = 30.0f;

            frameData = Animation_GetFrameData(&D_601C690, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.05f, 0);

            boss->unk_04C++;
            if (boss->unk_04C >= Animation_GetFrameCount(&D_601C690)) {
                boss->state = 75;
                boss->fwork[0] = 0.0f;
                boss->unk_04C = 0;
                boss->timer_050 = 120;
            }
            break;

        case 75:
            boss->fwork[41] = 20.0f;
            boss->fwork[2] = -400.0f;

            frameData = Animation_GetFrameData(&D_600A2D4, 0, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 2.5f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 0.1f, 1.0f, 0.005f, 0);

            if (boss->timer_050 == 0) {
                boss->state = 8;
                boss->fwork[0] = 0.0f;
                boss->unk_04C = 0;
                boss->health = 300;
                func_8001D9E0(0, D_800C9E90[gCurrentLevel], 1121, 25, 255);
                Radio_PlayMessage(gMsg_ID_19205, RCID_FOX);
                boss->timer_052 = 100;
            }
            break;

        case 8:
            if (boss->timer_052 == 1) {
                Radio_PlayMessage(gMsg_ID_5497, RCID_BOSS_SECTORX);
            }
            boss->fwork[41] = 0.0f;
            boss->fwork[2] = gPlayer[0].pos.y;
            boss->fwork[3] = gPlayer[0].pos.x;
            boss->fwork[44] = 5.0f;
            boss->fwork[1] = -1800.0f;
            boss->fwork[43] = 5.0f;
            boss->fwork[42] = 30.0f;

            frameData = Animation_GetFrameData(&D_600F890, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.02f, 0);

            boss->unk_04C++;
            if (boss->unk_04C >= Animation_GetFrameCount(&D_600F890)) {
                boss->unk_04C = 0;
                boss->fwork[0] = 0.0f;
                boss->state = 9;
                boss->swork[0] = 2;
                boss->timer_050 = 30;
            }
            break;

        case 85:
            boss->fwork[1] = -3000.0f;
            boss->fwork[2] = gPlayer[0].pos.y;
            boss->fwork[3] = gPlayer[0].pos.x;

            frameData = Animation_GetFrameData(&D_60123BC, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 50.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.01f, 0);

            if (boss->timer_050 == 0) {
                boss->unk_04C++;
                if (boss->unk_04C >= Animation_GetFrameCount(&D_60123BC)) {
                    boss->unk_04C = Animation_GetFrameCount(&D_60123BC) - 1;
                    if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0) {
                        boss->unk_04C = 0;
                        boss->state = 10;
                        boss->fwork[0] = 0.0f;
                        boss->fwork[42] = 0.0f;
                    }
                }
                if (boss->unk_04C == 60) {
                    Audio_PlaySfx(0x2902401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else if (boss->timer_050 == 1) {
                Radio_PlayMessage(gMsg_ID_20267, RCID_PEPPY);
            }
            break;

        case 9:
            if (boss->timer_050 == 1) {
                Radio_PlayMessage(gMsg_ID_5492, RCID_BOSS_SECTORX);
            }
            boss->fwork[1] = -2000.0f;
            boss->fwork[2] = gPlayer[0].pos.y;
            boss->fwork[3] = gPlayer[0].pos.x;

            frameData = Animation_GetFrameData(&D_601AA28, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 50.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.01f, 0);
            boss->unk_04C++;

            if (boss->unk_04C >= Animation_GetFrameCount(&D_601AA28)) {
                boss->unk_04C = 0;
                boss->state = 10;
                boss->fwork[0] = 0.0f;
                boss->fwork[42] = 0.0f;
                if (boss->swork[10] == 0) {
                    Radio_PlayMessage(gMsg_ID_5474, RCID_FALCO);
                }
                boss->swork[10] = 1;
            }

            if (boss->unk_04C == 70) {
                func_i2_8018FA04(boss->fwork[11] + boss->obj.pos.x, boss->fwork[12] + boss->obj.pos.y,
                                 boss->fwork[13] + boss->obj.pos.z);
                Audio_PlaySfx(0x2902401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 10:
            attack = true;
            boss->fwork[1] = -1000.0f;
            Math_SmoothStepToF(&boss->fwork[42], 50.0f, 1.0f, 3.0f, 0);

            frameData = Animation_GetFrameData(&D_60158C4, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.05f, 0);

            boss->unk_04C++;
            if (!(boss->unk_04C & 15)) {
                Audio_PlaySfx(0x2902401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (boss->unk_04C >= Animation_GetFrameCount(&D_60158C4)) {
                boss->unk_04C = 0;
                boss->fwork[0] = 0.0f;

                if ((gBossFrameCount < 2200) || (gTeamShields[2] <= 0)) {
                    if (boss->health > 150) {
                        boss->state = 8;
                    } else {
                        boss->state = 35;
                        boss->timer_050 = 400;
                        boss->fwork[42] = boss->fwork[43] = boss->fwork[44] = boss->unk_078.y = 0.0f;
                        boss->swork[9] = Rand_ZeroOne() * 1.9f;
                        Radio_PlayMessage(gMsg_ID_5498, RCID_BOSS_SECTORX);
                    }
                } else {
                    boss->state = 85;
                    func_i2_8018F030();
                    boss->timer_050 = 100;
                }
            }
            break;

        case 35:
            if (boss->swork[9] != 0) {
                boss->fwork[2] = 500.0f;
            } else {
                boss->fwork[2] = -500.0f;
            }

            if (boss->timer_050 > 300) {
                boss->fwork[3] = 1000.0f;
                boss->fwork[1] = -2000.0f;
            } else if (boss->timer_050 > 200) {
                boss->fwork[3] = -1000.0f;
                boss->fwork[1] = -2500.0f;
                if (!(gGameFrameCount & 15)) {
                    Audio_PlaySfx(0x2902401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else if (boss->timer_050 > 100) {
                boss->fwork[3] = 0;
                boss->fwork[1] = -500.0f;
                if (!(gGameFrameCount & 0xF)) {
                    Audio_PlaySfx(0x2902401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else {
                boss->fwork[3] = 0;
                boss->fwork[1] = -2000.0f;
            }

            Math_SmoothStepToF(&boss->fwork[42], 60.0f, 1.0f, 1.0f, 0);
            Math_SmoothStepToF(&boss->fwork[44], 20.0f, 1.0f, 0.5f, 0);
            Math_SmoothStepToF(&boss->fwork[43], 20.0f, 1.0f, 0.5f, 0);

            frameData = Animation_GetFrameData(&D_6009FF8, 0, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 5.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 0.1f, 1.0f, 0.001f, 0);
            Math_SmoothStepToF(&boss->unk_078.y, 10.0f, 1.0f, 0.1f, 0);
            Math_SmoothStepToF(&boss->obj.rot.y, 2880.0f, 0.1f, boss->unk_078.y, 0.1f);

            if ((boss->timer_050 == 0) && (boss->obj.rot.y == 2880.0f)) {
                boss->obj.rot.y = 0.0f;
                boss->unk_04C = 0;
                boss->fwork[0] = 0.0f;
                if ((gBossFrameCount < 2200) || (gTeamShields[2] <= 0)) {
                    boss->state = 9;
                } else {
                    boss->state = 85;
                    func_i2_8018F030();
                    boss->timer_050 = 100;
                }
            }
            break;

        case 20:
            Math_SmoothStepToF(&boss->obj.rot.y, 0.0f, 0.1f, 3.0f, 0.1f);
            boss->swork[0] = 0;
            boss->fwork[1] = -1800.0f;
            boss->fwork[41] = 340.0f;
            boss->fwork[2] = -400.0f;

            frameData = Animation_GetFrameData(&D_601C690, boss->unk_04C, sp80);
            Math_SmoothStepToVec3fArray(sp80, boss->vwork, 1, frameData, boss->fwork[0], 100.0f, 0.0f);

            Math_SmoothStepToF(boss->fwork, 1.0f, 1.0f, 0.05f, 0);
            boss->unk_04C++;

            if (boss->unk_04C >= Animation_GetFrameCount(&D_601C690)) {
                boss->unk_04C = Animation_GetFrameCount(&D_601C690);
            }

            if (!(boss->timer_050 & 3)) {
                func_8007D2C8(((Rand_ZeroOne() - 0.5f) * 500.0f) + boss->obj.pos.x,
                              ((Rand_ZeroOne() - 0.5f) * 500.0f) + boss->obj.pos.y, boss->obj.pos.z + 100.0f,
                              (Rand_ZeroOne() * 5.0f) + 5.0f);
            }

            if ((!(gGameFrameCount & 7)) && (Rand_ZeroOne() < 0.5f)) {
                boss->timer_05C = 4;
            }

            if (!(boss->timer_050 & 3)) {
                func_8007C120(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, boss->vel.x, boss->vel.y, boss->vel.z,
                              0.3f, 10);
            }

            if (boss->timer_050 < 230) {
                Math_SmoothStepToF(&boss->fwork[14], 10000.0f, 1.0f, 60.0f, 0);
                Math_SmoothStepToF(&boss->fwork[17], -10000.0f, 1.0f, 60.0f, 0);
            }

            if (boss->timer_050 == 230) {
                gShowBossHealth = 0;
                func_8007BFFC(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 0.0f, 0.0f, 0.0f, 30.0f, 40);
                func_8007A568(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 40.0f);
            }

            if (boss->timer_050 == 210) {
                boss->swork[5] = 1;
                boss->timer_05A = 1000;
            }

            if (boss->timer_050 == 120) {
                if ((gPlayer[0].state_1C8 != PLAYERSTATE_1C8_6) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_4)) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer[0].unk_1D0 = 0;
                    gPlayer[0].unk_234 = 1;
                }
                Object_Kill(&boss->obj, boss->sfxPos);
                D_80177930 = boss->swork[6];
            }
            break;

        default:
            break;
    }

    D_i2_80195640 = 1;

    Animation_DrawSkeleton(1, &D_6020C68, boss->vwork, func_i2_80192AF0, func_i2_80193208, boss, &gIdentityMatrix);

    if (((boss->swork[1] != 0) && (boss->swork[3] > 0)) && ((boss->fwork[4] < 45.0f) || (boss->fwork[4] > 315.0f))) {
        boss->swork[1]++;
        if (boss->swork[1] > 40) {
            if (boss->swork[1] > 50) {
                boss->swork[1] = 0;
            }
            func_8007F11C(377, boss->fwork[20] + boss->obj.pos.x, boss->fwork[21] + boss->obj.pos.y,
                          boss->fwork[22] + boss->obj.pos.z, 100.0f);
            func_8007F11C(377, boss->fwork[23] + boss->obj.pos.x, boss->fwork[24] + boss->obj.pos.y,
                          boss->fwork[25] + boss->obj.pos.z, 100.0f);
        }
    } else {
        boss->swork[1] = 0;
    }

    if (boss->state != 35) {
        boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6032550);
        boss->info.hitbox[43] = -211.0f + boss->fwork[16];
        boss->info.hitbox[45] = -35.0f + boss->fwork[15];
        boss->info.hitbox[47] = 442.0f + boss->fwork[14];
        boss->info.hitbox[49] = -211.0f + boss->fwork[19];
        boss->info.hitbox[51] = -35.0f + boss->fwork[18];
        boss->info.hitbox[53] = -442.0f + boss->fwork[17];
        boss->info.hitbox[55] = boss->fwork[10];
        boss->info.hitbox[57] = boss->fwork[9];
        boss->info.hitbox[59] = boss->fwork[8];
        boss->info.hitbox[61] = boss->fwork[13];
        boss->info.hitbox[63] = boss->fwork[12];
        boss->info.hitbox[65] = boss->fwork[11];

        if (attack) {
            boss->info.hitbox[56] = 200.0f;
            boss->info.hitbox[58] = 200.0f;
            boss->info.hitbox[60] = 100.0f;
            boss->info.hitbox[62] = 200.0f;
            boss->info.hitbox[64] = 200.0f;
            boss->info.hitbox[66] = 100.0f;
        } else {
            boss->info.hitbox[56] = 200.0f;
            boss->info.hitbox[58] = 100.0f;
            boss->info.hitbox[60] = 70.0f;
            boss->info.hitbox[62] = 200.0f;
            boss->info.hitbox[64] = 100.0f;
            boss->info.hitbox[66] = 70.0f;
        }
    } else {
        boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6032768);
    }

    if (boss->swork[0] == 1) {
        Math_SmoothStepToF(&boss->fwork[45], 1.0f, 1.0f, 0.05f, 0);
    } else {
        Math_SmoothStepToF(&boss->fwork[45], 0.0f, 1.0f, 0.05f, 0);
    }
}

s32 func_i2_80192AF0(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Vec3f sp64 = { 0.0f, 0.0f, 0.0f };
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
                    if (!(gGameFrameCount & 1)) {
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
                    } else {
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
                    }
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, D_i2_80195644.x, D_i2_80195644.y, D_i2_80195644.z, (u8) 1);
                    Matrix_RotateZ(gGfxMatrix, D_i2_80195650.z * M_DTOR, 1);
                    Matrix_RotateY(gGfxMatrix, D_i2_80195650.y * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, D_i2_80195650.x * M_DTOR, 1);
                    Matrix_RotateZ(gGfxMatrix, 2.0f * gGameFrameCount * M_DTOR, 1);
                    Matrix_Scale(gGfxMatrix, boss->fwork[45], boss->fwork[45], boss->fwork[45], 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_6009C30);
                    Matrix_Pop(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, D_i2_8019565C.x, D_i2_8019565C.y, D_i2_8019565C.z, (u8) 1);
                    Matrix_RotateZ(gGfxMatrix, D_i2_80195668.z * M_DTOR, 1);
                    Matrix_RotateY(gGfxMatrix, D_i2_80195668.y * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, D_i2_80195668.x * M_DTOR, 1);
                    Matrix_RotateZ(gGfxMatrix, 2.0f * -gGameFrameCount * M_DTOR, 1);
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
            if (boss->state == 20) {
                arg3->x += boss->fwork[14] * 0.2f;
                arg3->y += boss->fwork[14] * 0.1f;
            }
            break;

        case 39:
            arg2->x += boss->fwork[17];
            arg2->y -= boss->fwork[19];
            arg2->z += boss->fwork[18];
            if (boss->state == 20) {
                arg3->x += boss->fwork[17] * 0.1f;
                arg3->z += boss->fwork[17] * 0.2f;
            }
            break;
    }

    return 0;
}

void func_i2_80193208(s32 limbIndex, Vec3f* rot, void* data) {
    Vec3f sp64 = { 87.0f, -323.0f, 200.0f };
    Vec3f sp58 = { 87.0f, -323.0f, -200.0f };
    Vec3f sp4C = { 87.0f, -323.0f, 200.0f };
    Vec3f sp40 = { 87.0f, -323.0f, -200.0f };
    Vec3f sp34;
    Vec3f sp28;
    Boss* boss = (Boss*) data;

    sp34.x = 0.0f;
    sp34.y = 0.0f;
    sp34.z = 0.0f;

    switch (limbIndex) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp58, &sp28);
            boss->fwork[20] = sp28.x;
            boss->fwork[21] = sp28.y;
            boss->fwork[22] = sp28.z;
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp28);
            boss->fwork[23] = sp28.x;
            boss->fwork[24] = sp28.y;
            boss->fwork[25] = sp28.z;
            Matrix_MultVec3f(gCalcMatrix, &sp40, &boss->vwork[45]);
            Matrix_MultVec3f(gCalcMatrix, &sp4C, &boss->vwork[46]);
            break;

        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            boss->fwork[8] = sp28.x;
            boss->fwork[9] = sp28.y;
            boss->fwork[10] = sp28.z;
            break;

        case 16:
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            boss->fwork[11] = sp28.x;
            boss->fwork[12] = sp28.y;
            boss->fwork[13] = sp28.z;
            break;

        case 33:
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            boss->fwork[35] = sp28.x;
            boss->fwork[36] = sp28.y;
            boss->fwork[37] = sp28.z;
            break;

        case 37:
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            boss->fwork[38] = sp28.x;
            boss->fwork[39] = sp28.y;
            boss->fwork[40] = sp28.z;

        default:
            break;
    }
}

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

void func_i2_80193434(Boss* boss) {
    f32 fwork;

    if (boss->swork[5] == 0) {
        D_i2_80195640 = 0;
        Animation_DrawSkeleton(3, &D_6020C68, boss->vwork, func_i2_80192AF0, 0, boss, gCalcMatrix);
        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 96);

        if (boss->fwork[31] > 10.0f) {
            fwork = boss->fwork[31] * 0.1f;
            if (fwork > 50.0f) {
                fwork = 50.0f;
            }
            if (gGameFrameCount & 1) {
                fwork *= 1.2f;
            }
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->fwork[35], boss->fwork[36], boss->fwork[37], 1);
            Matrix_Scale(gGfxMatrix, fwork, fwork, fwork, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102ED50);
            Matrix_Pop(&gGfxMatrix);
        }

        if (boss->fwork[34] > 10.0f) {
            fwork = boss->fwork[34] * 0.1f;
            if (fwork > 50.0f) {
                fwork = 50.0f;
            }
            if (gGameFrameCount & 1) {
                fwork *= 1.2f;
            }
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->fwork[38], boss->fwork[39], boss->fwork[40], 1);
            Matrix_Scale(gGfxMatrix, fwork, fwork, fwork, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102ED50);
            Matrix_Pop(&gGfxMatrix);
        }

        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 96);

        if (boss->swork[1] != 0) {
            fwork = boss->swork[1] * 0.1f;

            if (fwork > 4.0f) {
                fwork = 4.0f;
            }
            if (gGameFrameCount & 1) {
                fwork *= 1.2f;
            }
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->fwork[20], boss->fwork[21], boss->fwork[22], 1);
            Matrix_Scale(gGfxMatrix, fwork, fwork, fwork, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_600F8A0);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->fwork[23], boss->fwork[24], boss->fwork[25], 1);
            Matrix_Scale(gGfxMatrix, fwork, fwork, fwork, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_600F8A0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_i2_80193800(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);

    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i2_801956B0[arg1].x;
    actor->obj.pos.y = D_i2_801956B0[arg1].y;
    actor->obj.pos.z = D_i2_801956B0[arg1].z;
    actor->vel.z = 30.0f;
    actor->vel.y = -16.0f;
    actor->unk_0B6 = 20;
    actor->obj.rot.x = 15.0f;

    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x31000011, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i2_801938D8(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i2_801956EC[arg1].x + gPlayer->camEye.x;
    actor->obj.pos.y = D_i2_801956EC[arg1].y + gPlayer->camEye.y;
    actor->obj.pos.z = D_i2_801956EC[arg1].z + gPlayer->camEye.z;
    actor->state = 1;
    actor->iwork[11] = 1;
    actor->vel.z = -30.0f;
    actor->vel.y = 0.0f;
    actor->obj.rot.y = 180.0f;
    actor->obj.rot.x = 10.0f;
    if (arg1 == 2) {
        actor->obj.rot.z = -20.0f;
    }
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x09000002, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
            gCsFrameCount = 0;
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
            D_80178340 = 255;
            /* fallthrough */
        case 1:
            if (gCsFrameCount < 3) {
                D_80178340 = 255;
            }
            D_80177A48[0] = 0.5f;
            D_801779A0 = gActors[5].obj.pos.x;
            D_801779C0 = gActors[5].obj.pos.z;
            player->unk_034 -= 0.1f;
            if (gCsFrameCount == 140) {
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
                func_8006EEFC(100, 0.0f, player->camEye.y + 50.0f, player->camEye.z + 20.0f, dest.x, dest.y, dest.z,
                              xyzDeg, xzDeg, 0.0f);
            }
            if (gCsFrameCount == 143) {
                Object_Kill(&gPlayerShots->obj, gPlayerShots->sfxPos);
                func_8007BFFC(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 0.0f, 0.0f, 0.0f, 3.0f,
                              40);
                func_8007D2C8(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 6.0f);
                func_8007B344(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 5.0f, 5);
                Object_Kill(&gActors[5].obj, gActors[5].sfxPos);
                for (i = 0; i < 20; i++) {
                    func_80079618(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 0.5f);
                }
                func_8007A6F0(&gActors[5].obj.pos, 0x2903B009);
                player->unk_1D0 += 1;
                D_80177A48[0] = 0.1f;
            }
            break;

        case 2:
            if (gCsFrameCount == 170) {
                player->pos.x = 0.0f;
                player->pos.y = player->camEye.y + 50.0f;
                player->unk_1D0 += 1;
                player->pos.z = player->camEye.z + 20.0f;
                player->unk_194 = 10.0f;
                player->unk_190 = 10.0f;
                player->unk_0D0 = 30.0f;
                player->unk_0EC = -80.0f;
                player->unk_0E4 = -20.0f;
                Audio_PlaySfx(0x09000002, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                for (i = 6; i < 10; i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
                D_80177A48[0] = 0.0f;
            }
            break;

        case 3:
            if (gCsFrameCount >= 201) {
                D_801779A0 = player->pos.x;
                D_801779B8 = player->pos.y;
                D_801779C0 = player->pos.z;
                Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.01f, 0);
            }

            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.5f, 0.07f, 0);
            Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.2f, 2.0f, 0);
            Math_SmoothStepToF(&player->unk_0E4, 20.0f, 0.1f, 1.0f, 0);

            switch (gCsFrameCount) {
                case 195:
                    if (gTeamShields[1] > 0) {
                        func_i2_801938D8(&gActors[0], 0);
                    }
                    break;
                case 213:
                    if (gTeamShields[2] > 0) {
                        func_i2_801938D8(&gActors[1], 1);
                    }
                    break;
                case 229:
                    if (gTeamShields[3] > 0) {
                        func_i2_801938D8(&gActors[2], 2);
                    }
                    break;
            }

            if (gCsFrameCount >= 301) {
                player->unk_1D0 += 1;
                player->timer_1F8 = 40;
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
                func_8001D444(0, D_80177C90, 0, 255);
                D_80177838 = 80;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_1D0 = player->timer_1F8 = player->timer_1FC = 0;
                player->camEye.y = player->pos.y * player->unk_148 + 50.0f;
                player->camEye.z = 400.0f;
                player->camAt.y = player->pos.y * player->unk_148 + 20.0f;
                player->camAt.z = player->unk_138;
                player->camAt.x = player->camEye.x = player->pos.x;
                D_80178488 = 1;
                for (i = 0; i < 3; i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
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
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
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

    Matrix_RotateY(gCalcMatrix, player->unk_0E8 * M_DTOR, 0);
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
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;
    Object_SetInfo(&actor->info, actor->obj.id);
    if (arg1 == 3) {
        actor->unk_0B6 = 1;
        actor->state = 20;
        actor->obj.rot.x = -player->unk_0E4 - 10.0f;
        actor->obj.rot.y = (player->unk_0E8 + 180.0f) - 10.0f;
        actor->fwork[9] = 10.0f;
    } else {
        actor->obj.rot.z = D_i2_80195770[arg1];
        actor->iwork[11] = 1;
        actor->iwork[14] = D_i2_8019577C[arg1];
        Audio_PlaySfx(0x3100000C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i2_80194728(Player* player) {
    Vec3f sp54;
    Vec3f sp48;
    s32 pad[5];

    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);

    D_80178430 += 0.2f;
    D_8017842C -= 0.2f;

    switch (player->unk_1D0) {
        case 0:
            func_8001A38C(1, player->sfxPos);
            player->unk_1D0 += 1;
            D_80177A48[1] = 0.05f;
            D_80177A48[0] = 0.02f;
            D_80177A48[2] = 0.0f;
            D_80177A48[3] = D_80177A48[2];
            gCsFrameCount = 0;
            D_80177A48[2] = 100.0f;
            D_80177A48[4] = 100.0f;
            D_80177A48[5] = 0.0f;
            player->wings.unk_2C = 1;
            func_800A6148();

        case 1:
            if (gCsFrameCount >= 991) {
                Math_SmoothStepToF(D_80177A48 + 3, 0.0f, 0.1f, 0.01f, 0.0f);
            } else if (gCsFrameCount >= 121) {
                Math_SmoothStepToF(D_80177A48 + 3, -0.5f, 0.1f, 0.02f, 0.0f);
                Math_SmoothStepToF(D_80177A48 + 4, 300.0f, 0.1f, 2.0f, 0.0f);
                Math_SmoothStepToF(D_80177A48 + 5, -50.0f, 0.1f, 1.0f, 0.0f);
            }
            D_80177A48[2] += D_80177A48[3];
            Math_SmoothStepToF(&player->unk_0D0, 0.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.002f, 0.0f);
            Math_SmoothStepToF(D_80177A48 + 1, 0.1f, 1.0f, 0.002f, 0.0f);
            Matrix_RotateY(gCalcMatrix, player->unk_0E8 * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, player->unk_0E4 * M_DTOR, 1);
            Matrix_Push(&gCalcMatrix);
            Matrix_RotateY(gCalcMatrix, D_80177A48[2] * M_DTOR, 1);
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

            if (gCsFrameCount == 1195) {
                func_8001DBD0(10);
            }

            if (gCsFrameCount >= 1196) {
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178358 = 255;
                if (D_80178340 == 255) {
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    D_8017837C = 4;
                    player->timer_1F8 = 0;
                    func_800A6148();
                    D_800D3180[2] = Play_CheckMedalStatus(150) + 1;
                }
            }
            break;
    }

    switch (gCsFrameCount) {
        case 706:
            D_80177830 = 1;
            break;

        case 906:
            D_80177830 = 0;
            break;

        case 100:
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

        case 30:
            func_8001D444(0, 38, 0, 255);
            break;

        case 60:
            D_80177840 = 100;
            break;

        case 910:
            gOverlayStage = 1;
            break;

        case 920:
            gActors[1].iwork[14] = gActors[2].iwork[14] = gActors[3].iwork[14] = 0;
            func_i2_801944D4(&gActors[0], 3);
            Audio_PlaySfx(0x11030010, gActors[0].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;

        case 1050:
            gActors[1].state = 10;
            break;

        case 1090:
            gActors[2].state = 10;
            break;

        case 1120:
            gActors[3].state = 10;
            break;

        case 1160:
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            Audio_PlaySfx(0x09000002, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_1D0 = 2;
            player->timer_1F8 = 40;
            player->unk_194 = 5.0f;
            player->unk_190 = 5.0f;
            break;
    }
    if (gTeamShields[2] != -2) {
        switch (gCsFrameCount) {
            case 140:
                Radio_PlayMessage(gMsg_ID_20010, RCID_FOX);
                break;

            case 228:
                switch (gTeamShields[2]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20339, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20345, RCID_ROB64);
                        break;

                    default:
                        func_80048AC0(2);
                        break;
                }
                break;

            case 375:
                switch (gTeamShields[3]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20338, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20344, RCID_ROB64);
                        break;

                    default:
                        func_80048AC0(3);
                        break;
                }
                break;

            case 521:
                func_80048AC0(1);
                switch (gTeamShields[1]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20337, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20343, RCID_ROB64);
                        break;

                    default:
                        func_80048AC0(1);
                        break;
                }
                break;
        }
    } else {
        switch (gCsFrameCount) {
            case 140:
                Radio_PlayMessage(gMsg_ID_5500, RCID_FOX);
                break;

            case 270:
                Radio_PlayMessage(gMsg_ID_5503, RCID_ROB64);
                break;

            case 423:
                switch (gTeamShields[3]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20338, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20344, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_5501, RCID_PEPPY);
                        break;
                }
                break;

            case 569:
                func_80048AC0(1);
                switch (gTeamShields[1]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20337, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20343, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_5502, RCID_FALCO);
                        break;
                }
                break;
        }
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);
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
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

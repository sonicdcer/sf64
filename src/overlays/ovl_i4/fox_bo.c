#include "global.h"

typedef struct UnkStruct_D_i4_801A03E0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    s32 unk_18;
} UnkStruct_D_i4_801A03E0;

extern s16 D_800C9C34; // fox_bg
extern Vec3f D_i4_8019F0D8;
extern s32 D_i4_801A03D8[];
extern UnkStruct_D_i4_801A03E0 D_i4_801A03E0[];
extern s32 D_i4_801A0530;

extern AnimationHeader D_6001C64;
extern Limb* D_6001FB0;
extern Gfx D_6006910[];
extern AnimationHeader D_600F2E0;
extern Limb* D_600F36C;
extern u8 D_6011BA4[];
extern u8 D_6008BB8[];
extern u8 D_600AD80[];
extern Gfx D_600BEC0[];
extern Gfx D_600C4E0[];
extern u8 D_600CF88[];

void func_8002FC00(Actor*);
void func_i4_8018CCE8(Actor*);
void func_i4_8018CE5C(Actor*);
s32 func_i4_8018D008(Actor*);
void func_i4_8018D124(Actor*);

#ifdef IMPORT_DATA
void func_i4_8018BD60(Actor* actor) {
    s32 i;
    Actor* actorPtr;
    f32 D_i4_8019EEC4[4] = { 8000.0f, -8000.0f, 8000.0f, -8000.0f };
    f32 D_i4_8019EED4[4] = { 8000.0f, 8000.0f, -8000.0f, -8000.0f };

    if (D_8015F924 == 0) {
        actor->unk_04E++;
        if (actor->unk_04E >= 4) {
            actor->unk_04E = 0;
        }
        for (actorPtr = gActors + 10, i = 10; i < 16; i++, actorPtr++) {
            if (actorPtr->obj.status == 0) {
                Actor_Initialize(actorPtr);
                actorPtr->obj.status = 2;
                actorPtr->obj.id = OBJ_ACTOR_197;
                actorPtr->obj.pos.x = D_i4_8019EEC4[actor->unk_04E];
                actorPtr->obj.pos.y = 1000.0f;
                actorPtr->obj.pos.z = D_i4_8019EED4[actor->unk_04E];
                actorPtr->state = 1;
                actorPtr->unk_0E6 = -1;
                actorPtr->health = 24;
                actorPtr->iwork[11] = 1;
                actorPtr->unk_044 = 2;
                actorPtr->unk_0E4 = i;
                Object_SetInfo(&actorPtr->info, actorPtr->obj.id);
                Audio_PlaySfx(0x3100000CU, actorPtr->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                break;
            }
        }
    }
    func_8002F69C(actor);
    func_8002FC00(actor);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018BD60.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018BEF8.s")

void func_i4_8018C158(Actor* actor) {
    s32 i;
    Player* player = &gPlayer[0];
    s32 pad;
    Actor* actorPtr;

    D_800C9C34 = 1;
    D_i4_801A0530++;

    switch (actor->state) {
        case 0:
            D_800C9B4C = 500000;
            D_8015F928 = 0;
            D_8015F908 = 0;
            actor->state = 2;

            if (D_8015F924 == 0) {
                gBosses[0].fwork[1] = 0.3f;
                D_i4_801A03D8[1] = 6;
            } else {
                D_8015F924 = 1;
                gHitCount = gSavedHitCount;
                gBosses[1].state = 2;
                D_8015F928 = 3000;
                actor->iwork[1] = gHitCount;
            }

            for (i = 0; i < 6; i++) {
                D_80177CD0[i] = D_80177CF0[i];
            }

        case 2:
            func_i4_8018BD60(actor, &D_i4_801A0530);

            switch (D_8015F928) {
                case 300:
                    Radio_PlayMessage(gMsg_ID_11020, RCID_PEPPY);
                    break;
                case 600:
                    Radio_PlayMessage(gMsg_ID_11030, RCID_FALCO);
                    break;
                case 900:
                    Radio_PlayMessage(gMsg_ID_11040, RCID_SLIPPY);
                    break;
                case 1500:
                    Radio_PlayMessage(gMsg_ID_11210, RCID_SLIPPY);
                    break;
                case 1800:
                    Radio_PlayMessage(gMsg_ID_11220, RCID_FALCO);
                    break;
                case 2300:
                    Radio_PlayMessage(gMsg_ID_11240, RCID_SLIPPY);
                    break;
                case 2500:
                    Radio_PlayMessage(gMsg_ID_11230, RCID_PEPPY);
                    break;
            }

            if ((D_i4_801A0530 < 9600) && (D_i4_801A0530 & 1024)) {
                func_i4_8018BEF8(actor, 8);
            }

            if (gBosses[2].state == 10) {
                func_800182F4(0x100100FF);
                func_800182F4(0x110100FF);
                if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer[0].timer_1F8 = 30;
                    gPlayer[0].unk_1D0 = 0;
                    gPlayer[0].unk_000 = 0.0f;
                }
                func_8002EE34();
                actor->state = 6;
                Audio_PlaySfx(0x31009063U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                Audio_PlaySfx(0x2940D09AU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_Timer_80161A60 = 8;

                for (actorPtr = &gActors[10], i = 0; i < 20; i++, actorPtr++) {
                    if (actorPtr->obj.status == 2) {
                        actorPtr->obj.status = 3;
                        actorPtr->timer_0BC = 30;
                    }
                }
            }

            if ((gBosses[1].state == 2) && (gBosses[1].obj.status == 2)) {
                actor->iwork[1] = gHitCount;
                actor->state = 10;
                actor->timer_0BC = 150;
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                func_8001D444(0U, 0x801CU, 0U, 0xFFU);
                func_8002EE34();
                gPlayer[0].camEye.x = 400.0f;
                gPlayer[0].camEye.y = 50.0f;
                gPlayer[0].camEye.z = 3000.0f;
                gPlayer[0].camAt.x = 0.0f;
                gPlayer[0].camAt.y = 0.0f;
                gPlayer[0].camAt.z = 0.0f;
                for (i = 10; i < 30; i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
            } else if ((D_8015F924 == 1) && (((gHitCount - actor->iwork[1]) >= 5) || (D_i4_801A0530 == 0xFA0))) {
                D_8015F924 = 2;
                actor->iwork[1] = gHitCount;
                if ((D_80177CD0[0] != 0) || (D_80177CD0[1] != 0) || (D_80177CD0[2] != 0) || (D_80177CD0[3] != 0)) {
                    D_800C9B4C = D_8015F928 + 120;
                    D_8015F908 = 1000;
                }
            }
            break;

        case 3:
            D_800C9C34 = 0;

            for (i = 0; i < 4; i++) {
                if (D_80177CD0[i] != 0) {
                    actorPtr = &gActors[i + 4];
                    break;
                }
                if (i == 3) {
                    actor->state = 2;
                    player->state_1C8 = PLAYERSTATE_1C8_3;
                    return;
                }
            }

            player->camEye.x += actorPtr->vel.x * 0.23f;
            player->camEye.y += actorPtr->vel.y * 0.23f;
            player->camEye.z += actorPtr->vel.z * 0.23f;

            Math_SmoothStepToF(&player->camAt.x, actorPtr->obj.pos.x, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, actorPtr->obj.pos.y, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, actorPtr->obj.pos.z, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 0.2f, 0);

            if ((gControllerPress->button & START_BUTTON) || ((D_800C9B4C + 300) == D_8015F928)) {
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                func_800B7184(player, 1);
                player->unk_014 = 0.0f;
                D_80161708 = 0;
            }
            D_801779BC = 0;
            break;

        case 10:
            if (gBosses[1].obj.status != 0) {
                if (fabsf(Math_SmoothStepToF(&gBosses[1].unk_3F8, 0.0f, 1.0f, 0.05f, 0.001f)) < 0.05f) {
                    Object_Kill(&gBosses[1].obj, gBosses[i].sfxPos);
                    gLight1R = 100;
                    gLight1G = 100;
                    gLight1B = 80;
                    gAmbientR = 0;
                    gAmbientG = 15;
                    gAmbientB = 30;
                }
            }

            gBosses[0].fwork[1] = 0.0f;

            gBosses[0].obj.rot.y = gBosses[0].fwork[1];

            player->camEye.x -= 6.0f;
            player->camEye.z -= 12.0f;
            player->camAt.y += 8.0f;

            gPlayer[0].camEye.y += 2.0f;

            Math_SmoothStepToF(&player->unk_034, 0.0f, 1.0f, 1000.0f, 0);

            if (actor->timer_0BC == 130) {
                Radio_PlayMessage(gMsg_ID_11060, RCID_FALCO);
                D_8015F924 = 1;
                gSavedHitCount = gHitCount;
                for (i = 1; i < 4; i++) {
                    gSavedTeamShields[i] = gTeamShields[i];
                }
            }

            if (!(actor->timer_0BC & 7)) {
                func_i4_8018BEF8(actor, 15);
            }

            if (!actor->timer_0BC) {
                D_8015F928 = 3000;
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                func_800B7184(player, 1);
                player->unk_014 = 0.0f;
                Audio_KillSfx(gBosses[1].sfxPos);
                actor->iwork[1] = gHitCount;
            }
            break;

        case 6:
            gActors[1].unk_0E6 = 0;
            gActors[1].state = 2;
            gActors[2].unk_0E6 = 0;
            gActors[2].state = 2;
            gActors[3].unk_0E6 = 0;
            gActors[3].state = 2;
            gActors[4].unk_0E6 = gActors[5].unk_0E6 = gActors[6].unk_0E6 = gActors[7].unk_0E6 = -1;
            break;
    }

    if (D_8015F908 != 0) {
        D_8015F908--;
        switch (D_8015F908) {
            case 860:
                if (D_80177CD0[0] != 0) {
                    Radio_PlayMessage(gMsg_ID_11100, RCID_WOLF);
                }
                break;

            case 760:
                if (D_80177CD0[1] != 0) {
                    Radio_PlayMessage(gMsg_ID_11110, RCID_LEON);
                }
                break;

            case 660:
                if (D_80177CD0[2] != 0) {
                    Radio_PlayMessage(gMsg_ID_11120, RCID_PIGMA);
                }
                break;

            case 550:
                if (D_80177CD0[3] != 0) {
                    Radio_PlayMessage(gMsg_ID_11130, RCID_ANDREW);
                }
                break;

            case 390:
                if (D_800D3180[14] == 0) {
                    Radio_PlayMessage(gMsg_ID_9285, RCID_FOX);
                } else {
                    Radio_PlayMessage(gMsg_ID_11241, RCID_FOX);
                }
                break;
        }
    }
}

s32 func_i4_8018CC60(Actor* actor) {
    Vec3f sp1C;

    if (D_8015F924 == 0) {
        actor->obj.pos.x = sp1C.x = actor->fwork[10];
        actor->obj.pos.y = sp1C.y = actor->fwork[11];
        actor->obj.pos.z = sp1C.z = actor->fwork[12];
        Matrix_MultVec3fNoTranslate(&D_i4_8019EE80, &sp1C, &actor->obj.pos);
        actor->fwork[13] = gBosses[0].obj.rot.y;
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018CCE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018CE5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D008.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D124.s")

bool func_i4_8018D278(Actor* actor) {
    s32 i;

    if (actor->unk_0D0 == 0) {
        return false;
    }

    actor->unk_0D0 = 0;
    actor->obj.pos.y += 150.0f;

    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 8.0f, 15);

    for (i = 0; i < 3; i++) {
        if (Rand_ZeroOne() >= 0.5f) {
            func_800A69F8(4, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z);
        }
    }

    func_8007A6F0(&actor->obj.pos, 0x2903A008);

    actor->unk_044 = 1;

    func_80066254(actor);
    Object_Kill(&actor->obj, actor->sfxPos);

    actor->info.bonus = 0;
    actor->timer_0CA[0] = 0;
    actor->info.unk_1C = 0.0f;

    return true;
}

void func_i4_8018D394(Actor* actor) {
    func_i4_8018CC60(actor);
    if ((gPlayer->state_1C8 != PLAYERSTATE_1C8_0) && (gPlayer->state_1C8 != PLAYERSTATE_1C8_7)) {
        func_i4_8018CCE8(actor);
        func_i4_8018CE5C(actor);
        if (func_i4_8018D008(actor) != 0) {
            func_i4_8018D124(actor);
        }
    }
    func_i4_8018D278(actor);
    actor->iwork[0] = 0;
}

s32 func_i4_8018D414(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* this) {
    Actor* actor = (Actor*) this;

    if (limbIndex == 2) {
        rot->x -= actor->unk_0F4.x;
        rot->y += actor->unk_0F4.y;
    }
    return false;
}

void func_i4_8018D454(Actor* actor) {
    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
    Animation_GetFrameData(&D_600F2E0, 0, actor->vwork);
    Animation_DrawSkeleton(1, &D_600F36C, actor->vwork, func_i4_8018D414, NULL, actor, &gIdentityMatrix);
    actor->iwork[0] = 1;
}

s32 func_i4_8018D4F0(Actor* actor) {
    s32 i;

    for (i = 0; i < 6; i++) {
        if (D_i4_801A03E0[i].unk_18 == 0) {
            break;
        }
    }

    if (i >= 6) {
        return 0;
    }
    D_i4_801A03E0[i].unk_00 = (f32) actor->obj.pos.x;
    D_i4_801A03E0[i].unk_04 = (f32) (actor->obj.pos.y + 730.0f);
    D_i4_801A03E0[i].unk_08 = (f32) actor->obj.pos.z;
    D_i4_801A03E0[i].unk_0C = (f32) actor->fwork[10];
    D_i4_801A03E0[i].unk_10 = (f32) actor->fwork[11];
    D_i4_801A03E0[i].unk_14 = (f32) actor->fwork[12];
    D_i4_801A03E0[i].unk_18 = 1;
    return 0;
}

bool func_i4_8018D584(Actor* actor) {
    s32 i;

    if (actor->unk_0D0 == 0) {
        return false;
    }

    if ((actor->unk_0D2 < 2) && (actor->state == 0)) {
        actor->timer_0C6 = 20;
        actor->unk_0D0 = 0;
        Audio_PlaySfx(0x29024003U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        actor->health += actor->damage;

        if (actor->health < 100) {
            return false;
        }

        BonusText_Display(actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z, 3);
        gHitCount += 4;
        D_80177850 = 15;
        D_i4_801A03DC--;
        if (1) {}
        actor->state = 1;

        func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 10.0f, 15);

        for (i = 0; i < 10; i++) {
            if (!(Rand_ZeroOne() >= 0.5f)) {
                func_800A69F8(4, actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z);
            }
        }

        func_8007B344(actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z, 10.0f, 5);
        actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6011BA4);
        func_8001A55C(actor->sfxPos, 0x11000028U);
        Audio_PlaySfx(0x2903B009U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_8007A6F0(&actor->obj.pos, 0x29121007);
    }

    return true;
}

void func_i4_8018D7F0(Actor* actor) {
    if (D_8015F924 != 0) {
        actor->state = 1;
    }

    func_i4_8018CC60(actor);

    if (actor->state == 0) {
        func_i4_8018D4F0(actor);
        func_i4_8018D584(actor);
    } else {
        actor->timer_0CA[0] = 0;
        actor->info.bonus = 0;
        actor->info.unk_1C = 0.0f;
    }
    actor->scale = -1.0f;
}

s32 func_i4_8018D874(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* this) {
    Actor* actor = (Actor*) this;

    RCP_SetupDL(&gMasterDisp, 0x1D);
    if (((limbIndex == 1) || (limbIndex == 2)) && (actor->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x29);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 64, 64, 255);
    }
    if (((limbIndex == 1) || (limbIndex == 2)) && ((actor->health >= 100) || (D_8015F924 != 0))) {
        *dList = NULL;
    }

    return false;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D960.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D9CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018DE8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E05C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E3FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E710.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E870.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EAEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EC1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018ECB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018ED44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EE4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EF6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018F83C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018F94C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190D98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190EE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190F58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190FE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191054.s")

void func_i4_80191180(Effect* effect) {
    switch (effect->state) {
        case 0:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 192);
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, effect->scale2, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6006910);
            break;

        case 1:
            RCP_SetupDL(&gMasterDisp, 0x43);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, effect->unk_44);
            gDPSetEnvColor(gMasterDisp++, 0, 128, 255, effect->unk_44);
            Matrix_Scale(gGfxMatrix, effect->scale2, effect->scale2, effect->scale2, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
    }
}

void func_i4_801912FC(Boss* boss);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_801912FC.s")

s32 func_i4_801918E4(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* this);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_801918E4.s")

void func_i4_80191A6C(s32, Vec3f*, void*);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191A6C.s")

void func_i4_80191AFC(Boss* boss) {
    Animation_GetFrameData(&D_6001C64, 0, boss->vwork);
    if (boss->state >= 2) {
        Animation_DrawSkeleton(3, &D_6001FB0, boss->vwork, func_i4_801918E4, func_i4_80191A6C, boss, gCalcMatrix);
    } else {
        Animation_DrawSkeleton(3, &D_6001FB0, boss->vwork, NULL, NULL, boss, gCalcMatrix);
    }
}

void func_i4_80191BAC(Boss* boss) {
    D_i4_801A0530 = 0;

    Math_SmoothStepToF(boss->fwork, D_i4_801A03D8[1] * 9.0f + 10.0f, 1.0f, 10.0f, 0.0f);

    Texture_Scroll(&D_600CF88, 16, 16, 0);
    Texture_Scroll(&D_600CF88, 16, 16, 0);

    switch (boss->state) {
        case 2:
            break;

        case 0:
            if (D_i4_801A03D8[1] == 0) {
                boss->timer_052 = 130;
                boss->state = 1;
                Radio_PlayMessage(gMsg_ID_11050, RCID_FOX);
                func_800182F4(0x100100FF);
                func_800182F4(0x110100FF);
            }
            break;

        case 1:
            Math_SmoothStepToF(&gBosses->fwork[1], 0.0f, 1.0f, 0.01f, 0.001f);
            if (boss->timer_052 == 0) {
                boss->state = 2;
                Audio_PlaySfx(0x19401048U, boss->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
    }

    if (D_8017812C == 0) {
        if (!(gGameFrameCount & 1)) {
            D_8017836C = 0.0f;
        } else {
            D_8017836C = 0.5f;
        }
        D_80178370 = boss->obj.pos.x;
        D_80178374 = boss->obj.pos.y;
        D_80178378 = boss->obj.pos.z;
        D_80178360 = 255;
        D_80178364 = 128;
        D_80178368 = 128;
    }
}

void func_i4_80191DB0(Boss* boss) {
    s32 alpha;

    Matrix_Scale(gGfxMatrix, boss->unk_3F8, boss->unk_3F8, boss->unk_3F8, 1);
    alpha = boss->fwork[0];
    if (alpha != 0) {
        if (!(gGameFrameCount & 1)) {
            alpha *= 1.7f;
        }
        RCP_SetupDL(&gMasterDisp, 0x29);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
        Matrix_Scale(gGfxMatrix, 1.2f, 0.55f, 1.2f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_600C4E0);
    }
}

void func_i4_80191ED8(void) {
    s32 i;
    Actor* actor;
    Boss* boss;
    Object_58* obj58;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[gCurrentLevel]);

    for (obj58 = gObjects58, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if (D_80178310[i].id < 161) {
            Object_58_Initialize(obj58);
            obj58->obj.status = 2;
            obj58->obj.id = D_80178310[i].id;
            obj58->sfxPos[0] = obj58->obj.pos.x = D_80178310[i].xPos;
            obj58->sfxPos[1] = obj58->obj.pos.y = D_80178310[i].yPos;
            obj58->sfxPos[2] = obj58->obj.pos.z = -D_80178310[i].zPos1;
            obj58->unk_54 = obj58->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&obj58->info, obj58->obj.id);
            obj58++;
        }
    }

    for (actor = &gActors[30], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if ((D_80178310[i].id >= OBJ_ACTOR_176) && (D_80178310[i].id <= OBJ_ACTOR_291)) {
            Actor_Initialize(actor);
            actor->obj.status = 1;
            actor->obj.id = D_80178310[i].id;
            if ((actor->obj.id == OBJ_ACTOR_271) && (D_8015F924 == 0)) {
                Audio_PlaySfx(0x11000028U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            actor->fwork[10] = actor->obj.pos.x = D_80178310[i].xPos;
            actor->fwork[11] = actor->obj.pos.y = D_80178310[i].yPos;
            actor->fwork[12] = actor->obj.pos.z = -D_80178310[i].zPos1;
            actor->fwork[13] = actor->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&actor->info, actor->obj.id);
            actor++;
        }
    }

    boss = &gBosses[0];

    Boss_Initialize(boss);
    boss->obj.status = 1;
    boss->obj.id = OBJ_BOSS_309;
    Object_SetInfo(&boss->info, boss->obj.id);

    boss++;

    Boss_Initialize(boss);
    boss->obj.status = 1;
    boss->obj.id = OBJ_BOSS_310;
    Object_SetInfo(&boss->info, boss->obj.id);

    boss++;

    Boss_Initialize(boss);
    boss->obj.status = 1;
    boss->obj.id = OBJ_BOSS_311;
    boss->swork[36] = 8;
    boss->obj.pos.y = -700.0f;

    for (i = 0; i < 12; i++) {
        boss->swork[i] = 30;
    }
    Object_SetInfo(&boss->info, boss->obj.id);
}

void func_i4_80192264(void) {
    Vec3f spDC = D_i4_8019F0D8;
    Vec3f spD0;
    f32 rnd;
    f32 x;
    f32 z;

    gDPSetFogColor(gMasterDisp++, gFogRed, gFogGreen, gFogBlue, gFogAlpha);
    gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);

    if (gBosses[1].obj.status == 2) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        if (gGameFrameCount & 1) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 128, 160, 255);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 192, 224, 255);
        }
    } else {
        RCP_SetupDL(&gMasterDisp, 0x21);
    }

    Matrix_Push(&gGfxMatrix);
    Rand_SetSeed(1, 29100, 9786);
    Matrix_Translate(gGfxMatrix, 0.0f, D_8017847C, 0.0f, 1U);
    Matrix_RotateY(gGfxMatrix, gBosses->obj.rot.y * 0.017453292f, 1U);
    Matrix_Scale(gGfxMatrix, 5.0f, 1.0f, 5.0f, 1U);

    for (z = -3200.0f; z <= 3200.0f; z += 800.0f) {
        for (x = -3200.0f; x <= 3200.0f; x += 800.0f) {
            rnd = Rand_ZeroOneSeeded();
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, x, 0.0f, z, 1);
            Matrix_MultVec3f(gGfxMatrix, &spDC, &spD0);
            if ((spD0.z < 3000.0f) && (spD0.z > -13000.0f) && (fabsf(spD0.x) < (fabsf(spD0.z * 0.7f) + 3000.0f)) &&
                (fabsf(spD0.y) < (fabsf(spD0.z * 0.5f) + 2000.0f))) {
                if (rnd < 0.3f) {
                    gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_6008BB8);
                    gDPTileSync(gMasterDisp++);
                    gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP,
                               G_TX_NOMASK, G_TX_NOLOD);
                    gDPLoadSync(gMasterDisp++);
                    gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                } else {
                    gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_600AD80);
                    gDPTileSync(gMasterDisp++);
                    gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP,
                               G_TX_NOMASK, G_TX_NOLOD);
                    gDPLoadSync(gMasterDisp++);
                    gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                }
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_600BEC0)
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }
    Matrix_Pop(&gGfxMatrix);
}

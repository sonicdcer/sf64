#include "global.h"

extern s16 D_800C9C34; // fox_bg
extern s32 D_i4_801A03D8[];
extern s32 D_i4_801A0530;

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D454.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D4F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D584.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D7F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D874.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_801912FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_801918E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191A6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191AFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191BAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191DB0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191ED8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80192264.s")

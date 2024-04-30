#include "global.h"
#include "assets/ast_katina.h"
#include "assets/ast_venom_2.h"
#include "assets/ast_fortuna.h"
#include "assets/ast_star_wolf.h"
#include "assets/ast_allies.h"
#include "assets/ast_bolse.h"
#include "assets/ast_versus.h"
#include "assets/ast_enmy_planet.h"
#include "assets/ast_sector_z.h"

typedef enum ActorAllRangeState {
    STATE360_0,
    STATE360_1,
    STATE360_2,
    STATE360_3,
    STATE360_4,
    STATE360_5,
    STATE360_6,
    STATE360_7,
    STATE360_8,
    STATE360_9,
    STATE360_10,
    STATE360_11,
    STATE360_12,
    STATE360_13,
    STATE360_14,
    STATE360_15,
    STATE360_16,
    STATE360_17,
    STATE360_18,
    STATE360_19,
} ActorAllRangeState;

/* static */ Vec3f D_360_800C9A90 = { 0.0f, -10.0f, 0.0f };
/* static */ Vec3f D_360_800C9A9C[4] = {
    { 0.0f, 20000.0f, 0.0f },
    { 0.0f, 700.0f, 6500.0f },
    { -300.0f, 800.0f, 6800.0f },
    { 300.0f, 900.0f, 7200.0f },
};
/* static */ AllRangeAi D_360_800C9ACC[4] = { AI360_FOX, AI360_FALCO, AI360_SLIPPY, AI360_PEPPY };
/* static */ s32 D_360_800C9ADC[4] = { -1, AI360_10, AI360_10 + 1, AI360_10 + 2 };
/* static */ s32 D_360_800C9AEC[4] = { -1, AI360_10 + 11, AI360_10 + 13, AI360_10 + 15 };
/* static */ Vec3f D_360_800C9AFC[4] = {
    { 9500.0f, 5000.0f, 9500.0f },
    { 10000.0f, 5000.0f, 10000.0f },
    { 10000.0f, 5000.0f, 9500.0f },
    { 9500.0f, 5000.0f, 10000.0f },
};
/* static */ s32 D_360_800C9B2C[4] = { AI360_FOX, AI360_FALCO, AI360_PEPPY, AI360_SLIPPY };
/* static */ f32 D_360_800C9B3C[4] = { 330.0f, 90.0f, 280.0f, 70.0f };
s32 D_360_800C9B4C = 96 * 30;
/* static */ Vec3f D_360_800C9B50[6] = {
    { 8000.0f, 500.0f, 0.0f }, { 5000.0f, 400.0f, 0.0f }, { 2000.0f, 300.0f, 0.0f },
    { -500.0f, 250.0f, 0.0f }, { 0.0f, 250.0f, 0.0f },    { 0.0f, 250.0f, 0.0f },
};
/* static */ Vec3f D_360_800C9B98 = { 60.0f, 0.0f, -170.0f };
/* static */ Vec3f D_360_800C9BA4 = { -60.0f, 0.0f, -170.0f };

s32 gAllRangeSupplyTimer;
s32 sStarWolfKillTimer;
s16 gStarWolfMsgTimer;
s32 gAllRangeWingRepairTimer;
s32 gAllRangeSuppliesSent;
f32 gSzMissileR;
f32 gSzMissileG;
f32 gSzMissileB;
u8 gKaKilledAlly;
u8 gKaAllyKillCount;
s32 gAllRangeCheckpoint;
s32 gAllRangeEventTimer;
s32 gAllRangeCountdown[3];
s32 gShowAllRangeCountdown;
s32 gAllRangeFrameCount;
f32 gAllRangeCountdownScale;

void AllRange_GetStarWolfHits(Actor* actor) {
    s32 hits = 0;

    (void) "time=%d\n";
    (void) "time=%d\n";
    (void) "time=%d\n";
    (void) "time=%d\n";
    (void) "time=%d\n";
    if (gCurrentLevel == LEVEL_VENOM_2) {
        if (gAllRangeFrameCount < 128 * 30) {
            hits = 50;
        } else if (gAllRangeFrameCount < 192 * 30) {
            hits = 30;
        } else if (gAllRangeFrameCount < 256 * 30) {
            hits = 20;
        } else if (gAllRangeFrameCount < 320 * 30) {
            hits = 10;
        }
    } else {
        if (gAllRangeFrameCount < 128 * 30) {
            hits = 10;
        } else if (gAllRangeFrameCount < 192 * 30) {
            hits = 5;
        } else if (gAllRangeFrameCount < 256 * 30) {
            hits = 2;
        } else if (gAllRangeFrameCount < 320 * 30) {
            hits = 1;
        }
    }
    if (hits != 0) {
        BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, hits);
    }
    gHitCount += hits;
    D_ctx_80177850 = 15;
}

bool AllRange_PlayMessage(u16* msg, RadioCharacterId rcid) {
    if ((gRadioState == 0) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_STANDBY)) {
        Radio_PlayMessage(msg, rcid);
        return true;
    } else {
        return false;
    }
}

void AllRange_UpdateCountdown(void) {
    if (gShowAllRangeCountdown != 0) {
        s32 seconds = gAllRangeCountdown[1];

        func_hud_8008E51C(gAllRangeCountdown, gAllRangeCountdownScale);
        if ((gAllRangeCountdown[0] == 0) && (seconds != gAllRangeCountdown[1]) && (gAllRangeCountdown[1] < 15)) {
            AUDIO_PLAY_SFX(0x4900C02A, gDefaultSfxSource, 4);
        }
    }
}

void Boss309_Update(Boss* boss) {
    OvlI4_CallFunction(OVLCALL_BOSS309_UPDATE, boss);
}

void Boss309_Draw(Boss* boss) {
    OvlI4_CallFunction(OVLCALL_BOSS309_DRAW, boss);
}

void Boss310_Update(Boss* boss) {
    OvlI4_CallFunction(OVLCALL_BOSS310_UPDATE, boss);
}

void Boss310_Draw(Boss* boss) {
    OvlI4_CallFunction(OVLCALL_BOSS310_DRAW, boss);
}

void Actor271_Update(Actor* actor) {
    OvlI4_CallFunction(OVLCALL_ACTOR271_UPDATE, actor);
}

void Actor271_Draw(Actor* actor) {
    OvlI4_CallFunction(OVLCALL_ACTOR271_DRAW, actor);
}

void Actor272_Update(Actor* actor) {
    OvlI4_CallFunction(OVLCALL_ACTOR272_UPDATE, actor);
}

void Actor272_Draw(Actor* actor) {
    OvlI4_CallFunction(OVLCALL_ACTOR272_DRAW, actor);
}

void AllRange_GreatFoxRepair(Player* player) {
    Vec3f sp6C;
    Vec3f sp60;

    gCsFrameCount++;
    switch (player->unk_1D0) {
        case 0:
            player->unk_1F4 = player->timer_498 = player->damage = player->unk_280 = player->boostMeter =
                player->boostCooldown = player->somersault = gCsFrameCount = 0;
            player->unk_130 = player->camRoll = player->boostSpeed = player->unk_08C = player->unk_0D8.x =
                player->unk_0D8.y = player->unk_0D8.z = player->unk_134 = player->unk_4D8 = 0.0f;
            gCsCamEyeX = 1673.0f;
            gCsCamEyeY = 337.0f;
            if (player->pos.z < 0.0f) {
                gCsCamEyeZ = -480.0f;
            } else {
                gCsCamEyeZ = 480.0f;
            }
            player->unk_0E8 = 0.0f;
            player->pos.x = 2100.0f;
            player->baseSpeed = 30.0f;
            player->unk_0E4 = -8.0f;
            player->unk_114 = 90.0f;
            gCsCamAtX = 2100.0f;
            player->pos.y = 450.0f;
            gCsCamAtY = 450.0f;
            player->pos.z = 0.0f;
            gCsCamAtZ = 0.0f;
            D_ctx_80177A48[0] = 1.0f;
            player->wings.modelId = 1;
            player->unk_1D0++;
            break;
        case 1:
            if (gCsFrameCount >= 47) {
                gFillScreenAlphaTarget = 255;
                gFillScreenAlphaStep = 32;
                gFillScreenRed = gFillScreenGreen = gFillScreenBlue = 0;
            }
            if (gCsFrameCount >= 64) {
                player->unk_1D0++;
                player->baseSpeed = 0.0f;
            }
            break;
        case 2:
            if (gFillScreenAlpha == 255) {
                gFillScreenAlphaTarget = 0;
                player->pos.x = 400.0f;
                player->pos.y = -420.0f;
                player->pos.z = 0.0f;
                player->unk_0EC = 0.0f;
                gCsCamEyeX = -683.0f;
                gCsCamEyeY = -346.0f;
                gCsCamEyeZ = 305.0f;
                player->shields = Play_GetMaxShields();
                player->wings.rightState = WINGSTATE_INTACT;
                player->wings.leftState = WINGSTATE_INTACT;
                if (gExpertMode) {
                    gRightWingHealth[0] = gLeftWingHealth[0] = 10;
                } else {
                    gRightWingHealth[0] = gLeftWingHealth[0] = 60;
                }
                AUDIO_PLAY_SFX(0x4900200E, gDefaultSfxSource, 4);
                player->unk_1D0++;
            }
            break;
        case 3:
            gFillScreenAlphaStep = 32;
            gCsCamEyeZ -= 1.0f;
            if (gFillScreenAlpha == 0) {
                player->unk_190 = player->unk_194 = 5.0f;
                player->unk_114 = 90.0f;
                player->baseSpeed = gArwingSpeed;
                player->unk_1D0++;

                AUDIO_PLAY_SFX(0x09000002, player->sfxSource, 0);
            }
            break;
        case 4:
            gCsCamEyeZ -= 1.0f;
            gCsCamEyeX -= 1.0f;
            player->unk_0E4 += 0.4f;
            if (gCsFrameCount >= 130) {
                player->state_1C8 = PLAYERSTATE_1C8_ACTIVE;
                player->wings.modelId = 0;
                player->unk_014 = 0;
                player->unk_018 = 0;
                player->unk_01C = 0;
                gActors[0].state = STATE360_2;
            }
            break;
    }
    gCsCamAtX = player->pos.x;
    gCsCamAtY = player->pos.y;
    gCsCamAtZ = player->pos.z;
    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 2.0f, 0);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 3.0f, 0);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), MTXF_APPLY);
    sp6C.x = 0.0f;
    sp6C.y = 0.0f;
    sp6C.z = player->baseSpeed;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp6C, &sp60);
    player->vel.x = sp60.x;
    player->vel.z = sp60.z;
    player->vel.y = sp60.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->cam.eye.x, gCsCamEyeX, D_ctx_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->cam.eye.y, gCsCamEyeY, D_ctx_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->cam.eye.z, gCsCamEyeZ, D_ctx_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->cam.at.x, gCsCamAtX, D_ctx_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->cam.at.y, gCsCamAtY, D_ctx_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->cam.at.z, gCsCamAtZ, D_ctx_80177A48[0], 50000.0f, 0);
}

void AllRange_FortunaIntro(Player* player) {
    Vec3f sp24;

    Math_Vec3fFromAngles(&sp24, 0.0f, player->unk_114 + 180.0f, 40.0f);
    player->vel.x = sp24.x;
    player->vel.z = sp24.z;
    player->vel.y = sp24.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->cam.eye.x = -200.0f;
    player->cam.eye.y = 500.0f;
    player->cam.eye.z = 7000.0f;
    player->cam.at.x = player->pos.x;
    player->cam.at.y = player->pos.y;
    player->cam.at.z = player->pos.z;
}

void AllRange_ClearRadio(void) {
    sStarWolfKillTimer = gRadioState = gActors[1].iwork[1] = gActors[2].iwork[1] = gActors[3].iwork[1] = 0;
}

void func_360_8002EE64(Actor* this) {
    s32 i;
    s32 colId;
    Scenery360* scenery360;
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
    Vec3f sp94 = D_360_800C9A90;
    s32 pad1;
    s32 pad2;

    this->fwork[25] = this->fwork[26] = this->fwork[28] = this->fwork[27] = 0.0f;
    if ((this->unk_0C9 != 0) && (gLevelMode == LEVELMODE_ALL_RANGE) && (gLevelType == LEVELTYPE_PLANET)) {
        for (i = 0, scenery360 = gScenery360; i < 200; i++, scenery360++) {
            if ((scenery360->obj.status == OBJ_ACTIVE) &&
                ((scenery360->obj.id == OBJ_SCENERY_150) || (scenery360->obj.id == OBJ_SCENERY_149) ||
                 (scenery360->obj.id == OBJ_SCENERY_148) || (scenery360->obj.id == OBJ_SCENERY_1) ||
                 (scenery360->obj.id == OBJ_SCENERY_3)) &&
                (fabsf(scenery360->obj.pos.x - this->obj.pos.x) < 2500.0f) &&
                (fabsf(scenery360->obj.pos.z - this->obj.pos.z) < 2500.0f)) {
                temp1.x = scenery360->obj.pos.x;
                temp1.y = scenery360->obj.pos.y;
                temp1.z = scenery360->obj.pos.z;
                temp4 = scenery360->obj.rot.y;

                Matrix_RotateY(gCalcMatrix, -temp4 * M_DTOR, MTXF_NEW);
                spE4.x = this->obj.pos.x - temp1.x;
                spE4.y = 0.0f;
                spE4.z = this->obj.pos.z - temp1.z;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spE4, &spD8);
                spC0.x = temp1.x;
                spC0.y = temp1.y;

                spCC.x = spD8.x + temp1.x;
                spC0.z = temp1.z; // fake? weird ordering
                spCC.y = spD8.y + temp1.y;
                spCC.z = spD8.z + temp1.z;
                if ((scenery360->obj.id == OBJ_SCENERY_149) || (scenery360->obj.id == OBJ_SCENERY_150)) {
                    if (scenery360->obj.id == OBJ_SCENERY_149) {
                        colId = COL1_5;
                    } else {
                        colId = COL1_6;
                    }
                    if (func_col1_800998FC(&spCC, &spC0, &sp94, colId, &spA8, spA0) > 0) {
                        this->fwork[25] = spA8.y;
                        this->fwork[26] = spA0[0];
                        this->fwork[28] = spA0[1];
                        this->fwork[27] = DEG_TO_RAD(temp4);
                    }
                } else {
                    colId = COL2_0;
                    if (scenery360->obj.id == OBJ_SCENERY_3) {
                        colId = COL2_3;
                    }
                    if (func_col2_800A3690(&spCC, &spC0, colId, &spB4)) {
                        this->fwork[25] = spB4.y;
                        this->fwork[26] = spB4.x;
                        this->fwork[28] = spB4.z;
                        this->fwork[27] = DEG_TO_RAD(temp4);
                    }
                }
            }
        }
    }
}

void ActorAllRange_SpawnTeam(void) {
    Actor* actor;
    s32 i;
    s32 temp = 4;

    for (i = 0, actor = gActors; i < temp; i++, actor++) {
        if ((i > 0) && (gTeamShields[i] <= 0)) {
            continue;
        }
        Actor_Initialize(actor);
        actor->obj.status = OBJ_ACTIVE;
        actor->obj.id = OBJ_ACTOR_ALLRANGE;
        Object_SetInfo(&actor->info, actor->obj.id);
        if (i == 0) {
            actor->aiType = AI360_EVENT_HANDLER;
        } else {
            actor->obj.pos.x = D_360_800C9A9C[i].x;
            actor->obj.pos.y = D_360_800C9A9C[i].y;
            actor->obj.pos.z = D_360_800C9A9C[i].z;
            actor->aiType = D_360_800C9ACC[i];
            if (gCurrentLevel == LEVEL_KATINA) {
                actor->aiIndex = D_360_800C9AEC[i];
            } else {
                actor->aiIndex = D_360_800C9ADC[i];
            }
            actor->state = STATE360_2;
            actor->unk_0F4.y = 180.0f;
            if (actor->aiIndex <= -1) {
                actor->state = STATE360_3;
            }
            actor->health = 50;
            if ((gLevelType == LEVELTYPE_PLANET) || (gCurrentLevel == LEVEL_BOLSE)) {
                actor->unk_0C9 = 1;
            }
            actor->iwork[11] = 1;
            if (actor->aiType <= AI360_PEPPY) {
                AUDIO_PLAY_SFX(0x3100000C, actor->sfxSource, 4);
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(gTeamHitbox);
                actor->info.unk_1C = 0.0f;
                actor->info.bonus = 0;
            } else {
                AUDIO_PLAY_SFX(0x31000011, actor->sfxSource, 4);
            }
        }
    }
}

void ActorAllRange_SpawnStarWolf(void) {
    Actor* actor;
    s32 i;

    for (i = 0, actor = &gActors[4]; i < 4; i++, actor++) {
        if (gStarWolfTeamAlive[i] != 0) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_ACTIVE;
            actor->obj.pos.x = D_360_800C9AFC[i].x;
            actor->obj.pos.y = D_360_800C9AFC[i].y;
            actor->obj.pos.z = D_360_800C9AFC[i].z;
            actor->obj.id = OBJ_ACTOR_ALLRANGE;
            actor->aiType = i + AI360_WOLF;
            actor->aiIndex = D_360_800C9B2C[i];
            gActors[actor->aiIndex].aiIndex = -1;
            actor->health = 100;
            actor->unk_0C9 = 1;
            actor->unk_0F4.y = 225.0f;
            actor->state = STATE360_0;
            actor->timer_0BC = 250;
            actor->unk_0F4.x = -20.0f;
            actor->iwork[11] = 1;
            if (gCurrentLevel == LEVEL_VENOM_2) {
                actor->obj.rot.z = D_360_800C9B3C[i];
                actor->itemDrop = DROP_SILVER_STAR;
            }
            Object_SetInfo(&actor->info, actor->obj.id);
            if (gCurrentLevel == LEVEL_VENOM_2) {
                AUDIO_PLAY_SFX(0x31004006, actor->sfxSource, 4);
            } else {
                AUDIO_PLAY_SFX(0x31004005, actor->sfxSource, 4);
            }
        }
    }
}

void ActorAllRange_PlayMessage(u16* msg, RadioCharacterId character) {
    if (!gHideRadio && (gActors[0].state == STATE360_2) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_STANDBY)) {
        Radio_PlayMessage(msg, character);
    }
}

void ActorAllRange_StarWolfDefeatMesg(u16* msg, RadioCharacterId character) {
    if ((gStarWolfTeamAlive[0] + gStarWolfTeamAlive[1] + gStarWolfTeamAlive[2] + gStarWolfTeamAlive[3]) == 0) {
        gRadioState = 0;
    }
    ActorAllRange_PlayMessage(msg, character);
}

void func_360_8002F69C(Actor* this) {
    Actor* actor;
    s32 i;

    if (sStarWolfKillTimer != 0) {
        sStarWolfKillTimer--;
        if ((sStarWolfKillTimer == 0) && (gCurrentLevel != LEVEL_BOLSE) &&
            ((gStarWolfTeamAlive[0] + gStarWolfTeamAlive[1] + gStarWolfTeamAlive[2] + gStarWolfTeamAlive[3]) == 1)) {
            Radio_PlayMessage(gMsg_ID_19465, RCID_FOX);
        }
    }
    if (((gAllRangeEventTimer + 100) == (0, D_360_800C9B4C)) && (gCurrentLevel != LEVEL_VENOM_2)) {
        // fake?
        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 30);
        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 30);
    }
    if (gAllRangeEventTimer == D_360_800C9B4C) {
        ActorAllRange_SpawnStarWolf();
        this->state = STATE360_3;
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_STANDBY;
        if ((gCurrentLevel == LEVEL_VENOM_2) || (gCurrentLevel == LEVEL_BOLSE)) {
            gPlayer[0].camRoll = 20.0f;
        }
        AUDIO_PLAY_BGM(SEQ_ID_STAR_WOLF | SEQ_FLAG);
        AllRange_ClearRadio();
        if ((gCurrentLevel == LEVEL_FORTUNA) || (gCurrentLevel == LEVEL_VENOM_2)) {
            gPlayer[0].cam.eye.x = 4500.0f;
        } else if (gCurrentLevel == LEVEL_BOLSE) {
            gPlayer[0].cam.eye.x = 5500.0f;
        }
        gPlayer[0].cam.eye.y = 2500.0f;
        gPlayer[0].cam.eye.z = 5000.0f;
        gPlayer[0].cam.at.x = gActors[4].obj.pos.x;
        gPlayer[0].cam.at.y = gActors[4].obj.pos.y;
        gPlayer[0].cam.at.z = gActors[4].obj.pos.z;
    }
    if ((gAllRangeEventTimer > D_360_800C9B4C) && (gStarWolfMsgTimer == 0)) {
        gAllRangeFrameCount++;
        for (i = 1, actor = &gActors[1]; i < 8; i++, actor++) {
            if ((actor->obj.status == OBJ_ACTIVE) && (actor->state == STATE360_2) && (actor->health < 70) &&
                (actor->timer_0C6 != 0) && (actor->unk_0D4 == 1)) {
                if ((gActors[actor->aiIndex].state == STATE360_3) && (gActors[actor->aiIndex].aiType <= AI360_ANDREW)) {
                    gActors[actor->aiIndex].iwork[2] = AI360_FOX;
                    gActors[actor->aiIndex].state = STATE360_2;
                    gActors[actor->aiIndex].aiIndex = actor->aiType;
                    if (gTeamHelpActor == &gActors[actor->aiIndex]) {
                        gTeamHelpActor = NULL;
                        gTeamHelpTimer = 0;
                    }
                    if (gActors[actor->aiIndex].iwork[3] == 0) {
                        switch (gActors[actor->aiIndex].aiType) {
                            case AI360_FALCO:
                                ActorAllRange_PlayMessage(gMsg_ID_9160, RCID_FALCO);
                                break;
                            case AI360_SLIPPY:
                                ActorAllRange_PlayMessage(gMsg_ID_9170, RCID_SLIPPY);
                                break;
                            case AI360_PEPPY:
                                ActorAllRange_PlayMessage(gMsg_ID_9180, RCID_PEPPY);
                                break;
                        }
                        gActors[actor->aiIndex].iwork[3] = 200;
                    }
                }
                if (actor->aiType == AI360_WOLF) {
                    if (gCurrentLevel != LEVEL_VENOM_2) {
                        actor->state = STATE360_3;
                        actor->unk_04E = 300;
                    }
                } else {
                    actor->state = STATE360_3;
                    actor->aiIndex = -1;
                }
            }
        }
        if (gTeamShields[TEAM_ID_FALCO] <= 0) {
            gActors[AI360_LEON].aiIndex = AI360_FOX;
        }
        if (gTeamShields[TEAM_ID_SLIPPY] <= 0) {
            gActors[AI360_ANDREW].aiIndex = AI360_FOX;
        }
        if (gTeamShields[TEAM_ID_PEPPY] <= 0) {
            gActors[AI360_PIGMA].aiIndex = AI360_FOX;
        }
    }
}

void func_360_8002FB4C(Actor* actor) {
    Actor* actor2;
    Actor* actor1;
    s32 var_a0;
    s32 j;
    s32 i;

    for (i = 10, actor1 = &gActors[10]; i < ARRAY_COUNT(gActors); i++, actor1++) {
        if ((actor1->obj.status == OBJ_ACTIVE) && (actor1->obj.id == OBJ_ACTOR_ALLRANGE) && (actor1->unk_0B6 == 0) &&
            (actor1->aiIndex <= -1)) {
            var_a0 = false;
            for (j = 1, actor2 = &gActors[1]; j < 4; j++, actor2++) {
                if ((j != actor->index) && (i == actor2->aiIndex)) {
                    var_a0 = true;
                }
            }
            if (!var_a0) {
                actor->aiIndex = i;
                actor->state = STATE360_2;
                actor->iwork[2] = AI360_FOX;
                break;
            }
        }
    }
}

void func_360_8002FC00(Actor* this) {
    Actor* actor;
    s32 i;

    for (i = 0, actor = &gActors[10]; i < 50; i++, actor++) {
        if ((actor->obj.status == OBJ_DYING) && (actor->aiIndex >= AI360_FALCO) && (actor->aiIndex <= AI360_PEPPY)) {
            Actor* actor2;
            s32 j;

            for (j = 0, actor2 = &gActors[10]; j < 51; j++, actor2++) {
                if ((actor2->obj.status == OBJ_ACTIVE) && (actor2->state == STATE360_2) &&
                    (actor2->aiIndex == actor->aiIndex)) {
                    return;
                }
            }
            if (gTeamShields[actor->aiIndex] > 0) {
                func_360_8002FB4C(&gActors[actor->aiIndex]);
                if ((actor->iwork[5] != 0) && (actor->unk_0D4 == 1) && (gActors[actor->aiIndex].iwork[3] == 0)) {
                    if (gTeamHelpActor == &gActors[actor->aiIndex]) {
                        gTeamHelpActor = NULL;
                        gTeamHelpTimer = 0;
                    }
                    switch (gActors[actor->aiIndex].aiType) {
                        case AI360_FALCO:
                            ActorAllRange_PlayMessage(gMsg_ID_9160, RCID_FALCO);
                            break;
                        case AI360_SLIPPY:
                            ActorAllRange_PlayMessage(gMsg_ID_9170, RCID_SLIPPY);
                            break;
                        case AI360_PEPPY:
                            ActorAllRange_PlayMessage(gMsg_ID_9180, RCID_PEPPY);
                            break;
                    }
                    gActors[actor->aiIndex].iwork[3] = 200;
                    gActors[actor->aiIndex].timer_0C4 = 600;
                }
            }
        }
    }
}

bool AllRange_SupplyEvent(void) {
    switch (gCurrentLevel) {
        case LEVEL_FORTUNA:
            return gAllRangeEventTimer == D_360_800C9B4C + 2400;
        case LEVEL_BOLSE:
            return gBosses[2].swork[36] == 4;
        case LEVEL_KATINA:
            return gBosses[1].swork[15] == 2;
    }
    return false;
}

void ActorAllRange_SpawnSupplies(Actor* this) {
    Actor* supplies;
    s32 i;

    if ((gCallTimer != 0) && (gControllerPress[gMainController].button & R_CBUTTONS)) {
        Audio_SetUnkVoiceParam(0);
        gCallVoiceParam = 0;
        gCallTimer = 0;
        Radio_PlayMessage(gMsg_ID_20230, RCID_ROB64);
        gAllRangeSupplyTimer = 160;
    }
    if (gAllRangeSupplyTimer != 0) {
        gAllRangeSupplyTimer--;
        if (gAllRangeSupplyTimer == 0) {
            for (i = 20, supplies = &gActors[20]; i < 60; i++, supplies++) {
                if (supplies->obj.status == OBJ_FREE) {
                    Actor_Initialize(supplies);
                    supplies->obj.status = OBJ_INIT;
                    supplies->obj.id = OBJ_ACTOR_SUPPLIES;
                    if (gCurrentLevel == LEVEL_SECTOR_Z) {
                        supplies->obj.pos.x = 200.0f;
                        supplies->obj.pos.y = -500.0f;
                        supplies->obj.pos.z = 0.0f;
                        AUDIO_PLAY_SFX(0x09000002, supplies->sfxSource, 0);
                        supplies->timer_0C2 = 50;
                    } else {
                        supplies->obj.pos.x = 0.0f;
                        supplies->obj.pos.y = 3000.0f;
                        supplies->obj.pos.z = 5000.0f;
                        supplies->timer_0C2 = 50;
                    }
                    Object_SetInfo(&supplies->info, supplies->obj.id);
                    break;
                }
            }
        }
    }
    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) && !gAllRangeSuppliesSent) {
        if (gAllRangeWingRepairTimer != 0) {
            gAllRangeWingRepairTimer--;
        }
        if ((gPlayer[0].shields < 64) || AllRange_SupplyEvent() || (gAllRangeWingRepairTimer == 1)) {
            gCallTimer = 60;
            gAllRangeSuppliesSent = true;
        }
    }
}

void ActorAllRange_UpdateEvents(Actor* this) {
    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_DOWN) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_NEXT)) {
        Object_Kill(&this->obj, this->sfxSource);
        return;
    }
    gAllRangeEventTimer++;
    switch (gCurrentLevel) {
        case LEVEL_FORTUNA:
            Fortuna_UpdateEvents(this);
            break;
        case LEVEL_KATINA:
            Katina_UpdateEvents(this);
            break;
        case LEVEL_BOLSE:
            Bolse_UpdateEventHandler(this);
            break;
        case LEVEL_SECTOR_Z:
            SectorZ_UpdateEvents(this);
            break;
        case LEVEL_VENOM_2:
            Venom2_UpdateEvents(this);
            break;
    }
    ActorAllRange_SpawnSupplies(this);
}

s32 func_360_800301F4(Actor* this) {
    Boss* boss;
    f32 temp_ft4;
    f32 temp_ft5;
    s32 i;
    f32 sinY;
    f32 cosY;

    if (gLevelMode == LEVELMODE_ON_RAILS) {
        return 0;
    }
    sinY = SIN_DEG(this->obj.rot.y);
    cosY = COS_DEG(this->obj.rot.y);
    temp_ft4 = this->fwork[9] * 10.0f + (sinY * 650.0f);
    temp_ft5 = this->fwork[9] * 10.0f + (cosY * 650.0f);
    for (i = 0; i < 200; i++) {
        if ((gScenery360[i].obj.status == OBJ_ACTIVE) &&
            (fabsf(gScenery360[i].obj.pos.x - (this->obj.pos.x + temp_ft4)) < 1000.0f) &&
            (fabsf(gScenery360[i].obj.pos.z - (this->obj.pos.z + temp_ft5)) < 1000.0f)) {
            if (fabsf(gScenery360[i].obj.pos.y - this->obj.pos.y) < 1000.0f) {
                if (gScenery360[i].obj.pos.y < this->obj.pos.y) {
                    return 1;
                } else {
                    return -1;
                }
            }
        }
    }
    boss = &gBosses[0];
    if ((gCurrentLevel == LEVEL_SECTOR_Z) && (fabsf(boss->obj.pos.x - (this->obj.pos.x + temp_ft4)) < 2000.0f) &&
        (fabsf(boss->obj.pos.z - (this->obj.pos.z + temp_ft5)) < 2000.0f)) {
        if (fabsf(boss->obj.pos.y - this->obj.pos.y) < 1500.0f) {
            if (boss->obj.pos.y < this->obj.pos.y) {
                return 1;
            } else {
                return -1;
            }
        }
    }
    return 0;
}

s32 func_360_8003049C(Actor* this) {
    Scenery360* scenery360;
    s32 i;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 temp_fa0;
    f32 temp_ft4;
    f32 var_ft5;
    Boss* boss = &gBosses[0];
    s32 pad[4];

    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_LEVEL_INTRO) {
        return 0;
    }
    if ((gLevelType == LEVELTYPE_SPACE) && (gCurrentLevel != LEVEL_BOLSE)) {
        return func_360_800301F4(this);
    }
    sp40 = SIN_DEG(this->obj.rot.y);
    sp3C = COS_DEG(this->obj.rot.y);
    temp_fa0 = this->fwork[9] * 10.0f + (sp40 * 650.0f);
    temp_ft4 = this->fwork[9] * 10.0f + (sp3C * 650.0f);
    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        for (i = 0, scenery360 = gScenery360; i < 200; i++, scenery360++) {
            if ((scenery360->obj.status == OBJ_ACTIVE) &&
                (fabsf(scenery360->obj.pos.x - (this->obj.pos.x + temp_fa0)) < 1200.0f) &&
                (fabsf(scenery360->obj.pos.z - (this->obj.pos.z + temp_ft4)) < 1200.0f) && (this->obj.pos.y < 650.0f)) {
                return 1;
            }
        }
    }
    sp44 = 1200.0f;
    var_ft5 = 650.0f;
    if (this->aiType < AI360_KATT) {
        var_ft5 = 720.0f;
    }

    if (boss->obj.id == OBJ_BOSS_293) {
        var_ft5 = 350.0f;
    } else if (boss->obj.id == OBJ_BOSS_309) {
        sp44 = 2000.0f;
        var_ft5 = 750.0f;
    } else if (boss->obj.id == OBJ_BOSS_317) {
        sp44 = 1500.0f;
        var_ft5 = 700.0f;
    }
    if ((fabsf(boss->obj.pos.x - (this->obj.pos.x + temp_fa0)) < sp44) &&
        (fabsf(boss->obj.pos.z - (this->obj.pos.z + temp_ft4)) < sp44) &&
        (fabsf(boss->obj.pos.y - this->obj.pos.y) < var_ft5)) {
        return 1;
    }
    return 0;
}

void ActorAllRange_ApplyDamage(Actor* this) {
    s32 var_a1;
    Vec3f sp48;
    Vec3f sp3C;

    if (this->unk_0D0 != 0) {
        if (this->aiType == AI360_GREAT_FOX) {
            this->unk_0D0 = 0;
        }
        if ((this->unk_0D0 >= 2) && (this->aiType >= AI360_WOLF) && (this->aiType < AI360_KATT)) {
            this->damage = 10;
            this->timer_0C2 = 10;
        }
        if (((this->aiType <= AI360_PEPPY) || (this->aiType == AI360_BILL) || (this->aiType == AI360_KATT)) &&
            (this->unk_0D0 == 2)) {
            this->unk_0D0 = 0;
        }
        if ((this->unk_0D0 == 2) && (this->fwork[22] > 0.0f)) {
            this->unk_0D0 = 0;
        }
        if (this->fwork[23] > 1.0f) {
            this->unk_0D0 = 0;
        }
        if (this->unk_0D0 != 0) {
            var_a1 = false;
            if ((this->unk_0B6 == 3) ||
                ((gCurrentLevel == LEVEL_BOLSE) && (gBosses[1].obj.status != OBJ_FREE) &&
                 (this->aiType >= AI360_WOLF)) ||
                ((gCurrentLevel == LEVEL_VENOM_2) && (this->aiType >= AI360_WOLF) && (this->aiType < AI360_10) &&
                 (this->unk_0D0 == 2))) {
                this->damage = 0;
                var_a1 = true;
                if (gCurrentLevel == LEVEL_BOLSE) {
                    this->unk_0D4 = 0;
                }
            }
            if (this->aiType >= AI360_WOLF) {
                if (((this->unk_0D0 != 3) || (this->aiType != AI360_WOLF)) &&
                    ((this->aiType != AI360_MISSILE) || (this->unk_0D0 != 2))) {
                    this->health -= this->damage;
                }
            } else if ((this->aiType <= AI360_PEPPY) && (this->state != STATE360_6)) {
                if (this->aiType == AI360_FALCO) {
                    gTeamDamage[this->aiType] = this->damage;
                } else {
                    gTeamDamage[this->aiType] = this->damage * 2;
                }
            }
            if (this->health <= 0) {
                this->health = 0;
                if (this->aiType == AI360_MISSILE) {
                    SectorZ_80199900(this, 1);
                    if (this->unk_0D4 == 1) {
                        if (gActors[8].obj.status == OBJ_ACTIVE) {
                            Radio_PlayMessage(gMsg_ID_16140, RCID_KATT);
                        }
                        BonusText_Display(this->obj.pos.x, this->obj.pos.y, this->obj.pos.z, 10);
                        gHitCount += 11;
                        D_ctx_80177850 = 15;
                    } else {
                        switch (this->unk_0D4) {
                            case 102:
                                Radio_PlayMessage(gMsg_ID_16170, RCID_FALCO);
                                break;
                            case 103:
                                Radio_PlayMessage(gMsg_ID_16180, RCID_SLIPPY);
                                break;
                            case 104:
                                Radio_PlayMessage(gMsg_ID_16175, RCID_PEPPY);
                                break;
                            case 109:
                                Radio_PlayMessage(gMsg_ID_16185, RCID_KATT);
                                break;
                        }
                    }
                    return;
                }
                this->timer_0C6 = 50;
                this->iwork[8] = 20;
                this->obj.status = OBJ_DYING;
                this->fwork[23] = 0.0f;
                func_effect_8007D2C8(this->obj.pos.x, this->obj.pos.y, this->obj.pos.z, 4.0f);
                AUDIO_PLAY_SFX(0x2903700B, this->sfxSource, 4);
                this->timer_0C2 = 10;
                this->timer_0BE = 0;
                this->timer_04C = RAND_INT(2.9f);
                switch (RAND_INT(4.0f)) {
                    case 0:
                        this->timer_0BC = 0;
                        break;
                    case 1:
                        this->timer_0BC = 50;
                        break;
                    case 2:
                        this->timer_0BC = 200;
                        break;
                    case 3:
                        this->timer_0BC = 300;
                        break;
                }
                if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
                    this->timer_0BC = 70;
                }
                if ((gLevelType == LEVELTYPE_SPACE) && (gCurrentLevel != LEVEL_BOLSE)) {
                    if (Rand_ZeroOne() < 0.5f) {
                        this->timer_0BC = 10;
                    } else {
                        this->timer_0BC = RAND_INT(50.0f);
                    }
                }
                if ((this->aiType >= AI360_WOLF) && (this->aiType < AI360_KATT)) {
                    this->timer_0BC = RAND_INT(40.0f) + 60.0f;
                }
                if (this->damage >= 20) {
                    this->timer_0BC = 0;
                }
                if ((gCurrentLevel == LEVEL_KATINA) && (this->unk_0B6 == 1) && (this->unk_0D4 == 1)) {
                    if (gKaAllyKillCount < 2) {
                        ActorAllRange_PlayMessage(gMsg_ID_18018, RCID_BILL);
                    }
                    gKaAllyKillCount++;
                }
                switch (this->aiType) {
                    case AI360_WOLF:
                        gStarWolfTeamAlive[0] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_19458, RCID_WOLF);
                        } else {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_9365, RCID_WOLF);
                        }
                        break;
                    case AI360_LEON:
                        gStarWolfTeamAlive[1] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_19459, RCID_LEON);
                        } else {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_9366, RCID_LEON);
                        }
                        break;
                    case AI360_PIGMA:
                        gStarWolfTeamAlive[2] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_19460, RCID_PIGMA);
                        } else {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_9367, RCID_PIGMA);
                        }
                        break;
                    case AI360_ANDREW:
                        gStarWolfTeamAlive[3] = 0;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_19461, RCID_ANDREW);
                        } else {
                            ActorAllRange_StarWolfDefeatMesg(gMsg_ID_9368, RCID_ANDREW);
                        }
                        break;
                }
                if ((this->aiType >= AI360_WOLF) && (this->aiType <= AI360_ANDREW)) {
                    sStarWolfKillTimer = 150;
                }
                switch (this->unk_0D4) {
                    case 1:
                        if (this->aiType >= AI360_10) {
                            switch (this->iwork[2]) {
                                case AI360_FALCO:
                                    ActorAllRange_PlayMessage(gMsg_ID_20170, RCID_FALCO);
                                    break;
                                case AI360_SLIPPY:
                                    ActorAllRange_PlayMessage(gMsg_ID_20150, RCID_SLIPPY);
                                    break;
                                case AI360_PEPPY:
                                    ActorAllRange_PlayMessage(gMsg_ID_20160, RCID_PEPPY);
                                    break;
                            }
                        }
                        break;
                    case 102:
                    case 103:
                    case 104:
                        if ((this->aiType >= AI360_WOLF) && (this->aiType < AI360_KATT)) {
                            if ((gStarWolfTeamAlive[0] + gStarWolfTeamAlive[1] + gStarWolfTeamAlive[2] +
                                 gStarWolfTeamAlive[3]) == 0) {
                                switch (this->unk_0D4) {
                                    case 102:
                                        Radio_PlayMessage(gMsg_ID_9438, RCID_FALCO);
                                        break;
                                    case 103:
                                        Radio_PlayMessage(gMsg_ID_9436, RCID_SLIPPY);
                                        break;
                                    case 104:
                                        Radio_PlayMessage(gMsg_ID_9437, RCID_PEPPY);
                                        break;
                                }
                            } else {
                                gActors[this->unk_0D4 - 101].iwork[1] = 80;
                            }
                        } else {
                            gActors[this->unk_0D4 - 101].iwork[1] = 80;
                        }
                        break;
                }
            } else {
                if (var_a1) {
                    AUDIO_PLAY_SFX(0x29001062, this->sfxSource, 4);
                    this->iwork[7] = 3;
                    this->iwork[18] = 5;
                    this->iwork[8] = 15;
                    if (Rand_ZeroOne() < 0.5f) {
                        this->fwork[8] = 0.0f;
                        this->fwork[7] = 360.0f;
                    } else {
                        this->fwork[7] = 0.0f;
                        this->fwork[8] = 359.999f;
                    }
                } else {
                    this->timer_0C6 = 20;
                    this->iwork[8] = 20;
                }
                if (this->aiType == AI360_MISSILE) {
                    AUDIO_PLAY_SFX(0x29034003, this->sfxSource, 4);
                } else if (this->iwork[7] == 0) {
                    AUDIO_PLAY_SFX(0x2903300E, this->sfxSource, 4);
                }
                func_effect_8007D10C(this->obj.pos.x, this->obj.pos.y, this->obj.pos.z, 1.5f);
                if (this->aiType < AI360_GREAT_FOX) {
                    Matrix_RotateY(gCalcMatrix, this->unk_0F4.y * M_DTOR, MTXF_NEW);
                    sp48.x = 30.0f;
                    if (Rand_ZeroOne() < 0.5f) {
                        sp48.x = -30.0f;
                    }
                    sp48.y = RAND_FLOAT_CENTERED(30.0f);
                    sp48.z = 0.0f;
                    if (this->iwork[7] != 0) {
                        sp48.x *= 1.5f;
                        sp48.y = 30.0f;

                        if ((this->obj.pos.y > 100.0f) && (Rand_ZeroOne() < 0.5f)) {
                            sp48.y = -30.0f;
                        }
                    }
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp48, &sp3C);
                    this->fwork[13] = sp3C.x;
                    this->fwork[14] = sp3C.y;
                    this->fwork[12] = sp3C.z;
                }
                if ((gRadioState == 0) && (gActors[0].obj.status == OBJ_ACTIVE)) {
                    if (this->unk_0D0 == 3) {
                        switch (this->aiType) {
                            case AI360_FALCO:
                                ActorAllRange_PlayMessage(gMsg_ID_20210, RCID_FALCO);
                                break;
                            case AI360_PEPPY:
                                ActorAllRange_PlayMessage(gMsg_ID_20200, RCID_PEPPY);
                                break;
                            case AI360_SLIPPY:
                                ActorAllRange_PlayMessage(gMsg_ID_20190, RCID_SLIPPY);
                                break;
                            case AI360_KATT:
                                ActorAllRange_PlayMessage(gMsg_ID_20084, RCID_KATT);
                                break;
                        }
                    } else if (this->unk_0D4 < 105) {
                        if (this->aiType >= AI360_WOLF) {
                            if (this->unk_0D4 == 1) {
                                if ((gCurrentLevel == LEVEL_KATINA) && (this->unk_0B6 == 1) && (gKaKilledAlly == 0)) {
                                    gKaKilledAlly = 1;
                                    Radio_PlayMessage(gMsg_ID_18015, RCID_BILL);
                                } else if (this->aiType == AI360_KATT) {
                                    ActorAllRange_PlayMessage(gMsg_ID_20084, RCID_KATT);
                                } else if (this->aiType == AI360_BILL) {
                                    ActorAllRange_PlayMessage(gMsg_ID_20085, RCID_BILL);
                                } else if (gCurrentLevel == LEVEL_VENOM_2) {
                                    switch (this->aiType) {
                                        case AI360_WOLF:
                                            ActorAllRange_PlayMessage(gMsg_ID_19454, RCID_WOLF);
                                            break;
                                        case AI360_LEON:
                                            ActorAllRange_PlayMessage(gMsg_ID_19455, RCID_LEON);
                                            break;
                                        case AI360_PIGMA:
                                            ActorAllRange_PlayMessage(gMsg_ID_19456, RCID_PIGMA);
                                            break;
                                        case AI360_ANDREW:
                                            ActorAllRange_PlayMessage(gMsg_ID_19457, RCID_ANDREW);
                                            break;
                                    }
                                }
                            }
                        } else if (this->unk_0D4 == 1) {
                            switch (this->aiType) {
                                case AI360_FALCO:
                                    ActorAllRange_PlayMessage(gMsg_ID_20060, RCID_FALCO);
                                    break;
                                case AI360_PEPPY:
                                    ActorAllRange_PlayMessage(gMsg_ID_20070, RCID_PEPPY);
                                    break;
                                case AI360_SLIPPY:
                                    ActorAllRange_PlayMessage(gMsg_ID_20080, RCID_SLIPPY);
                                    break;
                            }
                        }
                    } else if ((this->aiType <= AI360_PEPPY) && (this->iwork[6] != 0) &&
                               (this->iwork[2] != AI360_FOX)) {
                        switch (this->aiType) {
                            case AI360_FALCO:
                                if (gTeamShields[TEAM_ID_FALCO] >= 90) {
                                    ActorAllRange_PlayMessage(gMsg_ID_9130, RCID_FALCO);
                                } else {
                                    Radio_PlayMessage(gMsg_ID_9151, RCID_FALCO);
                                }
                                if ((gTeamHelpActor == NULL) || (gTeamShields[this->aiType] <= 50)) {
                                    gTeamHelpActor = this;
                                    gTeamHelpTimer = 320;
                                }
                                break;
                            case AI360_SLIPPY:
                                if (gTeamShields[TEAM_ID_SLIPPY] >= 90) {
                                    ActorAllRange_PlayMessage(gMsg_ID_9140, RCID_SLIPPY);
                                } else {
                                    Radio_PlayMessage(gMsg_ID_9152, RCID_SLIPPY);
                                }
                                if ((gTeamHelpActor == NULL) || (gTeamShields[this->aiType] <= 50)) {
                                    gTeamHelpActor = this;
                                    gTeamHelpTimer = 320;
                                }
                                break;
                            case AI360_PEPPY:
                                if (gTeamShields[TEAM_ID_PEPPY] >= 90) {
                                    ActorAllRange_PlayMessage(gMsg_ID_9150, RCID_PEPPY);
                                } else {
                                    Radio_PlayMessage(gMsg_ID_9153, RCID_PEPPY);
                                }
                                if ((gTeamHelpActor == NULL) || (gTeamShields[this->aiType] <= 50)) {
                                    gTeamHelpActor = this;
                                    gTeamHelpTimer = 320;
                                }
                                break;
                        }
                    }
                }
            }
            this->unk_0D0 = 0;
        }
    }
}

void ActorAllRange_CheckPlayerNearby(Actor* actor) {
    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) && (actor->iwork[24] != 0) &&
        (fabsf(actor->obj.pos.x - gPlayer[0].pos.x) < 1000.0f) &&
        (fabsf(actor->obj.pos.y - gPlayer[0].pos.y) < 1000.0f) &&
        (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 1000.0f)) {
        actor->iwork[10]++;
    } else {
        actor->iwork[10] = 0;
    }
}

bool func_360_80031900(Actor* actor) {
    Vec3f sp24;
    Vec3f sp18;

    Matrix_RotateY(gCalcMatrix, -actor->obj.rot.y * M_DTOR, MTXF_NEW);
    sp24.x = actor->fwork[4] - actor->obj.pos.x;
    sp24.y = 0.0f;
    sp24.z = actor->fwork[6] - actor->obj.pos.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp24, &sp18);
    if (sp18.z > 0.0f) {
        return true;
    } else {
        return false;
    }
}

void ActorAllRange_Update(Actor* this) {
    u8 sp10F;
    s32 sp108;
    s32 sp104;
    s32 temp_v0_27;
    RadarMark* radarMark;
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
    Vec3f sp84 = D_360_800C9B98;
    Vec3f sp78 = D_360_800C9BA4;
    s32 pad1;
    s32 pad2;
    s32 pad3;

    if (this->aiType == AI360_EVENT_HANDLER) {
        this->timer_0C2 = 10;
        this->info.unk_1C = 0.0f;
        ActorAllRange_UpdateEvents(this);
        return;
    }
    if ((this->iwork[17] != 0) && (this->iwork[16] == STATE360_0) && (this->aiType >= AI360_WOLF)) {
        switch (RAND_INT(3.9f)) {
            case 0:
            case 1:
                if (gCurrentLevel == LEVEL_VENOM_2) {
                    this->iwork[16] = STATE360_10;
                }
                break;
            case 2:
                this->iwork[16] = STATE360_8;
                break;
            case 3:
                this->iwork[16] = STATE360_7;
                break;
        }
        this->iwork[17] = 0;
        if (this->iwork[18] != 0) {
            this->iwork[18]--;
            this->iwork[16] = STATE360_0;
        }
    }
    if ((this->lockOnTimers[TEAM_ID_FOX] != 0) && (gCurrentLevel != LEVEL_VENOM_2) && (this->aiType < AI360_10) &&
        (this->lockOnTimers[TEAM_ID_FOX] < 5) && ((gGameFrameCount % 32) == 0)) {
        this->iwork[16] = STATE360_10;
    }
    if ((this->iwork[16] != STATE360_0) && (this->state < STATE360_7)) {
        this->state = this->iwork[16];
        switch (this->state) {
            case STATE360_7:
            case STATE360_8:
                if (this->unk_0F4.x > 180.0f) {
                    this->unk_0F4.x -= 360.0f;
                }
                this->unk_046 = 0;
                break;
            case STATE360_9:
                this->timer_0BC = RAND_INT(20.0f) + 30;
                if (Rand_ZeroOne() < 0.5f) {
                    this->fwork[19] = this->obj.rot.y + 50.0f;
                } else {
                    this->fwork[19] = this->obj.rot.y - 50.0f;
                }
                if (this->fwork[19] >= 360.0f) {
                    this->fwork[19] -= 360.0f;
                }
                if (this->fwork[19] < 0.0f) {
                    this->fwork[19] += 360.0f;
                }
                break;
            case STATE360_10:
                this->timer_0BC = 35;
                if (Rand_ZeroOne() < 0.5f) {
                    this->fwork[7] = 360.0f;
                    this->fwork[8] = 0.0f;
                    this->iwork[15] = 1;
                } else {
                    this->fwork[7] = 0.0f;
                    this->fwork[8] = 359.999f;
                    this->iwork[15] = -1;
                }
                this->iwork[19] = 1;
                break;
        }
    }
    this->iwork[16] = STATE360_0;
    spCC = spC8 = spC4 = 0.0f;
    if (this->iwork[7] != 0) {
        this->iwork[7]--;
        this->fwork[22] = 1.0f;
    }
    if (this->iwork[3] != 0) {
        this->iwork[3]--;
    }
    Math_SmoothStepToF(&this->fwork[10], 0.0f, 0.1f, 0.2f, 0.00001f);
    Math_SmoothStepToF(&this->fwork[9], this->fwork[10], 0.1f, 2.0f, 0.00001f);
    if (this->fwork[10] > 0.1f) {
        this->iwork[11] = 2;
    } else {
        this->iwork[11] = 1;
    }
    if (this->aiType < AI360_10) {
        ActorAllRange_CheckPlayerNearby(this);
        if (this->iwork[10] == 200) {
            switch (this->aiType) {
                case AI360_WOLF:
                case AI360_LEON:
                case AI360_PIGMA:
                case AI360_ANDREW:
                case AI360_KATT:
                    break;
                case AI360_FALCO:
                    if (gPlayer[0].shields < (Play_GetMaxShields() / 2)) {
                        Radio_PlayMessage(gMsg_ID_20298, RCID_FALCO);
                    } else if (Rand_ZeroOne() < 0.5f) {
                        Radio_PlayMessage(gMsg_ID_20280, RCID_FALCO);
                    } else {
                        Radio_PlayMessage(gMsg_ID_20301, RCID_FALCO);
                    }
                    break;
                case AI360_SLIPPY:
                    if (gPlayer[0].shields < (Play_GetMaxShields() / 2)) {
                        Radio_PlayMessage(gMsg_ID_20297, RCID_SLIPPY);
                    } else if (Rand_ZeroOne() < 0.5f) {
                        Radio_PlayMessage(gMsg_ID_20282, RCID_SLIPPY);
                    } else {
                        Radio_PlayMessage(gMsg_ID_20300, RCID_SLIPPY);
                    }
                    break;
                case AI360_PEPPY:
                    if (gPlayer[0].shields < (Play_GetMaxShields() / 2)) {
                        Radio_PlayMessage(gMsg_ID_20296, RCID_PEPPY);
                    } else if (Rand_ZeroOne() < 0.5f) {
                        Radio_PlayMessage(gMsg_ID_20281, RCID_PEPPY);
                    } else {
                        Radio_PlayMessage(gMsg_ID_20299, RCID_PEPPY);
                    }
                    break;
                case AI360_BILL:
                    Radio_PlayMessage(gMsg_ID_18120, RCID_BILL);
                    break;
            }
        }
    }
    sp104 = 0;
    this->iwork[5] = 0;
    if ((this->aiType > AI360_FOX) && (this->aiType <= AI360_PEPPY) && (gTeamShields[this->aiType] <= 0) &&
        (this->state != STATE360_6)) {
        this->state = STATE360_6;
        if (this->timer_0C2 < 100) {
            gTeamShields[this->aiType] = 1;
            switch (this->aiType) {
                case AI360_FALCO:
                    Radio_PlayMessage(gMsg_ID_20220, RCID_FALCO);
                    break;
                case AI360_SLIPPY:
                    Radio_PlayMessage(gMsg_ID_20222, RCID_SLIPPY);
                    break;
                case AI360_PEPPY:
                    Radio_PlayMessage(gMsg_ID_20221, RCID_PEPPY);
                    break;
            }
            this->fwork[29] = 5.0f;
            this->fwork[7] = 360.0f;
            this->fwork[8] = 0.0f;
            AUDIO_PLAY_SFX(0x09000002, this->sfxSource, 0);
            this->unk_046 = 0;
        }
        gTeamShields[this->aiType] = -1;
        gTeamDamage[this->aiType] = 0;
        this->iwork[1] = 0;
        this->timer_0C2 = 10000;
    }
    switch (this->state) {
        case STATE360_6:
            this->timer_0C2 = 10000;
            this->iwork[11] = 2;
            this->fwork[1] = 45.0f;
            this->fwork[3] = 2.0f;
            gTeamShields[this->aiType] = -1;
            gTeamDamage[this->aiType] = 0;
            if (gCurrentLevel == LEVEL_SECTOR_Z) {
                this->fwork[4] = D_360_800C9B50[this->unk_046].x;
                this->fwork[5] = D_360_800C9B50[this->unk_046].y;
                this->fwork[6] = D_360_800C9B50[this->unk_046].z;
                if ((fabsf(this->obj.pos.x - D_360_800C9B50[this->unk_046].x) < 800.0f) &&
                    (fabsf(this->obj.pos.z - D_360_800C9B50[this->unk_046].z) < 800.0f)) {
                    this->unk_046++;
                    if (this->unk_046 >= 4) {
                        Object_Kill(&this->obj, this->sfxSource);
                    }
                }
            } else {
                this->fwork[5] = 20000.0f;
                if (this->obj.pos.y > 3000.0f) {
                    Object_Kill(&this->obj, this->sfxSource);
                }
            }
            sp104 = 2;
            break;
        case STATE360_5:
            SectorZ_Missile_Update(this);
            sp104 = 1;
            break;
        case STATE360_0:
            if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_START_360) {
                this->fwork[0] = this->fwork[1] = 40.0f;
                if (gActors[0].state == STATE360_5) {
                    Math_SmoothStepToF(&this->unk_0F4.x, 30.0f, 0.1f, 0.5f, 0.0f);
                    this->fwork[1] = 200.0f;
                }
                if (this->timer_0BC == 0) {
                    if (this->aiType == AI360_WOLF) {
                        this->state = STATE360_3;
                        if (gCurrentLevel == LEVEL_VENOM_2) {
                            this->unk_04E = 200;
                        } else {
                            this->unk_04E = 200;
                        }
                    } else {
                        this->state = STATE360_2;
                        if (this->aiType == AI360_KATT) {
                            this->fwork[7] = 360.0f;
                            this->fwork[8] = 0.0f;
                        }
                    }
                }
                Math_SmoothStepToAngle(&this->obj.rot.z, 0.0f, 0.03f, 0.5f, 0.0f);
            }
            break;
        case STATE360_1:
            this->fwork[1] = 40.0f;
            if ((this->timer_0BC < 35) && (gCurrentLevel == LEVEL_FORTUNA)) {
                Math_SmoothStepToF(&this->unk_0F4.x, 15.0f, 0.1f, 1.0f, 0.0f);
            }
            if (this->timer_0BC == 0) {
                this->state = STATE360_3;
                if ((gCurrentLevel == LEVEL_BOLSE) && (this->aiIndex > -1)) {
                    this->state = STATE360_2;
                }
            }
            break;
        case STATE360_2:
            sp104 = 1;
            spF8 = 800.0f;
            spF4 = 1500.0f;
            spF0 = 0.4f;
            spEC = fabsf(this->fwork[4] - this->obj.pos.x);
            spE8 = fabsf(this->fwork[6] - this->obj.pos.z);
            sp10F = 0xB;
            if (this->aiType == AI360_FALCO) {
                spF0 = 0.5f;
            } else if ((this->unk_0B6 != 2) && (this->unk_0B6 == 3)) {
                spF0 = 0.5f;
            }
            if (this->aiIndex == AI360_FOX) {
                spF0 = 0.2f;
            }
            if (this->aiIndex <= -1) {
                this->state = STATE360_3;
            } else {
                if (gActors[this->aiIndex].aiType == AI360_MISSILE) {
                    spF0 = 0.8f;
                    spF4 = spF8 = 3000.0f;
                    this->fwork[3] = 2.0f;
                }
                if (this->aiIndex == AI360_FOX) {
                    if (gCurrentLevel != LEVEL_VENOM_2) {
                        if ((gPlayer[0].somersault && (this->iwork[4] > 10)) ||
                            ((gCurrentLevel == LEVEL_BOLSE) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_STANDBY))) {
                            this->state = STATE360_3;
                            this->unk_04E = 300;
                            this->timer_0BC = 160;
                            if (this->aiType == AI360_WOLF) {
                                ActorAllRange_PlayMessage(gMsg_ID_9369, RCID_WOLF);
                            }
                            break;
                        } else if ((this->iwork[4] > 200) && (gPlayer[0].timer_224 != 0)) {
                            this->iwork[4] = 100;
                            break;
                        }
                    }
                    if ((this->aiType >= AI360_WOLF) && (this->aiType != AI360_KATT) &&
                        !((gCurrentLevel == LEVEL_VENOM_2) && (this->aiType == AI360_WOLF))) {
                        spCC = SIN_DEG((this->index * 45) + gGameFrameCount) * 100.0f;
                        spC8 = COS_DEG((this->index * 45) + (gGameFrameCount * 2)) * 100.0f;
                        spC4 = SIN_DEG((this->index * 45) + gGameFrameCount) * 100.0f;
                    }
                    if (!gPlayer[0].somersault) {
                        this->fwork[4] = gPlayer[0].pos.x + spCC;
                        this->fwork[5] = gPlayer[0].pos.y + spC8;
                        this->fwork[6] = gPlayer[0].unk_138 + spC4;
                        this->fwork[1] = gPlayer[0].baseSpeed + 10.0f;
                    }
                    if ((gActors[0].state == STATE360_6) && (this->aiType <= AI360_PEPPY)) {
                        this->fwork[3] = 3.0f;
                        this->fwork[1] = gPlayer[0].baseSpeed - 5.0f;
                        this->iwork[11] = 2;
                    } else if ((gCurrentLevel == LEVEL_VENOM_2) && (this->aiType >= AI360_WOLF)) {
                        this->fwork[3] = 1.6f;
                        this->fwork[1] = 55.0f;
                    } else {
                        this->fwork[3] = 1.2f;
                    }
                    spF4 = 2000.0f;
                    spF8 = 700.0f;
                    if (gCurrentLevel == LEVEL_VENOM_2) {
                        spF0 = 0.5f;
                        sp10F = 3;
                    } else {
                        spF0 = 0.7f;
                    }
                } else if (this->aiIndex != AI360_GREAT_FOX) {
                    if (this->aiType >= AI360_10) {
                        spCC = SIN_DEG((this->index * 45) + gGameFrameCount) * 200.0f;
                        spC8 = COS_DEG((this->index * 45) + (gGameFrameCount * 2)) * 200.0f;
                        spC4 = SIN_DEG((this->index * 45) + gGameFrameCount) * 200.0f;
                    }
                    this->fwork[4] = gActors[this->aiIndex].obj.pos.x + spCC;
                    this->fwork[5] = gActors[this->aiIndex].obj.pos.y + spC8;
                    this->fwork[6] = gActors[this->aiIndex].obj.pos.z + spC4;
                    if ((gCurrentLevel == LEVEL_VENOM_2) && (this->aiType >= AI360_WOLF)) {
                        this->fwork[1] = 55.0f;
                        this->fwork[3] = 1.6f;
                    } else if ((gCurrentLevel == LEVEL_FORTUNA) && (this->aiType > AI360_10)) {
                        this->fwork[3] = 1.4f;
                        this->fwork[1] = 50.0f;
                    } else {
                        this->fwork[1] = gActors[this->aiIndex].fwork[0] + 10.0f;
                        if (this->fwork[1] < 30.0f) {
                            this->fwork[1] = 30.0f;
                        }
                        this->fwork[3] = 1.4f;
                    }
                } else {
                    this->fwork[4] = gBosses[0].obj.pos.x;
                    this->fwork[5] = gBosses[0].obj.pos.y + 400.0f;
                    this->fwork[6] = gBosses[0].obj.pos.z;
                    this->fwork[1] = 40.0f;
                }
                if ((this->aiIndex > -1) && (this->aiIndex != AI360_GREAT_FOX) && (gActors[0].state != STATE360_6)) {
                    if (spE8 < spF8) {
                        if (spEC < spF8) {
                            if (this->aiIndex != AI360_FOX) {
                                this->fwork[1] = gActors[this->aiIndex].fwork[0] - 5.0f;
                            } else {
                                this->fwork[1] = gPlayer[0].baseSpeed - 5.0f;
                                if ((gCurrentLevel == LEVEL_VENOM_2) &&
                                    (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_U_TURN) && (gPlayer[0].unk_4D8 > 100.0f)) {
                                    this->iwork[16] = STATE360_8;
                                }
                            }
                        }
                    } else if (this->timer_0C0 == 0) {
                        this->timer_0C0 = RAND_INT(200.0f) + 200;
                        this->fwork[10] = 20.0f;
                    }
                    if ((spE8 < spF4) && (spEC < spF4)) {
                        this->iwork[4]++;
                        this->iwork[5] = 1;
                        if (!((this->index + gGameFrameCount) & sp10F) && (Rand_ZeroOne() < spF0) &&
                            func_360_80031900(this) &&
                            ((gActors[0].state == STATE360_2) || (gCurrentLevel == LEVEL_TRAINING))) {
                            if ((this->aiIndex == AI360_FOX) && (gCurrentLevel != LEVEL_TRAINING)) {
                                if ((this->iwork[4] > 250) && (gCurrentLevel != LEVEL_VENOM_ANDROSS)) {
                                    if ((Rand_ZeroOne() < 0.5f) || (gCurrentLevel == LEVEL_VENOM_2)) {
                                        this->iwork[4] = 0;
                                        switch (this->aiType) {
                                            case AI360_WOLF:
                                                AllRange_PlayMessage(gMsg_ID_19450, RCID_WOLF);
                                                break;
                                            case AI360_LEON:
                                                AllRange_PlayMessage(gMsg_ID_19451, RCID_LEON);
                                                break;
                                            case AI360_PIGMA:
                                                AllRange_PlayMessage(gMsg_ID_19452, RCID_PIGMA);
                                                break;
                                            case AI360_ANDREW:
                                                AllRange_PlayMessage(gMsg_ID_19453, RCID_ANDREW);
                                                break;
                                        }
                                    } else {
                                        AllRange_PlayMessage(gMsg_ID_2233, RCID_FALCO);
                                    }
                                }
                                this->iwork[0] = 1;
                            } else {
                                this->iwork[0] = 1;
                            }
                        }
                        if ((gRadioState == 0) && (this->timer_0C4 == 0) && (gAllRangeEventTimer > 700) &&
                            (gStarWolfMsgTimer == 0) && (gActors[0].obj.status == OBJ_ACTIVE)) {
                            this->timer_0C4 = 600;
                            if (Rand_ZeroOne() < 0.5f) {
                                gActors[this->aiIndex].iwork[6]++;
                                switch (this->aiIndex) {
                                    case AI360_FALCO:
                                        if ((gCurrentLevel == LEVEL_VENOM_2) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_19462, RCID_FALCO);
                                        } else if ((gActors[this->aiIndex].iwork[6] >= 3) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_20310, RCID_FALCO);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9100, RCID_FALCO);
                                        }
                                        gActors[this->aiIndex].iwork[2] = this->aiType;
                                        if ((gTeamHelpActor == NULL) || (gTeamShields[this->aiIndex] <= 50)) {
                                            gTeamHelpActor = &gActors[this->aiIndex];
                                            gTeamHelpTimer = 320;
                                        }
                                        break;
                                    case AI360_SLIPPY:
                                        if ((gCurrentLevel == LEVEL_VENOM_2) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_19463, RCID_SLIPPY);
                                        } else if ((gActors[this->aiIndex].iwork[6] >= 3) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_20311, RCID_SLIPPY);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9110, RCID_SLIPPY);
                                        }
                                        gActors[this->aiIndex].iwork[2] = this->aiType;
                                        if ((gTeamHelpActor == NULL) || (gTeamShields[this->aiIndex] <= 50)) {
                                            gTeamHelpActor = &gActors[this->aiIndex];
                                            gTeamHelpTimer = 320;
                                        }
                                        break;
                                    case AI360_PEPPY:
                                        if ((gCurrentLevel == LEVEL_VENOM_2) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_19464, RCID_PEPPY);
                                        } else if ((gActors[this->aiIndex].iwork[6] >= 3) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_20312, RCID_PEPPY);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9120, RCID_PEPPY);
                                        }
                                        gActors[this->aiIndex].iwork[2] = this->aiType;
                                        if ((gTeamHelpActor == NULL) || (gTeamShields[this->aiIndex] <= 50)) {
                                            gTeamHelpActor = &gActors[this->aiIndex];
                                            gTeamHelpTimer = 320;
                                        }
                                        break;
                                    case AI360_WOLF:
                                        if (gStarWolfTeamAlive[0] != 0) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9330, RCID_WOLF);
                                        }
                                        break;
                                    case AI360_LEON:
                                        if (gStarWolfTeamAlive[1] != 0) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9340, RCID_LEON);
                                        }
                                        break;
                                    case AI360_PIGMA:
                                        if (gStarWolfTeamAlive[2] != 0) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9350, RCID_PIGMA);
                                        }
                                        break;
                                    case AI360_ANDREW:
                                        if (gStarWolfTeamAlive[3] != 0) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9360, RCID_ANDREW);
                                        }
                                        break;
                                }
                            } else {
                                switch (this->aiType) {
                                    case AI360_FALCO:
                                        if ((gCurrentLevel == LEVEL_FORTUNA) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9211, RCID_FALCO);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9190, RCID_FALCO);
                                        }
                                        gActors[this->aiIndex].iwork[2] = AI360_FALCO;
                                        break;
                                    case AI360_SLIPPY:
                                        if ((gCurrentLevel == LEVEL_FORTUNA) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9212, RCID_SLIPPY);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9200, RCID_SLIPPY);
                                        }
                                        gActors[this->aiIndex].iwork[2] = AI360_SLIPPY;
                                        break;
                                    case AI360_PEPPY:
                                        if ((gCurrentLevel == LEVEL_FORTUNA) && (Rand_ZeroOne() < 0.5f)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9213, RCID_PEPPY);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9210, RCID_PEPPY);
                                        }
                                        gActors[this->aiIndex].iwork[2] = AI360_PEPPY;
                                        break;
                                    case AI360_WOLF:
                                        if (gCurrentLevel != LEVEL_VENOM_2) {
                                            if (this->iwork[6] == 0) {
                                                this->iwork[6] = 1;
                                                ActorAllRange_PlayMessage(gMsg_ID_9289, RCID_WOLF);
                                            } else if (this->iwork[4] > 150) {
                                                if (Rand_ZeroOne() < 0.5f) {
                                                    this->iwork[4] = 0;
                                                    ActorAllRange_PlayMessage(gMsg_ID_9290, RCID_WOLF);
                                                } else {
                                                    ActorAllRange_PlayMessage(gMsg_ID_2233, RCID_FALCO);
                                                }
                                            } else {
                                                ActorAllRange_PlayMessage(gMsg_ID_9322, RCID_WOLF);
                                            }
                                        }
                                        break;
                                    case AI360_LEON:
                                        if (gCurrentLevel == LEVEL_VENOM_2) {
                                            if ((Rand_ZeroOne() < 0.5f) && (this->aiIndex == AI360_FALCO)) {
                                                ActorAllRange_PlayMessage(gMsg_ID_9323, RCID_LEON);
                                            } else {
                                                ActorAllRange_PlayMessage(gMsg_ID_19451, RCID_LEON);
                                            }
                                        } else if ((Rand_ZeroOne() < 0.5f) && (this->aiIndex == AI360_FALCO)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9323, RCID_LEON);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9300, RCID_LEON);
                                        }
                                        break;
                                    case AI360_PIGMA:
                                        if (gCurrentLevel == LEVEL_VENOM_2) {
                                            if ((Rand_ZeroOne() < 0.5f) && (this->aiIndex == AI360_PEPPY)) {
                                                ActorAllRange_PlayMessage(gMsg_ID_9324, RCID_PIGMA);
                                            } else {
                                                ActorAllRange_PlayMessage(gMsg_ID_19452, RCID_PIGMA);
                                            }
                                        } else if ((Rand_ZeroOne() < 0.5f) && (this->aiIndex == AI360_PEPPY)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9324, RCID_PIGMA);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9310, RCID_PIGMA);
                                        }
                                        break;
                                    case AI360_ANDREW:
                                        if (gCurrentLevel == LEVEL_VENOM_2) {
                                            if ((Rand_ZeroOne() < 0.5f) && (this->aiIndex == AI360_SLIPPY)) {
                                                ActorAllRange_PlayMessage(gMsg_ID_9325, RCID_ANDREW);
                                            } else {
                                                ActorAllRange_PlayMessage(gMsg_ID_19453, RCID_ANDREW);
                                            }
                                        } else if ((Rand_ZeroOne() < 0.5f) && (this->aiIndex == AI360_SLIPPY)) {
                                            ActorAllRange_PlayMessage(gMsg_ID_9325, RCID_ANDREW);
                                        } else {
                                            ActorAllRange_PlayMessage(gMsg_ID_9320, RCID_ANDREW);
                                        }
                                        break;
                                }
                            }
                        }
                    } else {
                        this->iwork[4] = 0;
                    }
                    if ((this->aiIndex >= AI360_FALCO) && ((gActors[this->aiIndex].obj.status == OBJ_DYING) ||
                                                           (gActors[this->aiIndex].state == STATE360_6) ||
                                                           (gActors[this->aiIndex].obj.status == OBJ_FREE))) {
                        this->state = STATE360_3;
                        if (gCurrentLevel == LEVEL_BOLSE) {
                            func_360_8002FB4C(this);
                        }
                    }
                }
            }
            break;
        case STATE360_3:
            sp104 = 1;
            if (this->timer_0BC == 0) {
                if ((this->aiType < AI360_10) || (gCurrentLevel == LEVEL_BOLSE)) {
                    if (gCurrentLevel == LEVEL_VENOM_2) {
                        if (this->aiType >= AI360_WOLF) {
                            this->fwork[3] = 1.6f;
                            this->fwork[1] = 55.0f;
                        } else {
                            this->fwork[3] = 1.4f;
                            this->fwork[1] = 50.0f;
                        }
                    } else {
                        this->fwork[3] = 1.2f;
                        this->fwork[1] = 40.0f;
                    }
                } else {
                    this->fwork[3] = 1.0f;
                    this->fwork[1] = 38.0f;
                }
                if ((gCurrentLevel == LEVEL_SECTOR_Z) && (gActors[0].state == STATE360_10)) {
                    this->fwork[10] = 30.0f;
                }
                if ((gLevelType == LEVELTYPE_SPACE) && (gCurrentLevel != LEVEL_BOLSE)) {
                    if ((gCurrentLevel == LEVEL_SECTOR_Z) && (this->aiType == AI360_KATT)) {
                        spE4 = RAND_FLOAT_CENTERED(0.0f);
                        spE0 = RAND_FLOAT_CENTERED(500.0f);
                        spDC = RAND_FLOAT_CENTERED(5000.0f) + 12000.0f;
                    } else {
                        spE4 = RAND_FLOAT_CENTERED(15000.0f);
                        spE0 = RAND_FLOAT_CENTERED(1000.0f);
                        spDC = RAND_FLOAT_CENTERED(15000.0f);
                    }
                } else {
                    spE4 = RAND_FLOAT_CENTERED(10000.0f);
                    if ((gCurrentLevel == LEVEL_BOLSE) || (gCurrentLevel == LEVEL_KATINA) ||
                        (gCurrentLevel == LEVEL_VENOM_2)) {
                        spE0 = RAND_FLOAT(1000.0f);
                    } else {
                        spE0 = 0.0f;
                    }
                    spDC = RAND_FLOAT_CENTERED(10000.0f);
                    if ((gCurrentLevel == LEVEL_KATINA) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_STANDBY)) {
                        spE4 = RAND_FLOAT_CENTERED(5000.0f);
                        spDC = RAND_FLOAT_CENTERED(5000.0f);
                    }
                }
                if ((fabsf(this->obj.pos.x - spE4) > 2000.0f) || (fabsf(this->obj.pos.z - spDC) > 2000.0f)) {
                    this->fwork[4] = spE4;
                    this->fwork[5] = spE0;
                    this->fwork[6] = spDC;
                    this->timer_0BC = RAND_INT(20.0f) + 10;
                }
            }
            if (this->timer_0C0 == 0) {
                this->timer_0C0 = RAND_INT(200.0f) + 200;
                this->fwork[10] = 30.0f;
            }
            if ((this->aiIndex >= AI360_FALCO) && (gActors[this->aiIndex].obj.id == OBJ_ACTOR_ALLRANGE) &&
                (gActors[this->aiIndex].timer_0C2 == 0) && (gActors[this->aiIndex].obj.status == OBJ_ACTIVE)) {
                this->state = STATE360_2;
                this->iwork[2] = AI360_FOX;
            }
            if (this->aiIndex == AI360_FOX) {
                if (this->unk_04E != 0) {
                    this->unk_04E--;
                }
                if (this->unk_04E == 0) {
                    this->state = STATE360_2;
                    this->iwork[2] = AI360_FOX;
                }
            }
            break;
        case STATE360_7:
            this->fwork[1] = 40.0f;
            Math_SmoothStepToF(&this->unk_0F4.x, 360.0f, 0.1f, 5.0f, 0.0001f);
            Math_SmoothStepToAngle(&this->obj.rot.z, 0.0f, 0.1f, 3.0f, 0.01f);
            if (this->unk_0F4.x > 350.0f) {
                this->state = STATE360_3;
            }
            break;
        case STATE360_8:
            this->fwork[1] = 40.0f;
            if ((this->index % 2) != 0) {
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
                        this->timer_0BC = 40;
                        this->unk_046 += 1;
                    }
                    this->obj.pos.y -= 3.0f;
                    break;
                case 1:
                    if (this->timer_0BC == 0) {
                        this->state = STATE360_3;
                    }
                    break;
            }
            break;
        case STATE360_9:
            this->fwork[1] = 40.0f;
            if (Math_SmoothStepToAngle(&this->unk_0F4.y, this->fwork[19], 0.5f, 5.0f, 0.0f) < 0.0f) {
                spD0 = 70.0f;
            } else {
                spD0 = 290.0f;
            }
            Math_SmoothStepToAngle(&this->obj.rot.z, spD0, 0.1f, 15.0f, 0.01f);
            if (this->timer_0BC == 0) {
                this->state = STATE360_3;
            }
            break;
        case STATE360_10:
            sp104 = 1;
            if (this->timer_0BC == 0) {
                this->state = STATE360_3;
            }
            if (this->timer_0BC > 20) {
                Math_SmoothStepToF(&this->fwork[23], 180.0f, 1.0f, 60.0f, 0.0f);
            }
            break;
    }
    if (sp104 != 0) {
        s32 var_v0 = 4 - 1;

        spE4 = this->fwork[4] - this->obj.pos.x;
        spE0 = this->fwork[5] - this->obj.pos.y;
        spDC = this->fwork[6] - this->obj.pos.z;

        if (gCurrentLevel == LEVEL_VENOM_2) {
            var_v0 = 2 - 1;
        }
        if (!((this->index + gGameFrameCount) & var_v0)) {
            this->fwork[19] = Math_RadToDeg(Math_Atan2F(spE4, spDC));
            this->fwork[20] = Math_RadToDeg(Math_Atan2F(spE0, sqrtf(SQ(spE4) + SQ(spDC))));
        }
        spD8 = this->fwork[20];
        spD4 = this->fwork[19];
        sp108 = 0;
        if (sp104 == 1) {
            if (this->aiType < AI360_GREAT_FOX) {
                sp108 = func_360_8003049C(this);
                if ((sp108 != 0) && (this->aiType < AI360_10) && (this->timer_0BE == 0) &&
                    ((this->fwork[7] < 0.01f) || (this->fwork[7] > 359.9f))) {
                    this->timer_0BE = RAND_INT(200.0f) + 200;
                    if (Rand_ZeroOne() < 0.5f) {
                        this->fwork[8] = 0.0f;
                        this->fwork[7] = 360.0f;
                    } else {
                        this->fwork[7] = 0.0f;
                        this->fwork[8] = 359.999f;
                    }
                }
            }
            if (sp108 != 0) {
                if ((this->aiType < AI360_10) || (gCurrentLevel != LEVEL_FORTUNA)) {
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
            } else if ((this->obj.pos.y < (gGroundHeight + 50.0f)) && (spD8 > 180.0f)) {
                spD8 = 0.0f;
                this->unk_0F4.x = 0.0f;
            }
        }
        Math_SmoothStepToAngle(&this->unk_0F4.x, spD8, 0.5f, this->fwork[2], 0.0001f);
        spD0 = Math_SmoothStepToAngle(&this->unk_0F4.y, spD4, 0.5f, this->fwork[2], 0.0001f) * 30.0f;
        if (spD0 < 0.0f) {
            spD0 = spD0 * -1.0f;
        } else {
            spD0 = 360.0f - spD0;
        }
        if ((this->fwork[7] > 0.01f) && (this->fwork[7] < 359.9f)) {
            if ((((gGameFrameCount + 15) % 32) == 0) && (gCurrentLevel != LEVEL_VENOM_2)) {
                this->lockOnTimers[TEAM_ID_FOX] = 0;
            }
        } else {
            Math_SmoothStepToAngle(&this->obj.rot.z, spD0, 0.1f, 3.0f, 0.01f);
            this->iwork[19] = 0;
        }
    }
    if (this->iwork[19] != 0) {
        Math_SmoothStepToF(&this->fwork[7], this->fwork[8], 1.0f, 60.0f, 0.01f);
    } else {
        Math_SmoothStepToF(&this->fwork[7], this->fwork[8], 0.2f, 30.0f, 0.01f);
    }
    if ((this->fwork[7] > 0.01f) && (this->fwork[7] < 359.9f)) {
        Math_SmoothStepToAngle(&this->obj.rot.z, this->fwork[7], 0.2f, 100.0f, 0.01f);
        if ((this->aiType == AI360_KATT) && ((gGameFrameCount % 2) == 0)) {
            if ((this->fwork[7] > 10.0f) && (this->fwork[7] < 350.0f)) {
                Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);
                Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, MTXF_APPLY);
                Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_APPLY);
                spA8.x = 0.0f;
                spA8.y = 70.0f;
                spA8.z = -70.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);
                func_effect_80078E50(this->obj.pos.x + sp9C.x, this->obj.pos.y + sp9C.y, this->obj.pos.z + sp9C.z,
                                     3.1f);
            }
        }
    }
    this->obj.rot.x = -this->unk_0F4.x;
    this->obj.rot.y = this->unk_0F4.y;
    Math_SmoothStepToF(&this->fwork[0], this->fwork[1], 0.2f, 1.0f, 0.1f);
    Math_SmoothStepToF(&this->fwork[2], this->fwork[3], 1.0f, 0.1f, 0.1f);
    spC0 = SIN_DEG(this->obj.rot.x);
    spB8 = COS_DEG(this->obj.rot.x);
    spBC = SIN_DEG(this->obj.rot.y);
    spB4 = COS_DEG(this->obj.rot.y);

    sp9C.z = (this->fwork[0] + this->fwork[9]) * spB8;
    sp9C.y = (this->fwork[0] + this->fwork[9]) * -spC0;
    sp9C.x = spBC * sp9C.z;
    sp9C.z = spB4 * sp9C.z;

    this->vel.x = this->fwork[13] + sp9C.x;
    this->vel.y = this->fwork[14] + sp9C.y;
    this->vel.z = this->fwork[12] + sp9C.z;
    this->fwork[13] -= (this->fwork[13] * 0.1f);
    this->fwork[14] -= (this->fwork[14] * 0.1f);
    this->fwork[12] -= (this->fwork[12] * 0.1f);
    if ((this->obj.pos.y < gGroundHeight + 40.0f) && (this->vel.y < 0.0f)) {
        this->obj.pos.y = gGroundHeight + 40.0f;
        this->vel.y = 0.0f;
    }
    if (this->iwork[0] != 0) {
        this->iwork[0] = 0;

        sp90.z = spB8 * 200.0f * 0.5f;
        sp90.y = -spC0 * 200.0f * 0.5f;
        sp90.x = spBC * sp90.z;
        sp90.z = spB4 * sp90.z;

        if ((gCurrentLevel == LEVEL_VENOM_2) && (this->aiType >= AI360_WOLF)) {
            Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, MTXF_APPLY);
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_APPLY);
            spA8.y = 0.0f;
            spA8.z = 0.0f;
            if (Rand_ZeroOne() < 0.8f) {
                spA8.x = 60.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);
                func_enmy2_8006EEFC(this->aiType, this->obj.pos.x + sp9C.x + (sp90.x * 1.5f),
                                    this->obj.pos.y + sp9C.y + (sp90.y * 1.5f),
                                    this->obj.pos.z + sp9C.z + (sp90.z * 1.5f), sp90.x, sp90.y, sp90.z, this->obj.rot.x,
                                    this->obj.rot.y, this->obj.rot.z);
            }
            if (Rand_ZeroOne() < 0.8f) {
                spA8.x = -60.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);
                func_enmy2_8006EEFC(this->aiType, this->obj.pos.x + sp9C.x + (sp90.x * 1.5f),
                                    this->obj.pos.y + sp9C.y + (sp90.y * 1.5f),
                                    this->obj.pos.z + sp9C.z + (sp90.z * 1.5f), sp90.x, sp90.y, sp90.z, this->obj.rot.x,
                                    this->obj.rot.y, this->obj.rot.z);
            }
        } else {
            func_enmy2_8006EEFC(this->aiType, this->obj.pos.x + (sp90.x * 1.5f), this->obj.pos.y + (sp90.y * 1.5f),
                                this->obj.pos.z + (sp90.z * 1.5f), sp90.x, sp90.y, sp90.z, this->obj.rot.x,
                                this->obj.rot.y, this->obj.rot.z);
        }
    }
    ActorAllRange_ApplyDamage(this);
    radarMark = &gRadarMarks[this->index];
    radarMark->status = 1;
    if (this->aiType == AI360_MISSILE) {
        radarMark->type = 100;
    } else {
        radarMark->type = this->aiType;
    }
    if (gCurrentLevel == LEVEL_TRAINING) {
        radarMark->type = 4;
    }
    radarMark->pos.x = this->obj.pos.x;
    radarMark->pos.y = this->obj.pos.y;
    radarMark->pos.z = this->obj.pos.z;
    radarMark->unk_10 = this->unk_0F4.y + 180.0f;
    if (this->iwork[1] != 0) {
        this->iwork[1]--;
        if ((this->iwork[1] == 0) && (gActors[0].state == STATE360_2) && (gRadioState == 0)) {
            switch (this->aiType) {
                case AI360_FALCO:
                    ActorAllRange_PlayMessage(gMsg_ID_9220, RCID_FALCO);
                    break;
                case AI360_SLIPPY:
                    ActorAllRange_PlayMessage(gMsg_ID_9230, RCID_SLIPPY);
                    break;
                case AI360_PEPPY:
                    if ((Rand_ZeroOne() < 0.1f) && (gCurrentLevel == LEVEL_KATINA)) {
                        ActorAllRange_PlayMessage(gMsg_ID_18150, RCID_PEPPY);
                    } else {
                        ActorAllRange_PlayMessage(gMsg_ID_9240, RCID_PEPPY);
                    }
                    break;
            }
        }
    }
    if ((gCurrentLevel != LEVEL_KATINA) && (gCurrentLevel != LEVEL_VENOM_ANDROSS) && (this->timer_0C2 == 0)) {
        if (((this->aiType >= AI360_10) && (this->aiType < AI360_GREAT_FOX)) ||
            ((this->aiType >= AI360_WOLF) && (this->aiType < AI360_10) && (this->timer_0C6 != 0))) {
            s32 var_a3 = 0;

            if (((gCurrentLevel == LEVEL_BOLSE) || (gCurrentLevel == LEVEL_SECTOR_Z)) && (this->timer_0C6 == 0)) {
                var_a3 = 3;
            }
            sp90.x = this->vel.x;
            sp90.y = this->vel.y;
            sp90.z = this->vel.z;
            temp_v0_27 = Object_CheckCollision(this->index, &this->obj.pos, &sp90, var_a3);
            if (temp_v0_27 != 0) {
                this->obj.pos.x -= this->vel.x;
                this->obj.pos.y -= this->vel.y;
                this->obj.pos.z -= this->vel.z;
                if ((temp_v0_27 >= 2) && (this->aiType > AI360_10)) {
                    this->timer_0BE = 2;
                    this->obj.status = OBJ_DYING;
                    this->itemDrop = DROP_NONE;
                    func_effect_8007BFFC(this->obj.pos.x, this->obj.pos.y, this->obj.pos.z, 0.0f, 0.0f, 0.0f, 5.0f, 15);
                    func_effect_8007A6F0(&this->obj.pos, 0x2903A008);
                } else {
                    this->unk_0D0 = 1;
                    this->damage = 10;
                    this->health = 0;
                    ActorAllRange_ApplyDamage(this);
                }
            }
        }
    }
    if (gCurrentLevel == LEVEL_FORTUNA) {
        func_360_8002EE64(this);
    } else if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
        this->unk_04A++;
        if (this->unk_04A >= Animation_GetFrameCount(&D_VE2_600C200)) {
            this->unk_04A = 0;
        }
    }
    Math_SmoothStepToF(&this->fwork[22], 0.0f, 0.8f, 0.05f, 1e-7f);
    Math_SmoothStepToF(&this->fwork[23], 0.0f, 1.0f, 30.0f, 0.01f);
    if (this->iwork[8] != 0) {
        this->iwork[8]--;
    }
}

void ActorAllRange_DrawShield(Actor* this) {
    f32 sp24;
    s32 sp20;

    if (this->fwork[22] > 0) {
        Matrix_Push(&gGfxMatrix);
        sp24 = 3.5f;
        sp20 = (s32) (this->fwork[22] * 60.0f);
        if (gCurrentLevel == LEVEL_VENOM_2) {
            sp24 *= 1.5f;
        }
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, MTXF_APPLY);
        Matrix_Scale(gGfxMatrix, sp24, sp24 * 0.5f, sp24, MTXF_APPLY);
        Matrix_RotateY(gGfxMatrix, gGameFrameCount * 3.0f * M_DTOR, MTXF_APPLY);
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

void ActorAllRange_DrawBarrelRoll(Actor* this) {
    s32 alpha;

    if (this->fwork[23] > 1.0f) {
        Matrix_Push(&gGfxMatrix);
        alpha = this->fwork[23];
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, MTXF_APPLY);
        Matrix_RotateZ(gGfxMatrix, -this->obj.rot.z * M_DTOR, MTXF_APPLY);
        Matrix_RotateX(gGfxMatrix, -this->obj.rot.x * M_DTOR, MTXF_APPLY);
        Matrix_RotateY(gGfxMatrix, M_DTOR * -this->obj.rot.y - gPlayer[0].camYaw, MTXF_APPLY);
        Matrix_RotateX(gGfxMatrix, gPlayer[0].camPitch, MTXF_APPLY);
        Matrix_RotateZ(gGfxMatrix, gGameFrameCount * 20.0f * this->iwork[15] * M_DTOR, MTXF_APPLY);
        if (this->iwork[15] < 0) {
            Matrix_RotateX(gGfxMatrix, M_PI, MTXF_APPLY);
        }
        Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, MTXF_APPLY);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x43);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, alpha);
        gDPSetEnvColor(gMasterDisp++, 0, 0, 160, alpha);
        gSPDisplayList(gMasterDisp++, D_101DC10);
        Matrix_Pop(&gGfxMatrix);
    }
}

bool ActorAllRange_MissileOverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Actor* this = thisx;

    if ((this->timer_0C6 % 2) != 0) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 128, 128, 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x1D);
    }
    if ((limbIndex == 1) || (limbIndex == 3)) {
        rot->z += gGameFrameCount * 3.0f;
    }
    if ((limbIndex == 1) || (limbIndex == 2)) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, (s32) gSzMissileR, (s32) gSzMissileG, (s32) gSzMissileB, 255);
    }
    return false;
}

void ActorAllRange_Draw(ActorAllRange* this) {
    f32 sp38;
    s32 pad[3];
    Vec3f sp1E4 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp7C[30];
    f32 pad2;

    if (this->aiType != AI360_EVENT_HANDLER) {
        if ((this->iwork[8] != 0) && (this->aiType < AI360_GREAT_FOX)) {
            pad2 = SIN_DEG(this->iwork[8] * 400.0f);
            sp38 = this->iwork[8] * pad2;
            Matrix_RotateY(gGfxMatrix, M_DTOR * sp38, MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix, M_DTOR * sp38, MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix, M_DTOR * sp38, MTXF_APPLY);
            Matrix_SetGfxMtx(&gMasterDisp);
        }
        if ((this->timer_0C6 % 2) == 0) {
            RCP_SetupDL(&gMasterDisp, 0x1D);
            gSPFogPosition(gMasterDisp++, gFogNear, 1005);
        }
        switch (this->aiType) {
            case AI360_FOX:
            case AI360_FALCO:
            case AI360_SLIPPY:
            case AI360_PEPPY:
                Matrix_Push(&gGfxMatrix);
                func_edisplay_8005B388(this);
                Matrix_Pop(&gGfxMatrix);
                ActorAllRange_DrawBarrelRoll(this);
                break;
            case AI360_WOLF:
            case AI360_LEON:
            case AI360_PIGMA:
            case AI360_ANDREW:
                if (gCurrentLevel == LEVEL_VENOM_2) {
                    gSPDisplayList(gMasterDisp++, D_STAR_WOLF_F0103D0);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, 30.0f, 0.0f, -60.0f, MTXF_APPLY);
                    Actor_DrawEngineGlow(this, 2);
                    Matrix_Pop(&gGfxMatrix);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, -30.0f, 0.0f, -60.0f, MTXF_APPLY);
                    Actor_DrawEngineGlow(this, 2);
                    Matrix_Pop(&gGfxMatrix);
                    ActorAllRange_DrawBarrelRoll(this);
                    ActorAllRange_DrawShield(this);
                } else {
                    gSPDisplayList(gMasterDisp++, D_STAR_WOLF_F00F200);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);
                    if (gCurrentLevel == LEVEL_BOLSE) {
                        Actor_DrawEngineGlow(this, 3);
                    } else {
                        Actor_DrawEngineGlow(this, 2);
                    }
                }
                break;
            case AI360_KATT:
                gSPDisplayList(gMasterDisp++, D_D009A40);
                Actor_DrawEngineAndContrails(this);
                break;
            case AI360_BILL:
                gSPDisplayList(gMasterDisp++, D_D00B880);
                Actor_DrawEngineAndContrails(this);
                break;
            case AI360_GREAT_FOX:
                Display_SetSecondLight(&this->obj.pos);
                this->unk_0B6 = 1;
                Actor195_Draw(this);
                break;
            case AI360_MISSILE:
                Animation_GetFrameData(&D_SZ_6006D64, 0, sp7C);
                Animation_DrawSkeleton(3, D_SZ_6006E50, sp7C, ActorAllRange_MissileOverrideLimbDraw, NULL, this,
                                       gCalcMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -400.0f, MTXF_APPLY);
                Matrix_Scale(gGfxMatrix, this->fwork[29], this->fwork[29], this->fwork[29], MTXF_APPLY);
                Actor_DrawEngineGlow(this, 3);
                break;
            default:
                if (gCurrentLevel == LEVEL_FORTUNA) {
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 60.0f, MTXF_APPLY);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_FO_6006BE0);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -100.0f, MTXF_APPLY);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, MTXF_APPLY);
                    Actor_DrawEngineGlow(this, 2);
                } else if (gCurrentLevel == LEVEL_KATINA) {
                    switch (this->unk_0B6) {
                        case 0:
                            gSPDisplayList(gMasterDisp++, D_KA_600EFF0);
                            break;
                        case 1:
                            gSPDisplayList(gMasterDisp++, D_KA_600E050);
                            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);
                            Actor_DrawEngineGlow(this, 0);
                            break;
                        case 3:
                            gSPDisplayList(gMasterDisp++, D_KA_6001530);
                            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 30.0f, MTXF_APPLY);
                            ActorAllRange_DrawShield(this);
                            break;
                    }
                } else if (gCurrentLevel == LEVEL_SECTOR_Z) {
                    gSPDisplayList(gMasterDisp++, D_SZ_6004FE0);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);
                    Actor_DrawEngineGlow(this, 2);
                } else if (gCurrentLevel == LEVEL_BOLSE) {
                    gSPDisplayList(gMasterDisp++, D_BO_6008770);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);
                    Actor_DrawEngineGlow(this, 2);
                    Matrix_Pop(&gGfxMatrix);
                    ActorAllRange_DrawShield(this);
                } else if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
                    Animation_GetFrameData(&D_VE2_600C200, this->unk_04A, this->vwork);
                    Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 10.0f, MTXF_APPLY);
                    Animation_DrawSkeleton(0, D_VE2_600C2AC, this->vwork, NULL, NULL, this, &gIdentityMatrix);
                } else if (gCurrentLevel == LEVEL_VERSUS) {
                    gSPDisplayList(gMasterDisp++, D_versus_3015740);
                } else if (gCurrentLevel == LEVEL_TRAINING) {
                    if (this->aiIndex == AI360_FOX) {
                        gSPDisplayList(gMasterDisp++, D_STAR_WOLF_F00F200);
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);
                        Actor_DrawEngineGlow(this, 3);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_ENMY_PLANET_40068F0);
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);
                        Actor_DrawEngineGlow(this, 2);
                    }
                }
                break;
        }
    }
}

/*
 * File: fox_co.c
 * System: Corneria
 * Description: Level: Corneria
 */

#include "global.h"
#include "assets/ast_arwing.h"
#include "assets/ast_corneria.h"

typedef enum CoBosses {
    /* 0 */ CARRIER,
    /* 1 */ CARRIER_1,
    /* 2 */ CARRIER_2,
    /* 3 */ CARRIER_3
} CoBosses;

typedef enum GrangaSwork {
    /* 01 */ GRANGA_SWK_1 = 1,
    /* 02 */ GRANGA_SWK_2,
    /* 03 */ GRANGA_SWK_3,
    /* 04 */ GRANGA_SWK_4,
    /* 05 */ GRANGA_SWK_5,
    /* 06 */ GRANGA_SWK_6,
    /* 07 */ GRANGA_SWK_7,
    /* 08 */ GRANGA_SWK_8,
    /* 09 */ GRANGA_SWK_9,
    /* 10 */ GRANGA_SWK_10,
    /* 18 */ GRANGA_SWK_18 = 18,
    /* 19 */ GRANGA_SWK_19,
    /* 20 */ GRANGA_SWK_20,
    /* 21 */ GRANGA_SWK_21,
    /* 22 */ GRANGA_SWK_22,
    /* 23 */ GRANGA_SWK_23,
    /* 24 */ GRANGA_SWK_24,
    /* 25 */ GRANGA_SWK_25,
    /* 26 */ GRANGA_SWK_26,
    /* 27 */ GRANGA_SWK_27,
    /* 28 */ GRANGA_SWK_28,
    /* 29 */ GRANGA_HEALTH,
    /* 30 */ GRANGA_SWK_30,
    /* 31 */ GRANGA_SWK_31,
    /* 32 */ GRANGA_SWK_32,
    /* 33 */ GRANGA_SWK_33,
    /* 35 */ GRANGA_SWK_35 = 35,
    /* 36 */ GRANGA_SWK_36
} GrangaSwork;

u8 D_i1_8019B6D0;
f32 D_i1_8019B6D8[68];

void Corneria_BuildingOnFire_Update(CoBuildingOnFire* this) {
}

void Corneria_BuildingOnFire_Draw(CoBuildingOnFire* this) {
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    gSPDisplayList(gMasterDisp++, D_CO_60199D0);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
}

void Corneria_Smoke_Update(CoSmoke* this) {
    f32 x;
    f32 y;
    f32 z;

    if ((gGameFrameCount % 4) == 0) {
        x = RAND_FLOAT_CENTERED(10.0f);
        y = RAND_FLOAT_CENTERED(10.0f);
        z = RAND_FLOAT(0.5f) + 1.0f;
        func_effect_8007C85C(this->obj.pos.x + x, this->obj.pos.y + y, this->obj.pos.z, 4.0f * z);
    }
}

void Corneria_80187670(Actor* this, f32 xPos, f32 yPos, f32 zPos, f32 arg4, f32 xRot, f32 yRot, s32 arg7, s32 arg8,
                       ObjectId objId) {
    Actor_Initialize(this);
    this->obj.status = OBJ_INIT;
    this->obj.id = objId;
    this->obj.pos.x = xPos;
    this->obj.pos.y = yPos;
    this->obj.pos.z = zPos;
    this->obj.rot.x = xRot;
    this->obj.rot.y = yRot;
    this->timer_0BC = arg7;
    this->timer_0BE = 20;
    this->eventType = arg8;
    this->fwork[5] = arg4;
    Object_SetInfo(&this->info, this->obj.id);
}

void Corneria_80187710(f32 xPos, f32 yPos, f32 zPos, f32 arg3, f32 xRot, f32 yRot, s32 arg6, s32 arg7, ObjectId objId) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == OBJ_FREE) {
            Corneria_80187670(&gActors[i], xPos, yPos, zPos, arg3, xRot, yRot, arg6, arg7, objId);
            break;
        }
    }
}

void Corneria_801877A0(Granga* this, f32 x, f32 y, f32 z) {
    Vec3f src;
    Vec3f dest;

    src.x = x;
    src.y = y;
    src.z = z;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    func_effect_8007F11C(OBJ_EFFECT_353, this->obj.pos.x + dest.x, this->obj.pos.y + dest.y, this->obj.pos.z + dest.z,
                         100.0f);
}

void Corneria_GrangaSpawnItem(s32 arg0, f32 x, f32 y, f32 z, ObjectId itemId) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gItems); i++) {
        if (gItems[i].obj.status == OBJ_FREE) {
            Item_Initialize(&gItems[i]);
            gItems[i].obj.status = OBJ_INIT;
            gItems[i].obj.id = itemId;
            gItems[i].timer_4A = 8;
            gItems[i].obj.pos.x = x;
            gItems[i].obj.pos.y = y;
            gItems[i].obj.pos.z = z;
            Object_SetInfo(&gItems[i].info, gItems[i].obj.id);
            return;
        }
    }
}

void Corneria_Granga_Init(Granga* this) {
    s32 i;

    gBossFrameCount = 0;

    if (gLevelMode == LEVELMODE_ON_RAILS) {
        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) {
            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_START_360;
            gPlayer[0].csState = 0;
            SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 50);
            SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 50);
        }
        Object_Kill(&this->obj, this->sfxSource);
        return;
    }

    for (i = 0; i < ARRAY_COUNT(D_i1_8019B6D8); i++) {
        D_i1_8019B6D8[i] = 0.0f;
    }
}

void Corneria_8018798C(Granga* this, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_effect_8007BFFC(arg1, arg2, arg3, 0.0f, 0.0f, 0.0f, arg4, 30);
    Effect_SpawnTimedSfxAtPos(&this->obj.pos, NA_SE_OB_DAMAGE_M);
}

void Corneria_801879F0(Granga* this, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_effect_8007D1E0(arg1, arg2, arg3, arg4);
    Effect_SpawnTimedSfxAtPos(&this->obj.pos, NA_SE_OB_DAMAGE_M);
}

void Corneria_80187A38(Granga* this, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    func_effect_8007C120(arg1, arg2, arg3, this->vel.x, this->vel.y, this->vel.z, arg4, arg5);
}

f32 Corneria_80187A88(s32 arg0) {
    f32 ret = arg0 * 0.5f;

    if (ret > 8.0f) {
        ret = 8.0f;
    }
    return ret;
}

void Corneria_Granga_HandleDamage(Granga* this) {
    CoTree* tree;
    s32 item;
    s32 i;

    if (this->dmgType != DMG_NONE) {
        this->dmgType = DMG_NONE;

        if (this->dmgPart == 0) {
            this->swork[GRANGA_SWK_10] = 15;
            this->swork[GRANGA_HEALTH] -= this->damage;

            Corneria_80187A38(this, D_i1_8019B6D8[62], D_i1_8019B6D8[63], D_i1_8019B6D8[64], 0.2f, 20);

            if (this->swork[GRANGA_HEALTH] < 30) {
                Effect_SpawnTimedSfxAtPos(&this->obj.pos, NA_SE_EN_KNOCK_DOWN);
            } else {
                Effect_SpawnTimedSfxAtPos(&this->obj.pos, NA_SE_OB_DAMAGE_M);
            }

            Radio_PlayMessage(gMsg_ID_2270, RCID_BOSS_CORNERIA);

            if (this->swork[GRANGA_HEALTH] <= 0) {
                this->swork[GRANGA_SWK_10] = 1000;
                this->info.hitbox[1 + 0] = 100000.0f;

                Corneria_8018798C(this, D_i1_8019B6D8[62], D_i1_8019B6D8[63], D_i1_8019B6D8[64], 10.0f);

                AUDIO_PLAY_SFX(NA_SE_EN_DOWN_IMPACT, this->sfxSource, 4);

                gScreenFlashTimer = 8;

                if (fabsf(this->obj.rot.x) < 20.0f) {
                    this->swork[GRANGA_SWK_32] = 1;
                }

                this->state = 7;
                this->timer_050 = 100;

                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 80);
                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 80);

                gCsFrameCount = 0;

                if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) ||
                    (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_U_TURN)) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_LEVEL_COMPLETE;
                    gPlayer[0].csState = gPlayer[0].csTimer = 0;
                    gPlayer[0].rot.y += gPlayer[0].yRot_114;

                    if (gPlayer[0].rot.y > 360.0f) {
                        gPlayer[0].rot.y -= 360.0f;
                    }
                    if (gPlayer[0].rot.y < 0.0f) {
                        gPlayer[0].rot.y += 360.0f;
                    }
                    gPlayer[0].yRot_114 = 0.0f;
                }

                Radio_PlayMessage(gMsg_ID_2280, RCID_BOSS_CORNERIA);

                Boss_AwardBonus(this);

                gBossFrameCount = 100000;
                return;
            }
        } else if (this->dmgPart == 3) {
            this->swork[GRANGA_SWK_3] = 15;
            this->swork[GRANGA_SWK_20] = 30;
            this->swork[GRANGA_SWK_28] -= this->damage;

            Corneria_801879F0(this, D_i1_8019B6D8[12] + RAND_FLOAT_CENTERED(60.0f), D_i1_8019B6D8[13],
                              D_i1_8019B6D8[14] + RAND_FLOAT_CENTERED(60.0f), 2.0f);
            Corneria_80187A38(this, D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 0.1f, 20);

            if (this->swork[GRANGA_SWK_28] <= 0) {
                this->swork[GRANGA_SWK_3] = 1000;
                this->info.hitbox[1 + 18] = 100000.0f;
                Corneria_8018798C(this, D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 10.0f);
            }
        }

        if (this->dmgPart == 1) {
            this->swork[GRANGA_SWK_2] = 15;
            this->swork[GRANGA_SWK_21] = 30;
            this->swork[GRANGA_SWK_26] -= this->damage;

            Corneria_801879F0(this, D_i1_8019B6D8[6] + RAND_FLOAT_CENTERED(60.0f), D_i1_8019B6D8[7],
                              D_i1_8019B6D8[8] + RAND_FLOAT_CENTERED(60.0f), 2.0f);
            Corneria_80187A38(this, D_i1_8019B6D8[6], D_i1_8019B6D8[7], D_i1_8019B6D8[8], 0.1f, 20);

            if (this->swork[GRANGA_SWK_26] <= 0) {
                this->swork[GRANGA_SWK_2] = 1000;
                this->info.hitbox[1 + 6] = 100000.0f;
                Corneria_8018798C(this, D_i1_8019B6D8[6], D_i1_8019B6D8[7], D_i1_8019B6D8[8], 7.0f);
            }
        } else if (this->dmgPart == 2) {
            this->swork[GRANGA_SWK_1] = 15;
            this->swork[GRANGA_SWK_22] = 30;
            this->swork[GRANGA_SWK_27] -= this->damage;

            Corneria_801879F0(this, D_i1_8019B6D8[0] + RAND_FLOAT_CENTERED(60.0f), D_i1_8019B6D8[1],
                              D_i1_8019B6D8[2] + RAND_FLOAT_CENTERED(60.0f), 2.0f);
            Corneria_80187A38(this, D_i1_8019B6D8[0], D_i1_8019B6D8[1], D_i1_8019B6D8[2], 0.1f, 20);

            if (this->swork[GRANGA_SWK_27] <= 0) {
                this->swork[GRANGA_SWK_1] = 1000;
                this->info.hitbox[1 + 12] = 100000.0f;
                Corneria_8018798C(this, D_i1_8019B6D8[0], D_i1_8019B6D8[1], D_i1_8019B6D8[2], 7.0f);
            }
        } else if ((this->dmgPart == 4) || (this->dmgPart == 5)) {
            AUDIO_PLAY_SFX(NA_SE_EN_DAMAGE_S, this->sfxSource, 4);
            this->swork[GRANGA_SWK_23] = 200;

            if (this->dmgPart == 4) {
                this->swork[GRANGA_SWK_24] -= this->damage;
                this->swork[GRANGA_SWK_7] = this->swork[GRANGA_SWK_8] = this->swork[GRANGA_SWK_9] = 5;
                this->swork[GRANGA_SWK_18] = 30;

                if (this->swork[GRANGA_SWK_24] <= 0) {
                    this->swork[GRANGA_SWK_7] = this->swork[GRANGA_SWK_8] = this->swork[GRANGA_SWK_9] = 1000;
                    this->info.hitbox[1 + 24] = 100000.0f;

                    for (i = 3; i < 6; i++) {
                        Boss_SpawnDebris(D_i1_8019B6D8[18 + i + 2], D_i1_8019B6D8[24 + i + 2],
                                         D_i1_8019B6D8[30 + i + 2], D_i1_8019B6D8[36 + i + 2],
                                         D_i1_8019B6D8[42 + i + 2], D_i1_8019B6D8[48 + i + 2], 0.0f, RAND_FLOAT(20.0f),
                                         0.0f, 5.5f, i + 28, RAND_INT(30.0f) + 60.0f);
                    }

                    if (this->state < 5) {
                        this->state = 5;
                        this->timer_050 = 60;
                    }
                }
            } else {
                this->swork[GRANGA_SWK_25] -= this->damage;
                this->swork[GRANGA_SWK_4] = this->swork[GRANGA_SWK_5] = this->swork[GRANGA_SWK_6] = 5;
                this->swork[GRANGA_SWK_19] = 30;

                if (this->swork[GRANGA_SWK_25] <= 0) {
                    this->swork[GRANGA_SWK_4] = this->swork[GRANGA_SWK_5] = this->swork[GRANGA_SWK_6] = 1000;
                    this->info.hitbox[1 + 30] = 100000.0f;

                    for (i = 0; i < 3; i++) {
                        Boss_SpawnDebris(D_i1_8019B6D8[18 + i + 2], D_i1_8019B6D8[24 + i + 2],
                                         D_i1_8019B6D8[30 + i + 2], D_i1_8019B6D8[36 + i + 2],
                                         D_i1_8019B6D8[42 + i + 2], D_i1_8019B6D8[48 + i + 2], 0.0f, RAND_FLOAT(20.0f),
                                         0.0f, 5.5f, i + 28, RAND_INT(30.0f) + 60.0f);
                    }

                    if (this->state < 5) {
                        this->state = 6;
                        this->timer_050 = 60;
                    }
                }
            }

            if (this->timer_050 < 50) {
                this->timer_050 += 10;
            }

            if ((this->state != 0) && (this->state < 5)) {
                this->fwork[14] = 0.0f;

                if (Rand_ZeroOne() < 0.5f) {
                    item = OBJ_ITEM_SILVER_RING;
                } else {
                    item = OBJ_ITEM_BOMB;
                }
                Corneria_GrangaSpawnItem(this, this->obj.pos.x, this->obj.pos.y + 100.0f, this->obj.pos.z, item);
            }

            if (this->state < 5) {
                this->state = 0;

                switch (RAND_INT(5.0f)) {
                    case 0:
                        this->swork[GRANGA_SWK_31] = 2;
                        break;
                    case 1:
                        this->swork[GRANGA_SWK_31] = 3;
                        break;
                    case 2:
                    case 3:
                    case 4:
                        this->swork[GRANGA_SWK_31] = 4;
                        break;
                }
            }
        } else {
            Effect_SpawnTimedSfxAtPos(&this->obj.pos, NA_SE_EN_REFLECT);
        }
    }

    if (!(D_edisplay_801615D0.y < 0.0f)) {
        for (tree = &gSprites[0], i = 0; i < ARRAY_COUNT(gSprites); i++, tree++) {
            if ((tree->obj.status == OBJ_ACTIVE) && (tree->obj.id == OBJ_SPRITE_CO_TREE)) {
                if ((fabsf(tree->obj.pos.x - D_i1_8019B6D8[20]) < 90.0f) &&
                    (fabsf(tree->obj.pos.z - D_i1_8019B6D8[32]) < 90.0f)) {
                    tree->destroy = 1;
                    break;
                } else if ((fabsf(tree->obj.pos.x - D_i1_8019B6D8[23]) < 90.0f) &&
                           (fabsf(tree->obj.pos.z - D_i1_8019B6D8[35]) < 90.0f)) {
                    tree->destroy = 1;
                    break;
                }
            }
        }

        if ((this->swork[GRANGA_SWK_1] == 1000) && ((gGameFrameCount % 4) == 0)) {
            func_effect_8007BFFC(D_i1_8019B6D8[3], D_i1_8019B6D8[4], D_i1_8019B6D8[5],
                                 (D_i1_8019B6D8[3] - this->obj.pos.x) * 0.1f, 0.0f,
                                 (D_i1_8019B6D8[5] - this->obj.pos.z) * 0.1f, 1.5f, 5);
        }
        if ((this->swork[GRANGA_SWK_2] == 1000) && ((gGameFrameCount % 4) == 0)) {
            func_effect_8007BFFC(D_i1_8019B6D8[9], D_i1_8019B6D8[10], D_i1_8019B6D8[11],
                                 (D_i1_8019B6D8[9] - this->obj.pos.x) * 0.1f, 0.0f,
                                 (D_i1_8019B6D8[11] - this->obj.pos.z) * 0.1f, 1.5f, 5);
        }
        if ((this->swork[GRANGA_SWK_3] == 1000) && ((gGameFrameCount % 4) == 0)) {
            func_effect_8007BFFC(D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 0.0f, 20.0f, 0.0f, 2.0f, 5);
        }
        if ((this->swork[GRANGA_SWK_4] == 1000) && ((gGameFrameCount % 4) == 0)) {
            func_effect_8007BFFC(D_i1_8019B6D8[56], D_i1_8019B6D8[57], D_i1_8019B6D8[58], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
        if ((this->swork[GRANGA_SWK_7] == 1000) && ((gGameFrameCount % 4) == 0)) {
            func_effect_8007BFFC(D_i1_8019B6D8[59], D_i1_8019B6D8[60], D_i1_8019B6D8[61], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
    }
}

ObjectId Corneria_80188750(Granga* this) {
    this->swork[GRANGA_SWK_35]++;
    if (this->swork[GRANGA_SWK_35] >= 5) {
        this->swork[GRANGA_SWK_35] = 0;
        return OBJ_ACTOR_191;
    } else if (func_hud_8008AC54(0) < 4) {
        return OBJ_ACTOR_190;
    } else {
        return 0;
    }
}

void Corneria_801887AC(Granga* this) {
    Vec3f savedPlayerPos;
    ObjectId objId;

    if ((gBossFrameCount < 500)) {
        return;
    }

    switch (this->swork[GRANGA_SWK_30]) {
        case 0:
            break;

        case 1:
            objId = Corneria_80188750(this);
            if (objId != 0) {
                if (this->swork[GRANGA_SWK_1] != 1000) {
                    Corneria_80187710(D_i1_8019B6D8[0], D_i1_8019B6D8[1], D_i1_8019B6D8[2], 65.0f, 0.0f,
                                      D_i1_8019B6D8[16] + this->obj.rot.y, 0, 0, objId);
                }
                if (this->swork[GRANGA_SWK_2] != 1000) {
                    Corneria_80187710(D_i1_8019B6D8[6], D_i1_8019B6D8[7], D_i1_8019B6D8[8], 65.0f, 0.0f,
                                      D_i1_8019B6D8[16] + this->obj.rot.y, 0, 0, objId);
                }
            }
            this->swork[GRANGA_SWK_30] = 0;
            break;

        case 2:
            Corneria_801877A0(this, 40.0f, 228.0f, 212.0f);
            Corneria_801877A0(this, -40.0f, 228.0f, 212.0f);
            this->swork[GRANGA_SWK_30] = 0;
            break;

        case 3:
            if (this->swork[GRANGA_SWK_3] != 1000) {
                savedPlayerPos.x = gPlayer[0].pos.x;
                savedPlayerPos.y = gPlayer[0].pos.y;
                savedPlayerPos.z = gPlayer[0].trueZpos;

                gPlayer[0].pos.x += RAND_FLOAT_CENTERED(300.0f);
                gPlayer[0].pos.y += RAND_FLOAT_CENTERED(300.0f);
                gPlayer[0].trueZpos += RAND_FLOAT_CENTERED(300.0f);

                func_effect_8007F11C(OBJ_EFFECT_376, D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 60.0f);

                gPlayer[0].pos.x = savedPlayerPos.x;
                gPlayer[0].pos.y = savedPlayerPos.y;
                gPlayer[0].trueZpos = savedPlayerPos.z;
            }
            this->swork[GRANGA_SWK_30] = 0;
            break;
    }
}

void Corneria_80188A18(Granga* this) {
    if (this->timer_050 == 0) {
        this->state = 0;
        this->timer_050 = RAND_INT(20.0f) + 20;
        this->fwork[14] = 0.0f;

        switch (RAND_INT(8.0f)) {
            case 0:
            case 1:
                this->swork[GRANGA_SWK_31] = 1;
                break;

            case 2:
            case 3:
                this->swork[GRANGA_SWK_31] = 2;
                break;

            case 4:
                if (D_edisplay_801615D0.y < 0.0f) {
                    this->swork[GRANGA_SWK_31] = 4;
                } else {
                    this->swork[GRANGA_SWK_31] = 3;
                }
                break;

            case 5:
            case 6:
            case 7:
                this->swork[GRANGA_SWK_31] = 4;
                break;
        }

        if ((gBossFrameCount > 1000) && (Rand_ZeroOne() < 0.3f)) {
            if (Rand_ZeroOne() < 0.5f) {
                AllRange_PlayMessage(gMsg_ID_2263, RCID_BOSS_CORNERIA);
            } else {
                AllRange_PlayMessage(gMsg_ID_2265, RCID_BOSS_CORNERIA);
            }
        }
    }

    if ((gBossFrameCount > 800) && ((gBossFrameCount % 512) == 0)) {
        if (gCoUturnCount < 2) {
            Radio_PlayMessage(gMsg_ID_20237, RCID_PEPPY);
        } else if (D_edisplay_801615D0.z > 0.0f) {
            Radio_PlayMessage(gMsg_ID_2233, RCID_FALCO);
        } else {
            Radio_PlayMessage(gMsg_ID_2282, RCID_PEPPY);
        }
    }
}

void Corneria_80188C7C(Granga* this) {
    if (this->unk_044 == 0) {
        this->unk_044++;
        this->fwork[12] *= -0.2f;
        AUDIO_PLAY_SFX(NA_SE_OB_METAL_BOUND_L, this->sfxSource, 4);
        func_enmy_80062B60(D_i1_8019B6D8[56], D_i1_8019B6D8[58], 0, 30.0f);
        this->swork[GRANGA_SWK_18] = 13;
        this->swork[GRANGA_SWK_19] = 15;
        this->swork[GRANGA_SWK_21] = 10;
        this->swork[GRANGA_SWK_22] = 12;
        this->swork[GRANGA_SWK_20] = 17;
        gCameraShake = 20;
    } else {
        this->fwork[12] = 0.0f;
    }
}

void Corneria_80188D50(Granga* this) {
    static s32 D_i1_801997E0 = 0;
    s32 i;
    Vec3f src;
    Vec3f dest;
    TeamId teamId;

    if (this->swork[GRANGA_SWK_36] == 0) {
        if (gPlayer[0].hitTimer != 0) {
            D_i1_801997E0 = 80;
        }

        if (D_i1_801997E0 != 0) {
            D_i1_801997E0--;
        } else if ((gPlayer[0].pos.y < 200.0f) && (this->state < 5) &&
                   (fabsf(this->obj.pos.x - gPlayer[0].pos.x) < 200.0f) &&
                   (fabsf(this->obj.pos.z - gPlayer[0].trueZpos) < 200.0f) && (gPlayer[0].aerobaticPitch > 180.0f)) {
            this->swork[GRANGA_SWK_36]++;
            D_i1_801997E0 = 20;

            AUDIO_PLAY_SFX(NA_SE_RING_PASS, gDefaultSfxSource, 4);

            if ((gTeamShields[TEAM_ID_FALCO] > 0) || (gTeamShields[TEAM_ID_SLIPPY] > 0) ||
                (gTeamShields[TEAM_ID_PEPPY] > 0)) {
                if (0) {};

                do {
                    teamId = RAND_INT(2.9f) + 1;
                } while (gTeamShields[teamId] <= 0);

                switch (teamId) {
                    case TEAM_ID_FALCO:
                        Radio_PlayMessage(gMsg_ID_7100, RCID_FALCO);
                        break;
                    case TEAM_ID_SLIPPY:
                        Radio_PlayMessage(gMsg_ID_15252, RCID_SLIPPY);
                        break;
                    case TEAM_ID_PEPPY:
                        Radio_PlayMessage(gMsg_ID_17160, RCID_PEPPY);
                        break;
                }
            }

            Matrix_RotateY(gCalcMatrix, (gPlayer[0].yRot_114 + gPlayer[0].rot.y) * M_DTOR, MTXF_NEW);

            src.x = 0.0f;
            src.y = 0.0f;
            src.z = -2500.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

            for (i = 0; i < ARRAY_COUNT(gItems); i++) {
                if (gItems[i].obj.status == OBJ_FREE) {
                    Item_Initialize(&gItems[i]);

                    gItems[i].obj.status = OBJ_INIT;
                    gItems[i].obj.id = OBJ_ITEM_1UP;
                    gItems[i].obj.pos.x = gPlayer[0].pos.x + dest.x;
                    gItems[i].obj.pos.y = gPlayer[0].pos.y + 100.0f;
                    gItems[i].obj.pos.z = gPlayer[0].trueZpos + dest.z;
                    gItems[i].timer_4A = 8;

                    Object_SetInfo(&gItems[i].info, gItems[i].obj.id);
                    func_effect_8007B344(gItems[i].obj.pos.x, gItems[i].obj.pos.y, gItems[i].obj.pos.z, 5.0f, 0);
                    break;
                }
            }
        }
    }
}

void Corneria_Granga_Update(Granga* this) {
    Vec3f sp21C = { 0.0f, 0.0f, 0.0f };
    s32 sp218;
    f32 sp214;
    f32 sp210;
    f32 sp20C;
    s32 var_v0;
    f32 sp204;
    f32 sp200;
    f32 sp1FC;
    f32 sp1F8;
    Vec3f sp1EC = { 0.0f, 0.0f, 5.0f };
    Vec3f sp84[30];
    Vec3f sp78 = { 0.0f, 0.0f, 40.0f };
    Vec3f sp6C = { 0.0f, 0.0f, -30.0f };
    f32 sp5C;

    if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_START_360) {
        if (this->swork[GRANGA_SWK_33] == 0) {
            this->swork[GRANGA_SWK_33]++;

            gBossActive = 2;

            this->drawShadow = true;

            this->swork[GRANGA_SWK_24] = 150;
            this->swork[GRANGA_SWK_25] = 150;
            this->swork[GRANGA_SWK_26] = 40;
            this->swork[GRANGA_SWK_27] = 40;
            this->swork[GRANGA_SWK_28] = 40;
            this->swork[GRANGA_HEALTH] = 130;

            this->info.hitbox[1 + 0] = -241.0f;
            this->info.hitbox[1 + 6] = 0.0f;
            this->info.hitbox[1 + 12] = 0.0f;
            this->info.hitbox[1 + 18] = 0.0f;
            this->info.hitbox[1 + 24] = 0.0f;
            this->info.hitbox[1 + 30] = 0.0f;

            this->timer_052 = 100;
            this->state = 0;
            this->swork[GRANGA_SWK_31] = 1;

            D_i1_8019B6D8[66] = 0.0f;
            D_i1_8019B6D8[67] = 10000.0f;

            this->timer_050 = 30;

            Animation_GetFrameData(&D_CO_602C0D0, 0, this->vwork);

            gBossFrameCount = 0;
        }
        gBossFrameCount++;

        gRadarMarks[59].status = 1;
        gRadarMarks[59].type = 102;
        gRadarMarks[59].pos.x = this->obj.pos.x;
        gRadarMarks[59].pos.y = this->obj.pos.y;
        gRadarMarks[59].pos.z = this->obj.pos.z;
        gRadarMarks[59].yRot = this->obj.rot.y + 180.0f;

        Corneria_80188D50(this);

        if (D_edisplay_801615D0.z > 0.0f) {
            if (D_edisplay_801615D0.x > 0.0f) {
                gPlayer[0].flags_228 = PFLAG_228_4;
            } else {
                gPlayer[0].flags_228 = PFLAG_228_5;
            }
        }

        switch (gBossFrameCount) {
            case 20:
                Radio_PlayMessage(gMsg_ID_2240, RCID_BOSS_CORNERIA);
                break;
            case 160:
                Radio_PlayMessage(gMsg_ID_2250, RCID_BOSS_CORNERIA);
                break;
            case 330:
                Radio_PlayMessage(gMsg_ID_2225, RCID_SLIPPY);
                break;
            case 486:
                gShowBossHealth = true;
                break;
            case 500:
                Radio_PlayMessage(gMsg_ID_2260, RCID_BOSS_CORNERIA);
                break;
            case 900:
                Radio_PlayMessage(gMsg_ID_2230, RCID_PEPPY);
                break;
            case 3840:
                if (this->state < 5) {
                    Radio_PlayMessage(gMsg_ID_2230, RCID_PEPPY);
                }
                break;
        }

        if (gBossFrameCount >= 487) {
            gBossHealthBar = this->swork[GRANGA_HEALTH] * 2;
        }

        for (sp218 = 0; sp218 < 24; sp218++) {
            if ((this->swork[sp218] != 0) && (this->swork[sp218] < 1000)) {
                this->swork[sp218]--;
            }
        }

        Corneria_Granga_HandleDamage(this);

        this->fwork[0] = SIN_DEG(this->swork[GRANGA_SWK_18] * 50.0f) * Corneria_80187A88(this->swork[GRANGA_SWK_18]);
        this->fwork[1] = SIN_DEG(this->swork[GRANGA_SWK_19] * 50.0f) * Corneria_80187A88(this->swork[GRANGA_SWK_19]);
        this->fwork[2] = SIN_DEG(this->swork[GRANGA_SWK_20] * 50.0f) * Corneria_80187A88(this->swork[GRANGA_SWK_20]);
        this->fwork[3] = SIN_DEG(this->swork[GRANGA_SWK_21] * 50.0f) * Corneria_80187A88(this->swork[GRANGA_SWK_21]);
        this->fwork[4] = SIN_DEG(this->swork[GRANGA_SWK_22] * 50.0f) * Corneria_80187A88(this->swork[GRANGA_SWK_22]);

        if (this->state < 5) {
            sp5C = SIN_DEG(this->swork[GRANGA_SWK_23] * 12.0f) * Corneria_80187A88(this->swork[GRANGA_SWK_23]) * 0.3f;
            Math_SmoothStepToF(&this->obj.rot.z, sp5C, 0.2f, 100.0f, 0.001f);
        }

        if (this->obj.pos.y <= 10.0f) {
            this->obj.pos.y = 10.0f;
        }

        sp214 = D_i1_8019B6D8[17] - this->obj.pos.x;
        sp210 = D_i1_8019B6D8[18] - (this->obj.pos.y + 300.0f);
        sp20C = D_i1_8019B6D8[19] - this->obj.pos.z;

        sp1FC = Math_RadToDeg(Math_Atan2F(sp214, sp20C));
        sp204 = sqrtf((sp214 * sp214) + (sp20C * sp20C));
        sp200 = Math_RadToDeg(-Math_Atan2F(sp210, sp204));

        if ((sp200 > 50.0f) && (sp200 < 180.0f)) {
            sp200 = 50.0f;
        }
        if ((sp200 < 310.0f) && (sp200 > 180.0f)) {
            sp200 = 310.0f;
        }

        sp1FC -= this->obj.rot.y;
        if (sp1FC > 360.0f) {
            sp1FC -= 360.0f;
        }
        if (sp1FC < 0.0f) {
            sp1FC += 360.0f;
        }
        if ((sp1FC > 50.0f) && (sp1FC < 180.0f)) {
            sp1FC = 50.0f;
        }
        if ((sp1FC < 310.0f) && (sp1FC > 180.0f)) {
            sp1FC = 310.0f;
        }

        Math_SmoothStepToAngle(&D_i1_8019B6D8[16], sp1FC, 0.1f, 3.0f, 0.0f);
        Math_SmoothStepToAngle(&D_i1_8019B6D8[15], sp200, 0.1f, 3.0f, 0.0f);

        if (this->state != 0) {
            sp1F8 =
                Math_RadToDeg(Math_Atan2F(D_i1_8019B6D8[66] - this->obj.pos.x, D_i1_8019B6D8[67] - this->obj.pos.z));
            Math_SmoothStepToAngle(&this->obj.rot.y, sp1F8, 0.1f, 3.0f, 0.0f);
        }

        Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);

        switch (this->state) {
            case 0:
                this->unk_04C = 0;
                D_i1_8019B6D8[17] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = gPlayer[0].trueZpos;

                if (this->timer_050 == 0) {
                    switch (this->swork[GRANGA_SWK_31]) {
                        case 1:
                            this->state = 1;
                            this->timer_050 = RAND_INT(50.0f) + 50;
                            this->fwork[14] = 0.0f;
                            break;

                        case 2:
                            this->state = 2;
                            this->timer_050 = RAND_INT(100.0f) + 150;
                            this->timer_052 = 40;
                            this->timer_054 = 40;
                            this->fwork[14] = 0.07f;
                            break;

                        case 4:
                            this->state = 4;
                            this->timer_050 = RAND_INT(70.0f) + 100;
                            this->fwork[14] = 0.1f;
                            D_i1_8019B6D8[66] = RAND_FLOAT_CENTERED(6000.0f);
                            D_i1_8019B6D8[67] = RAND_FLOAT_CENTERED(6000.0f);
                            this->fwork[14] = 0.07f;
                            break;

                        case 3:
                            this->state = 3;
                            this->timer_050 = RAND_INT(100.0f) + 150;
                            this->fwork[14] = 0.07f;
                            break;
                    }
                }

                Animation_GetFrameData(&D_CO_602C0D0, this->unk_04C, sp84);

                if (this->timer_052 == 0) {
                    this->timer_052 = 150;
                    this->swork[GRANGA_SWK_30] = 1;
                }
                break;

            case 1:
                D_i1_8019B6D8[17] = D_i1_8019B6D8[66] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = D_i1_8019B6D8[67] = gPlayer[0].trueZpos;

                this->unk_04C += 2;
                if (this->unk_04C >= Animation_GetFrameCount(&D_CO_602BC18)) {
                    this->unk_04C = 0;
                }

                Animation_GetFrameData(&D_CO_602BC18, this->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp1EC, &sp21C);

                if (this->timer_052 == 0) {
                    this->timer_052 = 150;
                    this->swork[GRANGA_SWK_30] = 1;
                }

                Corneria_80188A18(this);
                break;

            case 2:
                D_i1_8019B6D8[17] = D_i1_8019B6D8[66] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = D_i1_8019B6D8[67] = gPlayer[0].trueZpos;

                this->unk_04C -= 4;
                if (this->unk_04C < 0) {
                    this->unk_04C = 100;
                }

                Animation_GetFrameData(&D_CO_602BC18, this->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp6C, &sp21C);

                if (this->timer_052 == 0) {
                    this->timer_052 = 30;
                    this->swork[GRANGA_SWK_30] = 2;
                }
                if (this->timer_054 == 0) {
                    this->timer_054 = 9;
                    this->swork[GRANGA_SWK_30] = 3;
                }

                Corneria_80188A18(this);
                break;

            case 3:
                D_i1_8019B6D8[17] = D_i1_8019B6D8[66] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = D_i1_8019B6D8[67] = gPlayer[0].trueZpos;

                this->unk_04C += 4;
                if (this->unk_04C > 100) {
                    this->unk_04C = 0;
                }

                Animation_GetFrameData(&D_CO_602BC18, this->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp21C);

                if (this->timer_052 == 0) {
                    this->timer_052 = 30;
                    this->swork[GRANGA_SWK_30] = 2;
                }
                if (this->timer_054 == 0) {
                    this->timer_054 = 9;
                    this->swork[GRANGA_SWK_30] = 3;
                }

                Corneria_80188A18(this);
                break;

            case 4:
                D_i1_8019B6D8[17] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = gPlayer[0].trueZpos;

                this->unk_04C += 4;
                if (this->unk_04C > 100) {
                    this->unk_04C = 0;
                }

                Animation_GetFrameData(&D_CO_602BC18, this->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp21C);

                Corneria_80188A18(this);
                break;

            case 5:
            case 6:
                this->drawShadow = false;
                gGroundClipMode = 1;

                if ((gGameFrameCount % 8) == 0) {
                    D_i1_8019B6D8[17] = gPlayer[0].pos.x + RAND_FLOAT_CENTERED(2000.0f);
                    D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                    D_i1_8019B6D8[19] = gPlayer[0].trueZpos + RAND_FLOAT_CENTERED(2000.0f);
                }

                this->fwork[12] += 0.05f;

                if (this->state == 6) {
                    this->obj.rot.z += this->fwork[12];
                    if (this->obj.rot.z > 60.0f) {
                        this->obj.rot.z = 60.0f;
                        Corneria_80188C7C(this);

                        if ((gGameFrameCount % 512U) == 0) {
                            Radio_PlayMessage(gMsg_ID_2275, RCID_BOSS_CORNERIA);
                        }

                        if ((gGameFrameCount % 512U) == 256) {
                            Radio_PlayMessage(gMsg_ID_2220, RCID_BOSS_CORNERIA);
                        }
                    }
                    this->obj.rot.x = this->obj.rot.z;
                } else {
                    this->obj.rot.z -= this->fwork[12];
                    if (this->obj.rot.z < -60.0f) {
                        this->obj.rot.z = -60.0f;
                        Corneria_80188C7C(this);

                        if ((gGameFrameCount % 512U) == 0) {
                            Radio_PlayMessage(gMsg_ID_2275, RCID_BOSS_CORNERIA);
                        }
                        if ((gGameFrameCount % 512U) == 256) {
                            Radio_PlayMessage(gMsg_ID_2220, RCID_BOSS_CORNERIA);
                        }
                    }
                    this->obj.rot.x = -this->obj.rot.z;
                }

                if (this->timer_050 == 0) {
                    ObjectId objId;

                    this->timer_050 = 60;
                    objId = Corneria_80188750(this);

                    if (objId != 0) {
                        Corneria_80187710(D_i1_8019B6D8[62], D_i1_8019B6D8[63], D_i1_8019B6D8[64], 65.0f, 270.0f, 0.0f,
                                          0, 0, objId);
                    }
                }

                this->yOffset = SIN_DEG(this->obj.rot.z) * 30.0f;

                if ((gGameFrameCount % 16) == 0) {
                    this->unk_04C = RAND_INT(100.0f);
                }

                Animation_GetFrameData(&D_CO_602BC18, this->unk_04C, sp84);
                this->fwork[14] = 0.03f;
                break;

            case 7:
                if (this->swork[GRANGA_SWK_32] != 0) {
                    this->fwork[12] += 0.05f;
                    this->obj.rot.x += this->fwork[12];
                    if (this->obj.rot.x > 60.0f) {
                        this->obj.rot.x = 60.0f;
                        Corneria_80188C7C(this);
                    }
                }

                this->swork[GRANGA_SWK_24] = this->swork[GRANGA_SWK_25] = this->swork[GRANGA_SWK_26] =
                    this->swork[GRANGA_SWK_27] = this->swork[GRANGA_SWK_28] = 0;

                if (this->timer_050 == 12) {
                    Object_Kill(&gEffects[0].obj, gEffects[0].sfxSource);
                    func_effect_8007D0E0(D_i1_8019B6D8[62], D_i1_8019B6D8[63] - 100.0f, D_i1_8019B6D8[64], 25.0f);
                }
                if (this->timer_050 == 10) {
                    for (sp218 = 0; sp218 < 50; sp218++) {
                        if (gEffects[sp218].obj.status != OBJ_FREE) {
                            Object_Kill(&gEffects[sp218].obj, gEffects[sp218].sfxSource);
                        }
                    }

                    func_effect_8007A568(D_i1_8019B6D8[62], D_i1_8019B6D8[63] - 100.0f, D_i1_8019B6D8[64], 40.0f);
                    func_effect_8007D0E0(D_i1_8019B6D8[62], D_i1_8019B6D8[63] - 100.0f, D_i1_8019B6D8[64], 30.0f);
                    func_enmy_80062B60(D_i1_8019B6D8[62], D_i1_8019B6D8[64], 0, 120.0f);

                    gCameraShake = 25;
                    gShowBossHealth = 0;

                    for (sp218 = 0; sp218 < 100; sp218++) {
                        func_effect_80079618(D_i1_8019B6D8[62] + RAND_FLOAT_CENTERED(600.0f),
                                             (D_i1_8019B6D8[63] + RAND_FLOAT_CENTERED(500.0f)) - 100.0f,
                                             D_i1_8019B6D8[64] + RAND_FLOAT_CENTERED(600.0f), 2.0f);
                    }
                }

                if (this->timer_050 < 50) {
                    this->dmgPart = this->timer_050 % 8U;

                    switch (this->dmgPart) {
                        case 1:
                            if (this->swork[GRANGA_SWK_2] != 1000) {
                                this->dmgType = DMG_BEAM;
                            }
                            break;

                        case 2:
                            if (this->swork[GRANGA_SWK_1] != 1000) {
                                this->dmgType = DMG_BEAM;
                            }
                        case 3:
                            if (this->swork[GRANGA_SWK_3] != 1000) {
                                this->dmgType = DMG_BEAM;
                            }
                            break;

                        case 4:
                            if (this->swork[GRANGA_SWK_7] != 1000) {
                                this->dmgType = DMG_BEAM;
                            }
                        case 5:
                            if (this->swork[GRANGA_SWK_4] != 1000) {
                                this->dmgType = DMG_BEAM;
                            }
                            break;
                    }
                }

                if (this->timer_050 == 0) {
                    Object_Kill(&this->obj, this->sfxSource);
                }
                Animation_GetFrameData(&D_CO_602BC18, 0, sp84);
                break;

            default:
                Animation_GetFrameData(&D_CO_602C0D0, this->unk_04C, sp84);
                break;
        }

        Math_SmoothStepToF(&this->vel.x, sp21C.x, 0.3f, 5.0f, 0.0f);
        Math_SmoothStepToF(&this->vel.z, sp21C.z, 0.3f, 5.0f, 0.0f);

        Corneria_801887AC(this);

        Math_SmoothStepToVec3fArray(sp84, this->vwork, 1, 19, this->fwork[14], 100.0f, 0.0f);
        Math_SmoothStepToF(&this->fwork[14], 1.0f, 1.0f, 0.01f, 0.0f);

        if (this->state < 5) {
            if (((fabsf(this->obj.pos.x) > 4000.0f) || (fabsf(this->obj.pos.z) > 4000.0f)) && (this->state != 4)) {
                this->state = 4;
                this->timer_050 = 150;
                D_i1_8019B6D8[66] = 0.0f;
                D_i1_8019B6D8[67] = 0.0f;
                this->swork[GRANGA_SWK_31] = 0;
            }

            if ((this->state != 0) && ((this->unk_04C == 0) || (this->unk_04C == 52))) {
                AUDIO_PLAY_SFX(NA_SE_EN_HEAVY_WALK, this->sfxSource, 4);
            }

            if (gPlayer[0].somersault && (this->state != 0)) {
                this->state = 0;
                this->swork[GRANGA_SWK_31] = 1;
                this->timer_050 = 100;
                this->fwork[14] = 0.0f;
            }
        }
    }
}

bool Corneria_Granga_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Granga* boss = (Granga*) data;

    if (boss->swork[limbIndex] == 1000) {
        *dList = 0;
    }

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, 1001);

    switch (limbIndex) {
        case 6:
            rot->x += boss->fwork[1];
            rot->y += boss->fwork[1];
            rot->y -= boss->fwork[13] * 0.6f;
            break;

        case 5:
            rot->x -= boss->fwork[1];
            rot->y -= boss->fwork[1];
            rot->z += boss->fwork[1];
            break;

        case 4:
            rot->x += boss->fwork[1];
            rot->y += boss->fwork[1];
            rot->z -= boss->fwork[1];
            break;

        case 9:
            rot->x -= boss->fwork[0];
            rot->y -= boss->fwork[0];
            rot->y += boss->fwork[13];
            break;

        case 8:
            rot->x += boss->fwork[0];
            rot->y += boss->fwork[0];
            rot->z -= boss->fwork[0];
            break;

        case 7:
            rot->x -= boss->fwork[0];
            rot->y -= boss->fwork[0];
            rot->z += boss->fwork[0];
            break;

        case 3:
            rot->x += boss->fwork[2];
            rot->y += boss->fwork[2];
            rot->z += D_i1_8019B6D8[15];
            break;

        case 1:
            rot->x += boss->fwork[4] - D_i1_8019B6D8[15];
            rot->y += boss->fwork[4];
            break;

        case 2:
            rot->x += boss->fwork[3] + D_i1_8019B6D8[15];
            rot->y += boss->fwork[3];
            break;

        case 16:
            rot->x += D_i1_8019B6D8[16];
            break;
    }

    if (((boss->swork[limbIndex] % 2) != 0) || ((boss->timer_05C % 2) != 0)) {
        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
    }
    return false;
}

void Corneria_Granga_PostLimbDraw(s32 limbIndex, Vec3f* rot, void* data) {
    s32 pad;
    Vec3f sp80 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp74;
    Vec3f sp68 = { 75.0f, 0.0f, 0.0f };
    Vec3f sp5C = { 190.0f, 0.0f, 0.0f };
    Vec3f sp50 = { 96.0f, 34.0f, 0.0f };
    Vec3f sp44 = { 70.0f, 170.0f, 11.0f };
    Vec3f sp38 = { 70.0f, -170.0f, 11.0f };
    Vec3f sp2C = { 64.0f, 0.0f, -236.0f };

    if ((limbIndex >= 4) && (limbIndex < 10)) {
        Matrix_MultVec3f(gCalcMatrix, &sp80, &sp74);

        D_i1_8019B6D8[limbIndex + 16] = sp74.x;
        D_i1_8019B6D8[limbIndex + 22] = sp74.y;
        D_i1_8019B6D8[limbIndex + 28] = sp74.z;

        Matrix_GetYRPAngles(gCalcMatrix, &sp74);

        D_i1_8019B6D8[limbIndex + 34] = sp74.x;
        D_i1_8019B6D8[limbIndex + 40] = sp74.y;
        D_i1_8019B6D8[limbIndex + 46] = sp74.z;
    }

    switch (limbIndex) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp68, &sp74);
            D_i1_8019B6D8[3] = sp74.x;
            D_i1_8019B6D8[4] = sp74.y;
            D_i1_8019B6D8[5] = sp74.z;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp74);
            D_i1_8019B6D8[0] = sp74.x;
            D_i1_8019B6D8[1] = sp74.y;
            D_i1_8019B6D8[2] = sp74.z;
            break;

        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp68, &sp74);
            D_i1_8019B6D8[9] = sp74.x;
            D_i1_8019B6D8[10] = sp74.y;
            D_i1_8019B6D8[11] = sp74.z;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp74);
            D_i1_8019B6D8[6] = sp74.x;
            D_i1_8019B6D8[7] = sp74.y;
            D_i1_8019B6D8[8] = sp74.z;
            break;

        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp50, &sp74);
            D_i1_8019B6D8[12] = sp74.x;
            D_i1_8019B6D8[13] = sp74.y;
            D_i1_8019B6D8[14] = sp74.z;
            break;

        case 17:
            Matrix_MultVec3f(gCalcMatrix, &sp44, &sp74);
            D_i1_8019B6D8[56] = sp74.x;
            D_i1_8019B6D8[57] = sp74.y;
            D_i1_8019B6D8[58] = sp74.z;
            Matrix_MultVec3f(gCalcMatrix, &sp38, &sp74);
            D_i1_8019B6D8[59] = sp74.x;
            D_i1_8019B6D8[60] = sp74.y;
            D_i1_8019B6D8[61] = sp74.z;
            break;

        case 10:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp74);
            D_i1_8019B6D8[62] = sp74.x;
            D_i1_8019B6D8[63] = sp74.y;
            D_i1_8019B6D8[64] = sp74.z;
            break;

        default:
            break;
    }
}

void Corneria_Granga_Draw(Granga* this) {
    Matrix_Translate(gCalcMatrix, 0.0f, 700.0f, 0.0f, MTXF_APPLY);
    Animation_DrawSkeleton(2, D_CO_602BE64, this->vwork, Corneria_Granga_OverrideLimbDraw, Corneria_Granga_PostLimbDraw,
                           this, gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
}

bool Corneria_Garuda_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Actor* actor = (Actor*) data;

    if (limbIndex == 1) {
        rot->x += actor->fwork[1];
    }
    if ((limbIndex == 3) && (actor->obj.id == OBJ_ACTOR_CO_GARUDA_1)) {
        rot->x += actor->fwork[1];
    }
    return false;
}

s32 Corneria_Garuda_CheckCollision(CoGaruda1* this) {
    s32 pad[2];
    s32 i;
    s32 collision;
    Vec3f pos;
    Vec3f vel = { 0.0f, -10.0f, 0.0f };
    f32 xPos[4] = { 130.0f, -130.0f, 0.0f, 0.0f };
    f32 zPos[4] = { 0.0f, 0.0f, 130.0f, -130.0f };

    for (i = 0; i < 4; i++) {
        pos.x = xPos[i] + this->obj.pos.x;
        pos.y = this->obj.pos.y;
        pos.z = zPos[i] + this->obj.pos.z;

        collision = Object_CheckCollision(this->index, &pos, &vel, 1);
        if ((collision != 0) && (collision >= 10)) {
            if ((gScenery[collision - 10].obj.status == OBJ_ACTIVE) &&
                (gScenery[collision - 10].obj.id == OBJ_SCENERY_CO_BUILDING_9)) {
                return collision - 9;
            }
        }
    }
    return 0;
}

void Corneria_Garuda_HandleDamage(Actor* this) {
    if (this->dmgType != DMG_NONE) {
        this->dmgType = DMG_NONE;

        if (this->dmgPart == 0) {
            AUDIO_PLAY_SFX(NA_SE_OB_DAMAGE_M, this->sfxSource, 4);
            func_effect_8007C120(this->obj.pos.x, this->obj.pos.y + 200.0f, this->obj.pos.z, this->vel.x, this->vel.y,
                                 this->vel.z, 0.1f, 20);
            this->timer_0C6 = 15;
            this->health -= this->damage;

            if (this->health <= 0) {
                this->obj.id = OBJ_ACTOR_CO_GARUDA_DESTROY;
                Object_SetInfo(&this->info, this->obj.id);
                this->state = 100;
                this->timer_0BC = 10;
                this->lockOnTimers[TEAM_ID_FOX] = 0;
                this->vel.x = this->vel.y = this->vel.z = 0.0f;
            }
        }
    }

    if ((this->health < 11) && ((gGameFrameCount % 4) == 0)) {
        func_effect_8007D2C8(this->obj.pos.x + RAND_FLOAT_CENTERED(100.0f),
                             this->obj.pos.y + 200.0f + RAND_FLOAT_CENTERED(100.0f),
                             this->obj.pos.z + 50.0f + RAND_FLOAT(50.0f), 3.0f);
        func_effect_8007C120(this->obj.pos.x, this->obj.pos.y + 200.0f, this->obj.pos.z, this->vel.x, this->vel.y,
                             this->vel.z, 0.1f, 10);
    }
}

void Corneria_CoGaruda1_Update(CoGaruda1* this) {
    Vec3f frameTable[20];
    f32 sin;
    f32 cos;

    Corneria_Garuda_HandleDamage(this);

    Math_SmoothStepToVec3fArray(frameTable, this->vwork, 0,
                                Animation_GetFrameData(&aCoGaruda1Anim, this->animFrame, frameTable), 1.0f, 1.0f, 1.0f);

    sin = SIN_DEG(this->obj.rot.y);
    this->vel.x = this->fwork[0] * sin;
    cos = COS_DEG(this->obj.rot.y);
    this->vel.z = this->fwork[0] * cos;

    switch (this->state) {
        case 0:
            this->fwork[1] += 20.0f;
            Texture_Scroll(D_CO_60329C0, 16, 16, 1);
            this->animFrame = 0;

            this->fwork[0] += 1.0f;
            if (this->fwork[0] > 10.0f) {
                this->fwork[0] = 10.0f;
            }

            this->iwork[0] = Corneria_Garuda_CheckCollision(this);
            if (this->iwork[0] != 0) {
                this->state++;
            }
            break;

        case 1:
            this->animFrame++;
            this->fwork[1] += 20.0f;
            this->fwork[0] = 0.0f;

            if (this->animFrame == 50) {
                gScenery[this->iwork[0] - 1].state = 1;
            }
            if (this->animFrame >= Animation_GetFrameCount(&aCoGaruda1Anim)) {
                this->state++;
            }
            break;

        case 2:
            this->animFrame = 0;
            this->fwork[1] += 20.0f;
            break;
    }
}

void Corneria_IBeam_Init(Actor* this) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gScenery); i++) {
        if (gScenery[i].obj.status == OBJ_FREE) {
            Scenery_Initialize(&gScenery[i]);
            gScenery[i].obj.status = OBJ_INIT;
            gScenery[i].obj.id = OBJ_SCENERY_IBEAM;
            gScenery[i].obj.pos.x = this->obj.pos.x;
            gScenery[i].obj.pos.y = this->obj.pos.y;
            gScenery[i].obj.pos.z = this->obj.pos.z;
            gScenery[i].obj.rot.y = this->obj.rot.y;
            Object_SetInfo(&gScenery[i].info, gScenery[i].obj.id);
            this->iwork[0] = i;
            break;
        }
    }
}

void Corneria_CoGaruda2_Update(CoGaruda2* this) {
    Vec3f frameTable[20];
    Vec3f src;
    Vec3f dest;
    Scenery* scenery;
    f32 sin;
    f32 cos;

    Corneria_Garuda_HandleDamage(this);

    scenery = &gScenery[this->iwork[0]];

    sin = SIN_DEG(this->obj.rot.y);
    this->vel.x = this->fwork[0] * sin;
    cos = COS_DEG(this->obj.rot.y);
    this->vel.z = this->fwork[0] * cos;

    Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);

    switch (this->state) {
        case 0:
            this->timer_0BC = 40;
            this->state = 1;
            this->animFrame = 0;
            break;

        case 1:
            this->fwork[0] = -10.0f;
            Texture_Scroll(D_CO_60329C0, 16, 16, 1);
            if (this->timer_0BC == 0) {
                this->state = 2;
                this->iwork[2] = RAND_INT(10.0f) + 10;
            }
            break;

        case 2:
            this->fwork[0] = -10.0f;
            Texture_Scroll(D_CO_60329C0, 16, 16, 1);
            this->animFrame++;

            if (this->animFrame >= Animation_GetFrameCount(&D_CO_602AA04)) {
                this->state = 3;
            }
            if (this->animFrame == (Animation_GetFrameCount(&D_CO_602AA04) - this->iwork[2])) {
                this->iwork[1] = 1;
                scenery->state = 1;
                src.x = 0.0f;
                src.y = 0.0f;
                src.z = 30.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                scenery->vel.x = dest.x;
                scenery->vel.y = dest.y;
                scenery->vel.z = dest.z;
                AUDIO_PLAY_SFX(NA_SE_EN_THROW, this->sfxSource, 4);
            }
            break;

        case 3:
            break;
    }

    if (this->iwork[1] == 0) {
        scenery->obj.pos.x = this->fwork[2];
        scenery->obj.pos.y = this->fwork[6];
        scenery->obj.pos.z = this->fwork[10];
        scenery->obj.rot.y = this->obj.rot.y;
        scenery->vel.y = 0.0f;
    }

    Math_SmoothStepToVec3fArray(frameTable, this->vwork, 0,
                                Animation_GetFrameData(&D_CO_602AA04, this->animFrame, frameTable), 1.0f, 1.0f, 1.0f);
}

void Corneria_CoGaruda3_Update(CoGaruda3* this) {
    s32 pad;
    Vec3f frameTable[20];
    Scenery* scenery;
    f32 sin;
    f32 cos;
    s32 pad2[4];

    Corneria_Garuda_HandleDamage(this);

    sin = SIN_DEG(this->obj.rot.y);
    this->vel.x = this->fwork[0] * sin;
    cos = COS_DEG(this->obj.rot.y);
    this->vel.z = this->fwork[0] * cos;

    switch (this->state) {
        case 0:
            this->state = 1;
            break;

        case 1:
            this->fwork[0] = 5.0f;
            this->fwork[1] += 5.0f;
            Texture_Scroll(D_CO_60329C0, 16, 16, 1);
            this->animFrame++;
            if (this->animFrame >= Animation_GetFrameCount(&aCoGaruda3Anim)) {
                this->animFrame = 0;
            }
            break;
    }

    if (this->iwork[1] == 0) {
        scenery = &gScenery[this->iwork[0]];
        scenery->obj.pos.x = this->fwork[2];
        scenery->obj.pos.y = this->fwork[6];
        scenery->obj.pos.z = this->fwork[10];
        scenery->obj.rot.y = this->fwork[1];
        scenery->vel.y = 0.0f;
    }

    Math_SmoothStepToVec3fArray(frameTable, this->vwork, 0,
                                Animation_GetFrameData(&aCoGaruda3Anim, this->animFrame, frameTable), 1.0f, 1.0f, 1.0f);
}

void Corneria_CoGarudaDestroy_Update(CoGarudaDestroy* this) {
    s32 i;
    f32 spB4[4] = { -10.0f, -5.0f, 10.0f, 5.0f };
    f32 spA4[4] = { 10.0f, 15.0f, 10.0f, 15.0f };

    Math_SmoothStepToF(&this->vel.x, 0.0f, 0.05f, 1.0f, 0.0001f);
    Math_SmoothStepToF(&this->vel.y, 0.0f, 0.05f, 1.0f, 0.0001f);
    Math_SmoothStepToF(&this->vel.z, 0.0f, 0.05f, 1.0f, 0.0001f);

    switch (this->state) {
        case 100:
            if ((this->timer_0BC % 4) == 0) {
                func_effect_8007D2C8(this->obj.pos.x + RAND_FLOAT_CENTERED(100.0f),
                                     this->obj.pos.y + 200.0f + RAND_FLOAT_CENTERED(100.0f),
                                     this->obj.pos.z + 50.0f + RAND_FLOAT(50.0f), 3.0f);
                func_effect_8007C120(this->obj.pos.x, this->obj.pos.y + 200.0f, this->obj.pos.z, this->vel.x,
                                     this->vel.y, this->vel.z, 0.1f, 10);
                AUDIO_PLAY_SFX(NA_SE_EN_EXPLOSION_S, this->sfxSource, 4);
            }

            if (this->timer_0BC == 0) {
                for (i = 0; i < 4; i++) {
                    Boss_SpawnDebris(this->fwork[2 + i], this->fwork[6 + i], this->fwork[10 + i], 0.0f, 0.0f, 0.0f,
                                     spB4[i] * (RAND_FLOAT(0.75f) + 0.5f), spA4[i] * (RAND_FLOAT(0.75f) + 0.5f),
                                     RAND_FLOAT_CENTERED(20.0f), 3.0f, i + 24, RAND_INT(30.0f) + 60.0f);
                }

                if ((fabsf(this->obj.pos.z - gPlayer[0].trueZpos) < 500.0f) &&
                    (fabsf(this->obj.pos.x - gPlayer[0].pos.x) < 200.0f) &&
                    (fabsf(this->obj.pos.y - gPlayer[0].pos.y) < 200.0f)) {
                    *gControllerRumbleTimers = 25;
                }

                BonusText_Display(this->obj.pos.x, this->obj.pos.y + 250.0f, this->obj.pos.z, 5);
                gHitCount += 6;

                D_ctx_80177850 = 15;
                this->state = 101;
                this->timer_0BE = 50;
            }

            if (this->timer_0BC == 8) {
                func_effect_8007BFFC(this->obj.pos.x, this->obj.pos.y + 200.0f, this->obj.pos.z + 50.0f, 0.0f, 0.0f,
                                     0.0f, 5.0f, 30);
                AUDIO_PLAY_SFX(NA_SE_EN_EXPLOSION_M, this->sfxSource, 4);
            }
            break;

        case 101:
            if ((this->timer_0BE != 0) && ((gGameFrameCount % 2) == 0)) {
                func_effect_8007797C(this->obj.pos.x, this->obj.pos.y + 150.0f, this->obj.pos.z, 0.0f, 10.0f, 0.0f,
                                     3.0f);
            }
            break;
    }
}

void Corneria_CoGaruda1_Draw(CoGaruda1* this) {
    Animation_DrawSkeleton(3, aCoGarudaSkel, this->vwork, Corneria_Garuda_OverrideLimbDraw, NULL, this, gCalcMatrix);
}

void Corneria_Garuda_PostLimbDraw(s32 limbIndex, Vec3f* rot, void* data) {
    Actor* actor = (Actor*) data;
    Vec3f src = { 120.0f, 0.0f, 0.0f };
    Vec3f dest;

    if (limbIndex == 1) {
        Matrix_MultVec3f(gCalcMatrix, &src, &dest);
        actor->fwork[2] = dest.x;
        actor->fwork[6] = dest.y;
        actor->fwork[10] = dest.z;
        if (actor->iwork[1] == 0) {
            gScenery[actor->iwork[0]].obj.rot.x = -rot->y;
        }
    }
}

void Corneria_CoGaruda2_Draw(CoGaruda2* this) {
    Animation_DrawSkeleton(3, aCoGarudaSkel, this->vwork, NULL, Corneria_Garuda_PostLimbDraw, this, gCalcMatrix);
}

void Corneria_CoGaruda3_Draw(CoGaruda3* this) {
    Animation_DrawSkeleton(3, aCoGarudaSkel, this->vwork, Corneria_Garuda_OverrideLimbDraw,
                           Corneria_Garuda_PostLimbDraw, this, gCalcMatrix);
}

bool Corneria_CoGarudaDestroy_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Actor* actor = (Actor*) data;

    if ((actor->state == 101) && (limbIndex != 8)) {
        *dList = NULL;
    }
    return false;
}

void Corneria_CoGarudaDestroy_PostLimbDraw(s32 limbIndex, Vec3f* rot, void* data) {
    CoGarudaDestroy* actor = (CoGarudaDestroy*) data;
    Vec3f src = { 0.0f, 0.0f, 0.0f };
    Vec3f dest;

    Matrix_MultVec3f(gCalcMatrix, &src, &dest);

    switch (limbIndex) {
        case 1:
            actor->fwork[2] = dest.x;
            actor->fwork[6] = dest.y;
            actor->fwork[10] = dest.z;
            break;

        case 2:
            actor->fwork[3] = dest.x;
            actor->fwork[7] = dest.y;
            actor->fwork[11] = dest.z;
            break;

        case 3:
            actor->fwork[4] = dest.x;
            actor->fwork[8] = dest.y;
            actor->fwork[12] = dest.z;
            break;

        case 4:
            actor->fwork[5] = dest.x;
            actor->fwork[9] = dest.y;
            actor->fwork[13] = dest.z;
            break;
    }
}

void Corneria_CoGarudaDestroy_Draw(CoGarudaDestroy* this) {
    Animation_DrawSkeleton(3, aCoGarudaSkel, this->vwork, Corneria_CoGarudaDestroy_OverrideLimbDraw,
                           Corneria_CoGarudaDestroy_PostLimbDraw, this, gCalcMatrix);
}

void Corneria_8018BDD4(Carrier* this, f32 xPos, f32 yPos, f32 zPos, f32 arg4, s32 arg5, s32 arg6) {
    ObjectId objId = OBJ_ACTOR_191;

    if (func_hud_8008AC54(0) < 4) {
        objId = OBJ_ACTOR_190;
    }

    Corneria_80187710(this->obj.pos.x + xPos, this->obj.pos.y + yPos, this->obj.pos.z + zPos, arg4, this->obj.rot.x,
                      this->obj.rot.y, arg5, arg6, objId);
}

void Corneria_Carrier_Init(Carrier* this) {
    s32 i;
    s16 timer;

    gBossActive = 1;
    gBossFrameCount = 0;

    this->drawShadow = true;
    this->timer_050 = 354;
    this->health = 601;
    this->fwork[18] = -gArwingSpeed - 10.0f;

    if (fabsf(gPlayer[0].xPath) < 1.0f) {
        this->timer_05A = 30000;
        this->obj.pos.z = (gPlayer[0].cam.eye.z - gPathProgress) - 2000.0f;
        AUDIO_PLAY_SFX(NA_SE_A_CARRIER_ENGINE, this->sfxSource, 4);
        D_i1_8019B6D0 = false;
    } else {
        D_i1_8019B6D0 = true;
        this->obj.rot.y = 180.0f;
        this->fwork[6] = 800.0f;
        this->obj.pos.z = gPlayer[0].trueZpos + 2000.0f;
        this->fwork[7] = this->obj.pos.x;
        this->fwork[5] = 30.0f;
        AUDIO_PLAY_SFX(NA_SE_A_CARRIER_ENGINE, this->sfxSource, 4);
        this->swork[10] = 3;
        this->swork[8] = 3;
    }

    timer = this->timer_05A;

    // Bosses OBJ_BOSS_294 to OBJ_BOSS_296
    for (i = 1; i < ARRAY_COUNT(gBosses); i++) {
        Boss_Initialize(&gBosses[i]);
        gBosses[i].obj.status = OBJ_INIT;
        gBosses[i].obj.id = i + (OBJ_BOSS_294 - 1);
        gBosses[i].obj.pos.x = this->obj.pos.x;
        gBosses[i].obj.pos.y = this->obj.pos.y;
        gBosses[i].obj.pos.z = this->obj.pos.z;
        gBosses[i].health = 200;
        gBosses[i].drawShadow = true;
        gBosses[i].timer_05A = timer;
        Object_SetInfo(&gBosses[i].info, gBosses[i].obj.id);
        gBosses[3].drawShadow = false;
    }
}

void Corneria_8018C0B0(Boss* this) {
    func_effect_8007D9DC(this->obj.pos.x, gGroundHeight + 2.0f, this->obj.pos.z, 5.0f, 100.0f, 0);
    func_effect_8007D9DC(this->obj.pos.x, gGroundHeight + 2.0f, this->obj.pos.z, 5.0f, 100.0f, 5);
    func_effect_8007D9DC(this->obj.pos.x, gGroundHeight + 2.0f, this->obj.pos.z, 5.0f, 100.0f, 10);
    func_effect_8007ADF4(this->obj.pos.x, gGroundHeight, this->obj.pos.z, 1.0f, 10.0f);
}

static Vec3f D_i1_801998CC = { 442.0f, 5.0f, 360.0f };
static Vec3f D_i1_801998D8 = { -439.0f, 180.0f, 323.0f };
static Vec3f D_i1_801998E4 = { -439.0f, -180.0f, 323.0f };
static Vec3f D_i1_801998F0[2] = {
    { 0.0f, 50.0f, 473.0f },
    { 300.0f, 70.0f, 200.0f },
};
static Vec3f D_i1_80199908 = { 230.0f, 30.0f, -200.0f };
static Vec3f D_i1_80199914[2] = {
    { 434.0f, -74.0f, -580.0f },
    { -438.0f, -277.0f, -750.0f },
};
static Vec3f D_i1_8019992C = { -438.0f, 275.0f, -750.0f };
static Vec3f D_i1_80199938 = { -426.0f, 147.0f, 2.0f };
static Vec3f D_i1_80199944 = { -437.0f, -135.0f, 2.0f };
static Vec3f D_i1_80199950 = { -250.0f, 30.0f, -200.0f };
static Vec3f D_i1_8019995C[20] = {
    { 67.0f, 44.0f, 377.0f },     { -146.0f, 24.0f, 376.0f }, { -88.0f, 85.0f, -15.0f },   { 105.0f, 89.0f, -169.0f },
    { -107.0f, -36.0f, 367.0f },  { 110.0f, -39.0f, 286.0f }, { -126.0f, -93.0f, 221.0f }, { 88.0f, -94.0f, 155.0f },
    { 126.0f, -179.0f, -101.0f }, { -94.0f, -151.0f, 29.0f }, { 105.0f, -140.0f, 2.0f },   { -18.0f, -101.0f, 77.0f },
    { -60.0f, -151.0f, 29.0f },   { -132.0f, 9.0f, 430.0f },  { 52.0f, 29.0f, 431.0f },    { -23.0f, 68.0f, 325.0f },
    { 116.0f, 34.0f, 368.0f },    { -49.0f, -53.0f, 366.0f }, { 113.0f, -62.0f, 255.0f },  { -114.0f, -88.0f, 182.0f }
};
static s32 D_i1_80199A4C[4] = { 150, 200, 150, 200 };
static f32 D_i1_80199A5C[4] = { -225.0f, 0.0f, 225.0f, 0.0f };

void Corneria_Carrier_Update(Carrier* this) {
    Vec3f sp84[33];
    Vec3f src;
    Vec3f dest;
    f32 temp_fv0_2;
    s32 pad1;
    s32 i;
    s32 k;
    s32 j;
    s32 pad2;
    f32* temp_a0;
    f32* temp_a1;
    Effect398* effect398;

    gBossFrameCount++;

    Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_APPLY);

    if (!D_i1_8019B6D0) {
        if (this->obj.pos.x > 6000.0f) {
            Object_Kill(&this->obj, this->sfxSource);
            for (i = 1; i < ARRAY_COUNT(gBosses); i++) {
                Object_Kill(&gBosses[i].obj, gBosses[i].sfxSource);
            }
            return;
        }

        src.x = 0.0f;
        src.y = 0.0f;
        src.z = 60.0f;

        Matrix_MultVec3f(gCalcMatrix, &src, &dest);

        this->vel.x = dest.x;
        this->vel.y = dest.y;
        this->vel.z = dest.z - gPathVelZ;

        this->fwork[16] = 4.0f;

        if ((gGameFrameCount % 2) == 0) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[0], &sp84[6]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[1], &sp84[7]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_8019992C, &sp84[8]);
            func_effect_8007BC7C(sp84[6].x + this->obj.pos.x, sp84[6].y + this->obj.pos.y, sp84[6].z + this->obj.pos.z,
                                 20.0f);
            func_effect_8007BC7C(sp84[7].x + this->obj.pos.x, sp84[7].y + this->obj.pos.y, sp84[7].z + this->obj.pos.z,
                                 10.0f);
            func_effect_8007BC7C(sp84[8].x + this->obj.pos.x, sp84[8].y + this->obj.pos.y, sp84[8].z + this->obj.pos.z,
                                 10.0f);
        }
    } else {
        if ((gBossFrameCount > 380) && (gBossFrameCount < 430)) {
            gLight2colorStep = 5;
            gLight2RTarget = 20;
            gLight2GTarget = 20;
            gLight2BTarget = 20;
            gPlayer[0].shadowing = 100;
        }
        Matrix_MultVec3f(gCalcMatrix, &D_i1_801998CC, &sp84[0]);
        Matrix_MultVec3f(gCalcMatrix, &D_i1_801998D8, &sp84[1]);
        Matrix_MultVec3f(gCalcMatrix, &D_i1_801998E4, &sp84[2]);

        if (this->health != 601) {
            k = this->health - 601;

            if (k < 0) {
                k *= -1;
            }

            for (i = 0; k >= 60; i++, k -= 60) {}

            for (j = 0, k = 13; j < i; j++, k++) {
                if ((gGameFrameCount % 16U) == (j % 16U)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_i1_8019995C[j], &sp84[k]);
                    func_effect_8007D0E0(sp84[k].x + this->obj.pos.x, sp84[k].y + this->obj.pos.y,
                                         sp84[k].z + this->obj.pos.z, this->fwork[17]);
                    func_effect_8007C120(sp84[k].x + this->obj.pos.x, sp84[k].y + this->obj.pos.y,
                                         sp84[k].z + this->obj.pos.z, this->vel.x, this->vel.y, this->vel.z, 0.1f, 7);
                }
            }
        }

        if (this->dmgType != DMG_NONE) {
            this->dmgType = DMG_NONE;
            if ((gBosses[1].state != 0) && (gBosses[2].state != 0) && (gBosses[3].state != 0)) {
                if (this->health >= 2) {
                    this->timer_05C = 15;
                    this->health -= this->damage;
                    if (this->health < 120) {
                        this->fwork[17] = 2.8f;
                        AUDIO_PLAY_SFX(NA_SE_EN_KNOCK_DOWN, this->sfxSource, 4);
                    } else {
                        AUDIO_PLAY_SFX(NA_SE_OB_DAMAGE_M, this->sfxSource, 4);
                    }
                }
            } else {
                AUDIO_PLAY_SFX(NA_SE_EN_REFLECT, this->sfxSource, 4);
            }
        }

        this->vel.z = this->fwork[18];

        if (this->state > 0) {
            this->fwork[3] = (gPlayer[0].cam.eye.z - gPathProgress) - 2500.0f;
        }

        if (this->state != 7) {
            Math_SmoothStepToF(&this->fwork[4], this->fwork[5], 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&this->obj.pos.z, this->fwork[3], 0.1f, this->fwork[4], 0.00001f);
        }

        Math_SmoothStepToF(&this->obj.pos.y, this->fwork[6], 0.02f, 2.0f, 0.00001f);
        Math_SmoothStepToAngle(&this->fwork[0], this->fwork[9], 0.2f, 5.0f, 0.00001f);
        Math_SmoothStepToAngle(&this->fwork[1], this->fwork[10], 0.2f, 5.0f, 0.00001f);
        Math_SmoothStepToAngle(&this->fwork[2], this->fwork[11], 0.2f, 5.0f, 0.00001f);

        if (this->state < 6) {
            Math_SmoothStepToAngle(&this->obj.rot.y, this->fwork[13], 0.03f, this->fwork[8], 0.00001f);
            Math_SmoothStepToF(&this->fwork[8], this->fwork[12], 0.1f, 0.02f, 0.001f);
            Math_SmoothStepToAngle(&this->obj.rot.z, this->fwork[14], 0.03f, this->fwork[15], 0.00001f);

            if (this->timer_056 == 1) {
                this->fwork[14] = 0.0f;
                this->fwork[15] = 0.5f;
            }
        }

        if ((gBosses[1].state != 0) && ((gGameFrameCount % 16) == 0)) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199908, &sp84[5]);
            func_effect_8007D0E0(gBosses[0].obj.pos.x + sp84[5].x, gBosses[0].obj.pos.y + sp84[5].y,
                                 gBosses[0].obj.pos.z + sp84[5].z, 5.0f);
        }

        if (gBosses[2].state != 0) {
            gBosses[3].drawShadow = true;
            if (gBosses[3].state != 0) {
                if ((gGameFrameCount % 8) == 0) {
                    Matrix_MultVec3f(gCalcMatrix, &D_i1_80199950, &sp84[11]);
                    func_effect_8007D0E0(gBosses[0].obj.pos.x + sp84[11].x, gBosses[0].obj.pos.y + sp84[11].y,
                                         gBosses[0].obj.pos.z + sp84[11].z, 7.0f);
                }
            } else if ((gGameFrameCount % 16) == 0) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199938, &sp84[9]);
                func_effect_8007D0E0(gBosses[0].obj.pos.x + sp84[9].x, gBosses[0].obj.pos.y + sp84[9].y,
                                     gBosses[0].obj.pos.z + sp84[9].z, 5.0f);
            }
        }

        if ((gBosses[3].state != 0) && (gBosses[2].state == 0) && ((gGameFrameCount % 16) == 0)) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199944, &sp84[10]);
            func_effect_8007D0E0(gBosses[0].obj.pos.x + sp84[10].x, gBosses[0].obj.pos.y + sp84[10].y,
                                 gBosses[0].obj.pos.z + sp84[10].z, 5.0f);
        }

        if (((this->state == 1) || (this->state == 2)) && ((gGameFrameCount % 8) == 0)) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[0], &sp84[6]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[1], &sp84[7]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_8019992C, &sp84[8]);

            func_effect_8007BC7C(sp84[6].x + this->obj.pos.x, sp84[6].y + this->obj.pos.y, sp84[6].z + this->obj.pos.z,
                                 20.0f);
            func_effect_8007BC7C(sp84[7].x + this->obj.pos.x, sp84[7].y + this->obj.pos.y, sp84[7].z + this->obj.pos.z,
                                 10.0f);
            func_effect_8007BC7C(sp84[8].x + this->obj.pos.x, sp84[8].y + this->obj.pos.y, sp84[8].z + this->obj.pos.z,
                                 10.0f);
        }

        if (this->timer_052 != 0) {
            Math_SmoothStepToF(&D_ctx_801779A8[0], 50.0f, 1.0f, 1.6f, 0.0001f);
        }

        switch (this->state) {
            case 0:
                this->fwork[3] = gPlayer[0].trueZpos + 1500.0f;

                if (this->timer_050 == 350) {
                    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 40);
                    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 40);
                    Radio_PlayMessage(gMsg_ID_2290, RCID_BOSS_CORNERIA2);
                }

                if (this->timer_050 == 180) {
                    Radio_PlayMessage(gMsg_ID_2298, RCID_PEPPY);
                    this->timer_052 = 350;
                }

                if (this->timer_050 == 0) {
                    this->obj.pos.y = 900.0f;
                    this->state = 1;
                    this->fwork[13] = 180.0f;
                    this->fwork[12] = 1.5f;
                    this->fwork[6] = 800.0f;
                    this->fwork[3] = gPlayer[0].cam.eye.z - gPathProgress - 2500.0f;
                    this->fwork[18] = -gArwingSpeed;
                    AUDIO_PLAY_BGM(NA_BGM_BOSS_A_CARRIER);
                    this->timer_050 = 40;
                }
                break;

            case 1:
                if (this->timer_050 == 0) {
                    this->state = 2;
                    this->fwork[8] = 0.0f;
                    this->fwork[13] = 359.9f;
                    this->timer_050 = 250;
                }
                break;

            case 2:
                if (this->timer_050 == 0) {
                    this->state = 3;
                    this->swork[0] = 4;
                    this->timer_050 = 75;
                    this->timer_054 = 0;
                    this->fwork[8] = 0.0f;
                    Radio_PlayMessage(gMsg_ID_2291, RCID_BOSS_CORNERIA2);
                    this->swork[4]++;
                }
                break;

            case 3:
                this->fwork[12] = 1.5f;
                this->fwork[11] = 0.0f;
                this->fwork[9] = 0.0f;
                this->fwork[10] = 0.0f;
                this->fwork[13] = 0.0f;

                if (this->timer_050 == 0) {
                    this->state = this->swork[0];
                    this->timer_050 = 60;
                    this->fwork[8] = 0.0f;
                    AUDIO_PLAY_SFX(NA_SE_EN_HATCH, this->sfxSource, 4);
                }
                break;

            case 4:
                this->fwork[11] = 120.0f;
                this->fwork[13] = 340.0f;

                if ((this->timer_050 == 0) || (gBosses[1].state != 0)) {
                    this->state = 3;
                    this->swork[0] = 5;
                    this->timer_050 = 20;
                    this->fwork[8] = 0.0f;

                    if (gBosses[CARRIER_1].state == 0) {
                        AUDIO_PLAY_SFX(NA_SE_EN_HATCH, this->sfxSource, 4);
                    }

                    if ((this->swork[5] == 0) && ((gBosses[CARRIER_2].state == 0) || (gBosses[CARRIER_3].state == 0))) {
                        Radio_PlayMessage(gMsg_ID_2292, RCID_BOSS_CORNERIA2);
                    }

                    this->swork[5]++;
                    this->swork[5] &= 3;

                } else if ((this->fwork[2] > 60.0f) && (this->timer_054 == 0)) {
                    this->timer_054 = 20;
                    Corneria_8018BDD4(this, sp84[0].x, sp84[0].y, sp84[0].z, 30.0f, 0, 1);
                }
                break;

            case 5:
                this->fwork[9] = 120.0f;
                this->fwork[10] = 120.0f;
                this->fwork[13] = 20.0f;

                if ((this->fwork[0] > 60.0f) && (gBosses[2].state == 0) && (this->swork[1] == 0)) {
                    Corneria_8018BDD4(this, sp84[1].x, sp84[1].y + 50.0f, sp84[1].z, 45.0f, 0, 0);
                    AUDIO_PLAY_SFX(NA_SE_EN_BARREL_SHOT, this->sfxSource, 4);
                    Corneria_8018BDD4(this, sp84[1].x, sp84[1].y - 50.0f, sp84[1].z, 40.0f, 0, 0);
                    this->swork[1] = 1;
                }

                if ((this->fwork[1] > 60.0f) && (gBosses[3].state == 0) && (this->swork[2] == 0)) {
                    Corneria_8018BDD4(this, sp84[2].x, sp84[2].y + 50.0f, sp84[2].z, 35.0f, 0, 0);
                    AUDIO_PLAY_SFX(NA_SE_EN_BARREL_SHOT, this->sfxSource, 4);
                    Corneria_8018BDD4(this, sp84[2].x, sp84[2].y - 50.0f, sp84[2].z, 30.0f, 0, 0);
                    this->swork[2] = 1;
                }

                if ((this->timer_050 == 0) || ((gBosses[3].state != 0) && (gBosses[2].state != 0))) {
                    this->state = 3;
                    this->swork[0] = 4;
                    this->timer_050 = 70;
                    this->swork[1] = 0;
                    this->swork[2] = 0;
                    this->fwork[8] = 0.0f;

                    if ((this->swork[4] == 0) && (gBosses[1].state == 0)) {
                        Radio_PlayMessage(gMsg_ID_2291, RCID_BOSS_CORNERIA2);
                    }

                    if ((this->swork[4] == 2) && (this->swork[7] == 0) &&
                        ((gBosses[3].state == 0) || (gBosses[2].state == 0) || (gBosses[1].state == 0))) {
                        Radio_PlayMessage(gMsg_ID_2299, RCID_PEPPY);
                        this->swork[7]++;
                    }

                    this->swork[4]++;
                    this->swork[4] &= 3;

                    if ((gBosses[3].state == 0) && (gBosses[2].state == 0)) {
                        AUDIO_PLAY_SFX(NA_SE_EN_HATCH, this->sfxSource, 4);
                    }
                }
                break;

            case 6:
                Math_SmoothStepToAngle(&this->obj.rot.y, this->fwork[13], 0.1f, 5.0f, 0.01f);
                Math_SmoothStepToAngle(&this->obj.rot.z, this->fwork[14], 0.1f, 5.0f, 0.01f);

                if ((this->obj.rot.y == 0.0f) || (this->timer_058 == 0)) {
                    this->timer_058 = 0;
                    this->state = 7;
                    this->obj.rot.z = 0.0f;
                    this->obj.rot.y = 0.0f;
                }
                break;

            case 7:
                this->fwork[3] = (gPlayer[0].cam.eye.z - gPathProgress) - 4000.0f;
                Math_SmoothStepToF(&this->obj.pos.z, this->fwork[3], 0.1f, 15.0f, 0.00001f);

                if (this->timer_058 == 0) {
                    this->timer_058 = D_i1_80199A4C[this->swork[3]];
                    this->fwork[20] = D_i1_80199A5C[this->swork[3]];
                    this->swork[3]++;
                    this->swork[3] &= 3;
                    this->fwork[8] = 0.0f;

                    if ((this->swork[3] != 1) || (this->swork[3] != 3)) {
                        Audio_KillSfxBySourceAndId(this->sfxSource, NA_SE_EN_ZOBOSS_BEAM);
                        this->swork[9] = 0;
                    }
                }

                if ((this->swork[3] == 0) || (this->swork[3] == 2)) {
                    if ((this->obj.rot.y < 20.0f) && (this->obj.rot.y > -20.0f)) {
                        if (this->swork[9] == 0) {
                            this->swork[9]++;
                            AUDIO_PLAY_SFX(NA_SE_EN_ZOBOSS_BEAM, this->sfxSource, 4);
                            if (this->swork[6] == 0) {
                                Radio_PlayMessage(gMsg_ID_2293, RCID_BOSS_CORNERIA2);
                            }
                            this->swork[6]++;
                            this->swork[6] &= 1;
                        }

                        if ((gGameFrameCount % 8) == 0) {
                            if (fabsf(this->obj.pos.z - gPlayer[0].trueZpos) > 700.0f) {

                                Matrix_MultVec3f(gCalcMatrix, &D_i1_801998F0[0], &sp84[3]);

                                for (effect398 = &gEffects[0], i = 0; i < ARRAY_COUNT(gEffects); i++, effect398++) {
                                    if (effect398->obj.status == OBJ_FREE) {
                                        Effect_Initialize(effect398);
                                        effect398->obj.status = OBJ_INIT;
                                        effect398->obj.id = OBJ_EFFECT_398;
                                        effect398->timer_50 = 100;
                                        effect398->unk_44 = 1;
                                        effect398->scale2 = 1.0f;
                                        effect398->obj.rot.z = 30.0f;
                                        effect398->obj.pos.x = sp84[3].x + this->obj.pos.x;
                                        effect398->obj.pos.y = sp84[3].y + this->obj.pos.y;
                                        effect398->obj.pos.z = sp84[3].z + this->obj.pos.z;
                                        Object_SetInfo(&effect398->info, effect398->obj.id);
                                        break;
                                    }
                                }

                                if (i >= 60) {
                                    effect398->obj.status = OBJ_FREE;
                                }
                            }
                        }
                    }
                }

                if (this->health < 2) {
                    gTeamLowHealthMsgTimer = -1;

                    Audio_KillSfxBySourceAndId(this->sfxSource, NA_SE_EN_ZOBOSS_BEAM);

                    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 40);
                    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 40);

                    AUDIO_PLAY_SFX(NA_SE_EN_DOWN_IMPACT, this->sfxSource, 4);

                    gScreenFlashTimer = 8;
                    gShowBossHealth = false;

                    Radio_PlayMessage(gMsg_ID_2294, RCID_BOSS_CORNERIA2);
                    this->health = 1;
                    this->timer_056 = 150;
                    this->state = 8;
                    this->fwork[19] = 15.0f;
                } else {
                    Math_SmoothStepToF(&this->fwork[8], 3.0f, 0.1f, 0.5f, 0.001f);
                    Math_SmoothStepToAngle(&this->obj.rot.z, this->fwork[14], 0.1f, 3.0f, 0.00001f);

                    temp_fv0_2 = Math_SmoothStepToF(&this->obj.rot.y, this->fwork[20], 0.1f, this->fwork[8], 0.00001f);
                    this->fwork[14] = 0.0f;
                    if (temp_fv0_2 < -1.0f) {
                        this->fwork[14] = 25.0f;
                    }
                    if (temp_fv0_2 > 1.0f) {
                        this->fwork[14] = 335.0f;
                    }

                    src.x = 0.0f;
                    src.y = 0.0f;
                    src.z = 40.0f;

                    Matrix_MultVec3f(gCalcMatrix, &src, &dest);

                    this->vel.x = dest.x;
                    this->vel.y = dest.y;
                    this->vel.z = dest.z - gPathVelZ;
                }
                break;

            case 8:
                D_ctx_801779A8[0] = 20.0f;

                if ((gGameFrameCount % 32) == 0) {
                    for (i = 0; i < 10; i++) {
                        func_effect_80079618(RAND_FLOAT_CENTERED(300.0f) + this->obj.pos.x, this->obj.pos.y,
                                             this->obj.pos.z, 1.0f);
                    }
                }

                Math_SmoothStepToF(&this->obj.pos.x, this->fwork[7], 1.0f, 10.0f, 0.00001f);
                Math_SmoothStepToF(&this->vel.x, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&this->vel.y, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&this->vel.z, 0.0f, 0.1f, 2.0f, 0.00001f);

                if (this->obj.rot.z == this->fwork[14]) {
                    if (this->fwork[14] == this->fwork[19]) {
                        this->fwork[14] = 360.0f - this->fwork[19];
                    } else {
                        this->fwork[14] = this->fwork[19];
                    }
                }

                Math_SmoothStepToAngle(&this->obj.rot.z, this->fwork[14], 1.0f, 1.0f, 0.001f);

                if (this->health != 0) {
                    if (this->timer_056 == 0) {
                        Boss_AwardBonus(this);
                        this->fwork[17] = 10.0f;
                        this->vel.y *= 1.5f;
                        gMissionStatus = MISSION_ACCOMPLISHED;

                        if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) ||
                            (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_U_TURN)) {
                            Boss_CompleteLevel(gPlayer, this->obj.pos.x, this->obj.pos.y, this->obj.pos.z);
                        }

                        this->health--;
                        this->fwork[8] = 0.0f;
                        Radio_PlayMessage(gMsg_ID_2296, RCID_BOSS_CORNERIA2);
                    } else {
                        Math_SmoothStepToF(&this->obj.rot.y, 0.0f, 0.1f, this->fwork[8], 0.00001f);
                        src.x = 0.0f;
                        src.y = 0.0f;
                        src.z = 20.0f;
                        Matrix_MultVec3f(gCalcMatrix, &src, &dest);
                        this->vel.x = dest.x;
                        this->vel.y = dest.y;
                        this->vel.z = dest.z - gPathVelZ;
                        if (this->timer_056 == 60) {
                            Radio_PlayMessage(gMsg_ID_2295, RCID_FOX);
                        }
                    }
                } else {
                    this->state = 9;
                }
                break;

            case 9:
                if ((gGameFrameCount % 16) == 0) {
                    for (i = 0; i < 10; i++) {
                        func_effect_80079618(RAND_FLOAT_CENTERED(300.0f) + this->obj.pos.x, this->obj.pos.y,
                                             this->obj.pos.z, 1.0f);
                    }
                }
                Math_SmoothStepToF(&this->vel.x, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&this->vel.y, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&this->vel.z, 0.0f, 0.1f, 2.0f, 0.00001f);

                this->obj.rot.z -= 2.0f;
                this->gravity = 1.0f;

                if (this->obj.pos.y < (gGroundHeight + 150.0f)) {
                    gCameraShake = 100;
                    func_effect_80081A8C(this->obj.pos.x, this->obj.pos.y, this->obj.pos.z, 40.0f, 12);
                    this->timer_050 = 20;
                    this->vel.y = -10.0f;
                    this->gravity = 0.0f;
                    this->fwork[17] = 20.0f;
                    Corneria_8018C0B0(this);
                    this->state = 10;
                }
                break;

            case 10:
                if ((gGameFrameCount % 8) == 0) {
                    for (i = 0; i < 10; i++) {
                        func_effect_80079618(RAND_FLOAT_CENTERED(300.0f) + this->obj.pos.x, this->obj.pos.y,
                                             this->obj.pos.z, 1.0f);
                    }
                }

                if (this->timer_050 == 0) {
                    func_effect_8007A568(this->obj.pos.x, this->obj.pos.y + 500.0f, this->obj.pos.z, 120.0f);
                    Object_Kill(&this->obj, this->sfxSource);
                }
                break;
        }

        temp_a0 = SEGMENTED_TO_VIRTUAL(D_CO_603E748);
        temp_a1 = SEGMENTED_TO_VIRTUAL(D_CO_603E7C4);
        temp_a0[9] = -100000.0f;
        temp_a0[3] = 172.0f;
        temp_a1[9] = -100000.0f;
        temp_a1[3] = -150.0f;

        if (this->fwork[0] > 60.0f) {
            temp_a0[3] = -100000.0f;
            temp_a0[9] = 543.0f;
        }

        if (this->fwork[1] > 60.0f) {
            temp_a1[3] = -100000.0f;
            temp_a1[9] = -557.0f;
        }

        this->fwork[16] = 4.0f;

        if ((this->swork[10] == 0) && (this->state < 6)) {
            this->fwork[17] = 1.8f;
            AUDIO_PLAY_SFX(NA_SE_EXPLOSION_DEMO6, this->sfxSource, 4);
            this->timer_058 = 71;
            this->state = 6;
            this->fwork[12] = 0.0f;
            this->fwork[8] = 0.0f;
            this->fwork[14] = 0.0f;
            this->fwork[13] = 0.0f;
        }

        if (gBossFrameCount == 430) {
            Radio_PlayMessage(gMsg_ID_2225, RCID_SLIPPY);
        }
        if (gBossFrameCount == 586) {
            gShowBossHealth = true;
        }
        if (gBossFrameCount >= 587) {
            gBossHealthBar = (this->health / 601.0f) * 255.0f;
        }
    }
}

static Vec3f D_i1_80199A6C = { -270.0f, 0.0f, 200.0f };
static Vec3f D_i1_80199A78 = { 440.0f, 0.0f, 0.0f };

void Corneria_Boss294_Update(Boss294* this) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (this->state) {
        case 0:
            if (this->dmgType != DMG_NONE) {
                this->dmgType = DMG_NONE;
                if (this->dmgPart == 0) {
                    if (this->fwork[2] > 60.0f) {
                        if (this->health != 0) {
                            this->timer_05C = 15;
                            this->health -= this->damage;
                            AUDIO_PLAY_SFX(NA_SE_OB_DAMAGE_M, this->sfxSource, 4);
                            if (this->health <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    Radio_PlayMessage(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    Radio_PlayMessage(gMsg_ID_7085, RCID_FALCO);
                                }

                                this->info.cullDistance = 300.0f;

                                gBosses[0].fwork[14] = 25.0f;
                                gBosses[0].fwork[15] = 0.0f;

                                AUDIO_PLAY_SFX(NA_SE_EN_PARTS_BROKEN, this->sfxSource, 4);

                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }
                                gBosses[0].timer_056 = 30;
                                this->state = 1;
                                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A6C, &sp4C);

                                for (i = 0; i < 10; i++) {
                                    func_effect_80079618(this->obj.pos.x + sp4C.x, this->obj.pos.y + sp4C.y,
                                                         this->obj.pos.z + sp4C.z, 1.0f);
                                }

                                if ((gBosses[2].state == 1) && (gBosses[3].state == 1)) {
                                    gBosses[0].fwork[14] = 335.0f;
                                }
                            }
                        }
                    }
                } else {
                    AUDIO_PLAY_SFX(NA_SE_EN_REFLECT, this->sfxSource, 4);
                }
            }
            this->obj.rot.x = gBosses[0].obj.rot.x;
            this->obj.rot.y = gBosses[0].obj.rot.y;
            this->obj.rot.z = gBosses[0].obj.rot.z;

            Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, MTXF_APPLY);
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_APPLY);

            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A78, &sp40);

            this->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            this->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            this->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;

            this->fwork[2] = gBosses[0].fwork[2];
            break;

        case 1:
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_NEW);
            gBosses[0].fwork[15] += 0.5f;

            if (((gGameFrameCount % 8) == 0) && (Rand_ZeroOne() < 0.5f)) {
                this->timer_05C = 4;
            }

            if ((gGameFrameCount % 2) == 0) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A6C, &sp4C);
                func_effect_8007C120(this->obj.pos.x + sp4C.x, this->obj.pos.y + sp4C.y, this->obj.pos.z + sp4C.z,
                                     this->vel.x, this->vel.y, this->vel.z, 0.2f, 10);
            }

            if (this->obj.pos.y < (gGroundHeight + 150.0f)) {
                if (this->swork[0] == 0) {
                    this->vel.y = -5.0f;
                    this->swork[0] = 1;
                    this->gravity = 0.0f;
                    Corneria_8018C0B0(this);
                    AUDIO_PLAY_SFX(NA_SE_OB_WATER_BOUND_M, this->sfxSource, 4);
                }
            } else {
                this->obj.rot.z -= 2.0f;
                this->gravity = 1.0f;
            }
            break;
    }
}

static Vec3f D_i1_80199A84 = { 20.0f, -90.0f, 0.0f };
static Vec3f D_i1_80199A90 = { -440.0f, 210.0f, 0.0f };

void Corneria_Boss295_Update(Boss295* this) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (this->state) {
        case 0:
            if (this->dmgType != DMG_NONE) {
                this->dmgType = DMG_NONE;
                if (this->dmgPart == 2) {
                    if (this->fwork[0] > 60.0f) {
                        if (this->health != 0) {
                            this->timer_05C = 15;
                            this->health -= this->damage;

                            AUDIO_PLAY_SFX(NA_SE_OB_DAMAGE_M, this->sfxSource, 4);

                            if (this->health <= 0) {
                                gBosses[0].swork[8]--;

                                if (gBosses[0].swork[8] != 0) {
                                    Radio_PlayMessage(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    Radio_PlayMessage(gMsg_ID_7085, RCID_FALCO);
                                }

                                this->info.cullDistance = 300.0f;

                                gBosses[0].fwork[15] = 0.0f;
                                gBosses[0].fwork[14] = 335.0f;
                                this->health = 0;

                                AUDIO_PLAY_SFX(NA_SE_EN_PARTS_BROKEN, this->sfxSource, 4);

                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }

                                gBosses[0].timer_056 = 30;
                                this->state = 1;

                                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A84, &sp4C);

                                for (i = 0; i < 10; i++) {
                                    func_effect_80079618(this->obj.pos.x + sp4C.x, this->obj.pos.y + sp4C.y,
                                                         this->obj.pos.z + sp4C.z, 1.0f);
                                }

                                if (gBosses[1].state == 1) {
                                    gBosses[0].fwork[14] = 25.0f;
                                }
                            }
                        }
                    }
                } else {
                    AUDIO_PLAY_SFX(NA_SE_EN_REFLECT, this->sfxSource, 4);
                }
            }
            this->obj.rot.x = gBosses[0].obj.rot.x;
            this->obj.rot.y = gBosses[0].obj.rot.y;
            this->obj.rot.z = gBosses[0].obj.rot.z;

            Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, MTXF_APPLY);
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_APPLY);

            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A90, &sp40);

            this->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            this->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            this->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;

            this->fwork[0] = gBosses[0].fwork[0];
            break;

        case 1:
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_NEW);
            gBosses[0].fwork[15] += 0.5f;

            if (((gGameFrameCount % 8) == 0) && (Rand_ZeroOne() < 0.5f)) {
                this->timer_05C = 4;
            }

            if ((gGameFrameCount % 2) == 0) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A84, &sp4C);
                func_effect_8007C120(this->obj.pos.x + sp4C.x, this->obj.pos.y + sp4C.y, this->obj.pos.z + sp4C.z,
                                     this->vel.x, this->vel.y, this->vel.z, 0.2f, 10);
            }

            if (this->obj.pos.y < (gGroundHeight + 150.0f)) {
                if (this->swork[0] == 0) {
                    this->vel.y = -5.0f;
                    this->swork[0] = 1;
                    this->gravity = 0.0f;
                    Corneria_8018C0B0(this);
                    AUDIO_PLAY_SFX(NA_SE_OB_WATER_BOUND_M, this->sfxSource, 4);
                }
            } else {
                this->obj.rot.z -= 2.0f;
                this->gravity = 1.0f;
            }
            break;
    }
}

static Vec3f D_i1_80199A9C = { 20.0f, 90.0f, 0.0f };
static Vec3f D_i1_80199AA8 = { -440.0f, -210.0f, 0.0f };

void Corneria_Boss296_Update(Boss296* this) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (this->state) {
        case 0:
            if (this->dmgType != DMG_NONE) {
                this->dmgType = DMG_NONE;
                if (this->dmgPart == 2) {
                    if (this->fwork[1] > 60.0f) {
                        if (this->health != 0) {
                            this->timer_05C = 15;
                            this->health -= this->damage;

                            AUDIO_PLAY_SFX(NA_SE_OB_DAMAGE_M, this->sfxSource, 4);

                            if (this->health <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    Radio_PlayMessage(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    Radio_PlayMessage(gMsg_ID_7085, RCID_FALCO);
                                }

                                this->info.cullDistance = 300.0f;

                                gBosses[0].fwork[15] = 0.0f;
                                gBosses[0].fwork[14] = 335.0f;

                                this->health = 0;

                                AUDIO_PLAY_SFX(NA_SE_EN_PARTS_BROKEN, this->sfxSource, 4);

                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }

                                gBosses[0].timer_056 = 30;
                                this->state = 1;
                                gBosses[0].fwork[6] = 500.0f;

                                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A9C, &sp4C);

                                for (i = 0; i < 10; i++) {
                                    func_effect_80079618(this->obj.pos.x + sp4C.x, this->obj.pos.y + sp4C.y,
                                                         this->obj.pos.z + sp4C.z, 1.0f);
                                }

                                if (gBosses[1].state == 1) {
                                    gBosses[0].fwork[14] = 25.0f;
                                }
                            }
                        }
                    }
                } else {
                    AUDIO_PLAY_SFX(NA_SE_EN_REFLECT, this->sfxSource, 4);
                }
            }
            this->obj.rot.x = gBosses[0].obj.rot.x;
            this->obj.rot.y = gBosses[0].obj.rot.y;
            this->obj.rot.z = gBosses[0].obj.rot.z;

            Matrix_RotateY(gCalcMatrix, this->obj.rot.y * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, this->obj.rot.x * M_DTOR, MTXF_APPLY);
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_APPLY);

            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199AA8, &sp40);

            this->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            this->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            this->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;

            this->fwork[1] = gBosses[0].fwork[1];
            break;

        case 1:
            Matrix_RotateZ(gCalcMatrix, this->obj.rot.z * M_DTOR, MTXF_NEW);

            gBosses[0].fwork[15] += 0.5f;

            if (((gGameFrameCount % 8) == 0) && (Rand_ZeroOne() < 0.5f)) {
                this->timer_05C = 4;
            }

            if ((gGameFrameCount % 2) == 0) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A9C, &sp4C);
                func_effect_8007C120(this->obj.pos.x + sp4C.x, this->obj.pos.y + sp4C.y, this->obj.pos.z + sp4C.z,
                                     this->vel.x, this->vel.y, this->vel.z, 0.2f, 10);
            }

            if (this->obj.pos.y < (gGroundHeight + 150.0f)) {
                if (this->swork[0] == 0) {
                    this->vel.y = -5.0f;
                    this->swork[0] = 1;
                    this->gravity = 0.0f;
                    Corneria_8018C0B0(this);
                    AUDIO_PLAY_SFX(NA_SE_OB_WATER_BOUND_M, this->sfxSource, 4);
                }
            } else {
                this->obj.rot.z -= 2.0f;
                this->gravity = 1.0f;
            }
            break;
    }
}

bool Corneria_Carrier_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    if ((limbIndex == 10) && (gBosses[2].state != 0) && (gBosses[3].state != 0)) {
        *dList = NULL;
    }
    if ((limbIndex != 12) && (limbIndex != 10)) {
        *dList = NULL;
    }
    return false;
}

void Corneria_Carrier_Draw(Carrier* this) {
    Animation_GetFrameData(&D_CO_602D400, 0, this->vwork);
    Animation_DrawSkeleton(1, aCoCarrierSkel, this->vwork, Corneria_Carrier_OverrideLimbDraw, NULL, &this->index,
                           &gIdentityMatrix);
}

bool Corneria_Boss294_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    if (limbIndex == 5) {
        rot->y -= gBosses[*(s32*) data].fwork[2];
    }
    if ((limbIndex != 6) && (limbIndex != 5)) {
        *dList = NULL;
    }
    return false;
}

void Corneria_Boss294_Draw(Boss294* this) {
    Matrix_Translate(gGfxMatrix, -D_i1_80199A78.x, -D_i1_80199A78.y, 0.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_CO_602D400, 0, this->vwork);
    Animation_DrawSkeleton(1, aCoCarrierSkel, this->vwork, Corneria_Boss294_OverrideLimbDraw, NULL, &this->index,
                           &gIdentityMatrix);
}

bool Corneria_Boss295_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    if (limbIndex == 1) {
        rot->z -= gBosses[*(s32*) data].fwork[0];
    }
    if ((limbIndex != 1) && (limbIndex != 2)) {
        *dList = NULL;
    }
    return false;
}

void Corneria_Boss295_Draw(Boss295* this) {
    Matrix_Translate(gGfxMatrix, -D_i1_80199A90.x, -D_i1_80199A90.y, 0.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_CO_602D400, 0, this->vwork);
    Animation_DrawSkeleton(1, aCoCarrierSkel, this->vwork, Corneria_Boss295_OverrideLimbDraw, NULL, &this->index,
                           &gIdentityMatrix);
}

bool Corneria_Boss296_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    if (limbIndex == 3) {
        rot->z -= gBosses[*(s32*) data].fwork[1];
    }
    if ((limbIndex != 3) && (limbIndex != 4)) {
        *dList = NULL;
    }
    return false;
}

void Corneria_Boss296_Draw(Boss296* this) {
    Matrix_Translate(gGfxMatrix, -D_i1_80199AA8.x, -D_i1_80199AA8.y, 0.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_CO_602D400, 0, this->vwork);
    Animation_DrawSkeleton(1, aCoCarrierSkel, this->vwork, Corneria_Boss296_OverrideLimbDraw, NULL, &this->index,
                           &gIdentityMatrix);
}

void Corneria_Doors_Update(CoDoors* scenery) {
    switch (scenery->state) {
        case 0:
            if (scenery->dmgType != DMG_NONE) {
                scenery->dmgType = DMG_NONE;
                if (scenery->dmgPart < 2) {
                    scenery->unk_44++;
                    scenery->timer_4C = 5;
                    scenery->vel.x += 2.0f;
                    scenery->vel.y += 2.0f;
                    if (scenery->unk_44 >= 3) {
                        scenery->state = 1;
                        scenery->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_CO_603E924);
                        AUDIO_PLAY_SFX(NA_SE_OB_GATE_OPEN, scenery->sfxSource, 0);
                    } else {
                        AUDIO_PLAY_SFX(NA_SE_EN_DAMAGE_S, scenery->sfxSource, 0);
                    }
                }
            }
            break;

        case 1:
            Math_SmoothStepToF(&scenery->vel.x, 80.0f, 0.2f, 10.0f, 0.0f);
            Math_SmoothStepToF(&scenery->vel.y, 80.0f, 0.2f, 10.0f, 0.0f);
            break;
    }
}

bool Corneria_Doors_OverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Scenery* scenery = (Scenery*) data;

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);

    switch (limbIndex) {
        case 1:
            rot->y -= scenery->vel.x;
            if ((scenery->timer_4C % 2) != 0) {
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            break;

        case 2:
            rot->y += scenery->vel.y;
            if ((scenery->timer_4C % 2) != 0) {
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            break;
    }
    return 0;
}

void Corneria_Doors_Draw(CoDoors* this) {
    Vec3f jointTable[10];

    Animation_GetFrameData(&D_CO_602AA7C, 0, jointTable);
    Animation_DrawSkeleton(3, aCoDoorsSkel, jointTable, Corneria_Doors_OverrideLimbDraw, NULL, this, gCalcMatrix);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void Corneria_8018F3BC(Scenery* scenery, f32 xPosOffset) {
    Scenery_Initialize(scenery);

    scenery->obj.status = OBJ_INIT;
    scenery->obj.pos.x = RAND_FLOAT_CENTERED(1000.0f) + xPosOffset;
    scenery->obj.rot.y = RAND_FLOAT(90.0f) + 45.0f;

    if (xPosOffset > 0.0f) {
        scenery->obj.rot.y *= -1.0f;
    }

    scenery->obj.pos.y = 0.0f;
    scenery->obj.id = OBJ_SCENERY_CO_BUMP_1;
    scenery->effectVel.z = 60.0f;
    Object_SetInfo(&scenery->info, scenery->obj.id);
    scenery->obj.pos.z = -2000.0f;
    scenery->info.cullDistance = 15000.0f;
}

// Unused, seems to be creating some terrain bumps during the intro cutscene.
void Corneria_8018F4A4(void) {
    s32 i;

    if (((gGameFrameCount % 16) == 0) && (gPlayer[0].csState >= 4)) {
        for (i = 0; i < ARRAY_COUNT(gScenery); i++) {
            if (gScenery[i].obj.status == OBJ_FREE) {
                Corneria_8018F3BC(&gScenery[i], 4000.0f);
                break;
            }
        }

        for (i = 0; i < ARRAY_COUNT(gScenery); i++) {
            if (gScenery[i].obj.status == OBJ_FREE) {
                Corneria_8018F3BC(&gScenery[i], -4000.0f);
                break;
            }
        }
    }
}

void Corneria_8018F55C(Effect352* this) {
    Effect_Initialize(this);
    this->obj.status = OBJ_INIT;
    this->obj.pos.x = gPlayer[0].cam.eye.x + RAND_FLOAT_CENTERED(500.0f);
    this->obj.pos.y = gPlayer[0].cam.eye.y + RAND_RANGE(-280.0f, 70.0f);
    this->obj.id = OBJ_EFFECT_352;
    this->timer_50 = 80;
    this->unk_46 = 144;
    this->obj.pos.z = -4000.0f;
    this->vel.z = 60.0f;
    this->scale2 = 10.0f + RAND_FLOAT(15.0f);

    if (Rand_ZeroOne() < 0.5f) {
        this->obj.rot.z = 180.0f;
    }

    Object_SetInfo(&this->info, this->obj.id);
}

void Corneria_8018F678(void) {
    s32 i;

    if (((gGameFrameCount % 32) == 0) && gPlayer[0].pos.x == 0.0f) {
        for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
            if (gEffects[i].obj.status == OBJ_FREE) {
                Corneria_8018F55C(&gEffects[i]);
                return;
            }
        }
    }
}

static f32 sCoLevelStartTeamXpos[3] = { 180.0f, -180.0f, 0.0f };

static f32 sCoLevelStartTeamYpos[3] = { 200.0f, 140.0f, 200.0f };

static f32 sCoLevelStartTeamZpos[3] = { 160.0f, 160.0f, 320.0f };

static f32 sCoLevelStartTeamZrot[3] = { -60.0f, 60.0f, -45.0f };

void Corneria_CsSFTeamUpdate(ActorCutscene* this, s32 teamIdx) {
    Actor_Initialize(this);
    this->obj.status = OBJ_INIT;
    this->obj.id = OBJ_ACTOR_CUTSCENE;

    this->obj.pos.x = (sCoLevelStartTeamXpos[teamIdx] * 4.0f) + gPlayer[0].pos.x;
    this->obj.pos.y = (sCoLevelStartTeamYpos[teamIdx] * 2.0f) + gPlayer[0].pos.y;
    this->obj.pos.z = (sCoLevelStartTeamZpos[teamIdx] * 3.0f) + gPlayer[0].trueZpos;

    this->vwork[20].x = sCoLevelStartTeamXpos[teamIdx] + gPlayer[0].pos.x;
    this->vwork[20].y = gPlayer[0].pos.y;
    this->vwork[20].z = sCoLevelStartTeamZpos[teamIdx] + gPlayer[0].trueZpos;

    this->obj.rot.z = sCoLevelStartTeamZrot[teamIdx];
    this->obj.rot.y = 180.0f;

    this->state = 100;
    this->fwork[0] = RAND_FLOAT(360.0f);

    Object_SetInfo(&this->info, this->obj.id);

    this->drawShadow = true;
    this->iwork[11] = 1;
    this->info.cullDistance = 200.0f;
    AUDIO_PLAY_SFX(NA_SE_ARWING_ENGINE_FG, this->sfxSource, 4);
}

void Corneria_LevelStart(Player* player) {
    s32 i;
    ActorCutscene* falco = &gActors[0];
    ActorCutscene* slippy = &gActors[1];
    ActorCutscene* peppy = &gActors[2];
    f32 sp44;
    f32 sp40;
    f32 x;
    f32 y;
    f32 z;
    f32 sp30;
    f32 sp2C;

    PRINTF("Enms[1].obj.mode %d\n", gActors[1].obj.status);

    if (gCsFrameCount < 815) {
        x = player->pos.x;
        y = player->pos.y + 15.0f;
        z = player->trueZpos - 20.0f;
    } else {
        if (gCsFrameCount < 1009) {
            x = falco->obj.pos.x;
            y = falco->obj.pos.y + 15.0f;
            z = falco->obj.pos.z - 20.0f;
        } else if (gCsFrameCount < 1198) {
            x = peppy->obj.pos.x;
            y = peppy->obj.pos.y + 15.0f;
            z = peppy->obj.pos.z - 20.0f;
        } else {
            x = slippy->obj.pos.x;
            y = slippy->obj.pos.y + 15.0f;
            z = slippy->obj.pos.z - 20.0f;
        }
    }

    sp2C = -Math_Atan2F(player->cam.eye.x - x, player->cam.eye.z - z);
    sp30 = -Math_Atan2F(player->cam.eye.y - y, sqrtf(SQ(player->cam.eye.z - z) + SQ(player->cam.eye.x - x)));

    sp44 = Math_RadToDeg(sp2C) - D_ctx_80177A48[4];
    sp40 = Math_RadToDeg(sp30) - D_ctx_80177A48[5];

    if (sp44 > 180.0f) {
        sp44 -= 360.0f;
    }
    if (sp44 < -180.0f) {
        sp44 += 360.0f;
    }
    if (sp40 > 180.0f) {
        sp40 -= 360.0f;
    }
    if (sp40 < -180.0f) {
        sp40 += 360.0f;
    }

    D_ctx_80177A48[6] += fabsf(sp44);
    D_ctx_80177A48[7] += fabsf(sp40);

    if (sp2C >= 0.0f) {
        Texture_Scroll(D_arwing_30184D8, 64, 32, 2);
        Texture_Scroll(D_arwing_30184D8, 64, 32, 2);
    } else {
        Texture_Scroll(D_arwing_30184D8, 64, 32, 3);
        Texture_Scroll(D_arwing_30184D8, 64, 32, 3);
    }

    for (i = 0; (i < 40 && D_ctx_80177A48[6] >= 0.2f); i++, D_ctx_80177A48[6] -= 0.2f) {
        if (sp44 >= 0) {
            Texture_Scroll(D_arwing_30184D8, 64, 32, 2);
        } else {
            Texture_Scroll(D_arwing_30184D8, 64, 32, 3);
        }
    }

    for (i = 0; ((i < 40) && (D_ctx_80177A48[7] >= 0.3f)); i++, D_ctx_80177A48[7] -= 0.3f) {
        if (sp40 >= 0) {
            Texture_Scroll(D_arwing_30184D8, 64, 32, 0);
        } else {
            Texture_Scroll(D_arwing_30184D8, 64, 32, 1);
        }
    }

    D_ctx_80177A48[4] = Math_RadToDeg(sp2C);
    D_ctx_80177A48[5] = Math_RadToDeg(sp30);

    player->flags_228 = 0;

    D_ctx_80177950 = -1.0f;
    if ((Math_RadToDeg(gPlayer[0].camYaw) < 90.0f) || (Math_RadToDeg(gPlayer[0].camYaw) > 270.0f)) {
        D_ctx_80177950 = 1.0f;
    }

    player->vel.z = 0.0f;
    player->pos.z = player->pos.z;
    player->trueZpos = player->pos.z + player->camDist;
    player->bobPhase += 10.0f;
    player->yBob = -SIN_DEG(player->bobPhase) * 0.5f;
    player->rockPhase += 3.0f;
    player->rockAngle = SIN_DEG(player->rockPhase) * 1.5f;

    Corneria_8018F678();

    player->wings.unk_30 = 0;

    switch (player->csState) {
        case 0:
            gCsFrameCount = 0;
            player->csState = 1;
            player->csTimer = 600;
            player->pos.y = 6000.0f;
            player->pos.x = 0.1f;

            Corneria_CsSFTeamUpdate(falco, 0);
            Corneria_CsSFTeamUpdate(slippy, 1);
            Corneria_CsSFTeamUpdate(peppy, 2);

            falco->iwork[14] = 2;
            slippy->iwork[14] = 3;
            peppy->iwork[14] = 4;

            player->cam.eye.x = gCsCamEyeX = player->pos.x - 400.0f;
            gPlayer[0].cam.eye.y = gCsCamEyeY = player->pos.y + 600.0f;
            player->cam.eye.z = gCsCamEyeZ = player->trueZpos + 2000.0f;

            player->cam.at.x = gCsCamAtX = player->pos.x;
            player->cam.at.y = gCsCamAtY = player->pos.y;
            player->cam.at.z = gCsCamAtZ = player->trueZpos + 300.0f;

            D_ctx_80177A48[0] = 0;
            D_ctx_80177A48[1] = D_ctx_80177A48[2] = 0;

            gFillScreenAlphaTarget = 255;
            gFillScreenAlpha = 255;
            gFillScreenRed = gFillScreenGreen = gFillScreenBlue = 255;
            break;

        case 1:
            if (player->csTimer < 550) {
                gFillScreenAlphaTarget = 0;
                gFillScreenAlphaStep = 3;
                Math_SmoothStepToF(&D_ctx_80177A48[0], 0.01f, 1.0f, 0.0005f, 0.0f);
            }

            gCsCamEyeX = player->pos.x - 150.0f;
            gCsCamEyeY = player->pos.y - 70.0f;
            gCsCamEyeZ = player->trueZpos + 150.0f;

            gCsCamAtX = player->pos.x;
            gCsCamAtY = player->pos.y;
            gCsCamAtZ = player->trueZpos;

            if (player->csTimer == 0) {
                player->csState = 2;
                player->csTimer = 130;
                D_ctx_80177A48[0] = 0.0f;
            }

            if (player->csTimer == 315) {
                player->pos.x = 0.0f;
            }

            if (player->csTimer == 270) {
                gHideRadio = false;
                Radio_PlayMessage(gMsg_ID_2005, RCID_FOX);
            }

            if (player->csTimer == 180) {
                AUDIO_PLAY_SFX(NA_SE_WING_OPEN, player->sfxSource, 0);
            }

            if (player->csTimer == 120) {
                AUDIO_PLAY_SFX(NA_SE_WING_OPEN_END, player->sfxSource, 0);
            }

            if ((player->csTimer < 190) && (player->csTimer > 150)) {
                Math_SmoothStepToF(&player->wings.unk_24, 2.0f, 0.2f, 0.5f, 0.0f);
            }

            if (player->csTimer < 150) {
                player->wingPosition = 0;
            }

            if ((player->csTimer < 120) && ((player->csTimer % 16) == 0)) {
                D_ctx_80177A48[1] = RAND_FLOAT_CENTERED(60.0f);
                D_ctx_80177A48[2] = RAND_FLOAT_CENTERED(60.0f);
            }

            if (player->csTimer == 0) {
                D_ctx_80177A48[1] = 0.0f;
                D_ctx_80177A48[2] = D_ctx_80177A48[1];
            }
            break;

        case 2:
            Math_SmoothStepToF(&D_ctx_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);

            gCsCamEyeX = player->pos.x - 50.0f;
            gCsCamEyeY = player->pos.y + 10.0f;
            gCsCamEyeZ = player->trueZpos - 10.0f;

            gCsCamAtX = player->pos.x;
            gCsCamAtY = player->pos.y + 10.0f;
            gCsCamAtZ = player->trueZpos + 10.0f;

            if (player->csTimer == 20) {
                Radio_PlayMessage(gMsg_ID_2010, RCID_FOX);
            }

            if (player->csTimer == 0) {
                player->csState = 3;
                player->csTimer = 180;
                player->unk_004 = 0.0f;
                falco->state = 0;
                peppy->state = 0;
                slippy->state = 0;
                falco->obj.pos.y = player->pos.y + 80.0f;
                falco->obj.pos.z += 100.0f;
            }

            if (gMsgCharIsPrinting && (gGameFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            break;

        case 3:
            if (fabsf(Math_SmoothStepToF(&falco->obj.pos.z, player->pos.z + 100.0f, 0.05f, 5.0f, 0.0f)) < 1.0f) {
                player->csState = 4;
                D_ctx_80177A48[0] = 0.0f;
                player->csTimer = 190;
            }

            if (gMsgCharIsPrinting && (gGameFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }

            gCsCamEyeY = player->pos.y + 10.0f;
            gCsCamAtY = player->pos.y + 10.0f;
            break;

        case 4:
            if (gMsgCharIsPrinting && (gGameFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }

            Math_SmoothStepToF(&D_ctx_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);

            gCsCamEyeX = falco->obj.pos.x - 50.0f;
            gCsCamEyeY = falco->obj.pos.y + 10.0f;
            gCsCamEyeZ = falco->obj.pos.z - 10.0f;

            gCsCamAtX = falco->obj.pos.x;
            gCsCamAtY = falco->obj.pos.y + 10.0f;
            gCsCamAtZ = falco->obj.pos.z + 10.0f;

            if (player->csTimer == 0) {
                player->csState = 5;
                player->csTimer = 5;
            }

            if (player->csTimer == 80) {
                Radio_PlayMessage(gMsg_ID_2020, RCID_FALCO);
            }

            if (player->csTimer < 100) {
                Math_SmoothStepToF(&falco->fwork[19], 50.0f, 0.1f, 3.0f, 0.01f);
            }

            falco->fwork[20] = 0.0f;

            if (gMsgCharIsPrinting && (gGameFrameCount & 2)) {
                falco->fwork[20] = 5.0f;
            }
            break;

        case 5:
            Math_SmoothStepToF(&falco->fwork[19], 0, 0.1f, 3.0f, 0.01f);

            if (player->csTimer == 0) {
                player->csState = 6;
                D_ctx_80177A48[0] = 0.0f;
                player->csTimer = 190;
            }

            gCsCamEyeY = falco->obj.pos.y + 10.0f;
            gCsCamAtY = falco->obj.pos.y + 10.0f;
            break;

        case 6:
            Math_SmoothStepToF(&falco->fwork[19], 0.0f, 0.1f, 3.0f, 0.01f);
            Math_SmoothStepToF(&D_ctx_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);

            D_ctx_80177A48[3] -= 0.5f;

            gCsCamEyeX = peppy->obj.pos.x + 100.0f + D_ctx_80177A48[3];
            gCsCamEyeY = peppy->obj.pos.y + 10.0f;
            gCsCamEyeZ = peppy->obj.pos.z - 70.0f;

            gCsCamAtX = peppy->obj.pos.x + 20.0f + (D_ctx_80177A48[3] * 0.5f);
            gCsCamAtY = peppy->obj.pos.y + 10.0f;
            gCsCamAtZ = peppy->obj.pos.z + 10.0f;

            if (player->csTimer == 0) {
                player->csState = 7;
                player->csTimer = 190;
                D_ctx_80177A48[0] = 0.0f;
                falco->obj.pos.y = player->pos.y;
                falco->obj.pos.z = player->trueZpos + 240.0f;
            }

            if (player->csTimer == 80) {
                Radio_PlayMessage(gMsg_ID_2030, RCID_PEPPY);
            }

            peppy->fwork[20] = 0.0f;

            if (gMsgCharIsPrinting && (gGameFrameCount & 2)) {
                peppy->fwork[20] = 5.0f;
            }
            break;

        case 7:
            Math_SmoothStepToF(&D_ctx_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);

            gCsCamEyeX = slippy->obj.pos.x + 20.0f;
            gCsCamEyeY = slippy->obj.pos.y + 10.0f;
            gCsCamEyeZ = slippy->obj.pos.z - 50.0f;

            gCsCamAtX = slippy->obj.pos.x + 10.0f;
            gCsCamAtY = slippy->obj.pos.y + 10.0f;
            gCsCamAtZ = slippy->obj.pos.z + 10.0f;

            if (player->csTimer == 0) {
                player->csState = 8;
                D_ctx_80177A48[0] = 0.0f;
                player->csTimer = 300;
                D_ctx_80177A48[8] = 50.0f;
                D_ctx_80177A48[3] = 0.0f;
            }

            if (player->csTimer == 80) {
                Radio_PlayMessage(gMsg_ID_2040, RCID_SLIPPY);
                player->pos.x = 0.1f;
            }

            if (player->csTimer < 100) {
                Math_SmoothStepToF(&slippy->fwork[19], -20.0f, 0.1f, 3.0f, 0.01f);
            }

            slippy->fwork[20] = 0.0f;

            if (gMsgCharIsPrinting && ((gGameFrameCount & 2) != 0)) {
                slippy->fwork[20] = 5.0f;
            }
            break;

        case 8:
            Math_SmoothStepToF(&D_ctx_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);

            if (player->csTimer < 150) {
                D_ctx_80177A48[3] += player->unk_004;
                Math_SmoothStepToF(&player->unk_004, 2.0f, 1.0f, 0.2f, 0.0f);
            }
            gCsCamEyeX = player->pos.x;
            gCsCamEyeZ = (player->trueZpos - 600.0f) + D_ctx_80177A48[3];
            gCsCamEyeY = player->pos.y + D_ctx_80177A48[8];

            gCsCamAtX = player->pos.x;
            gCsCamAtY = player->pos.y + 20.0f;
            gCsCamAtZ = player->trueZpos + 100.0f;

            if (player->csTimer < 100) {
                Math_SmoothStepToF(&D_ctx_80177A48[8], 10.0f, 0.1f, 0.7f, 0.0f);
            }

            if (player->csTimer == 200) {
                Radio_PlayMessage(gMsg_ID_2050, RCID_FOX);
            }

            player->wings.unk_30 = 0.0f;

            if (gMsgCharIsPrinting && ((gGameFrameCount & 2) != 0)) {
                player->wings.unk_30 = 5.0f;
            }

            if (player->csTimer == 80) {
                falco->fwork[29] = 5.0f;
            }

            if (player->csTimer == 60) {
                slippy->fwork[29] = 5.0f;
            }

            if (player->csTimer == 40) {
                peppy->fwork[29] = 5.0f;
            }

            if ((player->csTimer > 70) && (player->csTimer < 80)) {
                falco->iwork[11] = 2;
            }

            if ((player->csTimer > 50) && (player->csTimer < 60)) {
                slippy->iwork[11] = 2;
            }

            if ((player->csTimer > 30) && (player->csTimer < 40)) {
                peppy->iwork[11] = 2;
            }

            if (player->csTimer == 70) {
                falco->state = 1;
                Play_PlaySfxFirstPlayer(player->sfxSource, NA_SE_ARWING_BOOST);
            }

            if (player->csTimer == 50) {
                slippy->state = 2;
                Play_PlaySfxFirstPlayer(player->sfxSource, NA_SE_ARWING_BOOST);
            }

            if (player->csTimer == 30) {
                peppy->state = 3;
                Play_PlaySfxFirstPlayer(player->sfxSource, NA_SE_ARWING_BOOST);
            }

            if (player->csTimer == 0) {
                player->csState = 9;
                Play_PlaySfxFirstPlayer(player->sfxSource, NA_SE_ARWING_BOOST);
                player->csTimer = 3;
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
            }
            break;

        case 9:
            gCsCamEyeX = player->pos.x;
            gCsCamEyeY = player->pos.y;
            gCsCamEyeZ = player->trueZpos + 1000.0f;

            gCsCamAtX = player->pos.x;
            gCsCamAtY = player->pos.y;
            gCsCamAtZ = player->trueZpos + 1100.0f;

            D_ctx_80177A48[0] = 0.03f;

            player->unk_190 = 2.0f;

            if (player->csTimer == 0) {
                gFillScreenAlphaTarget = 255;
                gFillScreenAlphaStep = 48;
                gFillScreenRed = gFillScreenGreen = gFillScreenBlue = 255;
            }

            if (gFillScreenAlpha == 255) {
                AUDIO_PLAY_BGM(gBgmSeqId);

                Object_Kill(&falco->obj, falco->sfxSource);
                Object_Kill(&slippy->obj, slippy->sfxSource);
                Object_Kill(&peppy->obj, peppy->sfxSource);

                gLevelStartStatusScreenTimer = 80;

                player->pos.y = 350.0f;
                player->cam.eye.x = player->pos.x;
                player->cam.eye.y = (player->pos.y * player->unk_148) + 50.0f;
                player->cam.eye.z = 30.0f;
                player->state_1C8 = PLAYERSTATE_1C8_ACTIVE;
                player->csState = 0;
                player->cam.at.x = player->pos.x;
                player->cam.at.y = (player->pos.y * player->unk_148) + 20.0f;
                player->cam.at.z = player->trueZpos;

                D_ctx_80177950 = 1.0f;

                gPlayerGlareAlphas[0] = gPlayerGlareAlphas[1] = gPlayerGlareAlphas[2] = gPlayerGlareAlphas[3] = 0;
                gLoadLevelObjects = 1;
                gFillScreenAlphaTarget = 0;
                player->csTimer = 15;
            }
            break;

        case 10:
            break;
    }

    Math_SmoothStepToF(&player->cam.eye.x, gCsCamEyeX, D_ctx_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.eye.y, player->yBob + gCsCamEyeY, D_ctx_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.eye.z, gCsCamEyeZ, D_ctx_80177A48[0], 20000.0f, 0.0f);

    Math_SmoothStepToF(&player->cam.at.x, gCsCamAtX, D_ctx_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.at.y, gCsCamAtY - player->yBob, D_ctx_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.at.z, gCsCamAtZ, D_ctx_80177A48[0], 20000.0f, 0.0f);

    Math_SmoothStepToF(&player->wings.unk_04, D_ctx_80177A48[1], 0.2f, 1.0f, 0.0f);
    Math_SmoothStepToF(&player->wings.unk_0C, D_ctx_80177A48[2], 0.2f, 1.0f, 0.0f);

    player->wings.unk_08 = player->wings.unk_04;
    player->wings.unk_10 = player->wings.unk_0C;

    player->cam.eye.y -= 3.0f;
    player->cam.at.y -= 3.0f;
    player->pos.y -= 3.0f;

    falco->vwork[20].y -= 3.0f;
    falco->obj.pos.y -= 3.0f;
    peppy->vwork[20].y -= 3.0f;
    peppy->obj.pos.y -= 3.0f;
    slippy->vwork[20].y -= 3.0f;
    slippy->obj.pos.y -= 3.0f;
}

static f32 D_i1_80199AE4[3] = { -1500.0f, 700.0f, 0.0f };

static f32 D_i1_80199AF0[3] = { -300.0f, 400.0f, 500.0f };

static f32 D_i1_80199AFC[3] = { 500.0f, 800.0f, 1200.0f };

static f32 D_i1_80199B08[3] = { -150.0f, 150.0f, 0.0f };

static f32 D_i1_80199B14[3] = { 0.0f, 0.0f, 0.0f };

static f32 D_i1_80199B20[3] = { 200.0f, 200.0f, 400.0f };

static f32 D_i1_80199B2C[3] = { 180.0f, -120.0f, 180.0f };

void Corneria_80190F74(ActorCutscene* this, s32 index) {
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Player* player = &gPlayer[0];

    Matrix_RotateY(gCalcMatrix, player->rot.y * M_DTOR, MTXF_NEW);
    sp5C.x = D_i1_80199AE4[index];
    sp5C.y = D_i1_80199AF0[index];
    sp5C.z = D_i1_80199AFC[index];

    sp44.x = D_i1_80199B08[index];
    sp44.y = D_i1_80199B14[index];
    sp44.z = D_i1_80199B20[index];

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);

    Actor_Initialize(this);

    this->obj.pos.x = player->pos.x + sp50.x;
    this->obj.pos.y = player->pos.y + sp50.y;
    this->obj.pos.z = player->pos.z + sp50.z;

    this->fwork[0] = sp38.x;
    this->fwork[1] = sp38.y;
    this->fwork[2] = sp38.z;

    this->fwork[7] = RAND_FLOAT(360.0f);
    this->fwork[8] = RAND_FLOAT(360.0f);

    this->vel.x = player->vel.x;
    this->vel.y = player->vel.y;
    this->vel.z = player->vel.z;

    this->obj.status = OBJ_INIT;
    this->obj.id = OBJ_ACTOR_CUTSCENE;
    this->obj.rot.z = D_i1_80199B2C[index];

    Object_SetInfo(&this->info, this->obj.id);

    this->iwork[11] = 1;
    AUDIO_PLAY_SFX(NA_SE_ARWING_ENGINE_FG, this->sfxSource, 4);
}

void Corneria_LevelComplete1(Player* player) {
    Vec3f sp64;
    Vec3f sp58;
    f32 sp54;
    f32 var_fv1;
    f32 sp4C;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_deg;

    player->wings.unk_04 = player->wings.unk_0C = player->wings.unk_08 = player->wings.unk_10 = 0.0f;

    Math_SmoothStepToF(&player->zRotBarrelRoll, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->zRotBank, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->camRoll, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&player->aerobaticPitch, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&player->boostSpeed, 0.0f, 0.1f, 3.0f, 0.0f);

    if (player->csState >= 3) {
        player->cam.eye.y += 3.0f;
        player->cam.at.y += 3.0f;
        player->pos.y += 3.0f;
        gActors[0].obj.pos.y += 3.0f;
        gActors[1].obj.pos.y += 3.0f;
        gActors[2].obj.pos.y += 3.0f;
    }

    gBgColor = 0x845; // 8, 8, 32

    switch (player->csState) {
        case 0:
            Audio_StopSfxByBankAndSource(1, player->sfxSource);

            sp54 = player->cam.eye.x - D_i1_8019B6D8[62];
            sp4C = player->cam.eye.z - D_i1_8019B6D8[64];

            D_ctx_80177A48[0] = Math_RadToDeg(Math_Atan2F(sp54, sp4C));
            D_ctx_80177A48[1] = sqrtf(SQ(sp54) + SQ(sp4C));

            player->csState++;

            D_ctx_80177A48[5] = 0.0f;
            D_ctx_80177A48[4] = D_ctx_80177A48[5];
            D_ctx_80177A48[2] = D_ctx_80177A48[5];
            /* fallthrough */
        case 1:
            Math_SmoothStepToF(&player->rot.x, 0.0f, 0.1f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->pos.y, 400.0f, 0.05f, 3.0f, 0.0f);
            Math_SmoothStepToF(&D_ctx_80177A48[1], 1300.0f, 0.05f, 1000.0f, 0.0f);

            if (player->rot.y > 180.0f) {
                D_ctx_80177A48[0] += 0.5f;
            } else {
                D_ctx_80177A48[0] -= 0.5f;
            }

            Matrix_RotateY(gCalcMatrix, D_ctx_80177A48[0] * M_DTOR, MTXF_NEW);

            sp64.x = 0.0f;
            sp64.y = 0.0f;
            sp64.z = D_ctx_80177A48[1];

            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);

            Math_SmoothStepToF(&player->cam.eye.x, D_i1_8019B6D8[62] + sp58.x, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.eye.y, D_i1_8019B6D8[63] + 100.0f, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.eye.z, D_i1_8019B6D8[64] + sp58.z, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.x, D_i1_8019B6D8[62], 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.y, D_i1_8019B6D8[63], 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.z, D_i1_8019B6D8[64], 0.05f, 500.0f, 0.0f);

            temp_fa0 = player->pos.x - D_i1_8019B6D8[62];
            temp_fa1 = player->pos.z - D_i1_8019B6D8[64];

            if (gCsFrameCount < 30) {
                temp_deg = Math_RadToDeg(-Math_Atan2F(temp_fa0, temp_fa1));
                var_fv1 = Math_SmoothStepToAngle(&player->rot.y, temp_deg, 0.5f, 4.0f, 0.0001f) * 20.0f;
            } else {
                temp_deg = Math_RadToDeg(Math_Atan2F(temp_fa0, temp_fa1));
                var_fv1 = Math_SmoothStepToAngle(&player->rot.y, temp_deg, 0.5f, 2.0f, 0.0001f) * 30.0f;
            }

            Math_SmoothStepToAngle(&player->rot.z, var_fv1, 0.1f, 5.0f, 0.0001f);

            if (gCsFrameCount == 220) {
                player->csState++;
            }
            break;

        case 2:
            Math_SmoothStepToAngle(&player->rot.x, 20.0f, 0.1f, 0.5f, 0.0001f);
            Math_SmoothStepToAngle(&player->rot.z, 0.0f, 0.1f, 1.0f, 0.0001f);

            Math_SmoothStepToF(&D_ctx_80177A48[2], 0.05f, 1.0f, 0.005f, 0.0001f);

            Math_SmoothStepToF(&player->cam.at.x, player->pos.x, D_ctx_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.y, player->pos.y, D_ctx_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.z, player->pos.z, D_ctx_80177A48[2], 500.0f, 0.0f);

            if (gCsFrameCount == 350) {
                player->csState++;
                D_ctx_80177A48[2] = 0.0f;
                D_ctx_80177A48[3] = 0.05f;
            }
            break;

        case 3:
            if ((gCsFrameCount > 700) && (gCsFrameCount < 1000)) {
                func_demo_8004AA84();
            }
            Math_SmoothStepToAngle(&player->rot.x, 20.0f, 0.1f, 0.5f, 0);
            Math_SmoothStepToAngle(&player->rot.z, 0.0f, 0.1f, 1.0f, 0);

            Math_SmoothStepToF(&player->baseSpeed, 0.0f, 0.1f, 2.0f, 0.0f);

            Math_SmoothStepToF(&D_ctx_80177A48[2], 0.1f, 1.0f, 0.002f, 0);
            Math_SmoothStepToF(&D_ctx_80177A48[3], 0.1f, 1.0f, 0.002f, 0);

            Matrix_RotateY(gCalcMatrix, player->rot.y * M_DTOR, MTXF_NEW);
            Matrix_Push(&gCalcMatrix);
            Matrix_RotateY(gCalcMatrix, D_ctx_80177A48[5] * M_DTOR, MTXF_APPLY);

            sp64.x = 0.0f;
            sp64.y = -200.0f;
            sp64.z = 800.0f;

            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);

            Math_SmoothStepToF(&player->cam.eye.x, player->pos.x + sp58.x, D_ctx_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.eye.y, player->pos.y + sp58.y, D_ctx_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.eye.z, player->pos.z + sp58.z, D_ctx_80177A48[2], 500.0f, 0.0f);

            Matrix_Pop(&gCalcMatrix);

            sp64.x = 0.0f;
            sp64.y = 0;
            sp64.z = 150.0f;

            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);

            Math_SmoothStepToF(&player->cam.at.x, player->pos.x + sp58.x, D_ctx_80177A48[3], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.y, player->pos.y + sp58.y, D_ctx_80177A48[3], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.z, player->pos.z + sp58.z, D_ctx_80177A48[3], 500.0f, 0.0f);

            D_ctx_80177A48[5] += D_ctx_80177A48[4];

            if ((gCsFrameCount > 400) && (gCsFrameCount < 1000)) {
                Math_SmoothStepToF(&D_ctx_80177A48[4], 0.5f, 1.0f, 0.003f, 0);
            }
            if (gCsFrameCount > 1100) {
                Math_SmoothStepToF(&D_ctx_80177A48[4], 0.0f, 1.0f, 0.003f, 0);
            }
            if (gCsFrameCount == 1270) {
                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 50);
                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 50);
                AUDIO_PLAY_SFX(NA_SE_ARWING_BOOST, player->sfxSource, 0);
                player->csState++;
                player->baseSpeed = 2.0f;
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
            }
            break;

        case 4:
            if (gCsFrameCount >= 1270) {
                player->baseSpeed *= 1.2f;
                player->contrailScale += 0.04f;
                if (player->contrailScale > 0.6f) {
                    player->contrailScale = 0.6f;
                }
                player->unk_190 = 2.0f;
            }

            if (gCsFrameCount == 1290) {
                Audio_FadeOutAll(50);
            }

            if (gCsFrameCount > 1300) {
                gFillScreenAlphaTarget = 255;
                gFillScreenRed = gFillScreenGreen = gFillScreenBlue = 0;
                gFillScreenAlphaStep = 8;

                if (gFillScreenAlpha == 255) {
                    player->state_1C8 = PLAYERSTATE_1C8_NEXT;
                    player->csTimer = 0;
                    gFadeoutType = 4;
                    gLeveLClearStatus[gCurrentLevel] = Play_CheckMedalStatus(150) + 1;
                }
            }
            break;
    }

    switch (gCsFrameCount) {
        case 981:
            gShowLevelClearStatusScreen = 1;
            break;

        case 1181:
            gShowLevelClearStatusScreen = 0;
            break;

        case 240:
            AUDIO_PLAY_BGM(NA_BGM_COURSE_CLEAR);
            break;

        case 330:
            gLevelClearScreenTimer = 100;
            break;

        case 470:
            Play_ClearObjectData();
            if (gTeamShields[TEAM_ID_FALCO] > 0) {
                Corneria_80190F74(&gActors[0], 0);
            }
            if (gTeamShields[TEAM_ID_SLIPPY] > 0) {
                Corneria_80190F74(&gActors[1], 1);
            }
            if (gTeamShields[TEAM_ID_PEPPY] > 0) {
                Corneria_80190F74(&gActors[2], 2);
            }
            break;

        case 410:
            Radio_PlayMessage(gMsg_ID_2335, RCID_FOX);
            break;

        case 550:
            if ((gTeamShields[TEAM_ID_SLIPPY] == -1) || (gTeamShields[TEAM_ID_SLIPPY] == 0)) {
                Radio_PlayMessage(gMsg_ID_20333, RCID_ROB64);
            } else {
                Radio_PlayMessage(gMsg_ID_2300, RCID_SLIPPY);
            }
            break;

        case 682:
            if ((gTeamShields[TEAM_ID_PEPPY] == -1) || (gTeamShields[TEAM_ID_PEPPY] == 0)) {
                Radio_PlayMessage(gMsg_ID_20332, RCID_ROB64);
            } else {
                Radio_PlayMessage(gMsg_ID_2310, RCID_PEPPY);
            }
            break;

        case 816:
            if ((gTeamShields[TEAM_ID_FALCO] == -1) || (gTeamShields[TEAM_ID_FALCO] == 0)) {
                Radio_PlayMessage(gMsg_ID_20331, RCID_ROB64);
            } else {
                Radio_PlayMessage(gMsg_ID_2320, RCID_FALCO);
            }
            break;

        case 1150:
            if (gTeamShields[TEAM_ID_FALCO] > 0) {
                gActors[0].state = 1;
                gActors[0].fwork[9] = 2.0f;
                gActors[0].timer_0BC = 50;
                AUDIO_PLAY_SFX(NA_SE_ARWING_BOOST, gActors[0].sfxSource, 0);
                gActors[0].fwork[29] = 5.0f;
            }
            break;

        case 1190:
            if (gTeamShields[TEAM_ID_SLIPPY] > 0) {
                gActors[1].state = 1;
                gActors[1].fwork[9] = 2.0f;
                gActors[1].timer_0BC = 50;
                AUDIO_PLAY_SFX(NA_SE_ARWING_BOOST, gActors[1].sfxSource, 0);
                gActors[1].fwork[29] = 5.0f;
            }
            break;

        case 1230:
            if (gTeamShields[TEAM_ID_PEPPY] > 0) {
                gActors[2].state = 1;
                gActors[2].fwork[9] = 2.0f;
                gActors[2].timer_0BC = 50;
                AUDIO_PLAY_SFX(NA_SE_ARWING_BOOST, gActors[2].sfxSource, 0);
                gActors[2].fwork[29] = 5.0f;
            }
            break;
    }

    Matrix_RotateY(gCalcMatrix, (player->rot.y + 180.0f) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, -((player->rot.x + player->aerobaticPitch) * M_DTOR), MTXF_APPLY);

    sp64.x = 0.0f;
    sp64.y = 0.0f;
    sp64.z = player->baseSpeed + player->boostSpeed;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp64, &sp58);

    player->vel.x = sp58.x;
    player->vel.z = sp58.z;
    player->vel.y = sp58.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->trueZpos = player->pos.z;
    player->bankAngle = player->rot.z + player->zRotBank + player->zRotBarrelRoll;
    player->bobPhase += 10.0f;
    player->yBob = -SIN_DEG(player->bobPhase) * 0.3f;
    player->rockPhase += 8.0f;
    player->rockAngle = SIN_DEG(player->rockPhase);
}

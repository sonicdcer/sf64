#include "global.h"

s32 gBossFrameCount;

s32 gBossBgms[] = {
    NA_BGM_BOSS_CO, NA_BGM_BOSS_ME, NA_BGM_BOSS_SX, NA_BGM_BOSS_A6, NA_BGM_BOSS_SB, NA_BGM_BOSS_SY, NA_BGM_BOSS_VE,
    NA_BGM_BOSS_SO, NA_BGM_BOSS_ZO, NA_BGM_BOSS_VE, NA_BGM_BOSS_CO, NA_BGM_BOSS_MA, NA_BGM_BOSS_TI, NA_BGM_BOSS_AQ,
};

s32 PAD_boss_C9EC4[14] = { 0 };

const f32 D_boss_800D55D0[] = { 6000.0f, 18000.0f, -6000.0f, -18000.0f }; // unused?

void Boss_AwardBonus(Boss* this) {
    s32 bonus;
    f32 yOffset;

    if (gBossFrameCount < 3840) {
        bonus = 10;
    } else if (gBossFrameCount < 5760) {
        bonus = 5;
    } else if (gBossFrameCount < 7680) {
        bonus = 2;
    } else if (gBossFrameCount < 9600) {
        bonus = 1;
    } else {
        bonus = 0;
    }

    if (bonus != 0) {
        yOffset = 0.0f;
        if (this->obj.id == OBJ_BOSS_CO_GRANGA) {
            yOffset = 300.0f;
        } else if (this->obj.id == OBJ_BOSS_TI_GORAS) {
            yOffset = 200.0f;
        }
        BonusText_Display(this->obj.pos.x, this->obj.pos.y + yOffset, this->obj.pos.z, bonus);
    }

    gHitCount += bonus + 1;
    D_ctx_80177850 = 15;
}

void Boss299_Init(Boss299* this) {
    /* Unimplemented */
}

void Boss299_Update(Boss299* this) {
    /* Unimplemented */
}

void Boss299_Draw(Boss299* this) {
    /* Unimplemented */
}

void Boss300_Init(Boss300* this) {
    /* Unimplemented */
}

void Boss300_Update(Boss300* this) {
    /* Unimplemented */
}

void Boss300_Draw(Boss300* this) {
    /* Unimplemented */
}

void Boss_SetupDebris(ActorDebris* this, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, f32 xVel, f32 yVel,
                      f32 zVel, f32 scale, s32 state, s32 time) {
    Actor_Initialize(this);
    this->obj.status = OBJ_INIT;
    this->obj.id = OBJ_ACTOR_DEBRIS;
    this->state = state;
    this->obj.pos.x = xPos;
    this->obj.pos.y = yPos;
    this->obj.pos.z = zPos;
    this->obj.rot.x = xRot;
    this->obj.rot.y = yRot;
    this->obj.rot.z = zRot;
    this->vel.x = xVel;
    this->vel.y = yVel;
    this->vel.z = zVel;
    this->scale = scale;
    this->timer_0BC = time;
    this->timer_0BE = 20;
    Object_SetInfo(&this->info, this->obj.id);
    if (gLevelType == LEVELTYPE_PLANET) {
        this->gravity = 0.5f;
    }
}

void Boss_SpawnDebris(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, f32 xVel, f32 yVel, f32 zVel,
                      f32 scale, s32 state, s32 time) {
    s32 i;

    for (i = (ARRAY_COUNT(gActors)) - 1; i >= 0; i--) {
        if (gActors[i].obj.status == OBJ_FREE) {
            Boss_SetupDebris(&gActors[i], xPos, yPos, zPos, xRot, yRot, zRot, xVel, yVel, zVel, scale, state, time);
            break;
        }
    }
}

void Boss_SetCullDistance(Boss* this) {
    this->info.cullDistance = 30000.0f;
}

void Boss_CompleteLevel(Player* player, f32 xPos, f32 yPos, f32 zPos) {
    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 80);
    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 80);

    gCsFrameCount = 0;
    gBossDeathCamAtZ = zPos + gPathProgress;
    gBossDeathCamAtX = xPos;
    gBossDeathCamAtY = yPos;

    player->state = PLAYERSTATE_LEVEL_COMPLETE;
    player->csState = 10;
    player->csTimer = 50;
    player->csEventTimer = 50;

    player->unk_000 = 0.0f;
    player->unk_004 = 1.0f;

    if (player->pos.x < player->xPath) {
        player->unk_004 = -1.0f;
    }

    gPlayer[0].vel.x = 0.0f;
}

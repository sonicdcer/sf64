#include "global.h"

typedef void (*BossSOfunc)(Boss*);

typedef enum {
    /*  0 */ SO_SWK_0,
    /*  1 */ SO_SWK_1,
    /*  2 */ SO_SWK_2,
    /*  3 */ SO_SWK_3,
    /*  4 */ SO_SWK_4,
    /*  5 */ SO_SWK_5,
    /*  6 */ SO_SWK_6,
    /*  7 */ SO_SWK_7,
    /*  8 */ SO_SWK_8,
    /*  9 */ SO_SWK_9,
    /* 10 */ SO_SWK_10,
    /* 11 */ SO_SWK_11,
    /* 12 */ SO_SWK_12,
    /* 13 */ SO_SWK_13,
    /* 14 */ SO_SWK_14,
    /* 15 */ SO_SWK_15,
    /* 16 */ SO_SWK_16,
    /* 17 */ SO_SWK_17,
    /* 18 */ SO_SWK_18,
    /* 19 */ SO_SWK_19,
    /* 20 */ SO_SWK_20,
    /* 21 */ SO_SWK_21,
    /* 22 */ SO_SWK_22,
    /* 23 */ SO_SWK_23,
    /* 24 */ SO_SWK_24,
    /* 25 */ SO_SWK_25,
    /* 26 */ SO_SWK_26,
    /* 27 */ SO_SWK_27,
    /* 28 */ SO_SWK_28,
    /* 29 */ SO_SWK_29,
    /* 30 */ SO_SWK_30,
    /* 31 */ SO_SWK_31,
    /* 32 */ SO_SWK_32,
    /* 33 */ SO_SWK_33,
    /* 34 */ SO_SWK_34,
    /* 35 */ SO_SWK_35,
    /* 36 */ SO_SWK_36,
    /* 37 */ SO_SWK_37,
    /* 38 */ SO_SWK_38,
    /* 39 */ SO_SWK_39,
    /* 40 */ SO_SWK_MAX,
} BossSOswork;

typedef enum {
    /*  0 */ SO_FWK_0,
    /*  1 */ SO_FWK_1,
    /*  2 */ SO_FWK_2,
    /*  3 */ SO_FWK_3,
    /*  4 */ SO_FWK_4,
    /*  5 */ SO_FWK_5,
    /*  6 */ SO_FWK_6,
    /*  7 */ SO_FWK_7,
    /*  8 */ SO_FWK_8,
    /*  9 */ SO_FWK_9,
    /* 10 */ SO_FWK_10,
    /* 11 */ SO_FWK_11,
    /* 12 */ SO_FWK_12,
    /* 13 */ SO_FWK_13,
    /* 14 */ SO_FWK_14,
    /* 15 */ SO_FWK_15,
    /* 16 */ SO_FWK_16,
    /* 17 */ SO_FWK_17,
    /* 18 */ SO_FWK_18,
    /* 19 */ SO_FWK_19,
    /* 20 */ SO_FWK_20,
    /* 21 */ SO_FWK_21,
    /* 22 */ SO_FWK_22,
    /* 23 */ SO_FWK_23,
    /* 24 */ SO_FWK_24,
    /* 25 */ SO_FWK_25,
    /* 26 */ SO_FWK_26,
    /* 27 */ SO_FWK_27,
    /* 28 */ SO_FWK_28,
    /* 29 */ SO_FWK_29,
    /* 30 */ SO_FWK_30,
    /* 31 */ SO_FWK_31,
    /* 32 */ SO_FWK_32,
    /* 33 */ SO_FWK_33,
    /* 34 */ SO_FWK_34,
    /* 35 */ SO_FWK_35,
    /* 36 */ SO_FWK_36,
    /* 37 */ SO_FWK_37,
    /* 38 */ SO_FWK_38,
    /* 39 */ SO_FWK_39,
    /* 40 */ SO_FWK_40,
    /* 41 */ SO_FWK_41,
    /* 42 */ SO_FWK_42,
    /* 43 */ SO_FWK_43,
    /* 44 */ SO_FWK_44,
    /* 45 */ SO_FWK_45,
    /* 46 */ SO_FWK_46,
    /* 47 */ SO_FWK_47,
    /* 48 */ SO_FWK_48,
    /* 49 */ SO_FWK_49,
    /* 50 */ SO_FWK_MAX,
} BossSOfwork;

typedef enum {
    /*  0 */ SO_VWK_0,
    /*  1 */ SO_VWK_1,
    /*  2 */ SO_VWK_2,
    /*  3 */ SO_VWK_3,
    /*  4 */ SO_VWK_4,
    /*  5 */ SO_VWK_5,
    /*  6 */ SO_VWK_6,
    /*  7 */ SO_VWK_7,
    /*  8 */ SO_VWK_8,
    /*  9 */ SO_VWK_9,
    /* 10 */ SO_VWK_10,
    /* 11 */ SO_VWK_11,
    /* 12 */ SO_VWK_12,
    /* 13 */ SO_VWK_13,
    /* 14 */ SO_VWK_14,
    /* 15 */ SO_VWK_15,
    /* 16 */ SO_VWK_16,
    /* 17 */ SO_VWK_17,
    /* 18 */ SO_VWK_18,
    /* 19 */ SO_VWK_19,
    /* 20 */ SO_VWK_20,
    /* 21 */ SO_VWK_21,
    /* 22 */ SO_VWK_22,
    /* 23 */ SO_VWK_23,
    /* 24 */ SO_VWK_24,
    /* 25 */ SO_VWK_25,
    /* 26 */ SO_VWK_26,
    /* 27 */ SO_VWK_27,
    /* 28 */ SO_VWK_28,
    /* 29 */ SO_VWK_29,
    /* 30 */ SO_VWK_30,
    /* 31 */ SO_VWK_31,
    /* 32 */ SO_VWK_32,
    /* 33 */ SO_VWK_33,
    /* 34 */ SO_VWK_34,
    /* 35 */ SO_VWK_35,
    /* 36 */ SO_VWK_36,
    /* 37 */ SO_VWK_37,
    /* 38 */ SO_VWK_38,
    /* 39 */ SO_VWK_39,
    /* 40 */ SO_VWK_40,
    /* 41 */ SO_VWK_41,
    /* 42 */ SO_VWK_42,
    /* 43 */ SO_VWK_43,
    /* 44 */ SO_VWK_44,
    /* 45 */ SO_VWK_45,
    /* 46 */ SO_VWK_46,
    /* 47 */ SO_VWK_47,
    /* 48 */ SO_VWK_48,
    /* 49 */ SO_VWK_49,
    /* 50 */ SO_VWK_MAX,
} BossSOvwork;

void func_i3_801A1F80(Boss* bossSO);
void func_i3_801A23F4(Boss* bossSO);
void func_i3_801A2C98(Boss* bossSO);
void func_i3_801A3128(Boss* bossSO);
void func_i3_801A3510(Boss* bossSO);
void func_i3_801A4214(Boss* bossSO);
void func_i3_801A4A34(Boss* bossSO);
void func_i3_801A4EF8(Boss* bossSO);
void func_i3_801A56B8(Boss* bossSO);

void func_i3_801A239C(Boss* bossSO);
void func_i3_801A2C3C(Boss* bossSO);
void func_i3_801A3468(Boss* bossSO);
void func_i3_801A48B8(Boss* bossSO);
void func_i3_801A4EC0(Boss* bossSO);
void func_i3_801A8DB8(Vec3f* arg0, u32 arg1, f32 arg2);

void func_i3_8019FAA4(Boss* bossSO, Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 yVel, f32 arg6);
void func_i3_8019FF44(Boss* bossSO, f32 xPos, f32 yPos, f32 zPos, f32 yVel, f32 arg6);
void func_i3_801A1EB0(Boss* bossSO, f32, f32, f32, f32);
void func_i3_801A3C4C(Boss* bossSO);

s32 D_i3_801C2740[10];
f32 D_i3_801C2768[14];
s32 D_i3_801C27A0[8]; // unused? part of previous?

void func_i3_8019E7F0(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 scale2);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019E7F0.s")

void func_i3_8019E8B8(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019E8B8.s")

void func_i3_8019E920(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale2,
                      s32 unk4E) {
    Effect_Initialize(effect);
    effect->obj.status = 2;
    effect->obj.id = 392;
    effect->unk_4E = unk4E;
    if (unk4E == 2) {
        effect->timer_50 = 30;
        effect->unk_4C = 3;
    }
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->vel.x = xVel;
    effect->vel.y = yVel;
    effect->vel.z = zVel;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    effect->unk_44 = 176;
    effect->scale2 = scale2;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i3_8019E9F4(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale2, s32 unk4E) {
    s32 i;

    for (i = 99; i >= 34; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i3_8019E920(&gEffects[i], xPos, yPos, zPos, xVel, yVel, zVel, scale2, unk4E);
            break;
        }
    }
}

// OBJ_ACTOR_278 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019EA7C.s")

void func_i3_8019EF30(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019EF30.s")

void func_i3_8019F038(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F038.s")

void func_i3_8019F0B0(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F0B0.s")

void func_i3_8019F194(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F194.s")

f32 D_i3_801BF8E0[4] = { 10.0f, 6.0f, -6.0f, -10.0f };
Vec3f D_i3_801BF8F0[4] = {
    { 10.0f, 7.0f, 0.0f },
    { -10.0f, 7.0f, 0.0f },
    { 7.0f, 10.0f, 0.0f },
    { -7.0f, 10.0f, 0.0f },
};
// OBJ_ACTOR_275, 276, 277 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F20C.s")

// OBJ_ACTOR_275, 276, 277 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F7AC.s")

void func_i3_8019F99C(Actor* actor, Effect* effect, f32 scale1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F99C.s")

Vec3f D_i3_801BF920 = { 0.0f, 0.0f, 0.0f };
void func_i3_8019FAA4(Boss* bossSO, Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 yVel, f32 arg6) {
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C = D_i3_801BF920;

    Effect_Initialize(effect);
    effect->obj.status = 2;
    effect->obj.id = OBJ_EFFECT_392;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->vel.y = yVel;
    effect->vel.x = 0.0f;
    effect->scale2 = 10.0f;

    if (gBossHealthBar != 0) {
        if (gBosses[0].fwork[31] > 0.0f) {
            if (gBosses[0].swork[0] != 7) {
                Matrix_RotateY(gCalcMatrix, gBosses[0].obj.rot.y * 0.017453292f, 0);
                sp44.y = 0.0f;
                sp44.z = 0.0f;
                sp44.x = gBosses[0].fwork[31] * 5.0f;
                Matrix_MultVec3f(gCalcMatrix, &sp44, &sp38);
                effect->vel.x = sp38.x * arg6;
                effect->vel.z = gPlayer[0].vel.z + (sp38.z * arg6);
            } else {
                Matrix_RotateZ(gCalcMatrix, bossSO->obj.rot.z * 0.017453292f, 0);
                Matrix_RotateX(gCalcMatrix, gBosses[0].obj.rot.x * 0.017453292f, 1);
                Matrix_RotateY(gCalcMatrix, gBosses[0].unk_078.y * 0.017453292f, 1);
                sp44.x = effect->obj.pos.x - bossSO->obj.pos.x;
                sp44.y = effect->obj.pos.y - bossSO->obj.pos.y;
                sp44.z = effect->obj.pos.z - bossSO->obj.pos.z;
                Matrix_MultVec3f(gCalcMatrix, &sp44, &sp38);
                effect->obj.pos.x = bossSO->obj.pos.x + sp38.x;
                effect->obj.pos.y = bossSO->obj.pos.y + sp38.y;
                effect->obj.pos.z = bossSO->obj.pos.z + sp38.z;
                effect->vel.z = gPlayer[0].vel.z;
                effect->vel.y = yVel;
                if (gBosses[0].actionState >= 2) {
                    effect->scale2 = 15.0f;
                }
            }
        } else {
            effect->vel.z = gPlayer[0].vel.z;
        }
    } else {
        effect->vel.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
        effect->vel.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
    }
    effect->unk_60.y = bossSO->obj.rot.y;
    effect->unk_60.x = 90.0f;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    effect->unk_44 = 255;
    effect->unk_48 = 1;
    effect->unk_4E = 4;
    effect->unk_4C = 5;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i3_8019FDE0(Boss* bossSO, Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 unk4E);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019FDE0.s")

void func_i3_8019FEE8(Actor* actor, f32 scale1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019FEE8.s")

void func_i3_8019FF44(Boss* bossSO, f32 xPos, f32 yPos, f32 zPos, f32 yVel, f32 arg6) {
    s32 i;

    for (i = 70; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i3_8019FAA4(bossSO, &gEffects[i], xPos, yPos, zPos, yVel, arg6);
            break;
        }
    }
}

void func_i3_8019FFC0(Boss* bossSO, f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 unk4E);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019FFC0.s")

// OBJ_ACTOR_279 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A003C.s")

// OBJ_EFFECT_392 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0120.s")

Gfx* D_i3_801BF92C[6] = {
    D_200B630, D_200A5A0, D_2009510, D_60084C0, D_6008D40, D_6007C40,
};
Gfx* D_i3_801BF944[6] = {
    D_601B790, D_601B790, D_601A700, D_6019670, D_60185E0, D_6017550,
};
Vec3f D_i3_801BF95C[3] = {
    { 0.0f, 30.0f, 480.0f },
    { -180.0f, 0.0f, 240.0f },
    { 180.0f, 0.0f, 240.0f },
};
// OBJ_EFFECT_392 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0AF0.s")

void func_i3_801A0CEC(Actor*, f32 xPos, f32 zPos, f32 f1, s32 unkB8);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0CEC.s")

void func_i3_801A0D90(f32 xPos, f32 zPos, f32 f1, s32 unkB8);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0D90.s")

void func_i3_801A0DF8(f32 xPos, f32 yPos, f32 zPos, s32 arg3, f32 index);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0DF8.s")

void func_i3_801A0FD4(Actor* actor, s32 index);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0FD4.s")

void func_i3_801A10F4(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A10F4.s")

void func_i3_801A1CD8(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, f32 xVel, f32 yVel,
                      f32 zVel, s32 unk46);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A1CD8.s")

void func_i3_801A1E14(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, f32 xVel, f32 yVel, f32 zVel,
                      s32 unk46);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A1E14.s")

void func_i3_801A1EB0(Boss* bossSO, f32 xPos, f32 xOffset, f32 yPos, f32 zPos) {
    func_i3_8019E9F4(xPos + xOffset, yPos, zPos, 20.0f, (Rand_ZeroOne() * 10.0f) + 20.0f, 0.0f, 20.0f, 1);
    func_i3_8019E9F4(xPos - xOffset, yPos, zPos, -20.0f, (Rand_ZeroOne() * 10.0f) + 20.0f, 0.0f, 20.0f, 1);
}

void func_i3_801A1F80(Boss* bossSO) {
    if (D_80178284 != 0) {
        bossSO->unk_3F8 = 5.5f;
    }
    if (bossSO->health == 0) {
        func_800182F4(0x101400FF);
        func_800182F4(0x111400FF);
        D_80178284 = 1;
        gBossFrameCount = 0;
        bossSO->health = 600;

        bossSO->unk_3F8 = 0.1f;
        bossSO->fwork[0] = 1.0f;
        bossSO->swork[2] = bossSO->swork[3] = 400;

        bossSO->obj.pos.y = -3000.0f;

        func_i3_801A0CEC(&gActors[10], bossSO->obj.pos.x, bossSO->obj.pos.z + 2000.0f, 20.0f, 1);
        D_801779A8[gMainController] = 10.0f;
        D_80178480 = 120;
        bossSO->fwork[3] = 2400.0f;
        bossSO->info.hitbox = SEGMENTED_TO_VIRTUAL(D_60231A4);
        bossSO->unk_04C = 0;
        bossSO->swork[1] = 0;
        bossSO->info.hitbox[8] = bossSO->info.hitbox[12] = bossSO->info.hitbox[14] = bossSO->info.hitbox[18] =
            bossSO->info.hitbox[20] = bossSO->info.hitbox[24] = bossSO->info.hitbox[26] = bossSO->info.hitbox[30] =
                bossSO->info.hitbox[32] = bossSO->info.hitbox[36] = bossSO->info.hitbox[38] = bossSO->info.hitbox[42] =
                    220.0f;
        bossSO->info.hitbox[10] = bossSO->info.hitbox[28] = 467.5f;
        bossSO->info.hitbox[16] = bossSO->info.hitbox[34] = 247.5f;
        bossSO->info.hitbox[22] = bossSO->info.hitbox[40] = 715.0f;

        D_i3_801C2740[0] = 255;
        D_i3_801C2740[1] = 255;
        D_i3_801C2768[3] = D_i3_801C2768[2] = D_i3_801C2768[4] = D_i3_801C2768[5] = D_i3_801C2768[6] =
            D_i3_801C2768[7] = D_i3_801C2768[8] = D_i3_801C2768[9] = D_i3_801C2768[10] = D_i3_801C2768[11] =
                D_i3_801C2768[12] = D_i3_801C2768[13] = 0.0f;
    }
    gActors[10].obj.pos.z = bossSO->obj.pos.z + 2000.0f;
    Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 30.0f, 0.1f);
    if (gFogRed > 96) {
        gFogRed--;
    }
    if (gFogGreen > 96) {
        gFogGreen--;
    }
    if (gFogBlue > 64) {
        gFogBlue--;
    }
    if (gBossFrameCount == 30) {
        func_8001D444(0U, 0x801B, 0U, 0xFF);
    }
    if (gBossFrameCount <= 60) {
        Math_SmoothStepToF(&D_801779A8[gMainController], 120.0f, 1.0f, 3.5f, 0.0f);
    }
    if (gBossFrameCount == 60) {
        gActors[10].unk_0D0 = 3;
        Audio_PlaySfx(0x19036053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if (bossSO->timer_050 == 100) {
        bossSO->unk_04C = 0;
        bossSO->swork[1] = 1;
    }
    if (gBossFrameCount == 150) {
        func_i3_801A239C(bossSO);
        bossSO->fwork[0] = 0.01f;
    }
    if ((gBossFrameCount == 100) && (gTeamShields[3] != 0)) {
        func_800BA808(gMsg_ID_10300, RCID_PEPPY);
    }
}

void func_i3_801A239C(Boss* bossSO) {
    bossSO->swork[0] = 1;
    if ((bossSO->swork[2] != 0) || (bossSO->swork[3] != 0)) {
        if (bossSO->swork[3] != 0) {
            bossSO->swork[1] = 3;
        } else {
            bossSO->swork[1] = 4;
        }
    } else {
        bossSO->swork[1] = 7;
    }
    bossSO->unk_04C = 0;
}

void func_i3_801A23F4(Boss* bossSO) {
    s32 i;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;

    switch (bossSO->swork[1]) {
        case 3:
            if ((bossSO->unk_04C == 119) || (bossSO->swork[3] == 0)) {
                bossSO->unk_04C = 0;
                if (bossSO->swork[2] != 0) {
                    if (Rand_ZeroOne() >= 0.5f) {
                        bossSO->swork[1] = 4;
                    } else {
                        bossSO->swork[1] = 2;
                        bossSO->actionState = 0;
                        bossSO->unk_078.y = 0.0f;
                    }
                } else if (bossSO->swork[3] == 0) {
                    bossSO->swork[1] = 7;
                } else {
                    bossSO->swork[1] = 5;
                }
            }
            if (bossSO->unk_04C >= 28) {
                bossSO->info.hitbox[38] = 715.0f;
                bossSO->info.hitbox[40] = 440.0f;
                bossSO->info.hitbox[42] = 110.0f;
            }
            if (bossSO->unk_04C == 29) {
                func_8005F0E8(&bossSO->sfxPos, &bossSO->obj.pos);
                Audio_PlaySfx(0x19035053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 80) {
                Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C >= 94) {
                bossSO->info.hitbox[38] = 220.0f;
                bossSO->info.hitbox[40] = 715.0f;
                bossSO->info.hitbox[42] = 220.0f;
            }
            break;
        case 4:
            if ((bossSO->unk_04C == 99) || (bossSO->swork[2] == 0)) {
                bossSO->unk_04C = 0;
                if ((bossSO->swork[3] != 0) || (bossSO->swork[2] != 0)) {
                    bossSO->swork[1] = 5;
                } else {
                    bossSO->swork[1] = 7;
                }
            }
            if (bossSO->unk_04C > 20) {
                bossSO->info.hitbox[20] = 715.0f;
                bossSO->info.hitbox[22] = 110.0f;
                bossSO->info.hitbox[24] = 275.0f;
            }
            if (bossSO->unk_04C == 10) {
                func_8005F0E8(&bossSO->sfxPos, &bossSO->obj.pos);
                Audio_PlaySfx(0x19035053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 50) {
                Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C >= 85) {
                bossSO->info.hitbox[20] = 220.0f;
                bossSO->info.hitbox[22] = 715.0f;
                bossSO->info.hitbox[24] = 220.0f;
            }
            break;
        case 5:
            bossSO->fwork[3] = 2600.0f;
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 1.5f, 1.0f);
            if (bossSO->unk_04C == 65) {
                Matrix_RotateX(gCalcMatrix, D_i3_801C2768[0] * 0.017453292f, 0U);
                Matrix_RotateY(gCalcMatrix, D_i3_801C2768[1] * 0.017453292f, 1U);
                sp40.x = 0.0f;
                sp40.y = -200.0f;
                sp40.z = 1100.0f;
                Matrix_MultVec3f(gCalcMatrix, &sp40, &sp34);
                for (i = 0; i < 4; i++) {
                    sp58.x = D_i3_801BF8F0[i].x + (2.0f * (Rand_ZeroOne() - 0.5f));
                    sp58.y = 2.0f * (Rand_ZeroOne() - 0.5f);
                    sp58.z = (Rand_ZeroOne() * 10.0f) + 2.5f;
                    Matrix_MultVec3f(gCalcMatrix, &sp58, &sp4C);
                    func_i3_8019F038(bossSO->fwork[4] + sp34.x, bossSO->fwork[5] + sp34.y, bossSO->fwork[6] + sp34.z,
                                     sp4C.x, sp4C.y, sp4C.z);
                }
            }
            if (bossSO->unk_04C == 99) {
                if ((bossSO->swork[2] != 0) || (bossSO->swork[3] != 0)) {
                    func_i3_801A2C3C(bossSO);
                } else {
                    func_i3_801A4EC0(bossSO);
                }
            }
            break;
        case 7:
            if (bossSO->unk_04C < 50) {
                if (bossSO->fwork[0x1F] < 22.0f) {
                    bossSO->fwork[0x1F] += 0.5f;
                }
                bossSO->obj.rot.y += bossSO->fwork[0x1F];
            }
            if ((bossSO->unk_04C >= 50) && (bossSO->unk_04C <= 100)) {
                if (bossSO->fwork[0x1F] > 0.0f) {
                    bossSO->fwork[0x1F] -= 0.5f;
                }
                bossSO->obj.rot.y += bossSO->fwork[0x1F];
            }
            if (bossSO->obj.rot.y >= 360.0f) {
                bossSO->obj.rot.y -= 360.0f;
                Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 1) {
                Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C >= 100) {
                Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 2.0f, 1.0f);
                bossSO->fwork[0x1F] = 0.0f;
            }
            if (bossSO->unk_04C == 120) {
                bossSO->swork[1] = 5;
                bossSO->unk_04C = 0;
                bossSO->fwork[0] = 0.1f;
            }
            break;
        case 2:
            if (((bossSO->unk_04C == 89) && (bossSO->actionState == 2)) || (bossSO->swork[2] == 0)) {
                bossSO->unk_04C = 0;
                if ((bossSO->swork[3] != 0) || (bossSO->swork[2] != 0)) {
                    bossSO->swork[1] = 5;
                } else {
                    bossSO->swork[1] = 7;
                }
            }
            if (bossSO->unk_04C == 80) {
                bossSO->unk_078.y += 15.0f;
                bossSO->actionState++;
                if (bossSO->unk_078.y >= 30.0f) {
                    bossSO->unk_078.y = 0.0f;
                }
            }
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, bossSO->unk_078.y, 1.0f, 1.5f, 1.0f);
            if (bossSO->unk_04C >= 19) {
                bossSO->info.hitbox[20] = 715.0f;
                bossSO->info.hitbox[22] = 440.0f;
                bossSO->info.hitbox[24] = 110.0f;
            }
            if (bossSO->unk_04C == 5) {
                func_8005F0E8(&bossSO->sfxPos, &bossSO->obj.pos);
                Audio_PlaySfx(0x19035053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 20) {
                Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C > 36) {
                bossSO->info.hitbox[20] = 220.0f;
                bossSO->info.hitbox[22] = 715.0f;
                bossSO->info.hitbox[24] = 220.0f;
            }
            break;
    }
}

void func_i3_801A2C3C(Boss* bossSO) {
    bossSO->swork[0] = 2;
    bossSO->swork[1] = 0;
    bossSO->fwork[0] = 0.05f;
    bossSO->unk_04C = Animation_GetFrameCount(&D_601388C) - 2;
    bossSO->actionState = 0;
    bossSO->swork[0xB] = 15;
}

void func_i3_801A2C98(Boss* bossSO) {
    s32 i;

    if (bossSO->swork[0xB] != 0) {
        bossSO->swork[0xB]--;
    }
    if (bossSO->actionState == 0) {
        if (bossSO->swork[0xB] == 0) {
            bossSO->unk_04C -= 2;
            Math_SmoothStepToF(&bossSO->obj.pos.y, -1000.0f, 0.1f, 10.0f, 0.1f);
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, 181.0f, 1.0f, 3.0f, 1.0f);
            if (bossSO->unk_04C == 50) {
                func_i3_801A0CEC(&gActors[10], bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
                D_80137E84[gMainController] = 1;
                D_Timer_80177BD0[gMainController] = 70;
            }
            if (bossSO->unk_04C == 60) {
                for (i = 0; i < 4; i++) {
                    func_i3_8019F038(bossSO->obj.pos.x + 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f,
                                     D_i3_801BF8F0[i].x + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     D_i3_801BF8F0[i].y + 10.0f + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     (Rand_ZeroOne() * -10.0f) - 10.0f);
                    func_i3_8019F038(bossSO->obj.pos.x - 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f,
                                     D_i3_801BF8F0[i].x + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     D_i3_801BF8F0[i].y + 10.0f + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     (Rand_ZeroOne() * -10.0f) - 10.0f);
                }
            }
            if (bossSO->unk_04C == 20) {
                gActors[10].unk_0D0 = 3;
                Audio_PlaySfx(0x19036054U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 0) {
                bossSO->actionState++;
                bossSO->swork[0xB] = 100;
                bossSO->obj.pos.y = -500.0f;
                bossSO->fwork[3] = 4800.0f;
                bossSO->obj.pos.z = gPlayer->unk_138 - bossSO->fwork[3];
                bossSO->obj.rot.y = -bossSO->obj.rot.y;
            }
        } else {
            bossSO->unk_04C = Animation_GetFrameCount(&D_601388C) - 2;
        }
    } else {
        Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 1.5f, 1.0f);
        if (bossSO->swork[0xB] == 80) {
            func_i3_801A0CEC(&gActors[9], bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
        }
        if (bossSO->swork[0xB] == 0) {
            bossSO->swork[0xB] = 220;
        }
        if (bossSO->swork[0xB] == 210) {
            bossSO->unk_04C = 0;
            bossSO->swork[1] = 1;
            bossSO->fwork[0] = 0.05f;
        }
        if (bossSO->swork[0xB] >= 100) {
            Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
        }
        if (bossSO->swork[0xB] == 150) {
            func_i3_801A3468(bossSO);
        }
        if (bossSO->swork[0xB] == 50) {
            gActors[9].unk_0D0 = 3;
            Audio_PlaySfx(0x19036053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i3_801A30CC(Boss* bossSO) {
    bossSO->swork[0] = 3;
    bossSO->swork[1] = 0;
    bossSO->fwork[0] = 0.1f;
    bossSO->unk_04C = Animation_GetFrameCount(&D_601388C) - 2;
    bossSO->actionState = 0;
    bossSO->swork[11] = 15;
}

void func_i3_801A3128(Boss* bossSO) {
    if (bossSO->swork[0xB] != 0) {
        bossSO->swork[0xB]--;
    }
    if (bossSO->actionState == 0) {
        if (bossSO->swork[0xB] == 0) {
            bossSO->unk_04C -= 2;
            Math_SmoothStepToF(&bossSO->obj.pos.y, -1000.0f, 0.1f, 10.0f, 0.1f);
            if (bossSO->unk_04C == 50) {
                func_i3_801A0CEC(&gActors[10], bossSO->obj.pos.x, bossSO->obj.pos.z + 2000.0f, 10.0f, 1);
            }
            if (bossSO->unk_04C == 40) {
                gActors[10].unk_0D0 = 3;
                Audio_PlaySfx(0x19036054U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 0) {
                bossSO->actionState++;
                bossSO->swork[0xB] = 100;
                bossSO->obj.pos.y = -500.0f;
                bossSO->fwork[3] = 2400.0f;
                bossSO->obj.pos.z = gPlayer->unk_138 - 2100.0f;
            }
        } else {
            bossSO->unk_04C = Animation_GetFrameCount(&D_601388C) - 2;
        }
    } else {
        if (bossSO->swork[0xB] == 80) {
            func_i3_801A0CEC(&gActors[9], bossSO->obj.pos.x, bossSO->obj.pos.z + 850.0f, 20.0f, 1);
            D_80137E84[gMainController] = 1;
            D_Timer_80177BD0[gMainController] = 70;
            D_i3_801C2740[2]++;
            if (D_i3_801C2740[2] & 1) {
                if (D_i3_801C2740[2] & 2) {
                    if (gTeamShields[3] > 0) {
                        func_800BA808(gMsg_ID_20317, RCID_PEPPY);
                    }
                } else {
                    if (gTeamShields[1] > 0) {
                        func_800BA808(gMsg_ID_20271, RCID_FALCO);
                    }
                }
            }
        }
        if (bossSO->swork[0xB] == 0) {
            bossSO->swork[0xB] = 220;
        }
        if (bossSO->swork[0xB] == 210) {
            bossSO->unk_04C = 0;
            bossSO->swork[1] = 1;
        }
        if (bossSO->swork[0xB] >= 100) {
            Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 20.0f, 0.1f);
        }
        if (bossSO->swork[0xB] == 150) {
            func_i3_801A239C(bossSO);
            bossSO->fwork[0] = 0.01f;
            if ((Rand_ZeroOne() >= 0.4f) && (gTeamShields[3] > 0) && (bossSO->swork[2] != 0) &&
                (bossSO->swork[3] != 0)) {
                func_800BA808(gMsg_ID_10320, RCID_PEPPY);
            }
        }
        if (bossSO->swork[0xB] == 50) {
            gActors[9].unk_0D0 = 3;
            Audio_PlaySfx(0x19036053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i3_801A3468(Boss* bossSO) {
    bossSO->swork[0] = 4;
    bossSO->unk_048 = 0;
    if ((bossSO->swork[2] != 0) || (bossSO->swork[3] != 0)) {
        if (bossSO->swork[3] != 0) {
            bossSO->swork[1] = 3;
        } else {
            bossSO->swork[1] = 4;
        }
    } else {
        if (Rand_ZeroOne() >= 0.5f) {
            bossSO->unk_048 = 1;
            bossSO->swork[1] = 5;
        } else {
            bossSO->timer_050 = 0;
            bossSO->swork[1] = 8;
        }
    }
    bossSO->unk_04C = 0;
    bossSO->fwork[0] = 0.01f;
}

void func_i3_801A3510(Boss* bossSO) {
    s32 i;

    switch (bossSO->swork[1]) {
        case 3:
            if ((bossSO->unk_04C == 119) || (bossSO->swork[3] == 0)) {
                bossSO->unk_04C = 0;
                if (bossSO->swork[2] != 0) {
                    bossSO->swork[1] = 4;
                } else {
                    bossSO->swork[1] = 5;
                }
            }
            if (bossSO->unk_04C == 29) {
                func_8005F0E8(&bossSO->sfxPos, &bossSO->obj.pos);
                Audio_PlaySfx(0x19035053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 80) {
                Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 94) {
                func_i3_801A0DF8(bossSO->fwork[0xD], bossSO->fwork[0xF], (Rand_ZeroOne() - 0.5f) * 60.0f, 4, 2.0f);
                bossSO->timer_050 = 90;
            }
            break;
        case 4:
            if ((bossSO->unk_04C == 99) || (bossSO->swork[2] == 0)) {
                bossSO->unk_04C = 0;
                bossSO->swork[1] = 5;
            }
            Math_SmoothStepToAngle(&bossSO->obj.rot.x, 20.0f, 0.1f, 10.0f, 0.1f);
            if (bossSO->unk_04C == 10) {
                func_8005F0E8(&bossSO->sfxPos, &bossSO->obj.pos);
                Audio_PlaySfx(0x19035053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 50) {
                Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk_04C == 60) {
                func_i3_801A0D90(bossSO->obj.pos.x, bossSO->obj.pos.z + 1600.0f, 80.0f, 2);
                D_80137E84[gMainController] = 1;
                D_Timer_80177BD0[gMainController] = 100;
            }
            break;
        case 5:
            Math_SmoothStepToAngle(&bossSO->obj.rot.x, 0.0f, 0.1f, 10.0f, 0.1f);
            if (bossSO->unk_04C == 65) {
                for (i = 0; i < 4; i++) {
                    func_i3_8019F194(bossSO->obj.pos.x, bossSO->obj.pos.y + 300.0f, bossSO->obj.pos.z + 1000.0f,
                                     D_i3_801BF8F0[i].x + ((Rand_ZeroOne() - 0.5f) * 0.25f),
                                     D_i3_801BF8F0[i].y + ((Rand_ZeroOne() - 0.5f) * 0.25f),
                                     (Rand_ZeroOne() * 10.0f) + 100.0f);
                }
            }
            if ((bossSO->unk_048 != 0) && (bossSO->unk_04C == 68)) {
                bossSO->swork[1] = 9;
                bossSO->fwork[0] = 0.01f;
                bossSO->unk_04C = 20;
            }
            if (bossSO->unk_04C == 99) {
                func_i3_801A30CC(bossSO);
            }
            break;
        case 8:
            if (bossSO->unk_04C == 65) {
                Audio_PlaySfx(0x31033078U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                bossSO->timer_050 = 30;
            }
            if (bossSO->timer_050 != 0) {
                bossSO->unk_04C = 65;
            }
            if ((bossSO->unk_04C == 65) && !(gFrameCount & 1)) {
                func_i3_8019FFC0(bossSO, bossSO->fwork[4], bossSO->fwork[5] - 100.0f, bossSO->fwork[6] + 600.0f,
                                 (bossSO->timer_050 * 0.2f) + 4.0f, 0);
                func_i3_801A1EB0(bossSO, bossSO->fwork[4], 25.0f, bossSO->fwork[5] - 100.0f, bossSO->fwork[6] + 300.0f);
            }
            if (bossSO->unk_04C == 75) {
                func_8001A55C(&bossSO->sfxPos, 0x31033078U);
            }
            if (bossSO->unk_04C == 99) {
                bossSO->swork[1] = 5;
                bossSO->unk_04C = 0;
            }
            break;
        case 9:
            bossSO->unk_04C++;
            if (bossSO->unk_04C == 66) {
                Audio_PlaySfx(0x31033078U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                bossSO->timer_050 = 30;
            }
            if (bossSO->timer_050 != 0) {
                bossSO->unk_04C = 66;
            }
            if ((bossSO->unk_04C == 66) && !(gFrameCount & 1)) {
                func_i3_8019FFC0(bossSO, bossSO->fwork[4] + 125.0f, bossSO->fwork[5] - 100.0f,
                                 bossSO->fwork[6] + 600.0f, (bossSO->timer_050 * 0.2f) + 4.0f, 1);
                func_i3_8019FFC0(bossSO, bossSO->fwork[4] - 125.0f, bossSO->fwork[5] - 100.0f,
                                 bossSO->fwork[6] + 600.0f, (bossSO->timer_050 * 0.2f) + 4.0f, 2);
                func_i3_801A1EB0(bossSO, bossSO->fwork[4], 25.0f, bossSO->fwork[5] - 100.0f, bossSO->fwork[6] + 300.0f);
            }
            if (bossSO->unk_04C == 76) {
                func_8001A55C(&bossSO->sfxPos, 0x31033078U);
            }
            if (bossSO->unk_04C >= 99) {
                func_i3_801A30CC(bossSO);
            }
            break;
    }
    if (bossSO->timer_050 == 0) {
        Object_Kill(&gActors[6].obj, &gActors[6].sfxPos);
    } else {
        Math_SmoothStepToF(&gActors[6].obj.pos.x, gPlayer->pos.x, 0.1f, 10.0f, 0.1f);
    }
}

void func_i3_801A3C4C(Boss* bossSO) {
    s32 i;

    if ((bossSO->swork[2] == 0) && (bossSO->swork[3] == 0) && ((bossSO->dmgPart == 8) || (bossSO->dmgPart == -1))) {
        bossSO->health -= bossSO->damage;
        if (bossSO->health < 0) {
            bossSO->health = 0;
        }

        bossSO->swork[10] = 20;
        if (bossSO->health > 0.0f) {
            Audio_PlaySfx(0x29433074U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO) {}
    }
    bossSO->timer_058 = 20;
    if ((bossSO->dmgPart >= 1) && (bossSO->dmgPart <= 3) && (bossSO->swork[2] != 0)) {
        Audio_PlaySfx(0x29433074U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        bossSO->swork[2] -= bossSO->damage;
        if (bossSO->swork[2] < 0) {
            bossSO->swork[2] = 0;
        }
        if (bossSO->swork[2] == 0) {
            for (i = 0; i < 6; i++) {
                bossSO->info.hitbox[7 + i] = bossSO->info.hitbox[13 + i] = bossSO->info.hitbox[19 + i] = 0.0f;
            }
            bossSO->swork[2] = -1;
            func_i3_801A48B8(bossSO);
        } else {
            bossSO->swork[8] = 20;
        }
    }
    if ((bossSO->dmgPart >= 4) && (bossSO->dmgPart <= 6) && (bossSO->swork[3] != 0)) {
        Audio_PlaySfx(0x29433074, &bossSO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        bossSO->swork[3] -= bossSO->damage;
        if (bossSO->swork[3] < 0) {
            bossSO->swork[3] = 0;
        }
        if (bossSO->swork[3] == 0) {
            for (i = 0; i < 6; i++) {
                bossSO->info.hitbox[25 + i] = bossSO->info.hitbox[31 + i] = bossSO->info.hitbox[37 + i] = 0.0f;
            }
            bossSO->swork[3] = -1;
            func_i3_801A48B8(bossSO);
        } else {
            bossSO->swork[9] = 20;
        }
    }
    if (bossSO->health <= 0) {
        bossSO->unk_04C = 21;
        bossSO->actionState = 0;
        bossSO->swork[1] = 1;
        bossSO->fwork[0] = 0.01f;
        bossSO->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800CBF34);
        bossSO->timer_058 = 20000;
        D_8017796C = -1;
        D_80178348 = D_80178350 = D_80178354 = D_80178340 = 255;
        // 255;

        // 255;
        D_80178358 = 0;
        D_8017835C = 255;
        D_80177A80 = 0;
        D_80137E84[gMainController] = 1;
        D_Timer_80177BD0[gMainController] = 10;
        func_800182F4(0x100100FF);
        func_800182F4(0x110100FF);
        func_8001A838(0x4100C023U);
        Audio_PlaySfx(0x2940D09AU, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) {
            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer[0].timer_1F8 = 0;
            gPlayer[0].unk_1D0 = gPlayer[0].timer_1F8;
            gPlayer[0].unk_0E8 += gPlayer[0].unk_114;
            if (gPlayer[0].unk_0E8 > 360.0f) {
                gPlayer[0].unk_0E8 -= 360.0f;
            }
            if (gPlayer[0].unk_0E8 < 0.0f) {
                gPlayer[0].unk_0E8 += 360.0f;
            }
            gPlayer[0].unk_114 = 0.0f;
        }
        bossSO->fwork[31] = 0.0f;
        bossSO->fwork[3] = 2400.0f;
        func_800BA808(gMsg_ID_15252, RCID_SLIPPY);
    }
}

void func_i3_801A4214(Boss* bossSO) {
    s32 i;
    Vec3f sp50;
    Vec3f sp44;

    if (bossSO->health > 0) {
        return;
    }
    Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&bossSO->obj.rot.x, 0.0f, 0.1f, 3.0f, 0.0f);
    if ((bossSO->unk_04C == 52) && (bossSO->swork[1] == 5)) {
        bossSO->unk_04C = 38;
        bossSO->fwork[0] = 0.05f;
    }
    Matrix_RotateX(gCalcMatrix, bossSO->fwork[1] * 0.017453292f, 0U);
    Matrix_RotateY(gCalcMatrix, -bossSO->fwork[2] * 0.017453292f, 1U);
    sp50.x = 0.0f;
    sp50.y = 200.0f;
    sp50.z = 1100.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp50, &sp44);
    if (bossSO->actionState >= 2) {
        Math_SmoothStepToF(&D_801779A8[gMainController], 30.0f, 1.0f, 2.5f, 0.0f);
    }
    switch (bossSO->actionState) {
        case 0:
            if (D_i3_801C2740[0] >= 33) {
                D_i3_801C2740[0] -= 3;
            }
            if (bossSO->timer_058 == 19910) {
                bossSO->actionState++;
                bossSO->swork[1] = 5;
                bossSO->unk_04C = 0;
                bossSO->fwork[0] = 0.05f;
            }
            Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
            break;
        case 1:
            if (bossSO->unk_04C == 51) {
                bossSO->unk_04C = 50;
                bossSO->actionState++;
                gShowBossHealth = false;
                Audio_PlaySfx(0x39439076U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_i3_801A1E14(bossSO->fwork[4], bossSO->fwork[5] + 300.0f, bossSO->fwork[6], bossSO->fwork[1],
                                 bossSO->fwork[2], 73.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 80.0f, 40.0f, 8);
                D_i3_801C2768[3] = 6.0f;
                D_i3_801C2768[2] = 100.0f;
                D_80178340 = 255;
                D_80178348 = 255;
                D_80178350 = 255;
                D_80178354 = 255;
                D_80178358 = 0;
                D_8017835C = 4;
                func_80042EC0(bossSO);
                bossSO->swork[4]++;
                Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
            }
            break;
        case 2:
            if (D_i3_801C2740[0] >= 33) {
                D_i3_801C2740[0] -= 3;
            }
            if (D_i3_801C2740[1] >= 33) {
                Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
                D_i3_801C2740[1] -= 4;
            } else {
                bossSO->actionState++;
            }
            break;
        case 3:
            if ((D_80177A80 >= 205) && (D_i3_801C2768[5] < 1.0f)) {
                D_i3_801C2768[5] += 0.1f;
            }
            if ((D_80177A80 >= 207) && (D_i3_801C2768[9] < 1.0f)) {
                D_i3_801C2768[9] += 0.1f;
            }
            if ((D_80177A80 >= 209) && (D_i3_801C2768[10] < 1.0f)) {
                D_i3_801C2768[10] += 0.1f;
            }
            if ((D_80177A80 >= 211) && (D_i3_801C2768[7] < 1.0f)) {
                D_i3_801C2768[7] += 0.1f;
            }
            if ((D_80177A80 >= 213) && (D_i3_801C2768[8] < 1.0f)) {
                D_i3_801C2768[8] += 0.1f;
            }
            if ((D_80177A80 >= 215) && (D_i3_801C2768[11] < 1.0f)) {
                D_i3_801C2768[11] += 0.1f;
            }
            if ((D_80177A80 >= 217) && (D_i3_801C2768[12] < 1.0f)) {
                D_i3_801C2768[12] += 0.1f;
            }
            if ((D_80177A80 >= 219) && (D_i3_801C2768[4] < 1.0f)) {
                D_i3_801C2768[4] += 0.1f;
            }
            if ((D_80177A80 >= 221) && (D_i3_801C2768[6] < 1.0f)) {
                D_i3_801C2768[6] += 0.2f;
            }
            if ((D_80177A80 >= 226) && (D_i3_801C2768[13] < 380.0f)) {
                D_i3_801C2768[13] += 30.0f;
            }
            if (D_80177A80 >= 238) {
                D_i3_801C2768[13] = 0.0f;
            }
            if (D_80177A80 == 230) {
                Audio_PlaySfx(0x2940F026U, &gActors[5].sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_801779A8[gMainController] = 120.0f;
            }
            if (D_80177A80 == 250) {
                bossSO->actionState++;
                bossSO->obj.pos.y = -1600.0f;
                for (i = 0; i < 2; i++) {
                    if (gEffects[i].obj.status != 0) {
                        Object_Kill(&gEffects[i].obj, &gEffects[i].sfxPos);
                    }
                }
                bossSO->timer_058 = 100;
            }
            break;
        case 4:
            if (bossSO->timer_058 == 1) {
                func_800182F4(0x105000FF);
                func_800182F4(0x115000FF);
                Object_Kill(&bossSO->obj, &bossSO->sfxPos);
            }
            break;
    }
}

void func_i3_801A48B8(Boss* bossSO) {
    s32 i;

    Audio_PlaySfx(0x29434075U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    D_80137E84[gMainController] = 1;
    D_Timer_80177BD0[gMainController] = 10;
    if (bossSO->swork[0] != 6) {
        bossSO->swork[5] = bossSO->swork[0];
        bossSO->swork[6] = bossSO->swork[1];
        bossSO->swork[7] = bossSO->unk_04C;
    }
    if ((bossSO->swork[0] == 4) && (bossSO->unk_04C >= 60) && (bossSO->unk_04C < 67)) {
        for (i = 4; i < 60; i++) {
            if (gActors[i].obj.id == 278) {
                gActors[i].unk_0D0 = 2;
                break;
            }
        }
    }
    D_80178348 = D_80178350 = D_80178354 = D_80178340 = 255;
    D_80178358 = 0;
    D_8017835C = 64;
    bossSO->swork[0] = 6;
    bossSO->swork[1] = 6;
    bossSO->unk_04C = 0;
    bossSO->fwork[0] = 0.01f;
    if (((bossSO->swork[2] > 0) || (bossSO->swork[3] > 0)) && (gTeamShields[2] > 0)) {
        func_800BA808(gMsg_ID_7086, RCID_SLIPPY);
    }
}

void func_i3_801A4A34(Boss* bossSO) {
    if (bossSO->swork[2] < 0) {
        bossSO->swork[2] = 0;
        func_i3_801A1E14(bossSO->fwork[28], bossSO->fwork[29], bossSO->fwork[30], bossSO->fwork[41], bossSO->fwork[42],
                         bossSO->fwork[43], (Rand_ZeroOne() * -25.0f) - 10.0f, (Rand_ZeroOne() * 25.0f) + 30.0f,
                         ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 0);
        func_i3_801A1E14(bossSO->fwork[22], bossSO->fwork[23], bossSO->fwork[24], bossSO->fwork[47], bossSO->fwork[48],
                         bossSO->fwork[49], (Rand_ZeroOne() * -25.0f) - 10.0f, (Rand_ZeroOne() * 25.0f) + 30.0f,
                         ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 1);
        func_i3_801A1E14(bossSO->fwork[10], bossSO->fwork[11], bossSO->fwork[12], bossSO->fwork[35], bossSO->fwork[36],
                         bossSO->fwork[37], (Rand_ZeroOne() * -25.0f) - 10.0f, (Rand_ZeroOne() * 25.0f) + 30.0f,
                         ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 2);
    }
    if (bossSO->swork[3] < 0) {
        bossSO->swork[3] = 0;
        func_i3_801A1E14(bossSO->fwork[25], bossSO->fwork[26], bossSO->fwork[27], bossSO->fwork[38], bossSO->fwork[39],
                         bossSO->fwork[40], (Rand_ZeroOne() * 25.0f) + 10.0f, (Rand_ZeroOne() * 25.0f) + 30.0f,
                         ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 5);
        func_i3_801A1E14(bossSO->fwork[19], bossSO->fwork[20], bossSO->fwork[21], bossSO->fwork[44], bossSO->fwork[45],
                         bossSO->fwork[46], (Rand_ZeroOne() * 25.0f) + 10.0f, (Rand_ZeroOne() * 25.0f) + 30.0f,
                         ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 4);
        func_i3_801A1E14(bossSO->fwork[7], bossSO->fwork[8], bossSO->fwork[9], bossSO->fwork[32], bossSO->fwork[33],
                         bossSO->fwork[34], (Rand_ZeroOne() * 25.0f) + 10.0f, (Rand_ZeroOne() * 25.0f) + 30.0f,
                         ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 3);
    }
    switch (bossSO->unk_04C) {
        case 30:
            Audio_PlaySfx(0x29433074U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            /* fallthrough */
        case 35:
        case 97:
            Audio_PlaySfx(0x29434075U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
    }
    if (bossSO->unk_04C == 119) {
        bossSO->swork[0] = bossSO->swork[5];
        bossSO->swork[1] = bossSO->swork[6];
        if ((bossSO->swork[5] == 2) || (bossSO->swork[5] == 3)) {
            bossSO->unk_04C = bossSO->swork[7];
        } else {
            bossSO->unk_04C = 0;
        }
        bossSO->fwork[0] = 0.01f;
    }
}

void func_i3_801A4EC0(Boss* bossSO) {
    bossSO->swork[0] = 7;
    bossSO->swork[1] = 5;
    bossSO->fwork[0] = 0.01f;
    bossSO->unk_04C = 0;
    bossSO->actionState = 0;
    bossSO->fwork[31] = bossSO->obj.rot.y = 0.0f;
}

void func_i3_801A4EF8(Boss* bossSO) {
    s32 i;

    if (bossSO->swork[11] != 0) {
        bossSO->swork[11]--;
    }
    switch (bossSO->actionState) {
        case 0:
            bossSO->unk_04C = 0;
            if (bossSO->fwork[31] > 20.0f) {
                bossSO->actionState++;
                bossSO->swork[11] = 108;
                bossSO->fwork[0] = 0.01f;
                bossSO->unk_04C = 56;
            }
            if (bossSO->obj.rot.y == 0.0f) {
                Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            bossSO->fwork[31] += 0.5f;
            bossSO->obj.rot.y += bossSO->fwork[31];
            if (bossSO->obj.rot.y >= 360.0f) {
                bossSO->obj.rot.y -= 360.0f;
                Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            bossSO->unk_078.y = bossSO->obj.rot.y;
            break;
        case 1:
            bossSO->obj.rot.y += bossSO->fwork[31];
            bossSO->unk_04C = 56;
            if (bossSO->obj.rot.y >= 360.0f) {
                bossSO->obj.rot.y -= 360.0f;
                Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->swork[11] <= 45) {
                Math_SmoothStepToF(&bossSO->obj.pos.y, -1000.0f, 0.1f, 20.0f, 0.1f);
            }
            if (bossSO->swork[11] == 30) {
                func_i3_801A0CEC(&gActors[10], bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
                D_80137E84[gMainController] = 1;
                D_Timer_80177BD0[gMainController] = 70;
                for (i = 0; i < 4; i++) {
                    func_i3_8019F038(bossSO->obj.pos.x + 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f,
                                     D_i3_801BF8F0[i].x + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     D_i3_801BF8F0[i].y + 10.0f + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     (Rand_ZeroOne() * -10.0f) - 10.0f);
                    func_i3_8019F038(bossSO->obj.pos.x - 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f,
                                     D_i3_801BF8F0[i].x + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     D_i3_801BF8F0[i].y + 10.0f + (2.0f * (Rand_ZeroOne() - 0.5f)),
                                     (Rand_ZeroOne() * -10.0f) - 10.0f);
                }
            }
            if (bossSO->swork[11] == 16) {
                gActors[10].unk_0D0 = 2;
            }
            if (bossSO->obj.pos.y <= -900.0f) {
                bossSO->actionState++;
                bossSO->swork[11] = 500;
                bossSO->obj.pos.y = -1500.0f;
                bossSO->fwork[3] = 4800.0f;
                bossSO->obj.pos.z = gPlayer->unk_138 - bossSO->fwork[3];
                bossSO->swork[1] = 0;
                bossSO->unk_078.y = bossSO->obj.rot.y = 0.0f;
                bossSO->vel.y = 0.0f;
                bossSO->obj.rot.x = 0.0f;
            }
            bossSO->unk_078.y = bossSO->obj.rot.y;
            break;
        case 2:
            bossSO->unk_04C = 0;
            if (bossSO->swork[11] == 300) {
                D_80137E84[gMainController] = 1;
                D_Timer_80177BD0[gMainController] = 170;
                D_80178480 = 130;
            }
            if (bossSO->swork[11] == 200) {
                func_i3_801A0CEC(&gActors[9], bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
            }
            if (bossSO->swork[11] < 200) {
                bossSO->unk_04C = 98;
                bossSO->unk_078.y += bossSO->fwork[31];
                if (bossSO->swork[11] == 170) {
                    Audio_PlaySfx(0x29432073U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    bossSO->obj.pos.y = -500.0f;
                    gActors[9].unk_0D0 = 2;
                }
                if (bossSO->swork[11] <= 170) {
                    bossSO->vel.y = __cosf(bossSO->obj.rot.x * 0.017453292f) * 80.0f;
                    bossSO->vel.z = (__sinf(bossSO->obj.rot.x * 0.017453292f) * 30.0f) + gPlayer[0].vel.z;
                }
                if (bossSO->obj.rot.x < 190.0f) {
                    bossSO->obj.rot.x += 1.0f;
                }
                if (bossSO->swork[11] == 50) {
                    func_i3_801A0CEC(&gActors[10], bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 80.0f, 2);
                    D_80137E84[gMainController] = 1;
                    D_Timer_80177BD0[gMainController] = 100;
                    D_80178480 = 10;
                }
                if (bossSO->obj.pos.y < -1500.0f) {
                    bossSO->actionState++;
                    bossSO->swork[11] = 100;
                    bossSO->obj.pos.y = -500.0f;
                    bossSO->fwork[3] = 4800.0f;
                    bossSO->obj.pos.z = gPlayer->unk_138 - bossSO->fwork[3];
                    bossSO->unk_04C = 0;
                    bossSO->obj.rot.x = 0.0f;
                    bossSO->fwork[31] = bossSO->vel.y = bossSO->vel.z = 0.0f;
                    bossSO->obj.rot.y = 330.0f;
                }
            }
            break;
        case 3:
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 1.5f, 1.0f);
            if (bossSO->swork[11] == 65) {
                func_i3_801A0CEC(&gActors[9], bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
            }
            if (bossSO->swork[11] == 0) {
                bossSO->swork[11] = 220;
            }
            if (bossSO->swork[11] == 210) {
                bossSO->unk_04C = 0;
                bossSO->swork[1] = 1;
            }
            if (bossSO->swork[11] >= 100) {
                Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
            }
            if (bossSO->swork[11] == 150) {
                func_i3_801A3468(bossSO);
                bossSO->fwork[0] = 0.01f;
            }
            if (bossSO->swork[11] == 50) {
                gActors[9].unk_0D0 = 2;
            }
            break;
    }
}

void func_i3_801A56B8(Boss* bossSO) {
    switch (bossSO->swork[1]) {
        case 2:
            if (((bossSO->unk_04C == 89) && (bossSO->actionState == 2)) || (bossSO->swork[2] == 0)) {
                bossSO->unk_04C = 0;
                bossSO->actionState = 0;
                bossSO->unk_078.y = 0.0f;
            }
            if (bossSO->unk_04C == 89) {
                bossSO->actionState++;
                bossSO->unk_078.y += 15.0f;
            }
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, bossSO->unk_078.y, 1.0f, 3.0f, 1.0f);
            if (bossSO->unk_04C > 18) {
                bossSO->info.hitbox[20] = 715.0f;
                bossSO->info.hitbox[22] = 440.0f;
                bossSO->info.hitbox[24] = 110.0f;
            }
            if (bossSO->unk_04C > 36) {
                bossSO->info.hitbox[20] = 220.0f;
                bossSO->info.hitbox[22] = 715.0f;
                bossSO->info.hitbox[24] = 220.0f;
            }
            break;
        case 4:
            if ((bossSO->unk_04C == 99) || (bossSO->swork[2] == 0)) {
                bossSO->unk_04C = 0;
                if ((bossSO->swork[3] != 0) || (bossSO->swork[2] != 0)) {
                    bossSO->swork[1] = 5;
                } else {
                    bossSO->swork[1] = 7;
                }
            }
            if (bossSO->unk_04C > 20) {
                bossSO->info.hitbox[20] = 715.0f;
                bossSO->info.hitbox[22] = 110.0f;
                bossSO->info.hitbox[24] = 275.0f;
            }
            if (bossSO->unk_04C > 84) {
                bossSO->info.hitbox[20] = 220.0f;
                bossSO->info.hitbox[22] = 715.0f;
                bossSO->info.hitbox[24] = 220.0f;
            }
            break;
        case 5:
            bossSO->fwork[3] = 4800.0f;
            if (bossSO->unk_04C == 65) {
                bossSO->timer_050 = 30;
            }
            if (bossSO->timer_050 != 0) {
                bossSO->unk_04C = 65;
            }
            if ((bossSO->unk_04C == 65) && !(gFrameCount & 3)) {
                func_i3_8019FFC0(bossSO, bossSO->fwork[4] + 125.0f, bossSO->fwork[5] - 100.0f,
                                 bossSO->fwork[6] + 600.0f, ((f32) bossSO->timer_050 * 0.2f) + 4.0f, 1);
                func_i3_8019FFC0(bossSO, bossSO->fwork[4] - 125.0f, bossSO->fwork[5] - 100.0f,
                                 bossSO->fwork[6] + 600.0f, ((f32) bossSO->timer_050 * 0.2f) + 4.0f, 2);
                func_i3_801A1EB0(bossSO, bossSO->fwork[4], 25.0f, bossSO->fwork[5] - 100.0f, bossSO->fwork[6] + 300.0f);
            }
            break;
        case 7:
            if (bossSO->unk_04C < 50) {
                if (bossSO->fwork[31] < 22.0f) {
                    bossSO->fwork[31] += 0.5f;
                }
                bossSO->obj.rot.y += bossSO->fwork[31];
            }
            if ((bossSO->unk_04C >= 50) && (bossSO->unk_04C <= 100)) {
                if (bossSO->fwork[31] > 0.0f) {
                    bossSO->fwork[31] -= 0.5f;
                }
                bossSO->obj.rot.y += bossSO->fwork[31];
            }
            if (bossSO->unk_04C >= 100) {
                Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 2.0f, 1.0f);
                bossSO->fwork[31] = 0.0f;
            }
            if (bossSO->unk_04C == 120) {
                bossSO->swork[1] = 5;
                bossSO->unk_04C = 0;
                bossSO->fwork[0] = 0.1f;
            }
            break;
    }
}

BossSOfunc D_i3_801BF980[9] = {
    func_i3_801A1F80, func_i3_801A23F4, func_i3_801A2C98, func_i3_801A3128, func_i3_801A3510,
    func_i3_801A4214, func_i3_801A4A34, func_i3_801A4EF8, func_i3_801A56B8,
};

// OBJ_BOSS_SO action
void func_i3_801A5B3C(Boss* bossSO);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A5B3C.s")

s32 func_i3_801A68A8(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Boss* this = thisx;
    Vec3f sp58 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp4C = { 10.0f, 0.0f, 0.0f };
    Vec3f sp40 = { -10.0f, 0.0f, 0.0f };

    GPC(D_i3_801C2740[1], D_i3_801C2740[0], D_i3_801C2740[0], 255);
    if (this->fwork[3] < 4800.0f) {
        RCP_SetupDL_30(64, 32, 32, gFogAlpha, gFogNear, gFogFar);
    } else {
        RCP_SetupDL_30(16, 16, 16, gFogAlpha, gFogNear, gFogFar);
    }
    switch (limbIndex) {
        case 11:
            rot->y -= D_i3_801C2768[1];
            rot->z += D_i3_801C2768[0];
            /* fallthrough */
        case 1:
            if (this->swork[4] != 0) {
                *dList = NULL;
            } else {
                if (this->swork[10] != 0) {
                    if (this->swork[10] & 1) {
                        GPC(32, 32, 128, 255);
                        rot->z += 3.0f;
                    } else {
                        rot->z -= 3.0f;
                    }
                }
            }
            break;
        case 2:
        case 3:
        case 4:
            if (this->swork[2] == 0) {
                *dList = NULL;
            }
            if ((this->swork[8] & 1) != 0) {
                if ((this->swork[8] & 1) != 0) {
                    GPC(32, 32, 128, 255);
                    rot->y += 3.0f;
                } else {
                    rot->y -= 3.0f;
                }
            }
            break;
        case 5:
        case 6:
        case 7:
            if (this->swork[3] == 0) {
                *dList = NULL;
            }
            if ((this->swork[9] & 1) != 0) {
                if ((this->swork[9] & 1) != 0) {
                    GPC(32, 32, 128, 255);
                    rot->y += 3.0f;
                } else {
                    rot->y -= 3.0f;
                }
            }
            break;
    }
    return false;
}

void func_i3_801A6BDC(s32 limbIndex, Vec3f* rot, void* thisx) {
    Boss* this = thisx;
    Vec3f spA0 = { 90.0f, 0.0f, -10.0f };
    Vec3f sp94 = { 135.0f, 0.0f, -40.0f };
    Vec3f sp88 = { 106.0f, 0.0f, 0.0f };
    Vec3f sp7C = { 75.0f, 0.0f, 0.0f };
    Vec3f sp70 = { 85.0f, 0.0f, 0.0f };
    Vec3f sp64 = { 10.0f, 2.0f, 0.0f };
    Vec3f sp58 = { 10.0f, -2.0f, 0.0f };
    Vec3f sp4C = { 0.0f, 0.05f, 0.0f };
    Vec3f sp40 = { 0.0f, -0.05f, 0.0f };
    Vec3f sp34 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp28;

    switch (limbIndex) {
        case 11:
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            this->fwork[4] = sp28.x;
            this->fwork[5] = sp28.y;
            this->fwork[6] = sp28.z;
            Matrix_GetYRPAngles(gCalcMatrix, &sp28);
            this->fwork[1] = sp28.x;
            this->fwork[2] = sp28.y;
            break;
        case 2:
            if (this->swork[2] > 0) {
                Matrix_Push(&gCalcMatrix);
                Matrix_MultVec3f(gCalcMatrix, &sp88, &sp28);
                this->fwork[28] = sp28.x;
                this->fwork[29] = sp28.y;
                this->fwork[30] = sp28.z;
                Matrix_Pop(&gCalcMatrix);
                Matrix_MultVec3f(gCalcMatrix, &spA0, &sp28);
                this->fwork[16] = sp28.x;
                this->fwork[17] = sp28.y;
                this->fwork[18] = sp28.z;
            }
            if (this->swork[2] < 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
                this->fwork[28] = sp28.x;
                this->fwork[29] = sp28.y;
                this->fwork[30] = sp28.z;
                Matrix_GetYRPAngles(gCalcMatrix, (Vec3f*) &this->fwork[41]);
            }
            break;
        default:
            break;
        case 3:
            if (this->swork[2] > 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp7C, &sp28);
                this->fwork[22] = sp28.x;
                this->fwork[23] = sp28.y;
                this->fwork[24] = sp28.z;
            }
            if (this->swork[2] < 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
                this->fwork[22] = sp28.x;
                this->fwork[23] = sp28.y;
                this->fwork[24] = sp28.z;
                Matrix_GetYRPAngles(gCalcMatrix, (Vec3f*) &this->fwork[47]);
            }
            break;
        case 4:
            if (this->swork[2] > 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp70, &sp28);
                this->fwork[10] = sp28.x;
                this->fwork[11] = sp28.y;
                this->fwork[12] = sp28.z;
                Matrix_GetYRPAngles(gCalcMatrix, (Vec3f*) &this->fwork[35]);
            } else {
                if (gBosses[0].swork[0] != 7) {
                    Matrix_MultVec3f(gCalcMatrix, &sp64, &sp28);
                } else {
                    Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp28);
                }
                this->fwork[10] = sp28.x;
                this->fwork[11] = sp28.y;
                this->fwork[12] = sp28.z;
            }
            break;
        case 5:
            if (this->swork[3] > 0) {
                Matrix_Push(&gCalcMatrix);
                Matrix_MultVec3f(gCalcMatrix, &sp88, &sp28);
                this->fwork[25] = sp28.x;
                this->fwork[26] = sp28.y;
                this->fwork[27] = sp28.z;
                Matrix_Pop(&gCalcMatrix);
                Matrix_MultVec3f(gCalcMatrix, &spA0, &sp28);
                this->fwork[13] = sp28.x;
                this->fwork[14] = sp28.y;
                this->fwork[15] = sp28.z;
                Matrix_GetYRPAngles(gCalcMatrix, (Vec3f*) &this->fwork[38]);
            }
            if (this->swork[3] < 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
                this->fwork[25] = sp28.x;
                this->fwork[26] = sp28.y;
                this->fwork[27] = sp28.z;
            }
            break;
        case 6:
            if (this->swork[3] > 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp7C, &sp28);
                this->fwork[19] = sp28.x;
                this->fwork[20] = sp28.y;
                this->fwork[21] = sp28.z;
            }
            if (this->swork[3] < 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
                this->fwork[19] = sp28.x;
                this->fwork[20] = sp28.y;
                this->fwork[21] = sp28.z;
                Matrix_GetYRPAngles(gCalcMatrix, (Vec3f*) &this->fwork[44]);
            }
            break;
        case 7:
            if (this->swork[3] > 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp70, &sp28);
                this->fwork[7] = sp28.x;
                this->fwork[8] = sp28.y;
                this->fwork[9] = sp28.z;
                Matrix_GetYRPAngles(gCalcMatrix, (Vec3f*) &this->fwork[32]);
            } else {
                if (gBosses[0].swork[0] != 7) {
                    Matrix_MultVec3f(gCalcMatrix, &sp58, &sp28);
                } else {
                    Matrix_MultVec3f(gCalcMatrix, &sp40, &sp28);
                }
                this->fwork[7] = sp28.x;
                this->fwork[8] = sp28.y;
                this->fwork[9] = sp28.z;
            }
            break;
    }
}

void func_i3_801A71B8(Boss* bossSO) {
    s32 i;
    Vec3f spE8[9] = {
        { 150.0f, 300.0f, 100.0f },  { -100.0f, 200.0f, 100.0f }, { 50.0f, 100.0f, 100.0f },
        { 0.0f, 0.0f, -500.0f },     { 790.0f, 630.0f, -600.0f }, { 280.0f, 140.0f, 500.0f },
        { -210.0f, 110.0f, 500.0f }, { -460.0f, 260.0f, 500.0f }, { 380.0f, 290.0f, 500.0f },
    };
    f32 spC4[9] = {
        -1.0f, -0.3f, -2.0f, 121.0f, 209.0f, 183.0f, 181.0f, 167.0f, 182.0f,
    };
    f32 spA0[9] = {
        -89.0f, -90.0f, -88.0f, -36.0f, -73.0f, -95.0f, -91.0f, -83.0f, -91.0f,
    };

    Matrix_Scale(gCalcMatrix, bossSO->unk_3F8, bossSO->unk_3F8, bossSO->unk_3F8, 1);
    if (D_80178284 != 0) {
        Animation_DrawSkeleton(2, D_600E470, bossSO->vwork, func_i3_801A68A8, func_i3_801A6BDC, bossSO, gCalcMatrix);
    }
    if (bossSO->health <= 0) {
        RCP_SetupDL_49();
        GPC(255, 255, 255, 255);
        GEC(255, 192, 0, 255);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, bossSO->obj.pos.x, bossSO->obj.pos.y, bossSO->obj.pos.z - 500.0f + D_80177D20, 1);
        Matrix_Scale(gGfxMatrix, D_i3_801C2768[3], D_i3_801C2768[2], 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_1024AC0);
        for (i = 0; i < 9; i++) {
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, bossSO->obj.pos.x + spE8[i].x, bossSO->obj.pos.y + spE8[i].y,
                             bossSO->obj.pos.z + D_80177D20 + spE8[i].z, 1);
            Matrix_RotateY(gGfxMatrix, spC4[i] * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, spA0[i] * M_DTOR, 1);
            Matrix_Scale(gGfxMatrix, D_i3_801C2768[i + 4], 100.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_1024AC0);
        }
        if (D_i3_801C2768[13] > 0.0f) {
            GPC(255, 192, 64, 255);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, bossSO->obj.pos.x, bossSO->obj.pos.y + 230.0f,
                             (bossSO->obj.pos.z - 300.0f) + D_80177D20, 1);
            Matrix_RotateX(gGfxMatrix, 0.08726646f, 1);
            Matrix_Scale(gGfxMatrix, D_i3_801C2768[13], 1.0f, D_i3_801C2768[13], 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_20112C0);
            Matrix_Scale(gGfxMatrix, 0.6f, 1.0f, 0.6f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_20112C0);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, bossSO->obj.pos.x, bossSO->obj.pos.y + 270.0f,
                             (bossSO->obj.pos.z - 300.0f) + D_80177D20, 1);
            Matrix_RotateX(gGfxMatrix, -0.05235988f, 1);
            Matrix_Scale(gGfxMatrix, D_i3_801C2768[13], 1.0f, D_i3_801C2768[13], 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_20112C0);
            Matrix_Scale(gGfxMatrix, 0.6f, 1.0f, 0.6f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_20112C0);
        }
    }
}

Vec3f D_i3_801BFAF4[5] = {
    { 0.0f, 10.0f, 20.0f },   { 300.0f, 100.0f, 200.0f }, { 100.0f, 60.0f, -260.0f },
    { 80.0f, 100.0f, 80.0f }, { 262.0f, 285.0f, 252.0f },
};

Vec3f D_i3_801BFB30[3] = {
    { 0.0f, 50.0f, 500.0f },
    { -500.0f, 0.0f, 250.0f },
    { 500.0f, 0.0f, 250.0f },
};

void func_i3_801A7750(void) {
    Actor* var_s0 = gActors;
    s32 i;
    Vec3f* temp;

    Rand_SetSeed(1, 29100, 9786);

    for (i = 0; i < 3; i++, var_s0++) {
        temp = &D_i3_801BFB30[i];
        if ((i == 0) && (gTeamShields[3] <= 0.0f)) {
            continue;
        }
        if ((i == 1) && (gTeamShields[2] <= 0.0f)) {
            continue;
        }
        if ((i == 2) && (gTeamShields[1] <= 0.0f)) {
            continue;
        }

        Actor_Initialize(var_s0);
        var_s0->obj.status = 1;
        var_s0->obj.id = OBJ_ACTOR_195;

        var_s0->obj.pos.x = gPlayer[0].pos.x + temp->x / 2.0f;
        var_s0->obj.pos.y = gPlayer[0].pos.y + temp->y;
        var_s0->obj.pos.z = gPlayer[0].pos.z + temp->z;
        var_s0->unk_0B8 = 1;
        Object_SetInfo(&var_s0->info, var_s0->obj.id);
        var_s0->iwork[11] = 1;
        Audio_PlaySfx(0x3100000C, &var_s0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i3_801A7930(Player* player) {
    s32 i;
    f32 sp78;
    f32 temp_fv1;
    f32 dx;
    f32 dz;
    Vec3f sp60;
    Vec3f sp54;
    Boss* bossSO = &gBosses[0];

    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;
            player->unk_034 = player->unk_4D8 = 0.0f;
            player->unk_0D0 = 40.0f;

            player->wings.unk_04 = player->wings.unk_0C = player->wings.unk_08 = player->wings.unk_10 =
                player->unk_130 = player->unk_12C = player->unk_110 = 0.0f;
            player->unk_234 = 1;
            D_80177978 = player->camEye.x;
            D_80177980 = player->camEye.y;
            D_80177988 = player->camEye.z;
            D_801779A0 = player->camAt.x;
            D_801779B8 = player->camAt.y;
            D_801779C0 = player->camAt.z;
            for (i = 10; i < 60; i++) {
                if (gActors[i].unk_0B6 == 0) {
                    Object_Kill(&gActors[i].obj, &gActors[i].sfxPos);
                }
            }
            Object_Kill(&gActors[2].obj, &gActors[2].sfxPos);
            Object_Kill(&gActors[3].obj, &gActors[3].sfxPos);
            Object_Kill(&gActors[4].obj, &gActors[4].sfxPos);
            player->unk_1D0 = 1;
            D_80177A48[0] = 0.1f;
            if (Rand_ZeroOne() > 0.5f) {
                D_80177A48[9] = -1.0f;
            } else {
                D_80177A48[9] = 1.0f;
            }
            break;
        case 1:
            D_80177CE8 += 30.0f;
            Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->pos.y, 200.0f, 0.05f, 10.0f, 0.0f);
            dx = player->pos.x - bossSO->obj.pos.x;
            dz = (player->pos.z - bossSO->obj.pos.z) * 0.05f;
            sp78 = Math_RadToDeg(-Math_Atan2F(dx, dz));
            Math_SmoothStepToF(&D_80177980, 300.0f, 1.0f, 20.0f, 0.0f);
            Math_SmoothStepToF(&D_801779B8, 290.0f, 1.0f, 20.0f, 0.0f);
            temp_fv1 = Math_SmoothStepToAngle(&player->unk_0E8, sp78, 0.5f, 2.0f, 0.0001f) * 30.0f;
            if (D_80177A80 >= 14) {
                Math_SmoothStepToAngle(&player->unk_0EC, temp_fv1, 0.1f, 5.0f, 0.0001f);
                D_801779A0 = 0.0f;
                D_80177978 = 0.0f;
            } else if (temp_fv1 < 0.0f) {
                player->unk_0EC -= 30.0f;
            } else {
                player->unk_0EC += 30.0f;
            }
            if (D_80177A80 >= 200) {
                player->unk_0E4 += 1.0f;
                player->unk_0E8 += 1.0f;
                player->unk_0EC += 1.0f;
            }
            if (D_80177A80 >= 230) {
                D_80178358 = 255;
                D_80178348 = D_80178354 = D_80178350 = 255;
            }
            if (D_80177A80 == 230) {
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
            }
            if (D_80177A80 == 400) {
                player->unk_1D0++;
                func_800A6148();
                func_8001CA24(0);
                Audio_KillSfx(&player->unk_460);
                D_80178340 = 250;
                player->timer_1F8 = 20;
                player->unk_0D0 = 0.0f;
                player->unk_0E4 = 0.0f;
                player->unk_0E8 = 0.0f;
                player->unk_0EC = 0.0f;
            }
            break;
        case 2:
            D_80177CE8 += 60.0f;
            if (player->timer_1F8 == 0) {
                player->pos.x = 0.0f;
                player->pos.y = 200.0f;
                player->pos.z = -(D_80177D20 - 500.0f);
                player->unk_1D0++;
                player->wings.unk_2C = 1;
                func_8001C8B8(0);
                func_8001D444(0, 0x26, 0, 0xFF);
                D_80177A98 = 1;
                func_800A6148();
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = 0.0f;
                player->camEye.x = 0.0f;
                player->camEye.y = player->pos.y + 80.0f;
                player->camEye.z = player->pos.z + D_80177D20 - 4000.0f;
                D_80177988 = player->pos.z + D_80177D20 - 4900.0f;
                player->camAt.x = D_801779A0 = 0.0f;
                player->camAt.y = D_801779B8 = 200.0f;
                player->camAt.z = D_801779C0 = player->pos.z + D_80177D20;
                D_80177A48[0] = 0.0f;
                Object_Kill(&gActors[4].obj, &gActors[4].sfxPos);
                Object_Kill(&gActors[5].obj, &gActors[5].sfxPos);
            }
            break;
        case 3:
            D_80177CE8 += 60.0f;
            D_80178358 = 0;
            D_8017835C = 4;
            if (D_801782F8 != 0) {
                player->wings.unk_30 = (gFrameCount & 1) * 5.0f;
            }
            switch (D_80177A80) {
                case 450:
                    func_i3_801A0DF8(-1200.0f, -(D_80177D20 + 2500.0f), 90.0f, 2, 1.0f);
                    break;
                case 545:
                    func_i3_801A0DF8(1400.0f, -(D_80177D20 + 3250.0f), -90.0f, 3, 1.0f);
                    break;
                case 550:
                    Object_Kill(&gActors[4].obj, &gActors[4].sfxPos);
                    break;
                case 645:
                    Object_Kill(&gActors[5].obj, &gActors[5].sfxPos);
                    break;
                case 700:
                    player->unk_1D0++;
                    func_i3_801A7750();
                    D_i3_801C2768[3] = 1000.0f;
                    break;
            }
            if ((D_80177A80 >= 520) && (D_80177A80 < 605)) {
                Math_SmoothStepToF(&player->pos.x, 400.0f, 0.1f, 10.0f, 0.1f);
            }
            if ((D_80177A80 >= 520) && (D_80177A80 < 570)) {
                Math_SmoothStepToAngle(&player->unk_0EC, -30.0f, 0.1f, 5.0f, 0.1f);
            }
            if ((D_80177A80 >= 570) && (D_80177A80 < 605)) {
                Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.1f, 5.0f, 0.1f);
            }
            if ((D_80177A80 >= 605) && (D_80177A80 < 620)) {
                player->unk_0EC += 30.0f;
            }
            if ((D_80177A80 >= 620) && (D_80177A80 < 640)) {
                Math_SmoothStepToAngle(&player->unk_0EC, 45.0f, 0.1f, 5.0f, 0.0f);
            }
            if (D_80177A80 >= 640) {
                Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.3f, 7.0f, 0.0f);
            }
            if (D_80177A80 >= 585) {
                Math_SmoothStepToF(&player->pos.x, 0.0f, 0.2f, 9.0f, 0);
            }
            if (D_80177A80 >= 600) {
                Math_SmoothStepToF(&player->pos.y, 950.0f, 0.1f, 10.0f, 0.0001f);
            }
            Math_SmoothStepToF(&player->pos.z, -(D_80177D20 + 4350.0f), 1.0f, 20.0f, 0.0001f);
            if (D_80177A80 >= 620) {
                Math_SmoothStepToF(&player->camEye.x, 0.0f, 1.0f, 10.0f, 0);
                Math_SmoothStepToF(&player->camEye.y, player->pos.y + 52.0f, 1.0f, 16.0f, 0.0f);
                Math_SmoothStepToF(&player->camEye.z, (player->pos.z + D_80177D20) - 50.0f, 1.0f, 21.5f, 0.0f);
            }
            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->pos.z + D_80177D20;
            break;
        case 4:
            D_80177CE8 += 60.0f;
            D_80178358 = 0;
            D_8017835C = 4;
            D_80177A48[1] += D_80177A48[2] * 0.8f;
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
            sp60.x = 0.0f;
            sp60.y = 0.0f;
            sp60.z = -700.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
            if (D_80177A80 < 1440) {
                D_80177978 = sp54.x;
                D_80177980 = D_i3_801C2768[3] + sp54.y;
                D_80177988 = player->pos.z + D_80177D20 + sp54.z;
                D_801779A0 = 0.0f;
                D_801779B8 = player->pos.y + 75.0f;
                Math_SmoothStepToF(&D_i3_801C2768[3], 500.0f, 0.1f, 1.0f, 0.0001f);
                D_801779C0 = player->pos.z + D_80177D20 + 200.0f;
                if (D_80177A80 >= 1400) {
                    D_801779C0 -= (D_80177A80 * 8) - 11200;
                }
            } else {
                Math_SmoothStepToF(&D_80177978, 0.0f, 0.1f, 1.0f, 0.0001f);
                D_801779A0 = 0.0f;
                D_801779B8 = player->pos.y + 75.0f;
                D_801779C0 = player->pos.z + D_80177D20 + 200.0f - ((D_80177A80 * 8) - 11200);
            }
            if (D_80177A80 > 1460) {
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.2f;
                Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
                player->unk_190 = 2.0f;
            } else {
                Math_SmoothStepToF(&D_80177A48[2], 0.23f, 1.0f, 0.001f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[0], 0.5f, 0.1f, 0.0005f, 0.0f);
            }
            if (D_80177A80 == 1560) {
                func_800A6148();
            }
            if (D_80177A80 > 1530) {
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 8;
                if (D_80178340 == 255) {
                    func_8001CA24(0);
                    func_8001DBD0(10);
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    player->timer_1F8 = 0;
                    D_8017837C = 4;
                    D_800D3180[LEVEL_SOLAR] = Play_CheckMedalStatus(100) + 1;
                }
            }
            break;
    }
    switch (D_80177A80) {
        case 440:
            D_80177840 = 100;
            break;
        case 640:
            func_800BA808(gMsg_ID_20010, RCID_FOX);
            break;
        case 728:
            switch (gTeamShields[2]) {
                case 0:
                    func_800BA808(gMsg_ID_20345, RCID_ROB64);
                    break;
                case -1:
                    func_800BA808(gMsg_ID_20339, RCID_ROB64);
                    break;
                default:
                    func_80048AC0(2);
                    break;
            }
            break;
        case 875:
            switch (gTeamShields[3]) {
                case 0:
                    func_800BA808(gMsg_ID_20344, RCID_ROB64);
                    break;
                case -1:
                    func_800BA808(gMsg_ID_20338, RCID_ROB64);
                    break;
                default:
                    func_80048AC0(3);
                    break;
            }
            break;
        case 1021:
            switch (gTeamShields[1]) {
                case 0:
                    func_800BA808(gMsg_ID_20343, RCID_ROB64);
                    break;
                case -1:
                    func_800BA808(gMsg_ID_20337, RCID_ROB64);
                    break;
                default:
                    func_80048AC0(1);
                    break;
            }
            break;
        case 1186:
            D_80177830 = 1;
            break;
        case 1386:
            D_80177830 = 0;
            break;
        case 1460:
            Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_190 = player->unk_194 = 5.0f;
            break;
        case 1400:
            if (gTeamShields[3] > 0) {
                gActors[0].unk_0B8 = 2;
            }
            break;
        case 1500:
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            break;
        case 1420:
            if (gTeamShields[2] > 0) {
                gActors[1].unk_0B8 = 2;
            }
            break;
        case 1440:
            if (gTeamShields[1] > 0) {
                gActors[2].unk_0B8 = 2;
            }
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * M_DTOR), 1);
    sp60.x = 0.0f;
    sp60.y = 0.0f;
    sp60.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
    player->vel.x = sp54.x;
    player->vel.z = sp54.z;
    player->vel.y = sp54.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.0f);
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_i3_801A8BE8(Actor* actor) {
    Vec3f sp3C;
    Vec3f sp30;

    switch (actor->unk_0B8) {
        case 4:
            break;
        case 1:
            if ((actor->unk_0B6 != 0) && ((((actor->index & 7) * 10) + 1030) < D_80177A80)) {
                actor->unk_0B8 = 4;
            }
            break;
        case 2:
            actor->unk_0B8 = 3;
            Audio_PlaySfx(0x09000002, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->fwork[29] = 5.0f;
            /* fallthrough */
        case 3:
            actor->iwork[11] = 2;
            actor->fwork[0] += 2.0f;
            actor->unk_0F4.x += 0.2f;
            break;
    }
    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(actor->unk_0F4.x * M_DTOR), 1);
    sp3C.x = 0.0f;
    sp3C.y = 0.0f;
    sp3C.z = actor->fwork[0];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp3C, &sp30);
    actor->vel.x = sp30.x;
    actor->vel.y = sp30.y;
    actor->vel.z = sp30.z;
    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y + 180.0f;

    actor->obj.rot.z = -actor->unk_0F4.z;
}

void func_i3_801A8DB8(Vec3f* arg0, u32 arg1, f32 arg2) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_8007A5F8(&gEffects[i], arg0, arg1);
            gEffects[i].vel.z = arg2;
            break;
        }
    }
}

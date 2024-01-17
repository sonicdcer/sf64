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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019E7F0.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019EF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F038.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019F0B0.s")

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
        if (gBosses[0].fwork[0x1F] > 0.0f) {
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019FDE0.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_8019FFC0.s")

// OBJ_ACTOR_279 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A003C.s")

// OBJ_EFFECT_392 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0120.s")

u32 D_i3_801BF92C[6] = {
    0x0200B630, 0x0200A5A0, 0x02009510, 0x060084C0, 0x06008D40, 0x06007C40,
};
u32 D_i3_801BF944[6] = {
    0x0601B790, 0x0601B790, 0x0601A700, 0x06019670, 0x060185E0, 0x06017550,
};
Vec3f D_i3_801BF95C[3] = {
    { 0.0f, 30.0f, 480.0f },
    { -180.0f, 0.0f, 240.0f },
    { 180.0f, 0.0f, 240.0f },
};
// OBJ_EFFECT_392 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0AF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0CEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0D90.s")

void func_i3_801A0DF8(f32, f32, f32, s32, f32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0DF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A0FD4.s")

void func_i3_801A10F4(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A10F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A1CD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A1E14.s")

void func_i3_801A1EB0(Boss* bossSO, f32 xPos, f32 xOffset, f32 yPos, f32 zPos) {
    func_i3_8019E9F4(xPos + xOffset, yPos, zPos, 20.0f, (Rand_ZeroOne() * 10.0f) + 20.0f, 0.0f, 20.0f, 1);
    func_i3_8019E9F4(xPos - xOffset, yPos, zPos, -20.0f, (Rand_ZeroOne() * 10.0f) + 20.0f, 0.0f, 20.0f, 1);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A1F80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A239C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A23F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A2C3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A2C98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A30CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A3128.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A3468.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A3510.s")

// void func_i3_801A3C4C(Boss *bossSO) {
//     Vec3f *sp2C;
//     f32 *temp_v0_5;
//     f32 *temp_v0_6;
//     f32 *temp_v1;
//     f32 *temp_v1_2;
//     f32 *temp_v1_3;
//     f32 *temp_v1_4;
//     f32 *temp_v1_5;
//     f32 *temp_v1_6;
//     f32 *temp_v1_7;
//     f32 *temp_v1_8;
//     f32 temp_fv0;
//     f32 temp_fv0_10;
//     f32 temp_fv0_11;
//     f32 temp_fv0_12;
//     f32 temp_fv0_2;
//     f32 temp_fv0_3;
//     f32 temp_fv0_4;
//     f32 temp_fv0_5;
//     f32 temp_fv0_6;
//     f32 temp_fv0_7;
//     f32 temp_fv0_8;
//     f32 temp_fv0_9;
//     f32 var_fv0;
//     s16 temp_v0;
//     s16 temp_v0_2;

//     if ((bossSO->swork[2] == 0) && (bossSO->swork[3] == 0) && ((temp_v0 = bossSO->dmgPart, (temp_v0 == 8)) ||
//     (temp_v0 == -1))) {
//         bossSO->health -= bossSO->damage;
//         if (bossSO->health < 0) {
//             bossSO->health = 0;
//         }
//         bossSO->swork[10] = 20;
//         if (bossSO->health > 0.0f) {
//             Audio_PlaySfx(0x29433074U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
//         }
//     }
//     bossSO->timer_058 = 20;
//     if ((bossSO->dmgPart > 0) && (bossSO->dmgPart < 4) && (bossSO->swork[2] != 0)) {
//         Audio_PlaySfx(0x29433074U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
//         bossSO->swork[2] -= bossSO->damage;
//         if (bossSO->swork[2] < 0) {
//             bossSO->swork[2] = 0;
//         }
//         if (bossSO->swork[2] == 0) {
//             bossSO->info.hitbox->unk1C = bossSO->info.hitbox->unk34 = bossSO->info.hitbox->unk4C = 0.0f;
//             bossSO->info.hitbox->unk20 = bossSO->info.hitbox->unk38 = bossSO->info.hitbox->unk50 = 0.0f;
//             bossSO->info.hitbox[2].unk4C = 0.0f;
//             temp_fv0_3 = bossSO->info.hitbox[2].unk4C;
//             bossSO->info.hitbox[2].unk34 = temp_fv0_3;
//             bossSO->info.hitbox[2].unk1C = temp_fv0_3;
//             bossSO->info.hitbox[2].unk50 = 0.0f;
//             temp_fv0_4 = bossSO->info.hitbox[2].unk50;
//             bossSO->info.hitbox[2].unk38 = temp_fv0_4;
//             bossSO->info.hitbox[2].unk20 = temp_fv0_4;
//             bossSO->info.hitbox[2].unk54 = 0.0f;
//             temp_fv0_5 = bossSO->info.hitbox[2].unk54;
//             bossSO->info.hitbox[2].unk3C = temp_fv0_5;
//             bossSO->info.hitbox[2].unk24 = temp_fv0_5;
//             bossSO->info.hitbox[2].unk58 = 0.0f;
//             temp_fv0_6 = bossSO->info.hitbox[2].unk58;
//             bossSO->info.hitbox[2].unk40 = temp_fv0_6;
//             bossSO->info.hitbox[2].unk28 = temp_fv0_6;
//             bossSO->swork[2] = -1;
//             func_i3_801A48B8(bossSO);
//         } else {
//             bossSO->swork[8] = 20;
//         }
//     }
//     if ((bossSO->dmgPart >= 4) && (bossSO->dmgPart < 7) && (bossSO->swork[3] != 0)) {
//         Audio_PlaySfx(0x29433074, &bossSO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
//         bossSO->swork[3] -= bossSO->damage;
//         if (bossSO->swork[3] < 0) {
//             bossSO->swork[3] = 0;
//         }
//         if (bossSO->swork[3] == 0) {
//             bossSO->info.hitbox->unk94 = 0.0f;
//             temp_fv0_7 = bossSO->info.hitbox->unk94;
//             bossSO->info.hitbox->unk7C = temp_fv0_7;
//             bossSO->info.hitbox->unk64 = temp_fv0_7;
//             bossSO->info.hitbox->unk98 = 0.0f;
//             temp_fv0_8 = bossSO->info.hitbox->unk98;
//             bossSO->info.hitbox->unk80 = temp_fv0_8;            bossSO->info.hitbox->unk68 = temp_fv0_8;
//             bossSO->info.hitbox[2].unk94 = 0.0f;
//             temp_fv0_9 = bossSO->info.hitbox[2].unk94;
//             bossSO->info.hitbox[2].unk7C = temp_fv0_9;
//             bossSO->info.hitbox[2].unk64 = temp_fv0_9;
//             bossSO->info.hitbox[2].unk98 = 0.0f;
//             temp_fv0_10 = bossSO->info.hitbox[2].unk98;
//             bossSO->info.hitbox[2].unk80 = temp_fv0_10;
//             bossSO->info.hitbox[2].unk68 = temp_fv0_10;
//             bossSO->info.hitbox[2].unk9C = 0.0f;
//             temp_fv0_11 = bossSO->info.hitbox[2].unk9C;
//             bossSO->info.hitbox[2].unk84 = temp_fv0_11;
//             bossSO->info.hitbox[2].unk6C = temp_fv0_11;
//             bossSO->info.hitbox[2].unkA0 = 0.0f;
//             temp_fv0_12 = bossSO->info.hitbox[2].unkA0;
//             bossSO->info.hitbox[2].unk88 = temp_fv0_12;
//             bossSO->info.hitbox[2].unk70 = temp_fv0_12;
//             bossSO->swork[3] = -1;
//             func_i3_801A48B8(bossSO);
//         } else {
//             bossSO->swork[9] = 20;
//         }
//     }
//     if (bossSO->health <= 0) {
//         bossSO->unk_04C = 21;
//         bossSO->actionState = 0;
//         bossSO->swork[1] = 1;
//         bossSO->fwork[0] = 0.01f;
//         bossSO->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800CBF34);
//         bossSO->timer_058 = 20000;
//         D_8017796C = -1;
//         D_80178354 = 255;
//         D_80178350 = 255;
//         D_80178340 = 255;
//         D_80178348 = 255;
//         D_80178358 = 0;
//         D_8017835C = 255;
//         D_80177A80 = 0;
//         D_80137E84[gMainController] = 1;
//         D_Timer_80177BD0[gMainController] = 10;
//         func_800182F4(0x100100FF);
//         func_800182F4(0x110100FF);
//         func_8001A838(0x4100C023U);
//         Audio_PlaySfx(0x2940D09AU, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
//         if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) {
//             gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
//             gPlayer[0].timer_1F8 = 0;
//             gPlayer[0].unk_1D0 = gPlayer[0].timer_1F8;
//             gPlayer[0].unk_0E8 += gPlayer[0].unk_114;
//             if (gPlayer[0].unk_0E8 > 360.0f) {
//                 gPlayer[0].unk_0E8 -= 360.0f;
//             }
//             if (gPlayer[0].unk_0E8 < 0.0f) {
//                 gPlayer[0].unk_0E8 += 360.0f;
//             }
//             gPlayer[0].unk_114 = 0.0f;
//         }
//         bossSO->fwork[31] = 0.0f;
//         bossSO->fwork[3] = 2400.0f;
//         func_800BA808(gMsg_ID_15252, RCID_SLIPPY);
//     }
// }
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A3C4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A4214.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A48B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A4A34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A4EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A4EF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_so/func_i3_801A56B8.s")

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
        RCP_SetupDL_30(0x40, 0x20, 0x20, gFogAlpha, gFogNear, gFogFar);
    } else {
        RCP_SetupDL_30(0x10, 0x10, 0x10, gFogAlpha, gFogNear, gFogFar);
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
            if (D_80177A80 >= 0xE) {
                Math_SmoothStepToAngle(&player->unk_0EC, temp_fv1, 0.1f, 5.0f, 0.0001f);
                D_801779A0 = 0.0f;
                D_80177978 = 0.0f;
            } else if (temp_fv1 < 0.0f) {
                player->unk_0EC -= 30.0f;
            } else {
                player->unk_0EC += 30.0f;
            }
            if (D_80177A80 >= 0xC8) {
                player->unk_0E4 += 1.0f;
                player->unk_0E8 += 1.0f;
                player->unk_0EC += 1.0f;
            }
            if (D_80177A80 >= 0xE6) {
                D_80178358 = 0xFF;
                D_80178348 = D_80178354 = D_80178350 = 0xFF;
            }
            if (D_80177A80 == 0xE6) {
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
            }
            if (D_80177A80 == 0x190) {
                player->unk_1D0++;
                func_800A6148();
                func_8001CA24(0);
                Audio_KillSfx(&player->unk_460);
                D_80178340 = 0xFA;
                player->timer_1F8 = 0x14;
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
                player->wings.unk_30 = (gGameFrameCount & 1) * 5.0f;
            }
            switch (D_80177A80) {
                case 0x1C2:
                    func_i3_801A0DF8(-1200.0f, -(D_80177D20 + 2500.0f), 90.0f, 2, 1.0f);
                    break;
                case 0x221:
                    func_i3_801A0DF8(1400.0f, -(D_80177D20 + 3250.0f), -90.0f, 3, 1.0f);
                    break;
                case 0x226:
                    Object_Kill(&gActors[4].obj, &gActors[4].sfxPos);
                    break;
                case 0x285:
                    Object_Kill(&gActors[5].obj, &gActors[5].sfxPos);
                    break;
                case 0x2BC:
                    player->unk_1D0++;
                    func_i3_801A7750();
                    D_i3_801C2768[3] = 1000.0f;
                    break;
            }
            if ((D_80177A80 >= 0x208) && (D_80177A80 < 0x25D)) {
                Math_SmoothStepToF(&player->pos.x, 400.0f, 0.1f, 10.0f, 0.1f);
            }
            if ((D_80177A80 >= 0x208) && (D_80177A80 < 0x23A)) {
                Math_SmoothStepToAngle(&player->unk_0EC, -30.0f, 0.1f, 5.0f, 0.1f);
            }
            if ((D_80177A80 >= 0x23A) && (D_80177A80 < 0x25D)) {
                Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.1f, 5.0f, 0.1f);
            }
            if ((D_80177A80 >= 0x25D) && (D_80177A80 < 0x26C)) {
                player->unk_0EC += 30.0f;
            }
            if ((D_80177A80 >= 0x26C) && (D_80177A80 < 0x280)) {
                Math_SmoothStepToAngle(&player->unk_0EC, 45.0f, 0.1f, 5.0f, 0.0f);
            }
            if (D_80177A80 >= 0x280) {
                Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.3f, 7.0f, 0.0f);
            }
            if (D_80177A80 >= 0x249) {
                Math_SmoothStepToF(&player->pos.x, 0.0f, 0.2f, 9.0f, 0);
            }
            if (D_80177A80 >= 0x258) {
                Math_SmoothStepToF(&player->pos.y, 950.0f, 0.1f, 10.0f, 0.0001f);
            }
            Math_SmoothStepToF(&player->pos.z, -(D_80177D20 + 4350.0f), 1.0f, 20.0f, 0.0001f);
            if (D_80177A80 >= 0x26C) {
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
            if (D_80177A80 < 0x5A0) {
                D_80177978 = sp54.x;
                D_80177980 = D_i3_801C2768[3] + sp54.y;
                D_80177988 = player->pos.z + D_80177D20 + sp54.z;
                D_801779A0 = 0.0f;
                D_801779B8 = player->pos.y + 75.0f;
                Math_SmoothStepToF(&D_i3_801C2768[3], 500.0f, 0.1f, 1.0f, 0.0001f);
                D_801779C0 = player->pos.z + D_80177D20 + 200.0f;
                if (D_80177A80 >= 0x578) {
                    D_801779C0 -= (D_80177A80 * 8) - 11200;
                }
            } else {
                Math_SmoothStepToF(&D_80177978, 0.0f, 0.1f, 1.0f, 0.0001f);
                D_801779A0 = 0.0f;
                D_801779B8 = player->pos.y + 75.0f;
                D_801779C0 = player->pos.z + D_80177D20 + 200.0f - ((D_80177A80 * 8) - 11200);
            }
            if (D_80177A80 >= 0x5B5) {
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.2f;
                Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
                player->unk_190 = 2.0f;
            } else {
                Math_SmoothStepToF(&D_80177A48[2], 0.23f, 1.0f, 0.001f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[0], 0.5f, 0.1f, 0.0005f, 0.0f);
            }
            if (D_80177A80 == 0x618) {
                func_800A6148();
            }
            if (D_80177A80 >= 0x5FB) {
                D_80178358 = 0xFF;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 8;
                if (D_80178340 == 0xFF) {
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
        case 0x1B8:
            D_80177840 = 0x64;
            break;
        case 0x280:
            func_800BA808(gMsg_ID_20010, RCID_FOX);
            break;
        case 0x2D8:
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
        case 0x36B:
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
        case 0x3FD:
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
        case 0x4A2:
            D_80177830 = 1;
            break;
        case 0x56A:
            D_80177830 = 0;
            break;
        case 0x5B4:
            Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_190 = player->unk_194 = 5.0f;
            break;
        case 0x578:
            if (gTeamShields[3] > 0) {
                gActors[0].unk_0B8 = 2;
            }
            break;
        case 0x5DC:
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            break;
        case 0x58C:
            if (gTeamShields[2] > 0) {
                gActors[1].unk_0B8 = 2;
            }
            break;
        case 0x5A0:
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

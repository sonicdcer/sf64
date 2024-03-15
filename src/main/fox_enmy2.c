#include "global.h"

s32 D_800CFF80[4] = { 0, 0, 0, 0 };
s32 D_800CFF90 = 0;
s32 D_80161690;

#include "fox_enmy2_assets.h"
#include "assets/ast_arwing.h"
#include "assets/ast_training.h"
#include "assets/ast_warp_zone.h"
#include "assets/ast_allies.h"
#include "assets/ast_sector_x.h"
#include "assets/ast_aquas.h"
#include "assets/ast_7_ti_1.h"
#include "assets/ast_andross.h"
#include "assets/ast_enmy_space.h"

void func_8006A7B0(u16* msg, s32 character) {
    PRINTF("Enm->obj.pos.y + tmp_xyz.y=<%10.3f>\n");
    if ((gRadioState == 0) || (D_80177D68 != character)) {
        Radio_PlayMessage(msg, character);
    }
}

void func_8006A800(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Effect_Initialize(effect);

    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_361;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->unk_48 = 3;

    if (Rand_ZeroOne() < 0.5f) {
        effect->unk_48 = -effect->unk_48;
    }

    effect->unk_4A = 100;
    effect->scale2 = arg4 * 0.25f;
    effect->scale1 = 0.3f;

    if (arg4 < 10.0f) {
        effect->scale1 = 0.1f;
    }

    effect->obj.rot.z = RAND_FLOAT(360.0f);
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8006A900(f32 xPos, f32 yPos, f32 zPos, f32 arg3) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_8006A800(&gEffects[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

void func_8006A96C(Actor* actor) {
}

void func_8006A978(Actor* actor) {
}

void func_8006A984(Effect* effect, f32 xPos, f32 yPos, f32 zPos) {
    Effect_Initialize(effect);
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_365;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->unk_44 = 40;
    effect->scale2 = 5.0f;
    effect->scale1 = RAND_FLOAT_CENTERED(2.0f);
    effect->vel.y = 10.0f;
    effect->obj.rot.z = RAND_FLOAT(360.0f);
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8006AA3C(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_8006A984(&gEffects[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_8006AA98(Object_80* obj80) {
    Vec3f sp24;
    Vec3f sp18;

    Texture_Scroll(D_60038F8, 32, 32, 1);
    if ((gGameFrameCount % 4) == 0) {
        Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);

        sp18.x = RAND_FLOAT_CENTERED(700.0f);
        sp18.y = RAND_FLOAT(50.0f);
        sp18.z = 700.0f;

        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp18, &sp24);
        func_8006AA3C(obj80->obj.pos.x + sp24.x, obj80->obj.pos.y + sp24.y + 50.0f, obj80->obj.pos.z + sp24.z);
    }
}

bool func_8006ABA4(Actor* actor) {
    if ((fabsf(actor->obj.pos.x - gPlayer[0].pos.x) < 700.0f) &&
        (fabsf(actor->obj.pos.y - gPlayer[0].pos.y) < 700.0f)) {
        return true;
    }
    return false;
}

void func_8006AC08(Actor* actor) {
    f32 sp2C;

    if (func_8006ABA4(actor) && (actor->timer_0BC == 0)) {
        func_8007F11C(OBJ_EFFECT_353, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, D_80177828);
        actor->timer_0BC = 20;
    }
    sp2C = actor->obj.pos.z + D_80177D20;
    actor->obj.rot.y = Math_RadToDeg(Math_Atan2F(gPlayer[0].camEye.x - actor->obj.pos.x, gPlayer[0].camEye.z - sp2C));
    actor->obj.rot.x =
        -Math_RadToDeg(Math_Atan2F(gPlayer[0].camEye.y - actor->obj.pos.y,
                                   sqrtf(SQ(gPlayer[0].camEye.z - sp2C) + SQ(gPlayer[0].camEye.x - actor->obj.pos.x))));
}

void func_8006AD18(Actor* actor) {
    bool sp34;

    actor->gravity = 1.5f;
    sp34 = false;
    actor->obj.rot.y = Math_RadToDeg(
        Math_Atan2F(gPlayer[gPlayerNum].pos.x - actor->obj.pos.x, gPlayer[gPlayerNum].unk_138 - actor->obj.pos.z));
    if (actor->obj.pos.y < -500.0f) {
        actor->obj.pos.y = -500.0f;
        actor->vel.y = 0.0f;
        actor->vel.x = 0.0f;
        actor->vel.z = 0.0f;
        sp34 = true;
        actor->iwork[1] = true;
    }

    if (!(gGameFrameCount & 0x1F)) {
        func_8007F11C(OBJ_EFFECT_353, actor->obj.pos.x, actor->obj.pos.y + 180.0f, actor->obj.pos.z, D_80177828);
    }

    switch (actor->state) {
        case 0:
            actor->unk_0B6++;

            if (actor->unk_0B6 >= 30) {
                actor->unk_0B6 = 0;
            }

            if (actor->unk_0B6 == 0x15) {
                actor->state = 1;

                actor->vel.y = 40.0f;
                actor->vel.z = -40.0f;
                actor->vel.x = 10.0f;

                actor->iwork[0] = 1 - actor->iwork[0];

                if (actor->iwork[0]) {
                    actor->vel.x *= -1.0f;
                }

                if (actor->iwork[1]) {
                    actor->vel.x = 0.0f;
                    actor->vel.z = -20.0f;
                }
            }
            break;

        case 1:
            if (actor->vel.y > 10.0f) {
                actor->unk_0B6++;
                if (actor->unk_0B6 >= 30) {
                    actor->unk_0B6 = 29;
                }
            } else {
                actor->unk_0B6--;
                if (actor->unk_0B6 < 0) {
                    actor->unk_0B6 = 0;
                }
            }

            if (sp34) {
                actor->state = 0;
            }
            break;
    }

    if (actor->unk_0D0 != 0) {
        actor->health -= 10;
        if ((actor->health <= 0) || (actor->unk_0D0 >= 2)) {
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y + 180.0f, actor->obj.pos.z, 10.0f);
            func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 180.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                          actor->vel.z, 8.0f, 30);
            Object_Kill(&actor->obj, actor->sfxSource);
            func_8007A6F0(&actor->obj.pos, 0x2903A008);
            gHitCount += actor->info.bonus;
            D_80177850 = 15;
        } else {
            actor->unk_0D0 = 0;
            actor->timer_0C6 = 20;
            AUDIO_PLAY_SFX(0x2903300E, actor->sfxSource, 4);
            func_8007D1E0(actor->obj.pos.x, actor->obj.pos.y + 180.0f, actor->obj.pos.z, 5.0f);
        }
    }
}

void func_8006B094(Actor* actor) {
}

s16 D_800CFF94[16] = {
    0, 98, 96, 94, 92, 90, 88, 86, 84, 82, 80, 78, 76, 74, 72, 70,
};
u8 D_800CFFB4[16] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2 };
f32 D_800CFFC4[16] = {
    1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.99f, 0.98f, 0.94f, 0.88f, 0.8f, 1.0f,
};
Gfx* D_800D0004[3] = { D_ENMY_SPACE_4000170, D_ENMY_SPACE_40084D0, D_ENMY_SPACE_400A630 };

void func_8006B0A0(Actor* actor) {
    Vec3f sp34;
    s32 temp_hi;

    actor->unk_04E++;

    if (actor->unk_04E >= 100) {
        actor->unk_04E = 0;
    }

    D_80176558[actor->unk_046][actor->unk_04E] = actor->obj.pos.x;
    D_80176878[actor->unk_046][actor->unk_04E] = actor->obj.pos.y;
    D_80176B98[actor->unk_046][actor->unk_04E] = actor->obj.pos.z;
    D_80176EB8[actor->unk_046][actor->unk_04E] = actor->obj.rot.x;
    D_801771D8[actor->unk_046][actor->unk_04E] = actor->obj.rot.y;
    D_80177500[actor->unk_046][actor->unk_04E] = actor->obj.rot.z;

    actor->obj.rot.x -= 10.0f;
    actor->obj.rot.y += 3.0f;
    actor->obj.rot.z += 5.0f;

    Math_Vec3fFromAngles(&sp34, actor->obj.rot.x, actor->obj.rot.y, 40.0f);

    actor->vel.x = sp34.x;
    actor->vel.y = sp34.y;
    actor->vel.z = sp34.z;

    if ((actor->timer_0BC == 0) && !(gGameFrameCount & 3)) {
        temp_hi = (D_800CFF94[actor->unk_04A] + actor->unk_04E) % 100;
        if (actor->unk_04A == 0) {
            func_8007D2C8(D_80176558[actor->unk_046][temp_hi], D_80176878[actor->unk_046][temp_hi],
                          D_80176B98[actor->unk_046][temp_hi], 7.0f);
        } else {
            func_8007D2C8(D_80176558[actor->unk_046][temp_hi], D_80176878[actor->unk_046][temp_hi],
                          D_80176B98[actor->unk_046][temp_hi], 4.0f);
        }

        AUDIO_PLAY_SFX(0x2903B009, actor->sfxSource, 4);
        actor->unk_04A++;

        if (actor->unk_04A > 15) {
            Object_Kill(&actor->obj, actor->sfxSource);
            D_80176550[actor->unk_046] = 0;
            gHitCount += actor->info.bonus;
            D_80177850 = 15;
        }
    }
}

void func_8006B46C(Actor* actor, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, f32 arg8,
                   s32 arg9) {
    Vec3f sp34 = { 0.0f, 0.0f, 0.0f };

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, arg1, arg2, arg3 + D_80177D20, 1);

    if (arg7 != 1) {
        Matrix_RotateY(gGfxMatrix, M_DTOR * arg5, 1);
        Matrix_RotateX(gGfxMatrix, M_DTOR * arg4, 1);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * arg6, 1);
    }

    Matrix_Scale(gGfxMatrix, arg8, arg8, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    if (arg7 != 1) {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        if ((arg7 == 0) && (actor->timer_0CA[0] != 0)) {
            sp34.y += actor->info.unk_1C;
            Matrix_MultVec3f(gGfxMatrix, &sp34, D_80161578);
            if (D_80161578->z > -500.0f) {
                actor->timer_0CA[0] = 0;
            }
        }
    } else {
        RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    }

    if (arg9 != 0) {
        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
    }

    gSPDisplayList(gMasterDisp++, D_800D0004[arg7]);
    Matrix_Pop(&gGfxMatrix);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_8006B74C(Actor* actor) {
    s16 var_s0;
    s16 temp_hi;

    for (var_s0 = actor->unk_04A; var_s0 < 16; var_s0++) {
        temp_hi = (D_800CFF94[var_s0] + actor->unk_04E) % 100;
        func_8006B46C(actor, D_80176558[actor->unk_046][temp_hi], D_80176878[actor->unk_046][temp_hi],
                      D_80176B98[actor->unk_046][temp_hi], D_80176EB8[actor->unk_046][temp_hi],
                      D_801771D8[actor->unk_046][temp_hi], D_80177500[actor->unk_046][temp_hi], D_800CFFB4[var_s0],
                      D_800CFFC4[var_s0], actor->timer_0C6 & 1);
    }
}

void func_8006B95C(Object_80* obj80) {
    obj80->obj.pos.x += obj80->vel.x;
    obj80->obj.pos.y += obj80->vel.y;
    obj80->obj.pos.z += obj80->vel.z;

    switch (obj80->state) {
        case 0:
            obj80->vel.y -= 1.0f;

            if (obj80->obj.pos.y < gGroundLevel + 40.0f) {
                obj80->obj.pos.y = gGroundLevel + 40.0f;
                AUDIO_PLAY_SFX(0x19130003, obj80->sfxSource, 0);
                obj80->state = 2;
                obj80->vel.y = 0.0f;
            }
            break;

        case 2:
            break;

        case 1:
            obj80->obj.rot.x += 10.0f;
            break;
    }
}

void func_8006BA64(Effect* effect, f32 xPos, f32 yPos, f32 zPos) {
    Effect_Initialize(effect);
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_375;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->scale2 = 0.0f;
    effect->scale1 = 0.12f;
    effect->obj.rot.y = RAND_FLOAT(360.0f);
    effect->unk_60.y = RAND_FLOAT_CENTERED(3.0f);
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8006BB1C(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_8006BA64(&gEffects[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_8006BB78(Actor* actor) {
    Vec3f sp44;

    switch (actor->state) {
        case 0:
            actor->fwork[10] = RAND_FLOAT_CENTERED(1000.0f);
            actor->state = 1;
            break;

        case 1:
            switch (actor->unk_046) {
                case 0:
                    actor->fwork[0] += 2.0f;
                    if (actor->fwork[0] > 10.0f) {
                        actor->unk_046 = 1;
                    }
                    break;

                case 1:
                    actor->fwork[0] -= 2.0f;
                    if (actor->fwork[0] < -10.0f) {
                        actor->unk_046 = 0;
                    }
                    break;
            }

            Math_Vec3fFromAngles(&sp44, actor->obj.rot.x, actor->obj.rot.y, 10.0f);
            actor->vel.x = sp44.x;
            actor->vel.y = sp44.y;
            actor->vel.z = sp44.z;
            if (fabsf((actor->obj.pos.z + actor->fwork[10]) - gPlayer[0].unk_138) < 3000.0f) {
                actor->state = 2;
                actor->timer_0BC = 20;
                actor->vel.z = 0.0f;
                actor->vel.x = 0.0f;
            }
            break;

        case 2:
            if (actor->timer_0BC == 0) {
                actor->state = 3;
                actor->unk_0B6 = 1;
                actor->obj.pos.y += 30.0f;
                actor->timer_0BC = 30;
                actor->vel.y = 30.0f;
                actor->gravity = 1.0f;
            }
            break;

        case 3:
            if (actor->timer_0BC == 1) {
                func_8007F11C(OBJ_EFFECT_353, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, D_80177828);
            }
            if (actor->vel.y < 12.0f) {
                Math_SmoothStepToF(&actor->obj.rot.x, 180.0f, 0.1f, 7.0f, 0.01f);
            }
            if (actor->obj.pos.y < (gGroundLevel + 10.0f)) {
                actor->obj.pos.y = gGroundLevel;
                actor->state = 4;
                actor->unk_0B6 = 0;
                actor->vel.y = 0.0f;
                actor->gravity = 0.0f;
                actor->obj.rot.x = 0.0f;
            }
            break;

        case 4:
            if (actor->timer_0BC == 0) {
                actor->state = 0;
                actor->obj.rot.y = RAND_FLOAT(360.0f);
            }
            break;
    }

    if ((actor->obj.pos.y <= (gGroundLevel + 10.0f)) && !(gGameFrameCount & 7)) {
        func_8006BB1C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z);
    }

    if (!(gGameFrameCount & 7)) {
        func_8006A900(RAND_FLOAT_CENTERED(50.0f) + actor->obj.pos.x, actor->obj.pos.y + 10.0f,
                      RAND_FLOAT_CENTERED(50.0f) + actor->obj.pos.z, 0.5f);
    }

    if ((actor->unk_0D0 != 0) && (actor->unk_0B6 != 0)) {
        func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, actor->vel.y, 0.0f, 3.0f, 5);
        Object_Kill(&actor->obj, actor->sfxSource);
        actor->unk_044 = 1;
        func_80066254(actor);
    }
    actor->unk_0D0 = 0;
}

f32 D_800D001C[5] = { 0.0f, 30.0f, 60.0f, -60.0f, -30.0f }; // could be in-function
void func_8006BF7C(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_800D001C); i++) {
        func_8006A900(xPos + D_800D001C[i], yPos, zPos, 6.0f);
    }
}

Vec3f D_800D0030 = { 0.0f, -10.0f, 0.0f }; // could be in-function
void func_8006C008(Actor* actor) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;

    switch (actor->state) {
        case 40:
            if (actor->unk_04A & 4) {
                actor->obj.pos.x = gPlayer[0].pos.x + actor->fwork[3];
                actor->obj.pos.z = gPlayer[0].unk_138 + actor->fwork[4];
            }

            actor->obj.rot.x += actor->fwork[0];
            actor->obj.rot.y += actor->fwork[1];
            actor->obj.rot.z += actor->fwork[2];

            if (((actor->unk_04A & 1) == 1) && !(actor->timer_0BC & 3)) {
                func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->scale);
            }

            if ((actor->fwork[5] + actor->obj.pos.y) < 0.0f) {
                if (actor->iwork[0] >= 2) {
                    actor->fwork[2] = 0.0f;
                    actor->fwork[1] = 0.0f;
                    actor->fwork[0] = 0.0f;
                    actor->vel.x = 0.0f;
                    actor->vel.y = 0.0f;
                    actor->vel.z = 0.0f;
                    actor->gravity = 0.0f;
                } else {
                    if (actor->unk_04A & 4) {
                        switch (actor->unk_046) {
                            case 2:
                                AUDIO_PLAY_SFX(0x19000024, actor->sfxSource, 4);
                                break;
                            case 25:
                                AUDIO_PLAY_SFX(0x29003031, actor->sfxSource, 4);
                                break;
                        }
                    }
                    Math_SmoothStepToF(&actor->fwork[0], 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&actor->fwork[1], 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&actor->fwork[2], 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&actor->vel.x, 0.0f, 0.5f, 1.0f, 0.01f);
                    actor->obj.pos.y = 0.0f;
                    actor->iwork[0] += 1;
                    if (actor->vel.y < 0.0f) {
                        if (actor->unk_04A & 2) {
                            actor->vel.y = actor->vel.y * -0.05f;
                        } else {
                            actor->vel.y = actor->vel.y * -0.3f;
                        }
                    }
                }
                actor->unk_04A &= ~4;
            }
            break;

        case 45:
            actor->obj.rot.y += actor->fwork[0];
            actor->obj.rot.z += actor->fwork[1];
            break;

        case 46:
            actor->obj.rot.x += actor->fwork[0];
            actor->obj.rot.y += actor->fwork[1];
            actor->obj.rot.z += actor->fwork[2];

            func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp4C, &sp48, &sp4C);

            if (actor->obj.pos.y < sp48) {
                actor->obj.pos.y = sp48;
                actor->iwork[2]++;
                if (actor->iwork[2] >= 2) {
                    actor->vel.x = 0.0f;
                    actor->vel.y = 0.0f;
                    actor->vel.z = 0.0f;
                    actor->fwork[0] = 0.0f;
                    actor->fwork[1] = 0.0f;
                    actor->fwork[2] = 0.0f;
                    actor->gravity = 0.0f;
                } else {
                    actor->vel.y = -actor->vel.y * 0.3f;
                }
            }
            break;

        case 47:
            func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp4C, &sp48, &sp4C);

            if (actor->obj.pos.y < actor->fwork[3] + (-100.0f + sp48)) {
                actor->obj.pos.y = actor->fwork[3] + sp48;
                actor->iwork[0] = 0;
                actor->iwork[2] = 1;
                actor->vel.x = 0.0f;
                actor->vel.y = 0.0f;
                actor->vel.z = 0.0f;
                actor->gravity = 0.0f;
                actor->fwork[0] = 0.0f;
                actor->fwork[1] = 0.0f;
                actor->fwork[2] = 0.0f;
            }

            actor->obj.rot.x += actor->fwork[0];
            actor->obj.rot.y += actor->fwork[1];
            actor->obj.rot.z += actor->fwork[2];

            if ((actor->iwork[0] == 1) && !(gGameFrameCount & 7)) {
                func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 2.0f);
            }

            if (actor->iwork[2] == 1) {
                if ((actor->iwork[1] == 1) && ((actor->unk_048 == 8) || (actor->unk_048 == 9))) {
                    func_8007D2C8(actor->obj.pos.x, sp48 + 20.0f, actor->obj.pos.z, 8.0f);
                }
                Object_Kill(&actor->obj, actor->sfxSource);
            }
            break;

        case 48:
        case 49:
        case 51:
        case 52:
        case 53:
        case 55:
            if (((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                 (actor->obj.pos.y < (gGroundLevel + 10.0f))) &&
                (actor->timer_0BE == 0)) {
                func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 50.0f, actor->scale * 10.0f);
                Object_Kill(&actor->obj, actor->sfxSource);
                func_8007A6F0(&actor->obj.pos, 0x2903A008);
            }
            break;

        case 56:
            Math_SmoothStepToF(&actor->scale, 0.0f, 0.1f, 2.0f, 0.0001f);
            if (((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                 (actor->obj.pos.y < (gGroundLevel + 10.0f))) &&
                (actor->timer_0BE == 0)) {
                func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 50.0f, actor->scale * 10.0f);
                Object_Kill(&actor->obj, actor->sfxSource);
                func_8007A6F0(&actor->obj.pos, 0x2903A008);
            }
            break;

        case 58:
            if (actor->unk_046 == 0) {
                actor->unk_046++;
                actor->fwork[0] = RAND_FLOAT_CENTERED(30.0f);
                actor->fwork[1] = RAND_FLOAT_CENTERED(30.0f);
                actor->fwork[2] = RAND_FLOAT_CENTERED(30.0f);
            }

            actor->obj.rot.x += actor->fwork[0];
            actor->obj.rot.y += actor->fwork[1];
            actor->obj.rot.z += actor->fwork[2];

            if (((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                 (actor->obj.pos.y < (gGroundLevel + 10.0f))) &&
                (actor->timer_0BE == 0)) {
                func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 50.0f, actor->scale * 10.0f);
                Object_Kill(&actor->obj, actor->sfxSource);
                func_8007A6F0(&actor->obj.pos, 0x2903A008);
            }
            break;

        case 54:
            if (((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                 (actor->obj.pos.y < (gGroundLevel + 10.0f))) &&
                (actor->timer_0BE == 0)) {
                func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 70.0f, actor->scale * 20.0f);
                func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 70.0f, actor->scale * 20.0f);
                Object_Kill(&actor->obj, actor->sfxSource);
                func_8007A6F0(&actor->obj.pos, 0x2903A008);
            }
            break;

        case 50:
            if ((actor->iwork[0] == 2) && (actor->timer_0BC == 0)) {
                func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 5.0f);
                actor->timer_0BC = 4;
            }
            actor->obj.rot.x += actor->fwork[0];
            actor->obj.rot.y += actor->fwork[1];
            actor->obj.rot.z += actor->fwork[2];
            if (func_8006351C(actor->index, &actor->obj.pos, &D_800C9F2C, 1) != 0) {
                actor->vel.x *= -0.7f;
            }
            if (actor->obj.pos.y < gGroundLevel) {
                Object_Kill(&actor->obj, actor->sfxSource);
            }
            break;

        case 57:
            actor->obj.rot.x += actor->fwork[0];
            actor->obj.rot.y += actor->fwork[1];
            actor->obj.rot.z += actor->fwork[2];

            if (func_8006351C(actor->index, &actor->obj.pos, &D_800C9F2C, 1) != 0) {
                actor->vel.x *= -0.7f;
            }

            if (actor->obj.pos.y < gGroundLevel) {
                if (actor->iwork[0] >= 3) {
                    actor->vel.y = 0.0f;
                    actor->gravity = 0.0f;
                    actor->fwork[2] = 0.0f;
                    actor->fwork[1] = 0.0f;
                    actor->fwork[0] = 0.0f;
                } else {
                    actor->iwork[0]++;
                    actor->vel.y = -actor->vel.y * 0.7f;
                    actor->obj.pos.y = gGroundLevel;
                    actor->fwork[0] *= 0.5f;
                    actor->fwork[1] *= 0.5f;
                    actor->fwork[2] *= 0.5f;
                }
            }
            break;

        default:
            if (actor->unk_046 == 0) {
                actor->unk_046++;
                actor->fwork[10] = RAND_FLOAT_CENTERED(30.0f);
                actor->fwork[11] = RAND_FLOAT_CENTERED(30.0f);
                actor->fwork[12] = RAND_FLOAT_CENTERED(30.0f);
            }

            actor->obj.rot.x += actor->fwork[10];
            actor->obj.rot.y += actor->fwork[11];
            actor->obj.rot.z += actor->fwork[12];

            if (actor->state == 0x46) {
                if ((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                    (actor->obj.pos.y < (gGroundLevel + 10.0f))) {
                    Object_Kill(&actor->obj, actor->sfxSource);
                }
            } else if (actor->state == 0x27) {
                if (((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                     (actor->obj.pos.y < (gGroundLevel + 10.0f))) &&
                    (actor->timer_0BE == 0)) {
                    func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
                    Object_Kill(&actor->obj, actor->sfxSource);
                    func_8007A6F0(&actor->obj.pos, 0x2903A008);
                }
            } else if (((actor->state >= 0x29) && (actor->state < 0x2D)) || (actor->state == 0x3B)) {
                if (((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0)) &&
                    (actor->timer_0BE == 0)) {
                    func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 2.0f * actor->scale);
                    Object_Kill(&actor->obj, actor->sfxSource);
                    func_8007A6F0(&actor->obj.pos, 0x2903A008);
                }
                if (func_800A73E4(&sp44, &sp40, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z)) {
                    func_8007B228(actor->obj.pos.x, sp44, actor->obj.pos.z, 2.0f);
                    Object_Kill(&actor->obj, actor->sfxSource);
                }
            } else if (actor->state >= 0xA) {
                if (!(actor->timer_0BC & 3)) {
                    func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->scale);
                }
                if (((actor->timer_0BC == 0) || (func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                     (actor->obj.pos.y < (gGroundLevel + 10.0f))) &&
                    (actor->timer_0BE == 0)) {
                    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                                  actor->vel.z, actor->scale * 1.5f, 4);
                    Object_Kill(&actor->obj, actor->sfxSource);
                    func_8007A6F0(&actor->obj.pos, 0x2903A008);
                }
            } else {
                if ((actor->state == 3) && !(actor->timer_0BC & 7)) {
                    func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.5f);
                }
                if ((func_8006351C(actor->index, &actor->obj.pos, &D_800D0030, 1) != 0) ||
                    (actor->obj.pos.y < (gGroundLevel + 10.0f))) {
                    if (gLevelType == LEVELTYPE_SPACE) {
                        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 2.0f);
                        Object_Kill(&actor->obj, actor->sfxSource);
                        return;
                    }

                    actor->vel.y *= -0.2f;
                    actor->obj.pos.y += actor->vel.y * 5.0f;
                    actor->iwork[0]++;

                    if (actor->iwork[0] >= 2) {
                        Object_Kill(&actor->obj, actor->sfxSource);
                    }

                    if ((actor->state != 2) && (actor->state != 4)) {
                        func_8006BF7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z);
                    } else if (gCurrentLevel == LEVEL_FORTUNA) {
                        func_8007BC7C(RAND_FLOAT_CENTERED(10.0f) + actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z,
                                      1.0f);
                        func_8007BC7C(RAND_FLOAT_CENTERED(10.0f) + actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z,
                                      1.0f);
                        func_8007BC7C(RAND_FLOAT_CENTERED(10.0f) + actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z,
                                      1.0f);
                    }
                }

                if (actor->state == 4) {
                    if ((gCurrentLevel == LEVEL_KATINA) && (actor->timer_0BC == 0)) {
                        Object_Kill(&actor->obj, actor->sfxSource);
                    }
                } else {
                    if (actor->timer_0BC & 1) {
                        func_8007D24C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
                    }
                    if ((gLevelType == LEVELTYPE_SPACE) && (actor->timer_0BC == 0)) {
                        Object_Kill(&actor->obj, actor->sfxSource);
                    }
                }
            }
            break;
    }
}

void func_8006D0F4(Actor* actor) {
    s32 i;
    s32 j;
    f32* hitboxData;
    Vec3f spA8;
    Vec3f sp9C;
    s32 temp_fs0;
    s32 temp_fs1;
    s32 temp_fs2;
    s32 count;
    Hitbox* hitbox;

    D_80161A7C = 110;
    D_80161A80 = 110;
    D_80161A84 = 110;
    D_80178544 = 40;

    for (i = 0; i < ARRAY_COUNT(gObjects80); i++) {
        if ((gObjects80[i].obj.status == OBJ_ACTIVE) && ((gPlayer[0].unk_138 - 3000.0f) < gObjects80[i].obj.pos.z)) {
            hitboxData = D_800CF964[gObjects80[i].obj.id];
            count = *hitboxData;
            if (count != 0) {
                Matrix_RotateY(gCalcMatrix, -gObjects80[i].obj.rot.y * M_DTOR, 0);

                spA8.x = actor->obj.pos.x - gObjects80[i].obj.pos.x;
                spA8.y = actor->obj.pos.y - gObjects80[i].obj.pos.y;
                spA8.z = actor->obj.pos.z - gObjects80[i].obj.pos.z;

                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);

                temp_fs0 = gObjects80[i].obj.pos.x + sp9C.x;
                temp_fs1 = gObjects80[i].obj.pos.y + sp9C.y;
                temp_fs2 = gObjects80[i].obj.pos.z + sp9C.z;
                hitboxData++;

                for (j = 0; j < count; j++) {
                    hitbox = (Hitbox*) hitboxData;
                    if (func_800A78C4(hitbox, gObjects80[i].obj.pos.x, gObjects80[i].obj.pos.y, gObjects80[i].obj.pos.z,
                                      temp_fs0, temp_fs1, temp_fs2)) {
                        D_80161A7C = 10;
                        D_80161A80 = 10;
                        D_80161A84 = 10;
                        actor->unk_0C8 = 5;
                    }
                    hitboxData += 6;
                }
            }
        }
    }
}

void func_8006D350(Object_80* obj80) {
    obj80->obj.rot.z += 1.0f;
}

UnkStruct_D003C D_800D003C[108] = {
    { D_40068F0, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_4006E90, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { D_4009800, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_40073C0, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_4007AF0, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_6011F90, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 0.0f, 1 },
    { D_4000710, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 2, 0, 1, 1, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 6, 0, 1.0f, 1 },
    { D_ENMY_SPACE_400BD20, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_ENMY_SPACE_4001310, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 6, 0, 1.0f, 1 },
    { D_ENMY_SPACE_400B390, D_800CBE8C, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_6018C00, D_800CBE8C, 2.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_601F2A0, D_800CBEFC, 7.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_ENMY_SPACE_400AAE0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_ENMY_SPACE_4000650, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 6, 0, 1.0f, 1 },
    { D_6016190, D_60282A0, -2.0f, 2100.0f, 3000.0f, 0, 0, 7, 0, 0.0f, 5 },
    { D_SX_6023500, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_SX_6022DF0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 2, 1, 1, 0, 0.0f, 1 },
    { NULL, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 0.0f, 1 },
    { D_ENMY_SPACE_4008FA0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_SX_60285F0, D_SX_603298C, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_SX_600AF70, D_SX_6032904, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_SX_6023E30, D_SX_6032970, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_SX_603285C, 2.5f, 100.0f, 3000.0f, 2, 0, 0, 0, 1.0f, 1 },
    { D_SX_6001CE0, D_SX_6032938, 3.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 1.0f, 1 },
    { D_SX_6000840, D_SX_6032954, 1.0f, 100.0f, 3000.0f, 2, 1, 0, 0, 1.0f, 1 },
    { D_6012A40, D_6028254, -2.0f, 2100.0f, 3001.0f, 0, 0, 7, 0, 0.0f, 2 },
    { NULL, D_60280E0, -2.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 3 },
    { D_SX_6009950, D_SX_6032878, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { D_SX_600B2B0, D_SX_6032894, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_SX_600A2E0, D_SX_60328B0, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBEFC, 2.0f, 200.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_SX_600B830, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_SX_603238C, 1.0f, 500.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { D_SX_6020D20, D_SX_60328CC, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBF34, 1.0f, 100.0f, 3001.0f, 2, 0, 0, 0, 0.0f, 1 },
    { D_60097E0, D_6034478, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_601D730, D_603450C, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { D_60102C0, D_6034588, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_6017B60, D_800CBEC4, -1.0f, 300.0f, 3001.0f, 0, 0, 0, 0, 1.0f, 1 },
    { D_6004D00, D_800CBEC4, 1.0f, 100.0f, 3000.0f, 1, 0, 4, 0, 1.0f, 1 },
    { D_601A880, D_800CBE8C, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { NULL, D_603405C, 0.3f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { NULL, D_603405C, 0.3f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { NULL, D_603405C, 0.3f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { D_6015D60, D_6034124, 2.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { NULL, D_602C1A0, -1.0f, 1000.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_SX_600B540, D_SX_60328E8, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_ENMY_SPACE_4000EC0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_ENMY_SPACE_4008D50, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBF34, -1.0f, 2000.0f, 3000.0f, 0, 0, 3, 0, 0.0f, 1 },
    { D_60102C0, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_601F3D0, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_6022B10, D_800CBF34, 2.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 0.0f, 1 },
    { D_60209F0, D_800CBF34, 2.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 0.0f, 1 },
    { D_6019430, D_800CBEC4, 2.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_6018960, D_800CBE8C, 2.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_6009F50, D_800CBF34, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBEC4, 3.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_600C2A0, D_800CBEC4, -1.0f, 100.0f, 8000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { D_600BD40, D_800CBE8C, -1.0f, 100.0f, 8000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { NULL, D_602F604, 3.0f, 100.0f, 3000.0f, 2, 0, 1, 0, 1.0f, 1 },
    { D_60205D0, D_603445C, 3.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_60036A0, D_6034664, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_601AD70, D_800CBF34, 4.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 0.0f, 1 },
    { D_3007650, D_800CBF34, 1.0f, 100.0f, 3000.0f, 2, 0, 5, 0, 0.0f, 1 },
    { D_60034D0, D_60347D4, 3.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { D_6005360, D_6034770, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_600F6C0, D_60347F0, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_601B610, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 1, 0, 0.0f, 1 },
    { D_601C6A0, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 1, 0, 0.0f, 1 },
    { D_60188D0, D_603486C, 3.0f, 100.0f, 3001.0f, 0, 0, 1, 0, 0.0f, 1 },
    { NULL, D_800CBEA8, 1.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 1.0f, 0 },
    { NULL, D_602C294, 1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 1.0f, 1 },
    { NULL, D_601B474, -1.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBF34, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_AQ_6030B4C, 1.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 60.0f, 1 },
    { D_9012180, D_601B43C, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { D_900EFC0, D_800CBF34, 1.0f, 100.0f, 3000.0f, 1, 1, 0, 0, 0.0f, 1 },
    { NULL, D_AQ_6030B30, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { NULL, D_AQ_6030B14_f32, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_601C520, D_60368FC, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { D_600AF40, D_60368E0, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { D_WZ_7000C40, D_800CC0D4, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_WZ_70010E0, D_800CC0F0, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_WZ_7000E80, D_800CC054, 2.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { D_WZ_70008F0, D_800CBE8C, -1.0f, 100.0f, 8000.0f, 1, 0, 0, 0, 0.0f, 0 },
    { D_WZ_7000280, D_800CC070, -1.0f, 1000.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 0 },
    { D_600AC70, D_800CBE8C, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { D_601A2B0, D_60364C0, 1.0f, 100.0f, 3000.0f, 1, 1, 0, 0, 0.0f, 1 },
    { D_6002500, D_601B944, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_60043F0, D_800CBF34, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_6004310, D_800CBF34, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_TR_6002740, D_TR_6009D18, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBF34, -1.0f, 500.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 0 },
    { NULL, D_800CBF34, -1.0f, 500.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 0 },
    { NULL, D_800CBEC4, 1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 0, 0, 6, 0, 0.0f, 0 },
    { D_6002890, D_60368E0, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
};
u8 D_800D0DBC[6][4] = {
    // could be in-function
    { 255, 255, 255, 255 }, { 160, 160, 255, 255 }, { 80, 80, 255, 255 },
    { 80, 255, 80, 255 },   { 255, 80, 80, 255 },   { 255, 255, 80, 255 },
};

void func_8006D36C(Actor* actor) {
    u16** var_v1;
    u16* temp_s1;
    u16* temp_v0_4;
    u16* test;
    s32 i;
    s32 j;

    switch (gCurrentLevel) {
        case LEVEL_VENOM_ANDROSS:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_C037E3C);
            break;
        case LEVEL_CORNERIA:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_603D9E8);
            break;
        case LEVEL_METEO:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_602F3AC);
            break;
        case LEVEL_AQUAS:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_AQ_60308B8);
            break;
        case LEVEL_TITANIA:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_600631C);
            break;
        case LEVEL_SECTOR_X:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_SX_60320D0);
            break;
        case LEVEL_UNK_4:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_60289FC);
            break;
        case LEVEL_AREA_6:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_6027F50);
            break;
        case LEVEL_SECTOR_Y:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_6032E18);
            break;
        case LEVEL_SOLAR:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_6020DD0);
            break;
        case LEVEL_ZONESS:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_602AAC0);
            break;
        case LEVEL_VENOM_1:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_601B1E4);
            break;
        case LEVEL_MACBETH:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_60381D8);
            break;
        case LEVEL_TRAINING:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_TR_6009B34);
            break;
        default:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_603D9E8);
            break;
    }
    temp_s1 = SEGMENTED_TO_VIRTUAL(var_v1[actor->unk_0E4]);

    switch (temp_s1[actor->unk_0E6] & 0xFE00) {
        case EVOP_127 << 9:
            actor->state = 200;
            if (actor->info.unk_10 > 10000.0f) {
                actor->info.unk_10 = 100.0f;
            }
            break;

        case EVOP_104 << 9:
            Audio_KillSfxBySource(actor->sfxSource);
            actor->unk_0B4 = temp_s1[actor->unk_0E6 + 1];

            if (actor->unk_0B4 == 40) {
                actor->timer_0C2 = 10000;
            } else {
                actor->timer_0C2 = 0;
            }

            actor->fwork[11] = 0.0f;
            actor->fwork[12] = 0.0f;

            if ((actor->unk_0B4 == 64) || (actor->unk_0B4 == 81)) {
                actor->fwork[15] = 0.0f;
            } else if (actor->unk_0B4 == 79) {
                actor->info.drawType = 2;
            }

            actor->health = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;

            if ((actor->unk_0B4 >= 200) && (actor->unk_0B4 < 300)) {
                actor->unk_046 = 100;
                actor->info.hitbox = D_800CBEC4;
                actor->info.unk_1C = 1.0f;

                for (i = 0; i < 2; i++) {
                    if (D_80176550[i] == 0) {
                        D_80176550[i] = 1;
                        actor->unk_046 = i;
                        for (j = 0; j < 100; j++) {
                            D_80176878[i][j] = actor->obj.pos.y;
                            D_80176B98[i][j] = actor->obj.pos.z;
                        }
                        if (actor->unk_0B4 == 200) {
                            AUDIO_PLAY_SFX(0x11032049, actor->sfxSource, 4);
                        }
                        break;
                    }
                }

                if (actor->unk_046 == 100) {
                    Object_Kill(&actor->obj, actor->sfxSource);
                }
            }

            if ((actor->unk_0B4 == 2) || (actor->unk_0B4 == 43)) {
                actor->unk_0C9 = 1;
                actor->iwork[11] = 1;
            }

            if (actor->unk_0B4 == 81) {
                actor->unk_0C9 = 1;
            }

            if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) {
                if (actor->unk_0B4 == 86) {
                    Audio_PlayFanfare(SEQ_ID_54, 20, 10, 10);
                }
                if (actor->unk_0B4 == 85) {
                    Audio_PlayFanfare(SEQ_ID_55, 20, 10, 10);
                }
            }

            if (actor->unk_0B4 == 103) {
                actor->unk_0B6 = 0;
            }

            if (actor->unk_0B4 == 104) {
                actor->unk_0B6 = Animation_GetFrameCount(&D_6014658) - 1;
            }

            if (actor->unk_0B4 < 200) {
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800D003C[actor->unk_0B4].unk_04);
                actor->scale = D_800D003C[actor->unk_0B4].unk_08;
                actor->info.unk_16 = D_800D003C[actor->unk_0B4].unk_14;
                actor->info.unk_14 = D_800D003C[actor->unk_0B4].unk_15;
                actor->info.unk_19 = D_800D003C[actor->unk_0B4].unk_17;
                actor->info.unk_1C = D_800D003C[actor->unk_0B4].unk_18;
                actor->info.bonus = D_800D003C[actor->unk_0B4].unk_1C;

                if (actor->unk_0B4 == 78) {
                    actor->info.damage = 0;
                }

                actor->info.unk_10 = D_800D003C[actor->unk_0B4].unk_0C;
                actor->fwork[25] = D_800D003C[actor->unk_0B4].unk_10;

                switch (D_800D003C[actor->unk_0B4].unk_16) {
                    case 1:
                        if (!((gCurrentLevel == LEVEL_SOLAR) || (actor->unk_0B4 == 6) ||
                              ((gCurrentLevel == LEVEL_CORNERIA) && (actor->unk_0B4 == 8)))) {
                            AUDIO_PLAY_SFX(0x31000011, actor->sfxSource, 4);
                        }
                        break;
                    case 2:
                        AUDIO_PLAY_SFX(0x3100000C, actor->sfxSource, 4);
                        break;
                    case 3:
                        AUDIO_PLAY_SFX(0x11030010, actor->sfxSource, 0);
                        break;
                    case 4:
                        AUDIO_PLAY_SFX(0x31012039, actor->sfxSource, 4);
                        break;
                    case 5:
                        AUDIO_PLAY_SFX(0x1900302B, actor->sfxSource, 0);
                        break;
                    case 6:
                        AUDIO_PLAY_SFX(0x31000014, actor->sfxSource, 4);
                        break;
                    case 7:
                        AUDIO_PLAY_SFX(0x31000015, actor->sfxSource, 4);
                        break;
                }

                if (gPlayer[0].unk_138 < actor->obj.pos.z) {
                    actor->info.unk_10 = 3000.0f;
                }

                if (actor->info.unk_16 == 0) {
                    actor->obj.rot.z = actor->fwork[23] = actor->unk_0F4.z;
                    if (actor->unk_0B4 != 31) {
                        actor->unk_0F4.z = 0.0f;
                    }
                }
            }
            func_8006D36C(actor);
            break;

        case EVOP_105 << 9:
            actor->iwork[12] = temp_s1[actor->unk_0E6 + 1];

            if (actor->iwork[12] < 4) {
                D_800CFF80[actor->iwork[12]] = actor->index;
            }

            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_113 << 9:
            actor->iwork[15] = temp_s1[actor->unk_0E6 + 1];
            actor->iwork[16] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_3 << 9:
            D_80177E78 = actor->index;
            D_80177F10.x = actor->obj.pos.x;
            D_80177F10.y = actor->obj.pos.y;
            D_80177F10.z = actor->obj.pos.z;
            D_80177E88.x = actor->obj.rot.x;
            D_80177E88.y = actor->obj.rot.y;
            D_80177E88.z = actor->obj.rot.z;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_112 << 9:
            if (temp_s1[actor->unk_0E6 + 1] == 0xE) {
                actor->state = 0xA;
                actor->fwork[11] = 0.0f;
                actor->unk_0E6 += 2;
                break;
            }

            if (temp_s1[actor->unk_0E6 + 1] == 0xF) {
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800CBEC4);
                actor->state = 0xB;
                actor->unk_0E6 += 2;
                break;
            }

            actor->unk_048 = temp_s1[actor->unk_0E6 + 1];

            if (actor->unk_048 == 3) {
                actor->timer_04C = 4;
            }

            if (actor->unk_048 == 0xD) {
                actor->timer_0BE = 0x32;
            }

            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_116 << 9:
            actor->unk_044 = temp_s1[actor->unk_0E6 + 1];
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_118 << 9:
            Audio_SetBaseSfxReverb(temp_s1[actor->unk_0E6 + 1]);
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_120 << 9:
            temp_v0_4 = Message_PtrFromId(temp_s1[actor->unk_0E6 + 1]);
            if ((temp_v0_4 != NULL) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3)) {
                Radio_PlayMessage(temp_v0_4, temp_s1[actor->unk_0E6] & 0x1FF);
            }
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_119 << 9:
            if ((D_80161A88 == 2) && (temp_s1[actor->unk_0E6 + 1] != 2)) {
                Audio_KillSfxBySourceAndId(gPlayer[0].sfxSource, 0x1100000B);
            }
            D_80161A88 = temp_s1[actor->unk_0E6 + 1];
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            actor->obj.status = OBJ_FREE;
            break;

        case EVOP_56 << 9:
            D_800CFF90 = temp_s1[actor->unk_0E6] & 0x1FF;
            D_80161690 = temp_s1[actor->unk_0E6 + 1];
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_57 << 9:
            gTeamShields[temp_s1[actor->unk_0E6 + 1]] = 0xFF;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_58 << 9:
            func_8001D2FC(actor->sfxSource, temp_s1[actor->unk_0E6 + 1]);
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_59 << 9:
            func_8001D3A0(actor->sfxSource, temp_s1[actor->unk_0E6 + 1]);
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_122 << 9:
            SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 50);
            SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 50);
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_121 << 9:
            if (actor->iwork[12] == temp_s1[actor->unk_0E6 + 1]) {
                actor->unk_0D0 = 1;
                actor->damage = temp_s1[actor->unk_0E6] & 0x1FF;
                actor->unk_0D4 = 100;
            } else {
                gTeamDamage[temp_s1[actor->unk_0E6 + 1]] = temp_s1[actor->unk_0E6] & 0x1FF;
            }
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_124 << 9:
            actor->iwork[7] = 1;
            for (i = 0; i < ARRAY_COUNT(gUnkEntities30); i++) {
                if (gUnkEntities30[i].mode == 0) {
                    gUnkEntities30[i].mode = 1;
                    gUnkEntities30[i].unk_28 = 3.0f;
                    gUnkEntities30[i].unk_04.x = actor->obj.pos.x - actor->vel.x;
                    gUnkEntities30[i].unk_04.y = actor->obj.pos.y - actor->vel.y;
                    gUnkEntities30[i].unk_04.z = actor->obj.pos.z - actor->vel.z;
                    gUnkEntities30[i].unk_2C = D_800D0DBC[temp_s1[actor->unk_0E6 + 1]][0];
                    gUnkEntities30[i].unk_2D = D_800D0DBC[temp_s1[actor->unk_0E6 + 1]][1];
                    gUnkEntities30[i].unk_2E = D_800D0DBC[temp_s1[actor->unk_0E6 + 1]][2];
                    gUnkEntities30[i].unk_2F = D_800D0DBC[temp_s1[actor->unk_0E6 + 1]][3];
                    actor->iwork[8] = i;
                    break;
                }
            }
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_125 << 9:
            actor->iwork[7] = 0;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_40 << 9:
            actor->state = 6;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->fwork[24] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            break;

        case EVOP_41 << 9:
            actor->state = 7;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->fwork[24] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            break;

        case EVOP_42 << 9:
            actor->state = 8;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->fwork[24] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            break;

        case EVOP_43 << 9:
            actor->state = 9;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->fwork[24] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            break;

        case EVOP_45 << 9:
            actor->state = 1;
            actor->iwork[1] = D_800CFF80[temp_s1[actor->unk_0E6] & 0x1FF];
            actor->fwork[17] = temp_s1[actor->unk_0E6 + 1];
            actor->timer_0BC = 0;
            actor->unk_0E6 += 2;
            break;

        case EVOP_44 << 9:
            actor->state = 0xD;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->fwork[24] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            break;

        case EVOP_46 << 9:
            actor->state = 0xE;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->fwork[24] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            break;

        case EVOP_47 << 9:
            actor->state = 0xF;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->fwork[24] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            break;

        case EVOP_96 << 9:
            actor->iwork[2] = temp_s1[actor->unk_0E6 + 1];
            actor->iwork[3] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_126 << 9:
            if (temp_s1[actor->unk_0E6 + 1] < actor->iwork[0]) {
                actor->unk_0E6 += 2;
                actor->iwork[0] = 0;
            } else if ((temp_s1[actor->unk_0E6] & 0x1FF) < 200) {
                actor->unk_0E6 = (temp_s1[actor->unk_0E6] & 0x1FF) * 2;
                actor->iwork[0]++;
            } else {
                actor->unk_0E4 = (temp_s1[actor->unk_0E6] & 0x1FF) - 200;
                actor->unk_0E6 = 0;
                actor->iwork[0] = 0;
            }
            func_8006D36C(actor);
            break;

        case EVOP_48 << 9:
            actor->state = 1;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->unk_0E6 += 2;
            break;

        case EVOP_0 << 9:
            actor->fwork[0] = temp_s1[actor->unk_0E6] & 0x7F;
            actor->fwork[1] = actor->fwork[0];
            actor->iwork[5] = temp_s1[actor->unk_0E6] & 0x180;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->state = 1;
            actor->unk_0E6 += 2;
            break;

        case EVOP_2 << 9:
            actor->fwork[22] = temp_s1[actor->unk_0E6 + 1] & 0xFF;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_1 << 9:
            actor->fwork[1] = temp_s1[actor->unk_0E6] & 0x7F;
            actor->iwork[5] = temp_s1[actor->unk_0E6] & 0x180;
            actor->timer_0BC = temp_s1[actor->unk_0E6 + 1];
            actor->state = 1;
            actor->unk_0E6 += 2;
            break;

        case EVOP_4 << 9:
            actor->timer_0C0 = temp_s1[actor->unk_0E6 + 1];
            actor->iwork[13] = 1;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_8 << 9:
            actor->iwork[13] = 0;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_9 << 9:
            actor->state = 2;
            actor->fwork[2] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[3] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->unk_0E6 += 2;
            break;

        case EVOP_10 << 9:
            actor->state = 3;
            actor->fwork[2] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[3] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->unk_0E6 += 2;
            break;

        case EVOP_11 << 9:
            actor->state = 4;
            actor->fwork[2] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[3] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->unk_0E6 += 2;
            break;

        case EVOP_12 << 9:
            actor->state = 5;
            actor->fwork[2] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[3] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->unk_0E6 += 2;
            break;

        case EVOP_16 << 9:
            actor->fwork[4] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[5] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->fwork[6] = 1.0f;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_17 << 9:
            actor->fwork[4] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[5] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->fwork[6] = -1.0f;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_18 << 9:
            actor->fwork[7] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[8] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->fwork[9] = 1.0f;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_19 << 9:
            actor->fwork[7] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[8] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->fwork[9] = -1.0f;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_20 << 9:
            actor->fwork[10] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[11] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->fwork[12] = 1.0f;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_21 << 9:
            actor->fwork[10] = temp_s1[actor->unk_0E6] & 0x1FF;
            actor->fwork[11] = temp_s1[actor->unk_0E6 + 1] * 0.1f;
            actor->fwork[12] = -1.0f;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_24 << 9:
            actor->iwork[6] = 1;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;

        case EVOP_25 << 9:
            actor->iwork[6] = 0;
            actor->unk_0E6 += 2;
            func_8006D36C(actor);
            break;
    }
}

void func_8006EA50(Actor* actor) {
    if ((actor->iwork[7] != 0) && (gUnkEntities30[actor->iwork[8]].mode != 0)) {
        gUnkEntities30[actor->iwork[8]].unk_10.x = actor->obj.pos.x;
        gUnkEntities30[actor->iwork[8]].unk_10.y = actor->obj.pos.y;
        gUnkEntities30[actor->iwork[8]].unk_10.z = actor->obj.pos.z;
    }
}

void func_8006EAC4(Effect* effect, f32 xPos, f32 yPos, f32 zPos) {
    Effect_Initialize(effect);
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_374;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->timer_50 = 20;
    Object_SetInfo(&effect->info, effect->obj.id);
    AUDIO_PLAY_SFX(0x2900201D, effect->sfxSource, 4);
}

void func_8006EB64(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 50; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_8006EAC4(&gEffects[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_8006EBC0(Actor* actor, f32 xPos, f32 yPos, f32 zPos) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_225;

    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;

    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.unk_16 = 2;
    AUDIO_PLAY_SFX(0x2900201D, actor->sfxSource, 4);
}

void func_8006EC60(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == OBJ_FREE) {
            func_8006EBC0(&gActors[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_8006ECBC(PlayerShotId objId, PlayerShot* shot, s32 unk0E4, f32 xPos, f32 yPos, f32 zPos, f32 arg6, f32 arg7,
                   f32 arg8, f32 xRot, f32 yRot, f32 zRot) {
    PlayerShot_Initialize(shot);
    shot->obj.status = 1;

    shot->vel.z = arg8;
    shot->vel.x = arg6;
    shot->vel.y = arg7;

    shot->obj.pos.x = xPos;
    shot->obj.pos.y = yPos;
    shot->obj.pos.z = zPos;

    shot->obj.rot.x = xRot + 180.0f;
    shot->obj.rot.y = yRot;
    shot->obj.rot.z = -zRot;

    shot->obj.id = objId;
    shot->unk_58 = 1;
    shot->unk_60 = 0;

    if (objId == PLAYERSHOT_9) {
        shot->unk_64 = 120;
    } else {
        shot->unk_64 = 30;
    }
    shot->playerNum = unk0E4 + 100;

    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        if (unk0E4 + 100 < 104) {
            AUDIO_PLAY_SFX(0x2900000D, shot->sfxSource, 4);
        } else {
            AUDIO_PLAY_SFX(0x29002002, shot->sfxSource, 4);
        }
    } else if ((unk0E4 < 60) && (gActors[unk0E4].obj.id == OBJ_ACTOR_200) && (gActors[unk0E4].iwork[12] > 0)) {
        AUDIO_PLAY_SFX(0x2900000D, shot->sfxSource, 4);
    } else if (unk0E4 + 100 == 200) {
        shot->playerNum = 100;
        AUDIO_PLAY_SFX(0x19030037, shot->sfxSource, 0);
    } else {
        AUDIO_PLAY_SFX(0x29002002, shot->sfxSource, 4);
    }
}

void func_8006EEFC(s32 unk0E4, f32 xPos, f32 yPos, f32 zPos, f32 arg4, f32 arg5, f32 arg6, f32 xRot, f32 yRot,
                   f32 zRot) {
    s32 i;

    for (i = 0; i < 10; i++) {
        if (gPlayerShots[i].obj.status == 0) {
            func_8006ECBC(PLAYERSHOT_1, &gPlayerShots[i], unk0E4, xPos, yPos, zPos, arg4, arg5, arg6, xRot, yRot, zRot);
            break;
        }
    }
}

void func_8006EFA0(s32 unk0E4, f32 xPos, f32 yPos, f32 zPos, f32 arg4, f32 arg5, f32 arg6, f32 xRot, f32 yRot,
                   f32 zRot) {
    s32 i;

    for (i = 0; i < 10; i++) {
        if (gPlayerShots[i].obj.status == 0) {
            func_8006ECBC(PLAYERSHOT_9, &gPlayerShots[i], unk0E4, xPos, yPos, zPos, arg4, arg5, arg6, xRot, yRot, zRot);
            break;
        }
    }
}

void func_8006F044(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Effect_Initialize(effect);
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_347;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->scale1 = arg4;
    effect->unk_44 = 100;
    Object_SetInfo(&effect->info, effect->obj.id);
    func_8007A6F0(&effect->obj.pos, 0x2903B009);
}

void func_8006F0D8(f32 xPos, f32 yPos, f32 zPos, f32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_8006F044(&gEffects[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

void func_8006F140(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Effect_Initialize(effect);
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_394;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->scale1 = arg4;
    effect->unk_44 = 100;
    effect->unk_78 = 102;
    effect->unk_7A = 18;
    Object_SetInfo(&effect->info, effect->obj.id);
    effect->info.damage = 40;
    func_8007A6F0(&effect->obj.pos, 0x2903B009);
}

void func_8006F1EC(f32 xPos, f32 yPos, f32 zPos, f32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_8006F140(&gEffects[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

void func_8006F254(Actor* actor) {
    Vec3f sp54;
    Vec3f sp48;

    Matrix_RotateY(gCalcMatrix, actor->vwork[29].y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor->vwork[29].x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, (actor->vwork[29].z + actor->unk_0F4.z) * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, actor->unk_0F4.y * M_DTOR, 1);
    Matrix_RotateX(gCalcMatrix, actor->unk_0F4.x * M_DTOR, 1);

    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = D_80177828;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    func_8007F04C(OBJ_EFFECT_353, actor->obj.pos.x + sp48.x, actor->obj.pos.y + sp48.y, actor->obj.pos.z + sp48.z,
                  actor->obj.rot.x, actor->obj.rot.y, actor->obj.rot.z, actor->vwork[29].x, actor->vwork[29].y,
                  actor->vwork[29].z + actor->unk_0F4.z, sp48.x, sp48.y, sp48.z, 1.0f);
}

void func_8006F40C(Actor* actor) {
    s32 var_v1;
    Vec3f sp78;
    Vec3f sp6C;
    Object_4C* obj4C;

    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (actor->unk_0B4 != 0x34) && (actor->unk_0B4 != 0x67) &&
        (actor->unk_0B4 != 0x68) && (actor->unk_0B4 != 0x30) && (actor->unk_0B4 != 0x31) && (actor->unk_0B4 != 0x32)) {
        switch (actor->unk_048) {
            case 0:
                break;

            case 1:
                func_8006F254(actor);
                actor->unk_048 = 0;
                break;

            case 2:
                if (actor->obj.pos.z < (gPlayer[0].unk_138 - 600.0f)) {
                    func_8007F11C(OBJ_EFFECT_353, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, D_80177828);
                }
                actor->unk_048 = 0;
                break;

            case 3:
                if (actor->timer_0BE == 0) {
                    actor->timer_0BE = 6;
                    sp78.x = 0.0f;
                    sp78.y = 0.0f;
                    sp78.z = 100.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
                    func_8006EEFC(actor->index, actor->obj.pos.x + (sp6C.x * 1.5), actor->obj.pos.y + (sp6C.y * 1.5),
                                  actor->obj.pos.z + (sp6C.z * 1.5), sp6C.x, sp6C.y, sp6C.z, actor->unk_0F4.x,
                                  actor->unk_0F4.y, actor->vwork[29].z + actor->unk_0F4.z);
                    actor->timer_0C2 = 2;
                    actor->timer_04C--;
                    if (actor->timer_04C <= 0) {
                        actor->unk_048 = 0;
                    }
                }
                break;

            case 4:
                func_8006EB64(actor->obj.pos.x, actor->obj.pos.y - 20.0f, actor->obj.pos.z);
                actor->unk_048 = 0;
                break;

            case 5:
                Matrix_RotateY(gCalcMatrix, actor->vwork[29].y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, actor->vwork[29].x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, (actor->vwork[29].z + actor->unk_0F4.z) * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, actor->unk_0F4.y * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, actor->unk_0F4.x * M_DTOR, 1);

                sp78.x = 0.0f;
                sp78.y = 0.0f;
                sp78.z = D_80177828;

                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
                func_8007F04C(OBJ_EFFECT_355, actor->obj.pos.x + sp6C.x, actor->obj.pos.y + sp6C.y,
                              actor->obj.pos.z + sp6C.z, actor->obj.rot.x, actor->obj.rot.y, actor->obj.rot.z,
                              actor->vwork[29].x, actor->vwork[29].y, actor->vwork[29].z + actor->unk_0F4.z, sp6C.x,
                              sp6C.y, sp6C.z, 1.0f);
                actor->unk_048 = 0;
                break;

            case 6:
                if (actor->obj.pos.z < (gPlayer[0].unk_138 - 600.0f)) {
                    func_8007F11C(OBJ_EFFECT_355, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, D_80177828);
                }
                actor->unk_048 = 0;
                break;

            case 7:
                if (actor->obj.pos.z < (gPlayer[0].unk_138 - 600.0f)) {
                    func_8007F11C(OBJ_EFFECT_356, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 60.0f);
                }
                actor->unk_048 = 0;
                break;

            case 8:
                sp6C.x = gPlayer[0].pos.x;
                sp6C.y = gPlayer[0].pos.y;
                gPlayer[0].pos.x += RAND_FLOAT_CENTERED(300.0f);
                gPlayer[0].pos.y += RAND_FLOAT_CENTERED(300.0f);
                func_8007F11C(OBJ_EFFECT_353, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, D_80177828);
                gPlayer[0].pos.x = sp6C.x;
                gPlayer[0].pos.y = sp6C.y;
                actor->unk_048 = 0;
                break;

            case 9:
                if (gCurrentLevel == LEVEL_AQUAS) {
                    func_8006F1EC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 12.0f);
                } else {
                    func_8006F0D8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 40.0f);
                }
                Object_Kill(&actor->obj, actor->sfxSource);
                break;

            case 10:
                if (gCurrentLevel == LEVEL_AQUAS) {
                    func_8006F1EC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 6.0f);
                } else {
                    func_8006F0D8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 15.0f);
                }
                Object_Kill(&actor->obj, actor->sfxSource);
                break;

            case 11:
                func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                              actor->vel.z, actor->scale * 3.0f, 15);
                func_80066254(actor);
                Object_Kill(&actor->obj, actor->sfxSource);
                func_8007A6F0(&actor->obj.pos, 0x2903B009);
                break;

            case 12:
                func_80066254(actor);
                Object_Kill(&actor->obj, actor->sfxSource);
                break;

            case 13:
                if (actor->timer_0BE > 25) {
                    Math_SmoothStepToF(&actor->fwork[15], 90.0f, 0.2f, 8.0f, 0.01f);
                }
                if (actor->timer_0BE < 25) {
                    Math_SmoothStepToF(&actor->fwork[15], 0.0f, 0.2f, 8.0f, 0.01f);
                }
                if (actor->timer_0BE == 30) {
                    func_8006EC60(actor->obj.pos.x, actor->obj.pos.y - 50.0f, actor->obj.pos.z);
                }
                if (actor->timer_0BE == 0) {
                    actor->unk_048 = 0;
                }
                break;

            case 16:
                func_8007F11C(OBJ_EFFECT_353, actor->obj.pos.x + 190.0f, actor->obj.pos.y + 90.0f,
                              actor->obj.pos.z + 220.0f, D_80177828);
                func_8007F11C(OBJ_EFFECT_353, actor->obj.pos.x - 190.0f, actor->obj.pos.y + 90.0f,
                              actor->obj.pos.z + 220.0f, D_80177828);
                actor->unk_048 = 0;
                break;

            case 17:
                if (actor->obj.pos.z < (gPlayer[0].camEye.z - 600.0f)) {
                    func_8007F20C(OBJ_EFFECT_353, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, D_80177828);
                }
                actor->unk_048 = 0;
                break;

            case 18:
                for (var_v1 = 0, obj4C = gObjects4C; var_v1 < 40; var_v1++, obj4C++) {

                    if ((obj4C->obj.status == OBJ_ACTIVE) && (obj4C->obj.id == OBJ_4C_175)) {
                        f32 sp64;
                        f32 sp60;
                        f32 sp5C;
                        f32 sp58;
                        f32 sp54;

                        obj4C->obj.status = OBJ_FREE;
                        sp64 = obj4C->obj.pos.x - actor->obj.pos.x;
                        sp60 = obj4C->obj.pos.y - actor->obj.pos.y;
                        sp5C = obj4C->obj.pos.z - actor->obj.pos.z;
                        sp54 = Math_Atan2F(sp64, sp5C);
                        sp54 = Math_RadToDeg(sp54);
                        sp58 = -Math_Atan2F(sp60, sqrtf(SQ(sp64) + SQ(sp5C)));
                        sp58 = Math_RadToDeg(sp58);
                        Matrix_RotateY(gCalcMatrix, M_DTOR * sp54, 0);
                        Matrix_RotateX(gCalcMatrix, M_DTOR * sp58, 1);
                        sp6C.x = 0.0f;
                        sp6C.y = 0.0f;
                        sp6C.z = 50.0f;
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp6C, &sp78);
                        func_8006EFA0(100, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, sp78.x, sp78.y, sp78.z,
                                      sp58, sp54, 0.0f);
                        break;
                    }
                }

                actor->unk_048 = 0;
                break;

            case 19:
                func_80083D2C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 40.0f);
                actor->unk_048 = 0;
                break;
        }
    }
}

void func_8006FE28(Actor* actor) {
    if ((fabsf(actor->obj.pos.x - gPlayer[0].pos.x) < 100.0f) &&
        (fabsf(actor->obj.pos.y - gPlayer[0].pos.y) < 100.0f) &&
        (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 50.0f)) {
        func_80067A40();
        Audio_KillSfxBySourceAndId(actor->sfxSource, 0x1900302B);
        Object_Kill(&actor->obj, actor->sfxSource);
    }
}

void func_8006FEEC(Actor* actor) {
    s32 i;

    if ((actor->unk_0D0 != 0) && (actor->health != 0)) {
        actor->unk_0D0 = 0;
        actor->timer_0C6 = 15;
        actor->health -= actor->damage;

        if (actor->health <= 0) {
            for (i = 3; i < 11; i++) {
                func_i3_801900FC(&actor->vwork[i], &actor->vwork[i + 11], RAND_FLOAT_CENTERED(20.0f),
                                 RAND_FLOAT(-10.0f), RAND_FLOAT(10.0f), 41, actor->scale, 200, i);
            }
            actor->unk_044 = 0;
            func_80066254(actor);
            Object_Kill(&actor->obj, actor->sfxSource);
            func_8007A6F0(&actor->obj.pos, 0x29018036);
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 4.0f);
        } else {
            AUDIO_PLAY_SFX(0x29033037, actor->sfxSource, 4);
        }
    }
}

bool func_800700A4(Actor* actor) {
    if ((actor->state != 12) && (actor->iwork[12] > 0) && (actor->iwork[12] < 4) &&
        (gTeamShields[actor->iwork[12]] <= 0)) {
        actor->state = 12;
        actor->iwork[2] = 0;
        actor->fwork[10] = 360.0f;
        actor->fwork[11] = 20.0f;
        gTeamShields[actor->iwork[12]] = 1;

        switch (actor->iwork[12]) {
            case 1:
                Radio_PlayMessage(gMsg_ID_20220, RCID_FALCO);
                break;
            case 2:
                Radio_PlayMessage(gMsg_ID_20222, RCID_SLIPPY);
                break;
            case 3:
                Radio_PlayMessage(gMsg_ID_20221, RCID_PEPPY);
                break;
        }
        gTeamShields[actor->iwork[12]] = -1;
        gTeamDamage[actor->iwork[12]] = 0;
        actor->timer_0C2 = 5000;
        actor->unk_0D0 = 0;
        return true;
    }
    return false;
}

void func_800701E0(Actor* actor) {
    Vec3f sp3C;
    f32 var_fv1;
    f32 temp_fv1;

    if (!func_800700A4(actor)) {
        if ((actor->unk_0D0 != 0) && (actor->unk_0B4 == 0x43) && (actor->unk_0D2 == 0)) {
            actor->unk_0D0 = 0;
        }

        if ((actor->unk_0D0 != 0) && (actor->unk_0B4 == 83) && (actor->timer_0C2 >= 2)) {
            actor->unk_0D0 = 0;
        }

        if ((actor->unk_0D0 != 0) && (((actor->unk_0B4 == 64) && (actor->unk_0D2 == 2)) || (actor->unk_0B4 != 64))) {
            if (actor->iwork[12] >= 4) {
                actor->damage = 0;
            }

            if ((actor->iwork[12] > 0) && (actor->iwork[12] < 4)) {
                gTeamShields[actor->iwork[12]] -= actor->damage;
            } else if ((actor->unk_0B4 == 83) && ((actor->damage == 30) || (actor->damage == 31))) {
                actor->health = 0;
            } else {
                actor->health -= actor->damage;
            }

            if (actor->health <= 0) {
                if (actor->unk_0B4 == 106) {
                    BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 3);
                    gHitCount += 4;
                    D_80177850 = 15;
                }

                if (actor->unk_0B4 != 83) {
                    if ((actor->unk_0B4 == 6) && (gCurrentLevel == LEVEL_SOLAR)) {
                        AUDIO_PLAY_SFX(0x29018036, actor->sfxSource, 4);
                    } else {
                        AUDIO_PLAY_SFX(0x2903700B, actor->sfxSource, 4);
                    }

                    actor->obj.status = OBJ_DYING;
                    var_fv1 = 0.7f;

                    if (gLevelType == LEVELTYPE_SPACE) {
                        var_fv1 = 0.3f;
                    }

                    if (((Rand_ZeroOne() < var_fv1) || (actor->iwork[12] != 0)) && (actor->info.unk_14 == 0) &&
                        (actor->unk_0B4 != 0xD) && (actor->unk_0B4 != 0xE) && (actor->unk_0B4 != 0x3D) &&
                        ((s32) actor->damage < 0x1F) && (actor->unk_0B4 != 0x3E) && (actor->unk_0B4 != 0x40) &&
                        (actor->unk_0B4 != 0x48) && (actor->unk_0B4 != 0x44)) {
                        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->scale * 4.0f);
                        actor->unk_0D0 = 0;
                    }

                    actor->timer_0C2 = 10;
                    actor->timer_0BE = 0;
                    actor->unk_046 = 0xFF;
                    actor->unk_048 = 900;
                    actor->unk_0C9 = 1;

                    if (gLevelType == LEVELTYPE_PLANET) {
                        actor->timer_04C = RAND_INT(2.9f);
                        if (actor->unk_0B4 == 2) {
                            actor->timer_04C = 1;
                            if (actor->obj.pos.x < actor->unk_0D8.x) {
                                func_800A69F8(1, actor->obj.pos.x + 20.0f, actor->obj.pos.y, actor->obj.pos.z);
                                actor->fwork[17] = 777.0f;
                            } else {
                                func_800A69F8(0, actor->obj.pos.x - 20.0f, actor->obj.pos.y, actor->obj.pos.z);
                                actor->fwork[18] = 777.0f;
                            }
                        }
                        actor->timer_0BC = 300;

                        if (gLevelMode != LEVELMODE_ALL_RANGE) {
                            actor->vel.x *= 0.5f;
                            actor->vel.y = RAND_FLOAT(5.0f);
                            if (actor->vel.z < 0.0f) {
                                actor->vel.z = actor->vel.z;
                            } else {
                                actor->vel.z = actor->vel.z * 0.3f;
                            }
                            if (((actor->obj.pos.z + D_80177D20) > -3000.0f) && (actor->vel.z > 0.0f)) {
                                actor->vel.z = RAND_FLOAT(-10.0f);
                            }
                        }

                        if (actor->unk_0B4 == 90) {
                            actor->timer_04C = 999;
                        }
                    } else {
                        switch (actor->unk_0B4) {
                            case 13:
                                func_800654E4(&actor->obj);
                                break;

                            case 61:
                                func_i2_8018CCF8(actor);
                                break;

                            case 27:
                                actor->obj.pos.y -= actor->vel.y;
                                actor->obj.status = OBJ_ACTIVE;
                                func_8007D0E0(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f,
                                              actor->obj.pos.z - actor->vel.z, actor->scale * 5.0f);
                                actor->unk_0D0 = 0;
                                actor->timer_0C2 = 10000;
                                actor->info.unk_1C = 0.0f;
                                gHitCount += actor->info.bonus;
                                D_80177850 = 0xF;
                                break;

                            default:
                                actor->timer_0BC = 35;
                                actor->timer_04C = 2;
                                actor->vel.y = RAND_FLOAT_CENTERED(20.0f);
                                actor->vel.x = RAND_FLOAT_CENTERED(20.0f);
                                actor->vel.z = 0.0f;
                                break;
                        }
                    }
                }

                if (actor->unk_0B4 == 0x52) {
                    AUDIO_PLAY_SFX(0x11000055, actor->sfxSource, 0);
                    actor->unk_0D0 = 1;
                    func_8007C688(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 3.0f, 0x3C);
                }
            } else {
                actor->timer_0C6 = 20;
                if ((actor->unk_0B4 == 6) && (gCurrentLevel == LEVEL_SOLAR)) {
                    AUDIO_PLAY_SFX(0x29033037, actor->sfxSource, 4);
                } else if (actor->health < 20) {
                    AUDIO_PLAY_SFX(0x2943500F, actor->sfxSource, 4);
                } else {
                    AUDIO_PLAY_SFX(0x2903300E, actor->sfxSource, 4);
                }

                if ((actor->unk_0B4 != 0xD) && (actor->unk_0B4 != 0x3D) && (actor->unk_0B4 != 0x53)) {
                    func_8007D10C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->scale * 1.5f);
                }

                if (((gLevelMode == LEVELMODE_ALL_RANGE) || (gLevelMode == LEVELMODE_UNK_2)) &&
                    (actor->unk_0B4 != 0x15) && (actor->unk_0B4 != 0x17)) {
                    actor->fwork[13] = 20.0f;
                    if (actor->obj.pos.x < actor->unk_0D8.x) {
                        actor->fwork[13] *= -1.0f;
                    }
                }

                if (actor->unk_0D4 == 1) {
                    switch (actor->iwork[12]) {
                        case 1:
                            if (actor->unk_0D0 == 3) {
                                func_8006A7B0(gMsg_ID_20210, RCID_FALCO);
                            } else {
                                func_8006A7B0(gMsg_ID_20060, RCID_FALCO);
                            }
                            break;

                        case 3:
                            if (actor->unk_0D0 == 3) {
                                func_8006A7B0(gMsg_ID_20200, RCID_PEPPY);
                            } else {
                                func_8006A7B0(gMsg_ID_20070, RCID_PEPPY);
                            }
                            break;

                        case 2:
                            if (actor->unk_0D0 == 3) {
                                func_8006A7B0(gMsg_ID_20190, RCID_SLIPPY);
                            } else {
                                func_8006A7B0(gMsg_ID_20080, RCID_SLIPPY);
                            }
                            break;

                        case 4:
                            func_8006A7B0(gMsg_ID_20084, RCID_KATT);
                            break;

                        case 5:
                            func_8006A7B0(gMsg_ID_20085, RCID_BILL);
                            break;
                    }
                }
                actor->unk_0D0 = 0;
            }
        }
        if ((actor->iwork[12] == 0) && (actor->iwork[13] == 0) && (actor->info.unk_16 != 2) &&
            (gLevelType == LEVELTYPE_SPACE)) {
            sp3C.x = actor->vel.x;
            sp3C.y = actor->vel.y;
            sp3C.z = actor->vel.z;

            if ((func_8006351C(actor->index, &actor->obj.pos, &sp3C, 0) != 0) ||
                (actor->obj.pos.y < (gGroundLevel + 20.0f))) {
                actor->obj.status = OBJ_DYING;
                actor->obj.pos.z -= actor->vel.z;
                actor->unk_0D0 = 1;
                if (actor->unk_0B4 == 13) {
                    actor->obj.id = OBJ_ACTOR_182;
                    func_800654E4(&actor->obj);
                }

                if (actor->unk_0B4 == 61) {
                    func_i2_8018CCF8(actor);
                }
            }
        }
    }
}

void func_80070BA8(Actor* actor) {
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if ((actor->unk_0B4 != 17) || ((actor->unk_0B4 == 17) && (actor->unk_0D2 == 0))) {
            actor->timer_0C6 = 10;
            func_8007C120(actor->unk_0D8.x, actor->unk_0D8.y, actor->unk_0D8.z, actor->vel.x, actor->vel.y,
                          actor->vel.z, 0.2f, 10);
            actor->health -= actor->damage;
            AUDIO_PLAY_SFX(0x29033064, actor->sfxSource, 4);
            if (actor->health <= 0) {
                BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->info.bonus);
                gHitCount += actor->info.bonus + 1;
                D_80177850 = 15;
            }
        } else {
            AUDIO_PLAY_SFX(0x29121007, actor->sfxSource, 4);
        }
    }
}

void func_80070CEC(Actor* actor) {
    if (actor->iwork[3] < 200) {
        actor->unk_0E6 = actor->iwork[3] * 2;
        actor->iwork[0] = 0;
        actor->iwork[2] = 0;
        func_8006D36C(actor);
    } else {
        actor->unk_0E4 = actor->iwork[3] - 200;
        actor->unk_0E6 = 0;
        actor->iwork[0] = 0;
        actor->iwork[2] = 0;
        func_8006D36C(actor);
    }
}

void func_80070D44(Actor* actor) {
    s32 i;
    s32 var_v1 = 0;
    s32 var_v1_4;
    Actor* otherActor;

    for (i = 1; i < 4; i++) {
        if (gTeamShields[i] > 0) {
            var_v1++;
        }
    }

    if (actor->iwork[2] >= 100) {
        if (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) <= ((actor->iwork[2] - 100) * 100.0f)) {
            func_80070CEC(actor);
        }
        return;
    }

    switch (actor->iwork[2]) {
        case 0:
            break;

        case 1:
            if ((gActors[actor->iwork[1]].obj.status != OBJ_ACTIVE) || (gActors[actor->iwork[1]].health <= 0) ||
                (actor->iwork[10] != gActors[actor->iwork[1]].unk_0E4)) {
                func_80070CEC(actor);
            }
            break;

        case 2:
            if (var_v1 == 3) {
                func_80070CEC(actor);
            }
            break;

        case 3:
            if (var_v1 == 2) {
                func_80070CEC(actor);
            }
            break;

        case 4:
            if (var_v1 == 1) {
                func_80070CEC(actor);
            }
            break;

        case 5:
            if (var_v1 == 0) {
                func_80070CEC(actor);
            }
            break;

        case 6:
            if (gTeamShields[1] > 0) {
                func_80070CEC(actor);
            }
            break;

        case 7:
            if (gTeamShields[3] > 0) {
                func_80070CEC(actor);
            }
            break;

        case 8:
            if (gTeamShields[2] > 0) {
                func_80070CEC(actor);
            }
            break;

        case 9:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) <= 100.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 10:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) <= 400.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 11:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) <= 700.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 12:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) <= 200.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 13:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) >= -100.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 14:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) >= -400.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 15:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) >= -700.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 16:
            if (((actor->obj.pos.x - gPlayer[0].pos.x) >= -200.0f) && ((actor->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 17:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) <= 100.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 18:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) <= 400.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 19:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) <= 700.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 20:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) <= 200.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 21:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) >= -100.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 22:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) >= -400.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 23:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) >= -700.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 24:
            if (((actor->obj.pos.y - gPlayer[0].pos.y) >= -200.0f) && ((actor->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(actor);
            }
            break;

        case 25:
            if (gPlayer[0].shields >= Play_GetMaxShields()) {
                func_80070CEC(actor);
            }
            break;

        case 26:
            if (gPlayer[0].shields >= (Play_GetMaxShields() * 3 / 4)) {
                func_80070CEC(actor);
            }
            break;

        case 27:
            if (gPlayer[0].shields >= (Play_GetMaxShields() / 2)) {
                func_80070CEC(actor);
            }
            break;

        case 28:
            if (gPlayer[0].shields >= (Play_GetMaxShields() / 4)) {
                func_80070CEC(actor);
            }
            break;

        case 29:
            if (gPlayer[0].shields == 0) {
                func_80070CEC(actor);
            }
            break;

        case 30:
            if (gPlayer[0].unk_270 >= 5) {
                func_80070CEC(actor);
            }
            break;

        case 31:
            if (gPlayer[0].unk_270 != 0) {
                func_80070CEC(actor);
            }
            break;

        case 32:
            if (gPlayer[0].unk_270 == 0) {
                func_80070CEC(actor);
            }
            break;

        case 33:
            if (gPlayer[0].unk_250 >= 16.8f) {
                func_80070CEC(actor);
            }
            break;

        case 34:
            if (gPlayer[0].unk_250 <= 8.4f) {
                func_80070CEC(actor);
            }
            break;

        case 35:
            if (gPlayer[0].wings.unk_14 > -8.0f) {
                func_80070CEC(actor);
            }
            break;

        case 36:
            if ((gPlayer[0].wings.unk_14 < -8.0f) && (gLaserStrength[0] == LASERS_TWIN)) {
                func_80070CEC(actor);
            }
            break;

        case 37:
            if ((gPlayer[0].wings.unk_14 < -8.0f) && (gLaserStrength[0] == LASERS_HYPER)) {
                func_80070CEC(actor);
            }
            break;

        case 38:
            if ((gPlayer[0].wings.unk_14 < -8.0f) && (gLaserStrength[0] == LASERS_UNK_3)) {
                func_80070CEC(actor);
            }
            break;

        case 39:
            for (i = 0; i < ARRAY_COUNT(gPlayerShots); i++) {
                if ((gPlayerShots[i].obj.status == 1) &&
                    (fabsf(actor->obj.pos.x - gPlayerShots[i].obj.pos.x) < 150.0f) &&
                    (fabsf(actor->obj.pos.y - gPlayerShots[i].obj.pos.y) < 150.0f) &&
                    (fabsf(actor->obj.pos.z - gPlayerShots[i].obj.pos.z) < 150.0f)) {
                    func_80070CEC(actor);
                    break;
                }
            }
            break;

        case 40:
            for (i = 0; i < ARRAY_COUNT(gPlayerShots); i++) {
                if ((gPlayerShots[i].obj.status == 1) &&
                    (fabsf(actor->obj.pos.x - gPlayerShots[i].obj.pos.x) < 300.0f) &&
                    (fabsf(actor->obj.pos.y - gPlayerShots[i].obj.pos.y) < 300.0f) &&
                    (fabsf(actor->obj.pos.z - gPlayerShots[i].obj.pos.z) < 300.0f)) {
                    func_80070CEC(actor);
                    break;
                }
            }
            break;

        case 41:
            if ((gActors[actor->iwork[9]].obj.status != OBJ_ACTIVE) ||
                ((gActors[actor->iwork[9]].scale < 0.0f) && (actor->health <= 0))) {
                func_80070CEC(actor);
            }
            break;

        case 42:
            for (i = 0; i < ARRAY_COUNT(gActors); i++) {
                if ((gActors[i].obj.status == OBJ_ACTIVE) && (gActors[i].obj.id == OBJ_ACTOR_200) &&
                    (gActors[i].iwork[13] != 0) && (i != actor->index) && (actor->index == gActors[i].iwork[9])) {
                    return;
                }
            }
            func_80070CEC(actor);
            break;

        case 43:
            for (i = 0; i < ARRAY_COUNT(gActors); i++) {
                if ((gActors[i].obj.status == OBJ_ACTIVE) && (gActors[i].obj.id == OBJ_ACTOR_200) &&
                    (gActors[i].iwork[13] != 0) && (i != actor->index) && (actor->index == gActors[i].iwork[9])) {
                    func_80070CEC(actor);
                    break;
                }
            }
            break;

        case 44:
            if (actor->unk_0D0 != 0) {
                func_80070CEC(actor);
            }
            break;

        case 45:
            var_v1_4 = 7;
            switch (gCurrentLevel) {
                case LEVEL_CORNERIA:
                    break;
                case LEVEL_SECTOR_X:
                    var_v1_4 = 4;
                    break;
                case LEVEL_TITANIA:
                    var_v1_4 = 9;
                    break;
            }

            if (((gCurrentLevel != LEVEL_CORNERIA) || (gTeamShields[1] > 0)) && (D_80177E80 >= var_v1_4)) {
                func_80070CEC(actor);
            }
            break;

        case 46:
            for (i = 0, otherActor = gActors; i < ARRAY_COUNT(gActors); i++, otherActor++) {
                if (((otherActor->obj.status == OBJ_DYING) || (otherActor->obj.status == OBJ_FREE)) &&
                    (otherActor->iwork[15] == actor->iwork[15]) && (otherActor->iwork[16] != 0)) {
                    func_80070CEC(actor);
                }
            }
            break;

        case 47:
            if (gControllerPress[gMainController].button & R_CBUTTONS) {
                func_8001AF40(0);
                D_800CFF90 = 0;
                D_80161690 = 0;
                func_80070CEC(actor);
            }
            break;

        case 48:
            if ((gPlayer[0].wings.rightState <= WINGSTATE_BROKEN) || (gPlayer[0].wings.leftState <= WINGSTATE_BROKEN)) {
                func_80070CEC(actor);
            }
            break;

        case 49:
            if (D_800D3180[LEVEL_METEO] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 50:
            if (D_800D3180[LEVEL_FORTUNA] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 51:
            if (D_800D3180[LEVEL_SECTOR_X] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 52:
            if (D_800D3180[LEVEL_TITANIA] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 53:
            if (D_800D3180[LEVEL_BOLSE] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 54:
            if (D_800D3180[LEVEL_SECTOR_Y] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 55:
            if (D_800D3180[LEVEL_KATINA] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 56:
            if (D_800D3180[LEVEL_SOLAR] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 57:
            if (D_800D3180[LEVEL_MACBETH] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 58:
            if (D_800D3180[LEVEL_AQUAS] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 59:
            if (D_800D3180[LEVEL_ZONESS] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 60:
            if (D_800D3180[LEVEL_SECTOR_Z] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 61:
            if (D_800D3180[LEVEL_AREA_6] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 62:
            if (D_Timer_80161670[actor->iwork[12]] == 0) {
                func_80070CEC(actor);
            }
            break;

        case 63:
            if (D_Timer_80161670[actor->iwork[12]] != 0) {
                func_80070CEC(actor);
            }
            break;

        case 64:
            if (D_80161684 != 0) {
                func_80070CEC(actor);
            }
            break;

        case 65:
            if (gHitCount >= 30) {
                func_80070CEC(actor);
            }
            break;

        case 66:
            if (gHitCount >= 80) {
                func_80070CEC(actor);
            }
            break;

        case 67:
            if (gExpertMode) {
                func_80070CEC(actor);
            }
            break;
    }
}

// could be in-function, but probably weren't
Vec3f D_800D0DD4[56] = {
    { 158.0f, 256.0f, 1513.0f },   { 384.0f, 42.0f, 1187.0f },   { 284.0f, 129.0f, 769.0f },
    { 482.0f, 19.0f, 769.0f },     { 386.0f, 105.0f, 253.0f },   { 221.0f, 209.0f, 33.0f },
    { 78.0f, 263.0f, 637.0f },     { 78.0f, 263.0f, 76.0f },     { 18.0f, 263.0f, 1683.0f },
    { 106.0f, 98.0f, 1655.0f },    { 196.0f, -11.0f, 1365.0f },  { 104.0f, -175.0f, 1236.0f },
    { 313.0f, -175.0f, 972.0f },   { 456.0f, -132.0f, 695.0f },  { 157.0f, -360.0f, 904.0f },
    { 186.0f, -263.0f, 354.0f },   { 186.0f, -130.0f, 307.0f },  { 692.0f, 16.0f, 190.0f },
    { 337.0f, 120.0f, -297.0f },   { 337.0f, 373.0f, -242.0f },  { 240.0f, 359.0f, -611.0f },
    { 504.0f, 447.0f, -611.0f },   { 656.0f, 506.0f, -829.0f },  { 73.0f, 337.0f, -426.0f },
    { 73.0f, 548.0f, -411.0f },    { 65.0f, 391.0f, -1237.0f },  { 193.0f, 250.0f, -1026.0f },
    { 292.0f, 271.0f, -587.0f },   { -158.0f, 256.0f, 1513.0f }, { -384.0f, 42.0f, 1187.0f },
    { -284.0f, 129.0f, 769.0f },   { -482.0f, 19.0f, 769.0f },   { -386.0f, 105.0f, 253.0f },
    { -221.0f, 209.0f, 33.0f },    { -78.0f, 263.0f, 637.0f },   { -78.0f, 263.0f, 76.0f },
    { -18.0f, 263.0f, 1683.0f },   { -106.0f, 98.0f, 1655.0f },  { -196.0f, -11.0f, 1365.0f },
    { -104.0f, -175.0f, 1236.0f }, { -313.0f, -175.0f, 972.0f }, { -456.0f, -132.0f, 695.0f },
    { -157.0f, -360.0f, 904.0f },  { -186.0f, -263.0f, 354.0f }, { -186.0f, -130.0f, 307.0f },
    { -692.0f, 16.0f, 190.0f },    { -337.0f, 120.0f, -297.0f }, { -337.0f, 373.0f, -242.0f },
    { -240.0f, 359.0f, -611.0f },  { -504.0f, 447.0f, -611.0f }, { -656.0f, 506.0f, -829.0f },
    { -73.0f, 337.0f, -426.0f },   { -73.0f, 548.0f, -411.0f },  { -65.0f, 391.0f, -1237.0f },
    { -193.0f, 250.0f, -1026.0f }, { -292.0f, 271.0f, -587.0f },
};
Vec3f D_800D1074[24] = {
    { 100.0f, 55.0f, 450.0f },     { 117.0f, 57.0f, 738.0f },    { 14.0f, 31.0f, 894.0f },
    { 204.0f, 0.0f, -72.0f },      { 204.0f, 33.0f, -253.0f },   { 344.0f, 0.0f, -295.0f },
    { 344.0f, -51.0f, -457.0f },   { 87.0f, 124.0f, -699.0f },   { 169.0f, -40.0f, -564.0f },
    { 113.0f, -147.0f, -367.0f },  { 112.0f, -146.0f, -13.0f },  { 69.0f, -118.0f, 158.0f },
    { -100.0f, 55.0f, 450.0f },    { -117.0f, 57.0f, 738.0f },   { -14.0f, 31.0f, 894.0f },
    { -204.0f, 0.0f, -72.0f },     { -204.0f, 33.0f, -253.0f },  { -344.0f, 0.0f, -295.0f },
    { -344.0f, -51.0f, -457.0f },  { -87.0f, 124.0f, -699.0f },  { -169.0f, -40.0f, -564.0f },
    { -113.0f, -147.0f, -367.0f }, { -112.0f, -146.0f, -13.0f }, { -69.0f, -118.0f, 158.0f },
};
Vec3f D_800D1194[21] = {
    { 764.0f, 13.0f, 71.0f },    { 390.0f, 13.0f, 67.0f },    { 390.0f, 332.0f, 67.0f },   { 504.0f, 508.0f, 67.0f },
    { 251.0f, 508.0f, 67.0f },   { -35.0f, 341.0f, 67.0f },   { -35.0f, 673.0f, 67.0f },   { -354.0f, 594.0f, 67.0f },
    { -354.0f, 273.0f, 67.0f },  { -695.0f, 97.0f, 67.0f },   { -378.0f, -57.0f, 67.0f },  { -378.0f, -266.0f, 67.0f },
    { -475.0f, -518.0f, 67.0f }, { -255.0f, -518.0f, 67.0f }, { -112.0f, -375.0f, 67.0f }, { -46.0f, -628.0f, 67.0f },
    { -97.0f, -375.0f, 67.0f },  { 207.0f, -639.0f, 67.0f },  { 437.0f, -474.0f, 67.0f },  { 591.0f, -210.0f, 67.0f },
    { 453.0f, 420.0f, 67.0f },
};

void func_80071DC0(Actor* actor) {
    s32 rInd;
    Vec3f sp38;

    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);

    if (actor->unk_0B4 == 30) {
        rInd = RAND_FLOAT(ARRAY_COUNT(D_800D1074) - 1.1f); // off by 1 error?
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1074[rInd], &sp38);
    }

    if (actor->unk_0B4 == 17) {
        rInd = RAND_FLOAT(ARRAY_COUNT(D_800D0DD4) - 0.1f);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D0DD4[rInd], &sp38);
    }

    if (actor->unk_0B4 == 31) {
        rInd = RAND_FLOAT(ARRAY_COUNT(D_800D1194) - 0.1f);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1194[rInd], &sp38);
    }

    if (!(gGameFrameCount & 1)) {
        func_8007C120(actor->obj.pos.x + sp38.x, actor->obj.pos.y + sp38.y, actor->obj.pos.z + sp38.z, actor->vel.x,
                      actor->vel.y, actor->vel.z, 0.3f, 0x14);
    }

    if (!(gGameFrameCount & 7)) {
        func_8007BFFC(actor->obj.pos.x + sp38.x, actor->obj.pos.y + sp38.y, actor->obj.pos.z + sp38.z, actor->vel.x,
                      actor->vel.y, actor->vel.z, 10.0f, 9);
    }

    if (!(gGameFrameCount & 0xF)) {
        AUDIO_PLAY_SFX(0x2903B009, actor->sfxSource, 4);
    }

    actor->vel.y -= 0.1f;
    actor->vel.z = 0.0f;
    actor->obj.rot.x += 0.2f;
    actor->obj.rot.z += 0.3f;

    if (!(gGameFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
        actor->timer_0C6 = 4;
    }
}

void func_800720E8(Actor* actor) {
    switch (actor->unk_046) {
        case 0:
            if (actor->unk_0D0 != 0) {
                if (actor->unk_0D0 == 2) {
                    actor->damage = 3;
                }

                if ((actor->unk_0D4 > 100) && (gActors[actor->unk_0D4 - 101].unk_0B4 == 85)) {
                    actor->damage = 20;
                }

                actor->health -= actor->damage;
                actor->fwork[16] += 0.2f;
                actor->timer_0BC = 5;

                if (actor->timer_0BE < 20) {
                    actor->timer_0BE += 5;
                }

                if (actor->health <= 0) {
                    actor->unk_046 = 1;
                    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_SX_6032408);
                    AUDIO_PLAY_SFX(0x1900000D, actor->sfxSource, 0);
                } else {
                    AUDIO_PLAY_SFX(0x2903300E, actor->sfxSource, 0);
                }
                actor->unk_0D0 = 0;
            }
            break;

        case 1:
        case 2:
            Math_SmoothStepToF(&actor->fwork[16], 130.0f, 0.2f, 8.0f, 0.001f);
            if (actor->fwork[16] > 45.0f) {
                Math_SmoothStepToF(&actor->fwork[15], 90.0f, 0.2f, 10.0f, 0.001f);
            }
            break;
    }
}

void func_800722EC(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    Vec3f sp2C;
    Vec3f sp20;

    Effect_Initialize(effect);
    Matrix_RotateY(gCalcMatrix, M_DTOR * yRot, 0);
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    sp2C.z = 20.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
    effect->vel.x = sp20.x;
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_365;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->unk_44 = 250;
    effect->scale2 = 2.0f;
    effect->scale1 = RAND_FLOAT_CENTERED(200.0f);
    effect->obj.rot.z = RAND_FLOAT(360.0f);
    effect->unk_4C = effect->state = 1;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8007240C(f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_800722EC(&gEffects[i], xPos, yPos, zPos, yRot);
            break;
        }
    }
}

void func_80072474(Actor* actor) {
    f32 var_fv1;
    if (actor->unk_048 != 0) {
        switch (actor->unk_048) {
            case 1:
                actor->fwork[16] = 45.0f;
                break;
            case 2:
                actor->fwork[16] = 0.0f;
                break;
            case 3:
                actor->iwork[15] = 1;
                break;
            case 4:
                actor->iwork[15] = 0;
                break;
        }
        actor->unk_048 = 0;
    }

    if (actor->iwork[15] != 0) {
        var_fv1 =
            Math_RadToDeg(Math_Atan2F(gPlayer[0].pos.x - actor->obj.pos.x, gPlayer[0].unk_138 - actor->obj.pos.z));
    } else if (actor->iwork[6] != 0) {
        var_fv1 = actor->unk_0F4.y;
    } else {
        var_fv1 = 0.0f;
    }
    Math_SmoothStepToAngle(&actor->obj.rot.y, var_fv1, 0.2f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&actor->fwork[15], actor->fwork[16], 0.5f, 8.0f, 0.0f);
}

Vec3f D_800D1290 = { 0.0f, 837.00006f, 0.0f }; // could be in-function
void func_80072594(Actor* actor) {
    s32 spFC;
    f32 var_fv0;
    s32 var_s0;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC = 0.0f;
    f32 spD8 = 0.0f;
    f32 spD4 = 0.0f;
    s32 pad;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Vec3f spB8;
    Vec3f spAC;
    Vec3f spA0;

    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) || (D_8017828C != 0)) {
        Object_Kill(&actor->obj, actor->sfxSource);
        return;
    }

    if (actor->state == 0x3E8) {
        actor->obj.rot.y += actor->fwork[15];
        actor->obj.rot.x += actor->fwork[16];
        if (!(gGameFrameCount & 0xF)) {
            func_8007C120(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                          actor->vel.z, 0.3f, 0xA);
        }
    } else {
        if (((actor->unk_0B4 == 0x11) || (actor->unk_0B4 == 0x1E) || (actor->unk_0B4 == 0x1F)) &&
            (actor->health <= 0)) {
            func_80071DC0(actor);
            return;
        }
        if (actor->unk_0B4 == 300) {
            gPlayer[0].unk_1A4 = actor->index;
            actor->timer_0C2 = 100;
        } else if (actor->unk_0B4 >= 200) {
            actor->unk_04E++;

            if (actor->unk_04E >= 100) {
                actor->unk_04E = 0;
            }

            D_80176558[actor->unk_046][actor->unk_04E] = actor->obj.pos.x;
            D_80176878[actor->unk_046][actor->unk_04E] = actor->obj.pos.y;
            D_80176B98[actor->unk_046][actor->unk_04E] = actor->obj.pos.z;
            D_80176EB8[actor->unk_046][actor->unk_04E] = actor->obj.rot.x;
            D_801771D8[actor->unk_046][actor->unk_04E] = actor->obj.rot.y;
            D_80177500[actor->unk_046][actor->unk_04E] = actor->obj.rot.z;

            if (actor->unk_0D0 != 0) {
                actor->unk_0D0 = 0;
                actor->timer_0C6 = 20;
                actor->health -= actor->damage;

                AUDIO_PLAY_SFX(0x29034041, actor->sfxSource, 4);

                if (actor->health <= 0) {
                    actor->timer_0C6 = 200;
                    actor->obj.status = OBJ_DYING;
                    func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 8.0f);
                    actor->obj.status = OBJ_DYING;
                    actor->timer_0BC = 20;
                    actor->obj.id = OBJ_ACTOR_194;
                }
            }
        }

        if ((actor->unk_0B4 == 27) && (actor->timer_0C2 != 0)) {
            actor->state = 0;
        }

        switch (actor->state) {
            case 0:
                func_8006D36C(actor);
                break;

            case 1:
                if (actor->timer_0BC == 0) {
                    func_8006D36C(actor);
                }
                break;

            case 6:
            case 7:
            case 14:
            case 15:
                spF0 = actor->obj.pos.x;
                spEC = actor->obj.pos.y;
                spE8 = actor->obj.pos.z;

                if ((actor->unk_0B4 == 0x21) || (actor->unk_0B4 == 0x44)) {
                    Matrix_RotateZ(gCalcMatrix, -(actor->vwork[29].z + actor->unk_0F4.z) * M_DTOR, 0);
                    Matrix_RotateX(gCalcMatrix, -actor->vwork[29].x * M_DTOR, 1);
                    Matrix_RotateY(gCalcMatrix, -actor->vwork[29].y * M_DTOR, 1);

                    if ((actor->state == 0xE) || (actor->state == 0xF)) {
                        spB8.x = gPlayer[0].camEye.x - spF0;
                        spB8.y = gPlayer[0].camEye.y - (spEC + 25.0f);
                        spB8.z = (gPlayer[0].camEye.z * 15.0f) - spE8;
                    } else {
                        spB8.x = gPlayer[0].pos.x - spF0;
                        spB8.y = gPlayer[0].pos.y - (spEC + 25.0f);
                        spB8.z = gPlayer[0].pos.z + (gPlayer[0].vel.z * 15.0f) - spE8;
                    }

                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &spB8, &spAC);

                    spE0 = Math_RadToDeg(Math_Atan2F(spAC.x, spAC.z));
                    spE4 = Math_RadToDeg(-Math_Atan2F(spAC.y, sqrtf(SQ(spAC.x) + SQ(spAC.z))));
                    spFC = 0;

                    if ((spE4 < 305.0f) && (spE4 >= 180.0f)) {
                        spE4 = 305.0f;
                        spFC++;
                    }

                    if ((spE4 > 30.0f) && (spE4 <= 180.0f)) {
                        spE4 = 30.0f;
                        spFC++;
                    }

                    actor->obj.rot.x = 0.0f;

                    Math_SmoothStepToAngle(&actor->obj.rot.y, spE0, 0.2f, actor->fwork[24], 0.001f);
                    Math_SmoothStepToAngle(&actor->fwork[15], spE4, 0.2f, actor->fwork[24], 0.001f);

                    if (!(actor->timer_0BC & 0x1F) && (spFC == 0)) {
                        Matrix_RotateY(gCalcMatrix, actor->vwork[29].y * M_DTOR, 0);
                        Matrix_RotateX(gCalcMatrix, actor->vwork[29].x * M_DTOR, 1);
                        Matrix_RotateZ(gCalcMatrix, (actor->vwork[29].z + actor->unk_0F4.z) * M_DTOR, 1);

                        spB8.x = 0.0f;
                        spB8.y = 25.0f;
                        spB8.z = 0.0f;

                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spB8, &spA0);
                        Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 1);
                        Matrix_RotateX(gCalcMatrix, actor->fwork[15] * M_DTOR, 1);

                        spB8.x = 0.0f;
                        spB8.y = 0.0f;
                        spB8.z = D_80177828;

                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spB8, &spAC);

                        if (actor->unk_0B4 == 0x44) {
                            var_fv0 = 80.0f;
                        } else {
                            var_fv0 = 0.0f;
                        }

                        func_8007F04C(OBJ_EFFECT_353, actor->obj.pos.x + spAC.x + spA0.x,
                                      actor->obj.pos.y + spAC.y + spA0.y + var_fv0, actor->obj.pos.z + spAC.z + spA0.z,
                                      actor->fwork[15], actor->obj.rot.y, actor->obj.rot.z, actor->vwork[29].x,
                                      actor->vwork[29].y, actor->vwork[29].z + actor->unk_0F4.z, spAC.x, spAC.y, spAC.z,
                                      1.0f);
                        actor->fwork[16] = -15.0f;
                    }
                } else {
                    if ((actor->state == 0xE) || (actor->state == 0xF)) {
                        spCC = gPlayer[0].camEye.x;
                        spC8 = gPlayer[0].camEye.y;
                        spC4 = gPlayer[0].camEye.z;
                    } else {
                        spCC = gPlayer[0].pos.x;
                        spC8 = gPlayer[0].pos.y;
                        spC4 = gPlayer[0].pos.z;
                    }

                    Math_SmoothStepToAngle(&actor->vwork[29].z, 0.0f, 0.1f, 5.0f, 0.0001f);
                    Math_SmoothStepToAngle(&actor->unk_0F4.z, 0.0f, 0.1f, 5.0f, 0.0001f);

                    spE0 = Math_RadToDeg(Math_Atan2F(spCC - spF0, spC4 - spE8));

                    if ((actor->state == 7) || (actor->state == 0xF)) {
                        spE0 += 180.0f;
                        if (spE0 > 360.0f) {
                            spE0 -= 360.0f;
                        }
                    }

                    spE4 = Math_RadToDeg(-Math_Atan2F(spC8 - spEC, sqrtf(SQ(spCC - spF0) + SQ(spC4 - spE8))));
                    spEC = Math_SmoothStepToAngle(&actor->unk_0F4.y, spE0, 0.2f, actor->fwork[24], 0.0001f);

                    Math_SmoothStepToAngle(&actor->unk_0F4.x, spE4, 0.2f, actor->fwork[24], 0.0001f);

                    if (actor->iwork[6] != 0) {
                        var_fv0 = 330.0f;
                        if (spEC < 0.0f) {
                            var_fv0 = 30.0f;
                        }
                        Math_SmoothStepToAngle(&actor->fwork[23], var_fv0, 0.1f, 5.0f, 0.01f);
                    }
                }

                if (actor->timer_0BC == 0) {
                    func_8006D36C(actor);
                }
                break;

            case 13:
                spDC = SIN_DEG((actor->index * 45) + gGameFrameCount) * actor->fwork[17];
                spD8 = COS_DEG((actor->index * 45) + (gGameFrameCount * 2)) * actor->fwork[17];
                pad = actor->iwork[1];
                pad = gActors[pad].iwork[12];
                D_Timer_80161670[pad] = 5;

            case 8:
            case 9:
                spF0 = actor->obj.pos.x;
                spEC = actor->obj.pos.y;
                spE8 = actor->obj.pos.z;

                spE0 = Math_RadToDeg(Math_Atan2F(gActors[actor->iwork[1]].obj.pos.x + spDC - spF0,
                                                 gActors[actor->iwork[1]].obj.pos.z + spD4 - spE8));
                if (actor->state == 7) {
                    spE0 += 180.0f;
                    if (spE0 > 360.0f) {
                        spE0 -= 360.0f;
                    }
                }

                spE4 = Math_RadToDeg(-Math_Atan2F(gActors[actor->iwork[1]].obj.pos.y + spD8 - spEC,
                                                  sqrtf(SQ(gActors[actor->iwork[1]].obj.pos.x + spDC - spF0) +
                                                        SQ(gActors[actor->iwork[1]].obj.pos.z + spD4 - spE8))));
                spEC = Math_SmoothStepToAngle(&actor->unk_0F4.y, spE0, 0.2f, actor->fwork[24], 0.0001f);

                Math_SmoothStepToAngle(&actor->unk_0F4.x, spE4, 0.2f, actor->fwork[24], 0.0001f);

                if (actor->iwork[6] != 0) {
                    var_fv0 = 310.0f;
                    if (spEC < 0.0f) {
                        var_fv0 = 50.0f;
                    }

                    Math_SmoothStepToAngle(&actor->fwork[23], var_fv0, 0.1f, 5.0f, 0.01f);
                }

                if (actor->timer_0BC == 0) {
                    func_8006D36C(actor);
                }
                break;

            case 2:
                actor->unk_0F4.x += actor->fwork[3];
                actor->fwork[2] -= actor->fwork[3];
                if (actor->fwork[2] <= 0.0f) {
                    func_8006D36C(actor);
                }
                break;

            case 3:
                actor->unk_0F4.x -= actor->fwork[3];
                actor->fwork[2] -= actor->fwork[3];
                if (actor->fwork[2] <= 0.0f) {
                    func_8006D36C(actor);
                }
                break;

            case 4:
                actor->unk_0F4.y += actor->fwork[3];
                actor->fwork[2] -= actor->fwork[3];
                if (actor->fwork[2] <= 0.0f) {
                    func_8006D36C(actor);
                }
                break;

            case 5:
                actor->unk_0F4.y -= actor->fwork[3];
                actor->fwork[2] -= actor->fwork[3];
                if (actor->fwork[2] <= 0.0f) {
                    func_8006D36C(actor);
                }
                break;

            case 10:
                var_s0 = 0;
                if (Math_SmoothStepToAngle(&actor->obj.rot.x, 0.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    var_s0++;
                }

                if (Math_SmoothStepToAngle(&actor->obj.rot.y, 0.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    var_s0++;
                }

                if (Math_SmoothStepToF(&actor->fwork[15], 40.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    var_s0++;
                }

                if (var_s0 == 3) {
                    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_602F638);
                    func_8006D36C(actor);
                }
                break;

            case 11:
                if (Math_SmoothStepToF(&actor->fwork[15], 0.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    func_8006D36C(actor);
                }
                break;

            case 12:
                Math_SmoothStepToAngle(&actor->unk_0F4.x, 270.0f, 0.1f, 2.0f, 0.0f);
                gTeamShields[actor->iwork[12]] = -1;
                gTeamDamage[actor->iwork[12]] = 0;
                break;

            case 200:
                break;
        }

        if (actor->iwork[13] != 0) {
            if (gActors[actor->iwork[9]].obj.status != OBJ_ACTIVE) {
                actor->iwork[13] = 0;
            } else {
                Matrix_RotateY(gCalcMatrix, gActors[actor->iwork[9]].obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, gActors[actor->iwork[9]].obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, gActors[actor->iwork[9]].obj.rot.z * M_DTOR, 1);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &actor->vwork[28], &spAC);
                actor->obj.pos.x = gActors[actor->iwork[9]].obj.pos.x + spAC.x;
                actor->obj.pos.y = gActors[actor->iwork[9]].obj.pos.y + spAC.y;
                actor->obj.pos.z = gActors[actor->iwork[9]].obj.pos.z + spAC.z;
                actor->vwork[29].x = gActors[actor->iwork[9]].obj.rot.x;
                actor->vwork[29].y = gActors[actor->iwork[9]].obj.rot.y;
                actor->vwork[29].z = gActors[actor->iwork[9]].obj.rot.z;
                if (actor->timer_0C0 == 0) {
                    actor->iwork[13] = 0;
                }
            }
        }

        Math_SmoothStepToF(&actor->fwork[0], actor->fwork[1], 0.1f, 5.0f, 0.0001f);

        if (actor->unk_0F4.x >= 360.0f) {
            actor->unk_0F4.x -= 360.0f;
        }
        if (actor->unk_0F4.x < 0.0f) {
            actor->unk_0F4.x += 360.0f;
        }
        if (actor->unk_0F4.y >= 360.0f) {
            actor->unk_0F4.y -= 360.0f;
        }
        if (actor->unk_0F4.y < 0.0f) {
            actor->unk_0F4.y += 360.0f;
        }

        if (actor->iwork[6] != 0) {
            if ((gLevelMode == LEVELMODE_UNK_2) && (actor->unk_0B4 == 200)) {
                Math_SmoothStepToAngle(&actor->obj.rot.x, actor->unk_0F4.x, 0.1f, 10.0f, 0.00001f);
                Math_SmoothStepToAngle(&actor->obj.rot.y, actor->unk_0F4.y, 0.1f, 10.0f, 0.00001f);
            } else {
                Math_SmoothStepToAngle(&actor->obj.rot.x, actor->unk_0F4.x, 0.2f, 100.0f, 0.00001f);
                Math_SmoothStepToAngle(&actor->obj.rot.y, actor->unk_0F4.y, 0.2f, 100.0f, 0.00001f);
            }
        }

        if (actor->fwork[4] > 0.0f) {
            actor->fwork[4] -= actor->fwork[5];
            actor->obj.rot.x += actor->fwork[5] * actor->fwork[6];
            if (actor->obj.rot.x >= 360.0f) {
                actor->obj.rot.x -= 360.0f;
            }
            if (actor->obj.rot.x < 0.0f) {
                actor->obj.rot.x += 360.0f;
            }
        }

        if (actor->fwork[7] > 0.0f) {
            actor->fwork[7] -= actor->fwork[8];
            actor->obj.rot.y += actor->fwork[8] * actor->fwork[9];
            if (actor->obj.rot.y >= 360.0f) {
                actor->obj.rot.y = actor->obj.rot.y - 360.0f;
            }
            if (actor->obj.rot.y < 0.0f) {
                actor->obj.rot.y += 360.0f;
            }
        }

        if (actor->fwork[10] > 0.0f) {
            if ((actor->unk_0B4 == 0xD) || (actor->unk_0B4 == 0xE) || (actor->unk_0B4 == 0x3D) ||
                (actor->unk_0B4 == 0x3E) || (actor->unk_0B4 == 0x3F) || (actor->unk_0B4 == 0x40) ||
                (actor->unk_0B4 == 0x41) || (actor->unk_0B4 == 0x42) || (actor->unk_0B4 == 0x5E) ||
                (actor->unk_0B4 == 0x5F) || (actor->unk_0B4 == 0x61)) {
                actor->obj.rot.y -= actor->fwork[11] * actor->fwork[12];
                actor->obj.rot.x += actor->fwork[11] * actor->fwork[12];
            } else {
                actor->fwork[10] -= actor->fwork[11];
                actor->fwork[23] += actor->fwork[11] * actor->fwork[12];
            }
        }

        if (actor->fwork[23] >= 360.0f) {
            actor->fwork[23] -= 360.0f;
        }
        if (actor->fwork[23] < 0.0f) {
            actor->fwork[23] += 360.0f;
        }

        Math_SmoothStepToAngle(&actor->obj.rot.z, actor->fwork[23], 0.2f, 100.0f, 0.0001f);
        Matrix_RotateZ(gCalcMatrix, (actor->vwork[29].z + actor->unk_0F4.z) * M_DTOR, 0);
        Matrix_RotateY(gCalcMatrix, actor->unk_0F4.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, actor->unk_0F4.x * M_DTOR, 1);

        spB8.x = 0.0f;
        spB8.y = 0.0f;
        spB8.z = actor->fwork[0];

        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spB8, &spAC);

        actor->vel.x = actor->fwork[13] + spAC.x;
        actor->vel.y = actor->fwork[14] + spAC.y;
        actor->vel.z = spAC.z;

        actor->fwork[13] -= actor->fwork[13] * 0.1f;
        actor->fwork[14] -= actor->fwork[14] * 0.1f;

        if (actor->iwork[5] == 0x80) {
            actor->vel.z -= actor->fwork[22];
            if ((gCurrentLevel == LEVEL_SECTOR_Y) && (D_80177D08 < 0.0f)) {
                actor->vel.z -= D_80177D08;
            }
        }

        if (actor->iwork[5] == 0x100) {
            actor->vel.z -= D_80177D08;
        }

        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_8) {
            actor->vel.z = 100.0f;
        }

        func_80070D44(actor);
        func_8006F40C(actor);
        func_8006EA50(actor);

        if (actor->unk_0B4 == 0x26) {
            func_800720E8(actor);
        } else {
            if (actor->scale <= -1.999f) {
                func_80070BA8(actor);
            } else {
                if ((actor->unk_0D0 == 1) && (actor->scale < 0.5f) && (actor->unk_0B4 != 0x30) &&
                    (actor->unk_0B4 != 0x31) && (actor->unk_0B4 != 0x32)) {
                    actor->unk_0D0 = 0;
                    if (gCurrentLevel == LEVEL_METEO) {
                        AUDIO_PLAY_SFX(0x2902107D, actor->sfxSource, 4);
                    } else {
                        AUDIO_PLAY_SFX(0x29121007, actor->sfxSource, 4);
                    }
                }

                if ((actor->unk_0B4 < 200) && (actor->unk_0B4 != 78) && (actor->scale >= 0.5f)) {
                    switch (actor->unk_0B4) {
                        case 71:
                            func_8006FE28(actor);
                            break;
                        case 79:
                            func_8006FEEC(actor);
                            break;
                        default:
                            func_800701E0(actor);
                            break;
                    }
                }
            }
        }
        switch (actor->unk_0B4) {
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
                if (!(gGameFrameCount & 7)) {
                    actor->fwork[18] = RAND_FLOAT(255.0f);
                    actor->fwork[19] = RAND_FLOAT(255.0f);
                    actor->fwork[20] = RAND_FLOAT(255.0f);
                }
                Math_SmoothStepToF(&actor->fwork[15], actor->fwork[18], 1.0f, 10.0f, 0.0f);
                Math_SmoothStepToF(&actor->fwork[16], actor->fwork[19], 1.0f, 10.0f, 0.0f);
                Math_SmoothStepToF(&actor->fwork[17], actor->fwork[20], 1.0f, 10.0f, 0.0f);
                break;

            case 46:
                if (func_800A73E4(&spEC, &spFC, actor->obj.pos.x, -100.0f, actor->obj.pos.z)) {
                    spF0 = 10.0f;

                    if (Math_SmoothStepToF(&actor->obj.pos.y, spEC, 0.5f, 7.0f, 0.0f) >= 0.0f) {
                        spF0 = 350.0f;
                        if (!(gGameFrameCount & 3)) {
                            func_8007240C(actor->obj.pos.x, spEC, actor->obj.pos.z, actor->obj.rot.y);
                            AUDIO_PLAY_SFX(0x19800017, actor->sfxSource, 4);
                        }
                    }

                    Math_SmoothStepToAngle(&actor->obj.rot.x, spF0, 0.1f, 1.0f, 0.0f);

                    if ((actor->state == 4) || (actor->state == 5)) {
                        var_fv0 = actor->fwork[3] * 20.0f;
                        if (actor->state == 4) {
                            var_fv0 *= -1.0f;
                        }
                        Math_SmoothStepToAngle(&actor->obj.rot.z, var_fv0, 0.1f, 3.0f, 0.0f);
                    }
                }
                actor->obj.rot.y = actor->unk_0F4.y;
                break;

            case 31:
                actor->obj.rot.z = gGameFrameCount;
                break;

            case 21:
            case 22:
                actor->obj.rot.z = gGameFrameCount * 3.0f;
                break;

            case 3:
                actor->unk_0C9 = 1;
                actor->obj.rot.y -= 10.0f;
                break;

            case 6:
                actor->unk_0B6++;
                if (gCurrentLevel == LEVEL_SOLAR) {
                    if (actor->unk_0B6 >= Animation_GetFrameCount(&D_600636C)) {
                        actor->unk_0B6 = 0;
                    }
                    if (((s32) gGameFrameCount % 3) == 0) {
                        func_i3_8019E9F4(actor->obj.pos.x, actor->obj.pos.y - 20, actor->obj.pos.z - 180.0f, 0.0f,
                                         RAND_FLOAT(20.0f) * -1.0f, 0.0f, 4.0f, 2);
                    }
                } else if (actor->unk_0B6 >= Animation_GetFrameCount(&D_40057AC)) {
                    actor->unk_0B6 = 0;
                }
                break;

            case 9:
                actor->unk_0B6++;
                if (actor->unk_0B6 >= Animation_GetFrameCount(&D_40001A4)) {
                    actor->unk_0B6 = 0;
                }
                if (actor->iwork[6] == 0) {
                    actor->obj.rot.y = 0.0f;
                }
                break;

            case 48:
            case 49:
            case 50:
                func_i6_801A3BD4(actor);
                break;

            case 52:
                func_80072474(actor);
                break;

            case 78:
                func_8006753C(actor);
                break;

            case 79:
                if (actor->timer_0C4 == 0) {
                    actor->unk_0B6 += 1;
                    if (Animation_GetFrameCount(&D_600E5EC) < actor->unk_0B6) {
                        actor->unk_0B6 = 0;
                    }
                }
                break;

            case 80: {
                Effect* effect;
                Vec3f sp90;
                Vec3f sp84;
                Vec3f sp78;
                s32 sp74;

                switch (actor->unk_046) {
                    case 1:
                        break;

                    case 0:
                        Matrix_RotateZ(gCalcMatrix, actor->unk_0F4.z * M_DTOR, 0);
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1290, &sp90);

                        if ((actor->obj.pos.y + sp90.y) > -30.0f) {
                            for (sp74 = 0; sp74 < 7; sp74++) {
                                effect = func_8007783C(OBJ_EFFECT_394);

                                if (effect != NULL) {
                                    effect->unk_78 = effect->unk_7A = 12;
                                    effect->obj.status = OBJ_ACTIVE;
                                    effect->obj.pos.x = actor->obj.pos.x + sp90.x;
                                    effect->obj.pos.y = actor->obj.pos.y + sp90.y;
                                    effect->obj.pos.z = actor->obj.pos.z;
                                    effect->obj.rot.x = RAND_FLOAT(360.0f);
                                    effect->obj.rot.y = RAND_FLOAT(360.0f);
                                    effect->obj.rot.z = RAND_FLOAT(360.0f);
                                    sp84.x = RAND_FLOAT(25.0f) + 30.0f;
                                    sp84.y = RAND_FLOAT(25.0f) + 20.0f;
                                    sp84.z = 0.0f;
                                    effect->unk_44 = 10;
                                    effect->scale2 = 1.0f;
                                    Matrix_RotateY(gCalcMatrix, (RAND_FLOAT(180.0f) + 180.0f) * M_DTOR, 0);
                                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp84, &sp78);
                                    effect->vel.x = sp78.x;
                                    effect->vel.y = sp78.y;
                                    effect->vel.z = sp78.z;
                                    effect->unk_60.x = RAND_FLOAT_CENTERED(1.0f) + 5.0f;
                                    effect->unk_60.y = RAND_FLOAT_CENTERED(1.0f) + 5.0f;
                                    effect->unk_60.z = RAND_FLOAT_CENTERED(1.0f) + 5.0f;
                                }
                            }
                            actor->unk_046++;
                        }
                        break;
                }

                if ((fabsf(actor->fwork[0]) > 10.0f) && !(gGameFrameCount & 1)) {
                    effect = func_8007783C(OBJ_EFFECT_394);
                    if (effect != NULL) {
                        Matrix_RotateZ(gCalcMatrix, actor->unk_0F4.z * M_DTOR, 0);
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1290, &sp90);

                        effect->unk_78 = effect->unk_7A = 11;

                        effect->obj.status = OBJ_ACTIVE;

                        effect->obj.pos.x = actor->obj.pos.x + RAND_FLOAT_CENTERED(3.0f) + sp90.x;
                        effect->obj.pos.y = actor->obj.pos.y + RAND_FLOAT_CENTERED(3.0f) + sp90.y;
                        effect->obj.pos.z = actor->obj.pos.z + RAND_FLOAT_CENTERED(3.0f) + 180.0f;

                        effect->scale2 = 9.0f;
                        effect->obj.rot.z = RAND_FLOAT(360.0f);
                        effect->vel.x = RAND_FLOAT_CENTERED(5.0f);
                        effect->vel.y = RAND_FLOAT_CENTERED(3.0f) + 30.0f;
                        effect->unk_44 = 100;
                        effect->unk_46 = -8;
                        effect->unk_60.z = 3;

                        if (Rand_ZeroOne() < 0.5f) {
                            effect->unk_60.z = -effect->unk_60.z;
                        }

                        if (gGameFrameCount & 2) {
                            effect->vel.y = -effect->vel.y;
                        }
                    }

                    if (!(gGameFrameCount & 3)) {
                        effect = func_8007783C(OBJ_EFFECT_394);
                        if (effect != NULL) {
                            effect->unk_78 = effect->unk_7A = 11;
                            effect->obj.status = OBJ_ACTIVE;
                            effect->obj.pos.x = RAND_FLOAT_CENTERED(3.0f) + actor->obj.pos.x;
                            effect->obj.pos.y = RAND_FLOAT_CENTERED(5.0f) + actor->obj.pos.y + 50.0f;
                            effect->obj.pos.z = RAND_FLOAT_CENTERED(3.0f) + actor->obj.pos.z + 200.0f;
                            effect->scale2 = 9.0f;
                            effect->obj.rot.z = RAND_FLOAT(360.0f);
                            effect->vel.x = RAND_FLOAT_CENTERED(5.0f);
                            effect->vel.y = RAND_FLOAT_CENTERED(3.0f) + 10.0f;
                            effect->unk_44 = 100;
                            effect->unk_46 = -8;
                            effect->unk_60.z = 3;

                            if (Rand_ZeroOne() < 0.5f) {
                                effect->unk_60.z = -effect->unk_60.z;
                            }

                            if (gGameFrameCount & 4) {
                                effect->vel.y = -effect->vel.y;
                            }
                        }
                    }
                }
            } break;

            case 81:
                Math_SmoothStepToF(&actor->fwork[15], 1.0f, 0.1f, 0.1f, 0.001f);

                if (actor->fwork[15] > 0.5f) {
                    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_601B4C4);
                }

                if (actor->unk_046 == 0) {
                    actor->fwork[16] += 4.0f;
                    if (actor->fwork[16] >= 100.0f) {
                        actor->unk_046 = 1;
                        actor->fwork[16] = 100.0f;
                    }
                } else {
                    actor->fwork[16] -= 4.0f;
                    if (actor->fwork[16] <= 0.0f) {
                        actor->unk_046 = 0;
                        actor->fwork[16] = 0.0f;
                    }
                }
                break;

            case 83:
                if (actor->health <= 0) {
                    if (actor->unk_0B6 == 0x14) {
                        spD4 = actor->obj.pos.z;
                        spD8 = actor->obj.pos.y;

                        actor->obj.pos.y += 80.0f;
                        actor->obj.pos.z += 40.0f;
                        func_80066254(actor);
                        actor->obj.pos.y = spD8;
                        actor->obj.pos.z = spD4;
                    }

                    if ((actor->unk_0B6 >= 0x12) && (actor->unk_0B6 < 0x18)) {
                        func_8007BC7C(actor->obj.pos.x, actor->obj.pos.y + 80.0f, actor->obj.pos.z + 60.0f, 20.0f);
                    }

                    if (actor->unk_0B6 < 49) {
                        actor->unk_0B6++;
                        if (actor->unk_0B6 >= 49) {
                            actor->unk_0B6 = 49;
                        }
                        if (gGameFrameCount & 1) {
                            func_i3_801AC8A8(RAND_FLOAT_CENTERED(100.0f) + actor->obj.pos.x,
                                             RAND_FLOAT(50.0f) + actor->obj.pos.y,
                                             RAND_FLOAT_CENTERED(100.0f) + actor->obj.pos.z, 1.0f, 0);
                        }
                    }
                    actor->timer_0C2 = 10000;
                }
                break;

            case 88:
                if (actor->unk_04A == 0) {
                    actor->unk_046 += 4;
                    if (actor->unk_046 >= 255) {
                        actor->unk_046 = 255;
                        actor->unk_04A = 1;
                    }
                } else {
                    actor->unk_046 -= 4;
                    if (actor->unk_046 <= 0) {
                        actor->unk_046 = 0;
                        actor->unk_04A = 0;
                    }
                }
                break;

            case 103:
            case 104:
                func_i6_80187530(actor); // might be i5 or i2
                break;

            case 106:
                actor->unk_0B6 += 1;
                if (actor->unk_0B6 >= 6) {
                    actor->unk_0B6 = 0;
                }
                break;
        }

        if (gLevelMode == LEVELMODE_ALL_RANGE) {
            D_80177F20[actor->index + 1] = actor->obj.pos.x;
            D_80178028[actor->index + 1] = actor->obj.pos.z;
            D_80178130[actor->index + 1] = Math_ModF(actor->unk_0F4.y, 360.0f) + 180.0f;
            D_80178238[actor->index + 1] = 1;
        }
    }
}

UNK_TYPE D_800D129C[0x8C] = { 0 }; // unused

bool func_80074BFC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Actor* actor = data;

    if (limbIndex == 1) {
        pos->x += actor->fwork[16];
    }
    if (limbIndex == 2) {
        rot->z -= actor->fwork[15];
    }
    return false;
}

bool func_80074C44(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Actor* actor = data;
    s32 var_s1;

    if (limbIndex == 5) {
        var_s1 = (s32) (actor->health * 0.6375f);
        if (var_s1 > 255) {
            var_s1 = 255;
        }
        if (var_s1 < 0) {
            var_s1 = 1.0f / 70.925f;
        }

        Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
        Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
        Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_SetGfxMtx(&gMasterDisp);

        if (*dList != NULL) {
            RCP_SetupDL(&gMasterDisp, 0x22);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, var_s1, var_s1, 255);
            gSPDisplayList(gMasterDisp++, *dList);
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        }
        return true;
    }
    return false;
}

void func_80074E3C(Actor* actor) {
    Vec3f sp30[10];

    Animation_GetFrameData(&D_SX_6013820, 0, sp30);
    sp30[6].y += actor->fwork[15];
    sp30[5].z += actor->fwork[16] + ((actor->timer_0BE >> 2) & 1);
    sp30[4].z -= actor->fwork[16] + ((actor->timer_0BE >> 2) & 1);
    Animation_DrawSkeleton(1, D_SX_601390C, sp30, func_80074C44, NULL, actor, &gIdentityMatrix);
}

bool func_80074F04(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
    if ((limbIndex == 3) || (limbIndex == 5)) {
        gSPTexture(gMasterDisp++, 5000, 5000, 0, G_TX_RENDERTILE, G_ON);
        gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
    }
    return false;
}

s32 func_80074F90(Object_80* obj80) {
    RCP_SetupDL(&gMasterDisp, 0x3C);
    gSPDisplayList(gMasterDisp++, D_601AD70);
    RCP_SetupDL(&gMasterDisp, 0x40);
    return 0;
}

void func_80074FF0(Actor* actor) {
    Vec3f sp114[31];
    f32 sp40;
    s16 temp_s0;
    s32 pad;

    if (actor->timer_0C6 && (actor->unk_0B4 != 0x5A) && (actor->unk_0B4 != 0x44) && (actor->unk_0B4 != 0x48)) {
        if ((actor->unk_0B4 != 0xD) && (actor->unk_0B4 != 0xE) && (actor->unk_0B4 != 0x3D) &&
            (actor->unk_0B4 != 0x3E) && (actor->unk_0B4 != 0x53) && (actor->unk_0B4 != 0x62) && (actor->scale > 0.5f) &&
            (actor->timer_0C6 >= 9) && !(actor->timer_0C6 & 3) && (D_80177854 != 0x64)) {
            func_8007C120(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                          actor->vel.z, actor->scale * 0.07f, 3);
        }

        if ((actor->unk_0B4 != 0x15) && (actor->unk_0B4 != 0x17) && (actor->unk_0B4 != 0x4F) &&
            (actor->unk_0B4 != 0x53) && (actor->unk_0B4 != 0x1B) && (actor->unk_0B4 != 0x33) &&
            (actor->unk_0B4 != 0xD) && (actor->unk_0B4 != 0x48) && (actor->unk_0B4 != 0x1C) && (actor->scale > 0.5f)) {
            sp40 = SIN_DEG(actor->timer_0C6 * 400.0f) * actor->timer_0C6;
            Matrix_RotateY(gGfxMatrix, M_DTOR * sp40, 1);
            Matrix_RotateX(gGfxMatrix, M_DTOR * sp40, 1);
            Matrix_RotateZ(gGfxMatrix, M_DTOR * sp40, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
        }
    }

    if ((actor->obj.status == OBJ_DYING) && (actor->timer_0BE != 0)) {
        RCP_SetupDL_27();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
    }

    if ((actor->unk_0B4 == 0x1D) || (actor->unk_0B4 == 0x3B) || (actor->unk_0B4 == 0x3C)) {
        RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    } else if ((actor->unk_0B4 == 0x52) || (actor->unk_0B4 == 0x5A) ||
               ((actor->unk_0B4 == 6) && (gCurrentLevel == LEVEL_SOLAR))) {
        if (!(actor->timer_0C6 & 1)) {
            RCP_SetupDL(&gMasterDisp, 0x39);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x3D);
        }
    }

    switch (actor->unk_0B4) {
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
            RCP_SetupDL(&gMasterDisp, 0x22);
            gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, (s32) actor->fwork[15], (s32) actor->fwork[16],
                            (s32) actor->fwork[17], 255);
            gSPDisplayList(gMasterDisp++, D_800D003C[actor->unk_0B4].unk_00);
            gDPSetTextureFilter(gMasterDisp++, G_TF_BILERP);
            break;
        default:
            if ((actor->unk_0B4 < 200) && (D_800D003C[actor->unk_0B4].unk_00 != NULL)) {
                gSPDisplayList(gMasterDisp++, D_800D003C[actor->unk_0B4].unk_00);
            }

            switch (actor->unk_0B4) {
                case 56:
                    func_800515C4();
                    break;

                case 0:
                    actor->iwork[11] = 1;
                    func_8005ADAC(actor);
                    break;

                case 2:
                    actor->fwork[15] -= actor->fwork[15] * 0.1f;
                    actor->fwork[26] -= actor->fwork[26] * 0.1f;
                    actor->fwork[16] -= actor->fwork[16] * 0.1f;
                    actor->fwork[27] -= actor->fwork[27] * 0.1f;

                    if (actor->obj.rot.z > 0.0f) {
                        actor->fwork[15] += (actor->obj.rot.z * 0.7f - actor->fwork[15]) * 0.2f;
                        actor->fwork[26] += (-actor->obj.rot.z * 0.7f - actor->fwork[26]) * 0.2f;
                    }

                    if (actor->obj.rot.z < 0.0f) {
                        actor->fwork[16] += (-actor->obj.rot.z * 0.7f - actor->fwork[16]) * 0.2f;
                        actor->fwork[27] += (actor->obj.rot.z * 0.7f - actor->fwork[27]) * 0.2f;
                    }
                    func_8005B388(actor);
                    break;

                case 43:
                    if (gLevelType == LEVELTYPE_PLANET) {
                        gSPDisplayList(gMasterDisp++, D_40018A0);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_ENMY_SPACE_4007870);
                    }
                    func_8005ADAC(actor);
                    break;

                case 5:
                    actor->iwork[11] = 1;
                    func_8005ADAC(actor);
                    break;

                case 6:
                    if (gCurrentLevel == LEVEL_SOLAR) {
                        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                        Animation_GetFrameData(&D_600636C, actor->unk_0B6, sp114);
                        Animation_DrawSkeleton(1, D_6006558, sp114, NULL, NULL, actor, &gIdentityMatrix);
                        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    } else {
                        Animation_GetFrameData(&D_40057AC, actor->unk_0B6, sp114);
                        Animation_DrawSkeleton(1, D_40058B8, sp114, NULL, NULL, actor, &gIdentityMatrix);
                    }
                    break;

                case 7:
                    actor->iwork[11] = 1;
                    func_8005ADAC(actor);
                    break;

                case 9:
                    Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);
                    Animation_GetFrameData(&D_40001A4, actor->unk_0B6, sp114);
                    Animation_DrawSkeleton(1, D_4000270, sp114, NULL, NULL, actor, &gIdentityMatrix);
                    break;

                case 18:
                    if (actor->fwork[0] > 0.1f) {
                        actor->iwork[11] = 1;
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
                        Matrix_Scale(gGfxMatrix, 2.5f, 2.5f, 2.5f, 1);
                        func_8005B1E8(actor, 2);
                    }
                    break;

                case 19:
                    if (actor->fwork[0] > 0.1f) {
                        actor->iwork[11] = 1;
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
                        Matrix_Scale(gGfxMatrix, 2.5f, 2.5f, 2.5f, 1);
                        func_8005B1E8(actor, 2);
                    }
                    break;

                case 20:
                    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
                    gSPDisplayList(gMasterDisp++, D_601A120);
                    break;

                case 21:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_6018BF0);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
                    actor->iwork[11] = 1;
                    func_8005B1E8(actor, 2);
                    break;

                case 22:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_6019730);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
                    actor->iwork[11] = 1;
                    func_8005B1E8(actor, 2);
                    break;

                case 27:
                    if (actor->timer_0C2 != 0) {
                        if (!(actor->timer_0C2 & 3) && (D_80177854 != 0x64)) {
                            func_8007D0E0(RAND_FLOAT_CENTERED(200.0f) + actor->obj.pos.x,
                                          RAND_FLOAT_CENTERED(200.0f) + actor->obj.pos.y,
                                          RAND_FLOAT_CENTERED(200.0f) + actor->obj.pos.z, RAND_FLOAT(1.5f) + 2.5f);
                        }
                        RCP_SetupDL(&gMasterDisp, 0x39);
                        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                        gSPDisplayList(gMasterDisp++, D_SX_6001950);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_SX_60066F0);
                    }
                    break;

                case 31:
                    Matrix_RotateX(gGfxMatrix, M_PI / 2, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_600E0C0);
                    break;

                case 33:
                    Animation_GetFrameData(&D_ENMY_SPACE_400A30C, actor->unk_0B6, sp114);
                    Matrix_RotateY(gGfxMatrix, M_PI, 1);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, 1);
                    Animation_DrawSkeleton(1, D_ENMY_SPACE_400A398, sp114, func_80074BFC, NULL, actor,
                                           &gIdentityMatrix);
                    Math_SmoothStepToF(&actor->fwork[16], 0.0f, 0.3f, 2.0f, 0.0001f);
                    break;

                case 36:
                    Animation_GetFrameData(&D_TI1_700CAF4, actor->unk_0B6, sp114);
                    sp114[2].z += actor->fwork[15];
                    Animation_DrawSkeleton(1, D_TI1_700CB60, sp114, NULL, NULL, actor, &gIdentityMatrix);
                    break;

                case 38:
                    func_80074E3C(actor);
                    break;

                case 48:
                case 49:
                case 50:
                    func_i6_801A4CB0(actor);
                    break;

                case 52:
                    Animation_GetFrameData(&D_601F874, actor->unk_0B6, sp114);
                    sp114[2].z -= actor->fwork[15];
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, 1);
                    Animation_DrawSkeleton(1, D_601F920, sp114, NULL, NULL, actor, &gIdentityMatrix);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;

                case 64:
                    Matrix_Push(&gGfxMatrix);
                    Matrix_RotateX(gGfxMatrix, actor->unk_0F4.x * M_DTOR, 1);
                    Matrix_RotateY(gGfxMatrix, actor->unk_0F4.y * M_DTOR, 1);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, 0.0f, actor->fwork[15], 0.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_600CAA0);
                    Matrix_Pop(&gGfxMatrix);
                    gSPDisplayList(gMasterDisp++, D_600C130);
                    Matrix_Translate(gGfxMatrix, 0.0f, -actor->fwork[15], 0.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_600C740);
                    Matrix_Pop(&gGfxMatrix);
                    break;

                case 67:
                    gSPDisplayList(gMasterDisp++, D_6008AA0);
                    RCP_SetupDL(&gMasterDisp, 0x35);
                    gSPDisplayList(gMasterDisp++, D_6009E30);
                    break;

                case 78:
                    func_80067874(actor);
                    break;

                case 79:
                    temp_s0 = actor->state;
                    actor->state = 2;
                    func_i3_80190430(actor);
                    actor->state = temp_s0;
                    break;

                case 80:
                    Matrix_Scale(gGfxMatrix, 0.6f, 0.6f, 0.6f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_9011200);
                    break;

                case 81:
                    if (actor->fwork[15] > 0.001f) {
                        Matrix_Scale(gGfxMatrix, actor->fwork[15], actor->fwork[15], actor->fwork[15], 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        Texture_BlendRGBA16(actor->fwork[16], 16 * 11, D_9003890, D_9003DF0, D_9003330);
                        gSPDisplayList(gMasterDisp++, D_9002CF0);
                    }
                    break;

                case 82:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_600DA10);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;

                case 83:
                    Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);
                    Animation_GetFrameData(&D_AQ_602201C, actor->unk_0B6, sp114);
                    Animation_DrawSkeleton(1, D_AQ_60220E8, sp114, NULL, NULL, actor, &gIdentityMatrix);
                    break;

                case 85:
                    gSPDisplayList(gMasterDisp++, D_D00B880);
                    func_8005ADAC(actor);
                    break;

                case 86:
                    gSPDisplayList(gMasterDisp++, D_D009A40);
                    func_8005ADAC(actor);
                    break;

                case 88:
                    RCP_SetupDL(&gMasterDisp, 0x16);
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, actor->unk_046, actor->unk_046, actor->unk_046, 255);
                    gSPDisplayList(gMasterDisp++, D_AQ_6008970);
                    break;

                case 89:
                    RCP_SetupDL(&gMasterDisp, 0x15);
                    gSPDisplayList(gMasterDisp++, D_AQ_6000E10);
                    break;

                case 103:
                case 104:
                    func_i6_8018769C(actor);
                    break;

                case 105:
                    RCP_SetupDL(&gMasterDisp, 0x23);
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 0x8F);
                    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
                    gSPDisplayList(gMasterDisp++, D_WZ_7000000);
                    break;

                case 106:
                    Animation_GetFrameData(&D_ENMY_SPACE_4000080, actor->unk_0B6, sp114);
                    Animation_DrawSkeleton(1, D_ENMY_SPACE_400014C, sp114, NULL, NULL, actor, &gIdentityMatrix);
                    break;

                case 0xFFF:
                    actor->timer_0C2 = 10;
                    break;
            }

            if ((D_80161410 > 0) && ((actor->iwork[12] > 0) && (actor->iwork[12] < 6))) {
                Vec3f sp58 = { 0.0f, 0.0f, 0.0f };

                if ((actor->iwork[12] == 4) || (actor->iwork[12] == 5)) {
                    Matrix_MultVec3f(gGfxMatrix, &sp58, &D_80177E98[actor->iwork[12] + 4]);
                    return;
                } else {
                    Matrix_MultVec3f(gGfxMatrix, &sp58, &D_80177E98[actor->iwork[12]]);
                }
            }
            break;
    }
}

void func_800763A4(Actor* actor) {
    s32 var_s0;
    s32 sp60;
    s32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    s32 pad;

    if (actor->unk_0B4 == 27) {
        actor->obj.pos.y -= actor->vel.y;
        actor->obj.status = OBJ_ACTIVE;
        func_8007D0E0(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z - actor->vel.z,
                      actor->scale * 5.0f);
        actor->timer_0C2 = 10000;
        return;
    }

    if (actor->timer_0BE != 0) {
        actor->vel.z = 0.0f;
        actor->vel.x = 0.0f;
        actor->vel.y = 0.0f;

        if (actor->timer_0BE == 1) {
            Object_Kill(&actor->obj, actor->sfxSource);
            func_80066254(actor);

            if (gLevelMode == LEVELMODE_ALL_RANGE) {
                D_80177F20[actor->index + 1] = actor->obj.pos.x;
                D_80178028[actor->index + 1] = actor->obj.pos.z;
                D_80178130[actor->index + 1] = 1001.0f;
            }
            return;
        }
    } else {
        if ((gLevelType == LEVELTYPE_PLANET) || (gCurrentLevel == LEVEL_BOLSE)) {
            actor->gravity = 0.4f;
        }
        switch (actor->timer_04C) {
            case 0:
            case 1:
                if (actor->index & 1) {
                    actor->obj.rot.z -= 8.0f;
                } else {
                    actor->obj.rot.z += 8.0f;
                }
                break;

            case 2:
                actor->obj.rot.y += 5.0f;
                actor->obj.rot.x += 7.3f;
                break;

            case 3:
                actor->obj.rot.y += 6.0f;
                actor->obj.rot.x += 18.3f;
                actor->gravity = 0.7f;
                break;

            case 4:
                actor->obj.rot.x += (-90.0f - actor->obj.rot.x) * 0.1f;
                break;
        }

        if (((actor->timer_0BC & 3) == 1) && (actor->unk_0B4 != 13) && (actor->unk_0B4 != 61)) {
            func_8007D24C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 2.2f);
        }

        if ((D_80178294 != 0) && func_800A73E4(&sp58, &sp5C, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z)) {
            func_8007BFFC(actor->obj.pos.x, sp58 + 20.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, actor->scale * 3.0f, 5);
            func_8007B228(actor->obj.pos.x, sp58, actor->obj.pos.z, 2.0f);
            actor->timer_0BE = 2;
            func_8007A6F0(&actor->obj.pos, 0x2903A008);
            return;
        }

        if (D_801784AC == 4) {
            if (func_i5_801B6AEC(actor->obj.pos.x, actor->obj.pos.y - 10.0f, actor->obj.pos.z + D_80177D20) != 0) {
                func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y + 20.0f, actor->obj.pos.z, actor->scale * 6.0f);
                func_8007BFFC(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f,
                              actor->obj.pos.z - actor->vel.z, 0.0f, 0.0f, 0.0f, actor->scale * 4.0f, 20);
                func_80062C38(actor->obj.pos.x, actor->obj.pos.z);
                actor->timer_0BE = 2;
                func_8007A6F0(&actor->obj.pos, 0x2903A008);
                return;
            }
        } else {
            sp4C.x = actor->vel.x;
            sp4C.y = actor->vel.y;
            sp4C.z = actor->vel.z;

            sp60 = func_8006351C(actor->index, &actor->obj.pos, &sp4C, 0);

            if ((sp60 != 0) || (actor->obj.pos.y < (gGroundLevel + 30.0f))) {
                if ((Rand_ZeroOne() < 0.5f) && (actor->timer_04C < 3) && (gLevelType == LEVELTYPE_PLANET) &&
                    (sp60 != 999) && (D_80161A88 != 2) && ((actor->vel.z < -20.0f) || (actor->vel.z > 0.0f))) {
                    if (gCurrentLevel == LEVEL_FORTUNA) {
                        func_8006BF7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z);
                        func_80062C38(actor->obj.pos.x, actor->obj.pos.z);
                    }

                    actor->obj.pos.y -= actor->vel.y;
                    actor->vel.y = RAND_FLOAT(10.0f);
                    actor->timer_04C = 3;

                    if (gLevelMode == LEVELMODE_ALL_RANGE) {
                        func_8007D2C8(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y,
                                      actor->obj.pos.z - actor->vel.z, actor->scale * 3.0f);
                    }

                    func_8007D2C8(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z,
                                  actor->scale * 3.0f);

                    if ((actor->obj.id == OBJ_ACTOR_197) && (actor->unk_0E4 < 8)) {
                        func_8007A6F0(&actor->obj.pos, 0x2903B009);
                    } else {
                        func_8007A6F0(&actor->obj.pos, 0x2903A008);
                    }

                    if ((actor->obj.id == OBJ_ACTOR_200) && (actor->unk_0B4 == 2)) {
                        if (actor->fwork[17] < 360.0f) {
                            func_800A69F8(1, actor->obj.pos.x + 20.0f, actor->obj.pos.y, actor->obj.pos.z);
                            actor->fwork[17] = 777.0f;
                        }
                        if (actor->fwork[18] < 360.0f) {
                            func_800A69F8(0, actor->obj.pos.x - 20.0f, actor->obj.pos.y, actor->obj.pos.z);
                            actor->fwork[18] = 777.0f;
                        }
                    }
                } else {
                    if ((actor->obj.pos.y < (gGroundLevel + 30.0f)) && (gLevelType == LEVELTYPE_PLANET)) {
                        actor->vel.z = 0.0f;
                        if (D_80161A88 == 2) {
                            func_8007D9DC(actor->obj.pos.x, gGroundLevel + 2.0f, actor->obj.pos.z, 3.0f, 20.0f, 0);
                            func_8007D9DC(actor->obj.pos.x, gGroundLevel + 2.0f, actor->obj.pos.z, 3.0f, 20.0f, 10);
                            func_8007D9DC(actor->obj.pos.x, gGroundLevel + 2.0f, actor->obj.pos.z, 3.0f, 20.0f, 20);
                            func_8007ADF4(actor->obj.pos.x, gGroundLevel, actor->obj.pos.z, 0.1f, 3.0f);
                        } else {
                            func_800365E4(actor->obj.pos.x, 3.0f, actor->obj.pos.z, actor->obj.pos.x, actor->obj.pos.z,
                                          0.0f, 0.0f, 90.0f, 6.5f, 0, 0);
                        }
                        func_8007C120(actor->obj.pos.x, 20.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, actor->scale * 0.05f,
                                      0x1E);
                        if ((gCurrentLevel == LEVEL_FORTUNA) || (gCurrentLevel == LEVEL_VENOM_2)) {
                            func_8007C688(actor->obj.pos.x, gGroundLevel + 30.0f, actor->obj.pos.z, 3.0f, 60);
                            if (gCurrentLevel == LEVEL_FORTUNA) {
                                func_80062C38(actor->obj.pos.x, actor->obj.pos.z);
                            }
                        }
                    }

                    actor->obj.pos.y -= actor->vel.y;
                    func_8007D0E0(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f,
                                  actor->obj.pos.z - actor->vel.z, actor->scale * 5.0f);
                    if (gLevelMode == LEVELMODE_ALL_RANGE) {
                        func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, actor->vel.x, 10.0f,
                                      actor->vel.z, actor->scale * 3.0f, 20);
                        if (sp60 == 999) {
                            func_8007C688(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->scale * 3.0f,
                                          70);
                        }
                        for (var_s0 = 0; var_s0 < 4; var_s0++) {
                            if (Rand_ZeroOne() < 0.7f) {
                                if (gCurrentLevel == LEVEL_FORTUNA) {
                                    func_800A69F8(4, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z);
                                } else {
                                    func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
                                }
                            }
                        }
                    } else {
                        func_8007BFFC(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f,
                                      (actor->obj.pos.z - actor->vel.z) + 48.0f, 0.0f, 0.0f, 0.0f, actor->scale * 3.0f,
                                      5);
                    }

                    actor->timer_0BE = 2;

                    if ((actor->obj.id == OBJ_ACTOR_197) && (actor->unk_0E4 < 8)) {
                        func_8007A6F0(&actor->obj.pos, 0x2903B009);
                    } else {
                        func_8007A6F0(&actor->obj.pos, 0x2903A008);
                    }
                }
            }
        }
        if ((actor->unk_0D0 != 0) || (actor->timer_0BC == 0) ||
            ((actor->unk_044 != 0) && (actor->obj.id != OBJ_ACTOR_197))) {
            if (gLevelMode == LEVELMODE_ALL_RANGE) {
                for (var_s0 = 0; var_s0 < 4; var_s0++) {
                    if (Rand_ZeroOne() < 0.7f) {
                        if (gCurrentLevel == LEVEL_FORTUNA) {
                            func_800A69F8(4, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z);
                        } else {
                            func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
                        }
                    }
                }

                func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                              actor->vel.z, 5.0f, 15);
                func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z, 8.0f);
            } else {
                if ((actor->unk_0B4 != 0xD) && (actor->unk_0B4 != 61)) {
                    func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z,
                                  actor->scale * 5.0f);
                }

                if (actor->unk_0B4 == 0x24) {
                    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                                  actor->vel.z, 5.0f, 0xF);
                }
            }

            actor->timer_0BE = 2;

            if ((actor->obj.id == OBJ_ACTOR_197) && (actor->unk_0E4 < 8)) {
                func_8007A6F0(&actor->obj.pos, 0x2903B009);
            } else {
                func_8007A6F0(&actor->obj.pos, 0x2903A008);
            }
        }
    }

    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        D_80177F20[actor->index + 1] = actor->obj.pos.x;
        D_80178028[actor->index + 1] = actor->obj.pos.z;
        D_80178130[actor->index + 1] = actor->unk_0F4.y + 180.0f;
    }

    if (actor->obj.id == OBJ_ACTOR_197) {
        func_8002EE64(actor);
    }
}

void func_8007717C(Actor* actor) {
    if ((actor->unk_0B4 == 0x30) || (actor->unk_0B4 == 0x31) || (actor->unk_0B4 == 0x32)) {
        func_i6_801A3BD4(actor);
    } else {
        func_800763A4(actor);
    }
}

void func_800771CC(Actor* actor) {
    Vec3f sp24;

    Math_Vec3fFromAngles(&sp24, actor->obj.rot.x, actor->obj.rot.y, 50.0f);
    actor->vel.x = sp24.x;
    actor->vel.y = sp24.y;
    actor->vel.z = sp24.z;
}

void func_80077218(Actor* actor) {
    func_800515C4();
}

#include "global.h"

extern s32 D_800C9E90[];

extern f32 D_i2_80195554[];
extern f32 D_i2_80195584[];
extern f32 D_i2_80195594[];
extern f32 D_i2_801955A4[];
extern s32 D_i2_801955B4[];
extern Vec3f D_i2_801955C4;

extern Gfx D_6001310[];
extern Gfx D_6016240[];
extern Gfx D_6017AD0[];
extern Gfx D_60236F0[];
extern Gfx D_6023810[];
extern Gfx D_6024AD0[];
extern Gfx D_60240B0[];
extern Gfx D_60263F0[];

void func_i2_80187530(Actor* actor) {
    if (actor->unk_0D0 == 1) {
        actor->unk_0D0 = 0;
        func_8007A6F0(&actor->obj.pos, 0x2902107D);
    }
}

void func_i2_8018756C(Actor* actor) {
    Vec3f vec;

    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        actor->unk_0CE -= actor->unk_0D6;
        if (actor->unk_0CE <= 0) {
            actor->obj.status = 3;
        }
    }

    actor->obj.rot.y += 2.0f;
    actor->obj.rot.x += 1.3f;

    vec.x = actor->vel.x;
    vec.y = actor->vel.y;
    vec.z = actor->vel.z;

    if ((func_8006351C(actor->index, &actor->obj.pos, &vec, 0) != 0) || (actor->obj.pos.y < (gGroundLevel + 20.0f))) {
        actor->obj.status = 3;
    }
    func_i2_80187530(actor);
}

void func_i2_80187650(Actor* actor) {
    Vec3f vec;

    actor->obj.rot.y += 1.7f;
    actor->obj.rot.x += 3.3f;
    actor->unk_046 -= 15;

    if (actor->unk_046 < 0) {
        actor->unk_046 = 0;
    }

    actor->unk_048 += 8;
    if (actor->unk_048 > 995) {
        actor->unk_048 = 995;
    }

    if ((actor->timer_0BC & 3) == 1) {
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 6.0f);
    }

    if (actor->unk_0D0 != 0) {
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
        Object_Kill(&actor->obj, &actor->sfxPos);
    }

    if (actor->timer_0C2 == 0) {
        vec.x = actor->vel.x;
        vec.y = actor->vel.y;
        vec.z = actor->vel.z;
        if ((func_8006351C(actor->index, &actor->obj.pos, &vec, 0) != 0) ||
            (actor->obj.pos.y < (gGroundLevel + 20.0f))) {
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
            actor->obj.status = 3;
        }
    }

    func_i2_80187530(actor);
}

void func_i2_801877C4(Actor* actor) {
    Vec3f sp44;
    Vec3f sp38;

    actor->obj.rot.z += 1.0f;

    Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 0);

    sp38.x = 0.0f;
    sp38.y = -1100.0f;
    sp38.z = 0.0f;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp38, &sp44);

    actor->obj.pos.x = actor->fwork[0] + sp44.x;
    actor->obj.pos.y = actor->fwork[1] + sp44.y;

    if (actor->unk_0D0 != 0) {
        func_80066254(actor);
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        Object_Kill(&actor->obj, &actor->sfxPos);
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, 5.0f);
        func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 3.0f, 10);
    }

    if (actor->timer_0BC == 0) {
        actor->timer_0BC = 40;
        if (actor->obj.pos.z < (gPlayer->unk_138 - 1000.0f)) {
            func_8007F11C(0x161, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 120.0f);
        }
    }
}

void func_i2_8018795C(Actor* actor) {
    Vec3f sp54;
    s32 pad[2];

    actor->obj.rot.y += 7.0f;
    actor->obj.rot.x += 3.3f;

    if (actor->unk_0D0 != 0) {
        func_80066254(actor);
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        Object_Kill(&actor->obj, &actor->sfxPos);
        func_8007D0E0(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z, 8.0f);
        func_8007BFFC(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z - actor->vel.z, 0.0f,
                      0.0f, 0.0f, 4.0f, 10);
    }

    if (!(gGameFrameCount & 7)) {
        Math_Vec3fFromAngles(&sp54, actor->obj.rot.x, actor->obj.rot.y, 100.0f);
        func_8007F04C(0x161, actor->obj.pos.x + (sp54.x * 3.0f), actor->obj.pos.y + (sp54.y * 3.0f),
                      actor->obj.pos.z + (sp54.z * 3.0f), actor->obj.rot.x, actor->obj.rot.y, actor->obj.rot.z, 0.0f,
                      0.0f, 0.0f, sp54.x, sp54.y, sp54.z, 1.0f);
    }
}

void func_i2_80187B08(Actor* actor) {
    actor->obj.rot.y += 7.0f;
    actor->obj.rot.x += 3.3f;

    actor->unk_046 -= 11;

    if (actor->unk_046 < 0) {
        actor->unk_046 = 0;
    }

    actor->unk_048 += 4;
    if (actor->unk_048 > 995) {
        actor->unk_048 = 995;
    }

    if (!(actor->timer_0BC & 3)) {
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 6.0f);
    }

    if ((actor->unk_0D0 != 0) || (actor->timer_0BC == 0)) {
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        Object_Kill(&actor->obj, &actor->sfxPos);
        func_8007D0E0(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z, 8.0f);
        func_8007BFFC(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z - actor->vel.z, 0.0f,
                      0.0f, 0.0f, 4.0f, 10);
    }
}

void func_i2_80187C68(Actor* actor, f32 x, f32 y, f32 z, f32 arg4, f32 xRot, f32 yRot, s32 arg7, s32 arg8, s32 id) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = (u16) id;

    actor->obj.pos.x = x;
    actor->obj.pos.y = y;
    actor->obj.pos.z = z;

    actor->obj.rot.x = xRot;
    actor->obj.rot.y = yRot;

    actor->timer_0BC = arg7;
    actor->timer_0BE = 20;
    actor->unk_0B4 = arg8;
    actor->fwork[5] = arg4;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i2_80187D08(f32 x, f32 y, f32 z, f32 arg3, f32 xRot, f32 yRot, s32 arg6, s32 arg7, s32 id) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == 0) {
            func_i2_80187C68(&gActors[i], x, y, z, arg3, xRot, yRot, arg6, arg7, id);
            return;
        }
    }
}

void func_i2_80187D98(Effect* effect, f32 x, f32 y, f32 z, f32 arg4, s32 arg5) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_369;

    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;

    effect->unk_60.z = arg4;
    effect->unk_48 = arg5;
    effect->obj.rot.x = 45.0f;

    if (arg5 != 0) {
        effect->obj.rot.x = -45.0f;
    }

    Object_SetInfo(&effect->info, effect->obj.id);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187E38.s")

void func_i2_80187FF8(Effect* effect, f32 x, f32 y, f32 z) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_371;

    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;

    effect->unk_44 = 0x80;
    effect->vel.z = 50.0f;
    effect->scale2 = 1.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
}

// figure out prototype first
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188088.s")

void func_i2_801881A8(Effect* effect, f32 x, f32 y, f32 z, f32 zRot, s32 arg5) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_370;

    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;

    effect->obj.rot.z = zRot;

    effect->unk_4E = arg5;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i2_80188228(f32 x, f32 y, f32 z, f32 zRot) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i2_801881A8(&gEffects[i], x, y, z, zRot, 0);
            break;
        }
    }
}

void func_i2_80188298(f32 x, f32 y, f32 z, f32 zRot) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i2_801881A8(&gEffects[i], x, y, z, zRot, -1);
            Audio_PlaySfx(0x3102705CU, &gEffects[i].sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        }
    }
}

void func_i2_80188344(Boss* boss) {
    Vec3f src;
    Vec3f dest;
    f32 temp;

    if (boss->actionState < 5) {
        boss->obj.pos.x = gBosses->obj.pos.x;
        boss->obj.pos.y = gBosses->obj.pos.y;
        boss->obj.pos.z = gBosses->obj.pos.z;
        boss->obj.rot.x = gBosses->obj.rot.x;
        boss->obj.rot.y = gBosses->obj.rot.y;
        boss->obj.rot.z = ((gBosses->obj.rot.z + boss->unk_078.z) + 45.0f) + 180.0f;
    }

    switch (boss->actionState) {
        case 0:
            boss->timer_050 = 150;
            boss->unk_078.z += 2.5f;
            break;

        case 1:
            temp = fabsf(90.0f - boss->unk_078.z) * 0.1f;
            if (temp > 2.5f) {
                temp = 2.5f;
            }

            boss->unk_078.z += temp;

            if (boss->timer_050 == 0) {
                boss->actionState = 2;
                boss->dmgType = 0;
            }
            break;

        case 2:
            if (boss->dmgType == 1) {
                boss->dmgType = 0;
                boss->timer_054 = 5;
                boss->swork[0] += 32;

                func_8001D034(&boss->sfxPos, 0x3103605B, boss->unk_04A);

                boss->unk_04A++;
                if (boss->unk_04A >= 8) {
                    boss->unk_04A = 7;
                }

                if (boss->swork[0] >= 0xFF) {
                    boss->unk_04A = 0;
                    Audio_KillSfx(&boss->sfxPos);
                    if (boss->swork[1] == 0) {
                        boss->swork[1]++;
                        func_800BA808(gMsg_ID_3315, RCID_PEPPY);
                    }

                    boss->swork[0] = 0;

                    Matrix_RotateZ(gCalcMatrix, (boss->obj.rot.z - 45.0f) * M_DTOR, 0);

                    src.x = 0.0f;
                    src.y = 156.0f;
                    src.z = 930.0f;

                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

                    func_i2_80188298(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z,
                                     boss->obj.rot.z - 45.0f);
                    func_i2_80188228(boss->obj.pos.x - dest.x, boss->obj.pos.y - dest.y, boss->obj.pos.z + dest.z,
                                     boss->obj.rot.z - 45.0f);
                    func_i2_80188228(boss->obj.pos.x + dest.y, boss->obj.pos.y - dest.x, boss->obj.pos.z + dest.z,
                                     (boss->obj.rot.z - 45.0f) + 90.0f);
                }
            }
            break;

        case 3:
            boss->timer_050 = 30;
            boss->actionState = 4;
            boss->timer_05C = 15;
            boss->swork[0] = 0;
            break;

        case 4:
            if (boss->timer_050 == 0) {
                func_8007D2C8(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z + 500.0f, 30.0f);
                func_8007BFFC(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z + 500.0f, 0.0f, 0.0f, 0.0f, 20.0f, 30);
                boss->actionState = 5;

                boss->info.unk_10 = 1000.0f;

                func_8001A55C(&boss->sfxPos, 0x3103605B);
                Audio_PlaySfx(0x3102405DU, &boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 5:
            boss->obj.rot.z -= 3.0f;
            if (boss->vel.z < 5.0f) {
                boss->vel.z = boss->vel.z + 1.0f;
            }
            break;
    }

    if (boss->unk_078.z >= 360.0f) {
        boss->unk_078.z = boss->unk_078.z - 360.0f;
    }
    if (boss->unk_078.z < 0.0f) {
        boss->unk_078.z += 360.0f;
    }
}

void func_i2_801887D0(Boss* boss) {
    s32 i;

    if (boss->timer_054 & 1) {
        RCP_SetupDL_27();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 255, 0, 255);
    }

    Matrix_RotateZ(gGfxMatrix, (M_PI / 4), 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_60240B0);
    RCP_SetupDL_64();

    for (i = 1; i < 4; i++) {
        if (boss->swork[0] != 0) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, boss->swork[0]);
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateZ(gGfxMatrix, i * (M_PI / 2), 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 156.0f, 930.0f, 1);

            if (gGameFrameCount & 1) {
                Matrix_Scale(gGfxMatrix, 6.0f, 9.0f, 5.0f, 1);
            } else {
                Matrix_Scale(gGfxMatrix, 4.0f, 7.0f, 5.0f, 1);
            }

            Matrix_RotateZ(gGfxMatrix, 1.5707964f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_60263F0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_i2_80188A40(Boss* boss) {
    s32 i;

    func_8001D444(0, D_800C9E90[gCurrentLevel], 0, 255);

    D_80178284 = 1;

    boss->swork[2] = 40;
    boss->swork[3] = 40;
    boss->swork[4] = 40;
    boss->swork[5] = 40;
    boss->swork[7] = 180;
    boss->swork[8] = 180;
    boss->swork[6] = 150;
    boss->fwork[0] = -10.0f;
    boss->fwork[9] = -3000.0f;
    boss->fwork[15] = 8.0f;

    i = boss->unk_044 = 1;

    Boss_Initialize(&gBosses[i]);

    gBosses[i].obj.status = 1;
    gBosses[i].obj.id = 0x12A;
    gBosses[i].obj.pos.x = boss->obj.pos.x;
    gBosses[i].obj.pos.y = boss->obj.pos.y;
    gBosses[i].obj.pos.z = boss->obj.pos.z;

    Object_SetInfo(&gBosses[i].info, gBosses[i].obj.id);
    func_800BA808(gMsg_ID_3300, RCID_BOSS_METEO);
    Audio_PlaySfx(0x3102505AU, &boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i2_80188B84(Effect* effect, f32 x, f32 y, f32 z, f32 xRot, f32 yRot, f32 arg6, f32 arg7) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_369;

    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;

    effect->obj.rot.x = xRot;
    effect->obj.rot.y = yRot;
    effect->unk_60.z = arg6;

    effect->timer_50 = 20;
    effect->scale2 = arg7;
    effect->unk_4E = 1;
    effect->unk_44 = 0x80;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i2_80188C2C(f32 x, f32 y, f32 z, f32 xRot, f32 yRot, f32 arg5, f32 arg6) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_i2_80188B84(&gEffects[i], x, y, z, xRot, yRot, arg5, arg6);
            return;
        }
    }
}

void func_i2_80188CAC(Effect* effect) {
    Vec3f src;
    Vec3f dest;

    if (effect->unk_4E == 0) {
        switch (effect->unk_48) {
            case 0:
                effect->obj.rot.x -= 15.0f;
                if (effect->obj.rot.x <= -45.0f) {
                    effect->unk_48 = 1;
                }
                break;

            case 1:
                effect->obj.rot.x += 15.0f;
                if (effect->obj.rot.x >= 45.0f) {
                    effect->unk_48 = 0;
                }
                break;
        }

        effect->unk_44 = 255;
        effect->scale2 = 1.0f;
        effect->unk_60.z += 20.0f;

        Matrix_RotateZ(gCalcMatrix, effect->unk_60.z * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, effect->obj.rot.x * M_DTOR, 1);

        src.x = 0.0f;
        src.y = 0.0f;
        src.z = 80.0f;

        Matrix_MultVec3f(gCalcMatrix, &src, &dest);

        effect->vel.x = dest.x;
        effect->vel.y = dest.y;
        effect->vel.z = dest.z;

        func_i2_80188C2C(effect->obj.pos.x, effect->obj.pos.y, effect->obj.pos.z, effect->obj.rot.x, effect->obj.rot.y,
                         effect->unk_60.z, 1.0f);
    } else if (effect->timer_50 == 0) {
        Object_Kill(&effect->obj, &effect->sfxPos);
    }

    func_8007A774(gPlayer, effect, 90.0f);
}

void func_i2_80188E8C(Effect* effect, f32 x, f32 y, f32 z, f32 xRot, f32 yRot, f32 zRot, f32 scale) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_370;

    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;

    effect->obj.rot.x = xRot;
    effect->obj.rot.y = yRot;
    effect->obj.rot.z = zRot;

    effect->scale2 = scale;
    effect->unk_4E = 1;
    effect->unk_44 = 0x80;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i2_80188F2C(f32 x, f32 y, f32 z, f32 xRot, f32 yRot, f32 arg5, f32 scale) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_i2_80188E8C(&gEffects[i], x, y, z, xRot, yRot, arg5, scale);
            return;
        }
    }
}

void func_i2_80188F2C(f32, f32, f32, f32, f32, f32, f32);

void func_i2_80188FAC(Effect* effect) {
    Vec3f src;
    Vec3f dest;

    if (effect->unk_4E != 1) {
        effect->obj.rot.x = 10.0f;
        effect->obj.rot.z += 20.0f;

        Matrix_RotateZ(gCalcMatrix, effect->obj.rot.z * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, effect->obj.rot.x * M_DTOR, 1);

        src.x = 0.0f;
        src.y = 0.0f;
        src.z = 80.0f;

        Matrix_MultVec3f(gCalcMatrix, &src, &dest);

        effect->vel.x = dest.x;
        effect->vel.y = dest.y;
        effect->vel.z = dest.z;

        if (!(gGameFrameCount & 1)) {
            func_i2_80188F2C(effect->obj.pos.x, effect->obj.pos.y, effect->obj.pos.z, effect->obj.rot.x,
                             effect->obj.rot.y, effect->obj.rot.z, 5.0f);
        }
    } else {
        effect->unk_44 -= 8;
        if (effect->unk_44 < 0) {
            Object_Kill(&effect->obj, &effect->sfxPos);
        }
    }
    func_8007A774(gPlayer, effect, 60.0f);
}

void func_i2_80189114(Effect* arg0) {
    if (gPlayer->state_1C8 == PLAYERSTATE_1C8_7) {
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }

    arg0->scale2 += 0.5f;
    if (arg0->scale2 > 10.0f) {
        arg0->scale2 = 10.0f;
    }

    arg0->obj.rot.z += 35.0f;
    if (arg0->obj.pos.x < gPlayer->pos.x) {
        arg0->obj.pos.x += 1.5f;
        if (arg0->vel.x < 40.0f) {
            arg0->vel.x += 2.0f;
        }
    }

    if (gPlayer->pos.x < arg0->obj.pos.x) {
        arg0->obj.pos.x -= 1.5f;
        if (arg0->vel.x > -40.0f) {
            arg0->vel.x -= 2.0f;
        }
    }

    if (arg0->obj.pos.y < gPlayer->pos.y) {
        arg0->obj.pos.y += 1.5f;
        if (arg0->vel.y < 40.0f) {
            arg0->vel.y += 2.0f;
        }
    }

    if (gPlayer->pos.y < arg0->obj.pos.y) {
        arg0->obj.pos.y -= 1.5f;
        if (arg0->vel.y > -40.0f) {
            arg0->vel.y -= 2.0f;
        }
    }

    func_8007A774(gPlayer, arg0, 100.0f);
}
// figure out the prototype first
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_801892F0.s")

void func_i2_80189624(void) {
    if (gGameFrameCount & 1) {
        D_801784B8 = D_801784C4 = 0.0f;
        D_801784BC = D_801784C8 = 5.0f;
        D_801784C0 = D_801784CC = 0.0f;
        D_801784EC = D_801784F8 = 0.0f;
        D_801784F0 = D_801784FC = 100.0f;
        D_801784F4 = D_80178500 = 0.0f;
    } else {
        D_801784B8 = D_801784C4 = 0.0f;
        D_801784BC = D_801784C8 = -5.0f;
        D_801784C0 = D_801784CC = 0.0f;
        D_801784EC = D_801784F8 = 0.0f;
        D_801784F0 = D_801784FC = 110.0f;
        D_801784F4 = D_80178500 = 0.0f;
    }
}

// chonker
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018978C.s")

void func_i2_8018B7C4(s32 arg0) {
    f32 temp_fv0 = arg0 * 0.83333f;

    if (gGameFrameCount & 1) {
        temp_fv0 *= 1.1f;
    }

    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);

    RCP_SetupDL_64();
    Matrix_Push(&gGfxMatrix);
    Matrix_Scale(gGfxMatrix, 10.0f * temp_fv0, 10.0f * temp_fv0, 10.0f * temp_fv0, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 70);
    gSPDisplayList(gMasterDisp++, D_102ED50);

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 20.0f, 1);
    Matrix_Scale(gGfxMatrix, 9.0f * temp_fv0, 9.0f * temp_fv0, 9.0f * temp_fv0, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 60);
    gSPDisplayList(gMasterDisp++, D_102ED50);

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 35.0f, 1);
    Matrix_Scale(gGfxMatrix, 7.5f * temp_fv0, 7.5f * temp_fv0, 7.5f * temp_fv0, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 50);
    gSPDisplayList(gMasterDisp++, D_102ED50);

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 40.0f, 1);
    Matrix_Scale(gGfxMatrix, 5.0f * temp_fv0, 5.0f * temp_fv0, 5.0f * temp_fv0, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 40);
    gSPDisplayList(gMasterDisp++, D_102ED50);
    Matrix_Pop(&gGfxMatrix);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
}

void func_i2_8018BACC(Boss* boss) {
    s32 i;
    f32 var_fs0;
    f32 var_fs1;
    s32 pad;

    gSPDisplayList(gMasterDisp++, D_6001310);
    RCP_SetupDL_64();
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);

    for (i = 0; i < 6; i++) {
        if ((boss->fwork[i + 3] != 0) && (boss->fwork[11] == 0.0f)) {
            var_fs1 = 2.0f * boss->fwork[3 + i];
            Matrix_Push(&gGfxMatrix);
            switch (i) {
                case 0:
                    Matrix_Translate(gGfxMatrix, 746.0f, 741.0f, 680.0f, 1);
                    break;

                case 1:
                    Matrix_Translate(gGfxMatrix, -746.0f, 741.0f, 680.0f, 1);
                    break;

                case 2:
                    Matrix_Translate(gGfxMatrix, -746.0f, -741.0f, 680.0f, 1);
                    break;

                case 3:
                    Matrix_Translate(gGfxMatrix, 746.0f, -741.0f, 680.0f, 1);
                    break;

                case 4:
                    Matrix_Translate(gGfxMatrix, 1283.0f, 0.0f, -340.0f, 1);
                    break;

                case 5:
                    Matrix_Translate(gGfxMatrix, -1283.0f, 0.0f, -340.0f, 1);
                    break;
            }

            if (i < 4) {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 32, 32, 128);
                Matrix_Scale(gGfxMatrix, var_fs1, var_fs1, var_fs1, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_102ED50);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
                Matrix_Scale(gGfxMatrix, var_fs1 * 6.0f, var_fs1 * 6.0f, var_fs1 * 6.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_102ED50);
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }

    for (i = 0; i < 7; i++) {
        if (boss->swork[2 + i] != 0) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, boss->swork[19], 255);

            if (boss->swork[9 + i] & 1) {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 0x50, 0, 0, 255);
            }

            Matrix_Push(&gGfxMatrix);

            if (i == 4) {
                Matrix_Translate(gGfxMatrix, 0.0f, 0, 300.0f, 1);
                Matrix_RotateZ(gGfxMatrix, (M_PI / 4), 1);
                Matrix_Scale(gGfxMatrix, boss->fwork[21], boss->fwork[21], 1.0f, 1);
            }

            if (i == 5) {
                Matrix_Translate(gGfxMatrix, 0.0f, 330.0f, -1022.0f, 1);
                Matrix_Scale(gGfxMatrix, boss->fwork[22] * 3.2f, 2.0f * boss->fwork[22], 1.0f, 1);
            }

            if (i == 6) {
                Matrix_Translate(gGfxMatrix, 0.0f, -330.0f, -1022.0f, 1);
                Matrix_Scale(gGfxMatrix, boss->fwork[23] * 3.2f, 2.0f * boss->fwork[23], 1.0f, 1);
            }

            if (i < 4) {
                Matrix_RotateZ(gGfxMatrix, i * (M_PI / 2), 1);
                Matrix_Translate(gGfxMatrix, 0.0f, 200.0f, 500.0f, 1);
                Matrix_Scale(gGfxMatrix, boss->fwork[17 + i], boss->fwork[17 + i], 1.0f, 1);
            }

            Matrix_SetGfxMtx(&gMasterDisp);

            if (i < 4) {
                gSPDisplayList(gMasterDisp++, D_6024AD0);
            } else {
                gSPDisplayList(gMasterDisp++, D_60236F0);
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, 0xA0, 0xFF, 0xA0, 0x80);
    for (i = 0; i < 4; i++) {
        if (boss->fwork[11] != 0) {
            var_fs1 = boss->fwork[11];
            if (boss->fwork[11] > 15.0f) {
                var_fs1 = 15.0f;
            }

            Matrix_Push(&gGfxMatrix);
            switch (i) {
                case 0:
                    Matrix_Translate(gGfxMatrix, 746.0f, 741.0f, 680.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, -(M_PI / 4), 1);
                    break;

                case 1:
                    Matrix_Translate(gGfxMatrix, -746.0f, 741.0f, 680.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, (M_PI / 4), 1);
                    break;

                case 2:
                    Matrix_Translate(gGfxMatrix, -746.0f, -741.0f, 680.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, 2.3561945f, 1);
                    break;

                case 3:
                    Matrix_Translate(gGfxMatrix, 746.0f, -741.0f, 680.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, -2.3561945f, 1);
                    break;
            }

            Matrix_SetGfxMtx(&gMasterDisp);
            Matrix_Push(&gGfxMatrix);

            if (gGameFrameCount & 1) {
                Matrix_Scale(gGfxMatrix, var_fs1 * 2.5f, var_fs1 * 2.5f, var_fs1 * 2.5f, 1);
            } else {
                Matrix_Scale(gGfxMatrix, var_fs1 * 3.0f, var_fs1 * 3.0f, var_fs1 * 3.0f, 1);
            }

            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102ED50);
            Matrix_Pop(&gGfxMatrix);
            Matrix_RotateX(gGfxMatrix, -0.5235988f, 1);

            if (gGameFrameCount & 1) {
                Matrix_RotateY(gGfxMatrix, 3.1415927f, 1);
            }
            Matrix_Scale(gGfxMatrix, 2.0f, 2.0f * var_fs1, 2.0f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, -20.0f, 0.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102F5E0);
            Matrix_Pop(&gGfxMatrix);
        }
    }

    if (boss->fwork[11] > 15.0f) {
        var_fs1 = boss->fwork[11] - 15.0f;
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0xA0, 0xFF, 0xA0, 0xFF);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 1300.0f, 1);
        if (gGameFrameCount & 1) {
            Matrix_Scale(gGfxMatrix, var_fs1 * 0.8f, var_fs1 * 0.8f, var_fs1 * 0.8f, 1);
        } else {
            Matrix_Scale(gGfxMatrix, var_fs1, var_fs1, var_fs1, 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_102ED50);
        Matrix_Pop(&gGfxMatrix);
    }

    if ((boss->actionState == 9) || (boss->actionState == 0xA)) {
        var_fs1 = boss->fwork[15];
        for (i = 0; i < 10; i++) {
            var_fs1 += 0.3f;
            var_fs0 = var_fs1;
            if (var_fs1 <= 7.0f) {
                if (var_fs1 < 1.0f) {
                    var_fs0 = 1.0f;
                }

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_i2_80195554[i]);
                Matrix_Push(&gGfxMatrix);

                Matrix_Translate(gGfxMatrix, 700.0f, 0.0f, -(1235.0f - ((var_fs0 - 1.0f) * 89.2f)), 1);

                if (gGameFrameCount & 1) {
                    Matrix_Scale(gGfxMatrix, var_fs0, var_fs0, var_fs0, 1);
                } else {
                    Matrix_Scale(gGfxMatrix, var_fs0 * 1.1f, var_fs0 * 1.1f, var_fs0 * 1.1f, 1);
                }

                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_6023810);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, -700.0f, 0.0f, -(1235.0f - ((var_fs0 - 1.0f) * 89.2f)), 1);

                if (gGameFrameCount & 1) {
                    Matrix_Scale(gGfxMatrix, var_fs0, var_fs0, var_fs0, 1);
                } else {
                    Matrix_Scale(gGfxMatrix, var_fs0 * 1.1f, var_fs0 * 1.1f, var_fs0 * 1.1f, 1);
                }

                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_6023810);
                Matrix_Pop(&gGfxMatrix);
            }
        }
    }

    if (boss->swork[0] > 0) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 0.0f, 650.0f, 600.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_i2_8018B7C4(boss->swork[0] - 1);
        Matrix_Pop(&gGfxMatrix);
    }

    if (boss->swork[1] > 0) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 0.0f, -650.0f, 600.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_i2_8018B7C4(boss->swork[1] - 1);
        Matrix_Pop(&gGfxMatrix);
    }

    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
}

void func_i2_8018C77C(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = D_i2_80195584[arg1] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i2_80195594[arg1] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i2_801955A4[arg1] + gPlayer[0].unk_138;

    actor->unk_0B6 = D_i2_801955B4[arg1];
    actor->obj.rot.y = 180.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.unk_10 = 200.0f;

    if (actor->unk_0B6 == 0) {
        actor->iwork[11] = 1;
        Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }

    Audio_PlaySfx(0x11030010U, &actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x31024059U, &actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i2_8018C8F4(Actor* actor1, Actor* actor2) {
    Actor_Initialize(actor1);
    actor1->obj.status = 1;
    actor1->obj.id = OBJ_ACTOR_182;

    actor1->obj.pos.x = ((Rand_ZeroOneSeeded() - 0.5f) * 2000.0f) + actor2->obj.pos.x;
    actor1->obj.pos.y = ((Rand_ZeroOneSeeded() - 0.5f) * 2000.0f) + actor2->obj.pos.y;
    actor1->obj.pos.z = (((Rand_ZeroOneSeeded() - 0.5f) * 500.0f) + actor2->obj.pos.z) - 9000.0f;

    actor1->obj.rot.y = Rand_ZeroOneSeeded() * 360.0f;
    actor1->obj.rot.x = Rand_ZeroOneSeeded() * 360.0f;

    actor1->timer_0C2 = 0x2710;
    actor1->vel.z = 30.0f;
    Object_SetInfo(&actor1->info, actor1->obj.id);
}

void func_i2_8018CA10(Actor* actor1, Actor* actor2, f32 x, f32 y, f32 z) {
    Actor_Initialize(actor1);
    actor1->obj.status = 1;
    actor1->obj.id = OBJ_ACTOR_182;

    actor1->obj.pos.x = actor2->obj.pos.x + x;
    actor1->obj.pos.y = actor2->obj.pos.y + y;
    actor1->obj.pos.z = actor2->obj.pos.x + z;

    actor1->obj.rot.y = Rand_ZeroOneSeeded() * 360.0f;
    actor1->obj.rot.x = Rand_ZeroOneSeeded() * 360.0f;

    actor1->timer_0C2 = 0x2710;
    actor1->vel.z = 30.0f;
    Object_SetInfo(&actor1->info, actor1->obj.id);
}

void func_i2_8018CAD8(void) {
    Actor* actor = &gActors[50];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = 9000.0f;
    actor->unk_0B6 = 10;
    actor->obj.id = 0xC3;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i2_8018CB50(Effect* effect, Actor* actor) {
    Effect_Initialize(effect);
    effect->obj.status = 2;
    effect->obj.id = OBJ_EFFECT_346;
    effect->timer_50 = (s32) (Rand_ZeroOne() * 20.0f) + 20.0f;
    effect->scale2 = (Rand_ZeroOne() * 0.5f) + 0.5f;

    effect->obj.pos.x = actor->obj.pos.x;
    effect->obj.pos.y = actor->obj.pos.y;
    effect->obj.pos.z = actor->obj.pos.z;

    effect->vel.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
    effect->vel.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
    effect->vel.z = (Rand_ZeroOne() - 0.5f) * 30.0f;

    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i2_8018CCF8(Actor* arg0) {
    s32 i;
    s32 j;

    func_8007A6F0(&arg0->obj.pos, 0x2903A008);

    for (i = 0; i < 25; ++i) {
        for (j = 0; j < ARRAY_COUNT(gEffects); j++) {
            if (gEffects[j].obj.status == 0) {
                func_i2_8018CB50(&gEffects[j], arg0);
                break;
            }
        }
    }
}

void func_i2_8018CD8C(Player* player) {
    u8 sp8F;
    s32 i;
    Actor* actor0 = &gActors[0];
    Actor* actor1 = &gActors[1];
    Actor* actor2 = &gActors[2];
    Actor* actor3 = &gActors[3];
    f32 x;
    f32 y;
    f32 z;
    f32 sp68;
    f32 sp64;
    Vec3f sp58;
    Vec3f sp4C;

    D_8017835C = 4;

    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;

            if (gTeamShields[1] > 0) {
                func_i2_8018C77C(actor0, 0);
            }
            if (gTeamShields[2] > 0) {
                func_i2_8018C77C(actor1, 1);
            }
            if (gTeamShields[3] > 0) {
                func_i2_8018C77C(actor2, 2);
            }

            func_i2_8018C77C(actor3, 3);
            func_i2_8018CAD8();

            for (i = 5; i < 15; i++) {
                func_i2_8018C8F4(&gActors[i], actor3);
            }

            D_80177A48[1] = -13000.0f;
            D_80177A48[2] = -13000.0f;
            D_80177A48[4] = -22000.0f;

            player->camEye.x = (D_80177978 = player->pos.x + 100.0f);
            player->camEye.y = (D_80177980 = player->pos.y);
            player->camEye.z = (D_80177988 = D_80177A48[1] + player->unk_138);

            player->camAt.x = (D_801779A0 = D_80177A48[2] + player->pos.x);
            player->camAt.y = (D_801779B8 = player->pos.y);
            player->camAt.z = (D_801779C0 = D_80177A48[4] + player->unk_138);

            player->unk_1D0 = 1;

            D_80177A48[3] = 1.0f;

        case 1:
            actor3->vel.z = 4.0f;
            D_80177978 = player->pos.x + 100.0f;
            D_80177980 = player->pos.y;
            D_80177988 = D_80177A48[1] + player->unk_138;
            D_801779A0 = D_80177A48[2] + player->pos.x;
            D_801779B8 = player->pos.y + 20.0f;
            D_801779C0 = D_80177A48[4] + player->unk_138;
            Math_SmoothStepToF(&D_80177A48[1], 8000.0f, 0.05f, 20.0f, 0);
            Math_SmoothStepToF(&D_80177A48[2], 0.0f, 0.05f, 25.0f, 0);
            Math_SmoothStepToF(&D_80177A48[4], 0.0f, 0.05f, 200.0f, 0);
            Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.05f, 0.3f, 0);

            D_80177A48[0] = 0.1f;
            if (D_80177A80 == 680) {
                actor3->unk_0B8 = 10;
            }
            if (D_80177A80 == 720) {
                actor0->unk_0B8 = 11;
            }
            if (D_80177A80 == 750) {
                actor2->unk_0B8 = 12;
            }
            if (D_80177A80 == 780) {
                actor1->unk_0B8 = 13;
            }
            if (D_80177A80 > 810) {
                player->unk_1D0 = 2;
                D_80177A48[0] = 0.0f;
                player->timer_1F8 = 40;
            }
            sp8F = false;
            if (D_80177A80 == 190) {
                player->timer_1FC = 5;
                player->unk_1D8 = 10;
                sp8F = true;
            }
            if (D_80177A80 == 230) {
                player->timer_1FC = 3;
                player->unk_1D8 = 6;
                sp8F = true;
            }
            if (D_80177A80 == 240) {
                player->timer_1FC = 3;
                player->unk_1D8 = 11;
                sp8F = true;
            }
            if (D_80177A80 == 270) {
                player->timer_1FC = 2;
                player->unk_1D8 = 12;
                sp8F = true;
            }
            if (D_80177A80 == 600) {
                func_i2_8018CA10(&gActors[16], &gActors[3], 100.0f, 500.0f, 1500.0f);
                func_i2_8018CA10(&gActors[17], &gActors[3], 300.0f, 400.0f, 2000.0f);
            }
            if (D_80177A80 == 660) {
                for (i = 4; i < 15; i++) {
                    gActors[i].obj.status = 0;
                }

                actor3->obj.pos.x += 1000.0f;
                actor3->obj.pos.z += 4000.0f;

                for (i = 4; i < 9; i++) {
                    func_i2_8018C8F4(&gActors[i], &gActors[3]);
                }

                actor3->obj.pos.x -= 1000.0f;
                actor3->obj.pos.z -= 4000.0f;

                func_i2_8018CA10(&gActors[13], &gActors[3], 1500.0f, 200.0f, 100.0f);
                func_i2_8018CA10(&gActors[14], &gActors[3], 1200.0f, -200.0f, -500.0f);
                func_i2_8018CA10(&gActors[15], &gActors[3], 2000.0f, -100.0f, -1000.0f);

                gActors[50].obj.status = gActors[16].obj.status = gActors[17].obj.status = 0;
            }

            if (D_80177A80 > 660) {
                player->wings.unk_2C = 0;
            }

            if (D_80177A80 == 0x154) {
                func_8007D2C8(gActors[8].obj.pos.x, gActors[8].obj.pos.y, gActors[8].obj.pos.z, 10.0f);
                gActors[8].obj.status = 0;
                func_i2_8018CCF8(&gActors[8]);
            }

            if (player->timer_1FC != 0) {
                if (sp8F != 0) {
                    sp58 = D_i2_801955C4;
                    D_80177A48[3] *= -1.0f;
                    x = gActors[player->unk_1D8].obj.pos.x - (actor3->obj.pos.x + (D_80177A48[3] * 74.0f));
                    y = gActors[player->unk_1D8].obj.pos.y - (actor3->obj.pos.y - 232.0f);
                    z = gActors[player->unk_1D8].obj.pos.z - (actor3->obj.pos.z - 1190.0f);

                    sp64 = Math_RadToDeg(Math_Atan2F(x, z));
                    x = sqrtf((x * x) + (z * z));
                    sp68 = Math_RadToDeg(-Math_Atan2F(y, x));

                    Matrix_RotateY(gCalcMatrix, 0.017453292f * sp64, 0);
                    Matrix_RotateX(gCalcMatrix, 0.017453292f * sp68, 1);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);

                    func_8006EFA0(100, (actor3->obj.pos.x + (D_80177A48[3] * 74.0f)) + (sp4C.x * 0.6f),
                                  (actor3->obj.pos.y - 232.0f) + (sp4C.y * 0.8f),
                                  (actor3->obj.pos.z - 1190.0f) + (sp4C.z * 0.8f), sp4C.x, sp4C.y, sp4C.z, sp68, sp64,
                                  0.0f);
                }
                if (player->timer_1FC == 1) {
                    func_8007D2C8(gActors[player->unk_1D8].obj.pos.x, gActors[player->unk_1D8].obj.pos.y,
                                  gActors[player->unk_1D8].obj.pos.z, 10.0f);
                    gActors[player->unk_1D8].obj.status = 0;
                    func_i2_8018CCF8(&gActors[player->unk_1D8]);
                    Object_Kill(&gPlayerShots->obj, &gPlayerShots->sfxPos);
                }
            }
            break;

        case 2:
            D_80177978 = player->pos.x;
            D_80177980 = (player->pos.y * player->unk_148) + 50.0f;
            D_80177988 = 400.0f;
            D_801779A0 = player->pos.x;
            D_801779B8 = (player->pos.y * player->unk_148) + 20.0f;
            D_801779C0 = player->unk_138;

            Math_SmoothStepToF(D_80177A48, 1.0f, 1.0f, 0.01f, 0.0f);

            if (player->timer_1F8 == 0) {
                func_8001D444(0, D_80177C90, 0, 0xFF);
                D_80177838 = 80;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_1D0 = 0;
                player->timer_1F8 = 0;
                player->timer_1FC = 0;
                player->camEye.x = player->pos.x;
                player->camEye.y = (player->pos.y * player->unk_148) + 50.0f;
                player->camEye.z = 400.0f;
                player->camAt.x = player->pos.x;
                player->camAt.y = (player->pos.y * player->unk_148) + 20.0f;
                player->camAt.z = player->unk_138;

                for (i = 0; i < 4; i++) {
                    Object_Kill(&gActors[i].obj, &gActors[i].sfxPos);
                }

                D_80178488 = 1;
                break;
            }
    }

    switch (D_80177A80) {
        case 500:
            if ((gTeamShields[2] > 0) && (gTeamShields[3] > 0)) {
                func_800BA808(gMsg_ID_3005, RCID_SLIPPY);
            }
            break;

        case 600:
            if ((gTeamShields[2] > 0) && (gTeamShields[3] > 0)) {
                func_800BA808(gMsg_ID_3010, RCID_PEPPY);
            }
            break;

        case 700:
            func_800BA808(gMsg_ID_3015, RCID_FOX);
            break;
    }

    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 20000.0f, 0.0f);
}

void func_i2_8018D9EC(Actor* actor) {
    switch (actor->unk_0B8) {
        case 0:
            actor->fwork[0] = (Rand_ZeroOne() - 0.5f) * 10.0f;
            actor->unk_0B8 = 1;

        case 1:
            actor->obj.rot.z += actor->fwork[0];
            break;
    }
    func_i2_80187530(actor);
}

void func_i2_8018DA6C(Actor* actor) {
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPDisplayList(gMasterDisp++, D_6017AD0);
}

void func_i2_8018DAEC(Actor* actor) {
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPDisplayList(gMasterDisp++, D_6016240);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DB6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DBEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DCE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DE14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DF08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018E084.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018ED9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/D_i2_80195790.s")

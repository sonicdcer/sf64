#include "global.h"

s32 D_800CFF80[4] = { 0, 0, 0, 0 };
s32 D_800CFF90 = 0;
s32 D_80161690;

void func_80187530(Object_2F4*); // figure out which one later

void func_8006A7B0(u16* msg, s32 character) {
    (void) "Enm->obj.pos.y + tmp_xyz.y=<%10.3f>\n";
    if ((gRadioState == 0) || (D_80177D68 != character)) {
        func_800BA808(msg, character);
    }
}

void func_8006A800(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Effect_Initialize(effect);

    effect->obj.status = 1;
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

    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8006A900(f32 xPos, f32 yPos, f32 zPos, f32 arg3) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_8006A800(&gEffects[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

void func_8006A96C(Object_2F4* obj2F4) {
}

void func_8006A978(Object_2F4* obj2F4) {
}

void func_8006A984(Effect* effect, f32 xPos, f32 yPos, f32 zPos) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_365;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->unk_44 = 40;
    effect->scale2 = 5.0f;
    effect->scale1 = 2.0f * (Rand_ZeroOne() - 0.5f);
    effect->vel.y = 10.0f;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8006AA3C(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_8006A984(&gEffects[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_8006AA98(Object_80* obj80) {
    Vec3f sp24;
    Vec3f sp18;

    Texture_Scroll(D_60038F8, 32, 32, 1);
    if ((gFrameCount % 4) == 0) {
        Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);

        sp18.x = (Rand_ZeroOne() - 0.5f) * 700.0f;
        sp18.y = Rand_ZeroOne() * 50.0f;
        sp18.z = 700.0f;

        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp18, &sp24);
        func_8006AA3C(obj80->obj.pos.x + sp24.x, obj80->obj.pos.y + sp24.y + 50.0f, obj80->obj.pos.z + sp24.z);
    }
}

bool func_8006ABA4(Object_2F4* obj2F4) {
    if ((fabsf(obj2F4->obj.pos.x - gPlayer[0].pos.x) < 700.0f) &&
        (fabsf(obj2F4->obj.pos.y - gPlayer[0].pos.y) < 700.0f)) {
        return true;
    }
    return false;
}

void func_8006AC08(Object_2F4* obj2F4) {
    f32 sp2C;

    if (func_8006ABA4(obj2F4) && (obj2F4->timer_0BC == 0)) {
        func_8007F11C(OBJ_EFFECT_353, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, D_80177828);
        obj2F4->timer_0BC = 20;
    }
    sp2C = obj2F4->obj.pos.z + D_80177D20;
    obj2F4->obj.rot.y = Math_RadToDeg(Math_Atan2F(gPlayer[0].camEye.x - obj2F4->obj.pos.x, gPlayer[0].camEye.z - sp2C));
    obj2F4->obj.rot.x = -Math_RadToDeg(
        Math_Atan2F(gPlayer[0].camEye.y - obj2F4->obj.pos.y,
                    sqrtf(SQ(gPlayer[0].camEye.z - sp2C) + SQ(gPlayer[0].camEye.x - obj2F4->obj.pos.x))));
}

void func_8006AD18(Object_2F4* obj2F4) {
    bool sp34;

    obj2F4->gravity = 1.5f;
    sp34 = false;
    obj2F4->obj.rot.y = Math_RadToDeg(
        Math_Atan2F(gPlayer[gPlayerNum].pos.x - obj2F4->obj.pos.x, gPlayer[gPlayerNum].unk_138 - obj2F4->obj.pos.z));
    if (obj2F4->obj.pos.y < -500.0f) {
        obj2F4->obj.pos.y = -500.0f;
        obj2F4->vel.y = 0.0f;
        obj2F4->vel.x = 0.0f;
        obj2F4->vel.z = 0.0f;
        sp34 = true;
        obj2F4->unk_054 = true;
    }

    if (!(gFrameCount & 0x1F)) {
        func_8007F11C(OBJ_EFFECT_353, obj2F4->obj.pos.x, obj2F4->obj.pos.y + 180.0f, obj2F4->obj.pos.z, D_80177828);
    }

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_0B6++;

            if (obj2F4->unk_0B6 >= 30) {
                obj2F4->unk_0B6 = 0;
            }

            if (obj2F4->unk_0B6 == 0x15) {
                obj2F4->unk_0B8 = 1;

                obj2F4->vel.y = 40.0f;
                obj2F4->vel.z = -40.0f;
                obj2F4->vel.x = 10.0f;

                obj2F4->unk_050 = 1 - obj2F4->unk_050;

                if (obj2F4->unk_050) {
                    obj2F4->vel.x *= -1.0f;
                }

                if (obj2F4->unk_054) {
                    obj2F4->vel.x = 0.0f;
                    obj2F4->vel.z = -20.0f;
                }
            }
            break;

        case 1:
            if (obj2F4->vel.y > 10.0f) {
                obj2F4->unk_0B6++;
                if (obj2F4->unk_0B6 >= 30) {
                    obj2F4->unk_0B6 = 29;
                }
            } else {
                obj2F4->unk_0B6--;
                if (obj2F4->unk_0B6 < 0) {
                    obj2F4->unk_0B6 = 0;
                }
            }

            if (sp34) {
                obj2F4->unk_0B8 = 0;
            }
            break;
    }

    if (obj2F4->unk_0D0 != 0) {
        obj2F4->unk_0CE -= 10;
        if ((obj2F4->unk_0CE <= 0) || (obj2F4->unk_0D0 >= 2)) {
            func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 180.0f, obj2F4->obj.pos.z, 10.0f);
            func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 180.0f, obj2F4->obj.pos.z, obj2F4->vel.x,
                          obj2F4->vel.y, obj2F4->vel.z, 8.0f, 30);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            gHitCount += obj2F4->info.bonus;
            D_80177850 = 15;
        } else {
            obj2F4->unk_0D0 = 0;
            obj2F4->timer_0C6 = 20;
            Audio_PlaySfx(0x2903300E, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_8007D1E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 180.0f, obj2F4->obj.pos.z, 5.0f);
        }
    }
}

void func_8006B094(Object_2F4* obj2F4) {
}

s16 D_800CFF94[16] = {
    0, 0x62, 0x60, 0x5E, 0x5C, 0x5A, 0x58, 0x56, 0x54, 0x52, 0x50, 0x4E, 0x4C, 0x4A, 0x48, 0x46,
};
u8 D_800CFFB4[16] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2 };
f32 D_800CFFC4[16] = {
    1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.99f, 0.98f, 0.94f, 0.88f, 0.8f, 1.0f,
};
Gfx* D_800D0004[3] = { 0x04000170, 0x040084D0, 0x0400A630 };

void func_8006B0A0(Object_2F4* obj2F4) {
    Vec3f sp34;
    s32 temp_hi;

    obj2F4->unk_04E++;

    if (obj2F4->unk_04E >= 100) {
        obj2F4->unk_04E = 0;
    }

    D_80176558[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.pos.x;
    D_80176878[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.pos.y;
    D_80176B98[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.pos.z;
    D_80176EB8[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.rot.x;
    D_801771D8[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.rot.y;
    D_80177500[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.rot.z;

    obj2F4->obj.rot.x -= 10.0f;
    obj2F4->obj.rot.y += 3.0f;
    obj2F4->obj.rot.z += 5.0f;

    Math_Vec3fFromAngles(&sp34, obj2F4->obj.rot.x, obj2F4->obj.rot.y, 40.0f);

    obj2F4->vel.x = sp34.x;
    obj2F4->vel.y = sp34.y;
    obj2F4->vel.z = sp34.z;

    if ((obj2F4->timer_0BC == 0) && !(gFrameCount & 3)) {
        temp_hi = (D_800CFF94[obj2F4->unk_04A] + obj2F4->unk_04E) % 100;
        if (obj2F4->unk_04A == 0) {
            func_8007D2C8(D_80176558[obj2F4->unk_046][temp_hi], D_80176878[obj2F4->unk_046][temp_hi],
                          D_80176B98[obj2F4->unk_046][temp_hi], 7.0f);
        } else {
            func_8007D2C8(D_80176558[obj2F4->unk_046][temp_hi], D_80176878[obj2F4->unk_046][temp_hi],
                          D_80176B98[obj2F4->unk_046][temp_hi], 4.0f);
        }

        Audio_PlaySfx(0x2903B009, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        obj2F4->unk_04A++;

        if (obj2F4->unk_04A > 15) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            D_80176550[obj2F4->unk_046] = 0;
            gHitCount += obj2F4->info.bonus;
            D_80177850 = 15;
        }
    }
}

void func_8006B46C(Object_2F4* obj2F4, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, f32 arg8,
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
        if ((arg7 == 0) && (obj2F4->timer_0CA[0] != 0)) {
            sp34.y += obj2F4->info.unk_1C;
            Matrix_MultVec3f(gGfxMatrix, &sp34, D_80161578);
            if (D_80161578->z > -500.0f) {
                obj2F4->timer_0CA[0] = 0;
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

void func_8006B74C(Object_2F4* obj2F4) {
    s16 var_s0;
    s16 temp_hi;

    for (var_s0 = obj2F4->unk_04A; var_s0 < 16; var_s0++) {
        temp_hi = (D_800CFF94[var_s0] + obj2F4->unk_04E) % 100;
        func_8006B46C(obj2F4, D_80176558[obj2F4->unk_046][temp_hi], D_80176878[obj2F4->unk_046][temp_hi],
                      D_80176B98[obj2F4->unk_046][temp_hi], D_80176EB8[obj2F4->unk_046][temp_hi],
                      D_801771D8[obj2F4->unk_046][temp_hi], D_80177500[obj2F4->unk_046][temp_hi], D_800CFFB4[var_s0],
                      D_800CFFC4[var_s0], obj2F4->timer_0C6 & 1);
    }
}

void func_8006B95C(Object_80* obj80) {
    obj80->obj.pos.x += obj80->vel.x;
    obj80->obj.pos.y += obj80->vel.y;
    obj80->obj.pos.z += obj80->vel.z;

    switch (obj80->unk_48) {
        case 0:
            obj80->vel.y -= 1.0f;

            if (obj80->obj.pos.y < D_80177940 + 40.0f) {
                obj80->obj.pos.y = D_80177940 + 40.0f;
                Audio_PlaySfx(0x19130003, &obj80->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                obj80->unk_48 = 2;
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
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_375;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->scale2 = 0.0f;
    effect->scale1 = 0.12f;
    effect->obj.rot.y = Rand_ZeroOne() * 360.0f;
    effect->unk_60.y = (Rand_ZeroOne() - 0.5f) * 3.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8006BB1C(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_8006BA64(&gEffects[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_8006BB78(Object_2F4* obj2F4) {
    Vec3f sp44;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_13C = (Rand_ZeroOne() - 0.5f) * 1000.0f;
            obj2F4->unk_0B8 = 1;
            break;

        case 1:
            switch (obj2F4->unk_046) {
                case 0:
                    obj2F4->unk_114 += 2.0f;
                    if (obj2F4->unk_114 > 10.0f) {
                        obj2F4->unk_046 = 1;
                    }
                    break;

                case 1:
                    obj2F4->unk_114 -= 2.0f;
                    if (obj2F4->unk_114 < -10.0f) {
                        obj2F4->unk_046 = 0;
                    }
                    break;
            }

            Math_Vec3fFromAngles(&sp44, obj2F4->obj.rot.x, obj2F4->obj.rot.y, 10.0f);
            obj2F4->vel.x = sp44.x;
            obj2F4->vel.y = sp44.y;
            obj2F4->vel.z = sp44.z;
            if (fabsf((obj2F4->obj.pos.z + obj2F4->unk_13C) - gPlayer[0].unk_138) < 3000.0f) {
                obj2F4->unk_0B8 = 2;
                obj2F4->timer_0BC = 20;
                obj2F4->vel.z = 0.0f;
                obj2F4->vel.x = 0.0f;
            }
            break;

        case 2:
            if (obj2F4->timer_0BC == 0) {
                obj2F4->unk_0B8 = 3;
                obj2F4->unk_0B6 = 1;
                obj2F4->obj.pos.y += 30.0f;
                obj2F4->timer_0BC = 30;
                obj2F4->vel.y = 30.0f;
                obj2F4->gravity = 1.0f;
            }
            break;

        case 3:
            if (obj2F4->timer_0BC == 1) {
                func_8007F11C(OBJ_EFFECT_353, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, D_80177828);
            }
            if (obj2F4->vel.y < 12.0f) {
                Math_SmoothStepToF(&obj2F4->obj.rot.x, 180.0f, 0.1f, 7.0f, 0.01f);
            }
            if (obj2F4->obj.pos.y < (D_80177940 + 10.0f)) {
                obj2F4->obj.pos.y = D_80177940;
                obj2F4->unk_0B8 = 4;
                obj2F4->unk_0B6 = 0;
                obj2F4->vel.y = 0.0f;
                obj2F4->gravity = 0.0f;
                obj2F4->obj.rot.x = 0.0f;
            }
            break;

        case 4:
            if (obj2F4->timer_0BC == 0) {
                obj2F4->unk_0B8 = 0;
                obj2F4->obj.rot.y = Rand_ZeroOne() * 360.0f;
            }
            break;
    }

    if ((obj2F4->obj.pos.y <= (D_80177940 + 10.0f)) && !(gFrameCount & 7)) {
        func_8006BB1C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
    }

    if (!(gFrameCount & 7)) {
        func_8006A900(((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.x, obj2F4->obj.pos.y + 10.0f,
                      ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.z, 0.5f);
    }

    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0B6 != 0)) {
        func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 0.0f, obj2F4->vel.y, 0.0f, 3.0f, 5);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        obj2F4->unk_044 = 1;
        func_80066254(obj2F4);
    }
    obj2F4->unk_0D0 = 0;
}

f32 D_800D001C[5] = { 0.0f, 30.0f, 60.0f, -60.0f, -30.0f }; // could be in-function
void func_8006BF7C(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_800D001C); i++) {
        func_8006A900(xPos + D_800D001C[i], yPos, zPos, 6.0f);
    }
}

Vec3f D_800D0030 = { 0.0f, -10.0f, 0.0f }; // could be in-function
void func_8006C008(Object_2F4* obj2F4) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;

    switch (obj2F4->unk_0B8) {
        case 40:
            if (obj2F4->unk_04A & 4) {
                obj2F4->obj.pos.x = gPlayer[0].pos.x + (*obj2F4).unk_120;
                obj2F4->obj.pos.z = gPlayer[0].unk_138 + (*obj2F4).unk_124.x;
            }

            obj2F4->obj.rot.x += obj2F4->unk_114;
            obj2F4->obj.rot.y += obj2F4->unk_118;
            obj2F4->obj.rot.z += obj2F4->unk_11C;

            if (((obj2F4->unk_04A & 1) == 1) && !(obj2F4->timer_0BC & 3)) {
                func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->scale);
            }

            if ((obj2F4->unk_124.y + obj2F4->obj.pos.y) < 0.0f) {
                if (obj2F4->unk_050 >= 2) {
                    obj2F4->unk_11C = 0.0f;
                    obj2F4->unk_118 = 0.0f;
                    obj2F4->unk_114 = 0.0f;
                    obj2F4->vel.x = 0.0f;
                    obj2F4->vel.y = 0.0f;
                    obj2F4->vel.z = 0.0f;
                    obj2F4->gravity = 0.0f;
                } else {
                    if (obj2F4->unk_04A & 4) {
                        switch (obj2F4->unk_046) {
                            case 2:
                                Audio_PlaySfx(0x19000024, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                break;
                            case 25:
                                Audio_PlaySfx(0x29003031, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                break;
                        }
                    }
                    Math_SmoothStepToF(&obj2F4->unk_114, 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&obj2F4->unk_118, 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&obj2F4->unk_11C, 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&obj2F4->vel.x, 0.0f, 0.5f, 1.0f, 0.01f);
                    obj2F4->obj.pos.y = 0.0f;
                    obj2F4->unk_050 += 1;
                    if (obj2F4->vel.y < 0.0f) {
                        if (obj2F4->unk_04A & 2) {
                            obj2F4->vel.y = obj2F4->vel.y * -0.05f;
                        } else {
                            obj2F4->vel.y = obj2F4->vel.y * -0.3f;
                        }
                    }
                }
                obj2F4->unk_04A &= ~4;
            }
            break;

        case 45:
            obj2F4->obj.rot.y += obj2F4->unk_114;
            obj2F4->obj.rot.z += obj2F4->unk_118;
            break;

        case 46:
            obj2F4->obj.rot.x += obj2F4->unk_114;
            obj2F4->obj.rot.y += obj2F4->unk_118;
            obj2F4->obj.rot.z += obj2F4->unk_11C;

            func_E6A810_801B6E20(obj2F4->obj.pos.x, obj2F4->obj.pos.z + D_80177D20, &sp4C, &sp48, &sp4C);

            if (obj2F4->obj.pos.y < sp48) {
                obj2F4->obj.pos.y = sp48;
                obj2F4->unk_058++;
                if (obj2F4->unk_058 >= 2) {
                    obj2F4->vel.x = 0.0f;
                    obj2F4->vel.y = 0.0f;
                    obj2F4->vel.z = 0.0f;
                    obj2F4->unk_114 = 0.0f;
                    obj2F4->unk_118 = 0.0f;
                    obj2F4->unk_11C = 0.0f;
                    obj2F4->gravity = 0.0f;
                } else {
                    obj2F4->vel.y = -obj2F4->vel.y * 0.3f;
                }
            }
            break;

        case 47:
            func_E6A810_801B6E20(obj2F4->obj.pos.x, obj2F4->obj.pos.z + D_80177D20, &sp4C, &sp48, &sp4C);

            if (obj2F4->obj.pos.y < obj2F4->unk_120 + (-100.0f + sp48)) {
                obj2F4->obj.pos.y = obj2F4->unk_120 + sp48;
                obj2F4->unk_050 = 0;
                obj2F4->unk_058 = 1;
                obj2F4->vel.x = 0.0f;
                obj2F4->vel.y = 0.0f;
                obj2F4->vel.z = 0.0f;
                obj2F4->gravity = 0.0f;
                obj2F4->unk_114 = 0.0f;
                obj2F4->unk_118 = 0.0f;
                obj2F4->unk_11C = 0.0f;
            }

            obj2F4->obj.rot.x += obj2F4->unk_114;
            obj2F4->obj.rot.y += obj2F4->unk_118;
            obj2F4->obj.rot.z += obj2F4->unk_11C;

            if ((obj2F4->unk_050 == 1) && !(gFrameCount & 7)) {
                func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 2.0f);
            }

            if (obj2F4->unk_058 == 1) {
                if ((obj2F4->unk_054 == 1) && ((obj2F4->unk_048 == 8) || (obj2F4->unk_048 == 9))) {
                    func_8007D2C8(obj2F4->obj.pos.x, sp48 + 20.0f, obj2F4->obj.pos.z, 8.0f);
                }
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            break;

        case 48:
        case 49:
        case 51:
        case 52:
        case 53:
        case 55:
            if (((obj2F4->timer_0BC == 0) || (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                 (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) &&
                (obj2F4->timer_0BE == 0)) {
                func_8007B8F8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 50.0f, obj2F4->scale * 10.0f);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            }
            break;

        case 56:
            Math_SmoothStepToF(&obj2F4->scale, 0.0f, 0.1f, 2.0f, 0.0001f);
            if (((obj2F4->timer_0BC == 0) || (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                 (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) &&
                (obj2F4->timer_0BE == 0)) {
                func_8007B8F8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 50.0f, obj2F4->scale * 10.0f);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            }
            break;

        case 58:
            if (obj2F4->unk_046 == 0) {
                obj2F4->unk_046++;
                obj2F4->unk_114 = (Rand_ZeroOne() - 0.5f) * 30.0f;
                obj2F4->unk_118 = (Rand_ZeroOne() - 0.5f) * 30.0f;
                obj2F4->unk_11C = (Rand_ZeroOne() - 0.5f) * 30.0f;
            }

            obj2F4->obj.rot.x += obj2F4->unk_114;
            obj2F4->obj.rot.y += obj2F4->unk_118;
            obj2F4->obj.rot.z += obj2F4->unk_11C;

            if (((obj2F4->timer_0BC == 0) || (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                 (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) &&
                (obj2F4->timer_0BE == 0)) {
                func_8007B8F8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 50.0f, obj2F4->scale * 10.0f);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            }
            break;

        case 54:
            if (((obj2F4->timer_0BC == 0) || (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                 (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) &&
                (obj2F4->timer_0BE == 0)) {
                func_8007B8F8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 70.0f, obj2F4->scale * 20.0f);
                func_8007B8F8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 70.0f, obj2F4->scale * 20.0f);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            }
            break;

        case 50:
            if ((obj2F4->unk_050 == 2) && (obj2F4->timer_0BC == 0)) {
                func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 5.0f);
                obj2F4->timer_0BC = 4;
            }
            obj2F4->obj.rot.x += obj2F4->unk_114;
            obj2F4->obj.rot.y += obj2F4->unk_118;
            obj2F4->obj.rot.z += obj2F4->unk_11C;
            if (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800C9F2C, 1) != 0) {
                obj2F4->vel.x *= -0.7f;
            }
            if (obj2F4->obj.pos.y < D_80177940) {
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            break;

        case 57:
            obj2F4->obj.rot.x += obj2F4->unk_114;
            obj2F4->obj.rot.y += obj2F4->unk_118;
            obj2F4->obj.rot.z += obj2F4->unk_11C;

            if (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800C9F2C, 1) != 0) {
                obj2F4->vel.x *= -0.7f;
            }

            if (obj2F4->obj.pos.y < D_80177940) {
                if (obj2F4->unk_050 >= 3) {
                    obj2F4->vel.y = 0.0f;
                    obj2F4->gravity = 0.0f;
                    obj2F4->unk_11C = 0.0f;
                    obj2F4->unk_118 = 0.0f;
                    obj2F4->unk_114 = 0.0f;
                } else {
                    obj2F4->unk_050++;
                    obj2F4->vel.y = -obj2F4->vel.y * 0.7f;
                    obj2F4->obj.pos.y = D_80177940;
                    obj2F4->unk_114 *= 0.5f;
                    obj2F4->unk_118 *= 0.5f;
                    obj2F4->unk_11C *= 0.5f;
                }
            }
            break;

        default:
            if (obj2F4->unk_046 == 0) {
                obj2F4->unk_046++;
                obj2F4->unk_13C = (Rand_ZeroOne() - 0.5f) * 30.0f;
                obj2F4->unk_140 = (Rand_ZeroOne() - 0.5f) * 30.0f;
                obj2F4->unk_144 = (Rand_ZeroOne() - 0.5f) * 30.0f;
            }

            obj2F4->obj.rot.x += obj2F4->unk_13C;
            obj2F4->obj.rot.y += obj2F4->unk_140;
            obj2F4->obj.rot.z += obj2F4->unk_144;

            if (obj2F4->unk_0B8 == 0x46) {
                if ((obj2F4->timer_0BC == 0) || (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                    (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) {
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                }
            } else if (obj2F4->unk_0B8 == 0x27) {
                if (((obj2F4->timer_0BC == 0) ||
                     (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                     (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) &&
                    (obj2F4->timer_0BE == 0)) {
                    func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 10.0f);
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
                }
            } else if (((obj2F4->unk_0B8 >= 0x29) && (obj2F4->unk_0B8 < 0x2D)) || (obj2F4->unk_0B8 == 0x3B)) {
                if (((obj2F4->timer_0BC == 0) ||
                     (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0)) &&
                    (obj2F4->timer_0BE == 0)) {
                    func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 2.0f * obj2F4->scale);
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
                }
                if (func_800A73E4(&sp44, &sp40, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z)) {
                    func_8007B228(obj2F4->obj.pos.x, sp44, obj2F4->obj.pos.z, 2.0f);
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                }
            } else if (obj2F4->unk_0B8 >= 0xA) {
                if (!(obj2F4->timer_0BC & 3)) {
                    func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->scale);
                }
                if (((obj2F4->timer_0BC == 0) ||
                     (func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                     (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) &&
                    (obj2F4->timer_0BE == 0)) {
                    func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                                  obj2F4->vel.z, obj2F4->scale * 1.5f, 4);
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
                }
            } else {
                if ((obj2F4->unk_0B8 == 3) && !(obj2F4->timer_0BC & 7)) {
                    func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 1.5f);
                }
                if ((func_8006351C(obj2F4->index, &obj2F4->obj.pos, &D_800D0030, 1) != 0) ||
                    (obj2F4->obj.pos.y < (D_80177940 + 10.0f))) {
                    if (gLevelType == LEVELTYPE_SPACE) {
                        func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 2.0f);
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                        return;
                    }

                    obj2F4->vel.y *= -0.2f;
                    obj2F4->obj.pos.y += obj2F4->vel.y * 5.0f;
                    obj2F4->unk_050++;

                    if (obj2F4->unk_050 >= 2) {
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    }

                    if ((obj2F4->unk_0B8 != 2) && (obj2F4->unk_0B8 != 4)) {
                        func_8006BF7C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                    } else if (gCurrentLevel == LEVEL_FORTUNA) {
                        func_8007BC7C(((Rand_ZeroOne() - 0.5f) * 10.0f) + obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                      obj2F4->obj.pos.z, 1.0f);
                        func_8007BC7C(((Rand_ZeroOne() - 0.5f) * 10.0f) + obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                      obj2F4->obj.pos.z, 1.0f);
                        func_8007BC7C(((Rand_ZeroOne() - 0.5f) * 10.0f) + obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                      obj2F4->obj.pos.z, 1.0f);
                    }
                }

                if (obj2F4->unk_0B8 == 4) {
                    if ((gCurrentLevel == LEVEL_KATINA) && (obj2F4->timer_0BC == 0)) {
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    }
                } else {
                    if (obj2F4->timer_0BC & 1) {
                        func_8007D24C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 1.0f);
                    }
                    if ((gLevelType == LEVELTYPE_SPACE) && (obj2F4->timer_0BC == 0)) {
                        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    }
                }
            }
            break;
    }
}

void func_8006D0F4(Object_2F4* obj2F4) {
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
        if ((gObjects80[i].obj.status == 2) && ((gPlayer[0].unk_138 - 3000.0f) < gObjects80[i].obj.pos.z)) {
            hitboxData = D_800CF964[gObjects80[i].obj.id];
            count = *hitboxData;
            if (count != 0) {
                Matrix_RotateY(gCalcMatrix, -gObjects80[i].obj.rot.y * M_DTOR, 0);

                spA8.x = obj2F4->obj.pos.x - gObjects80[i].obj.pos.x;
                spA8.y = obj2F4->obj.pos.y - gObjects80[i].obj.pos.y;
                spA8.z = obj2F4->obj.pos.z - gObjects80[i].obj.pos.z;

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
                        obj2F4->unk_0C8 = 5;
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
    { 0x040068F0, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x04006E90, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { 0x04009800, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x040073C0, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_4007AF0, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x06011F90, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 0.0f, 1 },
    { 0x04000710, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 2, 0, 1, 1, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 6, 0, 1.0f, 1 },
    { 0x0400BD20, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x04001310, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 6, 0, 1.0f, 1 },
    { D_400B390, D_800CBE8C, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { D_6018C00, D_800CBE8C, 2.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x0601F2A0, D_800CBEFC, 7.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x0400AAE0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x04000650, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 6, 0, 1.0f, 1 },
    { 0x06016190, 0x060282A0, -2.0f, 2100.0f, 3000.0f, 0, 0, 7, 0, 0.0f, 5 },
    { 0x06023500, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x06022DF0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 2, 1, 1, 0, 0.0f, 1 },
    { NULL, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 0.0f, 1 },
    { 0x04008FA0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x060285F0, 0x0603298C, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x0600AF70, 0x06032904, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x06023E30, 0x06032970, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, 0x0603285C, 2.5f, 100.0f, 3000.0f, 2, 0, 0, 0, 1.0f, 1 },
    { 0x06001CE0, 0x06032938, 3.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 1.0f, 1 },
    { 0x06000840, 0x06032954, 1.0f, 100.0f, 3000.0f, 2, 1, 0, 0, 1.0f, 1 },
    { 0x06012A40, 0x06028254, -2.0f, 2100.0f, 3001.0f, 0, 0, 7, 0, 0.0f, 2 },
    { NULL, 0x060280E0, -2.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 3 },
    { 0x06009950, 0x06032878, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBEC4, 2.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { 0x0600B2B0, 0x06032894, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x0600A2E0, 0x060328B0, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBEFC, 2.0f, 200.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x0600B830, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, 0x0603238C, 1.0f, 500.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { 0x06020D20, 0x060328CC, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBF34, 1.0f, 100.0f, 3001.0f, 2, 0, 0, 0, 0.0f, 1 },
    { D_60097E0, 0x06034478, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_601D730, 0x0603450C, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { 0x060102C0, 0x06034588, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x06017B60, D_800CBEC4, -1.0f, 300.0f, 3001.0f, 0, 0, 0, 0, 1.0f, 1 },
    { 0x06004D00, D_800CBEC4, 1.0f, 100.0f, 3000.0f, 1, 0, 4, 0, 1.0f, 1 },
    { 0x0601A880, D_800CBE8C, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { NULL, D_603405C, 0.3f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { NULL, D_603405C, 0.3f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { NULL, D_603405C, 0.3f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { 0x06015D60, 0x06034124, 2.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 1.0f, 1 },
    { NULL, 0x0602C1A0, -1.0f, 1000.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x0600B540, 0x060328E8, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x04000EC0, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { 0x04008D50, D_800CBE8C, 1.5f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, D_800CBF34, -1.0f, 2000.0f, 3000.0f, 0, 0, 3, 0, 0.0f, 1 },
    { 0x060102C0, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x0601F3D0, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x06022B10, D_800CBF34, 2.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 0.0f, 1 },
    { 0x060209F0, D_800CBF34, 2.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 0.0f, 1 },
    { 0x06019430, D_800CBEC4, 2.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x06018960, D_800CBE8C, 2.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x06009F50, D_800CBF34, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBEC4, 3.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x0600C2A0, D_800CBEC4, -1.0f, 100.0f, 8000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { 0x0600BD40, D_800CBE8C, -1.0f, 100.0f, 8000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { NULL, 0x0602F604, 3.0f, 100.0f, 3000.0f, 2, 0, 1, 0, 1.0f, 1 },
    { 0x060205D0, 0x0603445C, 3.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x060036A0, 0x06034664, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_601AD70, D_800CBF34, 4.0f, 100.0f, 3000.0f, 0, 0, 1, 0, 0.0f, 1 },
    { 0x03007650, D_800CBF34, 1.0f, 100.0f, 3000.0f, 2, 0, 5, 0, 0.0f, 1 },
    { 0x060034D0, 0x060347D4, 3.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { 0x06005360, 0x06034770, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { D_600F6C0, 0x060347F0, -1.0f, 10000.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x0601B610, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 1, 0, 0.0f, 1 },
    { 0x0601C6A0, D_800CBF34, -1.0f, 10000.0f, 3001.0f, 0, 0, 1, 0, 0.0f, 1 },
    { 0x060188D0, 0x0603486C, 3.0f, 100.0f, 3001.0f, 0, 0, 1, 0, 0.0f, 1 },
    { NULL, D_800CBEA8, 1.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 1.0f, 0 },
    { NULL, 0x0602C294, 1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 1.0f, 1 },
    { NULL, 0x0601B474, -1.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBF34, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 2.0f, 100.0f, 3000.0f, 1, 0, 1, 0, 1.0f, 1 },
    { NULL, 0x06030B4C, 1.0f, 100.0f, 3000.0f, 2, 0, 0, 0, 60.0f, 1 },
    { 0x09012180, 0x0601B43C, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { NULL, D_800CBE8C, 1.0f, 20000.0f, 3000.0f, 1, 0, 2, 0, 0.0f, 0 },
    { 0x0900EFC0, D_800CBF34, 1.0f, 100.0f, 3000.0f, 1, 1, 0, 0, 0.0f, 1 },
    { NULL, 0x06030B30, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { NULL, D_6030B14_f32, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x0601C520, 0x060368FC, 1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { 0x0600AF40, 0x060368E0, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { 0x07000C40, D_800CC0D4, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x070010E0, D_800CC0F0, -1.0f, 2100.0f, 3001.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x07000E80, D_800CC054, 2.5f, 100.0f, 3000.0f, 1, 0, 0, 0, 1.0f, 1 },
    { 0x070008F0, D_800CBE8C, -1.0f, 100.0f, 8000.0f, 1, 0, 0, 0, 0.0f, 0 },
    { 0x07000280, D_800CC070, -1.0f, 1000.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 0 },
    { 0x0600AC70, D_800CBE8C, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
    { 0x0601A2B0, 0x060364C0, 1.0f, 100.0f, 3000.0f, 1, 1, 0, 0, 0.0f, 1 },
    { 0x06002500, 0x0601B944, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x060043F0, D_800CBF34, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x06004310, D_800CBF34, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { 0x06002740, 0x06009D18, -1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 1 },
    { NULL, D_800CBF34, -1.0f, 500.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 0 },
    { NULL, D_800CBF34, -1.0f, 500.0f, 3000.0f, 0, 0, 0, 0, 0.0f, 0 },
    { NULL, D_800CBEC4, 1.0f, 100.0f, 3000.0f, 0, 0, 0, 0, 1.0f, 1 },
    { NULL, D_800CBE8C, 1.0f, 100.0f, 3000.0f, 0, 0, 6, 0, 0.0f, 0 },
    { 0x06002890, 0x060368E0, -1.0f, 100.0f, 3000.0f, 1, 0, 0, 0, 0.0f, 1 },
};
u8 D_800D0DBC[6][4] = {
    // could be in-function
    { 255, 255, 255, 255 }, { 160, 160, 255, 255 }, { 80, 80, 255, 255 },
    { 80, 255, 80, 255 },   { 255, 80, 80, 255 },   { 255, 255, 80, 255 },
};

void func_8006D36C(Object_2F4* obj2F4) {
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
            var_v1 = SEGMENTED_TO_VIRTUAL(D_60308B8);
            break;
        case LEVEL_TITANIA:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_600631C);
            break;
        case LEVEL_SECTOR_X:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_60320D0);
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
            var_v1 = SEGMENTED_TO_VIRTUAL(D_6009B34);
            break;
        default:
            var_v1 = SEGMENTED_TO_VIRTUAL(D_603D9E8);
            break;
    }
    temp_s1 = SEGMENTED_TO_VIRTUAL(var_v1[obj2F4->unk_0E4]);

    switch (temp_s1[obj2F4->unk_0E6] & 0xFE00) {
        case 0xFE00:
            obj2F4->unk_0B8 = 200;
            if (obj2F4->info.unk_10 > 10000.0f) {
                obj2F4->info.unk_10 = 100.0f;
            }
            break;

        case 0xD000:
            Audio_KillSfx(&obj2F4->sfxPos);
            obj2F4->unk_0B4 = temp_s1[obj2F4->unk_0E6 + 1];

            if (obj2F4->unk_0B4 == 40) {
                obj2F4->timer_0C2 = 10000;
            } else {
                obj2F4->timer_0C2 = 0;
            }

            obj2F4->unk_140 = 0.0f;
            obj2F4->unk_144 = 0.0f;

            if ((obj2F4->unk_0B4 == 64) || (obj2F4->unk_0B4 == 81)) {
                obj2F4->unk_150 = 0.0f;
            } else if (obj2F4->unk_0B4 == 79) {
                obj2F4->info.drawType = 2;
            }

            obj2F4->unk_0CE = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;

            if ((obj2F4->unk_0B4 >= 200) && (obj2F4->unk_0B4 < 300)) {
                obj2F4->unk_046 = 100;
                obj2F4->info.hitbox = D_800CBEC4;
                obj2F4->info.unk_1C = 1.0f;

                for (i = 0; i < 2; i++) {
                    if (D_80176550[i] == 0) {
                        D_80176550[i] = 1;
                        obj2F4->unk_046 = i;
                        for (j = 0; j < 100; j++) {
                            D_80176878[i][j] = obj2F4->obj.pos.y;
                            D_80176B98[i][j] = obj2F4->obj.pos.z;
                        }
                        if (obj2F4->unk_0B4 == 200) {
                            Audio_PlaySfx(0x11032049, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        }
                        break;
                    }
                }

                if (obj2F4->unk_046 == 100) {
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                }
            }

            if ((obj2F4->unk_0B4 == 2) || (obj2F4->unk_0B4 == 43)) {
                obj2F4->unk_0C9 = 1;
                obj2F4->unk_07C = 1;
            }

            if (obj2F4->unk_0B4 == 81) {
                obj2F4->unk_0C9 = 1;
            }

            if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) {
                if (obj2F4->unk_0B4 == 86) {
                    func_8001D4AC(0x36, 0x14, 0xA, 0xA);
                }
                if (obj2F4->unk_0B4 == 85) {
                    func_8001D4AC(0x37, 0x14, 0xA, 0xA);
                }
            }

            if (obj2F4->unk_0B4 == 103) {
                obj2F4->unk_0B6 = 0;
            }

            if (obj2F4->unk_0B4 == 104) {
                obj2F4->unk_0B6 = Animation_GetFrameCount(&D_6014658) - 1;
            }

            if (obj2F4->unk_0B4 < 200) {
                obj2F4->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800D003C[obj2F4->unk_0B4].unk_04);
                obj2F4->scale = D_800D003C[obj2F4->unk_0B4].unk_08;
                obj2F4->info.unk_16 = D_800D003C[obj2F4->unk_0B4].unk_14;
                obj2F4->info.unk_14 = D_800D003C[obj2F4->unk_0B4].unk_15;
                obj2F4->info.unk_19 = D_800D003C[obj2F4->unk_0B4].unk_17;
                obj2F4->info.unk_1C = D_800D003C[obj2F4->unk_0B4].unk_18;
                obj2F4->info.bonus = D_800D003C[obj2F4->unk_0B4].unk_1C;

                if (obj2F4->unk_0B4 == 78) {
                    obj2F4->info.damage = 0;
                }

                obj2F4->info.unk_10 = D_800D003C[obj2F4->unk_0B4].unk_0C;
                obj2F4->unk_178 = D_800D003C[obj2F4->unk_0B4].unk_10;

                switch (D_800D003C[obj2F4->unk_0B4].unk_16) {
                    case 1:
                        if ((gCurrentLevel != LEVEL_SOLAR) && (obj2F4->unk_0B4 != 6) &&
                            ((gCurrentLevel != LEVEL_CORNERIA) || (obj2F4->unk_0B4 != 8))) {
                            Audio_PlaySfx(0x31000011, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        }
                        break;
                    case 2:
                        Audio_PlaySfx(0x3100000C, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 3:
                        Audio_PlaySfx(0x11030010, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 4:
                        Audio_PlaySfx(0x31012039, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 5:
                        Audio_PlaySfx(0x1900302B, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 6:
                        Audio_PlaySfx(0x31000014, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 7:
                        Audio_PlaySfx(0x31000015, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                }

                if (gPlayer[0].unk_138 < obj2F4->obj.pos.z) {
                    obj2F4->info.unk_10 = 3000.0f;
                }

                if (obj2F4->info.unk_16 == 0) {
                    obj2F4->obj.rot.z = obj2F4->unk_170 = obj2F4->unk_0F4.z;
                    if (obj2F4->unk_0B4 != 31) {
                        obj2F4->unk_0F4.z = 0.0f;
                    }
                }
            }
            func_8006D36C(obj2F4);
            break;

        case 0xD200:
            obj2F4->unk_080 = temp_s1[obj2F4->unk_0E6 + 1];

            if (obj2F4->unk_080 < 4) {
                D_800CFF80[obj2F4->unk_080] = obj2F4->index;
            }

            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xE200:
            obj2F4->unk_08C = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_090 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x0600:
            D_80177E78 = obj2F4->index;
            D_80177F10.x = obj2F4->obj.pos.x;
            D_80177F10.y = obj2F4->obj.pos.y;
            D_80177F10.z = obj2F4->obj.pos.z;
            D_80177E88.x = obj2F4->obj.rot.x;
            D_80177E88.y = obj2F4->obj.rot.y;
            D_80177E88.z = obj2F4->obj.rot.z;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xE000:
            if (temp_s1[obj2F4->unk_0E6 + 1] == 0xE) {
                obj2F4->unk_0B8 = 0xA;
                obj2F4->unk_140 = 0.0f;
                obj2F4->unk_0E6 += 2;
                break;
            }

            if (temp_s1[obj2F4->unk_0E6 + 1] == 0xF) {
                obj2F4->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800CBEC4);
                obj2F4->unk_0B8 = 0xB;
                obj2F4->unk_0E6 += 2;
                break;
            }

            obj2F4->unk_048 = temp_s1[obj2F4->unk_0E6 + 1];

            if (obj2F4->unk_048 == 3) {
                obj2F4->timer_04C = 4;
            }

            if (obj2F4->unk_048 == 0xD) {
                obj2F4->timer_0BE = 0x32;
            }

            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xE800:
            obj2F4->unk_044 = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xEC00:
            func_8001D400(temp_s1[obj2F4->unk_0E6 + 1]);
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xF000:
            temp_v0_4 = Message_PtrFromId(temp_s1[obj2F4->unk_0E6 + 1]);
            if ((temp_v0_4 != NULL) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3)) {
                func_800BA808(temp_v0_4, temp_s1[obj2F4->unk_0E6] & 0x1FF);
            }
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xEE00:
            if ((D_80161A88 == 2) && (temp_s1[obj2F4->unk_0E6 + 1] != 2)) {
                func_8001A55C(&gPlayer[0].unk_460, 0x1100000B);
            }
            D_80161A88 = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            obj2F4->obj.status = 0;
            break;

        case 0x7000:
            D_800CFF90 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            D_80161690 = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x7200:
            gTeamShields[temp_s1[obj2F4->unk_0E6 + 1]] = 0xFF;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x7400:
            func_8001D2FC(&obj2F4->sfxPos, temp_s1[obj2F4->unk_0E6 + 1]);
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x7600:
            func_8001D3A0(&obj2F4->sfxPos, temp_s1[obj2F4->unk_0E6 + 1]);
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xF400:
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xF200:
            if (obj2F4->unk_080 == temp_s1[obj2F4->unk_0E6 + 1]) {
                obj2F4->unk_0D0 = 1;
                obj2F4->unk_0D6 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
                obj2F4->unk_0D4 = 100;
            } else {
                gTeamDamage[temp_s1[obj2F4->unk_0E6 + 1]] = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            }
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xF800:
            obj2F4->unk_06C = 1;
            for (i = 0; i < ARRAY_COUNT(gUnkEntities30); i++) {
                if (gUnkEntities30[i].mode == 0) {
                    gUnkEntities30[i].mode = 1;
                    gUnkEntities30[i].unk_28 = 3.0f;
                    gUnkEntities30[i].unk_04.x = obj2F4->obj.pos.x - obj2F4->vel.x;
                    gUnkEntities30[i].unk_04.y = obj2F4->obj.pos.y - obj2F4->vel.y;
                    gUnkEntities30[i].unk_04.z = obj2F4->obj.pos.z - obj2F4->vel.z;
                    gUnkEntities30[i].unk_2C = D_800D0DBC[temp_s1[obj2F4->unk_0E6 + 1]][0];
                    gUnkEntities30[i].unk_2D = D_800D0DBC[temp_s1[obj2F4->unk_0E6 + 1]][1];
                    gUnkEntities30[i].unk_2E = D_800D0DBC[temp_s1[obj2F4->unk_0E6 + 1]][2];
                    gUnkEntities30[i].unk_2F = D_800D0DBC[temp_s1[obj2F4->unk_0E6 + 1]][3];
                    obj2F4->unk_070 = i;
                    break;
                }
            }
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xFA00:
            obj2F4->unk_06C = 0;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x5000:
            obj2F4->unk_0B8 = 6;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_174 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x5200:
            obj2F4->unk_0B8 = 7;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_174 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x5400:
            obj2F4->unk_0B8 = 8;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_174 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x5600:
            obj2F4->unk_0B8 = 9;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_174 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x5A00:
            obj2F4->unk_0B8 = 1;
            obj2F4->unk_054 = D_800CFF80[temp_s1[obj2F4->unk_0E6] & 0x1FF];
            obj2F4->unk_158 = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->timer_0BC = 0;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x5800:
            obj2F4->unk_0B8 = 0xD;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_174 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x5C00:
            obj2F4->unk_0B8 = 0xE;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_174 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x5E00:
            obj2F4->unk_0B8 = 0xF;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_174 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            break;

        case 0xC000:
            obj2F4->unk_058 = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_05C = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0xFC00:
            if (temp_s1[obj2F4->unk_0E6 + 1] < obj2F4->unk_050) {
                obj2F4->unk_0E6 += 2;
                obj2F4->unk_050 = 0;
            } else if ((temp_s1[obj2F4->unk_0E6] & 0x1FF) < 200) {
                obj2F4->unk_0E6 = (temp_s1[obj2F4->unk_0E6] & 0x1FF) * 2;
                obj2F4->unk_050++;
            } else {
                obj2F4->unk_0E4 = (temp_s1[obj2F4->unk_0E6] & 0x1FF) - 200;
                obj2F4->unk_0E6 = 0;
                obj2F4->unk_050 = 0;
            }
            func_8006D36C(obj2F4);
            break;

        case 0x6000:
            obj2F4->unk_0B8 = 1;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_0E6 += 2;
            break;

        case 0x0000:
            obj2F4->unk_114 = temp_s1[obj2F4->unk_0E6] & 0x7F;
            obj2F4->unk_118 = obj2F4->unk_114;
            obj2F4->unk_064 = temp_s1[obj2F4->unk_0E6] & 0x180;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_0B8 = 1;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x0400:
            obj2F4->unk_16C = temp_s1[obj2F4->unk_0E6 + 1] & 0xFF;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x0200:
            obj2F4->unk_118 = temp_s1[obj2F4->unk_0E6] & 0x7F;
            obj2F4->unk_064 = temp_s1[obj2F4->unk_0E6] & 0x180;
            obj2F4->timer_0BC = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_0B8 = 1;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x0800:
            obj2F4->timer_0C0 = temp_s1[obj2F4->unk_0E6 + 1];
            obj2F4->unk_084 = 1;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x1000:
            obj2F4->unk_084 = 0;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x1200:
            obj2F4->unk_0B8 = 2;
            obj2F4->unk_11C = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_120 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x1400:
            obj2F4->unk_0B8 = 3;
            obj2F4->unk_11C = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_120 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x1600:
            obj2F4->unk_0B8 = 4;
            obj2F4->unk_11C = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_120 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x1800:
            obj2F4->unk_0B8 = 5;
            obj2F4->unk_11C = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_120 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_0E6 += 2;
            break;

        case 0x2000:
            obj2F4->unk_124.x = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_124.y = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_124.z = 1.0f;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x2200:
            obj2F4->unk_124.x = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_124.y = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_124.z = -1.0f;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x2400:
            obj2F4->unk_130 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_134 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_138 = 1.0f;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x2600:
            obj2F4->unk_130 = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_134 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_138 = -1.0f;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x2800:
            obj2F4->unk_13C = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_140 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_144 = 1.0f;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x2A00:
            obj2F4->unk_13C = temp_s1[obj2F4->unk_0E6] & 0x1FF;
            obj2F4->unk_140 = temp_s1[obj2F4->unk_0E6 + 1] * 0.1f;
            obj2F4->unk_144 = -1.0f;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x3000:
            obj2F4->unk_068 = 1;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;

        case 0x3200:
            obj2F4->unk_068 = 0;
            obj2F4->unk_0E6 += 2;
            func_8006D36C(obj2F4);
            break;
    }
}

void func_8006EA50(Object_2F4* obj2F4) {
    if ((obj2F4->unk_06C != 0) && (gUnkEntities30[obj2F4->unk_070].mode != 0)) {
        gUnkEntities30[obj2F4->unk_070].unk_10.x = obj2F4->obj.pos.x;
        gUnkEntities30[obj2F4->unk_070].unk_10.y = obj2F4->obj.pos.y;
        gUnkEntities30[obj2F4->unk_070].unk_10.z = obj2F4->obj.pos.z;
    }
}

void func_8006EAC4(Effect* effect, f32 xPos, f32 yPos, f32 zPos) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_374;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->timer_50 = 20;
    Object_SetInfo(&effect->info, effect->obj.id);
    Audio_PlaySfx(0x2900201D, &effect->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8006EB64(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 50; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_8006EAC4(&gEffects[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_8006EBC0(Object_2F4* obj2F4, f32 xPos, f32 yPos, f32 zPos) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJ_2F4_225;

    obj2F4->obj.pos.x = xPos;
    obj2F4->obj.pos.y = yPos;
    obj2F4->obj.pos.z = zPos;

    Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
    obj2F4->info.unk_16 = 2;
    Audio_PlaySfx(0x2900201D, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8006EC60(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
        if (gObjects2F4[i].obj.status == 0) {
            func_8006EBC0(&gObjects2F4[i], xPos, yPos, zPos);
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
            Audio_PlaySfx(0x2900000D, &shot->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x29002002, &shot->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    } else if ((unk0E4 < 60) && (gObjects2F4[unk0E4].obj.id == OBJ_2F4_200) && (gObjects2F4[unk0E4].unk_080 > 0)) {
        Audio_PlaySfx(0x2900000D, &shot->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else if (unk0E4 + 100 == 200) {
        shot->playerNum = 100;
        Audio_PlaySfx(0x19030037, &shot->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        Audio_PlaySfx(0x29002002, &shot->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
    effect->obj.status = 1;
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
        if (gEffects[i].obj.status == 0) {
            func_8006F044(&gEffects[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

void func_8006F140(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
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
        if (gEffects[i].obj.status == 0) {
            func_8006F140(&gEffects[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

void func_8006F254(Object_2F4* obj2F4) {
    Vec3f sp54;
    Vec3f sp48;

    Matrix_RotateY(gCalcMatrix, obj2F4->unk_2E8.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, obj2F4->unk_2E8.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, (obj2F4->unk_2E8.z + obj2F4->unk_0F4.z) * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, obj2F4->unk_0F4.y * M_DTOR, 1);
    Matrix_RotateX(gCalcMatrix, obj2F4->unk_0F4.x * M_DTOR, 1);

    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = D_80177828;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    func_8007F04C(OBJ_EFFECT_353, obj2F4->obj.pos.x + sp48.x, obj2F4->obj.pos.y + sp48.y, obj2F4->obj.pos.z + sp48.z,
                  obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z, obj2F4->unk_2E8.x, obj2F4->unk_2E8.y,
                  obj2F4->unk_2E8.z + obj2F4->unk_0F4.z, sp48.x, sp48.y, sp48.z, 1.0f);
}

void func_8006F40C(Object_2F4* obj2F4) {
    s32 var_v1;
    Vec3f sp78;
    Vec3f sp6C;
    Object_4C* obj4C;

    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (obj2F4->unk_0B4 != 0x34) && (obj2F4->unk_0B4 != 0x67) &&
        (obj2F4->unk_0B4 != 0x68) && (obj2F4->unk_0B4 != 0x30) && (obj2F4->unk_0B4 != 0x31) &&
        (obj2F4->unk_0B4 != 0x32)) {
        switch (obj2F4->unk_048) {
            case 0:
                break;

            case 1:
                func_8006F254(obj2F4);
                obj2F4->unk_048 = 0;
                break;

            case 2:
                if (obj2F4->obj.pos.z < (gPlayer[0].unk_138 - 600.0f)) {
                    func_8007F11C(OBJ_EFFECT_353, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, D_80177828);
                }
                obj2F4->unk_048 = 0;
                break;

            case 3:
                if (obj2F4->timer_0BE == 0) {
                    obj2F4->timer_0BE = 6;
                    sp78.x = 0.0f;
                    sp78.y = 0.0f;
                    sp78.z = 100.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
                    func_8006EEFC(obj2F4->index, obj2F4->obj.pos.x + (sp6C.x * 1.5), obj2F4->obj.pos.y + (sp6C.y * 1.5),
                                  obj2F4->obj.pos.z + (sp6C.z * 1.5), sp6C.x, sp6C.y, sp6C.z, obj2F4->unk_0F4.x,
                                  obj2F4->unk_0F4.y, obj2F4->unk_2E8.z + obj2F4->unk_0F4.z);
                    obj2F4->timer_0C2 = 2;
                    obj2F4->timer_04C--;
                    if (obj2F4->timer_04C <= 0) {
                        obj2F4->unk_048 = 0;
                    }
                }
                break;

            case 4:
                func_8006EB64(obj2F4->obj.pos.x, obj2F4->obj.pos.y - 20.0f, obj2F4->obj.pos.z);
                obj2F4->unk_048 = 0;
                break;

            case 5:
                Matrix_RotateY(gCalcMatrix, obj2F4->unk_2E8.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, obj2F4->unk_2E8.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, (obj2F4->unk_2E8.z + obj2F4->unk_0F4.z) * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, obj2F4->unk_0F4.y * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, obj2F4->unk_0F4.x * M_DTOR, 1);

                sp78.x = 0.0f;
                sp78.y = 0.0f;
                sp78.z = D_80177828;

                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
                func_8007F04C(OBJ_EFFECT_355, obj2F4->obj.pos.x + sp6C.x, obj2F4->obj.pos.y + sp6C.y,
                              obj2F4->obj.pos.z + sp6C.z, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z,
                              obj2F4->unk_2E8.x, obj2F4->unk_2E8.y, obj2F4->unk_2E8.z + obj2F4->unk_0F4.z, sp6C.x,
                              sp6C.y, sp6C.z, 1.0f);
                obj2F4->unk_048 = 0;
                break;

            case 6:
                if (obj2F4->obj.pos.z < (gPlayer[0].unk_138 - 600.0f)) {
                    func_8007F11C(OBJ_EFFECT_355, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, D_80177828);
                }
                obj2F4->unk_048 = 0;
                break;

            case 7:
                if (obj2F4->obj.pos.z < (gPlayer[0].unk_138 - 600.0f)) {
                    func_8007F11C(OBJ_EFFECT_356, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 60.0f);
                }
                obj2F4->unk_048 = 0;
                break;

            case 8:
                sp6C.x = gPlayer[0].pos.x;
                sp6C.y = gPlayer[0].pos.y;
                gPlayer[0].pos.x += (Rand_ZeroOne() - 0.5f) * 300.0f;
                gPlayer[0].pos.y += (Rand_ZeroOne() - 0.5f) * 300.0f;
                func_8007F11C(OBJ_EFFECT_353, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, D_80177828);
                gPlayer[0].pos.x = sp6C.x;
                gPlayer[0].pos.y = sp6C.y;
                obj2F4->unk_048 = 0;
                break;

            case 9:
                if (gCurrentLevel == LEVEL_AQUAS) {
                    func_8006F1EC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 12.0f);
                } else {
                    func_8006F0D8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 40.0f);
                }
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                break;

            case 10:
                if (gCurrentLevel == LEVEL_AQUAS) {
                    func_8006F1EC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 6.0f);
                } else {
                    func_8006F0D8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 15.0f);
                }
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                break;

            case 11:
                func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                              obj2F4->vel.z, obj2F4->scale * 3.0f, 15);
                func_80066254(obj2F4);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                func_8007A6F0(&obj2F4->obj.pos, 0x2903B009);
                break;

            case 12:
                func_80066254(obj2F4);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                break;

            case 13:
                if (obj2F4->timer_0BE > 25) {
                    Math_SmoothStepToF(&obj2F4->unk_150, 90.0f, 0.2f, 8.0f, 0.01f);
                }
                if (obj2F4->timer_0BE < 25) {
                    Math_SmoothStepToF(&obj2F4->unk_150, 0.0f, 0.2f, 8.0f, 0.01f);
                }
                if (obj2F4->timer_0BE == 30) {
                    func_8006EC60(obj2F4->obj.pos.x, obj2F4->obj.pos.y - 50.0f, obj2F4->obj.pos.z);
                }
                if (obj2F4->timer_0BE == 0) {
                    obj2F4->unk_048 = 0;
                }
                break;

            case 16:
                func_8007F11C(OBJ_EFFECT_353, obj2F4->obj.pos.x + 190.0f, obj2F4->obj.pos.y + 90.0f,
                              obj2F4->obj.pos.z + 220.0f, D_80177828);
                func_8007F11C(OBJ_EFFECT_353, obj2F4->obj.pos.x - 190.0f, obj2F4->obj.pos.y + 90.0f,
                              obj2F4->obj.pos.z + 220.0f, D_80177828);
                obj2F4->unk_048 = 0;
                break;

            case 17:
                if (obj2F4->obj.pos.z < (gPlayer[0].camEye.z - 600.0f)) {
                    func_8007F20C(OBJ_EFFECT_353, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, D_80177828);
                }
                obj2F4->unk_048 = 0;
                break;

            case 18:
                for (var_v1 = 0, obj4C = gObjects4C; var_v1 < 40; var_v1++, obj4C++) {

                    if ((obj4C->obj.status == 2) && (obj4C->obj.id == OBJ_4C_175)) {
                        f32 sp64;
                        f32 sp60;
                        f32 sp5C;
                        f32 sp58;
                        f32 sp54;

                        obj4C->obj.status = 0;
                        sp64 = obj4C->obj.pos.x - obj2F4->obj.pos.x;
                        sp60 = obj4C->obj.pos.y - obj2F4->obj.pos.y;
                        sp5C = obj4C->obj.pos.z - obj2F4->obj.pos.z;
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
                        func_8006EFA0(100, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, sp78.x, sp78.y,
                                      sp78.z, sp58, sp54, 0.0f);
                        break;
                    }
                }

                obj2F4->unk_048 = 0;
                break;

            case 19:
                func_80083D2C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 40.0f);
                obj2F4->unk_048 = 0;
                break;
        }
    }
}

void func_8006FE28(Object_2F4* obj2F4) {
    if ((fabsf(obj2F4->obj.pos.x - gPlayer[0].pos.x) < 100.0f) &&
        (fabsf(obj2F4->obj.pos.y - gPlayer[0].pos.y) < 100.0f) &&
        (fabsf(obj2F4->obj.pos.z - gPlayer[0].unk_138) < 50.0f)) {
        func_80067A40();
        func_8001A55C(&obj2F4->sfxPos, 0x1900302B);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
    }
}

void func_8006FEEC(Object_2F4* obj2F4) {
    s32 i;

    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        obj2F4->timer_0C6 = 0xF;
        obj2F4->unk_0CE = obj2F4->unk_0CE - obj2F4->unk_0D6;

        if (obj2F4->unk_0CE <= 0) {
            for (i = 3; i < 11; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[i + 11], (Rand_ZeroOne() - 0.5f) * 20.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 10.0f, 41, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 0;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x29018036);
            func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 4.0f);
        } else {
            Audio_PlaySfx(0x29033037, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

bool func_800700A4(Object_2F4* obj2F4) {
    if ((obj2F4->unk_0B8 != 12) && (obj2F4->unk_080 > 0) && (obj2F4->unk_080 < 4) &&
        (gTeamShields[obj2F4->unk_080] <= 0)) {
        obj2F4->unk_0B8 = 12;
        obj2F4->unk_058 = 0;
        obj2F4->unk_13C = 360.0f;
        obj2F4->unk_140 = 20.0f;
        gTeamShields[obj2F4->unk_080] = 1;

        switch (obj2F4->unk_080) {
            case 1:
                func_800BA808(gMsg_ID_20220, RCID_FALCO);
                break;
            case 2:
                func_800BA808(gMsg_ID_20222, RCID_SLIPPY);
                break;
            case 3:
                func_800BA808(gMsg_ID_20221, RCID_PEPPY);
                break;
        }
        gTeamShields[obj2F4->unk_080] = -1;
        gTeamDamage[obj2F4->unk_080] = 0;
        obj2F4->timer_0C2 = 5000;
        obj2F4->unk_0D0 = 0;
        return true;
    }
    return false;
}

void func_800701E0(Object_2F4* obj2F4) {
    Vec3f sp3C;
    f32 var_fv1;
    f32 temp_fv1;

    if (!func_800700A4(obj2F4)) {
        if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0B4 == 0x43) && (obj2F4->unk_0D2 == 0)) {
            obj2F4->unk_0D0 = 0;
        }

        if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0B4 == 0x53) && (obj2F4->timer_0C2 >= 2)) {
            obj2F4->unk_0D0 = 0;
        }

        if ((obj2F4->unk_0D0 != 0) &&
            (((obj2F4->unk_0B4 == 0x40) && (obj2F4->unk_0D2 == 2)) || (obj2F4->unk_0B4 != 0x40))) {
            if (obj2F4->unk_080 >= 4) {
                obj2F4->unk_0D6 = 0;
            }

            if ((obj2F4->unk_080 > 0) && (obj2F4->unk_080 < 4)) {
                gTeamShields[obj2F4->unk_080] -= obj2F4->unk_0D6;
            } else if ((obj2F4->unk_0B4 == 0x53) && ((obj2F4->unk_0D6 == 0x1E) || (obj2F4->unk_0D6 == 0x1F))) {
                obj2F4->unk_0CE = 0;
            } else {
                obj2F4->unk_0CE -= obj2F4->unk_0D6;
            }

            if (obj2F4->unk_0CE <= 0) {
                if (obj2F4->unk_0B4 == 0x6A) {
                    func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 3);
                    gHitCount += 4;
                    D_80177850 = 15;
                }

                if (obj2F4->unk_0B4 != 0x53) {
                    if ((obj2F4->unk_0B4 == 6) && (gCurrentLevel == LEVEL_SOLAR)) {
                        Audio_PlaySfx(0x29018036, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x2903700B, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }

                    obj2F4->obj.status = 3;
                    var_fv1 = 0.7f;

                    if (gLevelType == LEVELTYPE_SPACE) {
                        var_fv1 = 0.3f;
                    }

                    if (((Rand_ZeroOne() < var_fv1) || (obj2F4->unk_080 != 0)) && (obj2F4->info.unk_14 == 0) &&
                        (obj2F4->unk_0B4 != 0xD) && (obj2F4->unk_0B4 != 0xE) && (obj2F4->unk_0B4 != 0x3D) &&
                        ((s32) obj2F4->unk_0D6 < 0x1F) && (obj2F4->unk_0B4 != 0x3E) && (obj2F4->unk_0B4 != 0x40) &&
                        (obj2F4->unk_0B4 != 0x48) && (obj2F4->unk_0B4 != 0x44)) {
                        func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->scale * 4.0f);
                        obj2F4->unk_0D0 = 0;
                    }

                    obj2F4->timer_0C2 = 10;
                    obj2F4->timer_0BE = 0;
                    obj2F4->unk_046 = 0xFF;
                    obj2F4->unk_048 = 900;
                    obj2F4->unk_0C9 = 1;

                    if (gLevelType == LEVELTYPE_PLANET) {
                        obj2F4->timer_04C = (s16) (s32) (Rand_ZeroOne() * 2.9f);
                        if (obj2F4->unk_0B4 == 2) {
                            obj2F4->timer_04C = 1;
                            if (obj2F4->obj.pos.x < obj2F4->unk_0D8.x) {
                                func_800A69F8(1, obj2F4->obj.pos.x + 20.0f, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                                obj2F4->unk_158 = 777.0f;
                            } else {
                                func_800A69F8(0, obj2F4->obj.pos.x - 20.0f, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                                obj2F4->unk_15C = 777.0f;
                            }
                        }
                        obj2F4->timer_0BC = 300;

                        if (gLevelMode != LEVELMODE_ALL_RANGE) {
                            obj2F4->vel.x *= 0.5f;
                            obj2F4->vel.y = Rand_ZeroOne() * 5.0f;
                            if (obj2F4->vel.z < 0.0f) {
                                obj2F4->vel.z = obj2F4->vel.z;
                            } else {
                                obj2F4->vel.z = obj2F4->vel.z * 0.3f;
                            }
                            if (((obj2F4->obj.pos.z + D_80177D20) > -3000.0f) && (obj2F4->vel.z > 0.0f)) {
                                obj2F4->vel.z = Rand_ZeroOne() * -10.0f;
                            }
                        }

                        if (obj2F4->unk_0B4 == 90) {
                            obj2F4->timer_04C = 999;
                        }
                    } else {
                        switch (obj2F4->unk_0B4) {
                            case 13:
                                func_800654E4(&obj2F4->obj);
                                break;

                            case 61:
                                func_E08400_8018CCF8(obj2F4);
                                break;

                            case 27:
                                obj2F4->obj.pos.y -= obj2F4->vel.y;
                                obj2F4->obj.status = 2;
                                func_8007D0E0(obj2F4->obj.pos.x - obj2F4->vel.x, obj2F4->obj.pos.y + 30.0f,
                                              obj2F4->obj.pos.z - obj2F4->vel.z, obj2F4->scale * 5.0f);
                                obj2F4->unk_0D0 = 0;
                                obj2F4->timer_0C2 = 10000;
                                obj2F4->info.unk_1C = 0.0f;
                                gHitCount += obj2F4->info.bonus;
                                D_80177850 = 0xF;
                                break;

                            default:
                                obj2F4->timer_0BC = 35;
                                obj2F4->timer_04C = 2;
                                obj2F4->vel.y = (Rand_ZeroOne() - 0.5f) * 20.0f;
                                obj2F4->vel.x = (Rand_ZeroOne() - 0.5f) * 20.0f;
                                obj2F4->vel.z = 0.0f;
                                break;
                        }
                    }
                }

                if (obj2F4->unk_0B4 == 0x52) {
                    Audio_PlaySfx(0x11000055, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    obj2F4->unk_0D0 = 1;
                    func_8007C688(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 3.0f, 0x3C);
                }
            } else {
                obj2F4->timer_0C6 = 20;
                if ((obj2F4->unk_0B4 == 6) && (gCurrentLevel == LEVEL_SOLAR)) {
                    Audio_PlaySfx(0x29033037, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else if (obj2F4->unk_0CE < 20) {
                    Audio_PlaySfx(0x2943500F, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x2903300E, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }

                if ((obj2F4->unk_0B4 != 0xD) && (obj2F4->unk_0B4 != 0x3D) && (obj2F4->unk_0B4 != 0x53)) {
                    func_8007D10C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->scale * 1.5f);
                }

                if (((gLevelMode == LEVELMODE_ALL_RANGE) || (gLevelMode == LEVELMODE_UNK_2)) &&
                    (obj2F4->unk_0B4 != 0x15) && (obj2F4->unk_0B4 != 0x17)) {
                    obj2F4->unk_148 = 20.0f;
                    if (obj2F4->obj.pos.x < obj2F4->unk_0D8.x) {
                        obj2F4->unk_148 *= -1.0f;
                    }
                }

                if (obj2F4->unk_0D4 == 1) {
                    switch (obj2F4->unk_080) {
                        case 1:
                            if (obj2F4->unk_0D0 == 3) {
                                func_8006A7B0(gMsg_ID_20210, RCID_FALCO);
                            } else {
                                func_8006A7B0(gMsg_ID_20060, RCID_FALCO);
                            }
                            break;

                        case 3:
                            if (obj2F4->unk_0D0 == 3) {
                                func_8006A7B0(gMsg_ID_20200, RCID_PEPPY);
                            } else {
                                func_8006A7B0(gMsg_ID_20070, RCID_PEPPY);
                            }
                            break;

                        case 2:
                            if (obj2F4->unk_0D0 == 3) {
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
                obj2F4->unk_0D0 = 0;
            }
        }
        if ((obj2F4->unk_080 == 0) && (obj2F4->unk_084 == 0) && (obj2F4->info.unk_16 != 2) &&
            (gLevelType == LEVELTYPE_SPACE)) {
            sp3C.x = obj2F4->vel.x;
            sp3C.y = obj2F4->vel.y;
            sp3C.z = obj2F4->vel.z;

            if ((func_8006351C(obj2F4->index, &obj2F4->obj.pos, &sp3C, 0) != 0) ||
                (obj2F4->obj.pos.y < (D_80177940 + 20.0f))) {
                obj2F4->obj.status = 3;
                obj2F4->obj.pos.z -= obj2F4->vel.z;
                obj2F4->unk_0D0 = 1;
                if (obj2F4->unk_0B4 == 13) {
                    obj2F4->obj.id = OBJ_2F4_182;
                    func_800654E4(&obj2F4->obj);
                }

                if (obj2F4->unk_0B4 == 61) {
                    func_E08400_8018CCF8(obj2F4);
                }
            }
        }
    }
}

void func_80070BA8(Object_2F4* obj2F4) {
    if (obj2F4->unk_0D0 != 0) {
        obj2F4->unk_0D0 = 0;
        if ((obj2F4->unk_0B4 != 0x11) || ((obj2F4->unk_0B4 == 0x11) && (obj2F4->unk_0D2 == 0))) {
            obj2F4->timer_0C6 = 10;
            func_8007C120(obj2F4->unk_0D8.x, obj2F4->unk_0D8.y, obj2F4->unk_0D8.z, obj2F4->vel.x, obj2F4->vel.y,
                          obj2F4->vel.z, 0.2f, 10);
            obj2F4->unk_0CE -= obj2F4->unk_0D6;
            Audio_PlaySfx(0x29033064, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (obj2F4->unk_0CE <= 0) {
                func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->info.bonus);
                gHitCount += obj2F4->info.bonus + 1;
                D_80177850 = 15;
            }
        } else {
            Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_80070CEC(Object_2F4* obj2F4) {
    if (obj2F4->unk_05C < 200) {
        obj2F4->unk_0E6 = obj2F4->unk_05C * 2;
        obj2F4->unk_050 = 0;
        obj2F4->unk_058 = 0;
        func_8006D36C(obj2F4);
    } else {
        obj2F4->unk_0E4 = obj2F4->unk_05C - 200;
        obj2F4->unk_0E6 = 0;
        obj2F4->unk_050 = 0;
        obj2F4->unk_058 = 0;
        func_8006D36C(obj2F4);
    }
}

void func_80070D44(Object_2F4* obj2F4) {
    s32 i;
    s32 var_v1 = 0;
    s32 var_v1_4;
    Object_2F4* other2F4;

    for (i = 1; i < 4; i++) {
        if (gTeamShields[i] > 0) {
            var_v1++;
        }
    }

    if (obj2F4->unk_058 >= 100) {
        if (fabsf(obj2F4->obj.pos.z - gPlayer[0].unk_138) <= ((obj2F4->unk_058 - 100) * 100.0f)) {
            func_80070CEC(obj2F4);
        }
        return;
    }

    switch (obj2F4->unk_058) {
        case 0:
            break;

        case 1:
            if ((gObjects2F4[obj2F4->unk_054].obj.status != 2) || (gObjects2F4[obj2F4->unk_054].unk_0CE <= 0) ||
                (obj2F4->unk_078 != gObjects2F4[obj2F4->unk_054].unk_0E4)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 2:
            if (var_v1 == 3) {
                func_80070CEC(obj2F4);
            }
            break;

        case 3:
            if (var_v1 == 2) {
                func_80070CEC(obj2F4);
            }
            break;

        case 4:
            if (var_v1 == 1) {
                func_80070CEC(obj2F4);
            }
            break;

        case 5:
            if (var_v1 == 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 6:
            if (gTeamShields[1] > 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 7:
            if (gTeamShields[3] > 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 8:
            if (gTeamShields[2] > 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 9:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 100.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 10:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 400.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 11:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 700.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 12:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 200.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 13:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= -100.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 14:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= -400.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 15:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= -700.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 16:
            if (((obj2F4->obj.pos.x - gPlayer[0].pos.x) >= -200.0f) &&
                ((obj2F4->obj.pos.x - gPlayer[0].pos.x) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 17:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 100.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 18:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 400.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 19:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 700.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 20:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 200.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 21:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= -100.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 22:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= -400.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 23:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= -700.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 24:
            if (((obj2F4->obj.pos.y - gPlayer[0].pos.y) >= -200.0f) &&
                ((obj2F4->obj.pos.y - gPlayer[0].pos.y) <= 0.0f)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 25:
            if (gPlayer[0].shields >= Play_GetMaxShields()) {
                func_80070CEC(obj2F4);
            }
            break;

        case 26:
            if (gPlayer[0].shields >= (Play_GetMaxShields() * 3 / 4)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 27:
            if (gPlayer[0].shields >= (Play_GetMaxShields() / 2)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 28:
            if (gPlayer[0].shields >= (Play_GetMaxShields() / 4)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 29:
            if (gPlayer[0].shields == 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 30:
            if (gPlayer[0].unk_270 >= 5) {
                func_80070CEC(obj2F4);
            }
            break;

        case 31:
            if (gPlayer[0].unk_270 != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 32:
            if (gPlayer[0].unk_270 == 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 33:
            if (gPlayer[0].unk_250 >= 16.8f) {
                func_80070CEC(obj2F4);
            }
            break;

        case 34:
            if (gPlayer[0].unk_250 <= 8.4f) {
                func_80070CEC(obj2F4);
            }
            break;

        case 35:
            if (gPlayer[0].wings.unk_14 > -8.0f) {
                func_80070CEC(obj2F4);
            }
            break;

        case 36:
            if ((gPlayer[0].wings.unk_14 < -8.0f) && (gLaserStrength[0] == LASERS_TWIN)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 37:
            if ((gPlayer[0].wings.unk_14 < -8.0f) && (gLaserStrength[0] == LASERS_HYPER)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 38:
            if ((gPlayer[0].wings.unk_14 < -8.0f) && (gLaserStrength[0] == LASERS_UNK_3)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 39:
            for (i = 0; i < ARRAY_COUNT(gPlayerShots); i++) {
                if ((gPlayerShots[i].obj.status == 1) &&
                    (fabsf(obj2F4->obj.pos.x - gPlayerShots[i].obj.pos.x) < 150.0f) &&
                    (fabsf(obj2F4->obj.pos.y - gPlayerShots[i].obj.pos.y) < 150.0f) &&
                    (fabsf(obj2F4->obj.pos.z - gPlayerShots[i].obj.pos.z) < 150.0f)) {
                    func_80070CEC(obj2F4);
                    break;
                }
            }
            break;

        case 40:
            for (i = 0; i < ARRAY_COUNT(gPlayerShots); i++) {
                if ((gPlayerShots[i].obj.status == 1) &&
                    (fabsf(obj2F4->obj.pos.x - gPlayerShots[i].obj.pos.x) < 300.0f) &&
                    (fabsf(obj2F4->obj.pos.y - gPlayerShots[i].obj.pos.y) < 300.0f) &&
                    (fabsf(obj2F4->obj.pos.z - gPlayerShots[i].obj.pos.z) < 300.0f)) {
                    func_80070CEC(obj2F4);
                    break;
                }
            }
            break;

        case 41:
            if ((gObjects2F4[obj2F4->unk_074].obj.status != 2) ||
                ((gObjects2F4[obj2F4->unk_074].scale < 0.0f) && (obj2F4->unk_0CE <= 0))) {
                func_80070CEC(obj2F4);
            }
            break;

        case 42:
            for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
                if ((gObjects2F4[i].obj.status == 2) && (gObjects2F4[i].obj.id == OBJ_2F4_200) &&
                    (gObjects2F4[i].unk_084 != 0) && (i != obj2F4->index) &&
                    (obj2F4->index == gObjects2F4[i].unk_074)) {
                    return;
                }
            }
            func_80070CEC(obj2F4);
            break;

        case 43:
            for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
                if ((gObjects2F4[i].obj.status == 2) && (gObjects2F4[i].obj.id == OBJ_2F4_200) &&
                    (gObjects2F4[i].unk_084 != 0) && (i != obj2F4->index) &&
                    (obj2F4->index == gObjects2F4[i].unk_074)) {
                    func_80070CEC(obj2F4);
                    break;
                }
            }
            break;

        case 44:
            if (obj2F4->unk_0D0 != 0) {
                func_80070CEC(obj2F4);
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
                func_80070CEC(obj2F4);
            }
            break;

        case 46:
            for (i = 0, other2F4 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, other2F4++) {
                if (((other2F4->obj.status == 3) || (other2F4->obj.status == 0)) &&
                    (obj2F4->unk_08C == other2F4->unk_08C) && (other2F4->unk_090 != 0)) {
                    func_80070CEC(obj2F4);
                }
            }
            break;

        case 47:
            if (gControllerPress[gMainController].button & R_CBUTTONS) {
                func_8001AF40(0);
                D_800CFF90 = 0;
                D_80161690 = 0;
                func_80070CEC(obj2F4);
            }
            break;

        case 48:
            if ((gPlayer[0].wings.rightState <= WINGSTATE_BROKEN) || (gPlayer[0].wings.leftState <= WINGSTATE_BROKEN)) {
                func_80070CEC(obj2F4);
            }
            break;

        case 49:
            if (D_800D3180[1] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 50:
            if (D_800D3180[0xE] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 51:
            if (D_800D3180[2] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 52:
            if (D_800D3180[0xC] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 53:
            if (D_800D3180[0x11] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 54:
            if (D_800D3180[5] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 55:
            if (D_800D3180[0x10] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 56:
            if (D_800D3180[7] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 57:
            if (D_800D3180[0xB] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 58:
            if (D_800D3180[0xD] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 59:
            if (D_800D3180[8] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 60:
            if (D_800D3180[0x12] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 61:
            if (D_800D3180[3] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 62:
            if (D_Timer_80161670[obj2F4->unk_080] == 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 63:
            if (D_Timer_80161670[obj2F4->unk_080] != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 64:
            if (D_80161684 != 0) {
                func_80070CEC(obj2F4);
            }
            break;

        case 65:
            if (gHitCount >= 30) {
                func_80070CEC(obj2F4);
            }
            break;

        case 66:
            if (gHitCount >= 80) {
                func_80070CEC(obj2F4);
            }
            break;

        case 67:
            if (gExpertMode) {
                func_80070CEC(obj2F4);
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

void func_80071DC0(Object_2F4* obj2F4) {
    s32 rInd;
    Vec3f sp38;

    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, obj2F4->obj.rot.z * M_DTOR, 1);

    if (obj2F4->unk_0B4 == 30) {
        rInd = Rand_ZeroOne() * (ARRAY_COUNT(D_800D1074) - 1.1f); // off by 1 error?
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1074[rInd], &sp38);
    }

    if (obj2F4->unk_0B4 == 17) {
        rInd = Rand_ZeroOne() * (ARRAY_COUNT(D_800D0DD4) - 0.1f);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D0DD4[rInd], &sp38);
    }

    if (obj2F4->unk_0B4 == 31) {
        rInd = Rand_ZeroOne() * (ARRAY_COUNT(D_800D1194) - 0.1f);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1194[rInd], &sp38);
    }

    if (!(gFrameCount & 1)) {
        func_8007C120(obj2F4->obj.pos.x + sp38.x, obj2F4->obj.pos.y + sp38.y, obj2F4->obj.pos.z + sp38.z, obj2F4->vel.x,
                      obj2F4->vel.y, obj2F4->vel.z, 0.3f, 0x14);
    }

    if (!(gFrameCount & 7)) {
        func_8007BFFC(obj2F4->obj.pos.x + sp38.x, obj2F4->obj.pos.y + sp38.y, obj2F4->obj.pos.z + sp38.z, obj2F4->vel.x,
                      obj2F4->vel.y, obj2F4->vel.z, 10.0f, 9);
    }

    if (!(gFrameCount & 0xF)) {
        Audio_PlaySfx(0x2903B009, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    obj2F4->vel.y -= 0.1f;
    obj2F4->vel.z = 0.0f;
    obj2F4->obj.rot.x += 0.2f;
    obj2F4->obj.rot.z += 0.3f;

    if (!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
        obj2F4->timer_0C6 = 4;
    }
}

void func_800720E8(Object_2F4* obj2F4) {
    switch (obj2F4->unk_046) {
        case 0:
            if (obj2F4->unk_0D0 != 0) {
                if (obj2F4->unk_0D0 == 2) {
                    obj2F4->unk_0D6 = 3;
                }

                if ((obj2F4->unk_0D4 > 100) && (gObjects2F4[obj2F4->unk_0D4 - 101].unk_0B4 == 85)) {
                    obj2F4->unk_0D6 = 20;
                }

                obj2F4->unk_0CE -= obj2F4->unk_0D6;
                obj2F4->unk_154 += 0.2f;
                obj2F4->timer_0BC = 5;

                if (obj2F4->timer_0BE < 20) {
                    obj2F4->timer_0BE += 5;
                }

                if (obj2F4->unk_0CE <= 0) {
                    obj2F4->unk_046 = 1;
                    obj2F4->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6032408);
                    Audio_PlaySfx(0x1900000D, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x2903300E, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                obj2F4->unk_0D0 = 0;
            }
            break;

        case 1:
        case 2:
            Math_SmoothStepToF(&obj2F4->unk_154, 130.0f, 0.2f, 8.0f, 0.001f);
            if (obj2F4->unk_154 > 45.0f) {
                Math_SmoothStepToF(&obj2F4->unk_150, 90.0f, 0.2f, 10.0f, 0.001f);
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
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_365;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->unk_44 = 250;
    effect->scale2 = 2.0f;
    effect->scale1 = (Rand_ZeroOne() - 0.5f) * 200.0f;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    effect->unk_4C = effect->unk_4E = 1;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_8007240C(f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_800722EC(&gEffects[i], xPos, yPos, zPos, yRot);
            break;
        }
    }
}

void func_80072474(Object_2F4* obj2F4) {
    f32 var_fv1;
    if (obj2F4->unk_048 != 0) {
        switch (obj2F4->unk_048) {
            case 1:
                obj2F4->unk_154 = 45.0f;
                break;
            case 2:
                obj2F4->unk_154 = 0.0f;
                break;
            case 3:
                obj2F4->unk_08C = 1;
                break;
            case 4:
                obj2F4->unk_08C = 0;
                break;
        }
        obj2F4->unk_048 = 0;
    }

    if (obj2F4->unk_08C != 0) {
        var_fv1 =
            Math_RadToDeg(Math_Atan2F(gPlayer[0].pos.x - obj2F4->obj.pos.x, gPlayer[0].unk_138 - obj2F4->obj.pos.z));
    } else if (obj2F4->unk_068 != 0) {
        var_fv1 = obj2F4->unk_0F4.y;
    } else {
        var_fv1 = 0.0f;
    }
    Math_SmoothStepToAngle(&obj2F4->obj.rot.y, var_fv1, 0.2f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&obj2F4->unk_150, obj2F4->unk_154, 0.5f, 8.0f, 0.0f);
}

Vec3f D_800D1290 = { 0.0f, 837.00006f, 0.0f }; // could be in-function
void func_80072594(Object_2F4* obj2F4) {
    s32 spFC;
    f32 var_fv0;
    s32 var_s0;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    s32 pad;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Vec3f spB8;
    Vec3f spAC;
    Vec3f spA0;

    spDC = 0.0f;
    spD8 = 0.0f;
    spD4 = 0.0f;

    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) || (D_8017828C != 0)) {
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        return;
    }

    if (obj2F4->unk_0B8 == 0x3E8) {
        obj2F4->obj.rot.y += obj2F4->unk_150;
        obj2F4->obj.rot.x += obj2F4->unk_154;
        if (!(gFrameCount & 0xF)) {
            func_8007C120(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                          obj2F4->vel.z, 0.3f, 0xA);
        }
    } else {
        if (((obj2F4->unk_0B4 == 0x11) || (obj2F4->unk_0B4 == 0x1E) || (obj2F4->unk_0B4 == 0x1F)) &&
            (obj2F4->unk_0CE <= 0)) {
            func_80071DC0(obj2F4);
            return;
        }
        if (obj2F4->unk_0B4 == 300) {
            gPlayer[0].unk_1A4 = obj2F4->index;
            obj2F4->timer_0C2 = 100;
        } else if (obj2F4->unk_0B4 >= 200) {
            obj2F4->unk_04E++;

            if (obj2F4->unk_04E >= 100) {
                obj2F4->unk_04E = 0;
            }

            D_80176558[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.pos.x;
            D_80176878[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.pos.y;
            D_80176B98[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.pos.z;
            D_80176EB8[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.rot.x;
            D_801771D8[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.rot.y;
            D_80177500[obj2F4->unk_046][obj2F4->unk_04E] = obj2F4->obj.rot.z;

            if (obj2F4->unk_0D0 != 0) {
                obj2F4->unk_0D0 = 0;
                obj2F4->timer_0C6 = 20;
                obj2F4->unk_0CE -= obj2F4->unk_0D6;

                Audio_PlaySfx(0x29034041, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

                if (obj2F4->unk_0CE <= 0) {
                    obj2F4->timer_0C6 = 200;
                    obj2F4->obj.status = 3;
                    func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 8.0f);
                    obj2F4->obj.status = 3;
                    obj2F4->timer_0BC = 20;
                    obj2F4->obj.id = OBJ_2F4_194;
                }
            }
        }

        if ((obj2F4->unk_0B4 == 27) && (obj2F4->timer_0C2 != 0)) {
            obj2F4->unk_0B8 = 0;
        }

        switch (obj2F4->unk_0B8) {
            case 0:
                func_8006D36C(obj2F4);
                break;

            case 1:
                if (obj2F4->timer_0BC == 0) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 6:
            case 7:
            case 14:
            case 15:
                spF0 = obj2F4->obj.pos.x;
                spEC = obj2F4->obj.pos.y;
                spE8 = obj2F4->obj.pos.z;

                if ((obj2F4->unk_0B4 == 0x21) || (obj2F4->unk_0B4 == 0x44)) {
                    Matrix_RotateZ(gCalcMatrix, -(obj2F4->unk_2E8.z + obj2F4->unk_0F4.z) * M_DTOR, 0);
                    Matrix_RotateX(gCalcMatrix, -obj2F4->unk_2E8.x * M_DTOR, 1);
                    Matrix_RotateY(gCalcMatrix, -obj2F4->unk_2E8.y * M_DTOR, 1);

                    if ((obj2F4->unk_0B8 == 0xE) || (obj2F4->unk_0B8 == 0xF)) {
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

                    obj2F4->obj.rot.x = 0.0f;

                    Math_SmoothStepToAngle(&obj2F4->obj.rot.y, spE0, 0.2f, obj2F4->unk_174, 0.001f);
                    Math_SmoothStepToAngle(&obj2F4->unk_150, spE4, 0.2f, obj2F4->unk_174, 0.001f);

                    if (!(obj2F4->timer_0BC & 0x1F) && (spFC == 0)) {
                        Matrix_RotateY(gCalcMatrix, obj2F4->unk_2E8.y * M_DTOR, 0);
                        Matrix_RotateX(gCalcMatrix, obj2F4->unk_2E8.x * M_DTOR, 1);
                        Matrix_RotateZ(gCalcMatrix, (obj2F4->unk_2E8.z + obj2F4->unk_0F4.z) * M_DTOR, 1);

                        spB8.x = 0.0f;
                        spB8.y = 25.0f;
                        spB8.z = 0.0f;

                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spB8, &spA0);
                        Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 1);
                        Matrix_RotateX(gCalcMatrix, obj2F4->unk_150 * M_DTOR, 1);

                        spB8.x = 0.0f;
                        spB8.y = 0.0f;
                        spB8.z = D_80177828;

                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spB8, &spAC);

                        if (obj2F4->unk_0B4 == 0x44) {
                            var_fv0 = 80.0f;
                        } else {
                            var_fv0 = 0.0f;
                        }

                        func_8007F04C(OBJ_EFFECT_353, obj2F4->obj.pos.x + spAC.x + spA0.x,
                                      obj2F4->obj.pos.y + spAC.y + spA0.y + var_fv0,
                                      obj2F4->obj.pos.z + spAC.z + spA0.z, obj2F4->unk_150, obj2F4->obj.rot.y,
                                      obj2F4->obj.rot.z, obj2F4->unk_2E8.x, obj2F4->unk_2E8.y,
                                      obj2F4->unk_2E8.z + obj2F4->unk_0F4.z, spAC.x, spAC.y, spAC.z, 1.0f);
                        obj2F4->unk_154 = -15.0f;
                    }
                } else {
                    if ((obj2F4->unk_0B8 == 0xE) || (obj2F4->unk_0B8 == 0xF)) {
                        spCC = gPlayer[0].camEye.x;
                        spC8 = gPlayer[0].camEye.y;
                        spC4 = gPlayer[0].camEye.z;
                    } else {
                        spCC = gPlayer[0].pos.x;
                        spC8 = gPlayer[0].pos.y;
                        spC4 = gPlayer[0].pos.z;
                    }

                    Math_SmoothStepToAngle(&obj2F4->unk_2E8.z, 0.0f, 0.1f, 5.0f, 0.0001f);
                    Math_SmoothStepToAngle(&obj2F4->unk_0F4.z, 0.0f, 0.1f, 5.0f, 0.0001f);

                    spE0 = Math_RadToDeg(Math_Atan2F(spCC - spF0, spC4 - spE8));

                    if ((obj2F4->unk_0B8 == 7) || (obj2F4->unk_0B8 == 0xF)) {
                        spE0 += 180.0f;
                        if (spE0 > 360.0f) {
                            spE0 -= 360.0f;
                        }
                    }

                    spE4 = Math_RadToDeg(-Math_Atan2F(spC8 - spEC, sqrtf(SQ(spCC - spF0) + SQ(spC4 - spE8))));
                    spEC = Math_SmoothStepToAngle(&obj2F4->unk_0F4.y, spE0, 0.2f, obj2F4->unk_174, 0.0001f);

                    Math_SmoothStepToAngle(&obj2F4->unk_0F4.x, spE4, 0.2f, obj2F4->unk_174, 0.0001f);

                    if (obj2F4->unk_068 != 0) {
                        var_fv0 = 330.0f;
                        if (spEC < 0.0f) {
                            var_fv0 = 30.0f;
                        }
                        Math_SmoothStepToAngle(&obj2F4->unk_170, var_fv0, 0.1f, 5.0f, 0.01f);
                    }
                }

                if (obj2F4->timer_0BC == 0) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 13:
                spDC = __sinf(((obj2F4->index * 45) + gFrameCount) * M_DTOR) * (*obj2F4).unk_158;
                spD8 = __cosf(((obj2F4->index * 45) + (gFrameCount * 2)) * M_DTOR) * (*obj2F4).unk_158;
                pad = obj2F4->unk_054;
                pad = gObjects2F4[pad].unk_080;
                D_Timer_80161670[pad] = 5;

            case 8:
            case 9:
                spF0 = obj2F4->obj.pos.x;
                spEC = obj2F4->obj.pos.y;
                spE8 = obj2F4->obj.pos.z;

                spE0 = Math_RadToDeg(Math_Atan2F(gObjects2F4[obj2F4->unk_054].obj.pos.x + spDC - spF0,
                                                 gObjects2F4[obj2F4->unk_054].obj.pos.z + spD4 - spE8));
                if (obj2F4->unk_0B8 == 7) {
                    spE0 += 180.0f;
                    if (spE0 > 360.0f) {
                        spE0 -= 360.0f;
                    }
                }

                spE4 = Math_RadToDeg(-Math_Atan2F(gObjects2F4[obj2F4->unk_054].obj.pos.y + spD8 - spEC,
                                                  sqrtf(SQ(gObjects2F4[obj2F4->unk_054].obj.pos.x + spDC - spF0) +
                                                        SQ(gObjects2F4[obj2F4->unk_054].obj.pos.z + spD4 - spE8))));
                spEC = Math_SmoothStepToAngle(&obj2F4->unk_0F4.y, spE0, 0.2f, obj2F4->unk_174, 0.0001f);

                Math_SmoothStepToAngle(&obj2F4->unk_0F4.x, spE4, 0.2f, obj2F4->unk_174, 0.0001f);

                if (obj2F4->unk_068 != 0) {
                    var_fv0 = 310.0f;
                    if (spEC < 0.0f) {
                        var_fv0 = 50.0f;
                    }

                    Math_SmoothStepToAngle(&obj2F4->unk_170, var_fv0, 0.1f, 5.0f, 0.01f);
                }

                if (obj2F4->timer_0BC == 0) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 2:
                obj2F4->unk_0F4.x += obj2F4->unk_120;
                obj2F4->unk_11C -= obj2F4->unk_120;
                if (obj2F4->unk_11C <= 0.0f) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 3:
                obj2F4->unk_0F4.x -= obj2F4->unk_120;
                obj2F4->unk_11C -= obj2F4->unk_120;
                if (obj2F4->unk_11C <= 0.0f) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 4:
                obj2F4->unk_0F4.y += obj2F4->unk_120;
                obj2F4->unk_11C -= obj2F4->unk_120;
                if (obj2F4->unk_11C <= 0.0f) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 5:
                obj2F4->unk_0F4.y -= obj2F4->unk_120;
                obj2F4->unk_11C -= obj2F4->unk_120;
                if (obj2F4->unk_11C <= 0.0f) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 10:
                var_s0 = 0;
                if (Math_SmoothStepToAngle(&obj2F4->obj.rot.x, 0.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    var_s0++;
                }

                if (Math_SmoothStepToAngle(&obj2F4->obj.rot.y, 0.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    var_s0++;
                }

                if (Math_SmoothStepToF(&obj2F4->unk_150, 40.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    var_s0++;
                }

                if (var_s0 == 3) {
                    obj2F4->info.hitbox = SEGMENTED_TO_VIRTUAL(D_602F638);
                    func_8006D36C(obj2F4);
                }
                break;

            case 11:
                if (Math_SmoothStepToF(&obj2F4->unk_150, 0.0f, 0.3f, 10.0f, 1.0f) == 0.0f) {
                    func_8006D36C(obj2F4);
                }
                break;

            case 12:
                Math_SmoothStepToAngle(&obj2F4->unk_0F4.x, 270.0f, 0.1f, 2.0f, 0.0f);
                gTeamShields[obj2F4->unk_080] = -1;
                gTeamDamage[obj2F4->unk_080] = 0;
                break;

            case 200:
                break;
        }

        if (obj2F4->unk_084 != 0) {
            if (gObjects2F4[obj2F4->unk_074].obj.status != 2) {
                obj2F4->unk_084 = 0;
            } else {
                Matrix_RotateY(gCalcMatrix, gObjects2F4[obj2F4->unk_074].obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, gObjects2F4[obj2F4->unk_074].obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, gObjects2F4[obj2F4->unk_074].obj.rot.z * M_DTOR, 1);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &obj2F4->unk_2DC, &spAC);
                obj2F4->obj.pos.x = gObjects2F4[obj2F4->unk_074].obj.pos.x + spAC.x;
                obj2F4->obj.pos.y = gObjects2F4[obj2F4->unk_074].obj.pos.y + spAC.y;
                obj2F4->obj.pos.z = gObjects2F4[obj2F4->unk_074].obj.pos.z + spAC.z;
                obj2F4->unk_2E8.x = gObjects2F4[obj2F4->unk_074].obj.rot.x;
                obj2F4->unk_2E8.y = gObjects2F4[obj2F4->unk_074].obj.rot.y;
                obj2F4->unk_2E8.z = gObjects2F4[obj2F4->unk_074].obj.rot.z;
                if (obj2F4->timer_0C0 == 0) {
                    obj2F4->unk_084 = 0;
                }
            }
        }

        Math_SmoothStepToF(&obj2F4->unk_114, obj2F4->unk_118, 0.1f, 5.0f, 0.0001f);

        if (obj2F4->unk_0F4.x >= 360.0f) {
            obj2F4->unk_0F4.x -= 360.0f;
        }
        if (obj2F4->unk_0F4.x < 0.0f) {
            obj2F4->unk_0F4.x += 360.0f;
        }
        if (obj2F4->unk_0F4.y >= 360.0f) {
            obj2F4->unk_0F4.y -= 360.0f;
        }
        if (obj2F4->unk_0F4.y < 0.0f) {
            obj2F4->unk_0F4.y += 360.0f;
        }

        if (obj2F4->unk_068 != 0) {
            if ((gLevelMode == LEVELMODE_UNK_2) && (obj2F4->unk_0B4 == 200)) {
                Math_SmoothStepToAngle(&obj2F4->obj.rot.x, obj2F4->unk_0F4.x, 0.1f, 10.0f, 0.00001f);
                Math_SmoothStepToAngle(&obj2F4->obj.rot.y, obj2F4->unk_0F4.y, 0.1f, 10.0f, 0.00001f);
            } else {
                Math_SmoothStepToAngle(&obj2F4->obj.rot.x, obj2F4->unk_0F4.x, 0.2f, 100.0f, 0.00001f);
                Math_SmoothStepToAngle(&obj2F4->obj.rot.y, obj2F4->unk_0F4.y, 0.2f, 100.0f, 0.00001f);
            }
        }

        if (obj2F4->unk_124.x > 0.0f) {
            obj2F4->unk_124.x -= obj2F4->unk_124.y;
            obj2F4->obj.rot.x += obj2F4->unk_124.y * obj2F4->unk_124.z;
            if (obj2F4->obj.rot.x >= 360.0f) {
                obj2F4->obj.rot.x -= 360.0f;
            }
            if (obj2F4->obj.rot.x < 0.0f) {
                obj2F4->obj.rot.x += 360.0f;
            }
        }

        if (obj2F4->unk_130 > 0.0f) {
            obj2F4->unk_130 -= obj2F4->unk_134;
            obj2F4->obj.rot.y += obj2F4->unk_134 * obj2F4->unk_138;
            if (obj2F4->obj.rot.y >= 360.0f) {
                obj2F4->obj.rot.y = obj2F4->obj.rot.y - 360.0f;
            }
            if (obj2F4->obj.rot.y < 0.0f) {
                obj2F4->obj.rot.y += 360.0f;
            }
        }

        if (obj2F4->unk_13C > 0.0f) {
            if ((obj2F4->unk_0B4 == 0xD) || (obj2F4->unk_0B4 == 0xE) || (obj2F4->unk_0B4 == 0x3D) ||
                (obj2F4->unk_0B4 == 0x3E) || (obj2F4->unk_0B4 == 0x3F) || (obj2F4->unk_0B4 == 0x40) ||
                (obj2F4->unk_0B4 == 0x41) || (obj2F4->unk_0B4 == 0x42) || (obj2F4->unk_0B4 == 0x5E) ||
                (obj2F4->unk_0B4 == 0x5F) || (obj2F4->unk_0B4 == 0x61)) {
                obj2F4->obj.rot.y -= obj2F4->unk_140 * obj2F4->unk_144;
                obj2F4->obj.rot.x += obj2F4->unk_140 * obj2F4->unk_144;
            } else {
                obj2F4->unk_13C -= obj2F4->unk_140;
                obj2F4->unk_170 += obj2F4->unk_140 * obj2F4->unk_144;
            }
        }

        if (obj2F4->unk_170 >= 360.0f) {
            obj2F4->unk_170 -= 360.0f;
        }
        if (obj2F4->unk_170 < 0.0f) {
            obj2F4->unk_170 += 360.0f;
        }

        Math_SmoothStepToAngle(&obj2F4->obj.rot.z, obj2F4->unk_170, 0.2f, 100.0f, 0.0001f);
        Matrix_RotateZ(gCalcMatrix, (obj2F4->unk_2E8.z + obj2F4->unk_0F4.z) * M_DTOR, 0);
        Matrix_RotateY(gCalcMatrix, obj2F4->unk_0F4.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, obj2F4->unk_0F4.x * M_DTOR, 1);

        spB8.x = 0.0f;
        spB8.y = 0.0f;
        spB8.z = obj2F4->unk_114;

        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spB8, &spAC);

        obj2F4->vel.x = obj2F4->unk_148 + spAC.x;
        obj2F4->vel.y = obj2F4->unk_14C + spAC.y;
        obj2F4->vel.z = spAC.z;

        obj2F4->unk_148 -= obj2F4->unk_148 * 0.1f;
        obj2F4->unk_14C -= obj2F4->unk_14C * 0.1f;

        if (obj2F4->unk_064 == 0x80) {
            obj2F4->vel.z -= obj2F4->unk_16C;
            if ((gCurrentLevel == LEVEL_SECTOR_Y) && (D_80177D08 < 0.0f)) {
                obj2F4->vel.z -= D_80177D08;
            }
        }

        if (obj2F4->unk_064 == 0x100) {
            obj2F4->vel.z -= D_80177D08;
        }

        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_8) {
            obj2F4->vel.z = 100.0f;
        }

        func_80070D44(obj2F4);
        func_8006F40C(obj2F4);
        func_8006EA50(obj2F4);

        if (obj2F4->unk_0B4 == 0x26) {
            func_800720E8(obj2F4);
        } else {
            if (obj2F4->scale <= -1.999f) {
                func_80070BA8(obj2F4);
            } else {
                if ((obj2F4->unk_0D0 == 1) && (obj2F4->scale < 0.5f) && (obj2F4->unk_0B4 != 0x30) &&
                    (obj2F4->unk_0B4 != 0x31) && (obj2F4->unk_0B4 != 0x32)) {
                    obj2F4->unk_0D0 = 0;
                    if (gCurrentLevel == LEVEL_METEO) {
                        Audio_PlaySfx(0x2902107D, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }

                if ((obj2F4->unk_0B4 < 200) && (obj2F4->unk_0B4 != 78) && (obj2F4->scale >= 0.5f)) {
                    switch (obj2F4->unk_0B4) {
                        case 71:
                            func_8006FE28(obj2F4);
                            break;
                        case 79:
                            func_8006FEEC(obj2F4);
                            break;
                        default:
                            func_800701E0(obj2F4);
                            break;
                    }
                }
            }
        }
        switch (obj2F4->unk_0B4) {
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
                if (!(gFrameCount & 7)) {
                    obj2F4->unk_15C = Rand_ZeroOne() * 255.0f;
                    obj2F4->unk_160 = Rand_ZeroOne() * 255.0f;
                    obj2F4->unk_164 = Rand_ZeroOne() * 255.0f;
                }
                Math_SmoothStepToF(&obj2F4->unk_150, obj2F4->unk_15C, 1.0f, 10.0f, 0.0f);
                Math_SmoothStepToF(&obj2F4->unk_154, obj2F4->unk_160, 1.0f, 10.0f, 0.0f);
                Math_SmoothStepToF(&obj2F4->unk_158, obj2F4->unk_164, 1.0f, 10.0f, 0.0f);
                break;

            case 46:
                if (func_800A73E4(&spEC, &spFC, obj2F4->obj.pos.x, -100.0f, obj2F4->obj.pos.z)) {
                    spF0 = 10.0f;

                    if (Math_SmoothStepToF(&obj2F4->obj.pos.y, spEC, 0.5f, 7.0f, 0.0f) >= 0.0f) {
                        spF0 = 350.0f;
                        if (!(gFrameCount & 3)) {
                            func_8007240C(obj2F4->obj.pos.x, spEC, obj2F4->obj.pos.z, obj2F4->obj.rot.y);
                            Audio_PlaySfx(0x19800017, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        }
                    }

                    Math_SmoothStepToAngle(&obj2F4->obj.rot.x, spF0, 0.1f, 1.0f, 0.0f);

                    if ((obj2F4->unk_0B8 == 4) || (obj2F4->unk_0B8 == 5)) {
                        var_fv0 = obj2F4->unk_120 * 20.0f;
                        if (obj2F4->unk_0B8 == 4) {
                            var_fv0 *= -1.0f;
                        }
                        Math_SmoothStepToAngle(&obj2F4->obj.rot.z, var_fv0, 0.1f, 3.0f, 0.0f);
                    }
                }
                obj2F4->obj.rot.y = obj2F4->unk_0F4.y;
                break;

            case 31:
                obj2F4->obj.rot.z = gFrameCount;
                break;

            case 21:
            case 22:
                obj2F4->obj.rot.z = gFrameCount * 3.0f;
                break;

            case 3:
                obj2F4->unk_0C9 = 1;
                obj2F4->obj.rot.y -= 10.0f;
                break;

            case 6:
                obj2F4->unk_0B6++;
                if (gCurrentLevel == LEVEL_SOLAR) {
                    if (obj2F4->unk_0B6 >= Animation_GetFrameCount(&D_600636C)) {
                        obj2F4->unk_0B6 = 0;
                    }
                    if (((s32) gFrameCount % 3) == 0) {
                        func_E16C50_8019E9F4(obj2F4->obj.pos.x, obj2F4->obj.pos.y - 20, obj2F4->obj.pos.z - 180.0f,
                                             0.0f, Rand_ZeroOne() * 20.0f * -1.0f, 0.0f, 4.0f, 2);
                    }
                } else if (obj2F4->unk_0B6 >= Animation_GetFrameCount(&D_40057AC)) {
                    obj2F4->unk_0B6 = 0;
                }
                break;

            case 9:
                obj2F4->unk_0B6++;
                if (obj2F4->unk_0B6 >= Animation_GetFrameCount(&D_40001A4)) {
                    obj2F4->unk_0B6 = 0;
                }
                if (obj2F4->unk_068 == 0) {
                    obj2F4->obj.rot.y = 0.0f;
                }
                break;

            case 48:
            case 49:
            case 50:
                func_E9F1D0_801A3BD4(obj2F4);
                break;

            case 52:
                func_80072474(obj2F4);
                break;

            case 78:
                func_8006753C(obj2F4);
                break;

            case 79:
                if (obj2F4->timer_0C4 == 0) {
                    obj2F4->unk_0B6 += 1;
                    if (Animation_GetFrameCount(&D_600E5EC) < obj2F4->unk_0B6) {
                        obj2F4->unk_0B6 = 0;
                    }
                }
                break;

            case 80: {
                Effect* effect;
                Vec3f sp90;
                Vec3f sp84;
                Vec3f sp78;
                s32 sp74;

                switch (obj2F4->unk_046) {
                    case 1:
                        break;

                    case 0:
                        Matrix_RotateZ(gCalcMatrix, obj2F4->unk_0F4.z * M_DTOR, 0);
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1290, &sp90);

                        if ((obj2F4->obj.pos.y + sp90.y) > -30.0f) {
                            for (sp74 = 0; sp74 < 7; sp74++) {
                                effect = func_8007783C(OBJ_EFFECT_394);

                                if (effect != NULL) {
                                    effect->unk_78 = effect->unk_7A = 12;
                                    effect->obj.status = 2;
                                    effect->obj.pos.x = obj2F4->obj.pos.x + sp90.x;
                                    effect->obj.pos.y = obj2F4->obj.pos.y + sp90.y;
                                    effect->obj.pos.z = obj2F4->obj.pos.z;
                                    effect->obj.rot.x = Rand_ZeroOne() * 360.0f;
                                    effect->obj.rot.y = Rand_ZeroOne() * 360.0f;
                                    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
                                    sp84.x = (Rand_ZeroOne() * 25.0f) + 30.0f;
                                    sp84.y = (Rand_ZeroOne() * 25.0f) + 20.0f;
                                    sp84.z = 0.0f;
                                    effect->unk_44 = 10;
                                    effect->scale2 = 1.0f;
                                    Matrix_RotateY(gCalcMatrix, ((Rand_ZeroOne() * 180.0f) + 180.0f) * M_DTOR, 0);
                                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp84, &sp78);
                                    effect->vel.x = sp78.x;
                                    effect->vel.y = sp78.y;
                                    effect->vel.z = sp78.z;
                                    effect->unk_60.x = (Rand_ZeroOne() - 0.5f) + 5.0f;
                                    effect->unk_60.y = (Rand_ZeroOne() - 0.5f) + 5.0f;
                                    effect->unk_60.z = (Rand_ZeroOne() - 0.5f) + 5.0f;
                                }
                            }
                            obj2F4->unk_046++;
                        }
                        break;
                }

                if ((fabsf(obj2F4->unk_114) > 10.0f) && !(gFrameCount & 1)) {
                    effect = func_8007783C(OBJ_EFFECT_394);
                    if (effect != NULL) {
                        Matrix_RotateZ(gCalcMatrix, obj2F4->unk_0F4.z * M_DTOR, 0);
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_800D1290, &sp90);

                        effect->unk_78 = effect->unk_7A = 0xB;

                        effect->obj.status = 2;

                        effect->obj.pos.x = ((Rand_ZeroOne() - 0.5f) * 3.0f) + obj2F4->obj.pos.x + sp90.x;
                        effect->obj.pos.y = ((Rand_ZeroOne() - 0.5f) * 3.0f) + obj2F4->obj.pos.y + sp90.y;
                        effect->obj.pos.z = ((Rand_ZeroOne() - 0.5f) * 3.0f) + obj2F4->obj.pos.z + 180.0f;

                        effect->scale2 = 9.0f;
                        effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
                        effect->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
                        effect->vel.y = (Rand_ZeroOne() - 0.5f) * 3.0f + 30.0f;
                        effect->unk_44 = 100;
                        effect->unk_46 = -8;
                        effect->unk_60.z = 3;

                        if (Rand_ZeroOne() < 0.5f) {
                            effect->unk_60.z = -effect->unk_60.z;
                        }

                        if (gFrameCount & 2) {
                            effect->vel.y = -effect->vel.y;
                        }
                    }

                    if (!(gFrameCount & 3)) {
                        effect = func_8007783C(OBJ_EFFECT_394);
                        if (effect != NULL) {
                            effect->unk_78 = effect->unk_7A = 0xB;
                            effect->obj.status = 2;
                            effect->obj.pos.x = ((Rand_ZeroOne() - 0.5f) * 3.0f) + obj2F4->obj.pos.x;
                            effect->obj.pos.y = ((Rand_ZeroOne() - 0.5f) * 5.0f) + obj2F4->obj.pos.y + 50.0f;
                            effect->obj.pos.z = ((Rand_ZeroOne() - 0.5f) * 3.0f) + obj2F4->obj.pos.z + 200.0f;
                            effect->scale2 = 9.0f;
                            effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
                            effect->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
                            effect->vel.y = (Rand_ZeroOne() - 0.5f) * 3.0f + 10.0f;
                            effect->unk_44 = 100;
                            effect->unk_46 = -8;
                            effect->unk_60.z = 3;

                            if (Rand_ZeroOne() < 0.5f) {
                                effect->unk_60.z = -effect->unk_60.z;
                            }

                            if (gFrameCount & 4) {
                                effect->vel.y = -effect->vel.y;
                            }
                        }
                    }
                }
            } break;

            case 81:
                Math_SmoothStepToF(&obj2F4->unk_150, 1.0f, 0.1f, 0.1f, 0.001f);

                if (obj2F4->unk_150 > 0.5f) {
                    obj2F4->info.hitbox = SEGMENTED_TO_VIRTUAL(D_601B4C4);
                }

                if (obj2F4->unk_046 == 0) {
                    obj2F4->unk_154 += 4.0f;
                    if (obj2F4->unk_154 >= 100.0f) {
                        obj2F4->unk_046 = 1;
                        obj2F4->unk_154 = 100.0f;
                    }
                } else {
                    obj2F4->unk_154 -= 4.0f;
                    if (obj2F4->unk_154 <= 0.0f) {
                        obj2F4->unk_046 = 0;
                        obj2F4->unk_154 = 0.0f;
                    }
                }
                break;

            case 83:
                if (obj2F4->unk_0CE <= 0) {
                    if (obj2F4->unk_0B6 == 0x14) {
                        spD4 = obj2F4->obj.pos.z;
                        spD8 = obj2F4->obj.pos.y;

                        obj2F4->obj.pos.y += 80.0f;
                        obj2F4->obj.pos.z += 40.0f;
                        func_80066254(obj2F4);
                        obj2F4->obj.pos.y = spD8;
                        obj2F4->obj.pos.z = spD4;
                    }

                    if ((obj2F4->unk_0B6 >= 0x12) && (obj2F4->unk_0B6 < 0x18)) {
                        func_8007BC7C(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 80.0f, obj2F4->obj.pos.z + 60.0f, 20.0f);
                    }

                    if (obj2F4->unk_0B6 < 49) {
                        obj2F4->unk_0B6++;
                        if (obj2F4->unk_0B6 >= 49) {
                            obj2F4->unk_0B6 = 49;
                        }
                        if (gFrameCount & 1) {
                            func_E16C50_801AC8A8(((Rand_ZeroOne() - 0.5f) * 100.0f) + obj2F4->obj.pos.x,
                                                 (Rand_ZeroOne() * 50.0f) + obj2F4->obj.pos.y,
                                                 ((Rand_ZeroOne() - 0.5f) * 100.0f) + obj2F4->obj.pos.z, 1.0f, 0);
                        }
                    }
                    obj2F4->timer_0C2 = 10000;
                }
                break;

            case 88:
                if (obj2F4->unk_04A == 0) {
                    obj2F4->unk_046 += 4;
                    if (obj2F4->unk_046 >= 0xFF) {
                        obj2F4->unk_046 = 0xFF;
                        obj2F4->unk_04A = 1;
                    }
                } else {
                    obj2F4->unk_046 -= 4;
                    if (obj2F4->unk_046 <= 0) {
                        obj2F4->unk_046 = 0;
                        obj2F4->unk_04A = 0;
                    }
                }
                break;

            case 103:
            case 104:
                func_80187530(obj2F4);
                break;

            case 106:
                obj2F4->unk_0B6 += 1;
                if (obj2F4->unk_0B6 >= 6) {
                    obj2F4->unk_0B6 = 0;
                }
                break;
        }

        if (gLevelMode == LEVELMODE_ALL_RANGE) {
            D_80177F24[obj2F4->index] = obj2F4->obj.pos.x;
            D_8017802C[obj2F4->index] = obj2F4->obj.pos.z;
            D_80178134[obj2F4->index] = Math_ModF(obj2F4->unk_0F4.y, 360.0f) + 180.0f;
            D_80178238[obj2F4->index + 1] = 1;
        }
    }
}

UNK_TYPE D_800D129C[0x8C] = { 0 }; // unused

bool func_80074BFC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Object_2F4* obj2F4 = data;

    if (limbIndex == 1) {
        pos->x += obj2F4->unk_154;
    }
    if (limbIndex == 2) {
        rot->z -= obj2F4->unk_150;
    }
    return false;
}

bool func_80074C44(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Object_2F4* obj2F4 = data;
    s32 var_s1;

    if (limbIndex == 5) {
        var_s1 = (s32) (obj2F4->unk_0CE * 0.6375f);
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

void func_80074E3C(Object_2F4* obj2F4) {
    Vec3f sp30[10];

    Animation_GetFrameData(&D_6013820, 0, sp30);
    sp30[6].y += obj2F4->unk_150;
    sp30[5].z += obj2F4->unk_154 + ((obj2F4->timer_0BE >> 2) & 1);
    sp30[4].z -= obj2F4->unk_154 + ((obj2F4->timer_0BE >> 2) & 1);
    Animation_DrawSkeleton(1, D_601390C, sp30, func_80074C44, NULL, obj2F4, &gIdentityMatrix);
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

void func_80074FF0(Object_2F4* obj2F4) {
    Vec3f sp114[31];
    f32 sp40;
    s16 temp_s0;
    s32 pad;

    if (obj2F4->timer_0C6 && (obj2F4->unk_0B4 != 0x5A) && (obj2F4->unk_0B4 != 0x44) && (obj2F4->unk_0B4 != 0x48)) {
        if ((obj2F4->unk_0B4 != 0xD) && (obj2F4->unk_0B4 != 0xE) && (obj2F4->unk_0B4 != 0x3D) &&
            (obj2F4->unk_0B4 != 0x3E) && (obj2F4->unk_0B4 != 0x53) && (obj2F4->unk_0B4 != 0x62) &&
            (obj2F4->scale > 0.5f) && (obj2F4->timer_0C6 >= 9) && !(obj2F4->timer_0C6 & 3) && (D_80177854 != 0x64)) {
            func_8007C120(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                          obj2F4->vel.z, obj2F4->scale * 0.07f, 3);
        }

        if ((obj2F4->unk_0B4 != 0x15) && (obj2F4->unk_0B4 != 0x17) && (obj2F4->unk_0B4 != 0x4F) &&
            (obj2F4->unk_0B4 != 0x53) && (obj2F4->unk_0B4 != 0x1B) && (obj2F4->unk_0B4 != 0x33) &&
            (obj2F4->unk_0B4 != 0xD) && (obj2F4->unk_0B4 != 0x48) && (obj2F4->unk_0B4 != 0x1C) &&
            (obj2F4->scale > 0.5f)) {
            sp40 = __sinf(obj2F4->timer_0C6 * 400.0f * M_DTOR) * obj2F4->timer_0C6;
            Matrix_RotateY(gGfxMatrix, M_DTOR * sp40, 1);
            Matrix_RotateX(gGfxMatrix, M_DTOR * sp40, 1);
            Matrix_RotateZ(gGfxMatrix, M_DTOR * sp40, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
        }
    }

    if ((obj2F4->obj.status == 3) && (obj2F4->timer_0BE != 0)) {
        RCP_SetupDL_27();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
    }

    if ((obj2F4->unk_0B4 == 0x1D) || (obj2F4->unk_0B4 == 0x3B) || (obj2F4->unk_0B4 == 0x3C)) {
        RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    } else if ((obj2F4->unk_0B4 == 0x52) || (obj2F4->unk_0B4 == 0x5A) ||
               ((obj2F4->unk_0B4 == 6) && (gCurrentLevel == LEVEL_SOLAR))) {
        if (!(obj2F4->timer_0C6 & 1)) {
            RCP_SetupDL(&gMasterDisp, 0x39);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x3D);
        }
    }

    switch (obj2F4->unk_0B4) {
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
            RCP_SetupDL(&gMasterDisp, 0x22);
            gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, (s32) (*obj2F4).unk_150, (s32) (*obj2F4).unk_154,
                            (s32) (*obj2F4).unk_158, 255);
            gSPDisplayList(gMasterDisp++, D_800D003C[obj2F4->unk_0B4].unk_00);
            gDPSetTextureFilter(gMasterDisp++, G_TF_BILERP);
            break;
        default:
            if ((obj2F4->unk_0B4 < 200) && (D_800D003C[obj2F4->unk_0B4].unk_00 != NULL)) {
                gSPDisplayList(gMasterDisp++, D_800D003C[obj2F4->unk_0B4].unk_00);
            }

            switch (obj2F4->unk_0B4) {
                case 56:
                    func_800515C4();
                    break;

                case 0:
                    obj2F4->unk_07C = 1;
                    func_8005ADAC(obj2F4);
                    break;

                case 2:
                    obj2F4->unk_150 -= obj2F4->unk_150 * 0.1f;
                    obj2F4->unk_17C -= obj2F4->unk_17C * 0.1f;
                    obj2F4->unk_154 -= obj2F4->unk_154 * 0.1f;
                    obj2F4->unk_180 -= obj2F4->unk_180 * 0.1f;

                    if (obj2F4->obj.rot.z > 0.0f) {
                        obj2F4->unk_150 += (obj2F4->obj.rot.z * 0.7f - obj2F4->unk_150) * 0.2f;
                        obj2F4->unk_17C += (-obj2F4->obj.rot.z * 0.7f - obj2F4->unk_17C) * 0.2f;
                    }

                    if (obj2F4->obj.rot.z < 0.0f) {
                        obj2F4->unk_154 += (-obj2F4->obj.rot.z * 0.7f - obj2F4->unk_154) * 0.2f;
                        obj2F4->unk_180 += (obj2F4->obj.rot.z * 0.7f - obj2F4->unk_180) * 0.2f;
                    }
                    func_8005B388(obj2F4);
                    break;

                case 43:
                    if (gLevelType == LEVELTYPE_PLANET) {
                        gSPDisplayList(gMasterDisp++, D_40018A0);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_4007870);
                    }
                    func_8005ADAC(obj2F4);
                    break;

                case 5:
                    obj2F4->unk_07C = 1;
                    func_8005ADAC(obj2F4);
                    break;

                case 6:
                    if (gCurrentLevel == LEVEL_SOLAR) {
                        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                        Animation_GetFrameData(&D_600636C, obj2F4->unk_0B6, sp114);
                        Animation_DrawSkeleton(1, D_6006558, sp114, NULL, NULL, obj2F4, &gIdentityMatrix);
                        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    } else {
                        Animation_GetFrameData(&D_40057AC, obj2F4->unk_0B6, sp114);
                        Animation_DrawSkeleton(1, D_40058B8, sp114, NULL, NULL, obj2F4, &gIdentityMatrix);
                    }
                    break;

                case 7:
                    obj2F4->unk_07C = 1;
                    func_8005ADAC(obj2F4);
                    break;

                case 9:
                    Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);
                    Animation_GetFrameData(&D_40001A4, obj2F4->unk_0B6, sp114);
                    Animation_DrawSkeleton(1, D_4000270, sp114, NULL, NULL, obj2F4, &gIdentityMatrix);
                    break;

                case 18:
                    if (obj2F4->unk_114 > 0.1f) {
                        obj2F4->unk_07C = 1;
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
                        Matrix_Scale(gGfxMatrix, 2.5f, 2.5f, 2.5f, 1);
                        func_8005B1E8(obj2F4, 2);
                    }
                    break;

                case 19:
                    if (obj2F4->unk_114 > 0.1f) {
                        obj2F4->unk_07C = 1;
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
                        Matrix_Scale(gGfxMatrix, 2.5f, 2.5f, 2.5f, 1);
                        func_8005B1E8(obj2F4, 2);
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
                    obj2F4->unk_07C = 1;
                    func_8005B1E8(obj2F4, 2);
                    break;

                case 22:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_6019730);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -30.0f, 1);
                    obj2F4->unk_07C = 1;
                    func_8005B1E8(obj2F4, 2);
                    break;

                case 27:
                    if (obj2F4->timer_0C2 != 0) {
                        if (!(obj2F4->timer_0C2 & 3) && (D_80177854 != 0x64)) {
                            func_8007D0E0(((Rand_ZeroOne() - 0.5f) * 200.0f) + obj2F4->obj.pos.x,
                                          ((Rand_ZeroOne() - 0.5f) * 200.0f) + obj2F4->obj.pos.y,
                                          ((Rand_ZeroOne() - 0.5f) * 200.0f) + obj2F4->obj.pos.z,
                                          (Rand_ZeroOne() * 1.5f) + 2.5f);
                        }
                        RCP_SetupDL(&gMasterDisp, 0x39);
                        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                        gSPDisplayList(gMasterDisp++, D_6001950);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_60066F0);
                    }
                    break;

                case 31:
                    Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_600E0C0);
                    break;

                case 33:
                    Animation_GetFrameData(&D_400A30C, obj2F4->unk_0B6, sp114);
                    Matrix_RotateY(gGfxMatrix, M_PI, 1);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, 1);
                    Animation_DrawSkeleton(1, D_400A398, sp114, func_80074BFC, NULL, obj2F4, &gIdentityMatrix);
                    Math_SmoothStepToF(&(*obj2F4).unk_154, 0.0f, 0.3f, 2.0f, 0.0001f);
                    break;

                case 36:
                    Animation_GetFrameData(&D_700CAF4, obj2F4->unk_0B6, sp114);
                    sp114[2].z += obj2F4->unk_150;
                    Animation_DrawSkeleton(1, D_700CB60, sp114, NULL, NULL, obj2F4, &gIdentityMatrix);
                    break;

                case 38:
                    func_80074E3C(obj2F4);
                    break;

                case 48:
                case 49:
                case 50:
                    func_E9F1D0_801A4CB0(obj2F4);
                    break;

                case 52:
                    Animation_GetFrameData(&D_601F874, obj2F4->unk_0B6, sp114);
                    sp114[2].z -= obj2F4->unk_150;
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, 1);
                    Animation_DrawSkeleton(1, D_601F920, sp114, NULL, NULL, obj2F4, &gIdentityMatrix);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;

                case 64:
                    Matrix_Push(&gGfxMatrix);
                    Matrix_RotateX(gGfxMatrix, obj2F4->unk_0F4.x * M_DTOR, 1);
                    Matrix_RotateY(gGfxMatrix, obj2F4->unk_0F4.y * M_DTOR, 1);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, 0.0f, obj2F4->unk_150, 0.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_600CAA0);
                    Matrix_Pop(&gGfxMatrix);
                    gSPDisplayList(gMasterDisp++, D_600C130);
                    Matrix_Translate(gGfxMatrix, 0.0f, -obj2F4->unk_150, 0.0f, 1);
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
                    func_80067874(obj2F4);
                    break;

                case 79:
                    temp_s0 = obj2F4->unk_0B8;
                    obj2F4->unk_0B8 = 2;
                    func_E16C50_80190430(obj2F4);
                    obj2F4->unk_0B8 = temp_s0;
                    break;

                case 80:
                    Matrix_Scale(gGfxMatrix, 0.6f, 0.6f, 0.6f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_9011200);
                    break;

                case 81:
                    if (obj2F4->unk_150 > 0.001f) {
                        Matrix_Scale(gGfxMatrix, obj2F4->unk_150, obj2F4->unk_150, obj2F4->unk_150, 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        Texture_BlendRGBA16(obj2F4->unk_154, 16 * 11, D_9003890, D_9003DF0, D_9003330);
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
                    Animation_GetFrameData(&D_602201C, obj2F4->unk_0B6, sp114);
                    Animation_DrawSkeleton(1, D_60220E8, sp114, NULL, NULL, obj2F4, &gIdentityMatrix);
                    break;

                case 85:
                    gSPDisplayList(gMasterDisp++, D_D00B880);
                    func_8005ADAC(obj2F4);
                    break;

                case 86:
                    gSPDisplayList(gMasterDisp++, D_D009A40);
                    func_8005ADAC(obj2F4);
                    break;

                case 88:
                    RCP_SetupDL(&gMasterDisp, 0x16);
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, obj2F4->unk_046, obj2F4->unk_046, obj2F4->unk_046, 255);
                    gSPDisplayList(gMasterDisp++, D_6008970);
                    break;

                case 89:
                    RCP_SetupDL(&gMasterDisp, 0x15);
                    gSPDisplayList(gMasterDisp++, D_6000E10);
                    break;

                case 103:
                case 104:
                    func_E9F1D0_8018769C(obj2F4);
                    break;

                case 105:
                    RCP_SetupDL(&gMasterDisp, 0x23);
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 0x8F);
                    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
                    gSPDisplayList(gMasterDisp++, D_7000000);
                    break;

                case 106:
                    Animation_GetFrameData(&D_4000080, obj2F4->unk_0B6, sp114);
                    Animation_DrawSkeleton(1, D_400014C, sp114, NULL, NULL, obj2F4, &gIdentityMatrix);
                    break;

                case 0xFFF:
                    obj2F4->timer_0C2 = 10;
                    break;
            }

            if ((D_80161410 > 0) && ((obj2F4->unk_080 > 0) && (obj2F4->unk_080 < 6))) {
                Vec3f sp58 = { 0.0f, 0.0f, 0.0f };

                if ((obj2F4->unk_080 == 4) || (obj2F4->unk_080 == 5)) {
                    Matrix_MultVec3f(gGfxMatrix, &sp58, &D_80177E98[obj2F4->unk_080 + 4]);
                    return;
                } else {
                    Matrix_MultVec3f(gGfxMatrix, &sp58, &D_80177E98[obj2F4->unk_080]);
                }
            }
            break;
    }
}

void func_800763A4(Object_2F4* obj2F4) {
    s32 var_s0;
    s32 sp60;
    s32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    s32 pad;

    if (obj2F4->unk_0B4 == 27) {
        obj2F4->obj.pos.y -= obj2F4->vel.y;
        obj2F4->obj.status = 2;
        func_8007D0E0(obj2F4->obj.pos.x - obj2F4->vel.x, obj2F4->obj.pos.y + 30.0f, obj2F4->obj.pos.z - obj2F4->vel.z,
                      obj2F4->scale * 5.0f);
        obj2F4->timer_0C2 = 10000;
        return;
    }

    if (obj2F4->timer_0BE != 0) {
        obj2F4->vel.z = 0.0f;
        obj2F4->vel.x = 0.0f;
        obj2F4->vel.y = 0.0f;

        if (obj2F4->timer_0BE == 1) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_80066254(obj2F4);

            if (gLevelMode == LEVELMODE_ALL_RANGE) {
                D_80177F24[obj2F4->index] = obj2F4->obj.pos.x;
                D_8017802C[obj2F4->index] = obj2F4->obj.pos.z;
                D_80178134[obj2F4->index] = 1001.0f;
            }
            return;
        }
    } else {
        if ((gLevelType == LEVELTYPE_PLANET) || (gCurrentLevel == LEVEL_BOLSE)) {
            obj2F4->gravity = 0.4f;
        }
        switch (obj2F4->timer_04C) {
            case 0:
            case 1:
                if (obj2F4->index & 1) {
                    obj2F4->obj.rot.z -= 8.0f;
                } else {
                    obj2F4->obj.rot.z += 8.0f;
                }
                break;

            case 2:
                obj2F4->obj.rot.y += 5.0f;
                obj2F4->obj.rot.x += 7.3f;
                break;

            case 3:
                obj2F4->obj.rot.y += 6.0f;
                obj2F4->obj.rot.x += 18.3f;
                obj2F4->gravity = 0.7f;
                break;

            case 4:
                obj2F4->obj.rot.x += (-90.0f - obj2F4->obj.rot.x) * 0.1f;
                break;
        }

        if (((obj2F4->timer_0BC & 3) == 1) && (obj2F4->unk_0B4 != 13) && (obj2F4->unk_0B4 != 61)) {
            func_8007D24C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 2.2f);
        }

        if ((D_80178294 != 0) && func_800A73E4(&sp58, &sp5C, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z)) {
            func_8007BFFC(obj2F4->obj.pos.x, sp58 + 20.0f, obj2F4->obj.pos.z, 0.0f, 0.0f, 0.0f, obj2F4->scale * 3.0f,
                          5);
            func_8007B228(obj2F4->obj.pos.x, sp58, obj2F4->obj.pos.z, 2.0f);
            obj2F4->timer_0BE = 2;
            func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            return;
        }

        if (D_801784AC == 4) {
            if (func_E6A810_801B6AEC(obj2F4->obj.pos.x, obj2F4->obj.pos.y - 10.0f, obj2F4->obj.pos.z + D_80177D20) !=
                0) {
                func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 20.0f, obj2F4->obj.pos.z, obj2F4->scale * 6.0f);
                func_8007BFFC(obj2F4->obj.pos.x - obj2F4->vel.x, obj2F4->obj.pos.y + 30.0f,
                              obj2F4->obj.pos.z - obj2F4->vel.z, 0.0f, 0.0f, 0.0f, obj2F4->scale * 4.0f, 20);
                func_80062C38(obj2F4->obj.pos.x, obj2F4->obj.pos.z);
                obj2F4->timer_0BE = 2;
                func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
                return;
            }
        } else {
            sp4C.x = obj2F4->vel.x;
            sp4C.y = obj2F4->vel.y;
            sp4C.z = obj2F4->vel.z;

            sp60 = func_8006351C(obj2F4->index, &obj2F4->obj.pos, &sp4C, 0);

            if ((sp60 != 0) || (obj2F4->obj.pos.y < (D_80177940 + 30.0f))) {
                if ((Rand_ZeroOne() < 0.5f) && (obj2F4->timer_04C < 3) && (gLevelType == LEVELTYPE_PLANET) &&
                    (sp60 != 999) && (D_80161A88 != 2) && ((obj2F4->vel.z < -20.0f) || (obj2F4->vel.z > 0.0f))) {
                    if (gCurrentLevel == LEVEL_FORTUNA) {
                        func_8006BF7C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z - obj2F4->vel.z);
                        func_80062C38(obj2F4->obj.pos.x, obj2F4->obj.pos.z);
                    }

                    obj2F4->obj.pos.y -= obj2F4->vel.y;
                    obj2F4->vel.y = Rand_ZeroOne() * 10.0f;
                    obj2F4->timer_04C = 3;

                    if (gLevelMode == LEVELMODE_ALL_RANGE) {
                        func_8007D2C8(obj2F4->obj.pos.x - obj2F4->vel.x, obj2F4->obj.pos.y,
                                      obj2F4->obj.pos.z - obj2F4->vel.z, obj2F4->scale * 3.0f);
                    }

                    func_8007D2C8(obj2F4->obj.pos.x - obj2F4->vel.x, obj2F4->obj.pos.y,
                                  obj2F4->obj.pos.z - obj2F4->vel.z, obj2F4->scale * 3.0f);

                    if ((obj2F4->obj.id == OBJ_2F4_197) && (obj2F4->unk_0E4 < 8)) {
                        func_8007A6F0(&obj2F4->obj.pos, 0x2903B009);
                    } else {
                        func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
                    }

                    if ((obj2F4->obj.id == OBJ_2F4_200) && (obj2F4->unk_0B4 == 2)) {
                        if (obj2F4->unk_158 < 360.0f) {
                            func_800A69F8(1, obj2F4->obj.pos.x + 20.0f, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                            obj2F4->unk_158 = 777.0f;
                        }
                        if (obj2F4->unk_15C < 360.0f) {
                            func_800A69F8(0, obj2F4->obj.pos.x - 20.0f, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                            obj2F4->unk_15C = 777.0f;
                        }
                    }
                } else {
                    if ((obj2F4->obj.pos.y < (D_80177940 + 30.0f)) && (gLevelType == LEVELTYPE_PLANET)) {
                        obj2F4->vel.z = 0.0f;
                        if (D_80161A88 == 2) {
                            func_8007D9DC(obj2F4->obj.pos.x, D_80177940 + 2.0f, obj2F4->obj.pos.z, 3.0f, 20.0f, 0);
                            func_8007D9DC(obj2F4->obj.pos.x, D_80177940 + 2.0f, obj2F4->obj.pos.z, 3.0f, 20.0f, 10);
                            func_8007D9DC(obj2F4->obj.pos.x, D_80177940 + 2.0f, obj2F4->obj.pos.z, 3.0f, 20.0f, 20);
                            func_8007ADF4(obj2F4->obj.pos.x, D_80177940, obj2F4->obj.pos.z, 0.1f, 3.0f);
                        } else {
                            func_800365E4(obj2F4->obj.pos.x, 3.0f, obj2F4->obj.pos.z, obj2F4->obj.pos.x,
                                          obj2F4->obj.pos.z, 0.0f, 0.0f, 90.0f, 6.5f, 0, 0);
                        }
                        func_8007C120(obj2F4->obj.pos.x, 20.0f, obj2F4->obj.pos.z, 0.0f, 0.0f, 0.0f,
                                      obj2F4->scale * 0.05f, 0x1E);
                        if ((gCurrentLevel == LEVEL_FORTUNA) || (gCurrentLevel == LEVEL_VENOM_2)) {
                            func_8007C688(obj2F4->obj.pos.x, D_80177940 + 30.0f, obj2F4->obj.pos.z, 3.0f, 60);
                            if (gCurrentLevel == LEVEL_FORTUNA) {
                                func_80062C38(obj2F4->obj.pos.x, obj2F4->obj.pos.z);
                            }
                        }
                    }

                    obj2F4->obj.pos.y -= obj2F4->vel.y;
                    func_8007D0E0(obj2F4->obj.pos.x - obj2F4->vel.x, obj2F4->obj.pos.y + 30.0f,
                                  obj2F4->obj.pos.z - obj2F4->vel.z, obj2F4->scale * 5.0f);
                    if (gLevelMode == LEVELMODE_ALL_RANGE) {
                        func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 30.0f, obj2F4->obj.pos.z, obj2F4->vel.x,
                                      10.0f, obj2F4->vel.z, obj2F4->scale * 3.0f, 20);
                        if (sp60 == 999) {
                            func_8007C688(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->scale * 3.0f,
                                          70);
                        }
                        for (var_s0 = 0; var_s0 < 4; var_s0++) {
                            if (Rand_ZeroOne() < 0.7f) {
                                if (gCurrentLevel == LEVEL_FORTUNA) {
                                    func_800A69F8(4, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                                } else {
                                    func_800794CC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 1.0f);
                                }
                            }
                        }
                    } else {
                        func_8007BFFC(obj2F4->obj.pos.x - obj2F4->vel.x, obj2F4->obj.pos.y + 30.0f,
                                      (obj2F4->obj.pos.z - obj2F4->vel.z) + 48.0f, 0.0f, 0.0f, 0.0f,
                                      obj2F4->scale * 3.0f, 5);
                    }

                    obj2F4->timer_0BE = 2;

                    if ((obj2F4->obj.id == OBJ_2F4_197) && (obj2F4->unk_0E4 < 8)) {
                        func_8007A6F0(&obj2F4->obj.pos, 0x2903B009);
                    } else {
                        func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
                    }
                }
            }
        }
        if ((obj2F4->unk_0D0 != 0) || (obj2F4->timer_0BC == 0) ||
            ((obj2F4->unk_044 != 0) && (obj2F4->obj.id != OBJ_2F4_197))) {
            if (gLevelMode == LEVELMODE_ALL_RANGE) {
                for (var_s0 = 0; var_s0 < 4; var_s0++) {
                    if (Rand_ZeroOne() < 0.7f) {
                        if (gCurrentLevel == LEVEL_FORTUNA) {
                            func_800A69F8(4, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                        } else {
                            func_800794CC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 1.0f);
                        }
                    }
                }

                func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                              obj2F4->vel.z, 5.0f, 15);
                func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z - obj2F4->vel.z, 8.0f);
            } else {
                if ((obj2F4->unk_0B4 != 0xD) && (obj2F4->unk_0B4 != 61)) {
                    func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z - obj2F4->vel.z,
                                  obj2F4->scale * 5.0f);
                }

                if (obj2F4->unk_0B4 == 0x24) {
                    func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                                  obj2F4->vel.z, 5.0f, 0xF);
                }
            }

            obj2F4->timer_0BE = 2;

            if ((obj2F4->obj.id == OBJ_2F4_197) && (obj2F4->unk_0E4 < 8)) {
                func_8007A6F0(&obj2F4->obj.pos, 0x2903B009);
            } else {
                func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            }
        }
    }

    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        D_80177F24[obj2F4->index] = obj2F4->obj.pos.x;
        D_8017802C[obj2F4->index] = obj2F4->obj.pos.z;
        D_80178134[obj2F4->index] = obj2F4->unk_0F4.y + 180.0f;
    }

    if (obj2F4->obj.id == OBJ_2F4_197) {
        func_8002EE64(obj2F4);
    }
}

void func_8007717C(Object_2F4* obj2F4) {
    if ((obj2F4->unk_0B4 == 0x30) || (obj2F4->unk_0B4 == 0x31) || (obj2F4->unk_0B4 == 0x32)) {
        func_E9F1D0_801A3BD4(obj2F4);
    } else {
        func_800763A4(obj2F4);
    }
}

void func_800771CC(Object_2F4* obj2F4) {
    Vec3f sp24;

    Math_Vec3fFromAngles(&sp24, obj2F4->obj.rot.x, obj2F4->obj.rot.y, 50.0f);
    obj2F4->vel.x = sp24.x;
    obj2F4->vel.y = sp24.y;
    obj2F4->vel.z = sp24.z;
}

void func_80077218(Object_2F4* obj2F4) {
    func_800515C4();
}

#include "global.h"

// bss
u8 D_i1_8019B6D0;
f32 D_i1_8019B6D8[68];

void func_i1_80187530(Object_80* obj80) {
}

extern Gfx D_60199D0[];

void func_i1_8018753C(Object_80* obj80) {

    GCGM_BACK();
    GDL(&D_60199D0);
    GSGM_BACK();
}

void func_i1_801875A4(Object_4C* obj4C) {
    f32 sp1C;
    f32 sp18;
    f32 var_f;

    if (!(gGameFrameCount & 3)) {
        sp1C = (Rand_ZeroOne() - 0.5f) * 10.0f;
        sp18 = (Rand_ZeroOne() - 0.5f) * 10.0f;
        var_f = ((Rand_ZeroOne() * 0.5f) + 1.0f);
        func_8007C85C(obj4C->obj.pos.x + sp1C, obj4C->obj.pos.y + sp18, obj4C->obj.pos.z, 4.0f * var_f);
    }
}

void func_i1_80187670(Actor* actor, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8,
                      s32 arg9) {

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = arg9;
    actor->obj.pos.x = arg1;
    actor->obj.pos.y = arg2;
    actor->obj.pos.z = arg3;
    actor->obj.rot.x = arg5;
    actor->obj.rot.y = arg6;
    actor->timer_0BC = arg7;
    actor->timer_0BE = 20;
    actor->unk_0B4 = arg8;
    actor->fwork[5] = arg4;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i1_80187710(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == 0) {
            (void) "Enms[1].obj.mode %d\n";
            func_i1_80187670(&gActors[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            return;
        }
    }
}

void func_i1_801877A0(Boss* boss, f32 arg1, f32 arg2, f32 arg3) {
    Vec3f sp2C;
    Vec3f sp20;

    sp2C.x = arg1;
    sp2C.y = arg2;
    sp2C.z = arg3;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);
    func_8007F11C(OBJ_EFFECT_353, boss->obj.pos.x + sp20.x, boss->obj.pos.y + sp20.y, boss->obj.pos.z + sp20.z, 100.0f);
}

void func_i1_80187838(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gItems); i++) {
        if (gItems[i].obj.status == 0) {
            Item_Initialize(&gItems[i]);
            gItems[i].obj.status = 1;
            gItems[i].obj.id = arg4;
            gItems[i].timer_4A = 8;
            gItems[i].obj.pos.x = arg1;
            gItems[i].obj.pos.y = arg2;
            gItems[i].obj.pos.z = arg3;
            Object_SetInfo(&gItems[i].info, gItems[i].obj.id);
            return;
        }
    }
}

void func_i1_801878D8(Boss* boss) {
    s32 i;

    gBossFrameCount = 0;
    if (gLevelMode == LEVELMODE_ON_RAILS) {
        if (gPlayer[0].state_1C8 == 3) {
            gPlayer[0].state_1C8 = 9;
            gPlayer[0].unk_1D0 = 0;
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
        }
        Object_Kill(&boss->obj, &boss->sfxPos);
        return;
    }

    for (i = 0; i < ARRAY_COUNT(D_i1_8019B6D8); i++) {
        D_i1_8019B6D8[i] = 0.0f;
    }
}

void func_i1_8018798C(Boss* boss, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8007BFFC(arg1, arg2, arg3, 0.0f, 0.0f, 0.0f, arg4, 30);
    func_8007A6F0(&boss->obj.pos, 0x29034003);
}

void func_i1_801879F0(Boss* boss, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8007D1E0(arg1, arg2, arg3, arg4);
    func_8007A6F0(&boss->obj.pos, 0x29034003);
}

void func_i1_80187A38(Boss* boss, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    func_8007C120(arg1, arg2, arg3, boss->vel.x, boss->vel.y, boss->vel.z, arg4, arg5);
}

f32 func_i1_80187A88(s32 arg0) {
    f32 ret = arg0 * 0.5f;

    if (ret > 8.0f) {
        ret = 8.0f;
    }
    return ret;
}

void func_i1_80187AC8(Boss* boss) {
    Object_4C* obj4C;
    s32 var_v0;
    s32 var_s1;
    s32 var_s1_2;

    if (boss->dmgType != DMG_NONE) {
        boss->dmgType = DMG_NONE;
        if (boss->dmgPart == 0) {
            boss->swork[10] = 15;
            boss->swork[29] -= boss->damage;
            func_i1_80187A38(boss, D_i1_8019B6D8[62], D_i1_8019B6D8[63], D_i1_8019B6D8[64], 0.2f, 20);
            if (boss->swork[29] < 30) {
                func_8007A6F0(&boss->obj.pos, 0x2943500F);
            } else {
                func_8007A6F0(&boss->obj.pos, 0x29034003);
            }
            func_800BA808(gMsg_ID_2270, RCID_BOSS_CORNERIA);
            if (boss->swork[29] <= 0) {
                boss->swork[10] = 1000;
                boss->info.hitbox[1 + 0] = 100000.0f;
                func_i1_8018798C(boss, D_i1_8019B6D8[62], D_i1_8019B6D8[63], D_i1_8019B6D8[64], 10.0f);
                Audio_PlaySfx(0x2940D09A, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_Timer_80161A60 = 8;
                if (fabsf(boss->obj.rot.x) < 20.0f) {
                    boss->swork[32] = 1;
                }
                boss->actionState = 7;
                boss->timer_050 = 100;
                func_800182F4(0x105000FF);
                func_800182F4(0x115000FF);
                D_80177A80 = 0;

                if ((gPlayer[0].state_1C8 == 3) || (gPlayer[0].state_1C8 == 5)) {
                    gPlayer[0].state_1C8 = 7;
                    gPlayer[0].unk_1D0 = gPlayer[0].timer_1F8 = 0;
                    gPlayer[0].unk_0E8 += gPlayer[0].unk_114;
                    if (gPlayer[0].unk_0E8 > 360.0f) {
                        gPlayer[0].unk_0E8 -= 360.0f;
                    }
                    if (gPlayer[0].unk_0E8 < 0.0f) {
                        gPlayer[0].unk_0E8 += 360.0f;
                    }
                    gPlayer[0].unk_114 = 0.0f;
                }
                func_800BA808(gMsg_ID_2280, RCID_BOSS_CORNERIA);
                func_80042EC0(boss);
                gBossFrameCount = 100000;
                return;
            }
        } else if (boss->dmgPart == 3) {
            boss->swork[3] = 15;
            boss->swork[20] = 30;
            boss->swork[28] -= boss->damage;
            func_i1_801879F0(boss, D_i1_8019B6D8[12] + ((Rand_ZeroOne() - 0.5f) * 60.0f), D_i1_8019B6D8[13],
                             D_i1_8019B6D8[14] + ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_i1_80187A38(boss, D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 0.1f, 20);
            if (boss->swork[28] <= 0) {
                boss->swork[3] = 1000;
                boss->info.hitbox[1 + 18] = 100000.0f;
                func_i1_8018798C(boss, D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 10.0f);
            }
        }

        if (boss->dmgPart == 1) {
            boss->swork[2] = 15;
            boss->swork[21] = 30;
            boss->swork[26] -= boss->damage;

            func_i1_801879F0(boss, D_i1_8019B6D8[6] + ((Rand_ZeroOne() - 0.5f) * 60.0f), D_i1_8019B6D8[7],
                             D_i1_8019B6D8[8] + ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_i1_80187A38(boss, D_i1_8019B6D8[6], D_i1_8019B6D8[7], D_i1_8019B6D8[8], 0.1f, 20);
            if (boss->swork[26] <= 0) {
                boss->swork[2] = 1000;
                boss->info.hitbox[1 + 6] = 100000.0f;
                func_i1_8018798C(boss, D_i1_8019B6D8[6], D_i1_8019B6D8[7], D_i1_8019B6D8[8], 7.0f);
            }
        } else if (boss->dmgPart == 2) {
            boss->swork[1] = 15;
            boss->swork[22] = 30;
            boss->swork[27] -= boss->damage;
            func_i1_801879F0(boss, D_i1_8019B6D8[0] + ((Rand_ZeroOne() - 0.5f) * 60.0f), D_i1_8019B6D8[1],
                             D_i1_8019B6D8[2] + ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_i1_80187A38(boss, D_i1_8019B6D8[0], D_i1_8019B6D8[1], D_i1_8019B6D8[2], 0.1f, 20);
            if (boss->swork[27] <= 0) {
                boss->swork[1] = 1000;
                boss->info.hitbox[1 + 12] = 100000.0f;
                func_i1_8018798C(boss, D_i1_8019B6D8[0], D_i1_8019B6D8[1], D_i1_8019B6D8[2], 7.0f);
            }
        } else if ((boss->dmgPart == 4) || (boss->dmgPart == 5)) {
            Audio_PlaySfx(0x2903300E, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            boss->swork[23] = 200;
            if (boss->dmgPart == 4) {
                boss->swork[24] -= boss->damage;
                boss->swork[7] = boss->swork[8] = boss->swork[9] = 5;
                boss->swork[18] = 30;
                if (boss->swork[24] <= 0) {
                    boss->swork[7] = boss->swork[8] = boss->swork[9] = 1000;
                    boss->info.hitbox[1 + 24] = 100000.0f;
                    for (var_s1 = 3; var_s1 < 6; var_s1++) {
                        func_800430DC(D_i1_8019B6D8[18 + var_s1 + 2], D_i1_8019B6D8[24 + var_s1 + 2],
                                      D_i1_8019B6D8[30 + var_s1 + 2], D_i1_8019B6D8[36 + var_s1 + 2],
                                      D_i1_8019B6D8[42 + var_s1 + 2], D_i1_8019B6D8[48 + var_s1 + 2], 0.0f,
                                      (Rand_ZeroOne() * 20.0f), 0.0f, 5.5f, var_s1 + 0x1C,
                                      ((s32) (Rand_ZeroOne() * 30.0f)) + 60.0f);
                    }
                    if (boss->actionState < 5) {
                        boss->actionState = 5;
                        boss->timer_050 = 60;
                    }
                }
            } else {
                boss->swork[25] -= boss->damage;
                boss->swork[4] = boss->swork[5] = boss->swork[6] = 5;
                boss->swork[19] = 30;
                if (boss->swork[25] <= 0) {
                    boss->swork[4] = boss->swork[5] = boss->swork[6] = 1000;
                    boss->info.hitbox[1 + 30] = 100000.0f;

                    for (var_s1 = 0; var_s1 < 3; var_s1++) {
                        func_800430DC(D_i1_8019B6D8[18 + var_s1 + 2], D_i1_8019B6D8[24 + var_s1 + 2],
                                      D_i1_8019B6D8[30 + var_s1 + 2], D_i1_8019B6D8[36 + var_s1 + 2],
                                      D_i1_8019B6D8[42 + var_s1 + 2], D_i1_8019B6D8[48 + var_s1 + 2], 0.0f,
                                      (Rand_ZeroOne() * 20.0f), 0.0f, 5.5f, var_s1 + 0x1C,
                                      ((s32) (Rand_ZeroOne() * 30.0f)) + 60.0f);
                    }
                    if (boss->actionState < 5) {
                        boss->actionState = 6;
                        boss->timer_050 = 60;
                    }
                }
            }

            if (boss->timer_050 < 50) {
                boss->timer_050 += 10;
            }

            if ((boss->actionState != 0) && (boss->actionState < 5)) {
                boss->fwork[14] = 0.0f;
                if (Rand_ZeroOne() < 0.5f) {
                    var_v0 = 0x144;
                } else {
                    var_v0 = 0x147;
                }
                func_i1_80187838(boss, boss->obj.pos.x, boss->obj.pos.y + 100.0f, boss->obj.pos.z, var_v0);
            }
            if (boss->actionState < 5) {
                boss->actionState = 0;
                switch ((s32) (Rand_ZeroOne() * 5.0f)) {
                    case 0:
                        boss->swork[31] = 2;
                        break;
                    case 1:
                        boss->swork[31] = 3;
                        break;
                    case 2:
                    case 3:
                    case 4:
                        boss->swork[31] = 4;
                        break;
                }
            }
        } else {
            func_8007A6F0(&boss->obj.pos, 0x29121007);
        }
    }

    if (!(D_801615D0.y < 0.0f)) {

        obj4C = gObjects4C;
        for (var_s1 = 0; var_s1 < 40; var_s1++, obj4C++) {
            if ((obj4C->obj.status == 2) && (obj4C->obj.id == OBJ_4C_162)) {
                if ((fabsf(obj4C->obj.pos.x - D_i1_8019B6D8[20]) < 90.0f) &&
                    (fabsf(obj4C->obj.pos.z - D_i1_8019B6D8[32]) < 90.0f)) {
                    obj4C->unk_46 = 1;
                    break;
                } else if ((fabsf(obj4C->obj.pos.x - D_i1_8019B6D8[23]) < 90.0f) &&
                           (fabsf(obj4C->obj.pos.z - D_i1_8019B6D8[35]) < 90.0f)) {
                    obj4C->unk_46 = 1;
                    break;
                }
            }
        }
        if ((boss->swork[1] == 1000) && !(gGameFrameCount & 3)) {
            func_8007BFFC(D_i1_8019B6D8[3], D_i1_8019B6D8[4], D_i1_8019B6D8[5],
                          (D_i1_8019B6D8[3] - boss->obj.pos.x) * 0.1f, 0.0f,
                          (D_i1_8019B6D8[5] - boss->obj.pos.z) * 0.1f, 1.5f, 5);
        }
        if ((boss->swork[2] == 1000) && !(gGameFrameCount & 3)) {
            func_8007BFFC(D_i1_8019B6D8[9], D_i1_8019B6D8[10], D_i1_8019B6D8[11],
                          (D_i1_8019B6D8[9] - boss->obj.pos.x) * 0.1f, 0.0f,
                          (D_i1_8019B6D8[11] - boss->obj.pos.z) * 0.1f, 1.5f, 5);
        }
        if ((boss->swork[3] == 1000) && !(gGameFrameCount & 3)) {
            func_8007BFFC(D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 0.0f, 20.0f, 0.0f, 2.0f, 5);
        }
        if ((boss->swork[4] == 1000) && !(gGameFrameCount & 3)) {
            func_8007BFFC(D_i1_8019B6D8[56], D_i1_8019B6D8[57], D_i1_8019B6D8[58], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
        if ((boss->swork[7] == 1000) && !(gGameFrameCount & 3)) {
            func_8007BFFC(D_i1_8019B6D8[59], D_i1_8019B6D8[60], D_i1_8019B6D8[61], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
    }
}

s32 func_i1_80188750(Boss* boss) {

    boss->swork[35]++;
    if (boss->swork[35] >= 5) {
        boss->swork[35] = 0;
        return 0xBF;
    }

    if (func_8008AC54(0) < 4) {
        return 0xBE;
    } else {
        return 0;
    }
}

void func_i1_801887AC(Boss* boss) {
    Vec3f sp3C;
    s32 sp38;
    s32 temp_v0;

    if ((gBossFrameCount >= 500)) {
        temp_v0 = boss->swork[30];
        if (temp_v0 != 0) {
            switch (temp_v0) {
                case 1:
                    sp38 = func_i1_80188750(boss);
                    if (sp38 != 0) {
                        if (boss->swork[1] != 1000) {
                            func_i1_80187710(D_i1_8019B6D8[0], D_i1_8019B6D8[1], D_i1_8019B6D8[2], 65.0f, 0.0f,
                                             D_i1_8019B6D8[16] + boss->obj.rot.y, 0, 0, sp38);
                        }
                        if (boss->swork[2] != 1000) {
                            func_i1_80187710(D_i1_8019B6D8[6], D_i1_8019B6D8[7], D_i1_8019B6D8[8], 65.0f, 0.0f,
                                             D_i1_8019B6D8[16] + boss->obj.rot.y, 0, 0, sp38);
                        }
                    }
                    boss->swork[30] = 0;
                    break;
                case 2:
                    func_i1_801877A0(boss, 40.0f, 228.0f, 212.0f);
                    func_i1_801877A0(boss, -40.0f, 228.0f, 212.0f);
                    boss->swork[30] = 0;
                    break;
                case 3:
                    if (boss->swork[3] != 1000) {
                        sp3C.x = gPlayer[0].pos.x;
                        sp3C.y = gPlayer[0].pos.y;
                        sp3C.z = gPlayer[0].unk_138;
                        gPlayer[0].pos.x += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        gPlayer[0].pos.y += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        gPlayer[0].unk_138 += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        func_8007F11C(OBJ_EFFECT_376, D_i1_8019B6D8[12], D_i1_8019B6D8[13], D_i1_8019B6D8[14], 60.0f);
                        gPlayer[0].pos.x = sp3C.x;
                        gPlayer[0].pos.y = sp3C.y;
                        gPlayer[0].unk_138 = sp3C.z;
                    }
                    boss->swork[30] = 0;
                    break;
            }
        }
    }
}

void func_i1_80188A18(Boss* boss) {

    if (boss->timer_050 == 0) {
        boss->actionState = 0;
        boss->timer_050 = (s32) (Rand_ZeroOne() * 20.0f) + 20;
        boss->fwork[14] = 0.0f;

        switch ((s32) (Rand_ZeroOne() * 8.0f)) {
            case 0:
            case 1:
                boss->swork[31] = 1;
                break;
            case 2:
            case 3:
                boss->swork[31] = 2;
                break;
            case 4:
                if (D_801615D0.y < 0.0f) {
                    boss->swork[31] = 4;
                } else {
                    boss->swork[31] = 3;
                }
                break;
            case 5:
            case 6:
            case 7:
                boss->swork[31] = 4;
                break;
        }

        if ((gBossFrameCount >= 1001) && (Rand_ZeroOne() < 0.3f)) {
            if (Rand_ZeroOne() < 0.5f) {
                func_8002E4F8(gMsg_ID_2263, RCID_BOSS_CORNERIA);
            } else {
                func_8002E4F8(gMsg_ID_2265, RCID_BOSS_CORNERIA);
            }
        }
    }
    if ((gBossFrameCount >= 801) && !(gBossFrameCount & 0x1FF)) {
        if (D_80177B6C < 2) {
            func_800BA808(gMsg_ID_20237, RCID_PEPPY);
        } else if (D_801615D0.z > 0.0f) {
            func_800BA808(gMsg_ID_2233, RCID_FALCO);
        } else {
            func_800BA808(gMsg_ID_2282, RCID_PEPPY);
        }
    }
}

void func_i1_80188C7C(Boss* boss) {

    if (boss->unk_044 == 0) {
        boss->unk_044++;
        boss->fwork[12] *= -0.2f;
        Audio_PlaySfx(0x19030004, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_80062B60(D_i1_8019B6D8[56], D_i1_8019B6D8[58], 0, 30.0f);
        boss->swork[18] = 13;
        boss->swork[19] = 15;
        boss->swork[21] = 10;
        boss->swork[22] = 12;
        boss->swork[20] = 17;
        D_80178480 = 20;
    } else {
        boss->fwork[12] = 0.0f;
    }
}

void func_i1_80188D50(Boss* boss) {
    static s32 D_i1_801997E0 = 0;
    s32 i;
    Vec3f sp48;
    Vec3f sp3C;
    s32 temp_ft3;

    if (boss->swork[36] == 0) {
        if (gPlayer[0].unk_1F4 != 0) {
            D_i1_801997E0 = 80;
        }

        if (D_i1_801997E0 != 0) {
            D_i1_801997E0--;
        } else if ((gPlayer[0].pos.y < 200.0f) && (boss->actionState < 5) &&
                   (fabsf(boss->obj.pos.x - gPlayer[0].pos.x) < 200.0f) &&
                   (fabsf(boss->obj.pos.z - gPlayer[0].unk_138) < 200.0f) && (gPlayer[0].unk_4D8 > 180.0f)) {
            boss->swork[36]++;
            D_i1_801997E0 = 20;
            Audio_PlaySfx(0x49008025, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if ((gTeamShields[1] > 0) || (gTeamShields[2] > 0) || (gTeamShields[3] > 0)) {
                do {
                    do {
                        temp_ft3 = (s32) (Rand_ZeroOne() * 2.9f) + 1;
                    } while (gTeamShields[temp_ft3] <= 0);
                } while (0);

                switch (temp_ft3) {
                    case 1:
                        func_800BA808(gMsg_ID_7100, RCID_FALCO);
                        break;
                    case 2:
                        func_800BA808(gMsg_ID_15252, RCID_SLIPPY);
                        break;
                    case 3:
                        func_800BA808(gMsg_ID_17160, RCID_PEPPY);
                        break;
                }
            }
            Matrix_RotateY(gCalcMatrix, (gPlayer[0].unk_114 + gPlayer[0].unk_0E8) * M_DTOR, 0);
            sp48.x = 0.0f;
            sp48.y = 0.0f;
            sp48.z = -2500.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp48, &sp3C);
            for (i = 0; i < ARRAY_COUNT(gItems); i++) {
                if (gItems[i].obj.status == 0) {
                    Item_Initialize(&gItems[i]);
                    gItems[i].obj.status = 1;
                    gItems[i].obj.id = OBJ_ITEM_1UP;
                    gItems[i].obj.pos.x = gPlayer[0].pos.x + sp3C.x;
                    gItems[i].obj.pos.y = gPlayer[0].pos.y + 100.0f;
                    gItems[i].obj.pos.z = gPlayer[0].unk_138 + sp3C.z;
                    gItems[i].timer_4A = 8;
                    Object_SetInfo(&gItems[i].info, gItems[i].obj.id);
                    func_8007B344(gItems[i].obj.pos.x, gItems[i].obj.pos.y, gItems[i].obj.pos.z, 5.0f, 0);
                    break;
                }
            }
        }
    }
}

extern AnimationHeader D_602BC18;
extern AnimationHeader D_602C0D0;

static Vec3f D_i1_801997E4 = { 0.0f, 0.0f, 0.0f };
static Vec3f D_i1_801997F0 = { 0.0f, 0.0f, 5.0f };
static Vec3f D_i1_801997FC = { 0.0f, 0.0f, 40.0f };
static Vec3f D_i1_80199808 = { 0.0f, 0.0f, -30.0f };

#ifdef NON_MATCHING
// Stack issues https://decomp.me/scratch/ZsX2L
void func_i1_80189058(Boss* boss) {
    Vec3f sp21C;
    s32 sp218;

    f32 sp214;
    f32 sp210;
    f32 sp20C;
    s32 var_v0;
    s32 pad_sp204;
    f32 sp200;
    f32 sp1FC;
    s32 pad_sp1F8;

    Vec3f sp1EC;
    Vec3f sp84[30];
    Vec3f sp78;
    Vec3f sp6C;
    f32 sp5C;

    sp21C = D_i1_801997E4;
    sp1EC = D_i1_801997F0;
    sp78 = D_i1_801997FC;
    sp6C = D_i1_80199808;

    if (gPlayer[0].state_1C8 != 9) {
        if (boss->swork[33] == 0) {
            boss->swork[33]++;
            D_80178284 = 2;

            boss->unk_05E = 1;
            boss->swork[24] = 150;
            boss->swork[25] = 150;
            boss->swork[26] = 40;
            boss->swork[27] = 40;
            boss->swork[28] = 40;
            boss->swork[29] = 130;
            boss->info.hitbox[1 + 0] = -241.0f;
            boss->info.hitbox[1 + 6] = 0.0f;
            boss->info.hitbox[1 + 12] = 0.0f;
            boss->info.hitbox[1 + 18] = 0.0f;
            boss->info.hitbox[1 + 24] = 0.0f;
            boss->info.hitbox[1 + 30] = 0.0f;
            boss->timer_052 = 100;
            boss->actionState = 0;
            boss->swork[31] = 1;
            D_i1_8019B6D8[66] = 0.0f;
            D_i1_8019B6D8[67] = 10000.0f;
            boss->timer_050 = 30;
            Animation_GetFrameData(&D_602C0D0, 0, boss->vwork);
            gBossFrameCount = 0;
        }
        gBossFrameCount++;
        gUnkEntities28[59].unk_00 = 1;
        gUnkEntities28[59].unk_02 = 0x66;
        gUnkEntities28[59].pos.x = boss->obj.pos.x;
        gUnkEntities28[59].pos.y = boss->obj.pos.y;
        gUnkEntities28[59].pos.z = boss->obj.pos.z;

        gUnkEntities28[59].unk_10 = boss->obj.rot.y + 180.0f;
        func_i1_80188D50(boss);
        if (D_801615D0.z > 0.0f) {
            if (D_801615D0.x > 0.0f) {
                gPlayer[0].unk_228 = 0x10;
            } else {
                gPlayer[0].unk_228 = 0x20;
            }
        }

        switch (gBossFrameCount) {
            case 20:
                func_800BA808(gMsg_ID_2240, RCID_BOSS_CORNERIA);
                break;
            case 160:
                func_800BA808(gMsg_ID_2250, RCID_BOSS_CORNERIA);
                break;
            case 330:
                func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
                break;
            case 486:
                gShowBossHealth = 1;
                break;
            case 500:
                func_800BA808(gMsg_ID_2260, RCID_BOSS_CORNERIA);
                break;
            case 900:
                func_800BA808(gMsg_ID_2230, RCID_PEPPY);
                break;
            case 3840:
                if (boss->actionState < 5) {
                    func_800BA808(gMsg_ID_2230, RCID_PEPPY);
                }
                break;
        }

        if (gBossFrameCount >= 487) {
            gBossHealthBar = boss->swork[29] * 2;
        }

        for (sp218 = 0; sp218 < 24; sp218++) {

            if ((boss->swork[sp218] != 0) && (boss->swork[sp218] < 1000)) {
                boss->swork[sp218]--;
            }
        }

        func_i1_80187AC8(boss);
        boss->fwork[0] = __sinf(boss->swork[18] * 50.0f * M_DTOR) * func_i1_80187A88(boss->swork[18]);
        boss->fwork[1] = __sinf(boss->swork[19] * 50.0f * M_DTOR) * func_i1_80187A88(boss->swork[19]);
        boss->fwork[2] = __sinf(boss->swork[20] * 50.0f * M_DTOR) * func_i1_80187A88(boss->swork[20]);
        boss->fwork[3] = __sinf(boss->swork[21] * 50.0f * M_DTOR) * func_i1_80187A88(boss->swork[21]);
        boss->fwork[4] = __sinf(boss->swork[22] * 50.0f * M_DTOR) * func_i1_80187A88(boss->swork[22]);

        if (boss->actionState < 5) {
            sp5C = __sinf(boss->swork[23] * 12.0f * M_DTOR) * func_i1_80187A88(boss->swork[23]) * 0.3f;
            Math_SmoothStepToF(&boss->obj.rot.z, sp5C, 0.2f, 100.0f, 0.001f);
        }
        if (boss->obj.pos.y <= 10.0f) {
            boss->obj.pos.y = 10.0f;
        }
        sp214 = D_i1_8019B6D8[17] - boss->obj.pos.x;
        sp210 = D_i1_8019B6D8[18] - (boss->obj.pos.y + 300.0f);
        sp20C = D_i1_8019B6D8[19] - boss->obj.pos.z;
        sp1FC = Math_RadToDeg(Math_Atan2F(sp214, sp20C));
        sp200 = Math_RadToDeg(-Math_Atan2F(sp210, sqrtf(SQ(sp214) + SQ(sp20C))));

        if ((sp200 > 50.0f) && (sp200 < 180.0f)) {
            sp200 = 50.0f;
        }
        if ((sp200 < 310.0f) && (sp200 > 180.0f)) {
            sp200 = 310.0f;
        }
        sp1FC -= boss->obj.rot.y;
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
        if (boss->actionState != 0) {
            Math_SmoothStepToAngle(
                &boss->obj.rot.y,
                Math_RadToDeg(Math_Atan2F(D_i1_8019B6D8[66] - boss->obj.pos.x, D_i1_8019B6D8[67] - boss->obj.pos.z)),
                0.1f, 3.0f, 0.0f);
        }
        Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * M_DTOR, 0U);

        switch (boss->actionState) {
            case 0:
                boss->unk_04C = 0;
                D_i1_8019B6D8[17] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = gPlayer[0].unk_138;
                if (boss->timer_050 == 0) {
                    switch (boss->swork[31]) {
                        case 1:
                            boss->actionState = 1;
                            boss->timer_050 = (s32) (Rand_ZeroOne() * 50.0f) + 50;
                            boss->fwork[14] = 0.0f;
                            break;
                        case 2:
                            boss->actionState = 2;
                            boss->timer_050 = (s32) (Rand_ZeroOne() * 100.0f) + 150;
                            boss->timer_052 = 40;
                            boss->timer_054 = 40;
                            boss->fwork[14] = 0.07f;
                            break;
                        case 4:
                            boss->actionState = 4;
                            boss->timer_050 = (s32) (Rand_ZeroOne() * 70.0f) + 100;
                            boss->fwork[14] = 0.1f;
                            D_i1_8019B6D8[66] = (Rand_ZeroOne() - 0.5f) * 6000.0f;
                            D_i1_8019B6D8[67] = (Rand_ZeroOne() - 0.5f) * 6000.0f;
                            boss->fwork[14] = 0.07f;
                            break;
                        case 3:
                            boss->actionState = 3;
                            boss->timer_050 = (s32) (Rand_ZeroOne() * 100.0f) + 150;
                            boss->fwork[14] = 0.07f;
                            break;
                    }
                }
                Animation_GetFrameData(&D_602C0D0, boss->unk_04C, sp84);
                if (boss->timer_052 == 0) {
                    boss->timer_052 = 150;
                    boss->swork[30] = 1;
                }
                break;
            case 1:
                D_i1_8019B6D8[17] = D_i1_8019B6D8[66] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = D_i1_8019B6D8[67] = gPlayer[0].unk_138;

                boss->unk_04C += 2;
                if (boss->unk_04C >= Animation_GetFrameCount(&D_602BC18)) {
                    boss->unk_04C = 0;
                }
                Animation_GetFrameData(&D_602BC18, boss->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp1EC, &sp21C);
                if (boss->timer_052 == 0) {
                    boss->timer_052 = 150;
                    boss->swork[30] = 1;
                }
                func_i1_80188A18(boss);
                break;
            case 2:
                D_i1_8019B6D8[17] = D_i1_8019B6D8[66] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = D_i1_8019B6D8[67] = gPlayer[0].unk_138;

                boss->unk_04C -= 4;
                if (boss->unk_04C < 0) {
                    boss->unk_04C = 100;
                }
                Animation_GetFrameData(&D_602BC18, boss->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp6C, &sp21C);
                if (boss->timer_052 == 0) {
                    boss->timer_052 = 30;
                    boss->swork[30] = 2;
                }
                if (boss->timer_054 == 0) {
                    boss->timer_054 = 9;
                    boss->swork[30] = 3;
                }
                func_i1_80188A18(boss);
                break;
            case 3:
                D_i1_8019B6D8[17] = D_i1_8019B6D8[66] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = D_i1_8019B6D8[67] = gPlayer[0].unk_138;

                boss->unk_04C += 4;
                if (boss->unk_04C >= 101) {
                    boss->unk_04C = 0;
                }
                Animation_GetFrameData(&D_602BC18, boss->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp21C);
                if (boss->timer_052 == 0) {
                    boss->timer_052 = 30;
                    boss->swork[30] = 2;
                }
                if (boss->timer_054 == 0) {
                    boss->timer_054 = 9;
                    boss->swork[30] = 3;
                }
                func_i1_80188A18(boss);
                break;
            case 4:
                D_i1_8019B6D8[17] = gPlayer[0].pos.x;
                D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                D_i1_8019B6D8[19] = gPlayer[0].unk_138;

                boss->unk_04C += 4;
                if (boss->unk_04C >= 101) {
                    boss->unk_04C = 0;
                }
                Animation_GetFrameData(&D_602BC18, boss->unk_04C, sp84);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp21C);
                func_i1_80188A18(boss);
                break;
            case 5:
            case 6:
                boss->unk_05E = 0;
                D_8017812C = 1;
                if (!(gGameFrameCount & 7)) {
                    D_i1_8019B6D8[17] = ((Rand_ZeroOne() - 0.5f) * 2000.0f) + gPlayer[0].pos.x;
                    D_i1_8019B6D8[18] = gPlayer[0].pos.y;
                    D_i1_8019B6D8[19] = ((Rand_ZeroOne() - 0.5f) * 2000.0f) + gPlayer[0].unk_138;
                }
                boss->fwork[12] += 0.05f;
                if (boss->actionState == 6) {
                    boss->obj.rot.z += boss->fwork[12];
                    if (boss->obj.rot.z > 60.0f) {
                        boss->obj.rot.z = 60.0f;
                        func_i1_80188C7C(boss);

                        if ((gGameFrameCount & 0x1FF) == 0) {
                            func_800BA808(gMsg_ID_2275, RCID_BOSS_CORNERIA);
                        }

                        if ((gGameFrameCount & 0x1FF) == 0x100) {
                            func_800BA808(gMsg_ID_2220, RCID_BOSS_CORNERIA);
                        }
                    }
                    boss->obj.rot.x = boss->obj.rot.z;
                } else {
                    boss->obj.rot.z -= boss->fwork[12];
                    if (boss->obj.rot.z < -60.0f) {
                        boss->obj.rot.z = -60.0f;
                        func_i1_80188C7C(boss);

                        if ((gGameFrameCount & 0x1FF) == 0) {
                            func_800BA808(gMsg_ID_2275, RCID_BOSS_CORNERIA);
                        }
                        if ((gGameFrameCount & 0x1FF) == 0x100) {
                            func_800BA808(gMsg_ID_2220, RCID_BOSS_CORNERIA);
                        }
                    }
                    boss->obj.rot.x = -boss->obj.rot.z;
                }
                if (boss->timer_050 == 0) {
                    s32 temp_v0_3;

                    boss->timer_050 = 60;
                    temp_v0_3 = func_i1_80188750(boss);

                    if (temp_v0_3 != 0) {
                        func_i1_80187710(D_i1_8019B6D8[62], D_i1_8019B6D8[63], D_i1_8019B6D8[64], 65.0f, 270.0f, 0.0f,
                                         0, 0, temp_v0_3);
                    }
                }

                boss->unk_068 = __sinf(boss->obj.rot.z * M_DTOR) * 30.0f;
                if (!(gGameFrameCount & 0xF)) {
                    boss->unk_04C = (s32) (Rand_ZeroOne() * 100.0f);
                }
                Animation_GetFrameData(&D_602BC18, boss->unk_04C, sp84);
                boss->fwork[14] = 0.03f;
                break;
            case 7:
                if (boss->swork[32] != 0) {
                    boss->fwork[12] += 0.05f;
                    boss->obj.rot.x += boss->fwork[12];
                    if (boss->obj.rot.x > 60.0f) {
                        boss->obj.rot.x = 60.0f;
                        func_i1_80188C7C(boss);
                    }
                }

                boss->swork[24] = boss->swork[25] = boss->swork[26] = boss->swork[27] = boss->swork[28] = 0;

                if (boss->timer_050 == 12) {
                    Object_Kill(&gEffects[0].obj, &gEffects[0].sfxPos);
                    func_8007D0E0(D_i1_8019B6D8[62], D_i1_8019B6D8[63] - 100.0f, D_i1_8019B6D8[64], 25.0f);
                }
                if (boss->timer_050 == 10) {
                    for (sp218 = 0; sp218 < 50; sp218++) {
                        if (gEffects[sp218].obj.status != 0) {
                            Object_Kill(&gEffects[sp218].obj, &gEffects[sp218].sfxPos);
                        }
                    }
                    func_8007A568(D_i1_8019B6D8[62], D_i1_8019B6D8[63] - 100.0f, D_i1_8019B6D8[64], 40.0f);
                    func_8007D0E0(D_i1_8019B6D8[62], D_i1_8019B6D8[63] - 100.0f, D_i1_8019B6D8[64], 30.0f);
                    func_80062B60(D_i1_8019B6D8[62], D_i1_8019B6D8[64], 0, 120.0f);
                    D_80178480 = 25;
                    gShowBossHealth = 0;

                    for (sp218 = 0; sp218 < 100; sp218++) {
                        func_80079618(D_i1_8019B6D8[62] + ((Rand_ZeroOne() - 0.5f) * 600.0f),
                                      (D_i1_8019B6D8[63] + ((Rand_ZeroOne() - 0.5f) * 500.0f)) - 100.0f,
                                      D_i1_8019B6D8[64] + ((Rand_ZeroOne() - 0.5f) * 600.0f), 2.0f);
                    }
                }
                if (boss->timer_050 < 50) {
                    boss->dmgPart = boss->timer_050 & 7;

                    switch (boss->dmgPart) {
                        case 1:
                            if (boss->swork[2] != 1000) {
                                boss->dmgType = DMG_BEAM;
                            }
                            break;
                        case 2:
                            if (boss->swork[1] != 1000) {
                                boss->dmgType = DMG_BEAM;
                            }
                        case 3:
                            if (boss->swork[3] != 1000) {
                                boss->dmgType = DMG_BEAM;
                            }
                            break;
                        case 4:
                            if (boss->swork[7] != 1000) {
                                boss->dmgType = DMG_BEAM;
                            }
                        case 5:
                            if (boss->swork[4] != 1000) {
                                boss->dmgType = DMG_BEAM;
                            }
                            break;
                    }
                }
                if (boss->timer_050 == 0) {
                    Object_Kill(&boss->obj, &boss->sfxPos);
                }
                Animation_GetFrameData(&D_602BC18, 0, sp84);
                break;
            default:
                Animation_GetFrameData(&D_602C0D0, boss->unk_04C, sp84);
                break;
        }
        Math_SmoothStepToF(&boss->vel.x, sp21C.x, 0.3f, 5.0f, 0.0f);
        Math_SmoothStepToF(&boss->vel.z, sp21C.z, 0.3f, 5.0f, 0.0f);
        func_i1_801887AC(boss);
        Math_SmoothStepToVec3fArray(sp84, boss->vwork, 1, 19, boss->fwork[14], 100.0f, 0.0f);
        Math_SmoothStepToF(&boss->fwork[14], 1.0f, 1.0f, 0.01f, 0.0f);

        if (boss->actionState < 5) {
            if (((fabsf(boss->obj.pos.x) > 4000.0f) || (fabsf(boss->obj.pos.z) > 4000.0f)) &&
                (boss->actionState != 4)) {
                boss->actionState = 4;
                boss->timer_050 = 150;
                D_i1_8019B6D8[66] = 0.0f;
                D_i1_8019B6D8[67] = 0.0f;
                boss->swork[31] = 0;
            }
            if ((boss->actionState != 0) && ((boss->unk_04C == 0) || (boss->unk_04C == 52))) {
                Audio_PlaySfx(0x29022019U, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if ((gPlayer[0].unk_4DC != 0) && (boss->actionState != 0)) {
                boss->actionState = 0;
                boss->swork[31] = 1;
                boss->timer_050 = 100;
                boss->fwork[14] = 0.0f;
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/fox_co/func_i1_80189058.s")
#endif

s32 func_i1_8018A434(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Boss* boss = (Boss*) arg4;

    if (boss->swork[arg0] == 1000) {
        *arg1 = 0;
    }

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, 1001);
    switch (arg0) {
        case 6:
            arg3->x += boss->fwork[1];
            arg3->y += boss->fwork[1];
            arg3->y -= boss->fwork[13] * 0.6f;
            break;
        case 5:
            arg3->x -= boss->fwork[1];
            arg3->y -= boss->fwork[1];
            arg3->z += boss->fwork[1];
            break;
        case 4:
            arg3->x += boss->fwork[1];
            arg3->y += boss->fwork[1];
            arg3->z -= boss->fwork[1];
            break;
        case 9:
            arg3->x -= boss->fwork[0];
            arg3->y -= boss->fwork[0];
            arg3->y += boss->fwork[13];
            break;
        case 8:
            arg3->x += boss->fwork[0];
            arg3->y += boss->fwork[0];
            arg3->z -= boss->fwork[0];
            break;
        case 7:
            arg3->x -= boss->fwork[0];
            arg3->y -= boss->fwork[0];
            arg3->z += boss->fwork[0];
            break;
        case 3:
            arg3->x += boss->fwork[2];
            arg3->y += boss->fwork[2];
            arg3->z += D_i1_8019B6D8[15];
            break;
        case 1:
            arg3->x += boss->fwork[4] - D_i1_8019B6D8[15];
            arg3->y += boss->fwork[4];
            break;
        case 2:
            arg3->x += boss->fwork[3] + D_i1_8019B6D8[15];
            arg3->y += boss->fwork[3];
            break;
        case 16:
            arg3->x += D_i1_8019B6D8[16];
            break;
    }
    if ((boss->swork[arg0] & 1) || (boss->timer_05C & 1)) {
        RCP_SetupDL_64();
        GPC(64, 64, 255, 255);
    }
    return false;
}

static Vec3f D_i1_80199814 = { 0.0f, 0.0f, 0.0f };
static Vec3f D_i1_80199820 = { 75.0f, 0.0f, 0.0f };
static Vec3f D_i1_8019982C = { 190.0f, 0.0f, 0.0f };
static Vec3f D_i1_80199838 = { 96.0f, 34.0f, 0.0f };
static Vec3f D_i1_80199844 = { 70.0f, 170.0f, 11.0f };
static Vec3f D_i1_80199850 = { 70.0f, -170.0f, 11.0f };
static Vec3f D_i1_8019985C = { 64.0f, 0.0f, -236.0f };

void func_i1_8018A730(s32 arg0, Vec3f* arg1, void* arg2) {
    s32 pad;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C;

    sp80 = D_i1_80199814;
    sp68 = D_i1_80199820;
    sp5C = D_i1_8019982C;
    sp50 = D_i1_80199838;
    sp44 = D_i1_80199844;
    sp38 = D_i1_80199850;
    sp2C = D_i1_8019985C;

    if ((arg0 >= 4) && (arg0 < 10)) {
        Matrix_MultVec3f(gCalcMatrix, &sp80, &sp74);

        D_i1_8019B6D8[arg0 + 16] = sp74.x;
        D_i1_8019B6D8[arg0 + 22] = sp74.y;
        D_i1_8019B6D8[arg0 + 28] = sp74.z;
        Matrix_GetYRPAngles(gCalcMatrix, &sp74);
        D_i1_8019B6D8[arg0 + 34] = sp74.x;
        D_i1_8019B6D8[arg0 + 40] = sp74.y;
        D_i1_8019B6D8[arg0 + 46] = sp74.z;
    }
    switch (arg0) {
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

extern Limb* D_602BE64[];

void func_i1_8018AA74(Boss* boss) {
    Matrix_Translate(gCalcMatrix, 0.0f, 700.0f, 0.0f, (u8) 1);
    Animation_DrawSkeleton(2, D_602BE64, boss->vwork, func_i1_8018A434, func_i1_8018A730, boss, gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
}

s32 func_i1_8018AB08(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Actor* actor = (Actor*) arg4;

    if (arg0 == 1) {
        arg3->x += actor->fwork[1];
    }
    if ((arg0 == 3) && (actor->obj.id == OBJ_ACTOR_176)) {
        arg3->x += actor->fwork[1];
    }
    return false;
}

static Vec3f D_i1_80199868 = { 0.0f, -10.0f, 0.0f };

s32 func_i1_8018AB64(Actor* actor) {
    s32 pad[2];
    s32 i;
    s32 temp_v0;
    Vec3f sp7C;
    Vec3f sp70 = D_i1_80199868;
    f32 sp60[4] = { 130.0f, -130.0f, 0.0f, 0.0f };
    f32 sp50[4] = { 0.0f, 0.0f, 130.0f, -130.0f };

    for (i = 0; i < 4; i++) {
        sp7C.x = sp60[i] + actor->obj.pos.x;
        sp7C.y = actor->obj.pos.y;
        sp7C.z = sp50[i] + actor->obj.pos.z;
        temp_v0 = func_8006351C(actor->index, &sp7C, &sp70, 1);
        if ((temp_v0 != 0) && (temp_v0 >= 10)) {
            if ((gObjects80[temp_v0 - 10].obj.status == 2) && (gObjects80[temp_v0 - 10].obj.id == OBJ_80_40)) {
                return temp_v0 - 9;
            }
        }
    }
    return 0;
}

void func_i1_8018ACE0(Actor* actor) {

    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if (actor->unk_0D2 == 0) {
            Audio_PlaySfx(0x29034003, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_8007C120(actor->obj.pos.x, actor->obj.pos.y + 200.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                          actor->vel.z, 0.1f, 20);
            actor->timer_0C6 = 15;
            actor->unk_0CE -= actor->unk_0D6;
            if (actor->unk_0CE <= 0) {
                actor->obj.id = OBJ_ACTOR_179;
                Object_SetInfo(&actor->info, actor->obj.id);
                actor->unk_0B8 = 100;
                actor->timer_0BC = 10;
                actor->timer_0CA[0] = 0;
                actor->vel.x = actor->vel.y = actor->vel.z = 0.0f;
            }
        }
    }
    if ((actor->unk_0CE < 11) && !(gGameFrameCount & 3)) {
        func_8007D2C8(((Rand_ZeroOne() - 0.5f) * 100.0f) + actor->obj.pos.x,
                      ((Rand_ZeroOne() - 0.5f) * 100.0f) + (actor->obj.pos.y + 200.0f),
                      (Rand_ZeroOne() * 50.0f) + (actor->obj.pos.z + 50.0f), 3.0f);
        func_8007C120(actor->obj.pos.x, actor->obj.pos.y + 200.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                      actor->vel.z, 0.1f, 10);
    }
}

extern AnimationHeader D_602991C;
extern Gfx D_60329C0[];

void func_i1_8018AED0(Actor* actor) {
    Vec3f sp40[20];
    f32 temp_sin;
    f32 temp_cos;

    func_i1_8018ACE0(actor);
    Math_SmoothStepToVec3fArray(sp40, actor->vwork, 0, Animation_GetFrameData(&D_602991C, actor->unk_0B6, sp40), 1.0f,
                                1.0f, 1.0f);
    temp_sin = __sinf(actor->obj.rot.y * M_DTOR);
    actor->vel.x = actor->fwork[0] * temp_sin;
    temp_cos = __cosf(actor->obj.rot.y * M_DTOR);
    actor->vel.z = actor->fwork[0] * temp_cos;
    switch (actor->unk_0B8) {
        case 0:
            actor->fwork[1] += 20.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            actor->unk_0B6 = 0;
            actor->fwork[0] += 1.0f;
            if (actor->fwork[0] > 10.0f) {
                actor->fwork[0] = 10.0f;
            }

            actor->iwork[0] = func_i1_8018AB64(actor);
            if (actor->iwork[0] != 0) {
                actor->unk_0B8++;
                return;
            }
            return;
        case 1:
            actor->unk_0B6++;
            actor->fwork[1] += 20.0f;
            actor->fwork[0] = 0.0f;
            if (actor->unk_0B6 == 50) {
                gObjects80[actor->iwork[0] - 1].unk_48 = 1;
            }
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_602991C)) {
                actor->unk_0B8++;
            }
            break;
        case 2:
            actor->unk_0B6 = 0;
            actor->fwork[1] += 20.0f;
            break;
    }
}

void func_i1_8018B0B4(Actor* actor) {
    s32 i;

    for (i = 0; i < 50; i++) {
        if (gObjects80[i].obj.status == 0) {
            Object_80_Initialize(&gObjects80[i]);
            gObjects80[i].obj.status = 1;
            gObjects80[i].obj.id = OBJ_80_42;
            gObjects80[i].obj.pos.x = actor->obj.pos.x;
            gObjects80[i].obj.pos.y = actor->obj.pos.y;
            gObjects80[i].obj.pos.z = actor->obj.pos.z;
            gObjects80[i].obj.rot.y = actor->obj.rot.y;
            Object_SetInfo(&gObjects80[i].info, gObjects80[i].obj.id);
            actor->iwork[0] = i;
            return;
        }
    }
}

extern AnimationHeader D_602AA04;

void func_i1_8018B15C(Actor* actor) {
    Vec3f sp60[20];
    Vec3f sp54;
    Vec3f sp48;
    Object_80* temp_s1;
    f32 temp_sin;
    f32 temp_cos;

    func_i1_8018ACE0(actor);
    temp_s1 = &gObjects80[actor->iwork[0]];
    temp_sin = __sinf(actor->obj.rot.y * M_DTOR);
    actor->vel.x = actor->fwork[0] * temp_sin;
    temp_cos = __cosf(actor->obj.rot.y * M_DTOR);
    actor->vel.z = actor->fwork[0] * temp_cos;
    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);

    switch (actor->unk_0B8) {
        case 3:
            break;
        case 0:
            actor->timer_0BC = 40;
            actor->unk_0B8 = 1;
            actor->unk_0B6 = 0;
            break;
        case 1:
            actor->fwork[0] = -10.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            if (actor->timer_0BC == 0) {
                actor->unk_0B8 = 2;
                actor->iwork[2] = (s32) (Rand_ZeroOne() * 10.0f) + 10;
            }
            break;
        case 2:
            actor->fwork[0] = -10.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            actor->unk_0B6++;
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_602AA04)) {
                actor->unk_0B8 = 3;
            }
            if (actor->unk_0B6 == (Animation_GetFrameCount(&D_602AA04) - actor->iwork[2])) {
                actor->iwork[1] = 1;
                temp_s1->unk_48 = 1;
                sp54.x = 0.0f;
                sp54.y = 0.0f;
                sp54.z = 30.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
                temp_s1->vel.x = sp48.x;
                temp_s1->vel.y = sp48.y;
                temp_s1->vel.z = sp48.z;
                Audio_PlaySfx(0x2902401C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
    }
    if (actor->iwork[1] == 0) {
        temp_s1->obj.pos.x = actor->fwork[2];
        temp_s1->obj.pos.y = actor->fwork[6];
        temp_s1->obj.pos.z = actor->fwork[10];
        temp_s1->obj.rot.y = actor->obj.rot.y;
        temp_s1->vel.y = 0.0f;
    }
    Math_SmoothStepToVec3fArray(sp60, actor->vwork, 0, Animation_GetFrameData(&D_602AA04, actor->unk_0B6, sp60), 1.0f,
                                1.0f, 1.0f);
}

extern AnimationHeader D_602A520;

void func_i1_8018B418(Actor* actor) {
    s32 pad;
    Vec3f sp54[20];
    Object_80* temp_v0_2;
    f32 temp_sin;
    f32 temp_cos;
    s32 pad2[4];

    func_i1_8018ACE0(actor);
    temp_sin = __sinf(actor->obj.rot.y * M_DTOR);
    actor->vel.x = actor->fwork[0] * temp_sin;
    temp_cos = __cosf(actor->obj.rot.y * M_DTOR);
    actor->vel.z = actor->fwork[0] * temp_cos;
    switch (actor->unk_0B8) {
        case 0:
            actor->unk_0B8 = 1;
            break;
        case 1:
            actor->fwork[0] = 5.0f;
            actor->fwork[1] += 5.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            actor->unk_0B6++;
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_602A520)) {
                actor->unk_0B6 = 0;
            }
            break;
    }
    if (actor->iwork[1] == 0) {
        temp_v0_2 = &gObjects80[actor->iwork[0]];
        temp_v0_2->obj.pos.x = actor->fwork[2];
        temp_v0_2->obj.pos.y = actor->fwork[6];
        temp_v0_2->obj.pos.z = actor->fwork[10];
        temp_v0_2->obj.rot.y = actor->fwork[1];
        temp_v0_2->vel.y = 0.0f;
    }
    Math_SmoothStepToVec3fArray(sp54, actor->vwork, 0, Animation_GetFrameData(&D_602A520, actor->unk_0B6, sp54), 1.0f,
                                1.0f, 1.0f);
}

void func_i1_8018B58C(Actor* actor) {
    s32 i;
    f32 spB4[4] = { -10.0f, -5.0f, 10.0f, 5.0f };
    f32 spA4[4] = { 10.0f, 15.0f, 10.0f, 15.0f };

    Math_SmoothStepToF(&actor->vel.x, 0.0f, 0.05f, 1.0f, 0.0001f);
    Math_SmoothStepToF(&actor->vel.y, 0.0f, 0.05f, 1.0f, 0.0001f);
    Math_SmoothStepToF(&actor->vel.z, 0.0f, 0.05f, 1.0f, 0.0001f);

    switch (actor->unk_0B8) {
        case 100:
            if (!(actor->timer_0BC & 3)) {

                func_8007D2C8(((Rand_ZeroOne() - 0.5f) * 100.0f) + actor->obj.pos.x,
                              ((Rand_ZeroOne() - 0.5f) * 100.0f) + (actor->obj.pos.y + 200.0f),
                              (Rand_ZeroOne() * 50.0f) + (actor->obj.pos.z + 50.0f), 3.0f);
                func_8007C120(actor->obj.pos.x, actor->obj.pos.y + 200.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y,
                              actor->vel.z, 0.1f, 10);
                Audio_PlaySfx(0x2903A008, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (actor->timer_0BC == 0) {

                for (i = 0; i < 4; i++) {

                    func_800430DC(actor->fwork[2 + i], actor->fwork[6 + i], actor->fwork[10 + i], 0.0f, 0.0f, 0.0f,
                                  spB4[i] * ((Rand_ZeroOne() * 0.75f) + 0.5f),
                                  spA4[i] * ((Rand_ZeroOne() * 0.75f) + 0.5f), (Rand_ZeroOne() - 0.5f) * 20.0f, 3.0f,
                                  i + 0x18, ((s32) (Rand_ZeroOne() * 30.0f) + 60.0f));
                }

                if ((fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 500.0f) &&
                    (fabsf(actor->obj.pos.x - gPlayer[0].pos.x) < 200.0f) &&
                    (fabsf(actor->obj.pos.y - gPlayer[0].pos.y) < 200.0f)) {
                    *D_Timer_80177BD0 = 25;
                }
                func_80077240(actor->obj.pos.x, actor->obj.pos.y + 250.0f, actor->obj.pos.z, 5);
                gHitCount += 6;
                D_80177850 = 15;
                actor->unk_0B8 = 101;
                actor->timer_0BE = 50;
            }
            if (actor->timer_0BC == 8) {
                func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 200.0f, actor->obj.pos.z + 50.0f, 0.0f, 0.0f, 0.0f,
                              5.0f, 30);
                Audio_PlaySfx(0x2903B009, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 101:
            if ((actor->timer_0BE != 0) && !(gGameFrameCount & 1)) {
                func_8007797C(actor->obj.pos.x, actor->obj.pos.y + 150.0f, actor->obj.pos.z, 0.0f, 10.0f, 0.0f, 3.0f);
            }
            break;
    }
}

extern Limb* D_6029A48[];

void func_i1_8018BAAC(Actor* actor) {
    Animation_DrawSkeleton(3, D_6029A48, actor->vwork, func_i1_8018AB08, NULL, actor, gCalcMatrix);
}

static Vec3f D_i1_801998B4 = { 120.0f, 0.0f, 0.0f };

void func_i1_8018BAFC(s32 arg0, Vec3f* arg1, void* arg2) {
    Actor* actor = (Actor*) arg2;
    Vec3f sp28;
    Vec3f sp1C;

    sp28 = D_i1_801998B4;

    if (arg0 == 1) {
        Matrix_MultVec3f(gCalcMatrix, &sp28, &sp1C);
        actor->fwork[2] = sp1C.x;
        actor->fwork[6] = sp1C.y;
        actor->fwork[10] = sp1C.z;
        if (actor->iwork[1] == 0) {
            gObjects80[actor->iwork[0]].obj.rot.x = -arg1->y;
        }
    }
}

void func_i1_8018BBA4(Actor* actor) {
    Animation_DrawSkeleton(3, D_6029A48, actor->vwork, NULL, func_i1_8018BAFC, actor, gCalcMatrix);
}

void func_i1_8018BBF8(Actor* actor) {
    Animation_DrawSkeleton(3, D_6029A48, actor->vwork, func_i1_8018AB08, func_i1_8018BAFC, actor, gCalcMatrix);
}

s32 func_i1_8018BC50(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Actor* actor = (Actor*) arg4;

    if ((actor->unk_0B8 == 101) && (arg0 != 8)) {
        *arg1 = NULL;
    }
    return false;
}

static Vec3f D_i1_801998C0 = { 0.0f, 0.0f, 0.0f };

void func_i1_8018BC84(s32 arg0, Vec3f* arg1, void* arg2) {
    Actor* actor = (Actor*) arg2;
    Vec3f sp28;
    Vec3f sp1C;

    sp28 = D_i1_801998C0;

    Matrix_MultVec3f(gCalcMatrix, &sp28, &sp1C);
    switch (arg0) {
        case 1:
            actor->fwork[2] = sp1C.x;
            actor->fwork[6] = sp1C.y;
            actor->fwork[10] = sp1C.z;
            return;
        case 2:
            actor->fwork[3] = sp1C.x;
            actor->fwork[7] = sp1C.y;
            actor->fwork[11] = sp1C.z;
            return;
        case 3:
            actor->fwork[4] = sp1C.x;
            actor->fwork[8] = sp1C.y;
            actor->fwork[12] = sp1C.z;
            return;
        case 4:
            actor->fwork[5] = sp1C.x;
            actor->fwork[9] = sp1C.y;
            actor->fwork[13] = sp1C.z;
            return;
    }
}

void func_i1_8018BD7C(Actor* actor) {
    Animation_DrawSkeleton(3, D_6029A48, actor->vwork, func_i1_8018BC50, func_i1_8018BC84, actor, gCalcMatrix);
}

void func_i1_8018BDD4(Boss* boss, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6) {
    s32 var_v1;

    var_v1 = 0xBF;

    if (func_8008AC54(0) < 4) {
        var_v1 = 0xBE;
    }

    func_i1_80187710(boss->obj.pos.x + arg1, boss->obj.pos.y + arg2, boss->obj.pos.z + arg3, arg4, boss->obj.rot.x,
                     boss->obj.rot.y, arg5, arg6, var_v1);
}

void func_i1_8018BE7C(Boss* boss) {
    s32 i;
    s16 temp_s1;

    D_80178284 = 1;
    gBossFrameCount = 0;
    boss->unk_05E = 1;
    boss->timer_050 = 354;
    boss->health = 601;
    boss->fwork[18] = -D_80161A54 - 10.0f;
    if (fabsf(gPlayer[0].unk_0AC) < 1.0f) {
        boss->timer_05A = 30000;
        boss->obj.pos.z = (gPlayer[0].camEye.z - D_80177D20) - 2000.0f;
        Audio_PlaySfx(0x31038018, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_i1_8019B6D0 = 0;
    } else {
        D_i1_8019B6D0 = 1;
        boss->obj.rot.y = 180.0f;
        boss->fwork[6] = 800.0f;
        boss->obj.pos.z = gPlayer[0].unk_138 + 2000.0f;
        boss->fwork[7] = boss->obj.pos.x;
        boss->fwork[5] = 30.0f;
        Audio_PlaySfx(0x31038018, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        boss->swork[10] = 3;
        boss->swork[8] = 3;
    }

    temp_s1 = boss->timer_05A;

    // Bosses OBJ_BOSS_294 to OBJ_BOSS_296
    for (i = 1; i < 4; i++) {
        Boss_Initialize(&gBosses[i]);
        gBosses[i].obj.status = 1;
        gBosses[i].obj.id = i + 293;
        gBosses[i].obj.pos.x = boss->obj.pos.x;
        gBosses[i].obj.pos.y = boss->obj.pos.y;
        gBosses[i].obj.pos.z = boss->obj.pos.z;
        gBosses[i].health = 200;
        gBosses[i].unk_05E = 1;
        gBosses[i].timer_05A = temp_s1;
        Object_SetInfo(&gBosses[i].info, gBosses[i].obj.id);
        gBosses[3].unk_05E = 0;
    }
}

void func_i1_8018C0B0(Boss* boss) {
    func_8007D9DC(boss->obj.pos.x, gGroundLevel + 2.0f, boss->obj.pos.z, 5.0f, 100.0f, 0);
    func_8007D9DC(boss->obj.pos.x, gGroundLevel + 2.0f, boss->obj.pos.z, 5.0f, 100.0f, 5);
    func_8007D9DC(boss->obj.pos.x, gGroundLevel + 2.0f, boss->obj.pos.z, 5.0f, 100.0f, 10);
    func_8007ADF4(boss->obj.pos.x, gGroundLevel, boss->obj.pos.z, 1.0f, 10.0f);
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

void func_i1_8018C19C(Boss* boss) {
    // todo: figure out vec3f stack
    s32 pad[9];
    Vec3f sp84[30];
    Vec3f sp78;
    Vec3f sp6C;
    Effect* effect;
    f32 temp_fv0_2;
    s32 pad2;
    s32 var_v1;
    s32 var_v0;
    s32 i;
    s32 pad3;
    f32* temp_a0;
    f32* temp_a1;

    gBossFrameCount++;
    Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, boss->obj.rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 1);
    if (D_i1_8019B6D0 == 0) {
        if (boss->obj.pos.x > 6000.0f) {
            Object_Kill(&boss->obj, &boss->sfxPos);
            for (i = 1; i < ARRAY_COUNT(gBosses); i++) {
                Object_Kill(&gBosses[i].obj, &gBosses[i].sfxPos);
            }
            return;
        }
        sp78.x = 0.0f;
        sp78.y = 0.0f;
        sp78.z = 60.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
        boss->vel.x = sp6C.x;
        boss->vel.y = sp6C.y;
        boss->vel.z = sp6C.z - D_80177D08;
        boss->fwork[16] = 4.0f;
        if (!(gGameFrameCount & 1)) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[0], &sp84[6]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[1], &sp84[7]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_8019992C, &sp84[8]);
            func_8007BC7C(sp84[6].x + boss->obj.pos.x, sp84[6].y + boss->obj.pos.y, sp84[6].z + boss->obj.pos.z, 20.0f);
            func_8007BC7C(sp84[7].x + boss->obj.pos.x, sp84[7].y + boss->obj.pos.y, sp84[7].z + boss->obj.pos.z, 10.0f);
            func_8007BC7C(sp84[8].x + boss->obj.pos.x, sp84[8].y + boss->obj.pos.y, sp84[8].z + boss->obj.pos.z, 10.0f);
        }
    } else {
        if ((gBossFrameCount >= 381) && (gBossFrameCount < 430)) {
            D_80178540 = 5;
            D_80178570 = 20;
            D_80178574 = 20;
            D_80178578 = 20;
            gPlayer[0].unk_23C = 100;
        }
        Matrix_MultVec3f(gCalcMatrix, &D_i1_801998CC, &sp84[0]);
        Matrix_MultVec3f(gCalcMatrix, &D_i1_801998D8, &sp84[1]);
        Matrix_MultVec3f(gCalcMatrix, &D_i1_801998E4, &sp84[2]);

        if (boss->health != 601) {
            var_v1 = boss->health - 601;

            if (var_v1 < 0) {
                var_v1 *= -1;
            }

            for (i = 0; var_v1 >= 60; i++, var_v1 -= 60) {}

            for (var_v0 = 0, var_v1 = 13; var_v0 < i; var_v0++, var_v1++) {
                if ((gGameFrameCount & 0xF) == (var_v0 & 0xF)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_i1_8019995C[var_v0], &sp84[var_v1]);
                    func_8007D0E0(sp84[var_v1].x + boss->obj.pos.x, sp84[var_v1].y + boss->obj.pos.y,
                                  sp84[var_v1].z + boss->obj.pos.z, boss->fwork[17]);
                    func_8007C120(sp84[var_v1].x + boss->obj.pos.x, sp84[var_v1].y + boss->obj.pos.y,
                                  sp84[var_v1].z + boss->obj.pos.z, boss->vel.x, boss->vel.y, boss->vel.z, 0.1f, 7);
                }
            }
        }
        if (boss->dmgType != DMG_NONE) {
            boss->dmgType = DMG_NONE;
            if ((gBosses[1].actionState != 0) && (gBosses[2].actionState != 0) && (gBosses[3].actionState != 0)) {
                if (boss->health >= 2) {
                    boss->timer_05C = 15;
                    boss->health -= boss->damage;
                    if (boss->health < 120) {
                        boss->fwork[17] = 2.8f;
                        Audio_PlaySfx(0x2943500F, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x29034003, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
            } else {
                Audio_PlaySfx(0x29121007, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        boss->vel.z = boss->fwork[18];
        if (boss->actionState > 0) {
            boss->fwork[3] = (gPlayer[0].camEye.z - D_80177D20) - 2500.0f;
        }
        if (boss->actionState != 7) {
            Math_SmoothStepToF(&boss->fwork[4], boss->fwork[5], 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&boss->obj.pos.z, boss->fwork[3], 0.1f, boss->fwork[4], 0.00001f);
        }
        Math_SmoothStepToF(&boss->obj.pos.y, boss->fwork[6], 0.02f, 2.0f, 0.00001f);
        Math_SmoothStepToAngle(&boss->fwork[0], boss->fwork[9], 0.2f, 5.0f, 0.00001f);
        Math_SmoothStepToAngle(&boss->fwork[1], boss->fwork[10], 0.2f, 5.0f, 0.00001f);
        Math_SmoothStepToAngle(&boss->fwork[2], boss->fwork[11], 0.2f, 5.0f, 0.00001f);
        if (boss->actionState < 6) {
            Math_SmoothStepToAngle(&boss->obj.rot.y, boss->fwork[13], 0.03f, boss->fwork[8], 0.00001f);
            Math_SmoothStepToF(&boss->fwork[8], boss->fwork[12], 0.1f, 0.02f, 0.001f);
            Math_SmoothStepToAngle(&boss->obj.rot.z, boss->fwork[14], 0.03f, boss->fwork[15], 0.00001f);
            if (boss->timer_056 == 1) {
                boss->fwork[14] = 0.0f;
                boss->fwork[15] = 0.5f;
            }
        }
        if ((gBosses[1].actionState != 0) && !(gGameFrameCount & 0xF)) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199908, &sp84[5]);
            func_8007D0E0(gBosses[0].obj.pos.x + sp84[5].x, gBosses[0].obj.pos.y + sp84[5].y,
                          gBosses[0].obj.pos.z + sp84[5].z, 5.0f);
        }
        if (gBosses[2].actionState != 0) {
            gBosses[3].unk_05E = 1;
            if (gBosses[3].actionState != 0) {
                if (!(gGameFrameCount & 7)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_i1_80199950, &sp84[11]);
                    func_8007D0E0(gBosses[0].obj.pos.x + sp84[11].x, gBosses[0].obj.pos.y + sp84[11].y,
                                  gBosses[0].obj.pos.z + sp84[11].z, 7.0f);
                }
            } else if (!(gGameFrameCount & 0xF)) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199938, &sp84[9]);
                func_8007D0E0(gBosses[0].obj.pos.x + sp84[9].x, gBosses[0].obj.pos.y + sp84[9].y,
                              gBosses[0].obj.pos.z + sp84[9].z, 5.0f);
            }
        }
        if ((gBosses[3].actionState != 0) && (gBosses[2].actionState == 0) && !(gGameFrameCount & 0xF)) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199944, &sp84[10]);
            func_8007D0E0(gBosses[0].obj.pos.x + sp84[10].x, gBosses[0].obj.pos.y + sp84[10].y,
                          gBosses[0].obj.pos.z + sp84[10].z, 5.0f);
        }

        if (((boss->actionState == 1) || (boss->actionState == 2)) && !(gGameFrameCount & 7)) {
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[0], &sp84[6]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199914[1], &sp84[7]);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_8019992C, &sp84[8]);
            func_8007BC7C(sp84[6].x + boss->obj.pos.x, sp84[6].y + boss->obj.pos.y, sp84[6].z + boss->obj.pos.z, 20.0f);
            func_8007BC7C(sp84[7].x + boss->obj.pos.x, sp84[7].y + boss->obj.pos.y, sp84[7].z + boss->obj.pos.z, 10.0f);
            func_8007BC7C(sp84[8].x + boss->obj.pos.x, sp84[8].y + boss->obj.pos.y, sp84[8].z + boss->obj.pos.z, 10.0f);
        }
        if (boss->timer_052 != 0) {
            Math_SmoothStepToF(&D_801779A8[0], 50.0f, 1.0f, 1.6f, 0.0001f);
        }

        switch (boss->actionState) {
            case 0:
                boss->fwork[3] = gPlayer[0].unk_138 + 1500.0f;
                if (boss->timer_050 == 350) {
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    func_800BA808(gMsg_ID_2290, RCID_BOSS_CORNERIA2);
                }
                if (boss->timer_050 == 180) {
                    func_800BA808(gMsg_ID_2298, RCID_PEPPY);
                    boss->timer_052 = 350;
                }
                if (boss->timer_050 == 0) {
                    boss->obj.pos.y = 900.0f;
                    boss->actionState = 1;
                    boss->fwork[13] = 180.0f;
                    boss->fwork[12] = 1.5f;
                    boss->fwork[6] = 800.0f;
                    boss->fwork[3] = gPlayer[0].camEye.z - D_80177D20 - 2500.0f;
                    boss->fwork[18] = -D_80161A54;
                    func_8001D444(0, 0x8030, 0, 0xFF);
                    boss->timer_050 = 40;
                }
                break;
            case 1:
                if (boss->timer_050 == 0) {
                    boss->actionState = 2;
                    boss->fwork[8] = 0.0f;
                    boss->fwork[13] = 359.9f;
                    boss->timer_050 = 250;
                }
                break;
            case 2:
                if (boss->timer_050 == 0) {
                    boss->actionState = 3;
                    boss->swork[0] = 4;
                    boss->timer_050 = 75;
                    boss->timer_054 = 0;
                    boss->fwork[8] = 0.0f;
                    func_800BA808(gMsg_ID_2291, RCID_BOSS_CORNERIA2);
                    boss->swork[4]++;
                }
                break;
            case 3:
                boss->fwork[12] = 1.5f;
                boss->fwork[11] = 0.0f;
                boss->fwork[9] = 0.0f;
                boss->fwork[10] = 0.0f;
                boss->fwork[13] = 0.0f;
                if (boss->timer_050 == 0) {
                    boss->actionState = boss->swork[0];
                    boss->timer_050 = 60;
                    boss->fwork[8] = 0.0f;
                    Audio_PlaySfx(0x2940201A, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                break;
            case 4:
                boss->fwork[11] = 120.0f;
                boss->fwork[13] = 340.0f;
                if ((boss->timer_050 == 0) || (gBosses[1].actionState != 0)) {
                    boss->actionState = 3;
                    boss->swork[0] = 5;
                    boss->timer_050 = 20;
                    boss->fwork[8] = 0.0f;
                    if (gBosses[1].actionState == 0) {
                        Audio_PlaySfx(0x2940201A, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    if ((boss->swork[5] == 0) && ((gBosses[2].actionState == 0) || (gBosses[3].actionState == 0))) {
                        func_800BA808(gMsg_ID_2292, RCID_BOSS_CORNERIA2);
                    }
                    boss->swork[5]++;
                    boss->swork[5] &= 3;
                } else if ((boss->fwork[2] > 60.0f) && (boss->timer_054 == 0)) {
                    boss->timer_054 = 20;
                    func_i1_8018BDD4(boss, sp84[0].x, sp84[0].y, sp84[0].z, 30.0f, 0, 1);
                }
                break;
            case 5:
                boss->fwork[9] = 120.0f;
                boss->fwork[10] = 120.0f;
                boss->fwork[13] = 20.0f;
                if ((boss->fwork[0] > 60.0f) && (gBosses[2].actionState == 0) && (boss->swork[1] == 0)) {
                    func_i1_8018BDD4(boss, sp84[1].x, sp84[1].y + 50.0f, sp84[1].z, 45.0f, 0, 0);
                    Audio_PlaySfx(0x2903201B, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_i1_8018BDD4(boss, sp84[1].x, sp84[1].y - 50.0f, sp84[1].z, 40.0f, 0, 0);
                    boss->swork[1] = 1;
                }
                if ((boss->fwork[1] > 60.0f) && (gBosses[3].actionState == 0) && (boss->swork[2] == 0)) {
                    func_i1_8018BDD4(boss, sp84[2].x, sp84[2].y + 50.0f, sp84[2].z, 35.0f, 0, 0);
                    Audio_PlaySfx(0x2903201B, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_i1_8018BDD4(boss, sp84[2].x, sp84[2].y - 50.0f, sp84[2].z, 30.0f, 0, 0);
                    boss->swork[2] = 1;
                }
                if ((boss->timer_050 == 0) || ((gBosses[3].actionState != 0) && (gBosses[2].actionState != 0))) {
                    boss->actionState = 3;
                    boss->swork[0] = 4;
                    boss->timer_050 = 70;
                    boss->swork[1] = 0;
                    boss->swork[2] = 0;
                    boss->fwork[8] = 0.0f;
                    if ((boss->swork[4] == 0) && (gBosses[1].actionState == 0)) {
                        func_800BA808(gMsg_ID_2291, RCID_BOSS_CORNERIA2);
                    }
                    if ((boss->swork[4] == 2) && (boss->swork[7] == 0) &&
                        ((gBosses[3].actionState == 0) || (gBosses[2].actionState == 0) ||
                         (gBosses[1].actionState == 0))) {
                        func_800BA808(gMsg_ID_2299, RCID_PEPPY);
                        boss->swork[7]++;
                    }
                    boss->swork[4]++;
                    boss->swork[4] &= 3;
                    if ((gBosses[3].actionState == 0) && (gBosses[2].actionState == 0)) {
                        Audio_PlaySfx(0x2940201A, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
                break;
            case 6:
                Math_SmoothStepToAngle(&boss->obj.rot.y, boss->fwork[13], 0.1f, 5.0f, 0.01f);
                Math_SmoothStepToAngle(&boss->obj.rot.z, boss->fwork[14], 0.1f, 5.0f, 0.01f);
                if ((boss->obj.rot.y == 0.0f) || (boss->timer_058 == 0)) {
                    boss->timer_058 = 0;
                    boss->actionState = 7;
                    boss->obj.rot.z = 0.0f;
                    boss->obj.rot.y = 0.0f;
                }
                break;
            case 7:
                boss->fwork[3] = (gPlayer[0].camEye.z - D_80177D20) - 4000.0f;
                Math_SmoothStepToF(&boss->obj.pos.z, boss->fwork[3], 0.1f, 15.0f, 0.00001f);
                if (boss->timer_058 == 0) {

                    boss->timer_058 = D_i1_80199A4C[boss->swork[3]];
                    boss->fwork[20] = D_i1_80199A5C[boss->swork[3]];
                    boss->swork[3]++;
                    boss->swork[3] &= 3;
                    boss->fwork[8] = 0.0f;

                    if ((boss->swork[3] != 1) || (boss->swork[3] != 3)) {
                        func_8001A55C(&boss->sfxPos, 0x31034025);
                        boss->swork[9] = 0;
                    }
                }

                if ((boss->swork[3] == 0) || (boss->swork[3] == 2)) {

                    if ((boss->obj.rot.y < 20.0f) && (boss->obj.rot.y > -20.0f)) {
                        if (boss->swork[9] == 0) {
                            boss->swork[9]++;
                            Audio_PlaySfx(0x31034025, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (boss->swork[6] == 0) {
                                func_800BA808(gMsg_ID_2293, RCID_BOSS_CORNERIA2);
                            }
                            boss->swork[6]++;
                            boss->swork[6] &= 1;
                        }
                        if (!(gGameFrameCount & 7)) {
                            if (fabsf(boss->obj.pos.z - gPlayer[0].unk_138) > 700.0f) {

                                Matrix_MultVec3f(gCalcMatrix, &D_i1_801998F0[0], &sp84[3]);
                                effect = gEffects;
                                for (i = 0; i < 100; i++, effect++) {
                                    if (effect->obj.status == 0) {
                                        Effect_Initialize(effect);
                                        effect->obj.status = 1;
                                        effect->obj.id = OBJ_EFFECT_398;
                                        effect->timer_50 = 100;
                                        effect->unk_44 = 1;
                                        effect->scale2 = 1.0f;
                                        effect->obj.rot.z = 30.0f;
                                        effect->obj.pos.x = sp84[3].x + boss->obj.pos.x;
                                        effect->obj.pos.y = sp84[3].y + boss->obj.pos.y;
                                        effect->obj.pos.z = sp84[3].z + boss->obj.pos.z;
                                        Object_SetInfo(&effect->info, effect->obj.id);
                                        break;
                                    }
                                }

                                if (i >= 60) {
                                    effect->obj.status = 0;
                                }
                            }
                        }
                    }
                }
                if (boss->health < 2) {
                    D_8017796C = -1;
                    func_8001A55C(&boss->sfxPos, 0x31034025);
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    Audio_PlaySfx(0x2940D09A, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_Timer_80161A60 = 8;
                    gShowBossHealth = false;
                    func_800BA808(gMsg_ID_2294, RCID_BOSS_CORNERIA2);
                    boss->health = 1;
                    boss->timer_056 = 150;
                    boss->actionState = 8;
                    boss->fwork[19] = 15.0f;
                } else {
                    Math_SmoothStepToF(&boss->fwork[8], 3.0f, 0.1f, 0.5f, 0.001f);
                    Math_SmoothStepToAngle(&boss->obj.rot.z, boss->fwork[14], 0.1f, 3.0f, 0.00001f);
                    temp_fv0_2 = Math_SmoothStepToF(&boss->obj.rot.y, boss->fwork[20], 0.1f, boss->fwork[8], 0.00001f);
                    boss->fwork[14] = 0.0f;
                    if (temp_fv0_2 < -1.0f) {
                        boss->fwork[14] = 25.0f;
                    }
                    if (temp_fv0_2 > 1.0f) {
                        boss->fwork[14] = 335.0f;
                    }
                    sp78.x = 0.0f;
                    sp78.y = 0.0f;
                    sp78.z = 40.0f;
                    Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
                    boss->vel.x = sp6C.x;
                    boss->vel.y = sp6C.y;
                    boss->vel.z = sp6C.z - D_80177D08;
                }
                break;
            case 8:
                D_801779A8[0] = 20.0f;
                if (!(gGameFrameCount & 0x1F)) {
                    for (i = 0; i < 10; i++) {
                        func_80079618(((Rand_ZeroOne() - 0.5f) * 300.0f) + boss->obj.pos.x, boss->obj.pos.y,
                                      boss->obj.pos.z, 1.0f);
                    }
                }
                Math_SmoothStepToF(&boss->obj.pos.x, boss->fwork[7], 1.0f, 10.0f, 0.00001f);
                Math_SmoothStepToF(&boss->vel.x, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&boss->vel.y, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&boss->vel.z, 0.0f, 0.1f, 2.0f, 0.00001f);
                if (boss->obj.rot.z == boss->fwork[14]) {
                    if (boss->fwork[14] == boss->fwork[19]) {
                        boss->fwork[14] = 360.0f - boss->fwork[19];
                    } else {
                        boss->fwork[14] = boss->fwork[19];
                    }
                }
                Math_SmoothStepToAngle(&boss->obj.rot.z, boss->fwork[14], 1.0f, 1.0f, 0.001f);
                if (boss->health != 0) {
                    if (boss->timer_056 == 0) {
                        func_80042EC0(boss);
                        boss->fwork[17] = 10.0f;
                        boss->vel.y *= 1.5f;
                        D_80177930 = 1;
                        if ((gPlayer[0].state_1C8 == 3) || (gPlayer[0].state_1C8 == 5)) {
                            func_8004319C(gPlayer, boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z);
                        }
                        boss->health--;
                        boss->fwork[8] = 0.0f;
                        func_800BA808(gMsg_ID_2296, RCID_BOSS_CORNERIA2);
                    } else {
                        Math_SmoothStepToF(&boss->obj.rot.y, 0.0f, 0.1f, boss->fwork[8], 0.00001f);
                        sp78.x = 0.0f;
                        sp78.y = 0.0f;
                        sp78.z = 20.0f;
                        Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
                        boss->vel.x = sp6C.x;
                        boss->vel.y = sp6C.y;
                        boss->vel.z = sp6C.z - D_80177D08;
                        if (boss->timer_056 == 60) {
                            func_800BA808(gMsg_ID_2295, RCID_FOX);
                        }
                    }
                } else {
                    boss->actionState = 9;
                }
                break;
            case 9:
                if (!(gGameFrameCount & 0xF)) {
                    for (i = 0; i < 10; i++) {
                        func_80079618(((Rand_ZeroOne() - 0.5f) * 300.0f) + boss->obj.pos.x, boss->obj.pos.y,
                                      boss->obj.pos.z, 1.0f);
                    }
                }
                Math_SmoothStepToF(&boss->vel.x, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&boss->vel.y, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&boss->vel.z, 0.0f, 0.1f, 2.0f, 0.00001f);
                boss->obj.rot.z -= 2.0f;
                boss->gravity = 1.0f;
                if (boss->obj.pos.y < (gGroundLevel + 150.0f)) {
                    D_80178480 = 100;
                    func_80081A8C(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 40.0f, 12);
                    boss->timer_050 = 20;
                    boss->vel.y = -10.0f;
                    boss->gravity = 0.0f;
                    boss->fwork[17] = 20.0f;
                    func_i1_8018C0B0(boss);
                    boss->actionState = 10;
                }
                break;
            case 10:
                if (!(gGameFrameCount & 7)) {
                    for (i = 0; i < 10; i++) {
                        func_80079618(((Rand_ZeroOne() - 0.5f) * 300.0f) + boss->obj.pos.x, boss->obj.pos.y,
                                      boss->obj.pos.z, 1.0f);
                    }
                }
                if (boss->timer_050 == 0) {
                    func_8007A568(boss->obj.pos.x, boss->obj.pos.y + 500.0f, boss->obj.pos.z, 120.0f);
                    Object_Kill(&boss->obj, &boss->sfxPos);
                }
                break;
        }
        temp_a0 = SEGMENTED_TO_VIRTUAL(D_603E748);
        temp_a1 = SEGMENTED_TO_VIRTUAL(D_603E7C4);
        temp_a0[9] = -100000.0f;
        temp_a0[3] = 172.0f;
        temp_a1[9] = -100000.0f;
        temp_a1[3] = -150.0f;
        if (boss->fwork[0] > 60.0f) {
            temp_a0[3] = -100000.0f;
            temp_a0[9] = 543.0f;
        }
        if (boss->fwork[1] > 60.0f) {
            temp_a1[3] = -100000.0f;
            temp_a1[9] = -557.0f;
        }
        boss->fwork[16] = 4.0f;
        if ((boss->swork[10] == 0) && (boss->actionState < 6)) {
            boss->fwork[17] = 1.8f;
            Audio_PlaySfx(0x11020084, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            boss->timer_058 = 71;
            boss->actionState = 6;
            boss->fwork[12] = 0.0f;
            boss->fwork[8] = 0.0f;
            boss->fwork[14] = 0.0f;
            boss->fwork[13] = 0.0f;
        }

        if (gBossFrameCount == 430) {
            func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
        }
        if (gBossFrameCount == 586) {
            gShowBossHealth = true;
        }
        if (gBossFrameCount >= 587) {
            gBossHealthBar = (boss->health / 601.0f) * 255.0f;
        }
    }
}

static Vec3f D_i1_80199A6C = { -270.0f, 0.0f, 200.0f };
static Vec3f D_i1_80199A78 = { 440.0f, 0.0f, 0.0f };

void func_i1_8018DDAC(Boss* boss) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (boss->actionState) {
        case 0:
            if (boss->dmgType != DMG_NONE) {
                boss->dmgType = DMG_NONE;
                if (boss->dmgPart == 0) {
                    if (boss->fwork[2] > 60.0f) {
                        if (boss->health != 0) {
                            boss->timer_05C = 15;
                            boss->health -= boss->damage;
                            Audio_PlaySfx(0x29034003, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (boss->health <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    func_800BA808(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    func_800BA808(gMsg_ID_7085, RCID_FALCO);
                                }
                                boss->info.unk_10 = 300.0f;
                                gBosses[0].fwork[14] = 25.0f;
                                gBosses[0].fwork[15] = 0.0f;
                                Audio_PlaySfx(0x2940C027, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }
                                gBosses[0].timer_056 = 30;
                                boss->actionState = 1;
                                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A6C, &sp4C);

                                for (i = 0; i < 10; i++) {
                                    func_80079618(boss->obj.pos.x + sp4C.x, boss->obj.pos.y + sp4C.y,
                                                  boss->obj.pos.z + sp4C.z, 1.0f);
                                }

                                if ((gBosses[2].actionState == 1) && (gBosses[3].actionState == 1)) {
                                    gBosses[0].fwork[14] = 335.0f;
                                }
                            }
                        }
                    }
                } else {
                    Audio_PlaySfx(0x29121007, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            boss->obj.rot.x = gBosses[0].obj.rot.x;
            boss->obj.rot.y = gBosses[0].obj.rot.y;
            boss->obj.rot.z = gBosses[0].obj.rot.z;
            Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, boss->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 1);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A78, &sp40);
            boss->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            boss->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            boss->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;
            boss->fwork[2] = gBosses[0].fwork[2];
            break;
        case 1:
            Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 0);
            gBosses[0].fwork[15] += 0.5f;

            if (!(gGameFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                boss->timer_05C = 4;
            }

            if (!(gGameFrameCount & 1)) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A6C, &sp4C);
                func_8007C120(boss->obj.pos.x + sp4C.x, boss->obj.pos.y + sp4C.y, boss->obj.pos.z + sp4C.z, boss->vel.x,
                              boss->vel.y, boss->vel.z, 0.2f, 10);
            }

            if (boss->obj.pos.y < (gGroundLevel + 150.0f)) {
                if (boss->swork[0] == 0) {
                    boss->vel.y = -5.0f;
                    boss->swork[0] = 1;
                    boss->gravity = 0.0f;
                    func_i1_8018C0B0(boss);
                    Audio_PlaySfx(0x19000014, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else {
                boss->obj.rot.z -= 2.0f;
                boss->gravity = 1.0f;
            }
            break;
    }
}

static Vec3f D_i1_80199A84 = { 20.0f, -90.0f, 0.0f };

static Vec3f D_i1_80199A90 = { -440.0f, 210.0f, 0.0f };

void func_i1_8018E290(Boss* boss) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (boss->actionState) {
        case 0:
            if (boss->dmgType != DMG_NONE) {
                boss->dmgType = DMG_NONE;
                if (boss->dmgPart == 2) {
                    if (boss->fwork[0] > 60.0f) {
                        if (boss->health != 0) {
                            boss->timer_05C = 15;
                            boss->health -= boss->damage;
                            Audio_PlaySfx(0x29034003, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (boss->health <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    func_800BA808(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    func_800BA808(gMsg_ID_7085, RCID_FALCO);
                                }
                                boss->info.unk_10 = 300.0f;
                                gBosses[0].fwork[15] = 0.0f;
                                gBosses[0].fwork[14] = 335.0f;
                                boss->health = 0;
                                Audio_PlaySfx(0x2940C027, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }
                                gBosses[0].timer_056 = 30;
                                boss->actionState = 1;
                                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A84, &sp4C);
                                for (i = 0; i < 10; i++) {
                                    func_80079618(boss->obj.pos.x + sp4C.x, boss->obj.pos.y + sp4C.y,
                                                  boss->obj.pos.z + sp4C.z, 1.0f);
                                }
                                if (gBosses[1].actionState == 1) {
                                    gBosses[0].fwork[14] = 25.0f;
                                }
                            }
                        }
                    }
                } else {
                    Audio_PlaySfx(0x29121007, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            boss->obj.rot.x = gBosses[0].obj.rot.x;
            boss->obj.rot.y = gBosses[0].obj.rot.y;
            boss->obj.rot.z = gBosses[0].obj.rot.z;
            Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, boss->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 1);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A90, &sp40);
            boss->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            boss->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            boss->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;
            boss->fwork[0] = gBosses[0].fwork[0];
            break;
        case 1:
            Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 0);
            gBosses[0].fwork[15] += 0.5f;

            if (!(gGameFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                boss->timer_05C = 4;
            }

            if (!(gGameFrameCount & 1)) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A84, &sp4C);
                func_8007C120(boss->obj.pos.x + sp4C.x, boss->obj.pos.y + sp4C.y, boss->obj.pos.z + sp4C.z, boss->vel.x,
                              boss->vel.y, boss->vel.z, 0.2f, 10);
            }

            if (boss->obj.pos.y < (gGroundLevel + 150.0f)) {
                if (boss->swork[0] == 0) {
                    boss->vel.y = -5.0f;
                    boss->swork[0] = 1;
                    boss->gravity = 0.0f;
                    func_i1_8018C0B0(boss);
                    Audio_PlaySfx(0x19000014, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else {
                boss->obj.rot.z -= 2.0f;
                boss->gravity = 1.0f;
            }
            break;
    }
}

static Vec3f D_i1_80199A9C = { 20.0f, 90.0f, 0.0f };

static Vec3f D_i1_80199AA8 = { -440.0f, -210.0f, 0.0f };

void func_i1_8018E76C(Boss* boss) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (boss->actionState) {
        case 0:
            if (boss->dmgType != DMG_NONE) {
                boss->dmgType = DMG_NONE;
                if (boss->dmgPart == 2) {
                    if (boss->fwork[1] > 60.0f) {
                        if (boss->health != 0) {
                            boss->timer_05C = 15;
                            boss->health -= boss->damage;
                            Audio_PlaySfx(0x29034003, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (boss->health <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    func_800BA808(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    func_800BA808(gMsg_ID_7085, RCID_FALCO);
                                }
                                boss->info.unk_10 = 300.0f;
                                gBosses[0].fwork[15] = 0.0f;
                                gBosses[0].fwork[14] = 335.0f;
                                boss->health = 0;
                                Audio_PlaySfx(0x2940C027, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }
                                gBosses[0].timer_056 = 30;
                                boss->actionState = 1;
                                gBosses[0].fwork[6] = 500.0f;
                                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A9C, &sp4C);

                                for (i = 0; i < 10; i++) {
                                    func_80079618(boss->obj.pos.x + sp4C.x, boss->obj.pos.y + sp4C.y,
                                                  boss->obj.pos.z + sp4C.z, 1.0f);
                                }

                                if (gBosses[1].actionState == 1) {
                                    gBosses[0].fwork[14] = 25.0f;
                                }
                            }
                        }
                    }
                } else {
                    Audio_PlaySfx(0x29121007, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            boss->obj.rot.x = gBosses[0].obj.rot.x;
            boss->obj.rot.y = gBosses[0].obj.rot.y;
            boss->obj.rot.z = gBosses[0].obj.rot.z;
            Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, boss->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 1);
            Matrix_MultVec3f(gCalcMatrix, &D_i1_80199AA8, &sp40);
            boss->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            boss->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            boss->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;
            boss->fwork[1] = gBosses[0].fwork[1];
            break;
        case 1:
            Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 0);
            gBosses[0].fwork[15] += 0.5f;
            if (!(gGameFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                boss->timer_05C = 4;
            }
            if (!(gGameFrameCount & 1)) {
                Matrix_MultVec3f(gCalcMatrix, &D_i1_80199A9C, &sp4C);
                func_8007C120(boss->obj.pos.x + sp4C.x, boss->obj.pos.y + sp4C.y, boss->obj.pos.z + sp4C.z, boss->vel.x,
                              boss->vel.y, boss->vel.z, 0.2f, 10);
            }
            if (boss->obj.pos.y < (gGroundLevel + 150.0f)) {
                if (boss->swork[0] == 0) {
                    boss->vel.y = -5.0f;
                    boss->swork[0] = 1;
                    boss->gravity = 0.0f;
                    func_i1_8018C0B0(boss);
                    Audio_PlaySfx(0x19000014, &boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else {
                boss->obj.rot.z -= 2.0f;
                boss->gravity = 1.0f;
            }
            break;
    }
}

s32 func_i1_8018EC54(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if ((arg0 == 10) && (gBosses[2].actionState != 0) && (gBosses[3].actionState != 0)) {
        *arg1 = NULL;
    }
    if ((arg0 != 12) && (arg0 != 10)) {
        *arg1 = NULL;
    }
    return false;
}

extern AnimationHeader D_602D400;
extern Limb* D_602D5AC[];

void func_i1_8018ECAC(Boss* boss) {

    Animation_GetFrameData(&D_602D400, 0, boss->vwork);
    Animation_DrawSkeleton(1, D_602D5AC, boss->vwork, func_i1_8018EC54, NULL, &boss->index, &gIdentityMatrix);
}

s32 func_i1_8018ED1C(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 5) {
        arg3->y -= gBosses[*(s32*) arg4].fwork[2];
    }
    if ((arg0 != 6) && (arg0 != 5)) {
        *arg1 = NULL;
    }
    return 0;
}

void func_i1_8018ED78(Boss* boss) {

    Matrix_Translate(gGfxMatrix, -D_i1_80199A78.x, -D_i1_80199A78.y, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_602D400, 0, boss->vwork);
    Animation_DrawSkeleton(1, D_602D5AC, boss->vwork, func_i1_8018ED1C, NULL, &boss->index, &gIdentityMatrix);
}

s32 func_i1_8018EE2C(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 1) {
        arg3->z -= gBosses[*(s32*) arg4].fwork[0];
    }
    if ((arg0 != 1) && (arg0 != 2)) {
        *arg1 = NULL;
    }
    return 0;
}

void func_i1_8018EE84(Boss* boss) {

    Matrix_Translate(gGfxMatrix, -D_i1_80199A90.x, -D_i1_80199A90.y, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_602D400, 0, boss->vwork);
    Animation_DrawSkeleton(1, D_602D5AC, boss->vwork, func_i1_8018EE2C, NULL, &boss->index, &gIdentityMatrix);
}

s32 func_i1_8018EF38(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 3) {
        arg3->z -= gBosses[*(s32*) arg4].fwork[1];
    }
    if ((arg0 != 3) && (arg0 != 4)) {
        *arg1 = NULL;
    }
    return 0;
}

void func_i1_8018EF90(Boss* boss) {

    Matrix_Translate(gGfxMatrix, -D_i1_80199AA8.x, -D_i1_80199AA8.y, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_602D400, 0, boss->vwork);
    Animation_DrawSkeleton(1, D_602D5AC, boss->vwork, func_i1_8018EF38, NULL, &boss->index, &gIdentityMatrix);
}

extern f32 D_603E924[];

void func_i1_8018F044(Object_80* obj80) {

    switch (obj80->unk_48) {
        case 0:
            if (obj80->unk_50 != 0) {
                obj80->unk_50 = 0;
                if (obj80->unk_54 < 2) {
                    obj80->unk_44++;
                    obj80->timer_4C = 5;
                    obj80->vel.x += 2.0f;
                    obj80->vel.y += 2.0f;
                    if (obj80->unk_44 >= 3) {
                        obj80->unk_48 = 1;
                        obj80->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_603E924);
                        Audio_PlaySfx(0x1900000D, &obj80->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        return;
                    }
                    Audio_PlaySfx(0x2903300E, &obj80->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        case 1:
            Math_SmoothStepToF(&obj80->vel.x, 80.0f, 0.2f, 10.0f, 0.0f);
            Math_SmoothStepToF(&obj80->vel.y, 80.0f, 0.2f, 10.0f, 0.0f);
            break;
    }
}

s32 func_i1_8018F1C8(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Object_80* obj80 = (Object_80*) arg4;

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    switch (arg0) {
        case 1:
            arg3->y -= obj80->vel.x;
            if (obj80->timer_4C & 1) {
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            break;
        case 2:
            arg3->y += obj80->vel.y;
            if (obj80->timer_4C & 1) {
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            break;
    }
    return 0;
}

extern AnimationHeader D_602AA7C;
extern Limb* D_602AB48[];

void func_i1_8018F31C(Object_80* obj80) {
    Vec3f sp28[10];

    Animation_GetFrameData(&D_602AA7C, 0, sp28);
    Animation_DrawSkeleton(3, D_602AB48, sp28, func_i1_8018F1C8, NULL, obj80, gCalcMatrix);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_i1_8018F3BC(Object_80* obj80, f32 arg1) {
    Object_80_Initialize(obj80);
    obj80->obj.status = 1;
    obj80->obj.pos.x = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + arg1;
    obj80->obj.rot.y = (Rand_ZeroOne() * 90.0f) + 45.0f;
    if (arg1 > 0.0f) {
        obj80->obj.rot.y *= -1.0f;
    }
    obj80->obj.pos.y = 0.0f;
    obj80->obj.id = 1;
    obj80->unk_60 = 60.0f;
    Object_SetInfo(&obj80->info, obj80->obj.id);
    obj80->obj.pos.z = -2000.0f;
    obj80->info.unk_10 = 15000.0f;
}

void func_i1_8018F4A4(void) {
    s32 i;

    if (!(gGameFrameCount & 0xF) && !(gPlayer[0].unk_1D0 < 4)) {
        for (i = 0; i < 50; i++) {
            if (gObjects80[i].obj.status == 0) {
                func_i1_8018F3BC(&gObjects80[i], 4000.0f);
                break;
            }
        }

        for (i = 0; i < ARRAY_COUNT(gObjects80); i++) {
            if (gObjects80[i].obj.status == 0) {
                func_i1_8018F3BC(&gObjects80[i], -4000.0f);
                break;
            }
        }
    }
}

void func_i1_8018F55C(Effect* effect) {

    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.pos.x = gPlayer[0].camEye.x + ((Rand_ZeroOne() - 0.5f) * 500.0f);
    effect->obj.pos.y = gPlayer[0].camEye.y + ((Rand_ZeroOne() - 0.8f) * 350.0f);
    effect->obj.id = OBJ_EFFECT_352;
    effect->timer_50 = 80;
    effect->unk_46 = 0x90;
    effect->obj.pos.z = -4000.0f;
    effect->vel.z = 60.0f;
    effect->scale2 = (Rand_ZeroOne() * 15.0f) + 10.0f;
    if (Rand_ZeroOne() < 0.5f) {
        effect->obj.rot.z = 180.0f;
    }
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i1_8018F678(void) {
    s32 i;

    if (!(gGameFrameCount & 0x1F) && gPlayer[0].pos.x == 0.0f) {

        for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
            if (gEffects[i].obj.status == 0) {
                func_i1_8018F55C(&gEffects[i]);
                return;
            }
        }
    }
}

static f32 D_i1_80199AB4[3] = { 180.0f, -180.0f, 0.0f };

static f32 D_i1_80199AC0[3] = { 200.0f, 140.0f, 200.0f };

static f32 D_i1_80199ACC[3] = { 160.0f, 160.0f, 320.0f };

static f32 D_i1_80199AD8[3] = { -60.0f, 60.0f, -45.0f };

void func_i1_8018F6F8(Actor* actor, s32 arg1) {

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = (D_i1_80199AB4[arg1] * 4.0f) + gPlayer[0].pos.x;
    actor->obj.pos.y = (D_i1_80199AC0[arg1] * 2.0f) + gPlayer[0].pos.y;
    actor->obj.pos.z = (D_i1_80199ACC[arg1] * 3.0f) + gPlayer[0].unk_138;
    actor->vwork[20].x = D_i1_80199AB4[arg1] + gPlayer[0].pos.x;
    actor->vwork[20].y = gPlayer[0].pos.y;
    actor->vwork[20].z = D_i1_80199ACC[arg1] + gPlayer[0].unk_138;
    actor->obj.rot.z = D_i1_80199AD8[arg1];
    actor->unk_0B8 = 100;
    actor->obj.rot.y = 180.0f;
    actor->fwork[0] = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->unk_0C9 = 1;
    actor->iwork[11] = 1;
    actor->info.unk_10 = 200.0f;
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

extern Gfx* D_30184D8;

void func_i1_8018F880(Player* player) {
    s32 i;
    Actor* actor0 = &gActors[0];
    Actor* actor1 = &gActors[1];
    Actor* actor2 = &gActors[2];
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if (D_80177A80 < 0x32F) {
        sp3C = player->pos.x;
        sp38 = player->pos.y + 15.0f;
        sp34 = player->unk_138 - 20.0f;
    } else {
        if (D_80177A80 < 0x3F1) {
            sp3C = actor0->obj.pos.x;
            sp38 = actor0->obj.pos.y + 15.0f;
            sp34 = actor0->obj.pos.z - 20.0f;
        } else if (D_80177A80 < 0x4AE) {
            sp3C = actor2->obj.pos.x;
            sp38 = actor2->obj.pos.y + 15.0f;
            sp34 = actor2->obj.pos.z - 20.0f;
        } else {
            sp3C = actor1->obj.pos.x;
            sp38 = actor1->obj.pos.y + 15.0f;
            sp34 = actor1->obj.pos.z - 20.0f;
        }
    }

    sp2C = -Math_Atan2F(player->camEye.x - sp3C, player->camEye.z - sp34);
    sp30 = -Math_Atan2F(player->camEye.y - sp38, sqrtf(SQ(player->camEye.z - sp34) + SQ(player->camEye.x - sp3C)));
    sp44 = Math_RadToDeg(sp2C) - D_80177A48[4];
    sp40 = Math_RadToDeg(sp30) - D_80177A48[5];
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

    D_80177A48[6] += fabsf(sp44);
    D_80177A48[7] += fabsf(sp40);

    if (sp2C >= 0.0f) {
        Texture_Scroll(&D_30184D8, 64, 32, 2);
        Texture_Scroll(&D_30184D8, 64, 32, 2);
    } else {
        Texture_Scroll(&D_30184D8, 64, 32, 3);
        Texture_Scroll(&D_30184D8, 64, 32, 3);
    }

    for (i = 0; (i < 40 && D_80177A48[6] >= 0.2f); i++, D_80177A48[6] -= 0.2f) {
        if (sp44 >= 0) {
            Texture_Scroll(&D_30184D8, 64, 32, 2);
        } else {
            Texture_Scroll(&D_30184D8, 64, 32, 3);
        }
    }

    for (i = 0; (i < 40 && D_80177A48[7] >= 0.3f); i++, D_80177A48[7] -= 0.3f) {
        if (sp40 >= 0) {
            Texture_Scroll(&D_30184D8, 64, 32, 0);
        } else {
            Texture_Scroll(&D_30184D8, 64, 32, 1);
        }
    }

    D_80177A48[4] = Math_RadToDeg(sp2C);
    D_80177A48[5] = Math_RadToDeg(sp30);
    player->unk_228 = 0;
    D_80177950 = -1.0f;
    if ((Math_RadToDeg(gPlayer[0].unk_058) < 90.0f) || (Math_RadToDeg(gPlayer[0].unk_058) > 270.0f)) {
        D_80177950 = 1.0f;
    }
    player->vel.z = 0.0f;
    player->pos.z = player->pos.z;
    player->unk_138 = player->pos.z + player->unk_08C;
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.5f;
    player->unk_0F4 += 3.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR) * 1.5f;
    func_i1_8018F678();
    player->wings.unk_30 = 0;

    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;
            player->unk_1D0 = 1;
            player->timer_1F8 = 600;
            player->pos.y = 6000.0f;
            player->pos.x = 0.1f;
            func_i1_8018F6F8(&gActors[0], 0);
            func_i1_8018F6F8(&gActors[1], 1);
            func_i1_8018F6F8(&gActors[2], 2);
            actor0->iwork[14] = 2;
            actor1->iwork[14] = 3;
            actor2->iwork[14] = 4;
            player->camEye.x = D_80177978 = player->pos.x - 400.0f;
            gPlayer[0].camEye.y = D_80177980 = player->pos.y + 600.0f;
            player->camEye.z = D_80177988 = player->unk_138 + 2000.0f;
            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->unk_138 + 300.0f;
            D_80177A48[0] = 0;
            D_80177A48[1] = D_80177A48[2] = 0;
            D_80178358 = 0xFF;
            D_80178340 = 0xFF;
            D_80178348 = D_80178350 = D_80178354 = 0xFF;
            break;
        case 1:
            if (player->timer_1F8 < 0x226) {
                D_80178358 = 0;
                D_8017835C = 3;
                Math_SmoothStepToF(&D_80177A48[0], 0.01f, 1.0f, 0.0005f, 0.0f);
            }
            D_80177978 = player->pos.x - 150.0f;
            D_80177980 = player->pos.y - 70.0f;
            D_80177988 = player->unk_138 + 150.0f;
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->unk_138;
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 2;
                player->timer_1F8 = 130;
                D_80177A48[0] = 0.0f;
            }
            if (player->timer_1F8 == 315) {
                player->pos.x = 0.0f;
            }
            if (player->timer_1F8 == 270) {
                D_80178300 = 0;
                func_800BA808(gMsg_ID_2005, RCID_FOX);
            }
            if (player->timer_1F8 == 180) {
                Audio_PlaySfx(0x09000007, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (player->timer_1F8 == 120) {
                Audio_PlaySfx(0x09000013, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if ((player->timer_1F8 < 190) && (player->timer_1F8 >= 151)) {
                Math_SmoothStepToF(&player->wings.unk_24, 2.0f, 0.2f, 0.5f, 0.0f);
            }
            if (player->timer_1F8 < 150) {
                player->unk_204 = 0;
            }
            if ((player->timer_1F8 < 120) && !(player->timer_1F8 & 0xF)) {
                D_80177A48[1] = ((Rand_ZeroOne() - 0.5f) * 60.0f);
                D_80177A48[2] = ((Rand_ZeroOne() - 0.5f) * 60.0f);
            }
            if (player->timer_1F8 == 0) {
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = D_80177A48[1];
            }
            break;
        case 2:
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);
            D_80177978 = player->pos.x - 50.0f;
            D_80177980 = player->pos.y + 10.0f;
            D_80177988 = player->unk_138 - 10.0f;
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y + 10.0f;
            D_801779C0 = player->unk_138 + 10.0f;
            if (player->timer_1F8 == 20) {
                func_800BA808(gMsg_ID_2010, RCID_FOX);
            }
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 3;
                player->timer_1F8 = 180;
                player->unk_004 = 0.0f;
                actor0->unk_0B8 = 0;
                actor2->unk_0B8 = 0;
                actor1->unk_0B8 = 0;
                actor0->obj.pos.y = player->pos.y + 80.0f;
                actor0->obj.pos.z += 100.0f;
            }
            if ((D_801782F8 != 0) && (gGameFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            break;
        case 3:
            if (fabsf(Math_SmoothStepToF(&actor0->obj.pos.z, player->pos.z + 100.0f, 0.05f, 5.0f, 0.0f)) < 1.0f) {
                player->unk_1D0 = 4;
                D_80177A48[0] = 0.0f;
                player->timer_1F8 = 190;
            }
            if ((D_801782F8 != 0) && (gGameFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            D_80177980 = player->pos.y + 10.0f;
            D_801779B8 = player->pos.y + 10.0f;
            break;
        case 4:
            if ((D_801782F8 != 0) && (gGameFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);
            D_80177978 = actor0->obj.pos.x - 50.0f;
            D_80177980 = actor0->obj.pos.y + 10.0f;
            D_80177988 = actor0->obj.pos.z - 10.0f;
            D_801779A0 = actor0->obj.pos.x;
            D_801779B8 = actor0->obj.pos.y + 10.0f;
            D_801779C0 = actor0->obj.pos.z + 10.0f;
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 5;
                player->timer_1F8 = 5;
            }
            if (player->timer_1F8 == 80) {
                func_800BA808(gMsg_ID_2020, RCID_FALCO);
            }
            if (player->timer_1F8 < 100) {
                Math_SmoothStepToF(&actor0->fwork[19], 50.0f, 0.1f, 3.0f, 0.01f);
            }
            actor0->fwork[20] = 0.0f;
            if ((D_801782F8 != 0) && (gGameFrameCount & 2)) {
                actor0->fwork[20] = 5.0f;
            }
            break;
        case 5:
            Math_SmoothStepToF(&actor0->fwork[19], 0, 0.1f, 3.0f, 0.01f);
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 6;
                D_80177A48[0] = 0.0f;
                player->timer_1F8 = 190;
            }

            D_80177980 = actor0->obj.pos.y + 10.0f;
            D_801779B8 = actor0->obj.pos.y + 10.0f;
            break;
        case 6:
            Math_SmoothStepToF(&actor0->fwork[19], 0.0f, 0.1f, 3.0f, 0.01f);
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);

            D_80177A48[3] -= 0.5f;

            D_80177978 = actor2->obj.pos.x + 100.0f + D_80177A48[3];
            D_80177980 = actor2->obj.pos.y + 10.0f;
            D_80177988 = actor2->obj.pos.z - 70.0f;

            D_801779A0 = actor2->obj.pos.x + 20.0f + (D_80177A48[3] * 0.5f);
            D_801779B8 = actor2->obj.pos.y + 10.0f;
            D_801779C0 = actor2->obj.pos.z + 10.0f;

            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 7;
                player->timer_1F8 = 190;
                D_80177A48[0] = 0.0f;
                actor0->obj.pos.y = player->pos.y;
                actor0->obj.pos.z = player->unk_138 + 240.0f;
            }
            if (player->timer_1F8 == 80) {
                func_800BA808(gMsg_ID_2030, RCID_PEPPY);
            }
            actor2->fwork[20] = 0.0f;
            if ((D_801782F8 != 0) && (gGameFrameCount & 2)) {
                actor2->fwork[20] = 5.0f;
            }
            break;
        case 7:
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);
            D_80177978 = actor1->obj.pos.x + 20.0f;
            D_80177980 = actor1->obj.pos.y + 10.0f;
            D_80177988 = actor1->obj.pos.z - 50.0f;
            D_801779A0 = actor1->obj.pos.x + 10.0f;
            D_801779B8 = actor1->obj.pos.y + 10.0f;
            D_801779C0 = actor1->obj.pos.z + 10.0f;
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 8;
                D_80177A48[0] = 0.0f;
                player->timer_1F8 = 300;
                D_80177A48[8] = 50.0f;
                D_80177A48[3] = 0.0f;
            }
            if (player->timer_1F8 == 80) {
                func_800BA808(gMsg_ID_2040, RCID_SLIPPY);
                player->pos.x = 0.1f;
            }
            if (player->timer_1F8 < 100) {
                Math_SmoothStepToF(&actor1->fwork[19], -20.0f, 0.1f, 3.0f, 0.01f);
            }
            actor1->fwork[20] = 0.0f;
            if ((D_801782F8 != 0) && (gGameFrameCount & 2)) {
                actor1->fwork[20] = 5.0f;
            }
            break;
        case 8:
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);
            if (player->timer_1F8 < 150) {
                D_80177A48[3] += player->unk_004;
                Math_SmoothStepToF(&player->unk_004, 2.0f, 1.0f, 0.2f, 0.0f);
            }
            D_80177978 = player->pos.x;
            D_80177988 = (player->unk_138 - 600.0f) + D_80177A48[3];
            D_80177980 = player->pos.y + D_80177A48[8];
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y + 20.0f;
            D_801779C0 = player->unk_138 + 100.0f;
            if (player->timer_1F8 < 100) {
                Math_SmoothStepToF(&D_80177A48[8], 10.0f, 0.1f, 0.7f, 0.0f);
            }
            if (player->timer_1F8 == 200) {
                func_800BA808(gMsg_ID_2050, RCID_FOX);
            }
            player->wings.unk_30 = 0.0f;
            if ((D_801782F8 != 0) && (gGameFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            if (player->timer_1F8 == 80) {
                actor0->fwork[29] = 5.0f;
            }
            if (player->timer_1F8 == 60) {
                actor1->fwork[29] = 5.0f;
            }
            if (player->timer_1F8 == 40) {
                actor2->fwork[29] = 5.0f;
            }
            if ((player->timer_1F8 >= 71) && (player->timer_1F8 < 80)) {
                actor0->iwork[11] = 2;
            }
            if ((player->timer_1F8 >= 51) && (player->timer_1F8 < 60)) {
                actor1->iwork[11] = 2;
            }
            if ((player->timer_1F8 >= 31) && (player->timer_1F8 < 40)) {
                actor2->iwork[11] = 2;
            }
            if (player->timer_1F8 == 70) {
                actor0->unk_0B8 = 1;
                func_800A6028(&player->unk_460, 0x09000002);
            }
            if (player->timer_1F8 == 50) {
                actor1->unk_0B8 = 2;
                func_800A6028(&player->unk_460, 0x09000002);
            }
            if (player->timer_1F8 == 30) {
                actor2->unk_0B8 = 3;
                func_800A6028(&player->unk_460, 0x09000002);
            }
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 9;
                func_800A6028(&player->unk_460, 0x09000002);
                player->timer_1F8 = 3;
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
            }
            break;
        case 9:
            D_80177978 = player->pos.x;
            D_80177980 = player->pos.y;
            D_80177988 = player->unk_138 + 1000.0f;
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->unk_138 + 1100.0f;
            D_80177A48[0] = 0.03f;
            player->unk_190 = 2.0f;
            if (player->timer_1F8 == 0) {
                D_80178358 = 0xFF;
                D_8017835C = 0x30;
                D_80178348 = D_80178350 = D_80178354 = 0xFF;
            }
            if (D_80178340 == 0xFF) {
                func_8001D444(0, D_80177C90, 0, 0xFF);
                Object_Kill(&actor0->obj, &actor0->sfxPos);
                Object_Kill(&actor1->obj, &actor1->sfxPos);
                Object_Kill(&actor2->obj, &actor2->sfxPos);

                D_80177838 = 80;
                player->pos.y = 350.0f;
                player->camEye.x = player->pos.x;
                player->camEye.y = (player->pos.y * player->unk_148) + 50.0f;
                player->camEye.z = 30.0f;
                player->state_1C8 = 3;
                player->unk_1D0 = 0;
                player->camAt.x = player->pos.x;
                player->camAt.y = (player->pos.y * player->unk_148) + 20.0f;
                player->camAt.z = player->unk_138;
                D_80177950 = 1.0f;
                D_80178380[0] = D_80178380[1] = D_80178380[2] = D_80178380[3] = 0;
                D_80178488 = 1;
                D_80178358 = 0;
                player->timer_1F8 = 15;
            }
            break;
        case 10:
            break;
    }
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, player->unk_080 + D_80177980, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8 - player->unk_080, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->wings.unk_04, D_80177A48[1], 0.2f, 1.0f, 0.0f);
    Math_SmoothStepToF(&player->wings.unk_0C, D_80177A48[2], 0.2f, 1.0f, 0.0f);
    player->wings.unk_08 = player->wings.unk_04;
    player->wings.unk_10 = player->wings.unk_0C;
    player->camEye.y -= 3.0f;
    player->camAt.y -= 3.0f;
    player->pos.y -= 3.0f;
    actor0->vwork[20].y -= 3.0f;
    actor0->obj.pos.y -= 3.0f;
    actor2->vwork[20].y -= 3.0f;
    actor2->obj.pos.y -= 3.0f;
    actor1->vwork[20].y -= 3.0f;
    actor1->obj.pos.y -= 3.0f;
}

static f32 D_i1_80199AE4[3] = { -1500.0f, 700.0f, 0.0f };

static f32 D_i1_80199AF0[3] = { -300.0f, 400.0f, 500.0f };

static f32 D_i1_80199AFC[3] = { 500.0f, 800.0f, 1200.0f };

static f32 D_i1_80199B08[3] = { -150.0f, 150.0f, 0.0f };

static f32 D_i1_80199B14[3] = { 0.0f, 0.0f, 0.0f };

static f32 D_i1_80199B20[3] = { 200.0f, 200.0f, 400.0f };

static f32 D_i1_80199B2C[3] = { 180.0f, -120.0f, 180.0f };

void func_i1_80190F74(Actor* actor, s32 arg1) {
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Player* player = &gPlayer[0];

    Matrix_RotateY(gCalcMatrix, player->unk_0E8 * M_DTOR, 0);
    sp5C.x = D_i1_80199AE4[arg1];
    sp5C.y = D_i1_80199AF0[arg1];
    sp5C.z = D_i1_80199AFC[arg1];
    sp44.x = D_i1_80199B08[arg1];
    sp44.y = D_i1_80199B14[arg1];
    sp44.z = D_i1_80199B20[arg1];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
    Actor_Initialize(actor);
    actor->obj.pos.x = player->pos.x + sp50.x;
    actor->obj.pos.y = player->pos.y + sp50.y;
    actor->obj.pos.z = player->pos.z + sp50.z;
    actor->fwork[0] = sp38.x;
    actor->fwork[1] = sp38.y;
    actor->fwork[2] = sp38.z;
    actor->fwork[7] = Rand_ZeroOne() * 360.0f;
    actor->fwork[8] = Rand_ZeroOne() * 360.0f;
    actor->vel.x = player->vel.x;
    actor->vel.y = player->vel.y;
    actor->vel.z = player->vel.z;
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.rot.z = D_i1_80199B2C[arg1];
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->iwork[11] = 1;
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i1_80191160(Player* player) {
    Vec3f sp64;
    Vec3f sp58;
    f32 sp54;
    f32 var_fv1;
    f32 sp4C;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_deg;

    player->wings.unk_04 = player->wings.unk_0C = player->wings.unk_08 = player->wings.unk_10 = 0.0f;
    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);
    if (player->unk_1D0 >= 3) {
        player->camEye.y += 3.0f;
        player->camAt.y += 3.0f;
        player->pos.y += 3.0f;
        gActors[0].obj.pos.y += 3.0f;
        gActors[1].obj.pos.y += 3.0f;
        gActors[2].obj.pos.y += 3.0f;
    }

    gBgColor = 0x845;

    switch (player->unk_1D0) {
        case 0:
            func_8001A38C(1, &player->unk_460);
            sp54 = player->camEye.x - D_i1_8019B6D8[62];
            sp4C = player->camEye.z - D_i1_8019B6D8[64];

            D_80177A48[0] = Math_RadToDeg(Math_Atan2F(sp54, sp4C));
            D_80177A48[1] = sqrtf(SQ(sp54) + SQ(sp4C));
            player->unk_1D0++;
            D_80177A48[5] = 0.0f;
            D_80177A48[4] = D_80177A48[5];
            D_80177A48[2] = D_80177A48[5];
            /* fallthrough */
        case 1:
            Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->pos.y, 400.0f, 0.05f, 3.0f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[1], 1300.0f, 0.05f, 1000.0f, 0.0f);
            if (player->unk_0E8 > 180.0f) {
                D_80177A48[0] += 0.5f;
            } else {
                D_80177A48[0] -= 0.5f;
            }
            Matrix_RotateY(gCalcMatrix, D_80177A48[0] * M_DTOR, 0);
            sp64.x = 0.0f;
            sp64.y = 0.0f;
            sp64.z = D_80177A48[1];
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
            Math_SmoothStepToF(&player->camEye.x, D_i1_8019B6D8[62] + sp58.x, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, D_i1_8019B6D8[63] + 100.0f, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.z, D_i1_8019B6D8[64] + sp58.z, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.x, D_i1_8019B6D8[62], 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, D_i1_8019B6D8[63], 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, D_i1_8019B6D8[64], 0.05f, 500.0f, 0.0f);
            temp_fa0 = player->pos.x - D_i1_8019B6D8[62];
            temp_fa1 = player->pos.z - D_i1_8019B6D8[64];
            if (D_80177A80 < 30) {
                temp_deg = Math_RadToDeg(-Math_Atan2F(temp_fa0, temp_fa1));
                var_fv1 = Math_SmoothStepToAngle(&player->unk_0E8, temp_deg, 0.5f, 4.0f, 0.0001f) * 20.0f;
            } else {
                temp_deg = Math_RadToDeg(Math_Atan2F(temp_fa0, temp_fa1));
                var_fv1 = Math_SmoothStepToAngle(&player->unk_0E8, temp_deg, 0.5f, 2.0f, 0.0001f) * 30.0f;
            }
            Math_SmoothStepToAngle(&player->unk_0EC, var_fv1, 0.1f, 5.0f, 0.0001f);
            if (D_80177A80 == 220) {
                player->unk_1D0++;
            }
            break;
        case 2:
            Math_SmoothStepToAngle(&player->unk_0E4, 20.0f, 0.1f, 0.5f, 0.0001f);
            Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.1f, 1.0f, 0.0001f);
            Math_SmoothStepToF(&D_80177A48[2], 0.05f, 1.0f, 0.005f, 0.0001f);
            Math_SmoothStepToF(&player->camAt.x, player->pos.x, D_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, player->pos.y, D_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, player->pos.z, D_80177A48[2], 500.0f, 0.0f);
            if (D_80177A80 == 350) {
                player->unk_1D0++;
                D_80177A48[2] = 0.0f;
                D_80177A48[3] = 0.05f;
            }
            break;
        case 3:
            if ((D_80177A80 >= 701) && (D_80177A80 < 1000)) {
                func_8004AA84();
            }
            Math_SmoothStepToAngle(&player->unk_0E4, 20.0f, 0.1f, 0.5f, 0);
            Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.1f, 1.0f, 0);
            Math_SmoothStepToF(&player->unk_0D0, 0.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[2], 0.1f, 1.0f, 0.002f, 0);
            Math_SmoothStepToF(&D_80177A48[3], 0.1f, 1.0f, 0.002f, 0);
            Matrix_RotateY(gCalcMatrix, player->unk_0E8 * M_DTOR, 0);
            Matrix_Push(&gCalcMatrix);
            Matrix_RotateY(gCalcMatrix, D_80177A48[5] * M_DTOR, 1);
            sp64.x = 0.0f;
            sp64.y = -200.0f;
            sp64.z = 800.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
            Math_SmoothStepToF(&player->camEye.x, player->pos.x + sp58.x, D_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, player->pos.y + sp58.y, D_80177A48[2], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.z, player->pos.z + sp58.z, D_80177A48[2], 500.0f, 0.0f);
            Matrix_Pop(&gCalcMatrix);
            sp64.x = 0.0f;
            sp64.y = 0;
            sp64.z = 150.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
            Math_SmoothStepToF(&player->camAt.x, player->pos.x + sp58.x, D_80177A48[3], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, player->pos.y + sp58.y, D_80177A48[3], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, player->pos.z + sp58.z, D_80177A48[3], 500.0f, 0.0f);
            D_80177A48[5] += D_80177A48[4];

            if ((D_80177A80 >= 401) && (D_80177A80 < 1000)) {
                Math_SmoothStepToF(&D_80177A48[4], 0.5f, 1.0f, 0.003f, 0);
            }
            if (D_80177A80 >= 1101) {
                Math_SmoothStepToF(&D_80177A48[4], 0.0f, 1.0f, 0.003f, 0);
            }
            if (D_80177A80 == 1270) {
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
                Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                player->unk_1D0++;
                player->unk_0D0 = 2.0f;
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
            }
            break;
        case 4:
            if (D_80177A80 >= 1270) {
                player->unk_0D0 *= 1.2f;
                player->unk_25C += 0.04f;
                if (player->unk_25C > 0.6f) {
                    player->unk_25C = 0.6f;
                }
                player->unk_190 = 2.0f;
            }
            if (D_80177A80 == 1290) {
                func_8001DBD0(50);
            }
            if (D_80177A80 >= 1301) {
                D_80178358 = 0xFF;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 8;
                if (D_80178340 == 0xFF) {
                    player->state_1C8 = 6;
                    player->timer_1F8 = 0;
                    D_8017837C = 4;
                    D_800D3180[gCurrentLevel] = Play_CheckMedalStatus(150) + 1;
                }
            }
            break;
    }

    switch (D_80177A80) {
        case 981:
            D_80177830 = 1;
            break;
        case 1181:
            D_80177830 = 0;
            break;
        case 240:
            func_8001D444(0, 0x26, 0, 0xFF);
            break;
        case 330:
            D_80177840 = 100;
            break;
        case 470:
            func_800A6148();
            if (gTeamShields[1] > 0) {
                func_i1_80190F74(&gActors[0], 0);
            }
            if (gTeamShields[2] > 0) {
                func_i1_80190F74(&gActors[1], 1);
            }
            if (gTeamShields[3] > 0) {
                func_i1_80190F74(&gActors[2], 2);
            }
            break;
        case 410:
            func_800BA808(gMsg_ID_2335, RCID_FOX);
            break;
        case 550:
            if ((gTeamShields[2] == -1) || (gTeamShields[2] == 0)) {
                func_800BA808(gMsg_ID_20333, RCID_ROB64);
            } else {
                func_800BA808(gMsg_ID_2300, RCID_SLIPPY);
            }
            break;
        case 682:
            if ((gTeamShields[3] == -1) || (gTeamShields[3] == 0)) {
                func_800BA808(gMsg_ID_20332, RCID_ROB64);
            } else {
                func_800BA808(gMsg_ID_2310, RCID_PEPPY);
            }
            break;
        case 816:
            if ((gTeamShields[1] == -1) || (gTeamShields[1] == 0)) {
                func_800BA808(gMsg_ID_20331, RCID_ROB64);
            } else {
                func_800BA808(gMsg_ID_2320, RCID_FALCO);
            }
            break;
        case 1150:
            if (gTeamShields[1] > 0) {
                gActors[0].unk_0B8 = 1;
                gActors[0].fwork[9] = 2.0f;
                gActors[0].timer_0BC = 50;
                Audio_PlaySfx(0x09000002, &gActors[0].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                gActors[0].fwork[29] = 5.0f;
            }
            break;
        case 1190:
            if (gTeamShields[2] > 0) {
                gActors[1].unk_0B8 = 1;
                gActors[1].fwork[9] = 2.0f;
                gActors[1].timer_0BC = 50;
                Audio_PlaySfx(0x09000002, &gActors[1].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                gActors[1].fwork[29] = 5.0f;
            }
            break;
        case 1230:
            if (gTeamShields[3] > 0) {
                gActors[2].unk_0B8 = 1;
                gActors[2].fwork[9] = 2.0f;
                gActors[2].timer_0BC = 50;
                Audio_PlaySfx(0x09000002, &gActors[2].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                gActors[2].fwork[29] = 5.0f;
            }
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);
    sp64.x = 0.0f;
    sp64.y = 0.0f;
    sp64.z = player->unk_0D0 + player->unk_110;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp64, &sp58);
    player->vel.x = sp58.x;
    player->vel.z = sp58.z;
    player->vel.y = sp58.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

#include "global.h"
#include "DF4260.h"

void func_DF4260_80187520(s32 arg0, void* arg1) {
}

void func_DF4260_80187530(Object_80* obj80) {
}

extern Gfx* D_60199D0;

void func_DF4260_8018753C(Object_80* arg0) {

    GCGM_BACK();
    GDL(&D_60199D0);
    GSGM_BACK();
}

void func_DF4260_801875A4(Object* arg0) {
    f32 sp1C;
    f32 sp18;
    f32 var_f;

    if (!(gFrameCount & 3)) {
        sp1C = (Rand_ZeroOne() - 0.5f) * 10.0f;
        sp18 = (Rand_ZeroOne() - 0.5f) * 10.0f;
        var_f = ((Rand_ZeroOne() * 0.5f) + 1.0f);
        func_8007C85C(arg0->pos.x + sp1C, arg0->pos.y + sp18, arg0->pos.z, 4.0f * var_f);
    }
}

void func_DF4260_80187670(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8, s32 arg9) {

    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = arg9;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->obj.rot.x = arg5;
    arg0->obj.rot.y = arg6;
    arg0->timer_0BC = arg7;
    arg0->timer_0BE = 20;
    arg0->unk_0B4 = arg8;
    arg0->unk_124.y = arg4;
    Object_SetInfo(&arg0->info, arg0->obj.id);
}

void func_DF4260_80187710(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 i;
    
    for(i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
        if (gObjects2F4[i].obj.status == 0) {
            func_DF4260_80187670(&gObjects2F4[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            return;
        }
    }
}

extern void func_8007F11C(s32, f32, f32, f32, f32);

void func_DF4260_801877A0(Boss* arg0, f32 arg1, f32 arg2, f32 arg3) {
    Vec3f sp2C;
    Vec3f sp20;

    sp2C.x = arg1;
    sp2C.y = arg2;
    sp2C.z = arg3;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);
    func_8007F11C(OBJ_8C_353, arg0->obj.pos.x + sp20.x, arg0->obj.pos.y + sp20.y, arg0->obj.pos.z + sp20.z, 100.0f);
}

void func_DF4260_80187838(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
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

extern f32 D_DF4260_8019B6D8[68];

void func_DF4260_801878D8(Boss* arg0) {
    s32 i;

    D_801613A0 = 0;
    if (gLevelMode == 0) {
        if (gPlayer[0].state_1C8 == 3) {
            gPlayer[0].state_1C8 = 9;
            gPlayer[0].unk_1D0 = 0;
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
        }
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        return;
    }

    for (i = 0; i < ARRAY_COUNT(D_DF4260_8019B6D8); i++) {
        D_DF4260_8019B6D8[i] = 0.0f;
    }
}

void func_DF4260_8018798C(Boss* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8007BFFC(arg1, arg2, arg3, 0.0f, 0.0f, 0.0f, arg4, 30);
    func_8007A6F0(&arg0->obj.pos, 0x29034003);
}

void func_DF4260_801879F0(Boss* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8007D1E0(arg1, arg2, arg3, arg4);
    func_8007A6F0(&arg0->obj.pos, 0x29034003);
}

void func_DF4260_80187A38(Boss* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    func_8007C120(arg1, arg2, arg3, arg0->vel.x, arg0->vel.y, arg0->vel.z, arg4, arg5);
}

f32 func_DF4260_80187A88(s32 arg0) {
    f32 ret = arg0 * 0.5f;

    if (ret > 8.0f) {
        ret = 8.0f;
    }
    return ret;
}

extern void func_800430DC(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32); /* extern */

void func_DF4260_80187AC8(Boss* arg0) {
    Object_4C* var_v0_2;
    s32 var_v0;
    s32 var_s1;
    s32 var_s1_2;

    if (arg0->unk_062 != 0) {
        arg0->unk_062 = 0;
        if (arg0->unk_066 == 0) {
            arg0->swork[10] = 15;
            arg0->swork[29] -= arg0->unk_064;
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[62], D_DF4260_8019B6D8[63], D_DF4260_8019B6D8[64], 0.2f, 20);
            if (arg0->swork[29] < 30) {
                func_8007A6F0(&arg0->obj.pos, 0x2943500F);
            } else {
                func_8007A6F0(&arg0->obj.pos, 0x29034003);
            }
            func_800BA808(gMsg_ID_2270, RCID_BOSS_CORNERIA);
            if (arg0->swork[29] <= 0) {
                arg0->swork[10] = 1000;
                ((Hitbox*)(arg0->info.hitbox))[0].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[62], D_DF4260_8019B6D8[63], D_DF4260_8019B6D8[64], 10.0f);
                Audio_PlaySfx(0x2940D09A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_Timer_80161A60 = 8;
                if (fabsf(arg0->obj.rot.x) < 20.0f) {
                    arg0->swork[32] = 1;
                }
                arg0->unk_04E = 7;
                arg0->timer_050 = 100;
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
                func_80042EC0(arg0);
                D_801613A0 = 100000;
                return;
            }
        } else if (arg0->unk_066 == 3) {
            arg0->swork[3] = 15;
            arg0->swork[20] = 30;
            arg0->swork[28] -= arg0->unk_064;
            func_DF4260_801879F0(arg0, D_DF4260_8019B6D8[12] +  ((Rand_ZeroOne() - 0.5f) * 60.0f), D_DF4260_8019B6D8[13], D_DF4260_8019B6D8[14] +  ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[12], D_DF4260_8019B6D8[13], D_DF4260_8019B6D8[14], 0.1f, 20);
            if (arg0->swork[28] <= 0) {
                arg0->swork[3] = 1000;
                ((Hitbox*)(arg0->info.hitbox))[3].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[12], D_DF4260_8019B6D8[13], D_DF4260_8019B6D8[14], 10.0f);
            }
        }

        if (arg0->unk_066 == 1) {
            arg0->swork[2] = 15;
            arg0->swork[21] = 30;
            arg0->swork[26] -= arg0->unk_064;

            func_DF4260_801879F0(arg0, D_DF4260_8019B6D8[6] + ((Rand_ZeroOne() - 0.5f) * 60.0f), D_DF4260_8019B6D8[7], D_DF4260_8019B6D8[8] +  ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[6], D_DF4260_8019B6D8[7], D_DF4260_8019B6D8[8], 0.1f, 20);
            if (arg0->swork[26] <= 0) {
                arg0->swork[2] = 1000;
                 ((Hitbox*)(arg0->info.hitbox))[1].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[6], D_DF4260_8019B6D8[7], D_DF4260_8019B6D8[8], 7.0f);
            }
        } else if (arg0->unk_066 == 2) {
            arg0->swork[1] = 15;
            arg0->swork[22] = 30;
            arg0->swork[27] -= arg0->unk_064;
            func_DF4260_801879F0(arg0, D_DF4260_8019B6D8[0] + ((Rand_ZeroOne() - 0.5f) * 60.0f), D_DF4260_8019B6D8[1], D_DF4260_8019B6D8[2] + ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[0], D_DF4260_8019B6D8[1], D_DF4260_8019B6D8[2], 0.1f, 20);
            if (arg0->swork[27] <= 0) {
                arg0->swork[1] = 1000;
                ((Hitbox*)(arg0->info.hitbox))[2].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[0], D_DF4260_8019B6D8[1], D_DF4260_8019B6D8[2], 7.0f);
            }
        } else if ((arg0->unk_066 == 4) || (arg0->unk_066 == 5)) {
            Audio_PlaySfx(0x2903300E, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->swork[23] = 200;
            if (arg0->unk_066 == 4) {
                arg0->swork[24] -= arg0->unk_064;
                arg0->swork[7] = arg0->swork[8] = arg0->swork[9] = 5;
                arg0->swork[18] = 30;
                if (arg0->swork[24] <= 0) {
                    arg0->swork[7] = arg0->swork[8] = arg0->swork[9] = 1000;
                    ((Hitbox*)(arg0->info.hitbox))[4].z.size = 100000.0f;
                    for (var_s1 = 3; var_s1 < 6; var_s1++) {
                        func_800430DC(D_DF4260_8019B6D8[18 + var_s1 + 2], D_DF4260_8019B6D8[24 + var_s1 + 2], D_DF4260_8019B6D8[30 + var_s1 + 2],D_DF4260_8019B6D8[36 + var_s1 + 2], D_DF4260_8019B6D8[42 + var_s1 + 2], D_DF4260_8019B6D8[48 + var_s1 + 2], 0.0f, (Rand_ZeroOne() * 20.0f), 0.0f, 5.5f, var_s1 + 0x1C, ((s32) (Rand_ZeroOne() * 30.0f)) + 60.0f);
                    }
                    if (arg0->unk_04E < 5) {
                        arg0->unk_04E = 5;
                        arg0->timer_050 = 60;
                    }
                }
            } else {
                arg0->swork[25] -= arg0->unk_064;
                arg0->swork[4] = arg0->swork[5] = arg0->swork[6] = 5;
                arg0->swork[19] = 30;
                if (arg0->swork[25] <= 0) {
                    arg0->swork[4] = arg0->swork[5] = arg0->swork[6] = 1000;
                    ((Hitbox*)(arg0->info.hitbox))[5].z.size = 100000.0f;

                    for (var_s1 = 0; var_s1 < 3; var_s1++) {
                        func_800430DC(D_DF4260_8019B6D8[18 + var_s1 + 2], D_DF4260_8019B6D8[24 + var_s1 + 2], D_DF4260_8019B6D8[30 + var_s1 + 2],D_DF4260_8019B6D8[36 + var_s1 + 2], D_DF4260_8019B6D8[42 + var_s1 + 2], D_DF4260_8019B6D8[48 + var_s1 + 2], 0.0f, (Rand_ZeroOne() * 20.0f), 0.0f, 5.5f, var_s1 + 0x1C, ((s32) (Rand_ZeroOne() * 30.0f)) + 60.0f);
                    }
                    if (arg0->unk_04E < 5) {
                        arg0->unk_04E = 6;
                        arg0->timer_050 = 60;
                    }
                }
            }

            if (arg0->timer_050 < 50) {
                arg0->timer_050 += 10;
            }

            if ((arg0->unk_04E != 0) && (arg0->unk_04E < 5)) {
                arg0->fwork[14] = 0.0f;
                if (Rand_ZeroOne() < 0.5f) {
                    var_v0 = 0x144;
                } else {
                    var_v0 = 0x147;
                }
                func_DF4260_80187838(arg0, arg0->obj.pos.x, arg0->obj.pos.y + 100.0f, arg0->obj.pos.z, var_v0);
            }
            if (arg0->unk_04E < 5) {
                arg0->unk_04E = 0;
                switch ((s32) (Rand_ZeroOne() * 5.0f)) {
                    case 0:
                        arg0->swork[31] = 2;
                        break;
                    case 1:
                        arg0->swork[31] = 3;
                        break;
                    case 2:
                    case 3:
                    case 4:
                        arg0->swork[31] = 4;
                        break;
                }
            }
        } else {
            func_8007A6F0(&arg0->obj.pos, 0x29121007);
        }
    }

    if (!(D_801615D0.y < 0.0f)) {

        var_v0_2 = gObjects4C;
        for (var_s1 = 0; var_s1 < 40; var_s1++, var_v0_2++) {
            if ((var_v0_2->obj.status == 2) && (var_v0_2->obj.id == OBJ_4C_162)) {
                if ((fabsf(var_v0_2->obj.pos.x - D_DF4260_8019B6D8[20]) < 90.0f) && (fabsf(var_v0_2->obj.pos.z - D_DF4260_8019B6D8[32]) < 90.0f)) {
                    var_v0_2->unk_46 = 1;
                    break;
                } else if ((fabsf(var_v0_2->obj.pos.x - D_DF4260_8019B6D8[23]) < 90.0f) && (fabsf(var_v0_2->obj.pos.z - D_DF4260_8019B6D8[35]) < 90.0f)) {
                    var_v0_2->unk_46 = 1;
                    break;
                }
            } 
        }
        if ((arg0->swork[1] == 1000) && !(gFrameCount & 3)) {
            func_8007BFFC(D_DF4260_8019B6D8[3], D_DF4260_8019B6D8[4], D_DF4260_8019B6D8[5], (D_DF4260_8019B6D8[3] - arg0->obj.pos.x) * 0.1f, 0.0f, (D_DF4260_8019B6D8[5] - arg0->obj.pos.z) * 0.1f, 1.5f, 5);
        }
        if ((arg0->swork[2] == 1000) && !(gFrameCount & 3)) {
            func_8007BFFC(D_DF4260_8019B6D8[9], D_DF4260_8019B6D8[10], D_DF4260_8019B6D8[11], (D_DF4260_8019B6D8[9] - arg0->obj.pos.x) * 0.1f, 0.0f, (D_DF4260_8019B6D8[11] - arg0->obj.pos.z) * 0.1f, 1.5f, 5);
        }
        if ((arg0->swork[3] == 1000) && !(gFrameCount & 3)) {
            func_8007BFFC(D_DF4260_8019B6D8[12], D_DF4260_8019B6D8[13], D_DF4260_8019B6D8[14], 0.0f, 20.0f, 0.0f, 2.0f, 5);
        }
        if ((arg0->swork[4] == 1000) && !(gFrameCount & 3)) {
            func_8007BFFC(D_DF4260_8019B6D8[56], D_DF4260_8019B6D8[57], D_DF4260_8019B6D8[58], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
        if ((arg0->swork[7] == 1000) && !(gFrameCount & 3)) {
            func_8007BFFC(D_DF4260_8019B6D8[59], D_DF4260_8019B6D8[60], D_DF4260_8019B6D8[61], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
    }
}

extern s32 func_8008AC54(s32);

s32 func_DF4260_80188750(Boss* arg0) {

    arg0->swork[35]++;
    if (arg0->swork[35] >= 5) {
        arg0->swork[35] = 0;
        return 0xBF;
    }

    if (func_8008AC54(0) < 4) {
        return 0xBE;
    } else {
        return 0;
    }

}

void func_DF4260_801887AC(Boss* arg0) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s32 sp38;
    s32 temp_v0;
    
    if ((D_801613A0 >= 500)) {
        temp_v0 = arg0->swork[30];
        if (temp_v0 != 0) {
            switch (temp_v0) {
                case 1:
                    sp38 = func_DF4260_80188750(arg0);
                    if (sp38 != 0) {
                        if (arg0->swork[1] != 1000) {
                            func_DF4260_80187710(D_DF4260_8019B6D8[0], D_DF4260_8019B6D8[1], D_DF4260_8019B6D8[2], 65.0f, 0.0f, D_DF4260_8019B6D8[16] + arg0->obj.rot.y, 0, 0, sp38);
                        }
                        if (arg0->swork[2] != 1000) {
                            func_DF4260_80187710(D_DF4260_8019B6D8[6], D_DF4260_8019B6D8[7], D_DF4260_8019B6D8[8], 65.0f, 0.0f, D_DF4260_8019B6D8[16] + arg0->obj.rot.y, 0, 0, sp38);
                        }
                    }
                    arg0->swork[30] = 0;
                    break;
                case 2:
                    func_DF4260_801877A0(arg0, 40.0f, 228.0f, 212.0f);
                    func_DF4260_801877A0(arg0, -40.0f, 228.0f, 212.0f);
                    arg0->swork[30] = 0;
                    break;
                case 3:
                    if (arg0->swork[3] != 1000) {
                        sp3C = gPlayer[0].pos.x;
                        sp40 = gPlayer[0].pos.y;
                        sp44 = gPlayer[0].unk_138;
                        gPlayer[0].pos.x += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        gPlayer[0].pos.y += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        gPlayer[0].unk_138 += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        func_8007F11C(0x178, D_DF4260_8019B6D8[12], D_DF4260_8019B6D8[13], D_DF4260_8019B6D8[14], 60.0f);
                        gPlayer[0].pos.x = sp3C;
                        gPlayer[0].pos.y = sp40;
                        gPlayer[0].unk_138 = sp44;
                    }
                    arg0->swork[30] = 0;
                    break;
            }
            
        }
    }
}

extern void func_8002E4F8(u16*, s32);

void func_DF4260_80188A18(Boss* arg0) {

    if (arg0->timer_050 == 0) {
        arg0->unk_04E = 0;
        arg0->timer_050 = (s32)(Rand_ZeroOne() * 20.0f) + 20;
        arg0->fwork[14] = 0.0f;
        
        switch ((s32)(Rand_ZeroOne() * 8.0f)) {
            case 0:
            case 1:
                arg0->swork[31] = 1;
                break;
            case 2:
            case 3:
                arg0->swork[31] = 2;
                break;
            case 4:
                if (D_801615D0.y < 0.0f) {
                    arg0->swork[31] = 4;
                } else {
                    arg0->swork[31] = 3;
                }
                break;
            case 5:
            case 6:
            case 7:
                arg0->swork[31] = 4;
                break;
        }
        
        if ((D_801613A0 >= 1001) && (Rand_ZeroOne() < 0.3f)) {
            if (Rand_ZeroOne() < 0.5f) {
                func_8002E4F8(gMsg_ID_2263, RCID_BOSS_CORNERIA);
            } else {
                func_8002E4F8(gMsg_ID_2265, RCID_BOSS_CORNERIA);
            }
        }
    }
    if ((D_801613A0 >= 801) && !(D_801613A0 & 0x1FF)) {
        if (D_80177B6C < 2) {
            func_800BA808(gMsg_ID_20237, RCID_PEPPY);
        } else if (D_801615D0.z > 0.0f) {
            func_800BA808(gMsg_ID_2233, RCID_FALCO);
        } else {
            func_800BA808(gMsg_ID_2282, RCID_PEPPY);
        }
    }
}

extern void func_80062B60(f32, f32, s32, f32);

void func_DF4260_80188C7C(Boss* arg0) {

    if (arg0->unk_044 == 0) {
        arg0->unk_044++;
        arg0->fwork[12] *= -0.2f;
        Audio_PlaySfx(0x19030004, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_80062B60(D_DF4260_8019B6D8[56], D_DF4260_8019B6D8[58], 0, 30.0f);
        arg0->swork[18] = 13;
        arg0->swork[19] = 15;
        arg0->swork[21] = 10;
        arg0->swork[22] = 12;
        arg0->swork[20] = 17;
        D_80178480 = 20;
    } else {
        arg0->fwork[12] = 0.0f;
    }
}

void func_DF4260_80188D50(Boss*);
#ifdef IMPORT_DATA
// Matching - Requires Data Import
void func_DF4260_80188D50(Boss* arg0) {
    static s32 D_DF4260_801997E0 = 0;
    s32 i;
    Vec3f sp48;
    Vec3f sp3C;
    s32 temp_ft3;

    if (arg0->unk_0D0 == 0) {
        if (gPlayer[0].unk_1F4 != 0) {
            D_DF4260_801997E0 = 80;
        }
        
        if (D_DF4260_801997E0 != 0) {
            D_DF4260_801997E0--;
        } else if ((gPlayer[0].pos.y < 200.0f) && (arg0->unk_04E < 5) && (fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 200.0f) && (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 200.0f) && (gPlayer[0].unk_4D8 > 180.0f)) {
            arg0->unk_0D0++;
            D_DF4260_801997E0 = 20;
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
            Matrix_RotateY(gCalcMatrix, (gPlayer[0].unk_0E8 + gPlayer[0].unk_114) * 0.017453292f, 0);
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
                    return;
                }
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80188D50.s")
#endif

extern AnimationHeader D_602BC18;
extern AnimationHeader D_602C0D0;
extern Vec3f D_DF4260_801997E4;
extern Vec3f D_DF4260_801997F0;
extern Vec3f D_DF4260_801997FC;
extern Vec3f D_DF4260_80199808;

extern f32 D_DF4260_8019B714;
extern f32 D_DF4260_8019B718;

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80189058.s")

extern f32 D_DF4260_8019B714;
extern f32 D_DF4260_8019B718;

s32 func_DF4260_8018A434(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Boss* arg4_4 = (Boss*)arg4;

    if (arg4_4->swork[arg0] == 1000) {
        *arg1 = 0;
    }

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, 1001);
    switch (arg0) {
        case 6:
            arg3->x += arg4_4->fwork[1];
            arg3->y += arg4_4->fwork[1];
            arg3->y -= arg4_4->fwork[13] * 0.6f;
            break;
        case 5:
            arg3->x -= arg4_4->fwork[1];
            arg3->y -= arg4_4->fwork[1];
            arg3->z += arg4_4->fwork[1];
            break;
        case 4:
            arg3->x += arg4_4->fwork[1];
            arg3->y += arg4_4->fwork[1];
            arg3->z -= arg4_4->fwork[1];
            break;
        case 9:
            arg3->x -= arg4_4->fwork[0];
            arg3->y -= arg4_4->fwork[0];
            arg3->y += arg4_4->fwork[13];
            break;
        case 8:
            arg3->x += arg4_4->fwork[0];
            arg3->y += arg4_4->fwork[0];
            arg3->z -= arg4_4->fwork[0];
            break;
        case 7:
            arg3->x -= arg4_4->fwork[0];
            arg3->y -= arg4_4->fwork[0];
            arg3->z += arg4_4->fwork[0];
            break;
        case 3:
            arg3->x += arg4_4->fwork[2];
            arg3->y += arg4_4->fwork[2];
            arg3->z += D_DF4260_8019B714;
            break;
        case 1:
            arg3->x += arg4_4->fwork[4] - D_DF4260_8019B714;
            arg3->y += arg4_4->fwork[4];
            break;
        case 2:
            arg3->x += arg4_4->fwork[3] + D_DF4260_8019B714;
            arg3->y += arg4_4->fwork[3];
            break;
        case 16:
            arg3->x += D_DF4260_8019B718;
            break;
    }
    if ((arg4_4->swork[arg0] & 1) || (arg4_4->timer_05C & 1)) {
        RCP_SetupDL_64();
        GPC(64, 64, 255, 255);
    }
    return 0;
}

extern Vec3f D_DF4260_80199814;
extern Vec3f D_DF4260_80199820;
extern Vec3f D_DF4260_8019982C;
extern Vec3f D_DF4260_80199838;
extern Vec3f D_DF4260_80199844;
extern Vec3f D_DF4260_80199850;
extern Vec3f D_DF4260_8019985C;

void func_DF4260_8018A730(s32 arg0, Vec3f* arg1, void* arg2) {
    s32 pad;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C;


    sp80 = D_DF4260_80199814;
    sp68 = D_DF4260_80199820;
    sp5C = D_DF4260_8019982C;
    sp50 = D_DF4260_80199838;
    sp44 = D_DF4260_80199844;
    sp38 = D_DF4260_80199850;
    sp2C = D_DF4260_8019985C;
    
    if ((arg0 >= 4) && (arg0 < 10)) {
        Matrix_MultVec3f(gCalcMatrix, &sp80, &sp74);

        D_DF4260_8019B6D8[arg0 + 16] = sp74.x;
        D_DF4260_8019B6D8[arg0 + 22] = sp74.y;
        D_DF4260_8019B6D8[arg0 + 28] = sp74.z;
        Matrix_GetYRPAngles(gCalcMatrix, &sp74);
        D_DF4260_8019B6D8[arg0 + 34] = sp74.x;
        D_DF4260_8019B6D8[arg0 + 40] = sp74.y;
        D_DF4260_8019B6D8[arg0 + 46] = sp74.z;
    }
    switch (arg0) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp68, &sp74);
            D_DF4260_8019B6D8[3] = sp74.x;
            D_DF4260_8019B6D8[4] = sp74.y;
            D_DF4260_8019B6D8[5] = sp74.z;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp74);
            D_DF4260_8019B6D8[0] = sp74.x;
            D_DF4260_8019B6D8[1] = sp74.y;
            D_DF4260_8019B6D8[2] = sp74.z;
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp68, &sp74);
            D_DF4260_8019B6D8[9] = sp74.x;
            D_DF4260_8019B6D8[10] = sp74.y;
            D_DF4260_8019B6D8[11] = sp74.z;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp74);
            D_DF4260_8019B6D8[6] = sp74.x;
            D_DF4260_8019B6D8[7] = sp74.y;
            D_DF4260_8019B6D8[8] = sp74.z;
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp50, &sp74);
            D_DF4260_8019B6D8[12] = sp74.x;
            D_DF4260_8019B6D8[13] = sp74.y;
            D_DF4260_8019B6D8[14] = sp74.z;
            return;
        case 17:
            Matrix_MultVec3f(gCalcMatrix, &sp44, &sp74);
            D_DF4260_8019B6D8[56] = sp74.x;
            D_DF4260_8019B6D8[57] = sp74.y;
            D_DF4260_8019B6D8[58] = sp74.z;
            Matrix_MultVec3f(gCalcMatrix, &sp38, &sp74);
            D_DF4260_8019B6D8[59] = sp74.x;
            D_DF4260_8019B6D8[60] = sp74.y;
            D_DF4260_8019B6D8[61] = sp74.z;
            return;
        case 10:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp74);
            D_DF4260_8019B6D8[62] = sp74.x;
            D_DF4260_8019B6D8[63] = sp74.y;
            D_DF4260_8019B6D8[64] = sp74.z;
            /* fallthrough */
        default:
            return;
    }
}

extern Limb* D_602BE64;

void func_DF4260_8018AA74(Boss* arg0) {
    Matrix_Translate(gCalcMatrix, 0.0f, 700.0f, 0.0f, (u8) 1);
    Animation_DrawSkeleton(2, &D_602BE64, arg0->vwork, func_DF4260_8018A434, func_DF4260_8018A730, &arg0->obj, gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
}

s32 func_DF4260_8018AB08(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Boss* arg4_4 = (Boss*)arg4;

    if (arg0 == 1) {
        arg3->x += arg4_4->fwork[16];
    }
    if ((arg0 == 3) && (arg4_4->obj.id == OBJ_2F4_176)) {
        arg3->x += arg4_4->fwork[16];
    }
    return 0;
}

extern Vec3f D_DF4260_80199868;
extern Temp_f32Arr4 D_DF4260_80199874;
extern Temp_f32Arr4 D_DF4260_80199884;

s32 func_DF4260_8018AB64(Object_2F4_Test* arg0) {
    s32 pad[2];
    s32 i;
    s32 temp_v0;
    Vec3f sp7C;
    Vec3f sp70;
    Temp_f32Arr4 sp60;
    Temp_f32Arr4 sp50;

    sp70 = D_DF4260_80199868;
    sp60 = D_DF4260_80199874;
    sp50 = D_DF4260_80199884;

    for (i = 0; i < 4; i++) {
        sp7C.x = sp60.arr[i] + arg0->obj.pos.x;
        sp7C.y = arg0->obj.pos.y;
        sp7C.z = sp50.arr[i] + arg0->obj.pos.z;
        temp_v0 = func_8006351C(arg0->index, &sp7C, &sp70, 1);
        if ((temp_v0 != 0) && (temp_v0 >= 10)) {
            if ((gObjects80[temp_v0 - 10].obj.status == 2) && (gObjects80[temp_v0 - 10].obj.id == OBJ_80_40)) {
                return temp_v0 - 9;
            }
        }
    }
    return 0;
}

void func_DF4260_8018ACE0(Object_2F4_Test* arg0) {

    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        if (arg0->unk_0D2 == 0) {
            Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_8007C120(arg0->obj.pos.x, arg0->obj.pos.y + 200.0f, arg0->obj.pos.z, arg0->unk_0E8.x, arg0->unk_0E8.y, arg0->unk_0E8.z, 0.1f, 20);
            arg0->timer_0C6 = 15;
            arg0->unk_0CE -= arg0->unk_0D6;
            if (arg0->unk_0CE <= 0) {
                arg0->obj.id = OBJ_2F4_179;
                Object_SetInfo(&arg0->info, arg0->obj.id);
                arg0->unk_0B8 = 100;
                arg0->timer_0BC = 10;
                arg0->timer_0CA[0] = 0;
                arg0->unk_0E8.z = 0.0f;
                arg0->unk_0E8.y = 0.0f;
                arg0->unk_0E8.x = 0.0f;
            }
        }
    }
    if ((arg0->unk_0CE < 11) && !(gFrameCount & 3)) {
        func_8007D2C8(((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 100.0f) + (arg0->obj.pos.y + 200.0f), (Rand_ZeroOne() * 50.0f) + (arg0->obj.pos.z + 50.0f), 3.0f);
        func_8007C120(arg0->obj.pos.x, arg0->obj.pos.y + 200.0f, arg0->obj.pos.z, arg0->unk_0E8.x, arg0->unk_0E8.y, arg0->unk_0E8.z, 0.1f, 10);
    }
}

extern AnimationHeader D_602991C;
extern Gfx* D_60329C0;

void func_DF4260_8018AED0(Object_2F4_Test* arg0) {
    Vec3f sp40[20];
    f32 temp_sin;
    f32 temp_cos;

    func_DF4260_8018ACE0(arg0);
    Math_SmoothStepToVec3fArray(sp40, arg0->vwork, 0, Animation_GetFrameData(&D_602991C, arg0->unk_0B6, sp40), 1.0f, 1.0f, 1.0f);
    temp_sin = __sinf(arg0->obj.rot.y * 0.017453292f);
    arg0->unk_0E8.x = arg0->fwork[0] * temp_sin;
    temp_cos = __cosf(arg0->obj.rot.y * 0.017453292f);
    arg0->unk_0E8.z = arg0->fwork[0] * temp_cos;
    switch (arg0->unk_0B8) {
        case 0:
            arg0->fwork[1] += 20.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            arg0->unk_0B6 = 0;
            arg0->fwork[0] += 1.0f;
            if (arg0->fwork[0] > 10.0f) {
                arg0->fwork[0] = 10.0f;
            }
            
            arg0->swork[0] = func_DF4260_8018AB64(arg0);
            if (arg0->swork[0] != 0) {
                arg0->unk_0B8++;
                return;
            }
            return;
        case 1:
            arg0->unk_0B6++;
            arg0->fwork[1] += 20.0f;
            arg0->fwork[0] = 0.0f;
            if (arg0->unk_0B6 == 50) {
                gObjects80[arg0->swork[0] - 1].unk_48 = 1;
            }
            if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_602991C)) {
                arg0->unk_0B8++;
                return;
            }
            break;
        case 2:
            arg0->unk_0B6 = 0;
            arg0->fwork[1] += 20.0f;
            break;
    }
}

void func_DF4260_8018B0B4(Object_2F4* arg0) {
    s32 i;

    for (i = 0; i < 50; i++) {
        if (gObjects80[i].obj.status == 0) {
            Object_80_Initialize(&gObjects80[i]);
            gObjects80[i].obj.status = 1;
            gObjects80[i].obj.id = OBJ_80_42;
            gObjects80[i].obj.pos.x = arg0->obj.pos.x;
            gObjects80[i].obj.pos.y = arg0->obj.pos.y;
            gObjects80[i].obj.pos.z = arg0->obj.pos.z;
            gObjects80[i].obj.rot.y = arg0->obj.rot.y;
            Object_SetInfo(&gObjects80[i].info, gObjects80[i].obj.id);
            arg0->unk_050 = i;
            return;
        }
    }
}


extern AnimationHeader D_602AA04;

void func_DF4260_8018B15C(Object_2F4_Test* arg0) {
    Vec3f sp60[20];
    Vec3f sp54;
    Vec3f sp48;
    Object_80* temp_s1;
    f32 temp_sin;
    f32 temp_cos;

    func_DF4260_8018ACE0(arg0);
    temp_s1 = &gObjects80[arg0->swork[0]];
    temp_sin = __sinf(arg0->obj.rot.y * 0.017453292f);
    arg0->unk_0E8.x = arg0->fwork[0] * temp_sin;
    temp_cos = __cosf(arg0->obj.rot.y * 0.017453292f);
    arg0->unk_0E8.z = arg0->fwork[0] * temp_cos;
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0);

    switch (arg0->unk_0B8) {
        case 3:
            break;
        case 0:
            arg0->timer_0BC = 40;
            arg0->unk_0B8 = 1;
            arg0->unk_0B6 = 0;
            break;
        case 1:
            arg0->fwork[0] = -10.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            if (arg0->timer_0BC == 0) {
                arg0->unk_0B8 = 2;
                arg0->swork[2] = (s32) (Rand_ZeroOne() * 10.0f) + 10;
            }
            break;
        case 2:
            arg0->fwork[0] = -10.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            arg0->unk_0B6++;
            if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_602AA04)) {
                arg0->unk_0B8 = 3;
            }
            if (arg0->unk_0B6 == (Animation_GetFrameCount(&D_602AA04) - arg0->swork[2])) {
                arg0->swork[1] = 1;
                temp_s1->unk_48 = 1;
                sp54.x = 0.0f;
                sp54.y = 0.0f;
                sp54.z = 30.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
                temp_s1->vel.x = sp48.x;
                temp_s1->vel.y = sp48.y;
                temp_s1->vel.z = sp48.z;
                Audio_PlaySfx(0x2902401C, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
    }
    if (arg0->swork[1] == 0) {
        temp_s1->obj.pos.x = arg0->fwork[2];
        temp_s1->obj.pos.y = arg0->fwork[6];
        temp_s1->obj.pos.z = arg0->fwork[10];
        temp_s1->obj.rot.y = arg0->obj.rot.y;
        temp_s1->vel.y = 0.0f;
    }
    Math_SmoothStepToVec3fArray(sp60, arg0->vwork, 0, Animation_GetFrameData(&D_602AA04, arg0->unk_0B6, sp60), 1.0f, 1.0f, 1.0f);
}

extern AnimationHeader D_602A520;

void func_DF4260_8018B418(Object_2F4_Test* arg0) {
    s32 pad;
    Vec3f sp54[20];
    Object_80* temp_v0_2;
    f32 temp_sin;
    f32 temp_cos;
    s32 pad2[4];

    func_DF4260_8018ACE0(arg0);
    temp_sin = __sinf(arg0->obj.rot.y * 0.017453292f);
    arg0->unk_0E8.x = arg0->fwork[0] * temp_sin;
    temp_cos = __cosf(arg0->obj.rot.y * 0.017453292f);
    arg0->unk_0E8.z = arg0->fwork[0] * temp_cos;
    switch (arg0->unk_0B8) {
        case 0:
            arg0->unk_0B8 = 1;
            break;
        case 1:
            arg0->fwork[0] = 5.0f;
            arg0->fwork[1] += 5.0f;
            Texture_Scroll(&D_60329C0, 16, 16, 1);
            arg0->unk_0B6++;
            if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_602A520)) {
                arg0->unk_0B6 = 0;
            }
            break;
    }
    if (arg0->swork[1] == 0) {
        temp_v0_2 = &gObjects80[arg0->swork[0]];
        temp_v0_2->obj.pos.x = arg0->fwork[2];
        temp_v0_2->obj.pos.y = arg0->fwork[6];
        temp_v0_2->obj.pos.z = arg0->fwork[10];
        temp_v0_2->obj.rot.y = arg0->fwork[1];
        temp_v0_2->vel.y = 0.0f;
    }
    Math_SmoothStepToVec3fArray(sp54, arg0->vwork, 0, Animation_GetFrameData(&D_602A520, arg0->unk_0B6, sp54), 1.0f, 1.0f, 1.0f);
}


extern Temp_f32Arr4 D_DF4260_80199894;
extern Temp_f32Arr4 D_DF4260_801998A4;

void func_DF4260_8018B58C(Object_2F4_Test* arg0) {
    s32 i;
    Temp_f32Arr4 spB4;
    Temp_f32Arr4 spA4;

    spB4 = D_DF4260_80199894;
    spA4 = D_DF4260_801998A4;
    
    Math_SmoothStepToF(&arg0->unk_0E8.x, 0.0f, 0.05f, 1.0f, 0.0001f);
    Math_SmoothStepToF(&arg0->unk_0E8.y, 0.0f, 0.05f, 1.0f, 0.0001f);
    Math_SmoothStepToF(&arg0->unk_0E8.z, 0.0f, 0.05f, 1.0f, 0.0001f);
    
    switch (arg0->unk_0B8) {
        case 100:
            if (!(arg0->timer_0BC & 3)) {

                func_8007D2C8(((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 100.0f) + (arg0->obj.pos.y + 200.0f), (Rand_ZeroOne() * 50.0f) + (arg0->obj.pos.z + 50.0f), 3.0f);
                func_8007C120(arg0->obj.pos.x, arg0->obj.pos.y + 200.0f, arg0->obj.pos.z, arg0->unk_0E8.x, arg0->unk_0E8.y, arg0->unk_0E8.z, 0.1f, 10);
                Audio_PlaySfx(0x2903A008, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (arg0->timer_0BC == 0) {

                for (i = 0; i < 4; i++) {

                    func_800430DC(arg0->fwork[2 + i], arg0->fwork[6 + i], arg0->fwork[10 + i], 0.0f, 0.0f, 0.0f, spB4.arr[i] * ((Rand_ZeroOne() * 0.75f) + 0.5f), spA4.arr[i] * ((Rand_ZeroOne() * 0.75f) + 0.5f), (Rand_ZeroOne() - 0.5f) * 20.0f, 3.0f, i + 0x18, ((s32) (Rand_ZeroOne() * 30.0f) + 60.0f));

                }
                
                if ((fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) < 500.0f) && (fabsf(arg0->obj.pos.x - gPlayer[0].pos.x) < 200.0f) && (fabsf(arg0->obj.pos.y - gPlayer[0].pos.y) < 200.0f)) {
                    *D_Timer_80177BD0 = 25;
                }
                func_80077240(arg0->obj.pos.x, arg0->obj.pos.y + 250.0f, arg0->obj.pos.z, 5);
                gHitCount += 6;
                D_80177850 = 15;
                arg0->unk_0B8 = 101;
                arg0->timer_0BE = 50;
            }
            if (arg0->timer_0BC == 8) {
                func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y + 200.0f, arg0->obj.pos.z + 50.0f, 0.0f, 0.0f, 0.0f, 5.0f, 30);
                Audio_PlaySfx(0x2903B009, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 101:
            if ((arg0->timer_0BE != 0) && !(gFrameCount & 1)) {
                func_8007797C(arg0->obj.pos.x, arg0->obj.pos.y + 150.0f, arg0->obj.pos.z, 0.0f, 10.0f, 0.0f, 3.0f);
            }
            break;
    }
}

extern Limb* D_6029A48;

void func_DF4260_8018BAAC(Object_2F4_Test* arg0) {
    Animation_DrawSkeleton(3, &D_6029A48, arg0->vwork, func_DF4260_8018AB08, NULL, arg0, gCalcMatrix);
}

extern Vec3f D_DF4260_801998B4;

void func_DF4260_8018BAFC(s32 arg0, Vec3f* arg1, void* arg2) {
    Object_2F4_Test* arg2_2 = (Object_2F4_Test*) arg2;
    Vec3f sp28;
    Vec3f sp1C;

    sp28 = D_DF4260_801998B4;

    if (arg0 == 1) {
        Matrix_MultVec3f(gCalcMatrix, &sp28, &sp1C);
        arg2_2->fwork[2] = sp1C.x;
        arg2_2->fwork[6] = sp1C.y;
        arg2_2->fwork[10] = sp1C.z;
        if (arg2_2->swork[1] == 0) {
            gObjects80[arg2_2->swork[0]].obj.rot.x = -arg1->y;
        }
    }
}

void func_DF4260_8018BBA4(Object_2F4_Test* arg0) {
    Animation_DrawSkeleton(3, &D_6029A48, arg0->vwork, NULL, func_DF4260_8018BAFC, arg0, gCalcMatrix);
}

void func_DF4260_8018BBF8(Object_2F4_Test* arg0) {
    Animation_DrawSkeleton(3, &D_6029A48, arg0->vwork, func_DF4260_8018AB08, func_DF4260_8018BAFC, arg0, gCalcMatrix);
}

s32 func_DF4260_8018BC50(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    Object_2F4_Test* arg4_2 = (Object_2F4_Test*) arg4;

    if ((arg4_2->unk_0B8 == 101) && (arg0 != 8)) {
        *arg1 = NULL;
    }
    return false;
}

extern Vec3f D_DF4260_801998C0;

void func_DF4260_8018BC84(s32 arg0, Vec3f* arg1, void* arg2) {
    Object_2F4_Test* arg2_2 = (Object_2F4_Test*)arg2;
    Vec3f sp28;
    Vec3f sp1C;

    sp28 = D_DF4260_801998C0;

    Matrix_MultVec3f(gCalcMatrix, &sp28, &sp1C);
    switch (arg0) {
        case 1:
            arg2_2->fwork[2] = sp1C.x;
            arg2_2->fwork[6] = sp1C.y;
            arg2_2->fwork[10] = sp1C.z;
            return;
        case 2:
            arg2_2->fwork[3] = sp1C.x;
            arg2_2->fwork[7] = sp1C.y;
            arg2_2->fwork[11] = sp1C.z;
            return;
        case 3:
            arg2_2->fwork[4] = sp1C.x;
            arg2_2->fwork[8] = sp1C.y;
            arg2_2->fwork[12] = sp1C.z;
            return;
        case 4:
            arg2_2->fwork[5] = sp1C.x;
            arg2_2->fwork[9] = sp1C.y;
            arg2_2->fwork[13] = sp1C.z;
            return;
    }
}

void func_DF4260_8018BD7C(Object_2F4_Test* arg0) {
    Animation_DrawSkeleton(3, &D_6029A48, arg0->vwork, func_DF4260_8018BC50, func_DF4260_8018BC84, arg0, gCalcMatrix);
}

void func_DF4260_8018BDD4(Object* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6) {
    s32 var_v1;
    
    var_v1 = 0xBF;
    
    if (func_8008AC54(0) < 4) {
        var_v1 = 0xBE;
    }
    
    func_DF4260_80187710(arg0->pos.x + arg1, arg0->pos.y + arg2, arg0->pos.z + arg3, arg4, arg0->rot.x, arg0->rot.y, arg5, arg6, var_v1);
}

extern u8 D_DF4260_8019B6D0;

void func_DF4260_8018BE7C(Boss* arg0_2) {
    s32 i;
    s16 temp_s1;
    Boss* arg0 = (Boss*)arg0_2;

    D_80178284 = 1;
    D_801613A0 = 0;
    arg0->unk_05E = 1;
    arg0->timer_050 = 354;
    arg0->unk_060 = 601;
    arg0->fwork[18] = -D_80161A54 - 10.0f;
    if (fabsf(gPlayer[0].unk_0AC) < 1.0f) {
        arg0->timer_05A = 30000;
        arg0->obj.pos.z = (gPlayer[0].camEye.z - D_80177D20) - 2000.0f;
        Audio_PlaySfx(0x31038018, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_DF4260_8019B6D0 = 0;
    } else {
        D_DF4260_8019B6D0 = 1;
        arg0->obj.rot.y = 180.0f;
        arg0->fwork[6] = 800.0f;
        arg0->obj.pos.z = gPlayer[0].unk_138 + 2000.0f;
        arg0->fwork[7] = arg0->obj.pos.x;
        arg0->fwork[5] = 30.0f;
        Audio_PlaySfx(0x31038018, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        arg0->swork[10] = 3;
        arg0->swork[8] = 3;
    }

    temp_s1 = arg0->timer_05A;

    // Bosses OBJ_BOSS_294 to OBJ_BOSS_296
    for (i = 1; i < 4; i++) {
        Boss_Initialize(&gBosses[i]);
        gBosses[i].obj.status = 1;
        gBosses[i].obj.id = i + 293;
        gBosses[i].obj.pos.x = arg0->obj.pos.x;
        gBosses[i].obj.pos.y = arg0->obj.pos.y;
        gBosses[i].obj.pos.z = arg0->obj.pos.z;
        gBosses[i].unk_060 = 200;
        gBosses[i].unk_05E = 1;
        gBosses[i].timer_05A = temp_s1;
        Object_SetInfo(&gBosses[i].info, gBosses[i].obj.id);
        gBosses[3].unk_05E = 0;
    }
}

void func_DF4260_8018C0B0(Object* arg0) {
    func_8007D9DC(arg0->pos.x, D_80177940 + 2.0f, arg0->pos.z, 5.0f, 100.0f, 0);
    func_8007D9DC(arg0->pos.x, D_80177940 + 2.0f, arg0->pos.z, 5.0f, 100.0f, 5);
    func_8007D9DC(arg0->pos.x, D_80177940 + 2.0f, arg0->pos.z, 5.0f, 100.0f, 10);
    func_8007ADF4(arg0->pos.x, D_80177940, arg0->pos.z, 1.0f, 10.0f);
}

extern void func_8004319C(Player*, f32, f32, f32);
extern void func_80081A8C(f32, f32, f32, f32, s32);

extern s32 D_80000024;//UNK_TYPE
extern Vec3f D_DF4260_801998CC;
extern Vec3f D_DF4260_801998D8;
extern Vec3f D_DF4260_801998E4;
extern Vec3f D_DF4260_801998F0;
extern Vec3f D_DF4260_80199908;
extern Vec3f D_DF4260_80199914;
extern Vec3f D_DF4260_8019992C;
extern Vec3f D_DF4260_80199938;
extern Vec3f D_DF4260_80199944;
extern Vec3f D_DF4260_80199950;
extern Vec3f D_DF4260_8019995C[20];
extern s32 D_DF4260_80199A4C[];
extern f32 D_DF4260_80199A5C[];
extern u8 D_DF4260_8019B6D0;
extern Vec3f func_80199920;

void func_DF4260_8018C19C(Boss* arg0) {
    // todo: figure out vec3f stack
    s32 pad[9];
    Vec3f sp84[30];
    Vec3f sp78;
    Vec3f sp6C;
    Object_8C* obj_8c;
    f32 temp_fv0_2;
    s32 pad2;
    s32 var_v1;
    s32 var_v0;
    s32 i;
    s32 pad3;
    f32* temp_a0;
    f32* temp_a1;

    D_801613A0++;
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1);
    Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 1);
    if (D_DF4260_8019B6D0 == 0) {
        if (arg0->obj.pos.x > 6000.0f) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            for (i = 1; i < ARRAY_COUNT(gBosses); i++) {
                Object_Kill(&gBosses[i].obj, &gBosses[i].sfxPos);
            }
            return;
        }
        sp78.x = 0.0f;
        sp78.y = 0.0f;
        sp78.z = 60.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
        arg0->vel.x = sp6C.x;
        arg0->vel.y = sp6C.y;
        arg0->vel.z = sp6C.z - D_80177D08;
        arg0->fwork[16] = 4.0f;
        if (!(gFrameCount & 1)) {
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199914, &sp84[6]);
            Matrix_MultVec3f(gCalcMatrix, &func_80199920, &sp84[7]);
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_8019992C, &sp84[8]);
            func_8007BC7C(sp84[6].x + arg0->obj.pos.x, sp84[6].y + arg0->obj.pos.y, sp84[6].z + arg0->obj.pos.z, 20.0f);
            func_8007BC7C(sp84[7].x + arg0->obj.pos.x, sp84[7].y + arg0->obj.pos.y, sp84[7].z + arg0->obj.pos.z, 10.0f);
            func_8007BC7C(sp84[8].x + arg0->obj.pos.x, sp84[8].y + arg0->obj.pos.y, sp84[8].z + arg0->obj.pos.z, 10.0f);
        }
    } else {
        if ((D_801613A0 >= 381) && (D_801613A0 < 430)) {
            D_80178540 = 5;
            D_80178570 = 20;
            D_80178574 = 20;
            D_80178578 = 20;
            gPlayer[0].unk_23C = 100;
        }
        Matrix_MultVec3f(gCalcMatrix, &D_DF4260_801998CC, &sp84[0]);
        Matrix_MultVec3f(gCalcMatrix, &D_DF4260_801998D8, &sp84[1]);
        Matrix_MultVec3f(gCalcMatrix, &D_DF4260_801998E4, &sp84[2]);

        if (arg0->unk_060 != 601) {
            var_v1 = arg0->unk_060 - 601;


            if (var_v1 < 0) {
                var_v1 *= -1;
            }
            
            for (i = 0; var_v1 >= 60; i++, var_v1 -= 60) {

            }
            
            for (var_v0 = 0, var_v1 = 13; var_v0 < i; var_v0++, var_v1++) {
                if ((gFrameCount & 0xF) == (var_v0 & 0xF)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_DF4260_8019995C[var_v0], &sp84[var_v1]);
                    func_8007D0E0(sp84[var_v1].x + arg0->obj.pos.x, sp84[var_v1].y + arg0->obj.pos.y, sp84[var_v1].z + arg0->obj.pos.z, arg0->fwork[17]);
                    func_8007C120(sp84[var_v1].x + arg0->obj.pos.x, sp84[var_v1].y + arg0->obj.pos.y, sp84[var_v1].z + arg0->obj.pos.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, 0.1f, 7);
                }
            }
        }
        if (arg0->unk_062 != 0) {
            arg0->unk_062 = 0;
            if ((gBosses[1].unk_04E != 0) && (gBosses[2].unk_04E != 0) && (gBosses[3].unk_04E != 0)) {
                if (arg0->unk_060 >= 2) {
                    arg0->timer_05C = 15;
                    arg0->unk_060 -= arg0->unk_064;
                    if (arg0->unk_060 < 120) {
                        arg0->fwork[17] = 2.8f;
                        Audio_PlaySfx(0x2943500F, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
            } else {
                Audio_PlaySfx(0x29121007, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        arg0->vel.z = arg0->fwork[18];
        if (arg0->unk_04E > 0) {
            arg0->fwork[3] = (gPlayer[0].camEye.z - D_80177D20) - 2500.0f;
        }
        if (arg0->unk_04E != 7) {
            Math_SmoothStepToF(&arg0->fwork[4], arg0->fwork[5], 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&arg0->obj.pos.z, arg0->fwork[3], 0.1f, arg0->fwork[4], 0.00001f);
        }
        Math_SmoothStepToF(&arg0->obj.pos.y, arg0->fwork[6], 0.02f, 2.0f, 0.00001f);
        Math_SmoothStepToAngle(&arg0->fwork[0], arg0->fwork[9], 0.2f, 5.0f, 0.00001f);
        Math_SmoothStepToAngle(&arg0->fwork[1], arg0->fwork[10], 0.2f, 5.0f, 0.00001f);
        Math_SmoothStepToAngle(&arg0->fwork[2], arg0->fwork[11], 0.2f, 5.0f, 0.00001f);
        if (arg0->unk_04E < 6) {
            Math_SmoothStepToAngle(&arg0->obj.rot.y, arg0->fwork[13], 0.03f, arg0->fwork[8], 0.00001f);
            Math_SmoothStepToF(&arg0->fwork[8], arg0->fwork[12], 0.1f, 0.02f, 0.001f);
            Math_SmoothStepToAngle(&arg0->obj.rot.z, arg0->fwork[14], 0.03f, arg0->fwork[15], 0.00001f);
            if (arg0->timer_056 == 1) {
                arg0->fwork[14] = 0.0f;
                arg0->fwork[15] = 0.5f;
            }
        }
        if ((gBosses[1].unk_04E != 0) && !(gFrameCount & 0xF)) {
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199908, &sp84[5]);
            func_8007D0E0(gBosses[0].obj.pos.x + sp84[5].x, gBosses[0].obj.pos.y + sp84[5].y, gBosses[0].obj.pos.z + sp84[5].z, 5.0f);
        }
        if (gBosses[2].unk_04E != 0) {
            gBosses[3].unk_05E = 1;
            if (gBosses[3].unk_04E != 0) {
                if (!(gFrameCount & 7)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199950, &sp84[11]);
                    func_8007D0E0(gBosses[0].obj.pos.x + sp84[11].x, gBosses[0].obj.pos.y + sp84[11].y, gBosses[0].obj.pos.z + sp84[11].z, 7.0f);
                }
            } else if (!(gFrameCount & 0xF)) {
                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199938, &sp84[9]);
                func_8007D0E0(gBosses[0].obj.pos.x + sp84[9].x, gBosses[0].obj.pos.y + sp84[9].y, gBosses[0].obj.pos.z + sp84[9].z, 5.0f);
            }
        }
        if ((gBosses[3].unk_04E != 0) && (gBosses[2].unk_04E == 0) && !(gFrameCount & 0xF)) {
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199944, &sp84[10]);
            func_8007D0E0(gBosses[0].obj.pos.x + sp84[10].x, gBosses[0].obj.pos.y + sp84[10].y, gBosses[0].obj.pos.z + sp84[10].z, 5.0f);
        }

        if (((arg0->unk_04E == 1) || (arg0->unk_04E == 2)) && !(gFrameCount & 7)) {
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199914, &sp84[6]);
            Matrix_MultVec3f(gCalcMatrix, &func_80199920, &sp84[7]);
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_8019992C, &sp84[8]);
            func_8007BC7C(sp84[6].x + arg0->obj.pos.x, sp84[6].y + arg0->obj.pos.y, sp84[6].z + arg0->obj.pos.z, 20.0f);
            func_8007BC7C(sp84[7].x + arg0->obj.pos.x, sp84[7].y + arg0->obj.pos.y, sp84[7].z + arg0->obj.pos.z, 10.0f);
            func_8007BC7C(sp84[8].x + arg0->obj.pos.x, sp84[8].y + arg0->obj.pos.y, sp84[8].z + arg0->obj.pos.z, 10.0f);
        }
        if (arg0->timer_052 != 0) {
            Math_SmoothStepToF(D_801779A8, 50.0f, 1.0f, 1.6f, 0.0001f);
        }

        switch (arg0->unk_04E) {
            case 0:
                arg0->fwork[3] = gPlayer[0].unk_138 + 1500.0f;
                if (arg0->timer_050 == 350) {
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    func_800BA808(gMsg_ID_2290, RCID_BOSS_CORNERIA2);
                }
                if (arg0->timer_050 == 180) {
                    func_800BA808(gMsg_ID_2298, RCID_PEPPY);
                    arg0->timer_052 = 350;
                }
                if (arg0->timer_050 == 0) {
                    arg0->obj.pos.y = 900.0f;
                    arg0->unk_04E = 1;
                    arg0->fwork[13] = 180.0f;
                    arg0->fwork[12] = 1.5f;
                    arg0->fwork[6] = 800.0f;
                    arg0->fwork[3] = (gPlayer[0].camEye.z - D_80177D20) - 2500.0f;
                    arg0->fwork[18] = -D_80161A54;
                    func_8001D444(0, 0x8030, 0, 0xFF);
                    arg0->timer_050 = 40;
                }
                break;
            case 1:
                if (arg0->timer_050 == 0) {
                    arg0->unk_04E = 2;
                    arg0->fwork[8] = 0.0f;
                    arg0->fwork[13] = 359.9f;
                    arg0->timer_050 = 250;
                }
                break;
            case 2:
                if (arg0->timer_050 == 0) {
                    arg0->unk_04E = 3;
                    arg0->swork[0] = 4;
                    arg0->timer_050 = 75;
                    arg0->timer_054 = 0;
                    arg0->fwork[8] = 0.0f;
                    func_800BA808(gMsg_ID_2291, RCID_BOSS_CORNERIA2);
                    arg0->swork[4]++;
                }
                break;
            case 3:
                arg0->fwork[12] = 1.5f;
                arg0->fwork[11] = 0.0f;
                arg0->fwork[9] = 0.0f;
                arg0->fwork[10] = 0.0f;
                arg0->fwork[13] = 0.0f;
                if (arg0->timer_050 == 0) {
                    arg0->unk_04E = arg0->swork[0];
                    arg0->timer_050 = 60;
                    arg0->fwork[8] = 0.0f;
                    Audio_PlaySfx(0x2940201A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                break;
            case 4:
                arg0->fwork[11] = 120.0f;
                arg0->fwork[13] = 340.0f;
                if ((arg0->timer_050 == 0) || (gBosses[1].unk_04E != 0)) {
                    arg0->unk_04E = 3;
                    arg0->swork[0] = 5;
                    arg0->timer_050 = 20;
                    arg0->fwork[8] = 0.0f;
                    if (gBosses[1].unk_04E == 0) {
                        Audio_PlaySfx(0x2940201A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    if ((arg0->swork[5] == 0) && ((gBosses[2].unk_04E == 0) || (gBosses[3].unk_04E == 0))) {
                        func_800BA808(gMsg_ID_2292, RCID_BOSS_CORNERIA2);
                    }
                    arg0->swork[5]++;
                    arg0->swork[5] &= 3;
                } else if ((arg0->fwork[2] > 60.0f) && (arg0->timer_054 == 0)) {
                    arg0->timer_054 = 20;
                    func_DF4260_8018BDD4(&arg0->obj, sp84[0].x, sp84[0].y, sp84[0].z, 30.0f, 0, 1);
                }
                break;
            case 5:
                arg0->fwork[9] = 120.0f;
                arg0->fwork[10] = 120.0f;
                arg0->fwork[13] = 20.0f;
                if ((arg0->fwork[0] > 60.0f) && (gBosses[2].unk_04E == 0) && (arg0->swork[1] == 0)) {
                    func_DF4260_8018BDD4(&arg0->obj, sp84[1].x, sp84[1].y + 50.0f, sp84[1].z, 45.0f, 0, 0);
                    Audio_PlaySfx(0x2903201B, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_DF4260_8018BDD4(&arg0->obj, sp84[1].x, sp84[1].y - 50.0f, sp84[1].z, 40.0f, 0, 0);
                    arg0->swork[1] = 1;
                }
                if ((arg0->fwork[1] > 60.0f) && (gBosses[3].unk_04E == 0) && (arg0->swork[2] == 0)) {
                    func_DF4260_8018BDD4(&arg0->obj, sp84[2].x, sp84[2].y + 50.0f, sp84[2].z, 35.0f, 0, 0);
                    Audio_PlaySfx(0x2903201B, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_DF4260_8018BDD4(&arg0->obj, sp84[2].x, sp84[2].y - 50.0f, sp84[2].z, 30.0f, 0, 0);
                    arg0->swork[2] = 1;
                }
                if ((arg0->timer_050 == 0) || ((gBosses[3].unk_04E != 0) && (gBosses[2].unk_04E != 0))) {
                    arg0->unk_04E = 3;
                    arg0->swork[0] = 4;
                    arg0->timer_050 = 70;
                    arg0->swork[1] = 0;
                    arg0->swork[2] = 0;
                    arg0->fwork[8] = 0.0f;
                    if ((arg0->swork[4] == 0) && (gBosses[1].unk_04E == 0)) {
                        func_800BA808(gMsg_ID_2291, RCID_BOSS_CORNERIA2);
                    }
                    if ((arg0->swork[4] == 2) && (arg0->swork[7] == 0) && ((gBosses[3].unk_04E == 0) || (gBosses[2].unk_04E == 0) || (gBosses[1].unk_04E == 0))) {
                        func_800BA808(gMsg_ID_2299, RCID_PEPPY);
                        arg0->swork[7]++;
                    }
                    arg0->swork[4]++;
                    arg0->swork[4] &= 3;
                    if ((gBosses[3].unk_04E == 0) && (gBosses[2].unk_04E == 0)) {
                        Audio_PlaySfx(0x2940201A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
                break;
            case 6:
                Math_SmoothStepToAngle(&arg0->obj.rot.y, arg0->fwork[13], 0.1f, 5.0f, 0.01f);
                Math_SmoothStepToAngle(&arg0->obj.rot.z, arg0->fwork[14], 0.1f, 5.0f, 0.01f);
                if ((arg0->obj.rot.y == 0.0f) || (arg0->timer_058 == 0)) {
                    arg0->timer_058 = 0;
                    arg0->unk_04E = 7;
                    arg0->obj.rot.z = 0.0f;
                    arg0->obj.rot.y = 0.0f;
                }
                break;
            case 7:
                arg0->fwork[3] = (gPlayer[0].camEye.z - D_80177D20) - 4000.0f;
                Math_SmoothStepToF(&arg0->obj.pos.z, arg0->fwork[3], 0.1f, 15.0f, 0.00001f);
                if (arg0->timer_058 == 0) {

                    arg0->timer_058 = D_DF4260_80199A4C[arg0->swork[3]];
                    arg0->fwork[20] = D_DF4260_80199A5C[arg0->swork[3]];
                    arg0->swork[3]++;
                    arg0->swork[3] &= 3;
                    arg0->fwork[8] = 0.0f;

                    if ((arg0->swork[3] != 1) || (arg0->swork[3] != 3)) {
                        func_8001A55C(&arg0->sfxPos, 0x31034025);
                        arg0->swork[9] = 0;
                    }
                }

                if ((arg0->swork[3] == 0) || (arg0->swork[3] == 2)) {

                    if ((arg0->obj.rot.y < 20.0f) && (arg0->obj.rot.y > -20.0f)) {
                        if (arg0->swork[9] == 0) {
                            arg0->swork[9]++;
                            Audio_PlaySfx(0x31034025, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (arg0->swork[6] == 0) {
                                func_800BA808(gMsg_ID_2293, RCID_BOSS_CORNERIA2);
                            }
                            arg0->swork[6]++;
                            arg0->swork[6] &= 1;
                        }
                        if (!(gFrameCount & 7)) {
                            if (fabsf(arg0->obj.pos.z - gPlayer[0].unk_138) > 700.0f) {
                                
                                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_801998F0, &sp84[3]);
                                obj_8c = gObjects8C;
                                for (i = 0; i < 100; i++, obj_8c++) {
                                    if (obj_8c->obj.status == 0) {
                                        Object_8C_Initialize(obj_8c);
                                        obj_8c->obj.status = 1;
                                        obj_8c->obj.id = OBJ_8C_398;
                                        obj_8c->timer_50 = 100;
                                        obj_8c->unk_44 = 1;
                                        obj_8c->scale2 = 1.0f;
                                        obj_8c->obj.rot.z = 30.0f;
                                        obj_8c->obj.pos.x = sp84[3].x + arg0->obj.pos.x;
                                        obj_8c->obj.pos.y = sp84[3].y + arg0->obj.pos.y;
                                        obj_8c->obj.pos.z = sp84[3].z + arg0->obj.pos.z;
                                        Object_SetInfo(&obj_8c->info, obj_8c->obj.id);
                                        break;
                                    }
                                }
                                    
                                if (i >= 60) {
                                    obj_8c->obj.status = 0;
                                }
                            }
                        }
                    }
                }
                if (arg0->unk_060 < 2) {
                    D_8017796C = -1;
                    func_8001A55C(&arg0->sfxPos, 0x31034025);
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    Audio_PlaySfx(0x2940D09A, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_Timer_80161A60 = 8;
                    D_80161734 = 0;
                    func_800BA808(gMsg_ID_2294, RCID_BOSS_CORNERIA2);
                    arg0->unk_060 = 1;
                    arg0->timer_056 = 150;
                    arg0->unk_04E = 8;
                    arg0->fwork[19] = 15.0f;
                } else {
                    Math_SmoothStepToF(&arg0->fwork[8], 3.0f, 0.1f, 0.5f, 0.001f);
                    Math_SmoothStepToAngle(&arg0->obj.rot.z, arg0->fwork[14], 0.1f, 3.0f, 0.00001f);
                    temp_fv0_2 = Math_SmoothStepToF(&arg0->obj.rot.y, arg0->fwork[20], 0.1f, arg0->fwork[8], 0.00001f);
                    arg0->fwork[14] = 0.0f;
                    if (temp_fv0_2 < -1.0f) {
                        arg0->fwork[14] = 25.0f;
                    }
                    if (temp_fv0_2 > 1.0f) {
                        arg0->fwork[14] = 335.0f;
                    }
                    sp78.x = 0.0f;
                    sp78.y = 0.0f;
                    sp78.z = 40.0f;
                    Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
                    arg0->vel.x = sp6C.x;
                    arg0->vel.y = sp6C.y;
                    arg0->vel.z = sp6C.z - D_80177D08;
                }
                break;
            case 8:
                *D_801779A8 = 20.0f;
                if (!(gFrameCount & 0x1F)) {
                    for (i = 0; i < 10; i++) {
                        func_80079618(((Rand_ZeroOne() - 0.5f) * 300.0f) + arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
                    }
                }
                Math_SmoothStepToF(&arg0->obj.pos.x, arg0->fwork[7], 1.0f, 10.0f, 0.00001f);
                Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&arg0->vel.y, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&arg0->vel.z, 0.0f, 0.1f, 2.0f, 0.00001f);
                if (arg0->obj.rot.z == arg0->fwork[14]) {
                    if (arg0->fwork[14] == arg0->fwork[19]) {
                        arg0->fwork[14] = 360.0f - arg0->fwork[19];
                    } else {
                        arg0->fwork[14] = arg0->fwork[19];
                    }
                }
                Math_SmoothStepToAngle(&arg0->obj.rot.z, arg0->fwork[14], 1.0f, 1.0f, 0.001f);
                if (arg0->unk_060 != 0) {
                    if (arg0->timer_056 == 0) {
                        func_80042EC0(arg0);
                        arg0->fwork[17] = 10.0f;
                        arg0->vel.y *= 1.5f;
                        D_80177930 = 1;
                        if ((gPlayer[0].state_1C8 == 3) || (gPlayer[0].state_1C8 == 5)) {
                            func_8004319C(gPlayer, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z);
                        }
                        arg0->unk_060--;
                        arg0->fwork[8] = 0.0f;
                        func_800BA808(gMsg_ID_2296, RCID_BOSS_CORNERIA2);
                    } else {
                        Math_SmoothStepToF(&arg0->obj.rot.y, 0.0f, 0.1f, arg0->fwork[8], 0.00001f);
                        sp78.x = 0.0f;
                        sp78.y = 0.0f;
                        sp78.z = 20.0f;
                        Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
                        arg0->vel.x = sp6C.x;
                        arg0->vel.y = sp6C.y;
                        arg0->vel.z = sp6C.z - D_80177D08;
                        if (arg0->timer_056 == 60) {
                            func_800BA808(gMsg_ID_2295, RCID_FOX);
                        }
                    }
                } else {
                    arg0->unk_04E = 9;
                }
                break;
            case 9:
                if (!(gFrameCount & 0xF)) {
                    for (i = 0; i < 10; i++) {
                        func_80079618(((Rand_ZeroOne() - 0.5f) * 300.0f) + arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
                    }
                }
                Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&arg0->vel.y, 0.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&arg0->vel.z, 0.0f, 0.1f, 2.0f, 0.00001f);
                arg0->obj.rot.z -= 2.0f;
                arg0->gravity = 1.0f;
                if (arg0->obj.pos.y < (D_80177940 + 150.0f)) {
                    D_80178480 = 100;
                    func_80081A8C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 40.0f, 12);
                    arg0->timer_050 = 20;
                    arg0->vel.y = -10.0f;
                    arg0->gravity = 0.0f;
                    arg0->fwork[17] = 20.0f;
                    func_DF4260_8018C0B0(&arg0->obj);
                    arg0->unk_04E = 10;
                }
                break;
            case 10:
                if (!(gFrameCount & 7)) {
                    for (i = 0; i < 10; i++) {
                        func_80079618(((Rand_ZeroOne() - 0.5f) * 300.0f) + arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
                    }
                }
                if (arg0->timer_050 == 0) {
                    func_8007A568(arg0->obj.pos.x, arg0->obj.pos.y + 500.0f, arg0->obj.pos.z, 120.0f);
                    Object_Kill(&arg0->obj, &arg0->sfxPos);
                }
                break;
        }
        temp_a0 = SEGMENTED_TO_VIRTUAL(D_603E748);
        temp_a1 = SEGMENTED_TO_VIRTUAL(D_603E7C4);
        temp_a0[9] = -100000.0f;
        temp_a0[3] = 172.0f;
        temp_a1[9] = -100000.0f;
        temp_a1[3] = -150.0f;
        if (arg0->fwork[0] > 60.0f) {
            temp_a0[3] = -100000.0f;
            temp_a0[9] = 543.0f;
        }
        if (arg0->fwork[1] > 60.0f) {
            temp_a1[3] = -100000.0f;
            temp_a1[9] = -557.0f;
        }
        arg0->fwork[16] = 4.0f;
        if ((arg0->swork[10] == 0) && (arg0->unk_04E < 6)) {
            arg0->fwork[17] = 1.8f;
            Audio_PlaySfx(0x11020084, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->timer_058 = 71;
            arg0->unk_04E = 6;
            arg0->fwork[12] = 0.0f;
            arg0->fwork[8] = 0.0f;
            arg0->fwork[14] = 0.0f;
            arg0->fwork[13] = 0.0f;
        }

        if (D_801613A0 == 430) {
            func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
        }
        if (D_801613A0 == 586) {
            D_80161734 = 1;
        }
        if (D_801613A0 >= 587) {
            D_80177848 = (arg0->unk_060 / 601.0f) * 255.0f;
        }
    }
}

extern Vec3f D_DF4260_80199A6C;
extern Vec3f D_DF4260_80199A78;

void func_DF4260_8018DDAC(Boss* arg0) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (arg0->unk_04E) {
        case 0:
            if (arg0->unk_062 != 0) {
                arg0->unk_062 = 0;
                if (arg0->unk_066 == 0) {
                    if (arg0->fwork[2] > 60.0f) {
                        if (arg0->unk_060 != 0) {
                            arg0->timer_05C = 15;
                            arg0->unk_060 -= arg0->unk_064;
                            Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (arg0->unk_060 <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    func_800BA808(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    func_800BA808(gMsg_ID_7085, RCID_FALCO);
                                }
                                arg0->info.unk_10 = 300.0f;
                                gBosses[0].fwork[14] = 25.0f;
                                gBosses[0].fwork[15] = 0.0f;
                                Audio_PlaySfx(0x2940C027, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }
                                gBosses[0].timer_056 = 30;
                                arg0->unk_04E = 1;
                                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A6C, &sp4C);

                                for (i = 0; i < 10; i++) {
                                    func_80079618(arg0->obj.pos.x + sp4C.x, arg0->obj.pos.y + sp4C.y, arg0->obj.pos.z + sp4C.z, 1.0f);
                                }
                                
                                if ((gBosses[2].unk_04E == 1) && (gBosses[3].unk_04E == 1)) {
                                    gBosses[0].fwork[14] = 335.0f;
                                }
                            }
                        }
                    }
                } else {
                    Audio_PlaySfx(0x29121007, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            arg0->obj.rot.x = gBosses[0].obj.rot.x;
            arg0->obj.rot.y = gBosses[0].obj.rot.y;
            arg0->obj.rot.z = gBosses[0].obj.rot.z;
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0);
            Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1);
            Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 1);
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A78, &sp40);
            arg0->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            arg0->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            arg0->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;
            arg0->fwork[2] = gBosses[0].fwork[2];
            break;
        case 1:
            Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 0);
            gBosses[0].fwork[15] += 0.5f;
            
            if (!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                arg0->timer_05C = 4;
            }
            
            if (!(gFrameCount & 1)) {
                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A6C, &sp4C);
                func_8007C120(arg0->obj.pos.x + sp4C.x, arg0->obj.pos.y + sp4C.y, arg0->obj.pos.z + sp4C.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, 0.2f, 10);
            }
            
            if (arg0->obj.pos.y < (D_80177940 + 150.0f)) {
                if (arg0->swork[0] == 0) {
                    arg0->vel.y = -5.0f;
                    arg0->swork[0] = 1;
                    arg0->gravity = 0.0f;
                    func_DF4260_8018C0B0(&arg0->obj);
                    Audio_PlaySfx(0x19000014, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else {
                arg0->obj.rot.z -= 2.0f;
                arg0->gravity = 1.0f;
            }
            break;
    }
}

extern Vec3f D_DF4260_80199A84;
extern Vec3f D_DF4260_80199A90;

void func_DF4260_8018E290(Boss* arg0) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (arg0->unk_04E) {
        case 0:
            if (arg0->unk_062 != 0) {
                arg0->unk_062 = 0;
                if (arg0->unk_066 == 2) {
                    if (arg0->fwork[0] > 60.0f) {
                        if (arg0->unk_060 != 0) {
                            arg0->timer_05C = 15;
                            arg0->unk_060 -= arg0->unk_064;
                            Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (arg0->unk_060 <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    func_800BA808(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    func_800BA808(gMsg_ID_7085, RCID_FALCO);
                                }
                                arg0->info.unk_10 = 300.0f;
                                gBosses[0].fwork[15] = 0.0f;
                                gBosses[0].fwork[14] = 335.0f;
                                arg0->unk_060 = 0;
                                Audio_PlaySfx(0x2940C027, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }
                                gBosses[0].timer_056 = 30;
                                arg0->unk_04E = 1;
                                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A84, &sp4C);
                                for (i = 0; i < 10; i++) {
                                    func_80079618(arg0->obj.pos.x + sp4C.x, arg0->obj.pos.y + sp4C.y, arg0->obj.pos.z + sp4C.z, 1.0f);
                                }
                                if (gBosses[1].unk_04E == 1) {
                                    gBosses[0].fwork[14] = 25.0f;
                                }
                            }
                        }
                    }
                } else {
                    Audio_PlaySfx(0x29121007, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            arg0->obj.rot.x = gBosses[0].obj.rot.x;
            arg0->obj.rot.y = gBosses[0].obj.rot.y;
            arg0->obj.rot.z = gBosses[0].obj.rot.z;
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0);
            Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1);
            Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 1);
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A90, &sp40);
            arg0->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            arg0->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            arg0->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;
            arg0->fwork[0] = gBosses[0].fwork[0];
            break;
        case 1:
            Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 0);
            gBosses[0].fwork[15] += 0.5f;
            
            if (!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                arg0->timer_05C = 4;
            }
            
            if (!(gFrameCount & 1)) {
                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A84, &sp4C);
                func_8007C120(arg0->obj.pos.x + sp4C.x, arg0->obj.pos.y + sp4C.y, arg0->obj.pos.z + sp4C.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, 0.2f, 10);
            }
            
            if (arg0->obj.pos.y < (D_80177940 + 150.0f)) {
                if (arg0->swork[0] == 0) {
                    arg0->vel.y = -5.0f;
                    arg0->swork[0] = 1;
                    arg0->gravity = 0.0f;
                    func_DF4260_8018C0B0(&arg0->obj);
                    Audio_PlaySfx(0x19000014, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else {
                arg0->obj.rot.z -= 2.0f;
                arg0->gravity = 1.0f;
            }
            break;
    }
}

extern Vec3f D_DF4260_80199A9C;
extern Vec3f D_DF4260_80199AA8;

void func_DF4260_8018E76C(Boss* arg0) {
    Vec3f sp4C;
    Vec3f sp40;
    s32 i;

    switch (arg0->unk_04E) {
        case 0:
            if (arg0->unk_062 != 0) {
                arg0->unk_062 = 0;
                if (arg0->unk_066 == 2) {
                    if (arg0->fwork[1] > 60.0f) {
                        if (arg0->unk_060 != 0) {
                            arg0->timer_05C = 15;
                            arg0->unk_060 -= arg0->unk_064;
                            Audio_PlaySfx(0x29034003, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (arg0->unk_060 <= 0) {
                                gBosses[0].swork[8]--;
                                if (gBosses[0].swork[8] != 0) {
                                    func_800BA808(gMsg_ID_15130, RCID_FALCO);
                                } else {
                                    func_800BA808(gMsg_ID_7085, RCID_FALCO);
                                }
                                arg0->info.unk_10 = 300.0f;
                                gBosses[0].fwork[15] = 0.0f;
                                gBosses[0].fwork[14] = 335.0f;
                                arg0->unk_060 = 0;
                                Audio_PlaySfx(0x2940C027, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                if (gBosses[0].swork[10] != 0) {
                                    gBosses[0].swork[10]--;
                                }
                                gBosses[0].timer_056 = 30;
                                arg0->unk_04E = 1;
                                gBosses[0].fwork[6] = 500.0f;
                                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A9C, &sp4C);

                                for (i = 0; i < 10; i++) {
                                    func_80079618(arg0->obj.pos.x + sp4C.x, arg0->obj.pos.y + sp4C.y, arg0->obj.pos.z + sp4C.z, 1.0f);
                                }
                                
                                if (gBosses[1].unk_04E == 1) {
                                    gBosses[0].fwork[14] = 25.0f;
                                }
                            }
                        }
                    }
                } else {
                    Audio_PlaySfx(0x29121007, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            arg0->obj.rot.x = gBosses[0].obj.rot.x;
            arg0->obj.rot.y = gBosses[0].obj.rot.y;
            arg0->obj.rot.z = gBosses[0].obj.rot.z;
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0);
            Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1);
            Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 1);
            Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199AA8, &sp40);
            arg0->obj.pos.x = gBosses[0].obj.pos.x + sp40.x;
            arg0->obj.pos.y = gBosses[0].obj.pos.y + sp40.y;
            arg0->obj.pos.z = gBosses[0].obj.pos.z + sp40.z;
            arg0->fwork[1] = gBosses[0].fwork[1];
            break;
        case 1:
            Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 0);
            gBosses[0].fwork[15] += 0.5f;
            if (!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                arg0->timer_05C = 4;
            }
            if (!(gFrameCount & 1)) {
                Matrix_MultVec3f(gCalcMatrix, &D_DF4260_80199A9C, &sp4C);
                func_8007C120(arg0->obj.pos.x + sp4C.x, arg0->obj.pos.y + sp4C.y, arg0->obj.pos.z + sp4C.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, 0.2f, 10);
            }
            if (arg0->obj.pos.y < (D_80177940 + 150.0f)) {
                if (arg0->swork[0] == 0) {
                    arg0->vel.y = -5.0f;
                    arg0->swork[0] = 1;
                    arg0->gravity = 0.0f;
                    func_DF4260_8018C0B0(&arg0->obj);
                    Audio_PlaySfx(0x19000014, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else {
                arg0->obj.rot.z -= 2.0f;
                arg0->gravity = 1.0f;
            }
            break;
    }
}

s32 func_DF4260_8018EC54(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if ((arg0 == 10) && (gBosses[2].unk_04E != 0) && (gBosses[3].unk_04E != 0)) {
        *arg1 = NULL;
    }
    if ((arg0 != 12) && (arg0 != 10)) {
        *arg1 = NULL;
    }
    return 0;
}

extern AnimationHeader D_602D400;
extern Limb* D_602D5AC;

void func_DF4260_8018ECAC(Boss* arg0) {

    Animation_GetFrameData(&D_602D400, 0, arg0->vwork);
    Animation_DrawSkeleton(1, &D_602D5AC, arg0->vwork, func_DF4260_8018EC54, NULL, &arg0->index, &gIdentityMatrix);
}

s32 func_DF4260_8018ED1C(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 5) {
        arg3->y -= gBosses[*(s32*)arg4].fwork[2];
    }
    if ((arg0 != 6) && (arg0 != 5)) {
        *arg1 = NULL;
    }
    return 0;
}

void func_DF4260_8018ED78(Boss* arg0) {

    Matrix_Translate(gGfxMatrix, -D_DF4260_80199A78.x, -D_DF4260_80199A78.y, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_602D400, 0, arg0->vwork);
    Animation_DrawSkeleton(1, &D_602D5AC, arg0->vwork, func_DF4260_8018ED1C, NULL, &arg0->index, &gIdentityMatrix);
}

s32 func_DF4260_8018EE2C(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 1) {
        arg3->z -= gBosses[*(s32*)arg4].fwork[0];
    }
    if ((arg0 != 1) && (arg0 != 2)) {
        *arg1 = NULL;
    }
    return 0;
}

void func_DF4260_8018EE84(Boss* arg0) {

    Matrix_Translate(gGfxMatrix, -D_DF4260_80199A90.x, -D_DF4260_80199A90.y, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_602D400, 0, arg0->vwork);
    Animation_DrawSkeleton(1, &D_602D5AC, arg0->vwork, func_DF4260_8018EE2C, NULL, &arg0->index, &gIdentityMatrix);
}

s32 func_DF4260_8018EF38(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if (arg0 == 3) {
        arg3->z -= gBosses[*(s32*)arg4].fwork[1];
    }
    if ((arg0 != 3) && (arg0 != 4)) {
        *arg1 = NULL;
    }
    return 0;
}

void func_DF4260_8018EF90(Boss* arg0) {

    Matrix_Translate(gGfxMatrix, -D_DF4260_80199AA8.x, -D_DF4260_80199AA8.y, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_602D400, 0, arg0->vwork);
    Animation_DrawSkeleton(1, &D_602D5AC, arg0->vwork, func_DF4260_8018EF38, NULL, &arg0->index, &gIdentityMatrix);
}

extern UNK_TYPE D_603E924;

void func_DF4260_8018F044(Object_80* arg0) {

    switch (arg0->unk_48) {
        case 0:
            if ((s8) arg0->unk_50 != 0) {
                arg0->unk_50 = 0;
                if (arg0->unk_54 < 2) {
                    arg0->unk_44++;
                    arg0->timer_4C = 5;
                    arg0->vel.x += 2.0f;
                    arg0->vel.y += 2.0f;
                    if (arg0->unk_44 >= 3) {
                        arg0->unk_48 = 1;
                        arg0->info.hitbox = SEGMENTED_TO_VIRTUAL(&D_603E924);
                        Audio_PlaySfx(0x1900000D, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        return;
                    }
                    Audio_PlaySfx(0x2903300E, &arg0->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        case 1:
            Math_SmoothStepToF(&arg0->vel.x, 80.0f, 0.2f, 10.0f, 0.0f);
            Math_SmoothStepToF(&arg0->vel.y, 80.0f, 0.2f, 10.0f, 0.0f);
            break;
    }
}

s32 func_DF4260_8018F1C8(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4_2) {
    Object_80* arg4 = (Object_80*)arg4_2;

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    switch (arg0) {
        case 1:
            arg3->y -= arg4->vel.x;
            if (arg4->timer_4C & 1) {
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            break;
        case 2:
            arg3->y += arg4->vel.y;
            if (arg4->timer_4C & 1) {
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            break;
    }
    return 0;
}

extern AnimationHeader D_602AA7C;
extern Limb* D_602AB48;

void func_DF4260_8018F31C(Object_80* arg0) {
    Vec3f sp28[10];

    Animation_GetFrameData(&D_602AA7C, 0, sp28);
    Animation_DrawSkeleton(3, &D_602AB48, sp28, func_DF4260_8018F1C8, NULL, arg0, gCalcMatrix);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_DF4260_8018F3BC(Object_80* arg0, f32 arg1) {
    Object_80_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.pos.x = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + arg1;
    arg0->obj.rot.y = (Rand_ZeroOne() * 90.0f) + 45.0f;
    if (arg1 > 0.0f) {
        arg0->obj.rot.y *= -1.0f;
    }
    arg0->obj.pos.y = 0.0f;
    arg0->obj.id = 1;
    arg0->unk_60 = 60.0f;
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->obj.pos.z = -2000.0f;
    arg0->info.unk_10 = 15000.0f;
}

void func_DF4260_8018F4A4(void) {
    s32 i;

    if (!(gFrameCount & 0xF) && !(gPlayer[0].unk_1D0 < 4)) {
        for (i = 0; i < 50; i++) {
            if (gObjects80[i].obj.status == 0) {
                func_DF4260_8018F3BC(&gObjects80[i], 4000.0f);
                break;
            }
        }

        for (i = 0; i < ARRAY_COUNT(gObjects80); i++) {
            if (gObjects80[i].obj.status == 0) {
                func_DF4260_8018F3BC(&gObjects80[i], -4000.0f);
                break;
            }
        }
    }
}

void func_DF4260_8018F55C(Object_8C* arg0) {

    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.pos.x = gPlayer[0].camEye.x + ((Rand_ZeroOne() - 0.5f) * 500.0f);
    arg0->obj.pos.y = gPlayer[0].camEye.y + ((Rand_ZeroOne() - 0.8f) * 350.0f);
    arg0->obj.id = OBJ_8C_352;
    arg0->timer_50 = 80;
    arg0->unk_46 = 0x90;
    arg0->obj.pos.z = -4000.0f;
    arg0->vel.z = 60.0f;
    arg0->scale2 = (Rand_ZeroOne() * 15.0f) + 10.0f;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->obj.rot.z = 180.0f;
    }
    Object_SetInfo(&arg0->info, arg0->obj.id);
}

void func_DF4260_8018F678(void) {
    s32 i;

    if (!(gFrameCount & 0x1F) && gPlayer[0].pos.x == 0.0f) {

        for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
            if (gObjects8C[i].obj.status == 0) {
                func_DF4260_8018F55C(&gObjects8C[i]);
                return;
            }
        }
    }
}

extern f32 D_DF4260_80199AB4[3];
extern f32 D_DF4260_80199AC0[3];
extern f32 D_DF4260_80199ACC[3];
extern f32 D_DF4260_80199AD8[3];

void func_DF4260_8018F6F8(Object_2F4* arg0, s32 arg1) {

    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = OBJ_2F4_195;
    arg0->obj.pos.x = (D_DF4260_80199AB4[arg1] * 4.0f) + gPlayer[0].pos.x;
    arg0->obj.pos.y = (D_DF4260_80199AC0[arg1] * 2.0f) + gPlayer[0].pos.y;
    arg0->obj.pos.z = (D_DF4260_80199ACC[arg1] * 3.0f) + gPlayer[0].unk_138;
    arg0->unk_18C[20].x = D_DF4260_80199AB4[arg1] + gPlayer[0].pos.x;
    arg0->unk_18C[20].y = gPlayer[0].pos.y;
    arg0->unk_18C[20].z = D_DF4260_80199ACC[arg1] + gPlayer[0].unk_138;
    arg0->obj.rot.z = D_DF4260_80199AD8[arg1];
    arg0->unk_0B8 = 100;
    arg0->obj.rot.y = 180.0f;
    arg0->unk_114 = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->unk_0C9 = 1;
    arg0->unk_07C = 1;
    arg0->info.unk_10 = 200.0f;
    Audio_PlaySfx(0x3100000C, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

extern Gfx* D_30184D8;

void func_DF4260_8018F880(Player* player) {
    s32 i;
    Object_2F4* obj_2f4_0 = &gObjects2F4[0];
    Object_2F4* obj_2f4_1 = &gObjects2F4[1];
    Object_2F4* obj_2f4_2 = &gObjects2F4[2];
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
            sp3C = obj_2f4_0->obj.pos.x;
            sp38 = obj_2f4_0->obj.pos.y + 15.0f;
            sp34 = obj_2f4_0->obj.pos.z - 20.0f;
        } else if (D_80177A80 < 0x4AE) {
            sp3C = obj_2f4_2->obj.pos.x;
            sp38 = obj_2f4_2->obj.pos.y + 15.0f;
            sp34 = obj_2f4_2->obj.pos.z - 20.0f;
        } else {
            sp3C = obj_2f4_1->obj.pos.x;
            sp38 = obj_2f4_1->obj.pos.y + 15.0f;
            sp34 = obj_2f4_1->obj.pos.z - 20.0f;
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
    player->unk_080 = -__sinf(player->unk_088 * 0.017453292f) * 0.5f;
    player->unk_0F4 += 3.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * 0.017453292f) * 1.5f;
    func_DF4260_8018F678();
    player->wings.unk_30 = 0;

    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;
            player->unk_1D0 = 1;
            player->timer_1F8 = 600;
            player->pos.y = 6000.0f;
            player->pos.x = 0.1f;
            func_DF4260_8018F6F8(&gObjects2F4[0], 0);
            func_DF4260_8018F6F8(&gObjects2F4[1], 1);
            func_DF4260_8018F6F8(&gObjects2F4[2], 2);
            obj_2f4_0->unk_088 = 2;
            obj_2f4_1->unk_088 = 3;
            obj_2f4_2->unk_088 = 4;
            player->camEye.x = D_80177978 = player->pos.x - 400.0f;
            gPlayer->camEye.y = D_80177980 = player->pos.y + 600.0f;
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
                obj_2f4_0->unk_0B8 = 0;
                obj_2f4_2->unk_0B8 = 0;
                obj_2f4_1->unk_0B8 = 0;
                obj_2f4_0->obj.pos.y = player->pos.y + 80.0f;
                obj_2f4_0->obj.pos.z += 100.0f;
            }
            if ((D_801782F8 != 0) && (gFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            break;
        case 3:
            if (fabsf(Math_SmoothStepToF(&obj_2f4_0->obj.pos.z, player->pos.z + 100.0f, 0.05f, 5.0f, 0.0f)) < 1.0f) {
                player->unk_1D0 = 4;
                D_80177A48[0] = 0.0f;
                player->timer_1F8 = 190;
            }
            if ((D_801782F8 != 0) && (gFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            D_80177980 = player->pos.y + 10.0f;
            D_801779B8 = player->pos.y + 10.0f;
            break;
        case 4:
            if ((D_801782F8 != 0) && (gFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);
            D_80177978 = obj_2f4_0->obj.pos.x - 50.0f;
            D_80177980 = obj_2f4_0->obj.pos.y + 10.0f;
            D_80177988 = obj_2f4_0->obj.pos.z - 10.0f;
            D_801779A0 = obj_2f4_0->obj.pos.x;
            D_801779B8 = obj_2f4_0->obj.pos.y + 10.0f;
            D_801779C0 = obj_2f4_0->obj.pos.z + 10.0f;
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 5;
                player->timer_1F8 = 5;
            }
            if (player->timer_1F8 == 80) {
                func_800BA808(gMsg_ID_2020, RCID_FALCO);
            }
            if (player->timer_1F8 < 100) {
                Math_SmoothStepToF(&obj_2f4_0->unk_160, 50.0f, 0.1f, 3.0f, 0.01f);
            }
            obj_2f4_0->unk_164 = 0.0f;
            if ((D_801782F8 != 0) && (gFrameCount & 2)) {
                obj_2f4_0->unk_164 = 5.0f;
            }
            break;
        case 5:
            Math_SmoothStepToF(&obj_2f4_0->unk_160, 0, 0.1f, 3.0f, 0.01f);
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 6;
                D_80177A48[0] = 0.0f;
                player->timer_1F8 = 190;
            }

            D_80177980 = obj_2f4_0->obj.pos.y + 10.0f;
            D_801779B8 = obj_2f4_0->obj.pos.y + 10.0f;
            break;
        case 6:
            Math_SmoothStepToF(&obj_2f4_0->unk_160, 0.0f, 0.1f, 3.0f, 0.01f);
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);
            
            D_80177A48[3] -= 0.5f;

            D_80177978 = obj_2f4_2->obj.pos.x + 100.0f + D_80177A48[3];
            D_80177980 = obj_2f4_2->obj.pos.y + 10.0f;
            D_80177988 = obj_2f4_2->obj.pos.z - 70.0f;
            
            D_801779A0 = obj_2f4_2->obj.pos.x + 20.0f + (D_80177A48[3] * 0.5f);
            D_801779B8 = obj_2f4_2->obj.pos.y + 10.0f;
            D_801779C0 = obj_2f4_2->obj.pos.z + 10.0f;
            
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 7;
                player->timer_1F8 = 190;
                D_80177A48[0] = 0.0f;
                obj_2f4_0->obj.pos.y = player->pos.y;
                obj_2f4_0->obj.pos.z = player->unk_138 + 240.0f;
            }
            if (player->timer_1F8 == 80) {
                func_800BA808(gMsg_ID_2030, RCID_PEPPY);
            }
            obj_2f4_2->unk_164 = 0.0f;
            if ((D_801782F8 != 0) && (gFrameCount & 2)) {
                obj_2f4_2->unk_164 = 5.0f;
            }
            break;
        case 7:
            Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.001f, 0.0f);
            D_80177978 = obj_2f4_1->obj.pos.x + 20.0f;
            D_80177980 = obj_2f4_1->obj.pos.y + 10.0f;
            D_80177988 = obj_2f4_1->obj.pos.z - 50.0f;
            D_801779A0 = obj_2f4_1->obj.pos.x + 10.0f;
            D_801779B8 = obj_2f4_1->obj.pos.y + 10.0f;
            D_801779C0 = obj_2f4_1->obj.pos.z + 10.0f;
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
                Math_SmoothStepToF(&obj_2f4_1->unk_160, -20.0f, 0.1f, 3.0f, 0.01f);
            }
            obj_2f4_1->unk_164 = 0.0f;
            if ((D_801782F8 != 0) && (gFrameCount & 2)) {
                obj_2f4_1->unk_164 = 5.0f;
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
            if ((D_801782F8 != 0) && (gFrameCount & 2)) {
                player->wings.unk_30 = 5.0f;
            }
            if (player->timer_1F8 == 80) {
                obj_2f4_0->unk_188 = 5.0f;
            }
            if (player->timer_1F8 == 60) {
                obj_2f4_1->unk_188 = 5.0f;
            }
            if (player->timer_1F8 == 40) {
                obj_2f4_2->unk_188 = 5.0f;
            }
            if ((player->timer_1F8 >= 71) && (player->timer_1F8 < 80)) {
                obj_2f4_0->unk_07C = 2;
            }
            if ((player->timer_1F8 >= 51) && (player->timer_1F8 < 60)) {
                obj_2f4_1->unk_07C = 2;
            }
            if ((player->timer_1F8 >= 31) && (player->timer_1F8 < 40)) {
                obj_2f4_2->unk_07C = 2;
            }
            if (player->timer_1F8 == 70) {
                obj_2f4_0->unk_0B8 = 1;
                func_800A6028(&player->unk_460, 0x09000002);
            }
            if (player->timer_1F8 == 50) {
                obj_2f4_1->unk_0B8 = 2;
                func_800A6028(&player->unk_460, 0x09000002);
            }
            if (player->timer_1F8 == 30) {
                obj_2f4_2->unk_0B8 = 3;
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
                Object_Kill(&obj_2f4_0->obj, &obj_2f4_0->sfxPos);
                Object_Kill(&obj_2f4_1->obj, &obj_2f4_1->sfxPos);
                Object_Kill(&obj_2f4_2->obj, &obj_2f4_2->sfxPos);
                
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
    obj_2f4_0->unk_18C[20].y -= 3.0f;
    obj_2f4_0->obj.pos.y -= 3.0f;
    obj_2f4_2->unk_18C[20].y -= 3.0f;
    obj_2f4_2->obj.pos.y -= 3.0f;
    obj_2f4_1->unk_18C[20].y -= 3.0f;
    obj_2f4_1->obj.pos.y -= 3.0f;
}

extern f32 D_DF4260_80199AE4[3];
extern f32 D_DF4260_80199AF0[3];
extern f32 D_DF4260_80199AFC[3];
extern f32 D_DF4260_80199B08[3];
extern f32 D_DF4260_80199B14[3];
extern f32 D_DF4260_80199B20[3];
extern f32 D_DF4260_80199B2C[3];

void func_DF4260_80190F74(Object_2F4_Test* arg0, s32 arg1) {
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Player* player = &gPlayer[0];

    Matrix_RotateY(gCalcMatrix, player->unk_0E8 * 0.017453292f, 0);
    sp5C.x = D_DF4260_80199AE4[arg1];
    sp5C.y = D_DF4260_80199AF0[arg1];
    sp5C.z = D_DF4260_80199AFC[arg1];
    sp44.x = D_DF4260_80199B08[arg1];
    sp44.y = D_DF4260_80199B14[arg1];
    sp44.z = D_DF4260_80199B20[arg1];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
    Object_2F4_Initialize((Object_2F4* ) arg0);
    arg0->obj.pos.x = player->pos.x + sp50.x;
    arg0->obj.pos.y = player->pos.y + sp50.y;
    arg0->obj.pos.z = player->pos.z + sp50.z;
    arg0->fwork[0] = sp38.x;
    arg0->fwork[1] = sp38.y;
    arg0->fwork[2] = sp38.z;
    arg0->fwork[7] = Rand_ZeroOne() * 360.0f;
    arg0->fwork[8] = Rand_ZeroOne() * 360.0f;
    arg0->unk_0E8.x = player->vel.x;
    arg0->unk_0E8.y = player->vel.y;
    arg0->unk_0E8.z = player->vel.z;
    arg0->obj.status = 1;
    arg0->obj.id = OBJ_2F4_195;
    arg0->obj.rot.z = D_DF4260_80199B2C[arg1];
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->swork[11] = 1;
    Audio_PlaySfx(0x3100000C, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

extern f32 D_DF4260_8019B7D0;
extern f32 D_DF4260_8019B7D4;
extern f32 D_DF4260_8019B7D8;

void func_DF4260_80191160(Player* player) {
    Vec3f sp64;
    Vec3f sp58;
    f32 sp54;
    f32 var_fv1;
    f32 sp4C;
    f32 temp_fa0;
    f32 temp_fa1;


    player->wings.unk_10 = 0.0f;
    player->wings.unk_08 = 0.0f;
    player->wings.unk_0C = 0.0f;
    player->wings.unk_04 = 0.0f;
    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 3.0f, 0.0f);
    if (player->unk_1D0 >= 3) {
        player->camEye.y += 3.0f;
        player->camAt.y += 3.0f;
        player->pos.y += 3.0f;
        gObjects2F4[0].obj.pos.y += 3.0f;
        gObjects2F4[1].obj.pos.y += 3.0f;
        gObjects2F4[2].obj.pos.y += 3.0f;
    }

    gBgColor = 0x845;

    switch (player->unk_1D0) {
        case 0:
            func_8001A38C(1, &player->unk_460);
            sp54 = player->camEye.x - D_DF4260_8019B6D8[62];
            sp4C = player->camEye.z - D_DF4260_8019B6D8[64];

            D_80177A48[0]= Math_RadToDeg(Math_Atan2F(sp54, sp4C));
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
                D_80177A48[0]+= 0.5f;
            } else {
                D_80177A48[0]-= 0.5f;
            }
            Matrix_RotateY(gCalcMatrix, D_80177A48[0]* 0.017453292f, 0);
            sp64.x = 0.0f;
            sp64.y = 0.0f;
            sp64.z = D_80177A48[1];
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
            Math_SmoothStepToF(&player->camEye.x, D_DF4260_8019B7D0 + sp58.x, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, D_DF4260_8019B7D4 + 100.0f, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.z, D_DF4260_8019B7D8 + sp58.z, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.x, D_DF4260_8019B7D0, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, D_DF4260_8019B7D4, 0.05f, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, D_DF4260_8019B7D8, 0.05f, 500.0f, 0.0f);
            temp_fa0 = player->pos.x - D_DF4260_8019B7D0;
            temp_fa1 = player->pos.z - D_DF4260_8019B7D8;
            if (D_80177A80 < 30) {
                var_fv1 = Math_SmoothStepToAngle(&player->unk_0E8, Math_RadToDeg(-Math_Atan2F(temp_fa0, temp_fa1)), 0.5f, 4.0f, 0.0001f) * 20.0f;
            } else {
                var_fv1 = Math_SmoothStepToAngle(&player->unk_0E8, Math_RadToDeg(Math_Atan2F(temp_fa0, temp_fa1)), 0.5f, 2.0f, 0.0001f) * 30.0f;
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
            Matrix_RotateY(gCalcMatrix, player->unk_0E8 * 0.017453292f, 0);
            Matrix_Push(&gCalcMatrix);
            Matrix_RotateY(gCalcMatrix, D_80177A48[5] * 0.017453292f, 1);
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
                func_DF4260_80190F74(&gObjects2F4[0], 0);
            }
            if (gTeamShields[2] > 0) {
                func_DF4260_80190F74(&gObjects2F4[1], 1);
            }
            if (gTeamShields[3] > 0) {
                func_DF4260_80190F74(&gObjects2F4[2], 2);
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
                gObjects2F4[0].unk_0B8 = 1;
                gObjects2F4[0].unk_138 = 2.0f;
                gObjects2F4[0].timer_0BC = 50;
                Audio_PlaySfx(0x09000002, &gObjects2F4[0].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                gObjects2F4[0].unk_188 = 5.0f;
            }
            break;
        case 1190:
            if (gTeamShields[2] > 0) {
                gObjects2F4[1].unk_0B8 = 1;
                gObjects2F4[1].unk_138 = 2.0f;
                gObjects2F4[1].timer_0BC = 50;
                Audio_PlaySfx(0x09000002, &gObjects2F4[1].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                gObjects2F4[1].unk_188 = 5.0f;
            }
            break;
        case 1230:
            if (gTeamShields[3] > 0) {
                gObjects2F4[2].unk_0B8 = 1;
                gObjects2F4[2].unk_138 = 2.0f;
                gObjects2F4[2].timer_0BC = 50;
                Audio_PlaySfx(0x09000002, &gObjects2F4[2].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                gObjects2F4[2].unk_188 = 5.0f;
            }
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_0E4 + player->unk_4D8) * 0.017453292f), 1);
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
    player->unk_080 = -__sinf(player->unk_088 * 0.017453292f) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * 0.017453292f);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/D_DF4260_8019AEF0.s")

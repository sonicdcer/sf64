#include "global.h"
#include "DF4260.h"

void func_DF4260_80187520(s32 arg0, s32 arg1) {
}

void func_DF4260_80187530(Object_80* obj80) {
}

extern Gfx* D_60199D0;

void func_DF4260_8018753C(Object_80* arg0) {

    GCGM_BACK(G_CULL_BACK);
    GDL(&D_60199D0);
    GSGM_BACK(G_CULL_BACK);
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
    arg0->timer_0BE = 0x14;
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

void func_DF4260_801877A0(Object* arg0, f32 arg1, f32 arg2, f32 arg3) {
    Vec3f sp2C;
    Vec3f sp20;

    sp2C.x = arg1;
    sp2C.y = arg2;
    sp2C.z = arg3;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);
    func_8007F11C(0x161, arg0->pos.x + sp20.x, arg0->pos.y + sp20.y, arg0->pos.z + sp20.z, 100.0f);
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

extern f32 D_DF4260_8019B6D8[0x44];

void func_DF4260_801878D8(Object_408* arg0) {
    s32 i;

    D_801613A0 = 0;
    if (gLevelMode == 0) {
        if (gPlayer->state_1C8 == 3) {
            gPlayer->state_1C8 = 9;
            gPlayer->unk_1D0 = 0;
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

void func_DF4260_8018798C(Object* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8007BFFC(arg1, arg2, arg3, 0.0f, 0.0f, 0.0f, arg4, 0x1E);
    func_8007A6F0(&arg0->pos, 0x29034003);
}

void func_DF4260_801879F0(Object* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8007D1E0(arg1, arg2, arg3, arg4);
    func_8007A6F0(&arg0->pos, 0x29034003);
}

void func_DF4260_80187A38(UnkStruct_func_DF4260_80187A38* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    func_8007C120(arg1, arg2, arg3, arg0->unk6C.x, arg0->unk6C.y, arg0->unk6C.z, arg4, arg5);
}

f32 func_DF4260_80187A88(s32 arg0) {
    f32 ret = arg0 * 0.5f;

    if (ret > 8.0f) {
        ret = 8.0f;
    }
    return ret;
}

extern void func_80042EC0(void*);                             /* extern */
extern void func_800430DC(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32); /* extern */

void func_DF4260_80187AC8(Object_408_292* arg0) {
    Object_4C* var_v0_2;
    s32 var_v0;
    s32 var_s1;
    s32 var_s1_2;

    if (arg0->unk_062 != 0) {
        arg0->unk_062 = 0;
        if (arg0->unk_066 == 0) {
            arg0->swork[0xA] = 0xF;
            arg0->swork[0x1D] -= arg0->unk_064;
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[0x3E], D_DF4260_8019B6D8[0x3F], D_DF4260_8019B6D8[0x40], 0.2f, 0x14);
            if (arg0->swork[0x1D] < 0x1E) {
                func_8007A6F0(&arg0->obj.pos, 0x2943500F);
            } else {
                func_8007A6F0(&arg0->obj.pos, 0x29034003);
            }
            func_800BA808(gMsg_ID_2270, 0x50);
            if (arg0->swork[0x1D] <= 0) {
                arg0->swork[0xA] = 1000;
                ((Hitbox*)(arg0->info.hitbox))[0].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[0x3E], D_DF4260_8019B6D8[0x3F], D_DF4260_8019B6D8[0x40], 10.0f);
                Audio_PlaySfx(0x2940D09AU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_Timer_80161A60 = 8;
                if (fabsf(arg0->obj.rot.x) < 20.0f) {
                    arg0->swork[0x20] = 1;
                }
                arg0->unk_04E = 7;
                arg0->timer_050 = 0x64;
                func_800182F4(0x105000FF);
                func_800182F4(0x115000FF);
                D_80177A80 = 0;

                if ((gPlayer->state_1C8 == 3) || (gPlayer->state_1C8 == 5)) {
                    gPlayer->state_1C8 = 7;
                    gPlayer->unk_1D0 = gPlayer->timer_1F8 = 0;
                    gPlayer->unk_0E8 += gPlayer->unk_114;
                    if (gPlayer->unk_0E8 > 360.0f) {
                        gPlayer->unk_0E8 -= 360.0f;
                    }
                    if (gPlayer->unk_0E8 < 0.0f) {
                        gPlayer->unk_0E8 += 360.0f;
                    }
                    gPlayer->unk_114 = 0.0f;
                }
                func_800BA808(gMsg_ID_2280, 0x50);
                func_80042EC0(arg0);
                D_801613A0 = 0x186A0;
                return;
            }
        } else if (arg0->unk_066 == 3) {
            arg0->swork[3] = 0xF;
            arg0->swork[0x14] = 0x1E;
            arg0->swork[0x1C] -= arg0->unk_064;
            func_DF4260_801879F0(arg0, D_DF4260_8019B6D8[0xC] +  ((Rand_ZeroOne() - 0.5f) * 60.0f), D_DF4260_8019B6D8[0xD], D_DF4260_8019B6D8[0xE] +  ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[0xC], D_DF4260_8019B6D8[0xD], D_DF4260_8019B6D8[0xE], 0.1f, 0x14);
            if (arg0->swork[0x1C] <= 0) {
                arg0->swork[3] = 1000;
                ((Hitbox*)(arg0->info.hitbox))[3].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[0xC], D_DF4260_8019B6D8[0xD], D_DF4260_8019B6D8[0xE], 10.0f);
            }
        }

        if (arg0->unk_066 == 1) {
            arg0->swork[2] = 0xF;
            arg0->swork[0x15] = 0x1E;
            arg0->swork[0x1A] -= arg0->unk_064;

            func_DF4260_801879F0(arg0, D_DF4260_8019B6D8[0x6] + ((Rand_ZeroOne() - 0.5f) * 60.0f), D_DF4260_8019B6D8[0x7], D_DF4260_8019B6D8[0x8] +  ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[0x6], D_DF4260_8019B6D8[0x7], D_DF4260_8019B6D8[0x8], 0.1f, 0x14);
            if (arg0->swork[0x1A] <= 0) {
                arg0->swork[2] = 1000;
                 ((Hitbox*)(arg0->info.hitbox))[1].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[0x6], D_DF4260_8019B6D8[0x7], D_DF4260_8019B6D8[0x8], 7.0f);
            }
        } else if (arg0->unk_066 == 2) {
            arg0->swork[1] = 0xF;
            arg0->swork[0x16] = 0x1E;
            arg0->swork[0x1B] -= arg0->unk_064;
            func_DF4260_801879F0(arg0, D_DF4260_8019B6D8[0x0] + ((Rand_ZeroOne() - 0.5f) * 60.0f), D_DF4260_8019B6D8[0x1], D_DF4260_8019B6D8[0x2] + ((Rand_ZeroOne() - 0.5f) * 60.0f), 2.0f);
            func_DF4260_80187A38(arg0, D_DF4260_8019B6D8[0x0], D_DF4260_8019B6D8[1], D_DF4260_8019B6D8[2], 0.1f, 0x14);
            if (arg0->swork[0x1B] <= 0) {
                arg0->swork[1] = 1000;
                ((Hitbox*)(arg0->info.hitbox))[2].z.size = 100000.0f;
                func_DF4260_8018798C(arg0, D_DF4260_8019B6D8[0], D_DF4260_8019B6D8[1], D_DF4260_8019B6D8[2], 7.0f);
            }
        } else if ((arg0->unk_066 == 4) || (arg0->unk_066 == 5)) {
            Audio_PlaySfx(0x2903300EU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->swork[0x17] = 0xC8;
            if (arg0->unk_066 == 4) {
                arg0->swork[0x18] -= arg0->unk_064;
                arg0->swork[7] = arg0->swork[8] = arg0->swork[9] = 5;
                arg0->swork[0x12] = 0x1E;
                if (arg0->swork[0x18] <= 0) {
                    arg0->swork[7] = arg0->swork[8] = arg0->swork[9] = 1000;
                    ((Hitbox*)(arg0->info.hitbox))[4].z.size = 100000.0f;
                    for (var_s1 = 3; var_s1 < 6; var_s1++) {
                        func_800430DC(D_DF4260_8019B6D8[18 + var_s1 + 2], D_DF4260_8019B6D8[24 + var_s1 + 2], D_DF4260_8019B6D8[30 + var_s1 + 2],D_DF4260_8019B6D8[36 + var_s1 + 2], D_DF4260_8019B6D8[42 + var_s1 + 2], D_DF4260_8019B6D8[48 + var_s1 + 2], 0.0f, (Rand_ZeroOne() * 20.0f), 0.0f, 5.5f, var_s1 + 0x1C, ((s32) (Rand_ZeroOne() * 30.0f)) + 60.0f);
                    }
                    if (arg0->unk_04E < 5) {
                        arg0->unk_04E = 5;
                        arg0->timer_050 = 0x3C;
                    }
                }
            } else {
                arg0->swork[0x19] -= arg0->unk_064;
                arg0->swork[4] = arg0->swork[5] = arg0->swork[6] = 5;
                arg0->swork[0x13] = 0x1E;
                if (arg0->swork[0x19] <= 0) {
                    arg0->swork[4] = arg0->swork[5] = arg0->swork[6] = 1000;
                    ((Hitbox*)(arg0->info.hitbox))[5].z.size = 100000.0f;

                    for (var_s1 = 0; var_s1 < 3; var_s1++) {
                        func_800430DC(D_DF4260_8019B6D8[18 + var_s1 + 2], D_DF4260_8019B6D8[24 + var_s1 + 2], D_DF4260_8019B6D8[30 + var_s1 + 2],D_DF4260_8019B6D8[36 + var_s1 + 2], D_DF4260_8019B6D8[42 + var_s1 + 2], D_DF4260_8019B6D8[48 + var_s1 + 2], 0.0f, (Rand_ZeroOne() * 20.0f), 0.0f, 5.5f, var_s1 + 0x1C, ((s32) (Rand_ZeroOne() * 30.0f)) + 60.0f);
                    }
                    if (arg0->unk_04E < 5) {
                        arg0->unk_04E = 6;
                        arg0->timer_050 = 0x3C;
                    }
                }
            }

            if (arg0->timer_050 < 0x32) {
                arg0->timer_050 += 0xA;
            }

            if ((arg0->unk_04E != 0) && (arg0->unk_04E < 5)) {
                arg0->fwork[0xE] = 0.0f;
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
                        arg0->swork[0x1F] = 2;
                        break;
                    case 1:
                        arg0->swork[0x1F] = 3;
                        break;
                    case 2:
                    case 3:
                    case 4:
                        arg0->swork[0x1F] = 4;
                        break;
                }
            }
        } else {
            func_8007A6F0(&arg0->obj.pos, 0x29121007);
        }
    }

    if (!(D_801615D0.y < 0.0f)) {

        var_v0_2 = gObjects4C;
        for (var_s1 = 0; var_s1 < 0x28; var_s1++, var_v0_2++) {
            if ((var_v0_2->obj.status == 2) && (var_v0_2->obj.id == 0xA2)) {
                if ((fabsf(var_v0_2->obj.pos.x - D_DF4260_8019B6D8[0x14]) < 90.0f) && (fabsf(var_v0_2->obj.pos.z - D_DF4260_8019B6D8[0x20]) < 90.0f)) {
                    var_v0_2->unk_46 = 1;
                    break;
                } else if ((fabsf(var_v0_2->obj.pos.x - D_DF4260_8019B6D8[0x17]) < 90.0f) && (fabsf(var_v0_2->obj.pos.z - D_DF4260_8019B6D8[0x23]) < 90.0f)) {
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
            func_8007BFFC(D_DF4260_8019B6D8[0x38], D_DF4260_8019B6D8[0x39], D_DF4260_8019B6D8[0x3A], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
        if ((arg0->swork[7] == 1000) && !(gFrameCount & 3)) {
            func_8007BFFC(D_DF4260_8019B6D8[0x3B], D_DF4260_8019B6D8[0x3C], D_DF4260_8019B6D8[0x3D], 0.0f, 10.0f, 0.0f, 2.0f, 5);
        }
    }
}

extern s32 func_8008AC54(s32);

s32 func_DF4260_80188750(UnkStruct_func_DF4260_80188750* arg0) {

    arg0->unk_CE++;
    if (arg0->unk_CE >= 5) {
        arg0->unk_CE = 0;
        return 0xBF;
    }

    if (func_8008AC54(0) < 4) {
        return 0xBE;
    } else {
        return 0;
    }

}

void func_DF4260_801887AC(UnkStruct_func_DF4260_80188750* arg0) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s32 sp38;
    s32 temp_v0;
    
    if ((D_801613A0 >= 0x1F4)) {
        temp_v0 = arg0->unk_C4;
        if (arg0->unk_C4 != 0) {
            switch (temp_v0) {
                case 1:
                    sp38 = func_DF4260_80188750(arg0);
                    if (sp38 != 0) {
                        if (arg0->unk_8A != 0x3E8) {
                            func_DF4260_80187710(D_DF4260_8019B6D8[0], D_DF4260_8019B6D8[1], D_DF4260_8019B6D8[2], 65.0f, 0.0f, D_DF4260_8019B6D8[0x10] + arg0->obj.rot.y, 0, 0, sp38);
                        }
                        if (arg0->unk_8C != 0x3E8) {
                            func_DF4260_80187710(D_DF4260_8019B6D8[6], D_DF4260_8019B6D8[7], D_DF4260_8019B6D8[8], 65.0f, 0.0f, D_DF4260_8019B6D8[0x10] + arg0->obj.rot.y, 0, 0, sp38);
                        }
                    }
                    arg0->unk_C4 = 0;
                    break;
                case 2:
                    func_DF4260_801877A0(arg0, 40.0f, 228.0f, 212.0f);
                    func_DF4260_801877A0(arg0, -40.0f, 228.0f, 212.0f);
                    arg0->unk_C4 = 0;
                    break;
                case 3:
                    if (arg0->unk_8E != 0x3E8) {
                        sp3C = gPlayer->pos.x;
                        sp40 = gPlayer->pos.y;
                        sp44 = gPlayer->unk_138;
                        gPlayer->pos.x += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        gPlayer->pos.y += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        gPlayer->unk_138 += (Rand_ZeroOne() - 0.5f) * 300.0f;
                        func_8007F11C(0x178, D_DF4260_8019B6D8[0xC], D_DF4260_8019B6D8[0xD], D_DF4260_8019B6D8[0xE], 60.0f);
                        gPlayer->pos.x = sp3C;
                        gPlayer->pos.y = sp40;
                        gPlayer->unk_138 = sp44;
                    }
                    arg0->unk_C4 = 0;
                    break;
            }
            
        }
    }
}

extern void func_8002E4F8(u16*, s32);

void func_DF4260_80188A18(Object_408_292* arg0) {

    if (arg0->timer_050 == 0) {
        arg0->unk_04E = 0;
        arg0->timer_050 = (s32)(Rand_ZeroOne() * 20.0f) + 20;
        arg0->fwork[0xE] = 0.0f;
        
        switch ((s32)(Rand_ZeroOne() * 8.0f)) {
            case 0:
            case 1:
                arg0->swork[0x1F] = 1;
                break;
            case 2:
            case 3:
                arg0->swork[0x1F] = 2;
                break;
            case 4:
                if (D_801615D0.y < 0.0f) {
                    arg0->swork[0x1F] = 4;
                } else {
                    arg0->swork[0x1F] = 3;
                }
                break;
            case 5:
            case 6:
            case 7:
                arg0->swork[0x1F] = 4;
                break;
        }
        
        if ((D_801613A0 >= 0x3E9) && (Rand_ZeroOne() < 0.3f)) {
            if (Rand_ZeroOne() < 0.5f) {
                func_8002E4F8(gMsg_ID_2263, 0x50);
            } else {
                func_8002E4F8(gMsg_ID_2265, 0x50);
            }
        }
    }
    if ((D_801613A0 >= 0x321) && !(D_801613A0 & 0x1FF)) {
        if (D_80177B6C < 2) {
            func_800BA808(gMsg_ID_20237, 0x1E);
        } else if (D_801615D0.z > 0.0f) {
            func_800BA808(gMsg_ID_2233, 0xA);
        } else {
            func_800BA808(gMsg_ID_2282, 0x1E);
        }
    }
}

extern void func_80062B60(f32, f32, s32, f32);

void func_DF4260_80188C7C(Object_408_292* arg0) {

    if (arg0->unk_044 == 0) {
        arg0->unk_044++;
        arg0->fwork[0xC] *= -0.2f;
        Audio_PlaySfx(0x19030004U, &arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_80062B60(D_DF4260_8019B6D8[0x38], D_DF4260_8019B6D8[0x3A], 0, 30.0f);
        arg0->swork[0x12] = 0xD;
        arg0->swork[0x13] = 0xF;
        arg0->swork[0x15] = 0xA;
        arg0->swork[0x16] = 0xC;
        arg0->swork[0x14] = 0x11;
        D_80178480 = 0x14;
    } else {
        arg0->fwork[0xC] = 0.0f;
    }
}

void func_DF4260_80188D50(Object_408_292*);
#ifdef IMPORT_DATA
// Matching - Requires Data Import
void func_DF4260_80188D50(Object_408_292* arg0) {
    static s32 D_DF4260_801997E0 = 0;
    s32 i;
    Vec3f sp48;
    Vec3f sp3C;
    s32 temp_ft3;

    if (arg0->unk_0D0 == 0) {
        if (gPlayer->unk_1F4 != 0) {
            D_DF4260_801997E0 = 0x50;
        }
        
        if (D_DF4260_801997E0 != 0) {
            D_DF4260_801997E0--;
        } else if ((gPlayer->pos.y < 200.0f) && (arg0->unk_04E < 5) && (fabsf(arg0->obj.pos.x - gPlayer->pos.x) < 200.0f) && (fabsf(arg0->obj.pos.z - gPlayer->unk_138) < 200.0f) && (gPlayer->unk_4D8 > 180.0f)) {
            arg0->unk_0D0++;
            D_DF4260_801997E0 = 0x14;
            Audio_PlaySfx(0x49008025U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if ((gTeamShields[1] > 0) || (gTeamShields[2] > 0) || (gTeamShields[3] > 0)) {
                do {
                    temp_ft3 = (s32) (Rand_ZeroOne() * 2.9f) + 1;
                } while (gTeamShields[temp_ft3] <= 0);

                if (!gPlayer){}
                switch (temp_ft3) {
                    case 1:
                        func_800BA808(gMsg_ID_7100, 0xA);
                        break;
                    case 2:
                        func_800BA808(gMsg_ID_15252, 0x14);
                        break;
                    case 3:
                        func_800BA808(gMsg_ID_17160, 0x1E);
                        break;
                }
            }
            Matrix_RotateY(gCalcMatrix, (gPlayer->unk_0E8 + gPlayer->unk_114) * 0.017453292f, 0U);
            sp48.x = 0.0f;
            sp48.y = 0.0f;
            sp48.z = -2500.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp48, &sp3C);
            for (i = 0; i < ARRAY_COUNT(gItems); i++) {
                if (gItems[i].obj.status == 0) {
                    Item_Initialize(&gItems[i]);
                    gItems[i].obj.status = 1;
                    gItems[i].obj.id = 0x14F;
                    gItems[i].obj.pos.x = gPlayer->pos.x + sp3C.x;
                    gItems[i].obj.pos.y = gPlayer->pos.y + 100.0f;
                    gItems[i].obj.pos.z = gPlayer->unk_138 + sp3C.z;
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

s32 func_DF4260_8018A434(s32 arg0, s32* arg1, s32 arg2, Vec3f* arg3, UnkStruct_func_DF4260_8018A434* arg4) {
    s32 pad;

    if (arg4->unk_088[arg0] == 0x3E8) {
        *arg1 = 0;
    }

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, 0x3E9);
    switch (arg0) {
    case 6:
        arg3->x = (f32) (arg3->x + arg4->unk_0DC);
        arg3->y = (f32) (arg3->y + arg4->unk_0DC);
        arg3->y = (f32) (arg3->y - (arg4->unk_10C * 0.6f));
        break;
    case 5:
        arg3->x = (f32) (arg3->x - arg4->unk_0DC);
        arg3->y = (f32) (arg3->y - arg4->unk_0DC);
        arg3->z = (f32) (arg3->z + arg4->unk_0DC);
        break;
    case 4:
        arg3->x = (f32) (arg3->x + arg4->unk_0DC);
        arg3->y = (f32) (arg3->y + arg4->unk_0DC);
        arg3->z = (f32) (arg3->z - arg4->unk_0DC);
        break;
    case 9:
        arg3->x = (f32) (arg3->x - arg4->unk_0D8);
        arg3->y = (f32) (arg3->y - arg4->unk_0D8);
        arg3->y = (f32) (arg3->y + arg4->unk_10C);
        break;
    case 8:
        arg3->x = (f32) (arg3->x + arg4->unk_0D8);
        arg3->y = (f32) (arg3->y + arg4->unk_0D8);
        arg3->z = (f32) (arg3->z - arg4->unk_0D8);
        break;
    case 7:
        arg3->x = (f32) (arg3->x - arg4->unk_0D8);
        arg3->y = (f32) (arg3->y - arg4->unk_0D8);
        arg3->z = (f32) (arg3->z + arg4->unk_0D8);
        break;
    case 3:
        arg3->x = (f32) (arg3->x + arg4->unk_0E0);
        arg3->y = (f32) (arg3->y + arg4->unk_0E0);
        arg3->z = (f32) (arg3->z + D_DF4260_8019B714);
        break;
    case 1:
        arg3->x = (f32) (arg3->x + (arg4->unk_0E8 - D_DF4260_8019B714));
        arg3->y = (f32) (arg3->y + arg4->unk_0E8);
        break;
    case 2:
        arg3->x = (f32) (arg3->x + (arg4->unk_0E4 + D_DF4260_8019B714));
        arg3->y = (f32) (arg3->y + arg4->unk_0E4);
        break;
    case 16:
        arg3->x = (f32) (arg3->x + D_DF4260_8019B718);
        break;
    }
    if ((arg4->unk_088[arg0] & 1) || (arg4->unk_05C & 1)) {
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
    
    if ((arg0 >= 4) && (arg0 < 0xA)) {
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

void func_DF4260_8018AA74(Object_408_292* arg0) {
    Matrix_Translate(gCalcMatrix, 0.0f, 700.0f, 0.0f, (u8) 1);
    Animation_DrawSkeleton(2, &D_602BE64, arg0->vwork, func_DF4260_8018A434, func_DF4260_8018A730, &arg0->obj, gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
}

s32 func_DF4260_8018AB08(s32 arg0, s32 arg1, s32 arg2, f32* arg3, Object_408_292* arg4) {
    if (arg0 == 1) {
        *arg3 += arg4->fwork[0x10];
    }
    if ((arg0 == 3) && (arg4->obj.id == 0xB0)) {
        *arg3 += arg4->fwork[0x10];
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018AB64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ACE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018AED0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B0B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B15C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B58C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BAAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BAFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BBA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BBF8.s")

s32 func_DF4260_8018BC50(s32 arg0, s32* arg1, s32 arg2, s32 arg3, UnkStruct_func_DF4260_8018BC50* arg4) {
    if ((arg4->unkB8 == 0x65) && (arg0 != 8)) {
        *arg1 = 0;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BC84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BD7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BDD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BE7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018C0B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018C19C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018DDAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018E290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018E76C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EC54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ECAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ED1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ED78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EE2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EE84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EF38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EF90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F044.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F1C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F31C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F3BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F4A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F55C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F678.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F6F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F880.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80190F74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80191160.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/D_DF4260_8019AEF0.s")

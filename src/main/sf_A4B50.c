#include "global.h"

extern f32 D_800D2F64;
extern Vec3f D_800D2F80;
extern Vec3f D_800D2F8C;
extern UnkStruct_D_80161A68* D_800D2F98[21];
extern f32 D_800D2FEC[5];
extern s32 D_800D3000[4][4];
extern Vec3f D_800D3040[6];
extern Vec3f D_800D3088[4];
extern Vec3f D_800D30B8[4];

s32 func_800A3F50(u16 arg0) {
    if ((D_801778B0[2] > 0) && (D_801778B0[3] > 0) && (D_801778B0[1] > 0) && (D_80161A98 >= arg0)) {
        return true;
    }
    return false;
}

void func_800A3FB0(void) {
    D_800D2F64 = 0.0f;
}

s32 func_800A3FC4(void) {
    if (D_80161A90[0] >= 3) {
        return 0x17F;
    }
    return 0xFF;
}

#ifdef NON_MATCHING
void func_800A3FEC(void) {
    Vec3f spC4;
    Vec3f spB8;
    Vtx* spB4;
    u16* spB0;
    s32 i;
    s32 spA8;
    f32* var_s3;
    f32* var_s5;
    f32* var_s4;
    f32* var_s0;
    f32* var_s1;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;

    D_801782FC++;
    switch (D_80178234) {
        case 7:
            spB4 = (D_80177DB0 & 1) ? SEGMENTED_TO_VIRTUAL(D_6001C50) : SEGMENTED_TO_VIRTUAL(D_6004500);
            spB0 = SEGMENTED_TO_VIRTUAL(D_6022760);
            spA8 = 15;
            sp90 = 70.0f;
            sp8C = 0.1f;
            sp88 = 2.2f;
            sp84 = 0.5f;
            break;
        case 8:
            spB4 = (D_80177DB0 & 1) ? SEGMENTED_TO_VIRTUAL(D_6009ED0) : SEGMENTED_TO_VIRTUAL(D_600C780);
            spB0 = SEGMENTED_TO_VIRTUAL(D_602AC50);
            spA8 = 7;
            sp90 = 40.0f;
            sp8C = 0.2f;
            sp88 = 1.0f;
            sp84 = 2.0f;
            break;
    }
    var_s3 = D_801782CC;
    var_s5 = D_801782D4;
    var_s4 = D_801782DC;
    var_s0 = D_801782E4;
    var_s1 = D_801782EC;
    for (i = 0; i < 17 * 17; i++, var_s3++, var_s5++, var_s4++, var_s0++, var_s1++, spB0++) {
        Math_SmoothStepToF(var_s3, *var_s5, sp8C, *var_s4, 0.0f);
        Math_SmoothStepToF(var_s4, 100.0f, 1.0f, sp84, 0.0f);
        if ((i & spA8) == (D_801782FC & spA8)) {
            *var_s5 = Rand_ZeroOne() * sp90;
            *var_s4 = 0.0f;
        }
        *var_s0 += *var_s1;
        *var_s1 -= 0.5f;
        if (*var_s0 < 0.0f) {
            *var_s0 = 0.0f;
            *var_s1 = 0.0f;
        }
        spB4[*spB0].n.ob[1] = (s32) *var_s0 + (s32) *var_s3;
        Matrix_RotateZ(gCalcMatrix, *var_s3 * sp88 * M_DTOR, 0);
        spC4.x = 120.0f;
        spC4.y = 0.0f;
        spC4.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spC4, &spB8);
        spB4[*spB0].n.n[0] = spB8.x;
        spB4[*spB0].n.n[1] = spB8.y;
        spB4[*spB0].n.n[2] = spB8.z;
    }
    //     for(i = 0; i < 17 * 17; i++) {
    //     Math_SmoothStepToF(&D_801782CC[i], D_801782D4[i], var_fs5, D_801782DC[i], 0.0f);
    //     Math_SmoothStepToF(&D_801782DC[i], 100.0f, 1.0f, sp84, 0.0f);
    //     if ((i & spA8) == (D_801782FC & spA8)) {
    //         D_801782D4[i] = Rand_ZeroOne() * var_fs4;
    //         D_801782DC[i] = 0.0f;
    //     }
    //     D_801782E4[i] += *var_s1;
    //     D_801782EC[i] -= 0.5f;
    //     if (D_801782E4[i] < 0.0f) {
    //         D_801782E4[i] = 0.0f;
    //         D_801782EC[i] = 0.0f;
    //     }
    //     var_s7[var_s2[i]].n.ob[1] = (s32) D_801782E4[i] + (s32) D_801782CC[i];
    //     Matrix_RotateZ(gCalcMatrix, D_801782CC[i] * sp88 * M_DTOR, 0);
    //     spC4.x = 120.0f;
    //     spC4.y = 0.0f;
    //     spC4.z = 0.0f;
    //     Matrix_MultVec3fNoTranslate(gCalcMatrix, &spC4, &spB8);
    //     var_s7[var_s2[i]].n.n[0]= spB8.x;
    //     var_s7[var_s2[i]].n.n[1]= spB8.y;
    //     var_s7[var_s2[i]].n.n[2]= spB8.z;
    // }
}
#else
void func_800A3FEC(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A3FEC.s")
#endif

void func_800A4460(UnkStruct_D_80178280* arg0) {
    if ((D_80178234 == 9) && (D_8016F110[0].obj.status == 2) && (D_8016F110[0].unk_04E == 0x11)) {
        arg0->unk_060 = __sinf(arg0->unk_0F4 * 0.7f * M_DTOR) * 0.5f;
        arg0->unk_088 += 13.0f;
        arg0->unk_0F4 += 20.0f;
        arg0->unk_080 = -__sinf(arg0->unk_088 * M_DTOR) * 5.0f;
        arg0->unk_0F0 = __sinf(arg0->unk_0F4 * M_DTOR) * 10.0f;
        return;
    } else {
        arg0->unk_060 = __sinf(arg0->unk_0F4 * 0.7f * M_DTOR) * 0.5f;
        arg0->unk_088 += 10.0f;
        arg0->unk_0F4 += 8.0f;
        if ((D_80177C98 == 0) || ((arg0->unk_238 == 1) && (D_80177880 == 0))) {
            arg0->unk_080 = -__sinf(arg0->unk_088 * M_DTOR) * 0.5f;
            if ((arg0->unk_49C.unk_00 < 2) || (arg0->unk_49C.unk_01 < 2)) {
                arg0->unk_0F0 = __sinf(arg0->unk_0F4 * M_DTOR) * 5.0f;
            } else {
                arg0->unk_0F0 = __sinf(arg0->unk_0F4 * M_DTOR) * 1.5f;
            }
        }
    }
}

void func_800A46A0(UnkStruct_D_80178280* arg0) {
    s32 var_v1;
    f32 sp40;

    if ((arg0->unk_238 == 0) || (D_80177880 == 1)) {
        if (arg0->unk_49C.unk_00 < 2) {
            if (!(D_80177DB0 & 1) && (D_80177D70[arg0->unk_1C4] != 0)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_2D4.x,
                              (Rand_ZeroOne() * 5.0f) + arg0->unk_2D4.y, arg0->unk_2D4.z, 1.0f);
            }
            if (!(D_80177DB0 & 1) && (Rand_ZeroOne() < 0.5f) && (D_801778E8 == 0)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 5.0f) + arg0->unk_2D4.x,
                              (Rand_ZeroOne() * 5.0f) + arg0->unk_2D4.y, arg0->unk_2D4.z, arg0->unk_0C0.x,
                              arg0->unk_0C0.y, arg0->unk_0C0.z, (Rand_ZeroOne() * 0.02f) + 0.02f, arg0->unk_1C4 + 1);
            }
        }
        if (arg0->unk_49C.unk_01 < 2) {
            if (!(D_80177DB0 & 1) && (D_80177D88[arg0->unk_1C4] != 0)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_2C8.x,
                              (Rand_ZeroOne() * 5.0f) + arg0->unk_2C8.y, arg0->unk_2C8.z, 1.0f);
            }
            if (!(D_80177DB0 & 1) && (Rand_ZeroOne() < 0.5f) && (D_801778E8 == 0)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 5.0f) + arg0->unk_2C8.x,
                              (Rand_ZeroOne() * 5.0f) + arg0->unk_2C8.y, arg0->unk_2C8.z, arg0->unk_0C0.x,
                              arg0->unk_0C0.y, arg0->unk_0C0.z, (Rand_ZeroOne() * 0.02f) + 0.02f, arg0->unk_1C4 + 1);
            }
        }
    }
    var_v1 = 7;
    if (arg0->unk_264 < 0x40) {
        if (arg0->unk_264 >= 0x11) {
            var_v1 = 0xF;
        }
        if (arg0->unk_264 >= 0x21) {
            var_v1 = 0x1F;
        }
        if (arg0->unk_264 >= 0x31) {
            var_v1 = 0x3F;
        }
        if ((arg0->unk_238 == 0) || (D_80177880 == 1)) {
            sp40 = 0.0f;
            if (arg0->unk_1CC == 1) {
                sp40 = 30.0f;
            }
            if (!(D_80177DB0 & var_v1)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_074,
                              (Rand_ZeroOne() * 10.0f) + (arg0->unk_078 + sp40),
                              ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_138, 2.2f);
            }
            if (!((var_v1 >> 2) & D_80177DB0) && (Rand_ZeroOne() < 0.5f)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 30.0f) + arg0->unk_074,
                              (Rand_ZeroOne() * 10.0f) + (arg0->unk_078 + sp40),
                              ((Rand_ZeroOne() - 0.5f) * 30.0f) + arg0->unk_138, arg0->unk_0C0.x, arg0->unk_0C0.y,
                              arg0->unk_0C0.z, (Rand_ZeroOne() * 0.03f) + 0.04f, arg0->unk_1C4 + 1);
                if (arg0->unk_224 == 0) {
                    arg0->unk_224 = 2;
                }
            }
        } else if (!((var_v1 >> 2) & D_80177DB0) && (Rand_ZeroOne() < 0.5f) && (arg0->unk_224 == 0)) {
            arg0->unk_224 = 2;
        }
    }
}

void func_800A4C40(UnkStruct_D_80178280* arg0) {
    Vec3f sp54 = D_800D2F80;
    Vec3f sp48 = D_800D2F8C;
    Vec3f sp3C;
    Vec3f sp30;

    if (D_80161A88 == 2) {
        Matrix_Translate(gCalcMatrix, arg0->unk_074, arg0->unk_078, arg0->unk_138, 0);
        Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + 180.0f) * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, -((arg0->unk_0E4 + arg0->unk_4D8) * M_DTOR), 1);
        Matrix_RotateZ(gCalcMatrix, -(arg0->unk_0F8 * M_DTOR), 1);
        Matrix_MultVec3f(gCalcMatrix, &sp54, &sp3C);
        Matrix_MultVec3f(gCalcMatrix, &sp48, &sp30);
        if (arg0->unk_078 < (D_80177940 + 100.0f)) {
            if ((sp3C.y < D_80177940 + 80.0f) && !(D_80177DB0 & 1)) {
                if (D_80161A64) {}
                func_8007ACE0(sp3C.x, D_80177940, sp3C.z, 0.1f, 2.0f, arg0->unk_0E8 + arg0->unk_114 + 20.0f);
            }
            if ((sp30.y < D_80177940 + 80.0f) && !(D_80177DB0 & 1)) {
                func_8007ACE0(sp30.x, D_80177940, sp30.z, 0.1f, 2.0f, (arg0->unk_0E8 + arg0->unk_114) - 20.0f);
            }
        }
        if ((sp30.y < D_80177940 + 80.0f) || (sp3C.y < D_80177940 + 80.0f)) {
            if (D_80161A64 == 0) {
                D_80161A64 = 1;
                func_80019218(0x1100000B, arg0->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        } else {
            D_80161A64 = 0;
            func_8001A55C(&arg0->unk_460[0].x, 0x1100000B);
        }
    }
}

void func_800A4F4C(Object_58* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(Object_58); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_800A4F7C(void) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 i;
    s32 j;
    s32 var_s4_2;

    switch (D_8017789C) {
        case 0:
            D_80178310 = SEGMENTED_TO_VIRTUAL(D_302DE3C);
            break;
        case 1:
            D_80178310 = SEGMENTED_TO_VIRTUAL(D_302E0E4);
            break;
        case 2:
            if (D_801778AC == 2) {
                D_80178310 = SEGMENTED_TO_VIRTUAL(D_302E378);
            } else {
                D_80178310 = SEGMENTED_TO_VIRTUAL(D_302E170);
            }
            break;
    }
    for (i = 0, j = 0; i < 199; j++) {
        if (D_80178310[j].unk_10 < 0) {
            break;
        }
        if (D_80178310[j].unk_10 == 0x93) {
            func_800A4F4C(&D_801782A8[i]);
            D_801782A8[i].obj.status = 2;
            D_801782A8[i].obj.id = D_80178310[j].unk_10;
            D_801782A8[i].obj.pos.x = D_80178310[j].unk_6;
            D_801782A8[i].obj.pos.z = D_80178310[j].unk_0;
            D_801782A8[i].obj.pos.y = D_80178310[j].unk_8;
            func_800612B8(&D_801782A8[i].unk_1C, D_801782A8[i].obj.id);
            i++;
        }
    }
    for (i = 5, j = 0; i < 199; j++) {
        if (D_80178310[j].unk_10 < 0) {
            break;
        }
        if (D_80178310[j].unk_10 != 0x93) {
            func_800A4F4C(&D_801782A8[i]);
            D_801782A8[i].obj.status = 2;
            D_801782A8[i].obj.id = D_80178310[j].unk_10;
            D_801782A8[i].obj.pos.x = D_80178310[j].unk_6;
            D_801782A8[i].obj.pos.z = D_80178310[j].unk_0;
            D_801782A8[i].obj.pos.y = D_80178310[j].unk_8;
            D_801782A8[i].obj.rot.y = D_80178310[j].unk_C;
            func_800612B8(&D_801782A8[i].unk_1C, D_801782A8[i].obj.id);
            i++;
        }
    }
}

void func_800A5330(void) {
}

void func_800A5338(void) {
    Object_4C* var_s0_2;
    Object_58* var_s0;
    s32 i;
    s32 j;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_603B074);

    for (j = 0, var_s0 = D_801782A8; j < 200; j++) {
        if (D_80178310[j].unk_10 < 0) {
            break;
        }
        if (D_80178310[j].unk_10 < 0xA1) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[j].unk_10;
            var_s0->obj.pos.x = D_80178310[j].unk_6;
            var_s0->obj.pos.z = D_80178310[j].unk_0;
            var_s0->obj.pos.y = D_80178310[j].unk_8;
            var_s0->obj.rot.y = D_80178310[j].unk_C;
            func_800612B8(&var_s0->unk_1C, var_s0->obj.id);
            if (var_s0->obj.id == 1) {
                var_s0->unk_1C.dList = D_6020760;
            }
            var_s0++;
        }
    }

    for (j = 0, var_s0_2 = D_80163400; j < ARRAY_COUNT(D_80163400); j++) {
        if (D_80178310[j].unk_10 < 0) {
            break;
        }
        if (D_80178310[j].unk_10 == 0xA2) {
            Object_4C_Initialize(var_s0_2);
            var_s0_2->obj.status = 1;
            var_s0_2->obj.id = D_80178310[j].unk_10;
            var_s0_2->obj.pos.x = D_80178310[j].unk_6;
            var_s0_2->obj.pos.z = D_80178310[j].unk_0;
            var_s0_2->obj.pos.y = D_80178310[j].unk_8;
            func_800612B8(&var_s0_2->unk_1C, var_s0_2->obj.id);
            var_s0_2++;
        }
    }
    i = 0; // fake?
    Object_408_Initialize(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x124;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
}

void func_800A55B0(void) {
    Object_58* var_s0;
    s32 i;
    s32 j;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_6030B14);

    for (j = 0, var_s0 = D_801782A8; j < 200; j++) {
        if (D_80178310[j].unk_10 < 0) {
            break;
        }
        if (D_80178310[j].unk_10 < 0xA1) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[j].unk_10;
            var_s0->obj.pos.x = D_80178310[j].unk_6;
            var_s0->obj.pos.z = D_80178310[j].unk_0;
            var_s0->obj.pos.y = D_80178310[j].unk_8;
            var_s0->obj.rot.y = D_80178310[j].unk_C;
            func_800612B8(&var_s0->unk_1C, var_s0->obj.id);
            var_s0++;
        }
    }
    i = 0; // fake?
    Object_408_Initialize(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x13A;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
    i = 1;
    Object_408_Initialize(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x13A;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
    i = 2;
    Object_408_Initialize(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x13A;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
}

void func_800A57E0(void) {
    s32 i = 0; // fake?

    Object_408_Initialize(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x141;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
}

void func_800A5844(void) {
    s32 i;

    D_80178410 = 0;
    D_8017827C = 0;
    D_80161684 = 0;
    D_80161A50 = 0;
    D_80177820 = 0;
    D_8015F924 = D_80177CA0 = 0;
    D_80177CB0 = 0.0f;
    D_80161A9C = D_80177A80 = D_80177838 = D_80177840 = D_8017829C = 0;
    D_8017782C = 1;
    if (((D_80178234 != 0x13) || (D_80161A2E != 2)) && (D_80178234 != 9)) {
        for (i = 1; i < 4; i++) {
            if (D_801778D0[i] < 0) {
                if (D_801778D0[i] == -1) {
                    D_801778D0[i] = 0;
                }
            } else if (D_801778D0[i] == 0) {
                D_801778D0[i] = 0xFF;
            }
        }
    }
}

void func_800A594C(void) {
    if (D_801778E8 != 0) {
        switch (D_8017789C) {
            case 0:
                D_80161A68 = SEGMENTED_TO_VIRTUAL(D_302DD70);
                break;
            case 1:
                D_80161A68 = SEGMENTED_TO_VIRTUAL(D_302DDB4);
                break;
            case 2:
                D_80161A68 = SEGMENTED_TO_VIRTUAL(D_302DDF8);
                break;
        }
    } else {
        D_80161A68 = SEGMENTED_TO_VIRTUAL(D_800D2F98[D_80178234]);
    }
    if (D_8017782C == 0) {
        if (D_80178234 == 7) {
            func_8001D1C8(0xFF, 1);
            func_80019218(0x4100C023U, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_8001A55C(&D_80178280->unk_460[0].x, 0x3140807E);
        }
    } else if (D_80178234 == 0xD) {
        D_80161A68 = SEGMENTED_TO_VIRTUAL(D_602E584);
    }
    D_80177C90 = D_80161A68->unk_0A;
    D_80177C98 = D_80161A68->unk_00;
    D_801784AC = D_80161A68->unk_04;
    D_80161A36 = D_80161A68->unk_08;
    D_80178320 = D_80161A68->unk_0C;
    D_80178328 = D_80161A68->unk_10;
    D_80178330 = D_80161A68->unk_14;
    D_801783D8 = D_80161A68->unk_18;
    D_801783DC = D_80161A68->unk_1C;
    D_80178548 = D_80178564 = D_80161A70 = D_80161A68->unk_2C;
    D_8017854C = D_80178568 = D_80161A74 = D_80161A68->unk_30;
    D_80178550 = D_8017856C = D_80161A78 = D_80161A68->unk_34;
    D_80178554 = D_80161A68->unk_38;
    D_80178558 = D_80161A68->unk_3C;
    D_8017855C = D_80161A68->unk_40;
    D_801784D0 = D_801784F8 = D_80178520 = D_801784B8 = D_801784C4 = D_80161A68->unk_20;
    D_801784D4 = D_801784FC = D_80178524 = D_801784BC = D_801784C8 = D_80161A68->unk_24;
    D_801784D8 = D_80178500 = D_80178528 = D_801784C0 = D_801784CC = D_80161A68->unk_28;
    D_80161A44 = 12800.0f;
    D_80178540 = 40;
    D_80178544 = 40;
    D_80161A3C = 45.0f;
}

// #define ARRAY_ALLOCATE(arr, count) (arr) = Memory_Allocate((count) * sizeof(*array))

void func_800A5D6C(void) {
    u16 temp_v0;
    u32 i;

    D_80178288 = Memory_Allocate(1000 * sizeof(f32));
    D_80178290 = Memory_Allocate(1000 * sizeof(f32));
    D_80178298 = Memory_Allocate(1000 * sizeof(u32));
    Rand_SetSeed(1, 0x7148, 0x2694);
    for (i = 0; i < 1000; i++) {
        D_80178288[i] = (Rand_ZeroOneSeeded() * 480.0f) - 80.0f;
        D_80178290[i] = (Rand_ZeroOneSeeded() * 360.0f) - 60.0f;
        D_80178298[i] = (D_800C9C3C[i % ARRAY_COUNT(D_800C9C3C)] << 0x10) | D_800C9C3C[i % ARRAY_COUNT(D_800C9C3C)];
    }
}

void func_800A5EBC(void) {
    func_800A5D6C();
    D_80177940 = -25000.0f;
    D_80178410 = 0x258;
    if (D_80178234 == 3) {
        D_80178410 = 0x12C;
    }
    if (D_80178234 == 0xF) {
        D_80178410 = 0x190;
    }
    if (D_80177834 != 7) {
        D_80178410 = 0x320;
    }
    if (D_80178234 == 0xE) {
        D_80178410 = 0x1F4;
    }
    if (D_801778E8 != 0) {
        D_80178410 = 0;
    }
    if (D_80178234 == 0x11) {
        D_80178410 = 0x12C;
        D_80177940 = -0.0f;
    }
    if (D_80178234 == 0xA) {
        D_80178410 = 0x320;
        D_80177940 = -0.0f;
    }
}

void func_800A5FA0(Vec3f* arg0, u32 arg1, s32 arg2) {
    if (D_801778E8 == 0) {
        func_80019218(arg1, arg0, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80019218(arg1, arg0, arg2, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_800A6028(Vec3f* arg0, u32 arg1) {
    func_80019218(arg1, arg0, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_800A6070(Vec3f* arg0, u32 arg1) {
    func_80019218(arg1, arg0, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_800A60B8(void* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < 0x1C; i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_800A60E8(UnkStruct_D_80174750* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(UnkStruct_D_80174750); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_800A6118(UnkStruct_D_80175A10* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(UnkStruct_D_80175A10); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_800A6148(void) {
    s16 i;
    s16 j;

    for (i = 0; i < ARRAY_COUNT(D_80176438); i++) {
        func_800A60B8(&D_80176438[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_80175A10); i++) {
        func_800A6118(&D_80175A10[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_80174750); i++) {
        func_800A60E8(&D_80174750[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_80161B00); i++) {
        func_80060FBC(&D_80161B00[i].obj, &D_80161B00[i].unk_70);
        Object_80_Initialize(&D_80161B00[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_80163400); i++) {
        Object_4C_Initialize(&D_80163400[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_80163FE0); i++) {
        func_80060FBC(&D_80163FE0[i].obj, &D_80163FE0[i].unk_100);
        Object_2F4_Initialize(&D_80163FE0[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_8016F110); i++) {
        func_80060FBC(&D_8016F110[i].obj, &D_8016F110[i].unk_3FC);
        Object_408_Initialize(&D_8016F110[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        func_80060FBC(&D_80170130[i].obj, &D_80170130[i].unk_80);
        Object_8C_Initialize(&D_80170130[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_801737E0); i++) {
        func_80060FBC(&D_801737E0[i].obj, &D_801737E0[i].unk_5C);
        Object_6C_Initialize(&D_801737E0[i]);
    }
    for (i = 0; i < ARRAY_COUNT(D_80174050); i++) {
        func_80060FBC(&D_80174050[i].obj, &D_80174050[i].unk_38);
        func_80035E48(&D_80174050[i]);
    }
    D_801782B8 = D_801782BC = D_801782C0 = D_801782D0 = D_80178284 = D_8017828C = D_8017812C = D_80177E70 = D_80177E78 =
        D_80177E80 = 0;
    D_80177F10.x = D_80177F10.y = D_80177F10.z = D_80177E88.x = D_80177E88.y = D_80177E88.z = 0.0f;
    for (i = 0; i < ARRAY_COUNT(D_80177E98); i++) {
        D_80177E98[i].x = D_80177E98[i].y = D_80177E98[i].z = 100.0f;
    }
    for (i = 0; i < ARRAY_COUNT(D_80176878); i++) {
        D_80176550[i] = 0;
        for (j = 0; j < ARRAY_COUNT(*D_80176878); j++) {
            D_80176878[i][j] = -5000.0f;
        }
    }
}

void func_800A6590(void) {
    if (D_80178340 != D_80178358) {
        if (D_80178340 < D_80178358) {
            D_80178340 += D_8017835C;
            if (D_80178340 >= D_80178358) {
                D_80178340 = D_80178358;
            }
        } else {
            D_80178340 -= D_8017835C;
            if (D_80178358 >= D_80178340) {
                D_80178340 = D_80178358;
            }
        }
    }
    D_8017835C = 0x10;
    Math_SmoothStepToF(&D_8017836C, 0.0f, 1.0f, 0.04f, 0.001f);
    if (D_80161A60 != 0) {
        D_80161A60--;
        if (D_80161A60 & 2) {
            D_80178348 = 0xFF;
            D_80178350 = 0xFF;
            D_80178354 = 0xFF;
            D_80178340 = 0xFE;
        } else {
            D_80178340 = 0;
        }
    }
}

void func_800A668C(f32 arg0, f32 arg1, f32 arg2) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80174050); i++) {
        if (D_80174050[i].obj.status == 0) {
            func_80035E48(&D_80174050[i]);
            D_80174050[i].obj.status = 2;
            D_80174050[i].unk_60 = 0;
            D_80174050[i].obj.pos.x = arg0;
            D_80174050[i].obj.pos.y = arg1;
            D_80174050[i].obj.pos.z = arg2;
            break;
        }
    }
}

void func_800A670C(Object_2F4* arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 0xBD;
    arg0->unk_0B8 = arg1;
    arg0->obj.pos.x = arg2;
    arg0->obj.pos.y = arg3;
    arg0->obj.pos.z = arg4;
    arg0->unk_10C = 0.5f;
    if ((arg1 == 0) || (arg1 == 1)) {
        arg0->unk_0E8.y = (Rand_ZeroOne() * 5.0f) + 10.0f;
        arg0->unk_0E8.x = 10.0f;

        if (arg1 == 0) {
            arg0->unk_0E8.x = -10.0f;
        }
        arg0->unk_0BC = 0xF;
    } else {
        if (D_80177C98 == 0) {
            arg0->unk_0E8.y = (Rand_ZeroOne() * 7.0f) + 7.0f;
            arg0->unk_0E8.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
            arg0->unk_0E8.z = (Rand_ZeroOne() * 5.0f) + 5.0f;
            if (D_80177880 == 1) {
                arg0->unk_0E8.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
            }
            arg0->unk_0BC = (s32) (Rand_ZeroOne() * 10.0f) + 0xA;
        } else {
            arg0->unk_0E8.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
            arg0->unk_0E8.y = (Rand_ZeroOne() - 0.5f) * 10.0f;
            arg0->unk_0E8.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
            arg0->unk_0BC = (s32) (Rand_ZeroOne() * 25.0f) + 25;
            arg0->unk_10C = 0.0f;
        }
        if (arg1 == 2) {
            arg0->unk_110 = (Rand_ZeroOne() * 1.5f) + 0.75f;
        } else if (arg1 == 4) {
            arg0->unk_110 = (Rand_ZeroOne() * 0.8f) + 0.3f;
            arg0->unk_0BC = (s32) (Rand_ZeroOne() * 50.0f) + 70;
        }
        arg0->obj.rot.x = Rand_ZeroOne() * 360.0f;
    }
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
}

void func_800A69F8(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    if (D_801778E8 == 0) {
        for (i = ARRAY_COUNT(D_80163FE0) - 1; i >= 10; i--) {
            if (D_80163FE0[i].obj.status == 0) {
                func_800A670C(&D_80163FE0[i], arg0, arg1, arg2, arg3);
                break;
            }
        }
    }
}

#ifdef NON_MATCHING
s32 func_800A6A74(void) {
    return D_80161A90[0] && D_80161A90[1] && D_80161A90[2] && D_80161A90[3];
}
#else
s32 func_800A6A74(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A6A74.s")
#endif

void func_800A6AC0(UnkStruct_D_80178280* arg0, s32 arg1, s32 arg2) {
    if ((arg0->unk_1CC == 0) && (D_80177AB8[arg0->unk_1C4] < 1.0f)) {
        if (arg1 == 1) {
            D_80177D40[arg0->unk_1C4] = 30;
            if (arg0->unk_49C.unk_00 == 2) {
                D_80177D10[arg0->unk_1C4] -= arg2;
                if (D_80177D10[arg0->unk_1C4] <= 0) {
                    func_800A69F8(1, arg0->unk_2D4.x, arg0->unk_2D4.y, arg0->unk_2D4.z);
                    arg0->unk_49C.unk_00 = 1;
                    func_8007D0E0(arg0->unk_2D4.x, arg0->unk_2D4.y, arg0->unk_2D4.z, 2.0f);
                    D_80177D70[arg0->unk_1C4] = 50;
                    func_800A5FA0(arg0->unk_460, 0x0900A02C, arg0->unk_1C4);
                    if (D_8015F90C == 0) {
                        D_8015F90C = 1000;
                    }
                }
            }
        } else if (arg1 == 2) {
            D_80177D58[arg0->unk_1C4] = 30;
            if (arg0->unk_49C.unk_01 == 2) {
                D_80177D28[arg0->unk_1C4] -= arg2;
                if (D_80177D28[arg0->unk_1C4] <= 0) {
                    func_800A69F8(0, arg0->unk_2C8.x, arg0->unk_2C8.y, arg0->unk_2C8.z);
                    arg0->unk_49C.unk_01 = 1;
                    func_8007D0E0(arg0->unk_2C8.x, arg0->unk_2C8.y, arg0->unk_2C8.z, 2.0f);
                    D_80177D88[arg0->unk_1C4] = 50;
                    func_800A5FA0(arg0->unk_460, 0x0900A02C, arg0->unk_1C4);
                    if (D_8015F90C == 0) {
                        D_8015F90C = 1000;
                    }
                }
            }
        }
    }
}

void func_800A6CD0(UnkStruct_D_80178280* arg0, s32 arg1, s32 arg2) {
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34 = 20.0f;

    arg0->unk_1A4 = arg2;
    arg0->unk_21C = arg1;
    if ((arg2 == 39) || (arg2 == 41) || (arg2 == 42) || (arg2 == 43)) {
        arg2 = 40;
    }
    if (gExpertMode) {
        arg0->unk_268 = arg2 * 2;
    } else {
        arg0->unk_268 = arg2;
    }
    if (arg0->unk_268 != 0) {
        arg0->unk_220 = 4;
    }
    arg0->unk_284 = 0;
    arg0->unk_1F4 = 20;
    if (arg0->unk_1A4 > 40) {
        sp34 = (arg0->unk_110 * 0.3f) + 20.0f;
        arg0->unk_498 = 5;
    } else if ((D_80178234 == 9) && (D_80178284 == 0)) {
        arg0->unk_498 = 3;
    } else if ((D_80178234 == 6) || (D_80178234 == 13)) {
        arg0->unk_498 = 5;
    } else {
        arg0->unk_498 = 20;
    }
    if (D_80177AD0[arg0->unk_1C4] != 0) {
        func_800A5FA0(arg0->unk_460, 0x0903900E, arg0->unk_1C4);
        D_80177AE8[arg0->unk_1C4] = 5;
        D_80177AB8[arg0->unk_1C4] = 2.0f;
        arg0->unk_268 = 0;
    } else {
        if (arg0->unk_264 != 0) {
            if (arg0->unk_264 < 50) {
                func_80019218(0x49008011, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else if (arg0->unk_264 < 100) {
                func_80019218(0x49008010, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        if (arg2 < 25) {
            func_800A5FA0(arg0->unk_460, 0x0903900E, arg0->unk_1C4);
        } else {
            func_800A5FA0(arg0->unk_460, 0x0903A00F, arg0->unk_1C4);
        }
    }
    Matrix_RotateY(gCalcMatrix, arg0->unk_114 * M_DTOR, 0);
    Matrix_RotateZ(gCalcMatrix, arg0->unk_0F8 * M_DTOR, 1);
    sp44.z = 0.0f;
    switch (arg0->unk_21C) {
        case 0:
            arg0->unk_224 = 20;
            arg0->unk_0D8.x = 0.f;
            arg0->unk_0D8.y = 0.f;
            arg0->unk_0D8.z = 0.f;
            break;
        case 1:
            sp44.x = -sp34;
            sp44.y = 0.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            arg0->unk_0D8.x = sp38.x;
            arg0->unk_0D8.y = sp38.y;
            arg0->unk_0D8.z = sp38.z;
            func_800A668C(arg0->unk_2D4.x - arg0->unk_0C0.x, arg0->unk_2D4.y, arg0->unk_2D4.z - arg0->unk_0C0.z);
            func_800A6AC0(arg0, 1, 20);
            break;
        case 2:
            sp44.x = sp34;
            sp44.y = 0.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            arg0->unk_0D8.x = sp38.x;
            arg0->unk_0D8.y = sp38.y;
            arg0->unk_0D8.z = sp38.z;
            func_800A668C(arg0->unk_2C8.x - arg0->unk_0C0.x, arg0->unk_2C8.y, arg0->unk_2C8.z - arg0->unk_0C0.z);
            func_800A6AC0(arg0, 2, 20);
            break;
        case 3:
            arg0->unk_224 = 20;
            func_800A668C(arg0->unk_2EC.x - arg0->unk_0C0.x, arg0->unk_2EC.y, arg0->unk_2EC.z - arg0->unk_0C0.z);
            if (arg0->unk_1CC != 1) {
                sp44.x = 0.0f;
                sp44.y = -sp34;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
                arg0->unk_0D8.x = sp38.x;
                arg0->unk_0D8.y = sp38.y;
                arg0->unk_0D8.z = sp38.z;
            }
            if (Rand_ZeroOne() < 0.5f) {
                func_800A6AC0(arg0, 1, 15);
            } else {
                func_800A6AC0(arg0, 2, 15);
            }
            break;
        case 4:
            arg0->unk_224 = 20;
            func_800A668C(arg0->unk_2E0.x - arg0->unk_0C0.x, arg0->unk_2E0.y, arg0->unk_2E0.z - arg0->unk_0C0.z);
            sp44.x = 0.0f;
            sp44.y = sp34;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            arg0->unk_0D8.x = sp38.x;
            arg0->unk_0D8.y = sp38.y;
            arg0->unk_0D8.z = sp38.z;
            if (Rand_ZeroOne() < 0.5f) {
                func_800A6AC0(arg0, 1, 15);
            } else {
                func_800A6AC0(arg0, 2, 15);
            }
            break;
    }
    if ((D_80178234 == 6) && (arg0->unk_1A4 == 42)) {
        if (arg0->unk_074 > 0.0f) {
            arg0->unk_0D8.x = -30.0f;
        } else {
            arg0->unk_0D8.x = 30.0f;
        }
        arg0->unk_498 = 10;
    }
}

void func_800A729C(UnkStruct_D_80178280* arg0, u32 arg1, f32 arg2, f32 arg3) {
    arg0->unk_21C = arg1;
    switch (arg1) {
        case 1:
        case 2:
            arg0->unk_074 = arg0->unk_08C.y;
            arg0->unk_0D8.x = 0.0f;
            arg0->unk_074 += D_800D2FEC[arg0->unk_21C];
            if (arg0->unk_1CC == 1) {
                arg0->unk_074 -= D_800D2FEC[arg0->unk_21C];
            }
            Math_SmoothStepToF(&arg0->unk_0D0, 2.0f, 1.0f, 2.0f, 0.00001f);
            break;
        case 3:
        case 4:
            arg0->unk_07C = arg0->unk_098;
            arg0->unk_0D8.z = 0.0f;
            arg0->unk_07C += D_800D2FEC[arg0->unk_21C];
            if (arg0->unk_1CC == 1) {
                arg0->unk_07C += D_800D2FEC[arg0->unk_21C];
            }
            arg0->unk_138 = arg0->unk_07C;
            Math_SmoothStepToF(&arg0->unk_0D0, 2.0f, 1.0f, 2.0f, 0.00001f);
            break;
        case 0:
        case 5:
            break;
    }
}

s32 func_800A73E4(f32* arg0, s32* arg1, f32 arg2, f32 arg3, f32 arg4) {
    Vtx* spA4;
    u16* spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    s32 sp8C;
    f32 x0;
    f32 y0;
    f32 z0;
    f32 x1;
    f32 y1;
    f32 z1;
    f32 x2;
    f32 y2;
    f32 z2;
    f32 temp1;
    f32 dz21;
    f32 dx10;
    f32 dx21;
    f32 dy10;
    f32 dy21;
    f32 dz10;
    f32 sp48;
    f32 crz;
    f32 cry;
    f32 crx;

    switch (D_80178234) {
        case 7:
            spA4 = SEGMENTED_TO_VIRTUAL(D_6001C50);
            spA0 = SEGMENTED_TO_VIRTUAL(D_6022760);
            break;
        case 8:
            spA4 = SEGMENTED_TO_VIRTUAL(D_6009ED0);
            spA0 = SEGMENTED_TO_VIRTUAL(D_602AC50);
            break;
        default:
            return 0;
    }

    sp9C = (s32) ((arg2 + 2400.0f) / 300.0f);
    sp98 = (s32) ((arg4 + D_80177D20 + 1500.0f + 2400.0f) / 300.0f);
    if ((sp9C < 0) || (sp9C >= 16) || (sp98 < 0) || (sp98 >= 16)) {
        return 0;
    }
    sp90 = Math_ModF(arg2 + 2400.0f, 300.0f);
    sp94 = Math_ModF(arg4 + D_80177D20 + 1500.0f + 2400.0f, 300.0f);
    sp8C = (sp98 * 17) + sp9C;
    x0 = spA4[spA0[sp8C]].n.ob[0] * 3.0f;
    y0 = spA4[spA0[sp8C]].n.ob[1] * 2.0f;
    z0 = spA4[spA0[sp8C]].n.ob[2] * 3.0f;
    if (sp90 < sp94) {
        x1 = spA4[spA0[sp8C + 18]].n.ob[0] * 3.0f;
        y1 = spA4[spA0[sp8C + 18]].n.ob[1] * 2.0f;
        z1 = spA4[spA0[sp8C + 18]].n.ob[2] * 3.0f;
        x2 = spA4[spA0[sp8C + 17]].n.ob[0] * 3.0f;
        y2 = spA4[spA0[sp8C + 17]].n.ob[1] * 2.0f;
        z2 = spA4[spA0[sp8C + 17]].n.ob[2] * 3.0f;
    } else {
        x1 = spA4[spA0[sp8C + 1]].n.ob[0] * 3.0f;
        y1 = spA4[spA0[sp8C + 1]].n.ob[1] * 2.0f;
        z1 = spA4[spA0[sp8C + 1]].n.ob[2] * 3.0f;
        x2 = spA4[spA0[sp8C + 18]].n.ob[0] * 3.0f;
        y2 = spA4[spA0[sp8C + 18]].n.ob[1] * 2.0f;
        z2 = spA4[spA0[sp8C + 18]].n.ob[2] * 3.0f;
    }
    dx10 = x1 - x0;
    dx21 = x2 - x1;
    dy10 = y1 - y0;

    dy21 = y2 - y1;
    dz10 = z1 - z0;
    dz21 = z2 - z1;

    crx = (dy10 * dz21) - (dz10 * dy21);
    cry = (dz10 * dx21) - (dx10 * dz21);
    crz = (dx10 * dy21) - (dy10 * dx21);

    temp1 = -crx * x0 - cry * y0 - crz * z0;
    sp48 = (-temp1 - crx * arg2 - crz * (arg4 + D_80177D20 + 1500.0f)) / cry;
    if (arg3 < sp48) {
        *arg0 = sp48;
        *arg1 = sp8C;
        return true;
    }
    return false;
}

s32 func_800A78C4(f32* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    if ((fabsf((arg0[0] + arg3) - arg6) < (arg0[1] + D_8017853C)) &&
        (fabsf((arg0[4] + arg1) - arg4) < (arg0[5] + D_8017853C)) &&
        (fabsf((arg0[2] + arg2) - arg5) < (arg0[3] + D_8017853C))) {
        return true;
    }
    return false;
}

#ifdef NON_MATCHING
// stupid 0.0f stuff
s32 func_800A7974(UnkStruct_D_80178280* arg0, f32* arg1, s32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7,
                  f32 arg8, f32 arg9, f32 argA, f32 argB) {
    s32 spB4;
    s32 i;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fa0;
    f32 spA0;
    Vec3f sp94;
    Vec3f sp88;

    spB4 = *arg1++;
    if (spB4 != 0) {
        for (i = 0; i < spB4; i++, arg1 += 6) {
            spA0 = 0;
            if (arg1[0] == 200000.0f) {
                Matrix_RotateZ(gCalcMatrix, -arg1[3] * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -arg1[1] * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -arg1[2] * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, -arg8 * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -arg6 * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -arg7 * M_DTOR, 1);
                arg1 += 4;
                spA0 = 1;
            } else {
                if (arg1[0] >= 300000.0f) {
                    arg1++;
                }
                Matrix_RotateZ(gCalcMatrix, -arg8 * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -arg6 * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -arg7 * M_DTOR, 1);
            }
            if (!((arg9 == 0.0f) && (argA == 0.0f) && (argB == 0.0f))) {
                Matrix_RotateZ(gCalcMatrix, -argB * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -arg9 * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -argA * M_DTOR, 1);
            }
            if ((arg7 == 0.0f) && (arg8 == 0.0f) && (arg6 == 0.0f) && (spA0 == 0)) {
                var_fv0 = arg0->unk_2E0.x;
                var_fv1 = arg0->unk_2E0.y;
                var_fa0 = arg0->unk_2E0.z;
            } else {
                sp94.x = arg0->unk_2E0.x - arg3;
                sp94.y = arg0->unk_2E0.y - arg4;
                sp94.z = arg0->unk_2E0.z - arg5;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                var_fv0 = sp88.x + arg3;
                var_fv1 = sp88.y + arg4;
                var_fa0 = sp88.z + arg5;
            }
            if (func_800A78C4(arg1, arg3, arg4, arg5, var_fv0, var_fv1, var_fa0)) {
                *arg2 = i + 1;
                if (arg1[-1] == 300000.0f) {
                    return -1;
                }
                if (arg1[-1] == 400000.0f) {
                    return -2;
                }
                return 3;
            }
            if (arg1[-1] < 300000.0f) {
                if ((arg7 == 0.0f) && (arg8 == 0.0f) && (arg6 == 0.0f) && (spA0 == 0)) {
                    var_fv0 = arg0->unk_2EC.x;
                    var_fv1 = arg0->unk_2EC.y;
                    var_fa0 = arg0->unk_2EC.z;
                } else {
                    sp94.x = arg0->unk_2EC.x - arg3;
                    sp94.y = arg0->unk_2EC.y - arg4;
                    sp94.z = arg0->unk_2EC.z - arg5;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                    var_fv0 = sp88.x + arg3;
                    var_fv1 = sp88.y + arg4;
                    var_fa0 = sp88.z + arg5;
                }
                if (func_800A78C4(arg1, arg3, arg4, arg5, var_fv0, var_fv1, var_fa0)) {
                    *arg2 = i + 1;
                    return 4;
                }
                if ((arg7 == 0.0f) && (arg8 == 0.0f) && (arg6 == 0.0f) && (spA0 == 0)) {
                    var_fv0 = arg0->unk_2D4.x;
                    var_fv1 = arg0->unk_2D4.y;
                    var_fa0 = arg0->unk_2D4.z;
                } else {
                    sp94.x = arg0->unk_2D4.x - arg3;
                    sp94.y = arg0->unk_2D4.y - arg4;
                    sp94.z = arg0->unk_2D4.z - arg5;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                    var_fv0 = sp88.x + arg3;
                    var_fv1 = sp88.y + arg4;
                    var_fa0 = sp88.z + arg5;
                }
                if (func_800A78C4(arg1, arg3, arg4, arg5, var_fv0, var_fv1, var_fa0)) {
                    *arg2 = i + 1;
                    return 1;
                }
                if ((arg7 == 0.0f) && (arg8 == 0.0f) && (arg6 == 0.0f) && (spA0 == 0)) {
                    var_fv0 = arg0->unk_2C8.x;
                    var_fv1 = arg0->unk_2C8.y;
                    var_fa0 = arg0->unk_2C8.z;
                } else {
                    sp94.x = arg0->unk_2C8.x - arg3;
                    sp94.y = arg0->unk_2C8.y - arg4;
                    sp94.z = arg0->unk_2C8.z - arg5;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                    var_fv0 = sp88.x + arg3;
                    var_fv1 = sp88.y + arg4;
                    var_fa0 = sp88.z + arg5;
                }
                if (func_800A78C4(arg1, arg3, arg4, arg5, var_fv0, var_fv1, var_fa0)) {
                    *arg2 = i + 1;
                    return 2;
                }
            }
        }
    }
    return 0;
}
#else
s32 func_800A7974(UnkStruct_D_80178280* arg0, f32* arg1, s32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7,
                  f32 arg8, f32 arg9, f32 argA, f32 argB);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A7974.s")
#endif

bool func_800A8054(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, Vec3f* arg7, Vec3f* arg8) {
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    f32 pad1;
    f32 sp34;
    s32 var_s0;
    s32 var_v0;

    sp54.x = arg4;
    sp54.y = arg5;
    sp54.z = arg6;
    sp48.x = arg1;
    sp48.y = arg2;
    sp48.z = arg3;

    var_v0 = false;
    switch (arg0) {
        case 0xB4:
            var_s0 = 0;
            break;
        case 4:
        case 5:
            var_s0 = 1;
            var_v0 = true;
            break;
        case 0x95:
            var_s0 = 5;
            break;
        case 0x96:
            var_s0 = 6;
            break;
        case 0x134:
            var_s0 = 4;
            break;
        case 0x138:
            var_s0 = 9;
            break;
        case 0x135:
            var_s0 = 7;
            break;
        case 0x3E8:
            var_s0 = 3;
            break;
        case 0x139:
            var_s0 = 8;
            break;
        case 0x27:
            var_s0 = 1;
            break;
        case 0x78:
            var_s0 = 18;
            var_v0 = true;
            break;
        case 0x7C:
            var_s0 = 15;
            var_v0 = true;
            break;
        case 0x7E:
            var_s0 = 16;
            var_v0 = true;
            break;
        case 0x2F:
            var_s0 = 7;
            var_v0 = true;
            break;
        case 2:
            var_s0 = 2;
            var_v0 = true;
            break;
        case 3:
        case 0x45:
            var_s0 = 3;
            var_v0 = true;
            break;
        case 0x8F:
            var_s0 = 17;
            var_v0 = true;
            break;
        case 0x8C:
            var_s0 = 4;
            var_v0 = true;
            break;
        case 0x8D:
            var_s0 = 6;
            var_v0 = true;
            break;
        case 0x75:
            var_s0 = 14;
            var_v0 = true;
            break;
        case 0x46:
            var_s0 = 8;
            var_v0 = true;
            break;
        case 0x48:
            var_s0 = 9;
            var_v0 = true;
            break;
        case 0x47:
            var_s0 = 10;
            var_v0 = true;
            break;
        case 0x49:
            var_s0 = 11;
            var_v0 = true;
            break;
        case 0x43:
            var_s0 = 12;
            var_v0 = true;
            break;
        case 0x4A:
            var_s0 = 13;
            var_v0 = true;
            break;
        case 0x76:
        case 0x77:
        case 0x79:
        case 0x7A:
        case 0x7B:
        case 0x7D:
        case 0x7F:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8A:
        case 0x8B:
        case 0x8E:
        case 0x90:
        case 0x91:
        case 0x92:
        case 0x93:
        case 0x94:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x44:
        default:
            var_s0 = 0;
            var_v0 = true;
            break;
    }

    if (!var_v0) {
        if (func_800998FC(&sp54, &sp48, arg8, var_s0, &sp3C, &sp34) > 0) {
            return true;
        }
    } else {
        if (func_800A3690(&sp54, &sp48, var_s0, arg7) != 0) {
            return true;
        }
    }
    return false;
}

// arg5 could be Vec3f (not Vec3f*)
s32 func_800A8304(UnkStruct_D_80178280* arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    Vec3f sp84;
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;

    sp84.x = arg2;
    sp84.y = arg3;
    sp84.z = arg4;
    Matrix_RotateY(gCalcMatrix, -arg6 * M_DTOR, 0);
    sp78.x = arg0->unk_0C0.x;
    sp78.y = arg0->unk_0C0.y;
    sp78.z = arg0->unk_0C0.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp54);
    if ((arg0->unk_1CC == 1) || (arg0->unk_1CC == 3)) {
        sp78.x = arg0->unk_074 - sp84.x;
        sp78.y = arg0->unk_078 - sp84.y;
        sp78.z = arg0->unk_138 - sp84.z;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
        if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60,
                          &sp54)) {
            arg0->unk_078 = sp60.y;
            arg0->unk_104 = Math_RadToDeg(sp60.x);
            arg0->unk_10C = Math_RadToDeg(sp60.z);
            arg0->unk_0C0.y = 0.0f;
            if (arg0->unk_1CC == 3) {
                arg0->unk_0C0.y = -5.0f;
            }
            arg0->unk_1D4 = 1;
            return 5;
        }
        return 0;
    }
    sp78.x = arg0->unk_2E0.x - sp84.x;
    sp78.y = arg0->unk_2E0.y - sp84.y;
    sp78.z = arg0->unk_2E0.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 3;
    }
    sp78.x = arg0->unk_2EC.x - sp84.x;
    sp78.y = arg0->unk_2EC.y - sp84.y;
    sp78.z = arg0->unk_2EC.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 4;
    }
    sp78.x = arg0->unk_2D4.x - sp84.x;
    sp78.y = arg0->unk_2D4.y - sp84.y;
    sp78.z = arg0->unk_2D4.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 1;
    }
    sp78.x = arg0->unk_2C8.x - sp84.x;
    sp78.y = arg0->unk_2C8.y - sp84.y;
    sp78.z = arg0->unk_2C8.z - sp84.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    if (func_800A8054(arg1, sp84.x, sp84.y, sp84.z, sp6C.x + sp84.x, sp6C.y + sp84.y, sp6C.z + sp84.z, &sp60, &sp54)) {
        return 2;
    }
    return 0;
}

void func_800A86E4(UnkStruct_D_80178280* arg0) {
    s32 i;
    Object_6C* var_s0;
    s32 sp6C;

    for (i = 0, var_s0 = D_801737E0; i < ARRAY_COUNT(D_801737E0); i++, var_s0++) {
        if ((var_s0->obj.status == 2) && ((arg0->unk_1C8 == 3) || (arg0->unk_1C8 == 5)) && (var_s0->unk_4A == 0) &&
            func_800A7974(arg0, var_s0->unk_1C.unk_0C, &sp6C, var_s0->obj.pos.x, var_s0->obj.pos.y, var_s0->obj.pos.z,
                          0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)) {
            var_s0->unk_4C = 1;
            var_s0->unk_4E = D_801778A0;
        }
    }
}

void func_800A8804(UnkStruct_D_80178280* arg0, UnkStruct_D_80178280* arg1) {
    if (arg0->unk_498 == 0) {
        func_800A6CD0(arg0, 0, D_800D3000[arg0->unk_1CC][arg1->unk_1CC]);
        arg0->unk_288 = arg1->unk_1C4 + 1;
        arg1->unk_288 = arg0->unk_1C4 + 1;
    }
}

void func_800A887C(UnkStruct_D_80178280* arg0) {
    Vec3f sp3C;

    Matrix_Translate(gCalcMatrix, arg0->unk_074, arg0->unk_078, arg0->unk_138, 0);
    if (arg0->unk_1CC == 1) {
        arg0->unk_10C = 0.0f;
        arg0->unk_104 = 0.0f;

        sp3C.x = -40.0f;
        sp3C.y = 40.0f;
        sp3C.z = 0.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2C8);
        sp3C.x = 40.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2D4);
        sp3C.x = 0.0f;
        sp3C.z = -40.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2E0);
        sp3C.z = 40.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2EC);
    }
    if ((arg0->unk_1CC == 3) || (arg0->unk_1CC == 4)) {
        sp3C.x = 20.0f;
        sp3C.y = 20.0f;
        sp3C.z = 0.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2C8);
        sp3C.x = -20.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2D4);
        sp3C.x = 0.0f;
        sp3C.z = -20.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2E0);
        sp3C.z = 20.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2EC);
    }
    if ((arg0->unk_1CC == 0) || (arg0->unk_1CC == 2)) {
        Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + 180.0f) * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, -(arg0->unk_0F8 * M_DTOR), 1);
        sp3C.y = 0.0f;
        sp3C.z = 0.0f;
        if (arg0->unk_49C.unk_01 == 2) {
            sp3C.x = 40.0f;
        } else {
            sp3C.y = -10.0f;
            sp3C.x = 30.0f;
        }
        if (arg0->unk_1CC == 2) {
            sp3C.x = 24.0f;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2C8);
        if (arg0->unk_49C.unk_00 == 2) {
            sp3C.x = -40.0f;
        } else {
            sp3C.x = -30.0f;
        }
        if (arg0->unk_1CC == 2) {
            sp3C.x = -24.0f;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2D4);
        sp3C.x = 0.0f;
        sp3C.y = 24.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2E0);
        sp3C.y = -24.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &arg0->unk_2EC);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A8BA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AA800.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AB2AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AB304.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AB334.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AB964.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ABA08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ABAB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AC290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AC650.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ACA40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ACABC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ACC7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ACDC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AD094.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AD118.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AD1F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AD7F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ADA28.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ADD98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800ADF58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AE278.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AE4A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AECAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AF07C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800AF928.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B00C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B0194.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B0F50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2130.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B22C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2574.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2BE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B2C00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B3010.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B3314.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B39E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B40AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B415C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B41E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B41EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B42B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B44C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B46F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B48BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B56BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B5D30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B5FBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B63BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B6848.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B6BFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B6F50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B7184.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B71E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B73E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B79B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B832C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B852C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B86A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800B86CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/D_800D82F0.s")

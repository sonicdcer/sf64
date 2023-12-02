#include "global.h"

extern Vtx D_6001C50[];
extern Vtx D_6004500[];
extern Vtx D_6009ED0[];
extern Vtx D_600C780[];
extern Vtx D_6022760[];
extern Vtx D_602AC50[];

extern ObjectInit D_302DE3C[];
extern ObjectInit D_302E0E4[];
extern ObjectInit D_302E170[];
extern ObjectInit D_302E378[];
extern ObjectInit D_603B074[];
extern ObjectInit D_6030B14[];
extern Gfx D_6020760[];

extern UnkStruct_D_80161A68 D_302DD70[];
extern UnkStruct_D_80161A68 D_302DDB4[];
extern UnkStruct_D_80161A68 D_302DDF8[];
extern UnkStruct_D_80161A68 D_602E584[];

extern s32 D_80161A70;
extern s32 D_80161A74;
extern s32 D_80161A78;
extern u16 D_80177C90;

extern s32 D_80178320;
extern s32 D_80178328;
extern s32 D_80178330;
extern s32 D_80178338;
extern s32 D_80178340;
extern s32 D_80178348;
extern s32 D_80178350;
extern s32 D_80178354;
extern s32 D_80178360;
extern s32 D_80178364;
extern s32 D_80178368;
extern f32 D_8017836C;
extern f32 D_80178370;
extern f32 D_80178374;
extern f32 D_80178378;
extern s32 D_80178380[];
extern s32 D_80178390[];
extern s32 D_801783A0[];
extern s32 D_801783B0[];
extern f32 D_801783D0;
extern f32 D_801783D4;
extern s32 D_801783D8;
extern s32 D_801783DC;
extern s32 D_80178410;
extern f32 D_80178420;
extern f32 D_80178424;
extern f32 D_80178428;
extern f32 D_8017842C;
extern f32 D_80178430;
extern f32 D_8017847C;
extern s32 D_80178480;
extern s32 D_80178488;
extern s32 D_801784A4;
extern s32 D_801784AC;
extern f32 D_801784B8;
extern f32 D_801784BC;
extern f32 D_801784C0;
extern f32 D_801784C4;
extern f32 D_801784C8;
extern f32 D_801784CC;
extern f32 D_801784D0;
extern f32 D_801784D4;
extern f32 D_801784D8;
extern s32 D_801784DC;
extern s32 D_801784E0;
extern s32 D_801784E4;
extern f32 D_801784F8;
extern f32 D_801784FC;
extern f32 D_80178500;
extern f32 D_80178520;
extern f32 D_80178524;
extern f32 D_80178528;
extern s32 D_80178540;
extern s32 D_80178544;
extern s32 D_80178548;
extern s32 D_8017854C;
extern s32 D_80178550;
extern s32 D_80178554;
extern s32 D_80178558;
extern s32 D_8017855C;
extern s32 D_80178564;
extern s32 D_80178568;
extern s32 D_8017856C;


extern f32 D_800D2F64;
extern Vec3f D_800D2F80;
extern Vec3f D_800D2F8C;
extern UnkStruct_D_80161A68* D_800D2F98[];

extern f32* D_80178288;
extern f32* D_80178290;
extern u32* D_80178298;

extern void func_8001D1C8(s32, s32);
extern void func_8007ACE0(f32, f32, f32, f32, f32, f32);
extern void func_8007C484(f32, f32, f32, f32, f32, f32, f32, s32);

s32 func_800A3F50(u16 arg0) {
    if ((D_801778B0[2] > 0) && (D_801778B0[3] > 0) && (D_801778B0[1] > 0) && (D_80161A98 >= arg0 )) {
        return 1;
    }
    return 0;
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
    Vtx *spB4;
    u16 *spB0;
    s32 i;
    s32 spA8;
    f32 *var_s3;
    f32 *var_s5;
    f32 *var_s4;
    f32 *var_s0;
    f32 *var_s1;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;

    D_801782FC++;
    switch(D_80178234) {
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
            spB4 =(D_80177DB0 & 1) ? SEGMENTED_TO_VIRTUAL(D_6009ED0) : SEGMENTED_TO_VIRTUAL(D_600C780);
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
    for(i = 0; i < 17 * 17; i++,  var_s3++, var_s5++, var_s4++, var_s0++, var_s1++, spB0++) {
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
        Matrix_RotateZ(gCalcMatrix, *var_s3 * sp88 * 0.017453292f, 0);
        spC4.x = 120.0f;
        spC4.y = 0.0f;
        spC4.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &spC4, &spB8);
        spB4[*spB0].n.n[0]= spB8.x;
        spB4[*spB0].n.n[1]= spB8.y;
        spB4[*spB0].n.n[2]= spB8.z;
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
    //     Matrix_RotateZ(gCalcMatrix, D_801782CC[i] * sp88 * 0.017453292f, 0);
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

void func_800A4460(UnkStruct_D_80178280 *arg0) {
    if ((D_80178234 == 9) && (D_8016F110[0].obj.status == 2) && (D_8016F110[0].unk_04E == 0x11)) {
        arg0->unk_060 = __sinf(arg0->unk_0F4 * 0.7f * 0.017453292f) * 0.5f;
        arg0->unk_088 += 13.0f;
        arg0->unk_0F4 += 20.0f;
        arg0->unk_080 = -__sinf(arg0->unk_088 * 0.017453292f) * 5.0f;
        arg0->unk_0F0 = __sinf(arg0->unk_0F4 * 0.017453292f) * 10.0f;
        return;
    } else {
        arg0->unk_060 = __sinf(arg0->unk_0F4 * 0.7f * 0.017453292f) * 0.5f;
        arg0->unk_088 += 10.0f;
        arg0->unk_0F4 += 8.0f;
        if ((D_80177C98 == 0) || ((arg0->unk_238 == 1) && (D_80177880 == 0))) {
            arg0->unk_080 = -__sinf(arg0->unk_088 * 0.017453292f) * 0.5f;
            if ((arg0->unk_49C < 2) || (arg0->unk_49D < 2)) {
                arg0->unk_0F0 = __sinf(arg0->unk_0F4 * 0.017453292f) * 5.0f;
            } else {
                arg0->unk_0F0 = __sinf(arg0->unk_0F4 * 0.017453292f) * 1.5f;
            }
        }
    }
}

void func_800A46A0(UnkStruct_D_80178280 *arg0) {
    s32 var_v1;
    f32 sp40;

    if ((arg0->unk_238 == 0) || (D_80177880 == 1)) {
        if (arg0->unk_49C < 2) {
            if (!(D_80177DB0 & 1) && (D_80177D70[arg0->unk_1C4] != 0)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_2D4.x, (Rand_ZeroOne() * 5.0f) + arg0->unk_2D4.y, arg0->unk_2D4.z, 1.0f);
            }
            if (!(D_80177DB0 & 1) && (Rand_ZeroOne() < 0.5f) && (D_801778E8 == 0)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 5.0f) + arg0->unk_2D4.x, (Rand_ZeroOne() * 5.0f) + arg0->unk_2D4.y, arg0->unk_2D4.z, arg0->unk_0C0, arg0->unk_0C4, arg0->unk_0C8, (Rand_ZeroOne() * 0.02f) + 0.02f, arg0->unk_1C4 + 1);
            }
        }
        if (arg0->unk_49D < 2) {
            if (!(D_80177DB0 & 1) && (D_80177D88[arg0->unk_1C4] != 0)) {
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_2C8.x, (Rand_ZeroOne() * 5.0f) + arg0->unk_2C8.y, arg0->unk_2C8.z, 1.0f);
            }
            if (!(D_80177DB0 & 1) && (Rand_ZeroOne() < 0.5f) && (D_801778E8 == 0)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 5.0f) + arg0->unk_2C8.x, (Rand_ZeroOne() * 5.0f) + arg0->unk_2C8.y, arg0->unk_2C8.z, arg0->unk_0C0, arg0->unk_0C4, arg0->unk_0C8, (Rand_ZeroOne() * 0.02f) + 0.02f, arg0->unk_1C4 + 1);
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
                func_8007D10C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_074, (Rand_ZeroOne() * 10.0f) + (arg0->unk_078 + sp40), ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_138, 2.2f);
            }
            if (!((var_v1 >> 2) & D_80177DB0) && (Rand_ZeroOne() < 0.5f)) {
                func_8007C484(((Rand_ZeroOne() - 0.5f) * 30.0f) + arg0->unk_074, (Rand_ZeroOne() * 10.0f) + (arg0->unk_078 + sp40), ((Rand_ZeroOne() - 0.5f) * 30.0f) + arg0->unk_138, arg0->unk_0C0, arg0->unk_0C4, arg0->unk_0C8, (Rand_ZeroOne() * 0.03f) + 0.04f, arg0->unk_1C4 + 1);
                if (arg0->unk_224 == 0) {
                    arg0->unk_224 = 2;
                }
            }
        } else if (!((var_v1 >> 2) & D_80177DB0) && (Rand_ZeroOne() < 0.5f) && (arg0->unk_224 == 0)) {
            arg0->unk_224 = 2;
        }
    }
}

void func_800A4C40(UnkStruct_D_80178280 *arg0) {
    Vec3f sp54 = D_800D2F80;
    Vec3f sp48 = D_800D2F8C;
    Vec3f sp3C;
    Vec3f sp30;

    if (D_80161A88 == 2) {
        Matrix_Translate(gCalcMatrix, arg0->unk_074, arg0->unk_078, arg0->unk_138, 0);
        Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + 180.0f) * 0.017453292f, 1);
        Matrix_RotateX(gCalcMatrix, -((arg0->unk_0E4 + arg0->unk_4D8) * 0.017453292f), 1);
        Matrix_RotateZ(gCalcMatrix, -(arg0->unk_0F8 * 0.017453292f), 1);
        Matrix_MultVec3f(gCalcMatrix, &sp54, &sp3C);
        Matrix_MultVec3f(gCalcMatrix, &sp48, &sp30);
        if (arg0->unk_078 < (D_80177940 + 100.0f)) {
            if ((sp3C.y < D_80177940 + 80.0f) && !(D_80177DB0 & 1)) {
                if (D_80161A64) {}
                func_8007ACE0( sp3C.x, D_80177940, sp3C.z, 0.1f, 2.0f, arg0->unk_0E8 + arg0->unk_114 + 20.0f);
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
            func_8001A55C(&arg0->unk_460[0], 0x1100000B);
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
    for(i = 0, j = 0; i < 199; j++) {
        if(D_80178310[j].unk_10 < 0) {
            break;
        }
        if(D_80178310[j].unk_10 == 0x93) {
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
    for(i = 5, j = 0; i < 199; j++) {
        if(D_80178310[j].unk_10 < 0) {
            break;
        }
        if(D_80178310[j].unk_10 != 0x93) {
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
    Object_4C *var_s0_2;
    Object_58 *var_s0;
    s32 i;
    s32 j;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_603B074);

    for(j = 0, var_s0 = D_801782A8; j < 200; j++) {
        if(D_80178310[j].unk_10 < 0) {
            break;
        }
        if(D_80178310[j].unk_10 < 0xA1) {
            func_800A4F4C(var_s0);
            var_s0->obj.status = 2;
            var_s0->obj.id = D_80178310[j].unk_10;
            var_s0->obj.pos.x = D_80178310[j].unk_6;
            var_s0->obj.pos.z = D_80178310[j].unk_0;
            var_s0->obj.pos.y = D_80178310[j].unk_8;
            var_s0->obj.rot.y = D_80178310[j].unk_C;
            func_800612B8(&var_s0->unk_1C, var_s0->obj.id);
            if(var_s0->obj.id == 1) {
                var_s0->unk_1C.unk_00 = D_6020760;
            }
            var_s0++;
        }
    }

    for(j = 0, var_s0_2 = D_80163400; j < ARRAY_COUNT(D_80163400); j++) {
        if(D_80178310[j].unk_10 < 0) {
            break;
        }
        if(D_80178310[j].unk_10 == 0xA2) {
            func_80061394(var_s0_2);
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
    func_80061404(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x124;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
    
}

void func_800A55B0(void) {
    Object_58 *var_s0;
    s32 i;
    s32 j;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_6030B14);

    for(j = 0, var_s0 = D_801782A8; j < 200; j++) {
        if(D_80178310[j].unk_10 < 0) {
            break;
        }
        if(D_80178310[j].unk_10 < 0xA1) {
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
    func_80061404(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x13A;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
    i = 1;
    func_80061404(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x13A;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
    i = 2;
    func_80061404(&D_8016F110[i]);
    D_8016F110[i].obj.status = 1;
    D_8016F110[i].obj.pos.x = 0.0f;
    D_8016F110[i].obj.pos.y = 0.0f;
    D_8016F110[i].obj.pos.z = 0.0f;
    D_8016F110[i].obj.id = 0x13A;
    func_800612B8(&D_8016F110[i].unk_01C, D_8016F110[i].obj.id);
    
}

void func_800A57E0(void) {
    s32 i = 0; // fake?

    func_80061404(&D_8016F110[i]);
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
        for(i = 1; i < 4; i++) {
            if(D_801778D0[i] < 0) {
                if(D_801778D0[i] == -1) {
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
        switch (D_8017789C) {                       /* irregular */
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

#define ARRAY_ALLOCATE(arr, count) (arr) = Memory_Allocate((count) * sizeof(*array))

void func_800A5D6C(void) {
    u16 temp_v0;
    u32 i;

    D_80178288 = Memory_Allocate(1000 * sizeof(f32));
    D_80178290 = Memory_Allocate(1000 * sizeof(f32));
    D_80178298 = Memory_Allocate(1000 * sizeof(u32));
    Rand_SetSeed(1, 0x7148, 0x2694);
    for(i = 0; i < 1000; i++) {
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

void func_800A5FA0(Vec3f *arg0, u32 arg1, u32 arg2) {
    if (D_801778E8 == 0) {
        func_80019218(arg1, arg0, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80019218(arg1, arg0, arg2, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_800A6028(Vec3f *arg0, u32 arg1) {
    func_80019218(arg1, arg0, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_800A6070(Vec3f *arg0, u32 arg1) {
    func_80019218(arg1, arg0, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_800A60B8(void *arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < 0x1C; i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_800A60E8(UnkStruct_D_80174750 *arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(UnkStruct_D_80174750); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_800A6118(UnkStruct_D_80175A10 *arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(UnkStruct_D_80175A10); i++, var_v0++) {
        *var_v0 = 0;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A6148.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A6590.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A668C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A670C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A69F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A6A74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A6AC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A6CD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A729C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A73E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A78C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A7974.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A8054.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A8304.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A86E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A8804.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A4B50/func_800A887C.s")

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

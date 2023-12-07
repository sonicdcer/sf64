#include "global.h"

ObjectInit* D_800CFDA0[] = {
    0x060371A4, 0x06026CC4, 0x0602A164, 0x06023F64, 0x060287A4, 0x0602E4F4, 0x06007E74,
    0x0601F234, 0x06026714, 0x0C035154, 0x06006AA4, 0x06031000, 0x06006C60, 0x0602E5C8,
    0x0600EAD4, NULL,       0x06011044, 0x0600FF74, 0x06006EB4, 0x06014D94, 0x0302DE3C,
};
s32 D_800CFDF4[] = {
    0,     0x144, 0x144, 0x144, 0x144, 0x147, 0x147, 0x147, 0x147, 0x142, 0x142, 0x142, 0x142,
    0x14F, 0x150, 0x150, 0x150, 0x150, 0x150, 0x142, 0x147, 0x144, 0x144, 0x151, 0,     0x145,
};
f32 D_800CFE5C[] = {
    0.0f, 1.0f, 0.5f, 0.33f, 0.25f, 1.0f,  0.5f,  0.33f, 0.25f, 1.0f, 0.5f, 0.33f, 0.25f,
    1.0f, 1.0f, 1.0f, 1.0f,  1.0f,  -1.0f, -1.0f, -1.0f, -1.0f, 0.1f, 1.0f, 1.0f,  1.0f,
};
Vec3f D_800CFEC4[6] = {
    { 0.0f, 0.0f, 50.0f }, { -50.0f, 0.0f, 0.0f }, { 50.0f, 0.0f, 0.0f },
    { 0.0f, 50.0f, 0.0f }, { 0.0f, 0.0f, -50.0f }, { 0.0f, -50.0f, 0.0f },
};
Vec3f D_800CFF0C[6] = {
    { 0.0f, 0.0f, 0.0f },   { 0.0f, -90.0f, 0.0f }, { 0.0f, 90.0f, 0.0f },
    { -90.0f, 0.0f, 0.0f }, { 0.0f, 180.0f, 0.0f }, { 90.0f, 0.0f, 0.0f },
};
u32 D_800CFF54[9] = {
    0x19404038, 0x19404139, 0x1940423A, 0x1940433B, 0x1940443C, 0x1940453D, 0x1940463E, 0x1940463E, 0x1940463E,
};

void func_80060F30(Vec3f* arg0, u32 arg1, s32 arg2) {
    if (D_801778E8 == 0) {
        func_80019218(arg1, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80019218(arg1, arg0, arg2, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_80060FBC(Object* arg0, Vec3f* arg1) {
    arg0->status = 0;
    func_8001A500(arg1);
}

s32 func_80060FE4(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if ((D_80177880 != 1) && (D_80178280[0].unk_1C8 != 2)) {
        return true;
    }
    Matrix_RotateY(gCalcMatrix, D_80178280[D_801778A0].unk_058, 0);
    sp2C.x = arg0->x - D_80178280[D_801778A0].unk_040.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - D_80178280[D_801778A0].unk_040.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);

    if ((sp20.z < 1000.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 2000.0f))) {
        return true;
    }
    return false;
}

s32 func_80061148(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if (D_80177880 != 1) {
        return true;
    }
    if (D_80178280[0].unk_1C8 == 7) {
        return func_80060FE4(arg0, arg1);
    }
    Matrix_RotateY(gCalcMatrix, D_80178280[D_801778A0].unk_058, 0);
    sp2C.x = arg0->x - D_80178280[D_801778A0].unk_040.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - D_80178280[D_801778A0].unk_040.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);

    if ((sp20.z < 0.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 500.0f))) {
        return true;
    }
    return false;
}

void func_800612B8(ObjectStruct_1C* arg0, u32 arg1) {
    *arg0 = D_800CC124[arg1];
    arg0->unk_0C = SEGMENTED_TO_VIRTUAL(D_800CC124[arg1].unk_0C);
    if (D_80177880 == 2) {
        arg0->unk_10 += 200.0f;
    }
}

void func_80061364(Object_80* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(Object_80); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_80061394(Object_4C* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(Object_4C); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_800613C4(Object_2F4* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(Object_2F4); i++, var_v0++) {
        *var_v0 = 0;
    }
    arg0->unk_110 = 1.0f;
}

void func_80061404(Object_408* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(Object_408); i++, var_v0++) {
        *var_v0 = 0;
    }
    arg0->unk_3F8 = 1.0f;
}

void func_80061444(Object_6C* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(Object_6C); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void func_80061474(Object_8C* arg0) {
    s32 i;
    u8* var_v0 = (u8*) arg0;

    for (i = 0; i < sizeof(Object_8C); i++, var_v0++) {
        *var_v0 = 0;
    }
    arg0->unk_70 = 1.0f;
}

void func_800614B4(Object_80* arg0, ObjectInit* arg1) {
    func_80061364(arg0);
    arg0->obj.status = 1;
    arg0->obj.pos.z = -arg1->unk_0;
    arg0->obj.pos.z += -3000.0f + arg1->unk_4;
    arg0->obj.pos.x = arg1->unk_6;
    arg0->obj.pos.y = arg1->unk_8;
    arg0->obj.rot.x = arg1->unk_A;
    arg0->obj.rot.y = arg1->unk_C;
    arg0->obj.rot.z = arg1->unk_E;
    arg0->obj.id = arg1->unk_10;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_800615A0(Object_4C* arg0, ObjectInit* arg1) {
    func_80061394(arg0);
    arg0->obj.status = 1;
    arg0->obj.pos.z = -arg1->unk_0;
    arg0->obj.pos.z += -3000.0f + arg1->unk_4;
    arg0->obj.pos.x = arg1->unk_6;
    arg0->obj.pos.y = arg1->unk_8;
    arg0->obj.rot.y = arg1->unk_C;
    arg0->obj.rot.x = arg1->unk_A;
    arg0->obj.rot.z = arg1->unk_E;
    arg0->obj.id = arg1->unk_10;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_8006168C(Object_2F4* arg0, ObjectInit* arg1) {
    func_800613C4(arg0);
    arg0->obj.status = 1;
    arg0->obj.pos.z = -arg1->unk_0;
    arg0->obj.pos.z += -3000.0f + arg1->unk_4;
    arg0->obj.pos.x = arg1->unk_6;
    arg0->obj.pos.y = arg1->unk_8;
    arg0->obj.rot.y = arg1->unk_C;
    arg0->obj.rot.x = arg1->unk_A;
    arg0->obj.rot.z = arg1->unk_E;
    arg0->obj.id = arg1->unk_10;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
}

void func_80061778(Object_408* arg0, ObjectInit* arg1) {
    func_80061404(arg0);
    arg0->obj.status = 1;
    arg0->obj.pos.z = -arg1->unk_0;
    arg0->obj.pos.z += -3000.0f + arg1->unk_4;
    arg0->obj.pos.x = arg1->unk_6;
    arg0->obj.pos.y = arg1->unk_8;
    arg0->obj.rot.y = arg1->unk_C;
    arg0->obj.rot.x = arg1->unk_A;
    arg0->obj.rot.z = arg1->unk_E;
    arg0->obj.id = arg1->unk_10;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
}

void func_80061864(Object_6C* arg0, ObjectInit* arg1) {
    func_80061444(arg0);
    arg0->obj.status = 1;
    arg0->obj.pos.z = -arg1->unk_0;
    arg0->obj.pos.z += -3000.0f + arg1->unk_4;
    arg0->obj.pos.x = arg1->unk_6;
    arg0->obj.pos.y = arg1->unk_8;
    arg0->obj.rot.y = arg1->unk_C;
    arg0->obj.rot.x = arg1->unk_A;
    arg0->obj.rot.z = arg1->unk_E;
    arg0->obj.id = arg1->unk_10;
    arg0->unk_68 = 1.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_80061958(Object_8C* arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_80061474(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 346;
    arg0->unk_50 = 50;
    arg0->unk_70 = 0.2f;
    if (D_80178234 == 13) {
        arg0->unk_50 = 200;
        arg0->unk_70 = 0.3f;
        arg0->unk_6C = Rand_ZeroOne() * 255.0f;
    }
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->obj.rot.z = Rand_ZeroOne() * 360.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
    if (D_80177C98 == 0) {
        arg0->unk_1C.unk_10 = 100.0f;
    }
}

void func_80061A4C(void) {
    s32 i;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            sp1C = (Rand_ZeroOne() - 0.5f);
            sp28 = D_80178280[0].unk_074 + (sp1C * 400.0f) + (5.0f * D_80178280[0].unk_0C0.x);
            sp1C = (Rand_ZeroOne() - 0.5f);
            sp24 = D_80178280[0].unk_078 + (sp1C * 400.0f) + (5.0f * D_80178280[0].unk_0C0.y);
            sp20 = -D_80177D20 - 500.0f;
            if (D_80177D08 < 0.0f) {
                sp20 = -D_80177D20 + 500.0f;
            }
            func_80061958(&D_80170130[i], sp28, sp24, sp20);
            break;
        }
    }
}

void func_80061B68(void) {
    s32 i;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {

            sp1C = (Rand_ZeroOne() - 0.5f);
            sp28 = D_80178280[0].unk_074 + (sp1C * 2000.0f) + (5.0f * D_80178280[0].unk_0C0.x);
            sp24 = 0;
            while (sp24 <= D_80177940) {
                sp1C = (Rand_ZeroOne() - 0.5f);
                sp24 = D_80178280[0].unk_078 + (sp1C * 2000.0f) + (5.0f * D_80178280[0].unk_0C0.y);
            }
            sp20 = -D_80177D20 - 3000.0f;
            if (D_80177D08 < 0.0f) {
                sp20 = -D_80177D20 + 1000.0f;
            }
            func_80061958(&D_80170130[i], sp28, sp24, sp20);
            break;
        }
    }
}

void func_80061CD0(void) {
    s32 i;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            sp1C = (Rand_ZeroOne() - 0.5f);
            sp28 = D_80178280[D_801778A0].unk_074 + (sp1C * 3000.0f) + (5.0f * D_80178280[D_801778A0].unk_0C0.x);
            sp1C = (Rand_ZeroOne() - 0.5f);
            sp24 =
                D_80178280[D_801778A0].unk_078 + 1000.0f + (sp1C * 500.0f) + (5.0f * D_80178280[D_801778A0].unk_0C0.y);
            sp20 = -D_80177D20 - 2000.0f * Rand_ZeroOne();
            if (D_80177D08 < 0.0f) {
                sp20 = -D_80177D20 + 1000.0f;
            }
            func_80061958(&D_80170130[i], sp28, sp24, sp20);
            break;
        }
    }
}

void func_80061E48(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_800613C4(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 181;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->obj.id = 186;
    }
    if (Rand_ZeroOne() < 0.5f) {
        arg0->obj.id = 182;
    }
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_0F0 = 10.0f;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
}

void func_80061F0C(Object_2F4* arg0, ObjectInit* arg1, s32 arg2) {
    Vec3f sp24;

    func_800613C4(arg0);
    arg0->obj.status = 2;
    arg0->unk_040 = arg2;
    arg0->obj.pos.z = -arg1->unk_0;
    arg0->obj.pos.z += -3000.0f + arg1->unk_4;
    arg0->obj.pos.x = arg1->unk_6;
    arg0->obj.pos.y = arg1->unk_8;
    arg0->obj.rot.y = arg0->unk_0F8 = arg1->unk_C;
    arg0->obj.rot.x = arg0->unk_0F4 = arg1->unk_A;
    arg0->unk_0FC = arg1->unk_E;
    arg0->obj.id = 200;
    arg0->unk_0C2 = 10;
    arg0->unk_0B4 = 0xFFF;
    arg0->unk_0E4 = arg1->unk_10 - 1000;

    func_800612B8(&arg0->unk_01C, arg0->obj.id);
    arg0->unk_01C.unk_10 = 3000.0f;
    arg0->unk_178 = 20000.0f;
    arg0->unk_054 = D_80177E70;
    arg0->unk_078 = D_80163FE0[D_80177E70].unk_0E4;
    arg0->unk_16C = D_80161A54;
    Matrix_RotateZ(gCalcMatrix, -D_80177E88.z * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -D_80177E88.x * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, -D_80177E88.y * M_DTOR, 1);
    sp24.x = arg0->obj.pos.x - D_80177F10.x;
    sp24.y = arg0->obj.pos.y - D_80177F10.y;
    sp24.z = arg0->obj.pos.z - D_80177F10.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp24, &arg0->unk_2DC);
    arg0->unk_074 = D_80177E78;
    D_80177E70 = arg2;
    func_80069AAC(arg0);
}

void func_80062180(ObjectInit* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_fv0;
    s32 i;

    if ((arg1 > arg0->unk_6 - D_80178280[0].unk_0AC) && (arg0->unk_6 - D_80178280[0].unk_0AC > arg2) &&
        (arg3 > arg0->unk_8 - D_80178280[0].unk_0B0) && (arg0->unk_8 - D_80178280[0].unk_0B0 > arg4)) {
        if (arg0->unk_10 < 161) {
            for (i = 0; i < ARRAY_COUNT(D_80161B00); i++) {
                if (D_80161B00[i].obj.status == 0) {
                    func_800614B4(&D_80161B00[i], arg0);
                    break;
                }
            }
        }
        if ((arg0->unk_10 >= 161) && (arg0->unk_10 < 176)) {
            for (i = 0; i < ARRAY_COUNT(D_80163400); i++) {
                if (D_80163400[i].obj.status == 0) {
                    func_800615A0(&D_80163400[i], arg0);
                    break;
                }
            }
        }
        if ((arg0->unk_10 >= 176) && (arg0->unk_10 < 292)) {
            if ((arg0->unk_10 == 267) || (arg0->unk_10 == 254)) {
                for (i = ARRAY_COUNT(D_80163FE0) - 1; i >= 0; i--) {
                    if (D_80163FE0[i].obj.status == 0) {
                        func_8006168C(&D_80163FE0[i], arg0);
                        break;
                    }
                }
            } else if (arg0->unk_10 == 198) {
                for (i = 0; i < 3; i++) {
                    if (D_80163FE0[i].obj.status == 0) {
                        func_8006168C(&D_80163FE0[i], arg0);
                        break;
                    }
                }
            } else {
                for (i = 4; i < ARRAY_COUNT(D_80163FE0); i++) {
                    if (D_80163FE0[i].obj.status == 0) {
                        func_8006168C(&D_80163FE0[i], arg0);
                        break;
                    }
                }
            }
        }
        if ((arg0->unk_10 >= 292) && (arg0->unk_10 < 322)) {
            for (i = 0; i < ARRAY_COUNT(D_8016F110); i++) {
                if (D_8016F110[i].obj.status == 0) {
                    func_80061778(&D_8016F110[i], arg0);
                    break;
                }
            }
        }
        if ((arg0->unk_10 >= 322) && (arg0->unk_10 < 339)) {
            for (i = 0; i < ARRAY_COUNT(D_801737E0); i++) {
                if (D_801737E0[i].obj.status == 0) {
                    func_80061864(&D_801737E0[i], arg0);
                    break;
                }
            }
        }
        if (arg0->unk_10 >= 339 && arg0->unk_10 < 407) {
            switch (arg0->unk_10) {
                case 403:
                    D_E6A810_801BA1E8 = 99;
                    break;
                case 404:
                    D_E6A810_801BA1E8 = 0;
                    break;
                case 405:
                    D_E6A810_801BA1E8 = 98;
                    break;
                case 402:
                    D_E9F1D0_801A7F78 = arg0->unk_E * 0.1f;
                    D_E9F1D0_801A7F60 = -(f32) arg0->unk_A;
                    break;
                case 400:
                    D_801782B8++;
                    break;
                case 401:
                    if (D_801782B8 > 0) {
                        D_801782B8--;
                        break;
                    }
                    break;
            }
        }
        if (arg0->unk_10 >= 407) {
            for (i = 0; i < ARRAY_COUNT(D_80163FE0); i++) {
                if (D_80163FE0[i].obj.status == 0) {
                    func_80061F0C(&D_80163FE0[i], arg0, i);
                    break;
                }
            }
        }
    }
}

void func_80062568(void) {
    ObjectInit* var_s1;
    s32 var_s0;
    s32 temp = D_80178234; // seems fake
    if (1) {}
    D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[temp]);
    var_s0 = D_80177CA0 - 40;
    var_s1 = &D_80178310[var_s0];

    for (; var_s0 < D_80177CA0; var_s0++, var_s1++) {
        func_80062180(var_s1, 4000.0f, -4000.0f, 4000.0f, -4000.0f);
    }
}

void func_80062664(void) {
    ObjectInit* var_s0_2;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_fs3;
    f32 var_fs4;
    s32 i;
    s32 j;

    if ((D_80178234 == 1) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_602B148);
    } else if ((D_80178234 == 2) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_602F18C);
    } else if ((D_80178234 == 9) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_C0356A4);
    } else if ((D_80178234 == 6) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_6010088);
    } else {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[D_80178234]);
    }
    if (D_8017812C == 0) {
        for (j = 0; j < D_801782B8; j++) {
            if (D_80178234 == 13) {
                func_80061B68();
            } else {
                func_80061A4C();
            }
        }
    }
    if (D_80178234 == 1) {
        var_fs3 = var_fs1 = 10000.0f;
        var_fs4 = var_fs2 = -10000.0f;
    } else if (D_80178234 == 5) {
        var_fs3 = var_fs1 = 6000.0f;
        var_fs4 = var_fs2 = -6000.0f;
    } else if (D_80178234 == 6) {
        var_fs3 = var_fs1 = 3500.0f;
        var_fs4 = var_fs2 = -3500.0f;
    } else {
        var_fs3 = var_fs1 = 4000.0f;
        var_fs4 = var_fs2 = -4000.0f;
    }

    if ((D_80178280[0].unk_210 != 0) && (D_80178280[0].unk_118 < 0.0f)) {
        var_fs1 = 10000.0f;
    }
    if ((D_80178280[0].unk_210 != 0) && (D_80178280[0].unk_118 > 0.0f)) {
        var_fs2 = -10000.0f;
    }
    D_80161680 = 0;

    for (i = 0, var_s0_2 = &D_80178310[D_80177DC8]; i < 10000; i++, D_80177DC8++, var_s0_2++) {
        if ((var_s0_2->unk_10 >= 0) && D_80177D20 <= var_s0_2->unk_0 && var_s0_2->unk_0 <= D_80177D20 + 200.0f) {
            if ((D_80178234 == 6) && (var_s0_2->unk_10 >= 1000)) {
                if (((var_s0_2->unk_C < 180.0f) && (var_s0_2->unk_6 < D_80178280[0].unk_0AC)) ||
                    ((var_s0_2->unk_C > 180.0f) && (D_80178280[0].unk_0AC < var_s0_2->unk_6))) {
                    func_80062180(var_s0_2, var_fs1, var_fs2, var_fs3, var_fs4);
                }
            } else {
                func_80062180(var_s0_2, var_fs1, var_fs2, var_fs3, var_fs4);
            }
        } else {
            break;
        }
    }
}

void func_80062B60(f32 arg0, f32 arg1, s32 arg2, f32 arg3) {
    s32 i;

    if (D_80177C98 == 0) {
        for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
            if (D_80170130[i].obj.status == 0) {
                func_80061474(&D_80170130[i]);
                D_80170130[i].obj.status = 1;
                D_80170130[i].obj.id = 348;
                D_80170130[i].obj.pos.x = arg0;
                D_80170130[i].obj.pos.y = D_80177940 + 3.0f;
                D_80170130[i].obj.pos.z = arg1;
                D_80170130[i].unk_70 = 10.0f;
                D_80170130[i].unk_6C = arg3;
                D_80170130[i].unk_44 = 80;
                D_80170130[i].unk_4E = arg2;
                func_800612B8(&D_80170130[i].unk_1C, D_80170130[i].obj.id);
                break;
            }
        }
    }
}

void func_80062C38(f32 arg0, f32 arg1) {
    s32 i;

    if (D_80177C98 == 0) {
        for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
            if (D_80170130[i].obj.status == 0) {
                func_80061474(&D_80170130[i]);
                D_80170130[i].obj.status = 1;
                D_80170130[i].obj.id = 349;
                D_80170130[i].obj.pos.x = arg0;
                D_80170130[i].obj.pos.y = D_80177940 + 3.0f;
                D_80170130[i].obj.pos.z = arg1;
                D_80170130[i].unk_70 = 1.0f;
                D_80170130[i].unk_6C = 1.3f;
                D_80170130[i].unk_44 = 120;
                func_800612B8(&D_80170130[i].unk_1C, D_80170130[i].obj.id);
                break;
            }
        }
    }
}

void func_80062D04(f32 arg0, f32 arg1) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            func_80061474(&D_80170130[i]);
            D_80170130[i].obj.status = 1;
            D_80170130[i].obj.id = 350;
            D_80170130[i].obj.pos.x = arg0;
            D_80170130[i].obj.pos.y = D_80177940 + 3.0f;
            D_80170130[i].obj.pos.z = arg1;
            D_80170130[i].unk_70 = 3.0f;
            D_80170130[i].unk_6C = 2.0f;
            D_80170130[i].unk_44 = 120;
            func_800612B8(&D_80170130[i].unk_1C, D_80170130[i].obj.id);
            break;
        }
    }
}

s32 func_80062DBC(Vec3f* arg0, f32* var_s0, Object* arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_ft4;
    f32 var_ft5;
    f32 var_fv0;
    s32 temp_ft1;
    Vec3f sp80;
    Vec3f sp74;
    s32 var_s4;

    temp_ft1 = var_s0[0];
    var_s0++;
    if (temp_ft1 != 0) {
        for (var_s4 = 0; var_s4 < temp_ft1; var_s4++) {
            var_fv0 = 0.0f;
            var_fa0 = 0.0f;
            var_fs2 = 0.0f;
            var_fs1 = 0.0f;
            if (var_s0[0] >= 300000.0f) {
                return 0;
            }
            if (var_s0[0] == 200000.0f) {
                var_fv0 = 1.0f;
                var_fs1 = var_s0[1];
                var_fs2 = var_s0[2];
                var_fa0 = var_s0[3];
                var_s0 += 4;
            }
            if ((arg2->rot.y == 0.0f) && (arg2->rot.z == 0.0f) && (arg2->rot.x == 0.0f) && (var_fv0 == 0.0f)) {
                var_fa1 = arg0->x;
                var_ft4 = arg0->y;
                var_ft5 = arg0->z;
            } else {
                Matrix_RotateZ(gCalcMatrix, -var_fa0 * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -var_fs1 * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -var_fs2 * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, -arg2->rot.z * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -arg2->rot.x * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -arg2->rot.y * M_DTOR, 1);
                if ((arg3 != 0.0f) || (arg4 != 0.0f) || (arg5 != 0.0f)) {
                    Matrix_RotateZ(gCalcMatrix, -arg5 * M_DTOR, 1);
                    Matrix_RotateX(gCalcMatrix, -arg3 * M_DTOR, 1);
                    Matrix_RotateY(gCalcMatrix, -arg4 * M_DTOR, 1);
                }
                sp80.x = arg0->x - arg2->pos.x;
                sp80.y = arg0->y - arg2->pos.y;
                sp80.z = arg0->z - arg2->pos.z;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp80, &sp74);
                var_fa1 = arg2->pos.x + sp74.x;
                var_ft4 = arg2->pos.y + sp74.y;
                var_ft5 = arg2->pos.z + sp74.z;
            }
            if ((var_s0[1] + 20.0f) > (fabsf((var_s0[0] + arg2->pos.z) - var_ft5)) &&
                ((var_s0[5] + 20.0f) > fabsf((var_s0[4] + arg2->pos.x) - var_fa1)) &&
                ((var_s0[3] + 10.0f) > fabsf((var_s0[2] + arg2->pos.y) - var_ft4))) {
                return true;
            }
            var_s0 += 6;
        }
    }
    return false;
}

s32 func_800631A8(Vec3f* arg0, f32* arg1, Vec3f* arg2) {
    if (((s32) arg1[0] != 0) && (fabsf((arg1[1] + arg2->z) - arg0->z) < (arg1[2] + 20.0f)) &&
        (fabsf((arg1[5] + arg2->x) - arg0->x) < (arg1[6] + 20.0f)) &&
        (fabsf((arg1[3] + arg2->y) - arg0->y) < (arg1[4] + 20.0f))) {
        return true;
    }
    return false;
}

s32 func_8006326C(Vec3f* arg0, Vec3f* arg1, s32 arg2, Object* arg3) {
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    s32 var_s1;
    s32 pad1[3];
    f32 sp30;
    s32 pad2;

    sp74.x = arg0->x - arg3->pos.x;
    sp74.z = arg0->z - arg3->pos.z;
    if (((fabsf(sp74.x) < 1100.0f) && (fabsf(sp74.z) < 1100.0f)) || (arg2 == 0xB4)) {
        sp74.y = arg0->y - arg3->pos.y;
        Matrix_RotateY(gCalcMatrix, -arg3->rot.y * M_DTOR, 0);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);
        sp5C.x = arg3->pos.x + sp68.x;
        sp5C.y = arg3->pos.y + sp68.y;
        sp5C.z = arg3->pos.z + sp68.z;
        sp50.x = arg3->pos.x;
        sp50.y = arg3->pos.y;
        sp50.z = arg3->pos.z;
        if ((arg2 == 0xB4) || (arg2 == 0x95) || (arg2 == 0x96) || (arg2 == 0x134) || (arg2 == 0x139) ||
            (arg2 == 0x138) || (arg2 == 0x135) || (arg2 == 0x27)) {
            var_s1 = 0;
            if (arg2 == 0x138) {
                var_s1 = 9;
            }
            if (arg2 == 0x27) {
                var_s1 = 1;
            } else if (arg2 == 0x134) {
                var_s1 = 4;
            } else if (arg2 == 0x135) {
                var_s1 = 7;
            } else if (arg2 == 0x95) {
                var_s1 = 5;
            } else if (arg2 == 0x96) {
                var_s1 = 6;
            } else if (arg2 == 0x139) {
                var_s1 = 8;
            }
            if (func_800998FC(&sp5C, &sp50, arg1, var_s1, &sp44, &sp30) > 0) {
                return true;
            }
        } else {
            var_s1 = 0;
            if (arg2 == 2) {
                var_s1 = 2;
            }
            if (arg2 == 3) {
                var_s1 = 3;
            }
            if (arg2 == 0x8C) {
                var_s1 = 4;
            }
            if (arg2 == 0x8D) {
                var_s1 = 6;
            }
            if (arg2 == 0x75) {
                var_s1 = 0xE;
            } else if ((arg2 == 4) || (arg2 == 5)) {
                var_s1 = 1;
            }
            if (func_800A3690(&sp5C, &sp50, var_s1, &sp44) != 0) {
                return true;
            }
        }
    }
    return false;
}

s32 func_8006351C(s32 arg0, Vec3f* arg1, Vec3f* arg2, s32 arg3) {
    Object_58* var_s0;
    Object_80* var_s0_2;
    Object_4C* var_s0_3;
    Object_408* var_s0_4;
    Object_2F4* var_s0_5;
    Vec3f temp;
    s32 i;

    if ((D_80177880 == 1) && (D_80178234 != 0x10)) {
        var_s0 = D_801782A8;
        for (i = 0; i < 200; i++, var_s0++) {
            if (var_s0->obj.status == 2) {
                if ((var_s0->obj.id == 1) || (var_s0->obj.id == 3) || (var_s0->obj.id == 117) ||
                    (var_s0->obj.id == 141) || (var_s0->obj.id == 150) || (var_s0->obj.id == 149) ||
                    (var_s0->obj.id == 148) || (var_s0->obj.id == 140)) {
                    if (func_8006326C(arg1, arg2, var_s0->obj.id, &var_s0->obj)) {
                        return 999;
                    }
                } else if ((fabsf(arg1->x - var_s0->obj.pos.x) < 2000.0f) &&
                           (fabsf(arg1->z - var_s0->obj.pos.z) < 2000.0f)) {
                    if (func_80062DBC(arg1, var_s0->unk_1C.unk_0C, &var_s0->obj, 0.0f, 0.0f, 0.0f)) {
                        return 2;
                    }
                }
            }
        }
    }
    var_s0_2 = D_80161B00;
    for (i = 0; i < ARRAY_COUNT(D_80161B00) && D_80177880 == 0; i++, var_s0_2++) {
        if (var_s0_2->obj.status == 2) {
            if ((var_s0_2->obj.id == 1) || (var_s0_2->obj.id == 4) || (var_s0_2->obj.id == 5) ||
                (var_s0_2->obj.id == 2) || (var_s0_2->obj.id == 39) || (var_s0_2->obj.id == 3)) {
                if (func_8006326C(arg1, arg2, var_s0_2->obj.id, &var_s0_2->obj)) {
                    return 2;
                }
            } else if ((fabsf(arg1->x - var_s0_2->obj.pos.x) < 2000.0f) &&
                       (fabsf(arg1->z - var_s0_2->obj.pos.z) < 2000.0f)) {
                if (func_80062DBC(arg1, var_s0_2->unk_1C.unk_0C, &var_s0_2->obj, 0.0f, 0.0f, 0.0f)) {
                    return i + 10;
                }
            }
        }
    }
    var_s0_3 = D_80163400;
    for (i = 0; i < ARRAY_COUNT(D_80163400); i++, var_s0_3++) {
        if ((var_s0_3->obj.status == 2) && (fabsf(arg1->x - var_s0_3->obj.pos.x) < 500.0f) &&
            (fabsf(arg1->z - var_s0_3->obj.pos.z) < 500.0f) &&
            func_800631A8(arg1, var_s0_3->unk_1C.unk_0C, &var_s0_3->obj.pos)) {
            if ((var_s0_3->obj.id == 163) || (var_s0_3->obj.id == 162) || (var_s0_3->obj.id == 162)) {
                var_s0_3->unk_46 = 1;
            }
            return 0;
        }
    }
    if ((arg3 == 0) || (arg3 == 2) || (arg3 == 3)) {
        if (arg3 != 2) {
            var_s0_4 = D_8016F110;
            for (i = 0; i < ARRAY_COUNT(D_8016F110); i++, var_s0_4++) {
                if (var_s0_4->obj.status == 2) {
                    if ((var_s0_4->obj.id == 308) || (var_s0_4->obj.id == 312) || (var_s0_4->obj.id == 313) ||
                        (var_s0_4->obj.id == 309)) {
                        if (func_8006326C(arg1, arg2, var_s0_4->obj.id, &var_s0_4->obj)) {
                            return 2;
                        }
                    } else if (var_s0_4->obj.id == 310) {
                        temp.x = fabsf(var_s0_4->obj.pos.x - arg1->x) * 0.8333333f;
                        temp.y = fabsf(var_s0_4->obj.pos.y - arg1->y) * 2;
                        temp.z = fabsf(var_s0_4->obj.pos.z - arg1->z) * 0.8333333f;
                        if (sqrtf(VEC3F_SQ(temp)) < 1500.0f) {
                            var_s0_4->unk_062 = 1;
                            return 2;
                        }
                    } else {
                        if (var_s0_4->obj.id == 316) {
                            temp.x = fabsf(var_s0_4->obj.pos.x - arg1->x);
                            temp.y = fabsf(var_s0_4->obj.pos.y - 300.0f - arg1->y) * 7.42f;
                            temp.z = fabsf(var_s0_4->obj.pos.z - arg1->z);
                            if (sqrtf(VEC3F_SQ(temp)) < 2700.0f) {
                                return 2;
                            }
                        }
                        if ((fabsf(arg1->x - var_s0_4->obj.pos.x) < 2000.0f) &&
                            (fabsf(arg1->z - var_s0_4->obj.pos.z) < 2000.0f)) {
                            if (func_80062DBC(arg1, var_s0_4->unk_01C.unk_0C, &var_s0_4->obj, 0.0f, 0.0f, 0.0f)) {
                                return 2;
                            }
                        }
                    }
                }
            }
        }
        var_s0_5 = D_80163FE0;
        for (i = 0; i < ARRAY_COUNT(D_80163FE0); i++, var_s0_5++) {
            if ((var_s0_5->obj.status >= 2) && (fabsf(arg1->x - var_s0_5->obj.pos.x) < 1000.0f) &&
                (fabsf(arg1->z - var_s0_5->obj.pos.z) < 1500.0f) && (arg0 != i) && (var_s0_5->unk_01C.unk_16 != 2) &&
                ((var_s0_5->obj.id != 197) || (var_s0_5->unk_0E4 >= 4)) && (var_s0_5->unk_0C2 == 0)) {
                if (var_s0_5->obj.id == 180) {
                    if (func_8006326C(arg1, arg2, var_s0_5->obj.id, &var_s0_5->obj) != 0) {
                        return 2;
                    }
                } else if (var_s0_5->unk_110 < 0.0f) {
                    if (func_80062DBC(arg1, var_s0_5->unk_01C.unk_0C, &var_s0_5->obj, var_s0_5->unk_2E8.x,
                                      var_s0_5->unk_2E8.y, var_s0_5->unk_2E8.z + var_s0_5->unk_0FC)) {
                        var_s0_5->unk_0D0 = 1;
                        var_s0_5->unk_0D6 = 10;
                        var_s0_5->unk_0D2 = -1;
                        var_s0_5->unk_0D8.x = arg1->x;
                        var_s0_5->unk_0D8.y = arg1->y;
                        var_s0_5->unk_0D8.z = arg1->z;
                        return 2;
                    }
                } else if ((arg3 != 2) && (arg3 != 3)) {
                    if (func_800631A8(arg1, var_s0_5->unk_01C.unk_0C, &var_s0_5->obj.pos)) {
                        var_s0_5->unk_0D0 = 1;
                        var_s0_5->unk_0D6 = 10;
                        var_s0_5->unk_0D2 = -1;
                        if (((var_s0_5->obj.id != 200) || (var_s0_5->unk_080 == 0)) &&
                            ((var_s0_5->obj.id != 197) || ((var_s0_5->unk_0E4 >= 10) && (var_s0_5->unk_0E4 < 100)))) {
                            var_s0_5->unk_0CE = 0;
                        }
                        var_s0_5->unk_0D8.x = arg1->x;
                        var_s0_5->unk_0D8.y = arg1->y;
                        var_s0_5->unk_0D8.z = arg1->z;
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

void func_80063CAC(Object_80* arg0) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80163FE0); i++) {
        if (D_80163FE0[i].obj.status == 0) {
            func_800613C4(&D_80163FE0[i]);
            D_80163FE0[i].obj.status = 1;
            D_80163FE0[i].obj.id = 193;
            D_80163FE0[i].obj.pos.x = arg0->obj.pos.x;
            D_80163FE0[i].obj.pos.y = arg0->obj.pos.y;
            D_80163FE0[i].obj.pos.z = arg0->obj.pos.z;
            D_80163FE0[i].obj.rot.y = Rand_ZeroOne() * 360.0f;
            func_800612B8(&D_80163FE0[i].unk_01C, D_80163FE0[i].obj.id);
            break;
        }
    }
}

void func_80063D58(Object* arg0) {
    s32 i;

    arg0->pos.y = D_80177940;
    for (i = 0; i < ARRAY_COUNT(D_80163400); i++) {
        if (D_80163400[i].obj.status == 0) {
            func_80061394(&D_80163400[i]);
            D_80163400[i].obj.status = 1;
            D_80163400[i].obj.id = 164;
            D_80163400[i].unk_45 = arg0->id;
            D_80163400[i].obj.pos.x = arg0->pos.x;
            D_80163400[i].obj.pos.y = 5.0f;
            D_80163400[i].obj.pos.z = arg0->pos.z;
            if ((arg0->id == 0) || (arg0->id == 6) || (arg0->id == 7) || (arg0->id == 0x38) || (arg0->id == 0x14) ||
                (arg0->id == 0x15) || (arg0->id == 0x16)) {
                D_80163400[i].obj.rot.y = arg0->rot.y;
            } else {
                D_80163400[i].obj.rot.y = 44.9f;
            }
            func_800612B8(&D_80163400[i].unk_1C, D_80163400[i].obj.id);
            break;
        }
    }
}

void func_80063E5C(Object* arg0, f32* arg1) {
    s32 i;
    Object_6C* var_v1;

    for (i = 0, var_v1 = D_801737E0; i < ARRAY_COUNT(D_801737E0); i++, var_v1++) {
        if (var_v1->obj.status == 0) {
            func_80061444(&D_801737E0[i]);
            var_v1->obj.status = 1;
            var_v1->obj.id = 334;
            var_v1->obj.pos.x = arg0->pos.x;
            var_v1->obj.pos.y = arg0->pos.y;
            var_v1->obj.pos.z = arg0->pos.z;
            var_v1->obj.rot.y = arg0->rot.y;
            func_800612B8(&var_v1->unk_1C, var_v1->obj.id);
            var_v1->unk_1C.unk_0C = SEGMENTED_TO_VIRTUAL(arg1);
            break;
        }
    }
}

void func_80063F4C(s32 arg0) {
}

void func_80063F58(Object_6C* arg0) {
    arg0->unk_68 = arg0->obj.rot.z * 100.0f;
}

void func_80063F74(Object_6C* arg0) {
    arg0->unk_68 = arg0->obj.rot.z * 100.0f;
}

void func_80063F90(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a2;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32* var_v0;

    switch (arg1) {
        case 0xAA:
            func_8007A6F0(&D_80163400[arg0].obj.pos, 0x11000055);
            break;
        case 0xEA:
            func_80019218(0x11030010, &D_80163FE0[arg0].unk_100, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 0x36:
            func_80019218(0x11000000, &D_80161B00[arg0].unk_70, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 0xC6:
            func_80092D48(&D_80163FE0[arg0]);
            break;
        case 0xEB:
            D_80163FE0[arg0].unk_13C = fabsf(Math_ModF(D_80163FE0[arg0].obj.pos.x, 100.0f));
            break;
        case 0xF7:
            func_E16C50_8019D060(&D_80163FE0[arg0]);
            break;
        case 0x170:
            if (D_80178234 == 0xC) {
                func_E6A810_801B6E20(D_80170130[arg0].obj.pos.x, D_80170130[arg0].obj.pos.z + D_80177D20, &sp54, &sp4C,
                                     &sp50);
                D_80170130[arg0].obj.pos.y = sp4C + 3.0f;
                D_80170130[arg0].obj.rot.x = (sp54 * 180.0f) / M_PI;
                D_80170130[arg0].obj.rot.z = (sp50 * 180.0f) / M_PI;
            } else if (D_80178234 == 0xB) {
                D_80170130[arg0].obj.status = 0;
            }
            break;
        case 0x1E:
            func_80063E5C(&D_80161B00[arg0].obj, D_6006940);
            break;
        case 0x1F:
            func_80063E5C(&D_80161B00[arg0].obj, D_600695C);
            break;
        case 0x20:
            func_80063E5C(&D_80161B00[arg0].obj, D_6006978);
            break;
        case 0x21:
            func_80063E5C(&D_80161B00[arg0].obj, D_6006994);
            break;
        case 0x22:
            func_80063E5C(&D_80161B00[arg0].obj, D_60069B0);
            break;
        case 0x23:
            func_80063E5C(&D_80161B00[arg0].obj, D_60069CC);
            break;
        case 0x24:
            func_80063E5C(&D_80161B00[arg0].obj, D_60069E8);
            break;
        case 0x25:
            func_80063E5C(&D_80161B00[arg0].obj, D_6006A04);
            break;
        case 0x26:
            func_80063E5C(&D_80161B00[arg0].obj, D_6006A20);
            break;
        case 0x17:
            func_80063CAC(&D_80161B00[arg0]);
            break;
        case 0x143:
            if (D_80177CA0 != 0) {
                D_801737E0[arg0].obj.status = 0;
            }
            break;
        case 0x146:
            if (D_80177E80 < 0) {
                D_801737E0[arg0].obj.status = 0;
            }
            break;
        case 0x14B:
        case 0x14C:
        case 0x14D:
            func_80063F74(&D_801737E0[arg0]);
            break;
        case 0x148:
        case 0x149:
            func_80063F58(&D_801737E0[arg0]);
            break;
        case 0x14A:
            if (((D_80177E80 >= 7) && (D_80178234 == 0) && (D_801778B0[1] > 0)) || (D_80178234 != 0)) {
                func_80063F58(&D_801737E0[arg0]);
            } else {
                D_801737E0[arg0].obj.status = 0;
            }
            break;
        case 0x0:
            func_80063E5C(&D_80161B00[arg0].obj, D_800CBF18);
            /* fallthrough */
        case 0x6:
        case 0x7:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x38:
            func_80063D58(&D_80161B00[arg0].obj);
            break;
        case 0xBB:
            D_80163FE0[arg0].unk_114 = D_80163FE0[arg0].obj.pos.x;
            D_80163FE0[arg0].unk_118 = D_80163FE0[arg0].obj.pos.y;
            D_80163FE0[arg0].obj.rot.z = D_80163FE0[arg0].obj.rot.x;
            D_80163FE0[arg0].obj.rot.x = 0.0f;
            break;
        case 0xB6:
        case 0xBA:
            D_80163FE0[arg0].unk_046 = D_80178320;
            D_80163FE0[arg0].unk_048 = D_801783D8;
            D_80163FE0[arg0].obj.rot.x = Rand_ZeroOne() * 360.0f;
            D_80163FE0[arg0].obj.rot.y = Rand_ZeroOne() * 360.0f;
            break;
        case 0xB5:
            D_80163FE0[arg0].obj.rot.x = Rand_ZeroOne() * 360.0f;
            D_80163FE0[arg0].obj.rot.y = Rand_ZeroOne() * 360.0f;
            D_80163FE0[arg0].unk_0CE = 200;
            break;
        case 0xCA:
            D_80163FE0[arg0].unk_0CE = 30;
            break;
        case 0xFC:
            if (D_80178280[0].unk_07C < D_80163FE0[arg0].obj.pos.z) {
                func_80060FBC(&D_80163FE0[arg0].obj, &D_80163FE0[arg0].unk_100);
            }
            break;
        case 0xEF:
            D_80163FE0[arg0].unk_050 = D_801784A4;
            D_801784A4++;
            break;
        case 0xEC:
            D_801784A4 = 0;
            D_80163FE0[arg0].unk_0F4 = D_80163FE0[arg0].obj.rot.x;
            D_80163FE0[arg0].unk_0F8 = D_80163FE0[arg0].obj.rot.y;
            D_80163FE0[arg0].obj.rot.x = D_80163FE0[arg0].obj.rot.y = 0.0f;
            D_80163FE0[arg0].unk_11C = D_80163FE0[arg0].obj.pos.y;
            var_v0 = D_801782C4;
            for (var_a0 = 0; var_a0 < 200; var_a0++, var_v0 += 6) {
                var_v0[0] = D_80163FE0[arg0].obj.pos.x;
                var_v0[1] = D_80163FE0[arg0].obj.pos.y;
                var_v0[2] = D_80163FE0[arg0].obj.pos.z;
                var_v0[3] = D_80163FE0[arg0].obj.rot.x;
                var_v0[4] = D_80163FE0[arg0].obj.rot.y;
                var_v0[5] = D_80163FE0[arg0].obj.rot.z;
            }
            break;
        case 0xC2:
            D_80163FE0[arg0].unk_046 = 100;
            for (var_a0 = 0; var_a0 < 2; var_a0++) {
                if (D_80176550[var_a0] == 0) {
                    D_80176550[var_a0] = 1;
                    D_80163FE0[arg0].unk_046 = var_a0;
                    for (var_a2 = 0; var_a2 < 100; var_a2++) {
                        D_80176878[var_a0][var_a2] = D_80163FE0[arg0].obj.pos.y;
                        D_80176B98[var_a0][var_a2] = D_80163FE0[arg0].obj.pos.z;
                    }
                    break;
                }
            }
            if (D_80163FE0[arg0].unk_046 == 100) {
                D_80163FE0[arg0].obj.status = 0;
            }
            break;
        case 0xBE:
        case 0xBF:
            func_80019218(0x31000012, &D_80163FE0[arg0].unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 0xC0:
            D_80163FE0[arg0].unk_0C9 = 1;
            break;
        case 0x140:
            func_E9F1D0_8018D16C(&D_8016F110[arg0]);
            break;
        case 0x13C:
            func_E51970_80193CA4(&D_8016F110[arg0]);
            break;
        case 0x13A:
            func_E9F1D0_80197CC4(&D_8016F110[arg0]);
            break;
        case 0xCD:
        case 0xCE:
        case 0xD0:
        case 0xD1:
        case 0xD2:
        case 0xD3:
        case 0xD4:
        case 0xD5:
            func_E6A810_80199F8C(&D_80163FE0[arg0]);
            break;
        case 0xCF:
            func_E6A810_801A7D98(&D_80163FE0[arg0]);
            break;
        case 0xD6:
            func_E6A810_801A3E70(&D_80163FE0[arg0]);
            break;
        case 0xD7:
            func_E6A810_801A4660(&D_80163FE0[arg0]);
            break;
        case 0xDF:
            func_E6A810_801A4AF8(&D_80163FE0[arg0]);
            break;
        case 0xD8:
        case 0xD9:
            func_E6A810_801A5E2C(&D_80163FE0[arg0]);
            break;
        case 0xDA:
            func_E6A810_801A6134(&D_80163FE0[arg0]);
            break;
        case 0x41:
            func_E6A810_801A65E0(&D_80161B00[arg0]);
            break;
        case 0xB1:
        case 0xB2:
            func_DF4260_8018B0B4(&D_80163FE0[arg0]);
            /* fallthrough */
        case 0xB0:
            D_80163FE0[arg0].unk_0CE = 24;
            func_80019218(0x31000016, &D_80163FE0[arg0].unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 0x129:
            func_E08400_80188A40(&D_8016F110[arg0]);
            break;
        case 0x12B:
            func_80042FAC(&D_8016F110[arg0]);
            break;
        case 0x12C:
            func_80042FD0(&D_8016F110[arg0]);
            break;
        case 0x124:
            func_DF4260_801878D8(&D_8016F110[arg0]);
            break;
        case 0x125:
            func_DF4260_8018BE7C(&D_8016F110[arg0]);
            break;
        case 0x12E:
            func_E16C50_80187754(&D_8016F110[arg0]);
            break;
        case 0xE7:
            func_E6A810_8018B96C(&D_80163FE0[arg0]);
            break;
        case 0xE8:
            func_E6A810_8018ADC4(&D_80163FE0[arg0]);
            break;
        case 0xE9:
            func_E6A810_80189B80(&D_80163FE0[arg0]);
            break;
        case 0xE5:
            func_E6A810_8018BFB0(&D_80163FE0[arg0]);
            break;
        case 0xE3:
            func_E6A810_8018E3CC(&D_80163FE0[arg0]);
            break;
        case 0xE4:
            func_E6A810_8018E5E8(&D_80163FE0[arg0]);
            break;
        case 0xA9:
            func_E6A810_8018EFF0(&D_80163400[arg0]);
            break;
        case 0x132:
            func_E6A810_8018FA48(&D_8016F110[arg0]);
            break;
        case 0xF0:
            func_E16C50_801915A4(&D_80163FE0[arg0]);
            break;
        case 0xF1:
            func_E16C50_80191BB8(&D_80163FE0[arg0]);
            break;
        case 0x133:
            func_E16C50_801932AC(&D_8016F110[arg0]);
            break;
        case 0xFA:
            func_E16C50_8019B1F0(&D_80163FE0[arg0]);
            break;
        case 0xFB:
            func_E16C50_8019B810(&D_80163FE0[arg0]);
            break;
        case 0xFD:
            func_E16C50_8019C200(&D_80163FE0[arg0]);
            break;
        case 0xFF:
            func_E16C50_801AD688(&D_80163FE0[arg0]);
            break;
        case 0x100:
            func_E16C50_801AE3AC(&D_80163FE0[arg0]);
            break;
        case 0x101:
            func_E16C50_801AF9FC(&D_80163FE0[arg0]);
            break;
        case 0x13E:
            func_E16C50_801B10F8(&D_8016F110[arg0]);
            break;
        case 0x103:
            func_E16C50_801B6344(&D_80163FE0[arg0]);
            break;
        case 0x106:
            func_E16C50_801B6E54(&D_80163FE0[arg0]);
            break;
        case 0x104:
            func_E16C50_801B7AF0(&D_80163FE0[arg0]);
            break;
        case 0x39:
            func_E6A810_8018F0D8(&D_80161B00[arg0]);
            break;
        case 0x13F:
            func_DF4260_801935CC(&D_8016F110[arg0]);
            break;
        case 0x118:
            func_DF4260_8019250C(&D_80163FE0[arg0]);
            break;
        case 0x119:
        case 0x11A:
            func_DF4260_80192CB0(&D_80163FE0[arg0]);
            break;
        case 0x11B:
            func_DF4260_80192EA4(&D_80163FE0[arg0]);
            break;
        case 0x11C:
            func_DF4260_801933B4(&D_80163FE0[arg0]);
            break;
        case 0x109:
            func_E16C50_801BA57C(&D_80163FE0[arg0]);
            break;
        case 0x10B:
            func_E16C50_801BB26C(&D_80163FE0[arg0]);
            break;
    }
}

void func_800652CC(Object_80* arg0) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    if ((D_801784AC == 4) && (arg0->unk_48 == 0)) {
        func_E6A810_801B6E20(arg0->obj.pos.x, arg0->obj.pos.z + D_80177D20, &sp2C, &sp24, &sp28);
        arg0->obj.pos.y = sp24 + 3.0f;
        arg0->obj.rot.x = (sp2C * 180.0f) / M_PI;
        arg0->obj.rot.z = (sp28 * 180.0f) / M_PI;
        arg0->unk_48 += 1;
    }
}

void func_80065380(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    func_800613C4(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 182;
    arg0->unk_0BC = (s32) (Rand_ZeroOne() * 10.0f) + 10;
    arg0->unk_0C2 = 30;
    arg0->unk_0E8 = arg4;
    arg0->unk_0EC = arg5;
    arg0->unk_0F0 = arg6;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_046 = 0xFF;
    arg0->unk_048 = 900;
    arg0->obj.rot.z = Rand_ZeroOne() * 360.0f;
    arg0->obj.rot.y = Rand_ZeroOne() * 360.0f;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
}

void func_8006546C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80163FE0); i++) {
        if (D_80163FE0[i].obj.status == 0) {
            func_80065380(&D_80163FE0[i], arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        }
    }
}

void func_800654E4(Object* arg0) {
    f32 temp_fs0;
    f32 temp_fs1;
    s32 var_s1;

    func_8007D2C8(arg0->pos.x, arg0->pos.y, arg0->pos.z, 12.0f);
    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        func_8006546C(arg0->pos.x, arg0->pos.y, arg0->pos.z, (Rand_ZeroOne() - 0.5f) * 40.0f,
                      (Rand_ZeroOne() - 0.5f) * 40.0f, Rand_ZeroOne() * -20.0f);
    }
}

void func_800655C8(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    func_800613C4(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 190;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_0B4 = arg4;
    arg0->unk_0BE = 50;
    if (arg0->unk_0B4 == 1) {
        arg0->unk_0BE = 30;
    }
    arg0->unk_124.y = 15.0f;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
}

void func_8006566C(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80163FE0); i++) {
        if (D_80163FE0[i].obj.status == 0) {
            func_800655C8(&D_80163FE0[i], arg0, arg1, arg2, arg3);
            break;
        }
    }
}

#ifdef NON_MATCHING
void func_800656D4(Object_2F4* arg0) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 spC4;
    s32 spB4[3];
    s32 spA8[3];
    Vec3f sp98;
    Vec3f sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    s32 var_ra;
    f32 var_fv0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t9;
    s32 temp_v0;
    s32 i;
    s32 j;

    if (D_80177880 == 1) {
        var_ra = 2;
    } else {
        var_ra = 0;
    }
    if (arg0->unk_058 == 0) {
        if (arg0->obj.id == 0xBE) {
            for (i = 0, j = 1; j < 4; i++, j++) {
                spA8[i] = var_ra + j;
                spB4[i] = D_801778B0[j];
            }
            for (i = 0, j = 1; j < 3; i++, j++) {
                temp_a0 = spB4[i];
                temp_a2 = spB4[j];
                if (spB4[i] < temp_a2) {
                    temp_v0 = spA8[j];
                    spB4[j] = spB4[i];
                    spA8[j] = spA8[i];
                    spB4[i] = temp_a2;
                    spA8[i] = temp_v0;
                }
            }
            switch (D_80177DB0 % 6U) {
                case 0:
                case 1:
                case 2:
                    spC4 = spA8[2];
                    break;
                case 3:
                case 4:
                    spC4 = spA8[1];
                    break;
                case 5:
                    spC4 = spA8[0];
                    break;
            }

            if (((D_80177880 == 1) && (D_801778B0[spC4 - 1] > 0)) || D_801778B0[spC4 + 1] > 0) {
                arg0->unk_054 = spC4;
            } else {
                arg0->unk_054 = 0x2710;
            }
        } else {
            arg0->unk_054 = 0x2710;
        }
        arg0->unk_058 = 1;
    }
    spC4 = arg0->unk_054;
    if ((spC4 == var_ra) || ((var_ra + 1) == spC4) || ((var_ra + 2) == spC4)) {
        arg0->unk_188 = D_80163FE0[spC4].obj.pos.z;
        arg0->unk_184 = D_80163FE0[spC4].obj.pos.y;
        arg0->unk_180 = D_80163FE0[spC4].obj.pos.x;
        if ((fabsf(arg0->obj.pos.x - D_80163FE0[spC4].obj.pos.x) < 400.0f) &&
            (fabsf(arg0->obj.pos.z - D_80163FE0[spC4].obj.pos.z) < 400.0f)) {
            if ((Rand_ZeroOne() * (spC4 - 1)) < 0.6f) {
                D_80163FE0[spC4].unk_078 = 1;
            }
        }

    } else {
        arg0->unk_188 = D_80178280[0].unk_138;
        arg0->unk_184 = D_80178280[0].unk_078;
        arg0->unk_180 = D_80178280[0].unk_074;
    }
    if (arg0->unk_0BC != 0) {
        Math_SmoothStepToAngle(&arg0->obj.rot.x, 0.0f, 0.3f, 4.0f, 0.001f);
    } else {
        if ((arg0->unk_078 == 0) &&
            ((fabsf(arg0->unk_180 - arg0->obj.pos.x) > 300.0f) || (fabsf(arg0->unk_188 - arg0->obj.pos.z) > 300.0f))) {
            arg0->unk_114 += 5.0f;
            arg0->unk_118 += 8.0f;
            sp80 = sqrtf(SQ(arg0->unk_180 - arg0->obj.pos.x) + SQ(arg0->unk_188 - arg0->obj.pos.z)) * 0.2f;
            if (arg0->unk_0B4 == 1) {
                sp80 = 0.1f;
            }
            spD0 = __sinf(arg0->unk_114 * M_DTOR) * sp80;
            sp88 = __cosf(arg0->unk_118 * M_DTOR) * sp80;
            spD4 = __cosf(arg0->obj.rot.y * M_DTOR) * sp88;
            spCC = -__sinf(arg0->obj.rot.y * M_DTOR) * sp88;
            sp88 = (arg0->unk_180 + spD4) - arg0->obj.pos.x;
            sp84 = (arg0->unk_184 + spD0) - arg0->obj.pos.y;
            sp80 = (arg0->unk_188 + spCC) - arg0->obj.pos.z;
            sp78 = Math_RadToDeg(Math_Atan2F(sp88, sp80));
            sp7C = Math_RadToDeg(-Math_Atan2F(sp84, sqrtf((sp88 * sp88) + (sp80 * sp80))));
            sp84 = Math_SmoothStepToAngle(&arg0->obj.rot.y, sp78, 0.3f, 4.0f, 0.001f);
            Math_SmoothStepToAngle(&arg0->obj.rot.x, sp7C, 0.3f, 4.0f, 0.001f);
        }
        if ((fabsf(arg0->unk_180 - arg0->obj.pos.x) < 60.0f) && (fabsf(arg0->unk_184 - arg0->obj.pos.y) < 60.0f) &&
            (fabsf(arg0->unk_188 - arg0->obj.pos.z) < 60.0f) && ((spC4 == 2) || (spC4 == 3) || (spC4 == 4))) {
            D_80163FE0[spC4].unk_0D0 = 1;
            D_80163FE0[spC4].unk_0D6 = 20;
            D_80163FE0[spC4].unk_0D4 = 2;
            func_8007A6F0(&arg0->obj.pos, 0x2903A008);
            func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f);
            func_80060FBC(&arg0->obj, &arg0->unk_100);
        }
    }
    Math_Vec3fFromAngles(&sp98, arg0->obj.rot.x, arg0->obj.rot.y, arg0->unk_124.y);
    arg0->unk_0E8 = sp98.x;
    arg0->unk_0EC = sp98.y;
    arg0->unk_0F0 = sp98.z - D_80177D08;
    if (arg0->unk_0B4 == 0) {
        arg0->obj.rot.z += 5.0f;
    }
    if (arg0->unk_0B4 == 1) {
        if (arg0->unk_0BE == 0) {
            arg0->unk_0BE = 30;
            Math_Vec3fFromAngles(&sp98, arg0->obj.rot.x, arg0->obj.rot.y, 120.0f);
            func_8007F04C(0x161, arg0->obj.pos.x + sp98.x, arg0->obj.pos.y + sp98.y, arg0->obj.pos.z + sp98.z,
                          arg0->obj.rot.x, arg0->obj.rot.y, arg0->obj.rot.z, 0.0f, 0.0f, 0.0f, sp98.x, sp98.y, sp98.z,
                          1.0f);
        }
        var_fv0 = 330.0f;
        if (sp84 < 0.0f) {
            var_fv0 = 30.0f;
        }
        Math_SmoothStepToAngle(&arg0->obj.rot.z, var_fv0, 0.1f, 3.0f, 0.01f);
    }
    if ((D_801784AC == 4) &&
        (func_E6A810_801B6AEC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + D_80177D20) != 0)) {
        func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f);
        func_80060FBC(&arg0->obj, &arg0->unk_100);
    }
    sp8C.x = arg0->unk_0E8;
    sp8C.y = arg0->unk_0EC;
    sp8C.z = arg0->unk_0F0;
    if ((func_8006351C(arg0->unk_040, &arg0->obj.pos, &sp8C, 1) != 0) || (arg0->unk_0D0 != 0) ||
        (arg0->obj.pos.y < (D_80177940 + 10.0f)) || (D_80178280[0].unk_1C8 == 7)) {
        func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 3.0f);
        func_80060FBC(&arg0->obj, &arg0->unk_100);
        if (arg0->unk_0D0 != 0) {
            arg0->unk_044 = 2;
            if ((D_80178234 == 0)) {
                if (D_80177880 == 1) {
                    arg0->unk_044 = 2;
                } else {
                    arg0->unk_044 = 4;
                }
            }
            if (D_80178234 == 3) {
                arg0->unk_044 = 22;
            }
            func_80066254(arg0);
        }
        func_8007A6F0(&arg0->obj.pos, 0x2903A008);
    }
    if (D_80177880 == 0) {
        if (fabsf(arg0->obj.pos.z - D_80178280[0].unk_138) < 100.0f) {
            arg0->unk_078 = 1;
        }
        if (D_80178280[0].unk_040.z < (arg0->obj.pos.z + D_80177D20)) {
            func_80060FBC(&arg0->obj, &arg0->unk_100);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_enmy1/func_800656D4.s")
#endif

void func_800660F0(Object_2F4* arg0) {
    Object_6C* var_s0 = D_801737E0;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_801737E0); i++, var_s0++) {
        if (var_s0->obj.status == 0) {
            func_80061444(var_s0);
            var_s0->obj.status = 1;
            var_s0->obj.id = D_800CFDF4[arg0->unk_044];
            var_s0->obj.pos.x = arg0->obj.pos.x;
            var_s0->obj.pos.y = arg0->obj.pos.y;
            var_s0->obj.pos.z = arg0->obj.pos.z;
            var_s0->unk_4A = 8;
            func_800612B8(&var_s0->unk_1C, var_s0->obj.id);
            if ((var_s0->obj.id == 0x144) || (var_s0->obj.id == 0x147) || (var_s0->obj.id == 0x142)) {
                var_s0->unk_50 = 90.0f;
            }
            if ((var_s0->obj.id >= 0x150) || (var_s0->obj.id == 0x14F)) {
                var_s0->unk_50 = 90.0f;
                func_80019218(0x4900000C, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                var_s0->unk_48 = 1000;
                if (var_s0->obj.id == 0x151) {
                    func_80019218(0x1900302B, &var_s0->unk_5C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        }
    }
}

void func_80066254(Object_2F4* arg0) {
    Object_2F4* var_v0;
    s32 i;

    if (D_801778E8 != 0) {
        if ((arg0->unk_0D4 > 0) && (arg0->unk_0D4 < 5) &&
            !((D_80178768[0] == 0) && (D_80178768[1] == 0) && (D_80178768[2] == 0))) {
            D_80177C30[arg0->unk_0D4 - 1] += arg0->unk_01C.unk_20;
        }
    } else if ((arg0->obj.id != 0xC5) || (arg0->unk_0B6 != 1)) {
        if ((arg0->unk_0D4 == 1) && (arg0->unk_01C.unk_20 != 0)) {
            D_80161A98 += arg0->unk_01C.unk_20;
            D_80177850 = 0xF;
            if ((D_80177880 == 1) && (D_80161A62 != 0)) {
                switch (D_80161A62) {
                    case 9:
                        if (D_80178234 == 0x10) {
                            func_800BA808(gMsg_ID_18031, 0xAA);
                        }
                        /* fallthrough */
                    case 4:
                    case 19:
                    case 29:
                        arg0->unk_044 = 0xE;
                        break;
                    case 14:
                        arg0->unk_044 = 9;
                        break;
                }
                D_80161A62 = 0;
            }
            if (arg0->obj.id == 0xC5) {
                if ((arg0->unk_0E4 >= 4) && (arg0->unk_0E4 < 8)) {
                    func_8002E3E0(arg0);
                }
            }
        }
        if (arg0->unk_044) {
            if (D_800CFE5C[arg0->unk_044] < 0.0f) {
                var_v0 = D_80163FE0;
                for (i = 0, var_v0 = D_80163FE0; i < ARRAY_COUNT(D_80163FE0); i++, var_v0++) {
                    if ((var_v0->obj.status != 0) && (var_v0->unk_040 != arg0->unk_040) &&
                        (arg0->unk_08C == var_v0->unk_08C)) {
                        return;
                    }
                }
                func_800660F0(arg0);
                func_80019218(0x4900000C, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else if (arg0->unk_044 == 0x18) {
                if (D_801778B0[3] > 0) {
                    func_800BA808(gMsg_ID_20261, 0x1E);
                } else if (D_801778B0[2] > 0) {
                    func_800BA808(gMsg_ID_20263, 0x14);
                } else if (D_801778B0[1] > 0) {
                    func_800BA808(gMsg_ID_20262, 0xA);
                }
            } else if (Rand_ZeroOne() <= D_800CFE5C[arg0->unk_044]) {
                func_800660F0(arg0);
            }
        }
    }
}

void func_8006654C(Object_2F4* arg0) {
    arg0->unk_10C = 0.4f;
    if (arg0->obj.pos.y <= D_80177940 + 130.0f) {
        arg0->obj.pos.y = D_80177940 + 130.0f;
        arg0->unk_0EC = 0.0f;
    }
    arg0->unk_0E8 = __sinf(arg0->obj.rot.y * M_DTOR) * (*arg0).unk_114;
    arg0->unk_0F0 = __cosf(arg0->obj.rot.y * M_DTOR) * (*arg0).unk_114;
    switch (arg0->unk_0B8) {
        case 0:
            if (arg0->unk_114 < 20.0f) {
                arg0->unk_114 = arg0->unk_114 + 0.5f;
            }
            arg0->unk_0B6++;
            if (Animation_GetFrameCount(&D_6029528) < arg0->unk_0B6) {
                arg0->unk_0B6 = 0;
            }
            if ((arg0->obj.rot.z < 15.0f) && (arg0->unk_0B6 < 0x14)) {
                arg0->obj.rot.z = arg0->obj.rot.z + 1.0f;
            }
            if ((arg0->obj.rot.z > -15.0f) && (arg0->unk_0B6 >= 0x15)) {
                arg0->obj.rot.z -= 1.0f;
            }
            if ((arg0->unk_0B6 == 0x14) || (arg0->unk_0B6 == 0x28)) {
                arg0->unk_0B8++;
                arg0->unk_0BC = 0x14;
            }
            break;
        case 1:
            if (arg0->obj.rot.z > 0.0f) {
                arg0->obj.rot.z = arg0->obj.rot.z - 0.5f;
            }
            if (arg0->obj.rot.z < 0.0f) {
                arg0->obj.rot.z += 0.5f;
            }
            if (arg0->unk_114 > 0.0f) {
                arg0->unk_114 = arg0->unk_114 - 0.3f;
            }
            if (arg0->unk_0BC == 0) {
                arg0->unk_0B8 = 0;
            }
            break;
    }
    arg0->unk_110 = 0.8f;
    if (arg0->unk_0D0 != 0) {
        arg0->obj.status = 3;
        arg0->unk_0EC = (Rand_ZeroOne() * 5.0f) + 6.0f;
        if (arg0->unk_0D0 == 2) {
            arg0->unk_0EC = -2.0f;
        }
        arg0->unk_0F0 = -15.0f;
        arg0->unk_10C = 0.5f;
        func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y + 30.0f, arg0->obj.pos.z, 13.0f);
        func_80019218(0x2903A008, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_8006684C(Object_2F4* arg0) {
    s32 pad;

    if (arg0->unk_0BE != 0) {
        arg0->unk_0F0 = 0.0f;
        arg0->unk_0E8 = 0.0f;
        arg0->unk_0EC = 0.0f;
        if (arg0->unk_0BE == 1) {
            func_80060FBC(&arg0->obj, &arg0->unk_100);
            arg0->unk_044 = 1;
            func_80066254(arg0);
            func_80019218(0x2903B009, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_80077240(arg0->obj.pos.x, arg0->obj.pos.y + 250.0f, arg0->obj.pos.z, 3);
            D_80161A98 += 3;
            D_80177850 = 0xF;
        }
    } else {
        arg0->obj.rot.x += 11.0f;
        arg0->obj.rot.y += 7.0f;
        if (arg0->unk_0EC < -3.0f) {
            func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y + 30.0f, arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, 7.0f, 5);
            arg0->unk_0BE = 3;
        }
    }
}

void func_800669A0(Object_2F4* arg0) {
    if (arg0->unk_0BC != 0) {
        if (arg0->unk_0BC == 1) {
            func_80060FBC(&arg0->obj, &arg0->unk_100);
        }
    } else {
        arg0->obj.rot.y += 5.0f;
        if (arg0->unk_0D0 != 0) {
            func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y + 130.0f, arg0->obj.pos.z, 8.0f);
            func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y + 130.0f, arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 5);
            arg0->unk_0BC = 4;
            func_8007A6F0(&arg0->obj.pos, 0x1903400F);
        }
    }
}

void func_80066A80(Object_2F4* arg0) {
}

void func_80066A8C(Object_80* arg0) {
    Vec3f sp64;
    Vec3f sp58;
    f32 yf;

    sp64.z = 0.0f;
    sp64.x = -120.0f;
    if (arg0->obj.rot.y > 90.0f) {
        sp64.x = 120.0f;
    }
    for (yf = 0.0f; yf < 680.0f; yf += 100.0f) {
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1);
        sp64.y = yf;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp64, &sp58);
        func_8007D0E0(arg0->obj.pos.x + sp58.x, arg0->obj.pos.y + sp58.y, arg0->obj.pos.z + sp58.z, 4.0f);
    }
}

void func_80066C00(Object_80* arg0) {
    Vec3f sp64;
    Vec3f sp58;
    f32 zf;

    sp64.y = 30.0f;
    sp64.x = -100.0f;
    if (arg0->obj.rot.y > 90.0f) {
        sp64.x = 100.0f;
    }
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0);

    for (zf = -180.0f; zf <= 0.0f; zf += 30.0f) {
        sp64.z = zf;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp64, &sp58);
        func_8007D0E0(arg0->obj.pos.x + sp58.x, arg0->obj.pos.y + sp58.y, arg0->obj.pos.z + sp58.z,
                      Rand_ZeroOne() + 2.0f);
    }
}

void func_80066D5C(Object_80* arg0) {
    switch (arg0->unk_48) {
        case 1:
            func_80066C00(arg0);
            arg0->unk_48++;
            func_80019218(0x2900300F, &arg0->unk_70, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 2:
            arg0->unk_64 += 0.05f;
            arg0->obj.rot.x += arg0->unk_64;
            if (arg0->obj.rot.x >= 90.0f) {
                arg0->obj.rot.x = 90.0f;
                arg0->unk_44 = 40;
                func_80066A8C(arg0);
                arg0->unk_48 = 0;
                D_80178480 = 25;
                func_80019218(0x19130003, &arg0->unk_70, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 0:
            break;
    }
}

void func_80066E80(Object_80* arg0) {
}

void func_80066E8C(Object_4C* arg0) {
    arg0->obj.rot.y += 0.2f;
}

void func_80066EA8(Object_80* arg0) {
    arg0->obj.rot.y = 0.0f;
    if (D_80178280[0].unk_040.x < arg0->obj.pos.x) {
        arg0->obj.rot.y = 271.0f;
    }
}

void func_80066EE4(Object_4C* arg0) {
}

void func_80066EF0(Object_6C* arg0) {
    f32 var_fa1;

    if ((D_80178280[0].unk_1C8 == 7) || (D_80178280[0].unk_1C8 == 0)) {
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    }
    if ((D_80177880 == 0) && (D_80161680 == 0)) {
        var_fa1 = 900.0f;
        if (D_80178280[0].unk_1CC != 0) {
            var_fa1 = 600.0f;
        }
        if (D_80178280[0].unk_0AC + var_fa1 < arg0->obj.pos.x) {
            Math_SmoothStepToF(&arg0->obj.pos.x, D_80178280[0].unk_0AC + var_fa1, 0.1f, 10.0f, 0.01f);
        }
        if (arg0->obj.pos.x < D_80178280[0].unk_0AC - var_fa1) {
            Math_SmoothStepToF(&arg0->obj.pos.x, D_80178280[0].unk_0AC - var_fa1, 0.1f, 10.0f, 0.01f);
        }
    }
    if (arg0->obj.pos.y > 650.0f) {
        Math_SmoothStepToF(&arg0->obj.pos.y, 650.0f, 0.1f, 10.0f, 0.01f);
    }
    if (D_80177C98 == 0) {
        if (arg0->obj.pos.y < D_80177940 + 70.0f) {
            Math_SmoothStepToF(&arg0->obj.pos.y, D_80177940 + 70.0f, 0.1f, 5.0f, 0.01f);
        }
        if ((D_80178234 == 0xD) && (D_80178284 != 0)) {
            arg0->obj.pos.z += 20.0f;
        }
    } else if (arg0->obj.pos.y < -500.0f) {
        Math_SmoothStepToF(&arg0->obj.pos.y, -500.0f, 0.1f, 5.0f, 0.01f);
    }
    if ((D_801778E8 != 0) && (arg0->unk_40 == 0) && (D_801737E0[1].obj.status == 2)) {
        if (fabsf(arg0->obj.pos.x - D_801737E0[1].obj.pos.x) < 200.0f) {
            if (fabsf(arg0->obj.pos.z - D_801737E0[1].obj.pos.z) < 200.0f) {
                arg0->obj.pos.x = arg0->obj.pos.x - 5.0f;
                arg0->obj.pos.z = arg0->obj.pos.z - 5.0f;
                D_801737E0[1].obj.pos.x += 5.0f;
                D_801737E0[1].obj.pos.z += 5.0f;
            }
        }
    }
}

void func_800671D0(Object_6C* arg0) {
    s32 var_v0;
    Vec3f sp40;
    Vec3f sp34;

    Math_SmoothStepToF(&arg0->unk_50, 10.0f, 1.0f, 2.0f, 0.0f);
    if (arg0->unk_50 > 30.0f) {
        var_v0 = 0;
    } else if (arg0->unk_50 > 20.0f) {
        var_v0 = 1;
    } else {
        var_v0 = 7;
    }
    if (!(var_v0 & D_80177DB0)) {
        Matrix_RotateY(gCalcMatrix, D_80177DB0 * 23.0f * M_DTOR, 0);
        sp40.x = 50.0f;
        sp40.y = (Rand_ZeroOne() - 0.5f) * 120.0f;
        sp40.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp40, &sp34);
        func_80078E50(arg0->obj.pos.x + sp34.x, arg0->obj.pos.y + sp34.y, arg0->obj.pos.z + sp34.z, 3.0f);
    }
    arg0->obj.rot.y += arg0->unk_50;
    arg0->obj.rot.y = Math_ModF(arg0->obj.rot.y, 360.0f);
}

void func_80067348(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_800613C4(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 189;
    arg0->unk_0B8 = 70;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->obj.rot.x = arg4;
    arg0->obj.rot.y = arg5;
    arg0->unk_0E8 = arg6;
    arg0->unk_0EC = arg7;
    arg0->unk_0F0 = arg8;
    arg0->unk_0BC = (s32) (Rand_ZeroOne() * 15.0f) + 25.0f;
    arg0->unk_10C = 0.5f;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
}

void func_800674B4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    s32 i;

    for (i = 59; i >= 50; i--) {
        if (D_80163FE0[i].obj.status == 0) {
            func_80067348(&D_80163FE0[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
            break;
        }
    }
}

void func_8006753C(Object_2F4* arg0) {
    UnkStruct_D_80178280* new_var = D_80178280; // fake
    s32 i;

    arg0->obj.rot.y += 1.0f;
    if (D_80177880 == 1) {
        if (D_80178234 == 0x12) {
            Math_SmoothStepToF(&arg0->obj.pos.x, -2000.0f, 0.05f, 60.0f, 0.01f);
            Math_SmoothStepToF(&arg0->obj.pos.y, -200.0f, 0.05f, 3.0f, 0.01f);
            Math_SmoothStepToF(&arg0->obj.pos.z, 0.0f, 0.05f, 0.f, 0.01f);
        } else {
            Math_SmoothStepToF(&arg0->obj.pos.y, 300.0f, 0.05f, 50.0f, 0.01f);
        }
    }
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        arg0->unk_0CE -= arg0->unk_0D6;
        if (arg0->unk_0CE <= 0) {
            func_8007A6F0(&arg0->obj.pos, 0x2903A008);
            func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f);
            if (((new_var[0].unk_49C.unk_00 < 2) || (new_var[0].unk_49C.unk_01 < 2)) && (new_var[0].unk_1CC != 1)) {
                arg0->unk_044 = 0x17;
            } else if (D_80178280[0].unk_264 < 0x80) {
                arg0->unk_044 = 0x19;
            } else if ((D_80161AA8[0] == 0) && (new_var[0].unk_1CC != 1)) {
                arg0->unk_044 = 9;
            } else {
                arg0->unk_044 = 5;
            }
            func_80066254(arg0);
            for (i = 0; i < 6; i++) {
                func_800674B4(D_800CFEC4[i].x + arg0->obj.pos.x, D_800CFEC4[i].y + arg0->obj.pos.y,
                              D_800CFEC4[i].z + arg0->obj.pos.z, D_800CFF0C[i].y + arg0->obj.rot.y,
                              D_800CFF0C[i].x + arg0->obj.rot.x, (Rand_ZeroOne() - 0.5f) * 40.0f,
                              (Rand_ZeroOne() * 10.0f) + 10.0f, (Rand_ZeroOne() - 0.5f) * 40.0f);
                func_800794CC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.6f);
            }
            func_80060FBC(&arg0->obj, &arg0->unk_100);
        }
    }
    D_80175A10[63].unk_00 = 1;
    D_80175A10[63].unk_02 = 0x67;
    D_80175A10[63].pos.x = arg0->obj.pos.x;
    D_80175A10[63].pos.y = arg0->obj.pos.y;
    D_80175A10[63].pos.z = arg0->obj.pos.z;
    D_80175A10[63].unk_10 = 0.0f;
}

void func_80067874(Object_2F4* arg0) {
    s32 i;

    Lights_SetOneLight(&gMasterDisp, -60, -60, 60, 150, 150, 150, 20, 20, 20);
    for (i = 0; i < 6; i++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, D_800CFEC4[i].x, D_800CFEC4[i].y, D_800CFEC4[i].z, 1);
        Matrix_RotateY(gGfxMatrix, D_800CFF0C[i].y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, D_800CFF0C[i].x * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_10177C0);
        Matrix_Pop(&gGfxMatrix);
    }
    Lights_SetOneLight(&gMasterDisp, D_801784DC, D_801784E0, D_801784E4, D_80178548, D_8017854C, D_80178550, D_80178554,
                       D_80178558, D_8017855C);
}

void func_80067A40(void) {
    func_80019218(0x09008023, D_80178280[0].unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    if (D_80178280[0].unk_49C.unk_00 < 2) {
        D_80177D40[0] = 1050;
        D_80178280[0].unk_49C.unk_00 = 2;
    }
    if (D_80178280[0].unk_49C.unk_01 < 2) {
        D_80177D58[0] = 1050;
        D_80178280[0].unk_49C.unk_01 = 2;
    }
    if (gExpertMode) {
        D_80177D10[0] = D_80177D28[0] = 10;
    } else {
        D_80177D10[0] = D_80177D28[0] = 60;
    }
}

void func_80067B1C(Object_6C* arg0) {
    func_80066EF0(arg0);
    func_800671D0(arg0);
    if (arg0->unk_4C != 0) {
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
        func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x4900C024, arg0->unk_4E);
        if (D_80178234 != 0xA) {
            D_80161AA0[arg0->unk_4E]++;
        }
    }
    if (arg0->unk_48 == 1) {
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    }
}

void func_80067BEC(Object_6C* arg0) {
    func_80066EF0(arg0);
    func_800671D0(arg0);
    if (arg0->unk_46 == 0) {
        switch (arg0->obj.id) {
            case 0x147:
                arg0->unk_68 = 18.0f;
                if (arg0->unk_4C != 0) {
                    arg0->unk_4A = 0x32;
                    arg0->unk_46 = 1;
                    arg0->unk_48 = 0x14;
                    arg0->unk_50 = 60.0f;
                    D_80177DA0[arg0->unk_4E]++;
                    func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x49002005, arg0->unk_4E);
                    func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x49002006, arg0->unk_4E);
                }
                break;
            case 0x142:
                arg0->unk_68 = 18.0f;
                if (arg0->unk_4C != 0) {
                    arg0->unk_4A = 50;
                    arg0->unk_46 = 1;
                    arg0->unk_48 = 20;
                    arg0->unk_50 = 60.0f;
                    D_80161AA8[arg0->unk_4E]++;
                    if (D_80161AA8[arg0->unk_4E] >= 3) {
                        D_80161AA8[arg0->unk_4E] = 2;
                    }
                    func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x49002004, arg0->unk_4E);
                    if (gExpertMode) {
                        D_80177D10[arg0->unk_4E] = D_80177D28[arg0->unk_4E] = 10;
                    } else {
                        D_80177D10[arg0->unk_4E] = D_80177D28[arg0->unk_4E] = 60;
                    }
                    D_80177D40[arg0->unk_4E] = 1030;
                    D_80177D58[arg0->unk_4E] = 1030;
                }
                break;
        }
    } else {
        Math_SmoothStepToF(&arg0->unk_68, 2.5f, 1.0f, 0.5f, 0.0f);
        arg0->obj.pos.x += (D_80178280[arg0->unk_4E].unk_074 - arg0->obj.pos.x) * 0.5f;
        if (D_80178280[arg0->unk_4E].unk_1CC == 1) {
            arg0->obj.pos.y += ((D_80178280[arg0->unk_4E].unk_078 + 50.0f) - arg0->obj.pos.y) * 0.5f;
        } else {
            arg0->obj.pos.y += (D_80178280[arg0->unk_4E].unk_078 - arg0->obj.pos.y) * 0.5f;
        }
        arg0->obj.pos.z += (D_80178280[arg0->unk_4E].unk_138 - arg0->obj.pos.z) * 0.5f;
        if (arg0->unk_48 == 0) {
            func_80060FBC(&arg0->obj, &arg0->unk_5C);
        }
    }
}

void func_80067F6C(Object_6C* arg0) {
    if ((D_801778E8 == 0) && ((D_80178280[0].unk_49C.unk_01 < 2) || (D_80178280[0].unk_49C.unk_00 < 2))) {
        arg0->obj.id = 337;
        func_800612B8(&arg0->unk_1C, arg0->obj.id);
        arg0->unk_48 = 2000;
        func_80019218(0x1900302B, &arg0->unk_5C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80067BEC(arg0);
    }
}

void func_80068020(Object_6C* arg0) {
    Vec3f sp4C;
    Vec3f sp40;

    switch (arg0->unk_46) {
        case 0:
            Math_SmoothStepToF(&arg0->unk_68, 0.4f, 1.0f, 0.05f, 0.0f);
            func_80066EF0(arg0);
            func_800671D0(arg0);
            if (arg0->unk_4C != 0) {
                arg0->unk_46 = 1;
                arg0->unk_48 = 0x32;
                if (arg0->obj.id == 0x144) {
                    D_80178280[arg0->unk_4E].unk_26C += 0x20;
                    func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x4900200E, arg0->unk_4E);
                } else if (arg0->obj.id == 0x150) {
                    D_80161A90[0]++;
                    if (D_80161A90[0] == 3) {
                        func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x49008015, arg0->unk_4E);
                    } else if (D_80161A90[0] == 6) {
                        func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x4900C024, arg0->unk_4E);
                        if (D_80178234 != 0xA) {
                            D_80161AA0[arg0->unk_4E]++;
                        }
                        D_80178280[arg0->unk_4E].unk_26C += 0x20;
                        func_80077240(D_80178280[arg0->unk_4E].unk_074, D_80178280[arg0->unk_4E].unk_078,
                                      D_80178280[arg0->unk_4E].unk_138, 0x65);
                    } else {
                        D_80178280[arg0->unk_4E].unk_26C += 0x20;
                        func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x49003013, arg0->unk_4E);
                    }
                } else {
                    D_80178280[arg0->unk_4E].unk_26C += 0x80;
                    func_80060F30(D_80178280[arg0->unk_4E].unk_460, 0x4900200D, arg0->unk_4E);
                }
            }
            if ((arg0->obj.id == 0x150) && (arg0->unk_48 == 1)) {
                func_80060FBC(&arg0->obj, &arg0->unk_5C);
            }
            break;
        case 1:
            if (arg0->unk_48 >= 0x1F) {
                Math_SmoothStepToF(&arg0->unk_68, 1.0f, 1.0f, 0.06f, 0.0f);
            } else {
                Math_SmoothStepToF(&arg0->unk_68, 0.0f, 1.0f, 0.06f, 0.0f);
            }
            arg0->obj.pos.x += (D_80178280[arg0->unk_4E].unk_074 - arg0->obj.pos.x) * 0.5f;
            if (D_80178280[arg0->unk_4E].unk_1CC == 1) {
                arg0->obj.pos.y += (D_80178280[arg0->unk_4E].unk_078 + 50.0f - arg0->obj.pos.y) * 0.5f;
            } else {
                arg0->obj.pos.y += (D_80178280[arg0->unk_4E].unk_078 - arg0->obj.pos.y) * 0.5f;
            }
            if ((D_80178280[0].unk_238 != 0) && (D_80177880 == 0)) {
                arg0->obj.pos.z += (D_80178280[arg0->unk_4E].unk_138 - 300.0f - arg0->obj.pos.z) * 0.3f;
            } else {
                arg0->obj.pos.z += (D_80178280[arg0->unk_4E].unk_138 - arg0->obj.pos.z) * 0.5f;
            }
            arg0->obj.rot.z += 22.0f;
            Math_SmoothStepToAngle(&arg0->obj.rot.y, Math_RadToDeg(-D_80178280[arg0->unk_4E].unk_058), 0.2f, 10.0f,
                                   0.0f);
            if (arg0->unk_48 == 0) {
                func_80060FBC(&arg0->obj, &arg0->unk_5C);
            }
            if (arg0->unk_68 > 0.3f) {
                Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0);
                Matrix_RotateZ(gCalcMatrix, D_80177DB0 * 37.0f * M_DTOR, 1);
                sp4C.x = 0.0f;
                sp4C.y = arg0->unk_68 * 100.0f;
                sp4C.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp4C, &sp40);
                func_80078E50(arg0->obj.pos.x + sp40.x, arg0->obj.pos.y + sp40.y, arg0->obj.pos.z + sp40.z, 3.5f);
            }
            break;
    }
}

void func_800685D8(Object_6C* arg0) {
    func_80068020(arg0);
}

void func_800685F8(Object_6C* arg0) {
    func_80068020(arg0);
}

void func_80068618(Object_6C* arg0) {
    func_80066EF0(arg0);
    func_800671D0(arg0);
    if (arg0->unk_4C != 0) {
        func_80067A40();
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    }
    if (arg0->unk_48 == 1) {
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    }
}

void func_80068688(Object_6C* arg0) {
    func_80066EF0(arg0);
    if (arg0->unk_46 > 0) {
        if (arg0->unk_46 == 1) {
            arg0->obj.rot.z -= 10.0f;
            arg0->obj.pos.x += (D_80178280[arg0->unk_4E].unk_074 - arg0->obj.pos.x) * 0.3f;
            arg0->obj.pos.y += (D_80178280[arg0->unk_4E].unk_078 - arg0->obj.pos.y) * 0.3f;
            arg0->obj.pos.z += (D_80178280[arg0->unk_4E].unk_138 - arg0->obj.pos.z) * 0.3f;
            arg0->unk_68 -= 5.0f;
            if (arg0->unk_68 < 0.0f) {
                arg0->unk_68 = 0.0f;
            }
        }
        arg0->unk_44 -= 10;
        if (arg0->unk_44 < 0) {
            func_80060FBC(&arg0->obj, &arg0->unk_5C);
        }
    } else {
        arg0->unk_68 = 100.0f;
        if (D_80177E80 < 0) {
            arg0->unk_46 = 2;
            arg0->unk_44 = 0xFF;
        } else if (arg0->unk_4C != 0) {
            arg0->unk_46 = 1;
            arg0->unk_44 = 0xFF;
            D_80178280[arg0->unk_4E].unk_27C = 100;
            func_80019218(D_800CFF54[D_80177E80], D_80178280[0].unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (D_80177E80 == 0) {
                D_80178280[0].unk_110 = 0.0f;
            }
            D_80177E80++;
            if (D_80177E80 >= 7) {
                D_80178280[0].unk_1C8 = 8;
                D_80178280[0].unk_1D0 = 0;
                func_80019218(0x1900602A, &D_800C5D28, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_80177930 = 2;
                D_800D3180[D_80178234] = 1;
            }
        }
    }
}

void func_80068914(Object_6C* arg0) {
    s32 i;

    func_80066EF0(arg0);
    arg0->unk_58 -= arg0->unk_44;
    if (arg0->unk_46 > 0) {
        arg0->unk_44++;
        arg0->obj.pos.x += (D_80178280[arg0->unk_4E].unk_074 - arg0->obj.pos.x) * 0.3f;
        if (D_80178280[arg0->unk_4E].unk_1CC == 1) {
            arg0->obj.pos.y += (D_80178280[arg0->unk_4E].unk_078 + 50.0f - arg0->obj.pos.y) * 0.3f;
        } else {
            arg0->obj.pos.y += (D_80178280[arg0->unk_4E].unk_078 - arg0->obj.pos.y) * 0.3f;
        }
        if (D_80178280[0].unk_238 != 0) {
            arg0->obj.pos.z += (D_80178280[arg0->unk_4E].unk_138 - 200.0f - arg0->obj.pos.z) * 0.3f;
        } else {
            arg0->obj.pos.z += (D_80178280[arg0->unk_4E].unk_138 - 100.0f - arg0->obj.pos.z) * 0.3f;
        }
        if (arg0->unk_48 == 0) {
            Math_SmoothStepToF(&arg0->unk_68, 5.0f, 0.2f, 15.0f, 0.01f);
            Math_SmoothStepToF(&arg0->unk_50, 0.0f, 0.1f, 0.03f, 0.0f);
            Math_SmoothStepToF(&arg0->unk_54, 4.0f, 0.1f, 0.2f, 0.01f);
        }
        if (arg0->unk_68 <= 6.5f) {
            func_80060FBC(&arg0->obj, &arg0->unk_5C);
        }
    } else {
        arg0->unk_44 = 2;
        arg0->unk_50 = 1.0f;
        arg0->unk_54 = 1.0f;
        arg0->unk_68 = 100.0f;
        if (arg0->unk_4C != 0) {
            D_80178280[arg0->unk_4E].unk_26C = 0x80;
            arg0->unk_46++;
            arg0->unk_48 = 15;
            D_80161A8C = D_80161A88;
            D_80177CB0 = -arg0->obj.pos.z;
            D_80177CB0 -= 250.0f;
            D_80177CA0 = D_80177DC8;
            D_80161A50 = D_80161684;
            D_80161A9C = D_80161A98;
            for (i = 1; i < 4; i++) {
                D_801778D0[i] = D_801778B0[i];
            }
            func_80019218(0x4900400F, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_80068C48(Object_6C* arg0) {
    if (arg0->unk_4C != 0) {
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
        D_80177E80++;
    }
}

void func_80068C88(Object_6C* arg0) {
    D_80161680 = arg0->obj.id;
    if (D_80178280[0].unk_1C8 != 3) {
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    } else if (((D_80178234 == 1) || (D_80178234 == 2)) && (D_8017827C == 1)) {
        D_80178280[0].unk_1C8 = 7;
        D_80178280[0].unk_1D0 = 0;
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    } else if (D_80178234 == 0xA) {
        D_80178280[0].unk_1C8 = 9;
        D_80178280[0].unk_1D0 = 0;
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    } else if (arg0->unk_46 == 0) {
        if (((arg0->obj.pos.z + D_80177D20) > -2700.0f) && (fabsf(arg0->obj.pos.x - D_80178280[0].unk_074) < 1000.0f)) {
            switch (arg0->obj.id) {
                case 0x14B:
                case 0x14C:
                case 0x14D:
                    break;
                case 0x148:
                    D_80178280[0].unk_228 = 0x30;
                    break;
                case 0x149:
                    D_80178280[0].unk_228 = 0x20;
                    break;
                case 0x14A:
                    D_80178280[0].unk_228 = 0x10;
                    break;
            }
        }
        if (arg0->unk_4C != 0) {
            func_80060FBC(&arg0->obj, &arg0->unk_5C);
            D_80178280[0].unk_0B4 = 0.0f;
            D_80178280[0].unk_210 = arg0->unk_68 * 0.05f;
            switch (arg0->obj.id) {
                case 0x148:
                    if (arg0->obj.pos.x < D_80178280[0].unk_074) {
                        D_80178280[0].unk_118 = -30.0f;
                        D_80178280[0].unk_0B8 = D_80178280[0].unk_0AC + arg0->unk_68;
                    } else {
                        D_80178280[0].unk_118 = 30.0f;
                        D_80178280[0].unk_0B8 = D_80178280[0].unk_0AC - arg0->unk_68;
                    }
                    break;
                case 0x149:
                    D_80178280[0].unk_118 = 30.0f;
                    D_80178280[0].unk_0B8 = D_80178280[0].unk_0AC - arg0->unk_68;
                    break;
                case 0x14A:
                    D_80178280[0].unk_118 = -30.0f;
                    D_80178280[0].unk_0B8 = D_80178280[0].unk_0AC + arg0->unk_68;
                    break;
                case 0x14B:
                    if (arg0->obj.pos.y < D_80178280[0].unk_078) {
                        D_80178280[0].unk_124 = 30.0f;
                        D_80178280[0].unk_0BC = D_80178280[0].unk_0B0 + arg0->unk_68;
                    } else {
                        D_80178280[0].unk_124 = -30.0f;
                        D_80178280[0].unk_0BC = D_80178280[0].unk_0B0 - arg0->unk_68;
                    }
                    break;
                case 0x14C:
                    D_80178280[0].unk_124 = 30.0f;
                    D_80178280[0].unk_0BC = D_80178280[0].unk_0B0 + arg0->unk_68;
                    break;
                case 0x14D:
                    D_80178280[0].unk_124 = -30.0f;
                    D_80178280[0].unk_0BC = D_80178280[0].unk_0B0 - arg0->unk_68;
                    break;
            }
        }
    }
}

void func_80068FE0(Object_4C* arg0) {
    arg0->obj.rot.y = (Math_Atan2F(D_80178280[0].unk_040.x - arg0->obj.pos.x,
                                   D_80178280[0].unk_040.z - (arg0->obj.pos.z + D_80177D20)) *
                       180.0f) /
                      M_PI;
    if (arg0->unk_46 != 0) {
        arg0->obj.status = 0;
        func_8007A6F0(&arg0->obj.pos, 0x1903400F);
        switch (arg0->obj.id) {
            case 0xA1:
                func_8007D074(arg0->obj.pos.x, arg0->obj.pos.y + 160.0f, arg0->obj.pos.z, 4.0f);
                break;
            default:
            case 0xA9:
                func_8007D074(arg0->obj.pos.x, arg0->obj.pos.y + 96.0f, arg0->obj.pos.z, 5.0f);
                break;
        }
    }
}

void func_800690D0(s32 arg0, s32 arg1) {
    switch (arg1) {
        case 0xC8:
            func_8007717C(&D_80163FE0[arg0], arg1);
            break;
        case 0xC5:
            if (D_80178234 == 9) {
                func_E9F1D0_801888F4(&D_80163FE0[arg0], arg1);
            } else {
                func_800763A4(&D_80163FE0[arg0], arg1);
            }
            break;
        case 0xCA:
            func_800763A4(&D_80163FE0[arg0], arg1);
            break;
        case 0xC2:
            func_8006B0A0(&D_80163FE0[arg0], arg1);
            break;
        case 0xBA:
            func_E08400_80187B08(&D_80163FE0[arg0], arg1);
            break;
        case 0xB5:
            func_80060FBC(&D_80163FE0[arg0].obj, &D_80163FE0[arg0].unk_100);
            func_8007D2C8(D_80163FE0[arg0].obj.pos.x, D_80163FE0[arg0].obj.pos.y, D_80163FE0[arg0].obj.pos.z, 20.0f);
            break;
        case 0xB6:
            func_80060FBC(&D_80163FE0[arg0].obj, &D_80163FE0[arg0].unk_100);
            func_8007D2C8(D_80163FE0[arg0].obj.pos.x, D_80163FE0[arg0].obj.pos.y, D_80163FE0[arg0].obj.pos.z, 10.0f);
            func_80066254(&D_80163FE0[arg0]);
            break;
        case 0xC0:
            func_8006684C(&D_80163FE0[arg0]);
            break;
        case 0x132:
            func_E6A810_801990DC(&D_8016F110[arg0], arg1);
            break;
        case 0xE8:
            func_E6A810_8018B720(&D_80163FE0[arg0], arg1);
            break;
        case 0x13F:
            func_E51970_80198594(&D_8016F110[arg0], arg1);
            break;
    }
}

void func_800693E8(Object_2F4* arg0) {
    arg0->obj.pos.x += arg0->unk_0E8;
    arg0->obj.pos.z += arg0->unk_0F0;
    arg0->obj.pos.y += arg0->unk_0EC;
    arg0->unk_0EC -= arg0->unk_10C;
    if ((D_80161AB8 != 0) && (arg0->obj.id != 0xC6) && ((D_80178234 != 0xB) || (arg0->obj.id == 0xC8))) {
        f32 var_fv0 = 4000.0f;

        if ((arg0->obj.id == 0xEC) || (D_80178234 == 0xB) || ((arg0->obj.id == 0xC8) && (arg0->unk_0B4 == 0x38))) {
            var_fv0 = 8000.0f;
        } else if (D_80178280[0].unk_1C8 == 8) {
            var_fv0 = 100000.0f;
        }
        if (((D_80178280[0].unk_040.z + arg0->unk_01C.unk_10) < (arg0->obj.pos.z + D_80177D20)) ||
            ((arg0->obj.pos.z + D_80177D20) < -15000.0f) || (arg0->obj.pos.y < (D_80178280[0].unk_0B0 - var_fv0)) ||
            ((D_80178280[0].unk_0B0 + var_fv0) < arg0->obj.pos.y) ||
            ((D_80178280[0].unk_0AC + var_fv0) < arg0->obj.pos.x) ||
            (arg0->obj.pos.x < (D_80178280[0].unk_0AC - var_fv0))) {
            func_80060FBC(&arg0->obj, &arg0->unk_100);
            switch (arg0->obj.id) {
                case 0xEC:
                    D_801784A4 = 0;
                    break;
                case 0xE5:
                    func_E6A810_8018E3B0(arg0);
                    break;
                case 0xC2:
                    D_80176550[arg0->unk_046] = 0;
                    break;
                case 0xC8:
                    if ((arg0->unk_0B4 >= 0xC8) && (arg0->unk_0B4 < 0x12C)) {
                        D_80176550[arg0->unk_046] = 0;
                    } else if ((arg0->unk_0B4 == 0x26) && (arg0->unk_046 != 2)) {
                        D_80177E80 = -1;
                    }
                    break;
                case 0xFC:
                    D_80161684 = 1;
                    break;
            }
        }
    }
}

void func_80069658(Object_408* arg0) {
    arg0->obj.pos.x += arg0->unk_06C;
    arg0->obj.pos.y += arg0->unk_070;
    arg0->obj.pos.z += arg0->unk_074;
    arg0->unk_070 -= arg0->unk_084;
    if ((D_80161AB8 != 0) && ((arg0->obj.pos.z + D_80177D20) > (arg0->unk_01C.unk_10 - D_80178280[0].unk_040.z))) {
        if (D_80178280[0].unk_040.z) {} // fake
        func_80060FBC(&arg0->obj, &arg0->unk_3FC);
    }
}

void func_800696F8(Object_80* arg0) {
    if (D_80178280[0].unk_1C8 == 2) {
        arg0->obj.pos.z += arg0->unk_60;
        if (arg0->unk_1C.unk_10 < arg0->obj.pos.z) {
            func_80060FBC(&arg0->obj, &arg0->unk_70);
        }
    } else if ((D_80177880 == 0) && (D_80178284 != 2)) {
        f32 temp_fv0 = fabsf(arg0->obj.pos.x - D_80178280[0].unk_040.x);
        f32 var_fa0 = 500.0f;

        if ((arg0->obj.id == 6) || (arg0->obj.id == 7)) {
            var_fa0 = 1000.0f;
        }
        temp_fv0 = ((var_fa0 > temp_fv0) ? 0.0f : (temp_fv0 - var_fa0) * 1.7f);
        if ((fabsf(D_80178280[0].unk_114) > 1.0f) || (D_80178234 == 0xB)) {
            temp_fv0 = 0.0f;
        }
        temp_fv0 -= D_80178280[0].unk_040.z;
        if ((arg0->unk_1C.unk_10 - temp_fv0) < (arg0->obj.pos.z + D_80177D20)) {
            func_80060FBC(&arg0->obj, &arg0->unk_70);
        }
    }
}

void func_80069858(Object_4C* arg0) {
    if (D_80161AB8 != 0) {
        f32 temp_fv0 = fabsf(arg0->obj.pos.x - D_80178280[0].unk_040.x);
        f32 var_fa0 = 500.0f;

        if (((arg0->obj.id == 0xA4) && ((arg0->unk_45 == 6) || (arg0->unk_45 == 7))) || (arg0->obj.id == 8)) {
            var_fa0 = 1000.0f;
        }
        temp_fv0 = ((var_fa0 > temp_fv0) ? 0.0f : (temp_fv0 - var_fa0) * 1.7f);
        temp_fv0 -= D_80178280[0].unk_040.z;
        if ((arg0->unk_1C.unk_10 - temp_fv0) < (arg0->obj.pos.z + D_80177D20)) {
            arg0->obj.status = 0;
        }
    }
}

void func_80069924(Object_8C* arg0) {
    arg0->obj.pos.x += arg0->unk_54;
    arg0->obj.pos.y += arg0->unk_58;
    arg0->obj.pos.z += arg0->unk_5C;
    if (D_80161AB8 != 0) {
        if ((D_80178280[0].unk_040.z + arg0->unk_1C.unk_10) < (arg0->obj.pos.z + D_80177D20)) {
            func_80060FBC(&arg0->obj, &arg0->unk_80);
        } else if ((fabsf(arg0->obj.pos.y - D_80178280[0].unk_040.y) > 25000.0f) ||
                   (fabsf(arg0->obj.pos.x - D_80178280[0].unk_040.x) > 25000.0f)) {
            func_80060FBC(&arg0->obj, &arg0->unk_80);
        }
    }
}

void func_80069A10(Object_6C* arg0) {
    if (D_80161AB8 != 0) {
        f32 temp = (0.0f - D_80178280[0].unk_040.z);

        if ((arg0->unk_1C.unk_10 - temp) < (arg0->obj.pos.z + D_80177D20)) {
            func_80060FBC(&arg0->obj, &arg0->unk_5C);
            if ((arg0->obj.id == 326) && (arg0->unk_46 == 0)) {
                D_80177E80 = -1;
            }
        }
    }
}

void func_80069AAC(Object_2F4* arg0) {
    s32 i;

    if (arg0->unk_0BC != 0) {
        arg0->unk_0BC--;
    }
    if (arg0->unk_0BE != 0) {
        arg0->unk_0BE--;
    }
    if (arg0->unk_0C0 != 0) {
        arg0->unk_0C0--;
    }
    if (arg0->unk_0C2 != 0) {
        arg0->unk_0C2--;
    }
    if (arg0->unk_0C6 != 0) {
        arg0->unk_0C6--;
    }
    if (D_801778E8 != 0) {
        for (i = 0; i < D_801778A8; i++) {
            if (arg0->unk_0CA[i] != 0) {
                if (!(gCurrentInput[i].button & 0x8000)) {
                    arg0->unk_0CA[i]--;
                }
                D_801779C8[i] = 0;
            }
        }
    } else if (arg0->unk_0CA[0] != 0) {
        if (!(gCurrentInput[D_80177AF8].button & 0x8000)) {
            arg0->unk_0CA[0]--;
        }
        D_801779C8[0] = 0;
    }
    if (arg0->unk_0C4 != 0) {
        arg0->unk_0C4--;
    }
    switch (arg0->obj.status) {
        case 1:
            arg0->obj.status = 2;
            func_80063F90(arg0->unk_040, arg0->obj.id);
            if (arg0->obj.id != 0xFC) {
                func_800693E8(arg0);
            }
            break;
        case 2:
            func_800693E8(arg0);
            if ((arg0->obj.status != 0) && (arg0->unk_01C.action != NULL)) {
                arg0->unk_01C.action(&arg0->obj);
            }
            break;
        case 3:
            func_800693E8(arg0);
            if (arg0->obj.status != 0) {
                func_800690D0(arg0->unk_040, arg0->obj.id);
            }
            break;
    }
}

void func_80069CBC(Object_408* arg0) {
    if (arg0->unk_050 != 0) {
        arg0->unk_050--;
    }
    if (arg0->unk_052 != 0) {
        arg0->unk_052--;
    }
    if (arg0->unk_054 != 0) {
        arg0->unk_054--;
    }
    if (arg0->unk_056 != 0) {
        arg0->unk_056--;
    }
    if (arg0->unk_058 != 0) {
        arg0->unk_058--;
    }
    if (arg0->unk_05A != 0) {
        arg0->unk_05A--;
    }
    if (arg0->unk_05C != 0) {
        arg0->unk_05C--;
    }
    switch (arg0->obj.status) {
        case 1:
            arg0->obj.status = 2;
            func_80063F90(arg0->unk_040, arg0->obj.id);
            func_80069658(arg0);
            break;
        case 2:
            func_80069658(arg0);
            if ((arg0->obj.status != 0) && (arg0->unk_01C.action != NULL)) {
                arg0->unk_01C.action(&arg0->obj);
            }
            break;
        case 3:
            func_80069658(arg0);
            if (arg0->obj.status != 0) {
                func_800690D0(arg0->unk_040, arg0->obj.id);
            }
            break;
    }
}

void func_80069DF4(Object_80* arg0) {
    if (arg0->unk_4C != 0) {
        arg0->unk_4C--;
    }
    switch (arg0->obj.status) {
        case 1:
            arg0->obj.status = 2;
            func_80063F90(arg0->unk_40, arg0->obj.id);
            func_800696F8(arg0);
            break;
        case 2:
            func_800696F8(arg0);
            if (arg0->unk_1C.action != NULL) {
                arg0->unk_1C.action(&arg0->obj);
            }
            break;
    }
}

void func_80069E88(Object_4C* arg0) {
    switch (arg0->obj.status) {
        case 1:
            arg0->obj.status = 2;
            func_80063F90(arg0->unk_40, (s32) arg0->obj.id);
            func_80069858(arg0);
            break;
        case 2:
            func_80069858(arg0);
            if (arg0->unk_1C.action != NULL) {
                arg0->unk_1C.action(&arg0->obj);
            }
            break;
        case 3:
            func_80069858(arg0);
            func_800690D0(arg0->unk_40, arg0->obj.id);
            break;
    }
}

void func_80069F30(Object_6C* arg0) {
    if (arg0->unk_48 != 0) {
        arg0->unk_48--;
    }
    if (arg0->unk_4A != 0) {
        arg0->unk_4A--;
    }
    switch (arg0->obj.status) {
        case 1:
            arg0->obj.status = 2;
            func_80063F90(arg0->unk_40, (s32) arg0->obj.id);
            func_80069A10(arg0);
            break;
        case 2:
            func_80069A10(arg0);
            if (arg0->unk_1C.action != NULL) {
                arg0->unk_1C.action(&arg0->obj);
            }
            break;
    }
}

void func_80069FD4(Object_8C* arg0) {
    if (arg0->unk_50 != 0) {
        arg0->unk_50--;
    }
    switch (arg0->obj.status) {
        case 1:
            arg0->obj.status = 2;
            func_80063F90(arg0->unk_40, arg0->obj.id);
            /* fallthrough */
        case 2:
            func_80069924(arg0);
            if ((arg0->obj.status != 0) && (arg0->unk_1C.action != NULL)) {
                arg0->unk_1C.action(&arg0->obj);
            }
            break;
    }
}

void func_8006A06C(UnkStruct_D_80174750* arg0) {
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if (arg0->unk_02 != 0) {
        arg0->unk_02--;
    }
    sp34 = arg0->unk_04 - arg0->unk_10;
    sp30 = arg0->unk_08 - arg0->unk_14;
    sp2C = arg0->unk_0C - arg0->unk_18;
    arg0->unk_20 = Math_Atan2F(sp34, sp2C);
    arg0->unk_1C = -Math_Atan2F(sp30, sqrtf(SQ(sp34) + SQ(sp2C)));
    if (arg0->unk_00 != 4) {
        arg0->unk_24 = sqrtf(SQ(sp34) + SQ(sp30) + SQ(sp2C));
    }
    if (D_80177834 == 7) {
        if (((arg0->unk_00 == 1) || (arg0->unk_00 == 0x65) || (arg0->unk_00 == 0x32)) && (D_80178280[0].unk_1C8 == 3) &&
            (D_80178280[0].unk_1F4 == 0)) {
            Matrix_RotateX(gCalcMatrix, -arg0->unk_1C, 0);
            Matrix_RotateY(gCalcMatrix, -arg0->unk_20, 1);
            sp44.x = D_80178280[D_801778A0].unk_074 - arg0->unk_04;
            sp44.y = D_80178280[D_801778A0].unk_078 - arg0->unk_08;
            sp44.z = D_80178280[D_801778A0].unk_138 - arg0->unk_0C;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            sp38.x += arg0->unk_04;
            sp38.y += arg0->unk_08;
            sp38.z += arg0->unk_0C;
            if ((fabsf(sp38.x - arg0->unk_04) < 30.0f) && (fabsf(sp38.y - arg0->unk_08) < 30.0f) &&
                (sp38.z < arg0->unk_0C) && ((arg0->unk_0C - arg0->unk_24) < sp38.z)) {
                if (D_80178234 == 0xD) {
                    func_800A6CD0(D_80178280, 0, 30);
                } else {
                    func_800A6CD0(D_80178280, 0, 20);
                }
                if (arg0->unk_00 < 100) {
                    arg0->unk_00 = 0;
                }
            }
        }
        if (((arg0->unk_0C + D_80177D20) > 1000.0f) && (D_80177880 != 1)) {
            arg0->unk_00 = 0;
        }
        if (((arg0->unk_00 == 3) || (arg0->unk_00 == 0x32)) && (arg0->unk_02 == 0)) {
            arg0->unk_00 = 0;
        }
    }
}

void func_8006A38C(void) {
    UnkStruct_D_80174750* var_s0;
    s32 var_s1;

    for (var_s1 = 0, var_s0 = D_80174750; var_s1 < ARRAY_COUNT(D_80174750); var_s1++, var_s0++) {
        if (var_s0->unk_00 != 0) {
            func_8006A06C(var_s0);
        }
    }
}

void func_8006A3E8(void) {
    s32 i;
    s32 pad;
    Object_58* var_v0;
    Object_2F4* sp38;
    Object_408* sp34;
    Object_4C* sp30;
    Object_80* sp2C;
    Object_6C* sp28;
    Object_8C* sp24;

    D_80161AB8 = 0;
    if ((D_80177880 == 0) &&
        ((D_80178280[0].unk_1C8 == 1) || (D_80178280[0].unk_1C8 == 3) || (D_80178280[0].unk_1C8 == 4) ||
         (D_80178280[0].unk_1C8 == 8) || (D_80178280[0].unk_1C8 == 9) || (D_80178280[0].unk_1C8 == 6))) {
        D_80161AB8 = 1;
    }
    if (D_80177880 != 1) {
        if ((D_80178488 != 0) && (D_80178280[0].unk_1C8 != 2)) {
            func_80062664();
        }
        for (i = 0, sp2C = D_80161B00; i < ARRAY_COUNT(D_80161B00); i++, sp2C++) {
            if (sp2C->obj.status != 0) {
                sp2C->unk_40 = i;
                func_80069DF4(sp2C);
            }
        }
    } else if (D_801778E8 != 0) {
        for (i = 0, var_v0 = D_801782A8; i < 200; i++, var_v0++) {
            if ((var_v0->obj.status != 0) && (var_v0->obj.id == 0x92)) {
                if (i & 1) {
                    var_v0->obj.rot.y += 0.5f;
                } else {
                    var_v0->obj.rot.y -= 0.5f;
                }
            }
        }
    }
    for (i = 0, sp30 = D_80163400; i < ARRAY_COUNT(D_80163400); i++, sp30++) {
        if (sp30->obj.status != 0) {
            sp30->unk_40 = i;
            func_80069E88(sp30);
        }
    }
    for (i = 0, sp34 = D_8016F110; i < ARRAY_COUNT(D_8016F110); i++, sp34++) {
        if (sp34->obj.status != 0) {
            sp34->unk_040 = i;
            func_80069CBC(sp34);
        }
    }
    for (i = 0, sp38 = D_80163FE0; i < ARRAY_COUNT(D_80163FE0); i++, sp38++) {
        if (sp38->obj.status != 0) {
            sp38->unk_040 = i;
            func_80069AAC(sp38);
        }
    }
    for (i = 0, sp28 = D_801737E0; i < ARRAY_COUNT(D_801737E0); i++, sp28++) {
        if (sp28->obj.status != 0) {
            sp28->unk_40 = i;
            func_80069F30(sp28);
        }
    }
    for (i = 0, sp24 = D_80170130; i < ARRAY_COUNT(D_80170130); i++, sp24++) {
        if (sp24->obj.status != 0) {
            sp24->unk_40 = i;
            func_80069FD4(sp24);
        }
    }
    func_8006A38C();
    for (i = 0; i < ARRAY_COUNT(D_80161670); i++) {
        if (D_80161670[i] != 0) {
            D_80161670[i]--;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_enmy1/D_800D63D0.s")

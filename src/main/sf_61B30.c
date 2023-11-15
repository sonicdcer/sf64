#include "global.h"

extern void func_8001A500(void*);
void func_80062180(ObjectInit* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
void func_80061B68(void);

void func_80060F30(f32* arg0, u32 arg1, u32 arg2) {
    if (D_801778E8 == 0) {
        func_80019218(arg1, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80019218(arg1, arg0, arg2, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_80060FBC(Object* arg0, f32* arg1) {
    arg0->status = 0;
    func_8001A500(arg1);
}

s32 func_80060FE4(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if ((D_80177880 != 1) && (D_80178280[0].unk_1C8 != 2)) {
        return 1;
    }
    Matrix_RotateY(D_8013BBC8, D_80178280[D_801778A0].unk_058, 0);
    sp2C.x = arg0->x - D_80178280[D_801778A0].unk_40.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - D_80178280[D_801778A0].unk_40.z;
    Matrix_MultVec3fNoTranslate(D_8013BBC8, &sp2C, &sp20);

    if ((sp20.z < 1000.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 2000.0f))) {
        return 1;
    }
    return 0;
}

s32 func_80061148(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if (D_80177880 != 1) {
        return 1;
    }
    if (D_80178280[0].unk_1C8 == 7) {
        return func_80060FE4(arg0, arg1);
    }
    Matrix_RotateY(D_8013BBC8, D_80178280[D_801778A0].unk_058, 0);
    sp2C.x = arg0->x - D_80178280[D_801778A0].unk_40.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - D_80178280[D_801778A0].unk_40.z;
    Matrix_MultVec3fNoTranslate(D_8013BBC8, &sp2C, &sp20);

    if ((sp20.z < 0.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 500.0f))) {
        return 1;
    }
    return 0;
}

void func_800612B8(ObjectStruct_1C* arg0, u32 arg1) {
    *arg0 = D_800CC124[arg1];
    arg0->unk_C = SEGMENTED_TO_VIRTUAL(D_800CC124[arg1].unk_C);
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

    for (i = 0; i < 0x4C; i++, var_v0++) {
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

    for (i = 0; i < 0x6C; i++, var_v0++) {
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
            sp28 = D_80178280[0].unk_074 + (sp1C * 400.0f) + (5.0f * D_80178280[0].unk_0C0);
            sp1C = (Rand_ZeroOne() - 0.5f);
            sp24 = D_80178280[0].unk_078 + (sp1C * 400.0f) + (5.0f * D_80178280[0].unk_0C4);
            sp20 = -D_80177D20 - 500.0f;
            if (D_80177D08 < 0.0f) {
                sp20 = -D_80177D20 + 500.0f;
            }
            func_80061958(&D_80170130[i], sp28, sp24, sp20);
            break;
        }
    }
}

void func_80061CD0(void);
void func_80061E48(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3);
void func_80061F0C(Object_2F4* arg0, ObjectInit* arg1, s32 arg2);
void func_80062180(ObjectInit* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
void func_80069AAC(Object_2F4*);

void func_80061B68(void) {
    s32 i;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    for (i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {

            sp1C = (Rand_ZeroOne() - 0.5f);
            sp28 = D_80178280[0].unk_074 + (sp1C * 2000.0f) + (5.0f * D_80178280[0].unk_0C0);
            sp24 = 0;
            while (sp24 <= D_80177940) {
                sp1C = (Rand_ZeroOne() - 0.5f);
                sp24 = D_80178280[0].unk_078 + (sp1C * 2000.0f) + (5.0f * D_80178280[0].unk_0C4);
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
            sp28 = D_80178280[D_801778A0].unk_074 + (sp1C * 3000.0f) + (5.0f * D_80178280[D_801778A0].unk_0C0);
            sp1C = (Rand_ZeroOne() - 0.5f);
            sp24 = D_80178280[D_801778A0].unk_078 + 1000.0f + (sp1C * 500.0f) + (5.0f * D_80178280[D_801778A0].unk_0C4);
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
    arg0->obj.id = 0xB5;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->obj.id = 0xBA;
    }
    if (Rand_ZeroOne() < 0.5f) {
        arg0->obj.id = 0xB6;
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
    Matrix_RotateZ(D_8013BBC8, -D_80177E88.z * M_DTOR, 0);
    Matrix_RotateX(D_8013BBC8, -D_80177E88.x * M_DTOR, 1);
    Matrix_RotateY(D_8013BBC8, -D_80177E88.y * M_DTOR, 1);
    sp24.x = arg0->obj.pos.x - D_80177F10.x;
    sp24.y = arg0->obj.pos.y - D_80177F10.y;
    sp24.z = arg0->obj.pos.z - D_80177F10.z;
    Matrix_MultVec3fNoTranslate(D_8013BBC8, &sp24, &arg0->unk_2DC);
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
                    D_801BA1E8 = 99;
                    break;
                case 404:
                    D_801BA1E8 = 0;
                    break;
                case 405:
                    D_801BA1E8 = 98;
                    break;
                case 402:
                    D_801A7F78 = arg0->unk_E * 0.1f;
                    D_801A7F60 = -(f32) arg0->unk_A;
                    break;
                case 400:
                    D_801782B8 += 1;
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
    var_s0 = D_80177CA0 - 0x28;
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

    if ((D_80178280->unk_210 != 0) && (D_80178280->unk_118 < 0.0f)) {
        var_fs1 = 10000.0f;
    }
    if ((D_80178280->unk_210 != 0) && (D_80178280->unk_118 > 0.0f)) {
        var_fs2 = -10000.0f;
    }
    D_80161680 = 0;

    for (i = 0, var_s0_2 = &D_80178310[D_80177DC8]; i < 0x2710; i++, D_80177DC8++, var_s0_2++) {
        if ((var_s0_2->unk_10 >= 0) && D_80177D20 <= var_s0_2->unk_0 && var_s0_2->unk_0 <= D_80177D20 + 200.0f) {
            if ((D_80178234 == 6) && (var_s0_2->unk_10 >= 0x3E8)) {
                if (((var_s0_2->unk_C < 180.0f) && (var_s0_2->unk_6 < D_80178280->unk_0AC)) ||
                    ((var_s0_2->unk_C > 180.0f) && (D_80178280->unk_0AC < var_s0_2->unk_6))) {
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
                D_80170130[i].obj.id = 0x15C;
                D_80170130[i].obj.pos.x = arg0;
                D_80170130[i].obj.pos.y = D_80177940 + 3.0f;
                D_80170130[i].obj.pos.z = arg1;
                D_80170130[i].unk_70 = 10.0f;
                D_80170130[i].unk_6C = arg3;
                D_80170130[i].unk_44 = 0x50;
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
                D_80170130[i].unk_44 = 0x78;
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
                Matrix_RotateZ(D_8013BBC8, -var_fa0 * M_DTOR, 0);
                Matrix_RotateX(D_8013BBC8, -var_fs1 * M_DTOR, 1);
                Matrix_RotateY(D_8013BBC8, -var_fs2 * M_DTOR, 1);
                Matrix_RotateZ(D_8013BBC8, -arg2->rot.z * M_DTOR, 1);
                Matrix_RotateX(D_8013BBC8, -arg2->rot.x * M_DTOR, 1);
                Matrix_RotateY(D_8013BBC8, -arg2->rot.y * M_DTOR, 1);
                if ((arg3 != 0.0f) || (arg4 != 0.0f) || (arg5 != 0.0f)) {
                    Matrix_RotateZ(D_8013BBC8, -arg5 * M_DTOR, 1);
                    Matrix_RotateX(D_8013BBC8, -arg3 * M_DTOR, 1);
                    Matrix_RotateY(D_8013BBC8, -arg4 * M_DTOR, 1);
                }
                sp80.x = arg0->x - arg2->pos.x;
                sp80.y = arg0->y - arg2->pos.y;
                sp80.z = arg0->z - arg2->pos.z;
                Matrix_MultVec3fNoTranslate(D_8013BBC8, &sp80, &sp74);
                var_fa1 = arg2->pos.x + sp74.x;
                var_ft4 = arg2->pos.y + sp74.y;
                var_ft5 = arg2->pos.z + sp74.z;
            }
            if ((var_s0[1] + 20.0f) > (fabsf((var_s0[0] + arg2->pos.z) - var_ft5)) &&
                ((var_s0[5] + 20.0f) > fabsf((var_s0[4] + arg2->pos.x) - var_fa1)) &&
                ((var_s0[3] + 10.0f) > fabsf((var_s0[2] + arg2->pos.y) - var_ft4))) {
                return 1;
            }
            var_s0 += 6;
        }
    }
    return 0;
}

s32 func_800998FC(Vec3f*, Vec3f*, s32, s32, Vec3f*, Vec3f*);
s32 func_800A3690(Vec3f*, Vec3f*, s32, Vec3f*);
s32 func_8006326C(Vec3f* arg0, s32 arg1, s32 arg2, Object* arg3);
s32 func_800631A8(Vec3f*, f32*, Vec3f*);

s32 func_800631A8(Vec3f* arg0, f32* arg1, Vec3f* arg2) {
    if (((s32) arg1[0] != 0) && (fabsf((arg1[1] + arg2->z) - arg0->z) < (arg1[2] + 20.0f)) &&
        (fabsf((arg1[5] + arg2->x) - arg0->x) < (arg1[6] + 20.0f)) &&
        (fabsf((arg1[3] + arg2->y) - arg0->y) < (arg1[4] + 20.0f))) {
        return 1;
    }
    return 0;
}

s32 func_8006326C(Vec3f* arg0, s32 arg1, s32 arg2, Object* arg3) {
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    s32 var_s1;
    s32 pad1;
    Vec3f sp30;
    s32 pad2;

    sp74.x = arg0->x - arg3->pos.x;
    sp74.z = arg0->z - arg3->pos.z;
    if (((fabsf(sp74.x) < 1100.0f) && (fabsf(sp74.z) < 1100.0f)) || (arg2 == 0xB4)) {
        sp74.y = arg0->y - arg3->pos.y;
        Matrix_RotateY(D_8013BBC8, -arg3->rot.y * 0.017453292f, 0U);
        Matrix_MultVec3fNoTranslate(D_8013BBC8, &sp74, &sp68);
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
                return 1;
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
                return 1;
            }
        }
    }
    return 0;
}

s32 func_8006351C(s32 arg0, Vec3f* arg1, s32 arg2, s32 arg3) {
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
                    if (func_80062DBC(arg1, var_s0->unk_1C.unk_C, &var_s0->obj, 0.0f, 0.0f, 0.0f)) {
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
                if (func_80062DBC(arg1, var_s0_2->unk_1C.unk_C, &var_s0_2->obj, 0.0f, 0.0f, 0.0f)) {
                    return i + 10;
                }
            }
        }
    }
    var_s0_3 = D_80163400;
    for (i = 0; i < ARRAY_COUNT(D_80163400); i++, var_s0_3++) {
        if ((var_s0_3->obj.status == 2) && (fabsf(arg1->x - var_s0_3->obj.pos.x) < 500.0f) &&
            (fabsf(arg1->z - var_s0_3->obj.pos.z) < 500.0f) &&
            func_800631A8(arg1, var_s0_3->unk_1C.unk_C, &var_s0_3->obj.pos)) {
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
                            if (func_80062DBC(arg1, var_s0_4->unk_01C.unk_C, &var_s0_4->obj, 0.0f, 0.0f, 0.0f)) {
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
                    if (func_80062DBC(arg1, var_s0_5->unk_01C.unk_C, &var_s0_5->obj, var_s0_5->unk_2E8.x,
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
                    if (func_800631A8(arg1, var_s0_5->unk_01C.unk_C, &var_s0_5->obj.pos)) {
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
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
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

void func_80063D58(Object_80* arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80063D58.s")

void func_80063E5C(Object_80* arg0, f32* arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80063E5C.s")

void func_80063F4C(s32 arg0) {
}

void func_80063F58(Object_6C* arg0) {
    arg0->unk_68 = arg0->obj.rot.z * 100.0f;
}

void func_80063F74(Object_6C* arg0) {
    arg0->unk_68 = arg0->obj.rot.z * 100.0f;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80063F90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800652CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80065380.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006546C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800654E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800655C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006566C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800656D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800660F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066254.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006654C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006684C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800669A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066A80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066A8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066C00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066D5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066E80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066E8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066EA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066EE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80066EF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800671D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80067348.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800674B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006753C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80067874.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80067A40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80067B1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80067BEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80067F6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80068020.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800685D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800685F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80068618.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80068688.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80068914.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80068C48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80068C88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80068FE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800690D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800693E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069658.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_800696F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069858.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069924.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069A10.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069AAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069CBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069DF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069E88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069F30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_80069FD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006A06C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006A38C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/func_8006A3E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_61B30/D_800D63D0.s")

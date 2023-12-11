#include "global.h"

s32 D_801613A0;

s32 D_800C9E90[28] = {
    0x8012, 0x8013, 0x8015, 0x8017, 0x8017, 0x8019, 0x8018, 0x801B, 0x8016, 0x8018, 0x8012, 0x8020, 0x8014, 0x801E,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

const f32 D_800D55D0[] = { 6000.0f, 18000.0f, -6000.0f, -18000.0f };

void func_80042EC0(Object_408* arg0) {
    s32 var_a3;
    f32 var_fv0;

    if (D_801613A0 < 0xF00) {
        var_a3 = 10;
    } else if (D_801613A0 < 0x1680) {
        var_a3 = 5;
    } else if (D_801613A0 < 0x1E00) {
        var_a3 = 2;
    } else if (D_801613A0 < 0x2580) {
        var_a3 = 1;
    } else {
        var_a3 = 0;
    }
    if (var_a3 != 0) {
        var_fv0 = 0.0f;
        if (arg0->obj.id == 292) {
            var_fv0 = 300.0f;
        } else if (arg0->obj.id == 306) {
            var_fv0 = 200.0f;
        }
        func_80077240(arg0->obj.pos.x, arg0->obj.pos.y + var_fv0, arg0->obj.pos.z, var_a3);
    }
    gHitCount += var_a3 + 1;
    D_80177850 = 0xF;
}

void func_80042FAC(Object_408* arg0) {
}

void func_80042FB8(Object_408* arg0) {
}

void func_80042FC4(Object_408* arg0) {
}

void func_80042FD0(Object_408* arg0) {
}

void func_80042FDC(Object_408* arg0) {
}

void func_80042FE8(Object_408* arg0) {
}

void func_80042FF4(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8,
                   f32 arg9, f32 argA, s32 argB, s32 argC) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 189;
    arg0->unk_0B8 = argB;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->obj.rot.x = arg4;
    arg0->obj.rot.y = arg5;
    arg0->obj.rot.z = arg6;
    arg0->unk_0E8.x = arg7;
    arg0->unk_0E8.y = arg8;
    arg0->unk_0E8.z = arg9;
    arg0->unk_110 = argA;
    arg0->unk_0BC = argC;
    arg0->unk_0BE = 20;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
    if (D_80177C98 == 0) {
        arg0->unk_10C = 0.5f;
    }
}

void func_800430DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9,
                   s32 argA, s32 argB) {
    s32 i;

    for (i = 59; i >= 0; i--) {
        if (gObjects2F4[i].obj.status == 0) {
            func_80042FF4(&gObjects2F4[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, argA, argB);
            return;
        }
    }
}

void func_80043188(Object_2F4* arg0) {
    arg0->unk_01C.unk_10 = 30000.0f;
}

void func_8004319C(Player* arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_800182F4(0x105000FF);
    func_800182F4(0x115000FF);

    D_80177A80 = 0;
    D_80178448 = arg3 + D_80177D20;
    D_80178440 = arg1;
    D_80178444 = arg2;

    arg0->unk_1C8 = 7;
    arg0->unk_1D0 = 10;
    arg0->unk_1F8 = 50;
    arg0->unk_1FC = 50;
    arg0->unk_000 = 0.0f;
    arg0->unk_004 = 1.0f;
    if (arg0->unk_074 < arg0->unk_0AC) {
        arg0->unk_004 = -1.0f;
    }
    gPlayers[0].unk_0C0.x = 0.0f;
}

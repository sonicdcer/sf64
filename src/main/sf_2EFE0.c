#include "global.h"

void func_80187520(s32, void*);

void func_8002E3E0(UnkStruct_func_80090A00* arg0) {
    s32 var_a3 = 0;

    if (D_80178234 == 0x13) {
        if (D_8015F940 < 0xF00) {
            var_a3 = 0x32;
        } else if (D_8015F940 < 0x1680) {
            var_a3 = 0x1E;
        } else if (D_8015F940 < 0x1E00) {
            var_a3 = 0x14;
        } else if (D_8015F940 < 0x2580) {
            var_a3 = 0xA;
        }
    } else if (D_8015F940 < 0xF00) {
        var_a3 = 0xA;
    } else if (D_8015F940 < 0x1680) {
        var_a3 = 5;
    } else if (D_8015F940 < 0x1E00) {
        var_a3 = 2;
    } else if (D_8015F940 < 0x2580) {
        var_a3 = 1;
    }
    if (var_a3 != 0) {
        func_80077240(arg0->unk_000.pos.x, arg0->unk_000.pos.y, arg0->unk_000.pos.z, var_a3);
    }
    D_80161A98 += var_a3;
    D_80177850 = 0xF;
}

s32 func_8002E4F8(u16* arg0, s32 arg1) {
    if ((D_8017829C == 0) && (D_80178280[0].unk_1C8 != 0)) {
        func_800BA808(arg0, arg1);
        return 1;
    } else {
        return 0;
    }
}

void func_8002E548(void) {
    if (D_8015F93C != 0) {
        s32 sp24 = D_8015F930[1];

        func_8008E51C(D_8015F930, D_8015F944);
        if ((D_8015F930[0] == 0) && (sp24 != D_8015F930[1]) && (D_8015F930[1] < 15)) {
            func_80019218(0x4900C02A, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_8002E5E0(void* arg0) {
    func_80187520(0x5B, arg0);
}

void func_8002E604(void* arg0) {
    func_80187520(0x5C, arg0);
}

void func_8002E628(void* arg0) {
    func_80187520(0x5D, arg0);
}

void func_8002E64C(void* arg0) {
    func_80187520(0x5E, arg0);
}

void func_8002E670(void* arg0) {
    func_80187520(0x5F, arg0);
}

void func_8002E694(void* arg0) {
    func_80187520(0x60, arg0);
}

void func_8002E6B8(void* arg0) {
    func_80187520(0x61, arg0);
}

void func_8002E6DC(void* arg0) {
    func_80187520(0x62, arg0);
}

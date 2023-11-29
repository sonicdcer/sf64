#include "global.h"

void func_80077240(f32 posX, f32 posY, f32 posZ, s32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80176438); i++) {
        if (D_80176438[i].unk_0 == 0) {
            D_80176438[i].unk_0 = arg3;
            D_80176438[i].unk_4.x = posX;
            D_80176438[i].unk_4.y = posY;
            D_80176438[i].unk_4.z = posZ;
            D_80176438[i].unk_10 = 0.0f;
            D_80176438[i].unk_18 = 65;
            break;
        }
    }
}

void func_8007729C(void) {
    UnkStruct_D_80176438* var_s0;
    s32 i;

    for(i = 0,  var_s0 = D_80176438; i < ARRAY_COUNT(D_80176438); i++, var_s0++) {
        if (var_s0->unk_0 != 0) {
            if (var_s0->unk_18 != 0) {
                var_s0->unk_18 -= 1;
            }
            if (var_s0->unk_18 == 0) {
                var_s0->unk_0 = 0;
            }
            if (D_80177880 == 0) {
                var_s0->unk_4.z -= D_80177D08;
            } else if (D_80178280->unk_1C8 == 3) {
                var_s0->unk_4.x += D_80178280->unk_0C0;
                var_s0->unk_4.z += D_80178280->unk_0C8; 
            }
            if (var_s0->unk_18 < 45) {
                func_8009BC2C(&var_s0->unk_10, 300.0f, 0.1f, 20.0f, 0.0f);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80077404.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80077790.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007783C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800778C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007797C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80077A00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80077A7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80077B78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80077B84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078038.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800780F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800783C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800784B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007868C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007879C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800788B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078A64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078AE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078AEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078B8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078BE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078C84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078CE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078D60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078E50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078EBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078F78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007905C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800794CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007953C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800795AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80079618.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007968C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800798C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800798F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A28C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A3C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A4B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A568.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A5F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A6F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A748.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A774.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A818.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A900.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A994.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AA60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AB50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AC0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ACE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AD58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ADF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AFD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B040.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B0F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B228.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B2BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B344.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B3B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B494.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B5C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B62C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B670.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B67C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B758.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B7E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B8F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B960.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B9DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BB14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BC7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BCE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BDE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BE54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BEE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BF64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BFFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C088.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C1AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C250.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C3B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C484.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C50C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C608.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C688.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C6FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C85C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C8C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C9E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CAF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CC00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CCBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CD7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CEBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CF9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D008.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D074.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D0E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D10C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D1E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D24C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D2C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D2F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D55C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D748.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D8A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D94C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D9DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DA58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DAE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DB70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DED4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E014.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E258.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E298.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E330.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E3E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E45C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E5CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E648.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E6B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E93C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007EBB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ECB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ED54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007EE68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F04C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F11C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F20C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F2FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F5AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F6B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F958.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FBE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FD84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FE88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080360.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008040C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008092C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080ACC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080D04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800815DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008165C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081A8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081B24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081BEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081C5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80082F78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800836C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008377C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800837EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083B8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083C70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083D2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083FA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80084194.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/D_800D7230.s")

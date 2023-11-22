#include "global.h"

void func_80084370(s32 arg0) {
    func_8009F574(&gMasterDisp, 0, 0, arg0, SCREEN_HEIGHT, 0, 0, 0, 255);
    func_8009F574(&gMasterDisp, SCREEN_WIDTH - arg0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

void func_800843FC(s32 arg0) {
    func_8009F574(&gMasterDisp, 0, 0, SCREEN_WIDTH, arg0, 0, 0, 0, 255);
    func_8009F574(&gMasterDisp, 0, SCREEN_HEIGHT - arg0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

void func_80084488(s32 arg0) {
    s32 var_s1;

    func_800B8FA8();
    Matrix_Push(&D_8013B3C0);
    Matrix_Translate(D_8013B3C0, 0.0f, 0.0f, -150.0f, 0);
    for(var_s1 = 0; var_s1 < MIN(360, arg0 * 15); var_s1 += 0xF) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, MIN((arg0 - (var_s1 / 15)) * 15, 255));
        Matrix_Push(&D_8013B3C0);
        Matrix_RotateZ(D_8013B3C0,  var_s1 * M_DTOR, 1);
        Matrix_Scale(D_8013B3C0, 0.53f, 1.0f, 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_Gfx_800D9688);
        Matrix_Pop(&D_8013B3C0);
    }
    Matrix_Pop(&D_8013B3C0);
}

void func_80084688(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        switch (arg0) {
            case 0:
                func_80084488(arg1);
                break;

            case 1:
                func_80084370(arg1);
                break;

            case 2:
                func_800843FC(arg1);
                break;
        }
    }
}

#ifdef NON_MATCHING
// pretty sure this is equivalent, but it's almost certainly not implemented this way. Raw m2c included for those who want to try.
void func_800846F0(FrameBuffer *arg0) {
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t4;
    s32 temp_t4_2;
    s32 temp_t5_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 var_t2;
    u16 *var_v0;
    u16 temp_t5;
    u32 var_a0;
    u32 var_t0;
    u32 var_t1;
    u32 var_v1;
    s32 i;
    s32 j;

    for(i = 0; i < D_80137E7C % 240U; i++) {
        for(j = 0; j < D_80137E7C % 320U; j++) {
            sp64 = RGBA16_RED(arg0->array[i][j]);
            sp50 = RGBA16_GRN(arg0->array[i][j]);
            sp3C = RGBA16_BLU(arg0->array[i][j]);

            sp68 = RGBA16_RED(arg0->array[i][j + 1]);
            sp54 = RGBA16_GRN(arg0->array[i][j + 1]);
            sp40 = RGBA16_BLU(arg0->array[i][j + 1]);

            sp6C = RGBA16_RED(arg0->array[i + 1][j]);
            sp58 = RGBA16_GRN(arg0->array[i + 1][j]);
            sp44 = RGBA16_BLU(arg0->array[i + 1][j]);

            sp70 = RGBA16_RED(arg0->array[i + 1][j + 1]);
            sp5C = RGBA16_GRN(arg0->array[i + 1][j + 1]);
            sp48 = RGBA16_BLU(arg0->array[i + 1][j + 1]);

            sp60 = (sp64 + sp68 + sp6C + sp70) / 4;
            sp4C = (sp50 + sp54 + sp58 + sp5C) / 4;
            sp38 = (sp3C + sp40 + sp44 + sp48) / 4;

            arg0->array[i][j] = RGBA16_PACK(sp60, sp4C, sp38, 0);
        }
    }

    // var_t1 = 0;
    // var_t0 = (u32) D_80137E7C % 240U;
    // if (var_t0 != 0) {
    //     var_a0 = (u32) D_80137E7C % 320U;
    //     var_t2 = 0;
    //     do {
    //         var_v0 = (var_t2 * 2) + arg0;
    //         var_v1 = 0;
    //         if (var_a0 != 0) {
    //             do {
    //                 temp_t5 = *var_v0;
    //                 var_v1 += 1;
    //                 var_v0 += 2;
    //                 temp_t3 = ((s32) temp_t5 >> 0xB) & 0x1F;
    //                 sp64 = temp_t3;
    //                 temp_t4 = ((s32) var_v0->unk-2 >> 6) & 0x1F;
    //                 sp50 = temp_t4;
    //                 temp_t9 = ((s32) var_v0->unk-2 >> 1) & 0x1F;
    //                 sp3C = temp_t9;
    //                 temp_t7 = ((s32) var_v0->unk0 >> 0xB) & 0x1F;
    //                 sp68 = temp_t7;
    //                 temp_t6 = ((s32) var_v0->unk0 >> 6) & 0x1F;
    //                 sp54 = temp_t6;
    //                 temp_t5_2 = ((s32) var_v0->unk0 >> 1) & 0x1F;
    //                 sp40 = temp_t5_2;
    //                 sp20 = temp_t3;
    //                 temp_t3_2 = ((s32) var_v0->unk27E >> 0xB) & 0x1F;
    //                 sp6C = temp_t3_2;
    //                 sp24 = temp_t4;
    //                 temp_t4_2 = ((s32) var_v0->unk27E >> 6) & 0x1F;
    //                 sp58 = temp_t4_2;
    //                 sp28 = temp_t9;
    //                 temp_t9_2 = ((s32) var_v0->unk27E >> 1) & 0x1F;
    //                 sp44 = temp_t9_2;
    //                 sp2C = temp_t7;
    //                 temp_t7_2 = ((s32) var_v0->unk280 >> 0xB) & 0x1F;
    //                 sp70 = temp_t7_2;
    //                 sp30 = temp_t6;
    //                 temp_t6_2 = ((s32) var_v0->unk280 >> 6) & 0x1F;
    //                 sp5C = temp_t6_2;
    //                 sp48 = ((s32) var_v0->unk280 >> 1) & 0x1F;
    //                 sp60 = (s32) (temp_t7_2 + sp20 + temp_t7 + temp_t3_2) / 4;
    //                 temp_t8 = (s32) (temp_t6_2 + sp24 + sp30 + temp_t4_2) / 4;
    //                 sp4C = temp_t8;
    //                 temp_t7_3 = (s32) (sp48 + sp28 + temp_t5_2 + temp_t9_2) / 4;
    //                 sp38 = temp_t7_3;
    //                 var_v0->unk-2 = (u16) ((temp_t7_3 * 2) | (sp60 << 0xB) | (temp_t8 << 6));
    //                 var_a0 = (u32) D_80137E7C % 320U;
    //             } while (var_v1 < var_a0);
    //             var_t0 = (u32) D_80137E7C % 240U;
    //         }
    //         var_t1 += 1;
    //         var_t2 += 0x140;
    //     } while (var_t1 < var_t0);
    // }
    osWritebackDCacheAll();
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_84F70/func_800846F0.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_84F70/D_800D76F0.s")

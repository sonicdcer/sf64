#include "global.h"

void func_80084370(s32 arg0) {
    func_8009F574(&gMasterDisp, 0, 0, arg0, SCREEN_HEIGHT, 0, 0, 0, 255);
    func_8009F574(&gMasterDisp, SCREEN_WIDTH - arg0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

void func_800843FC(s32 arg0) {
    func_8009F574(&gMasterDisp, 0, 0, SCREEN_WIDTH, arg0, 0, 0, 0, 255);
    func_8009F574(&gMasterDisp, 0, SCREEN_HEIGHT - arg0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_84F70/func_80084488.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_84F70/func_800846F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_84F70/D_800D76F0.s")

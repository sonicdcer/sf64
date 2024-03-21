#include "global.h"
#include "assets.h"

void func_80084370(s32 arg0) {
    Graphics_FillRectangle(&gMasterDisp, 0, 0, arg0, SCREEN_HEIGHT, 0, 0, 0, 255);
    Graphics_FillRectangle(&gMasterDisp, SCREEN_WIDTH - arg0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

void func_800843FC(s32 arg0) {
    Graphics_FillRectangle(&gMasterDisp, 0, 0, SCREEN_WIDTH, arg0, 0, 0, 0, 255);
    Graphics_FillRectangle(&gMasterDisp, 0, SCREEN_HEIGHT - arg0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

void func_80084488(s32 arg0) {
    s32 var_s1;

    RCP_SetupDL_12();
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -150.0f, 0);
    for (var_s1 = 0; var_s1 < MIN(360, arg0 * 15); var_s1 += 15) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, MIN((arg0 - (var_s1 / 15)) * 15, 255));
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, var_s1 * M_DTOR, 1);
        Matrix_Scale(gGfxMatrix, 0.53f, 1.0f, 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_Gfx_800D9688);
        Matrix_Pop(&gGfxMatrix);
    }
    Matrix_Pop(&gGfxMatrix);
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
            default:
                (void) "そのような フェード は ない (%d)\n"; // There is no such fade
                break;
        }
    }
}

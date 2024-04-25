#include "global.h"

void func_fade_80084370(s32 arg0) {
    Graphics_FillRectangle(&gMasterDisp, 0, 0, arg0, SCREEN_HEIGHT, 0, 0, 0, 255);
    Graphics_FillRectangle(&gMasterDisp, SCREEN_WIDTH - arg0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

void func_fade_800843FC(s32 arg0) {
    Graphics_FillRectangle(&gMasterDisp, 0, 0, SCREEN_WIDTH, arg0, 0, 0, 0, 255);
    Graphics_FillRectangle(&gMasterDisp, 0, SCREEN_HEIGHT - arg0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0, 255);
}

void func_fade_80084488(s32 arg0) {
    s32 var_s1;

    RCP_SetupDL_12();
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -150.0f, MTXF_NEW);
    for (var_s1 = 0; var_s1 < MIN(360, arg0 * 15); var_s1 += 15) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, MIN((arg0 - (var_s1 / 15)) * 15, 255));
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, var_s1 * M_DTOR, MTXF_APPLY);
        Matrix_Scale(gGfxMatrix, 0.53f, 1.0f, 1.0f, MTXF_APPLY);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_Gfx_800D9688);
        Matrix_Pop(&gGfxMatrix);
    }
    Matrix_Pop(&gGfxMatrix);
}

void func_fade_80084688(s32 fade, s32 progress) {
    if (progress != 0) {
        switch (fade) {
            case 0:
                func_fade_80084488(progress);
                break;
            case 1:
                func_fade_80084370(progress);
                break;
            case 2:
                func_fade_800843FC(progress);
                break;
            default:
                (void) "そのような フェード は ない (%d)\n"; // There is no such fade
                break;
        }
    }
}

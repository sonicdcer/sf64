#include "global.h"

#include "fox_edata_1C.c"

f32* D_edata_800CF964[] = { NULL };

void func_edata_800594F0(Object_80* obj80) {
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Matrix_RotateY(gGfxMatrix, M_PI, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_VE1_6007D90);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_edata_800595D0(Object_80* obj80) {
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Matrix_RotateY(gGfxMatrix, M_PI, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_VE1_6007CF0);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_edata_800596B0(Actor* actor) {
}

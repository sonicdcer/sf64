#include "global.h"

#include "fox_edata_info.c"

f32* D_edata_800CF964[] = { NULL }; // Likely a scrapped array of scenery shadow boxes

void Ve1Wall1_Draw(Ve1Wall1* this) {
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Matrix_RotateY(gGfxMatrix, M_PI, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, aVe1Wall1DL);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void Ve1Wall2_Draw(Ve1Wall2* this) {
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Matrix_RotateY(gGfxMatrix, M_PI, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, aVe1Wall2DL);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void AndJamesTrigger_Draw(AndJamesTrigger* this) {
    /* Unimplemented */
}

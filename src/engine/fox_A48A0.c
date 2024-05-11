#include "global.h"

void func_800A3CA0(void) {
    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, gNextCamEyeX, gNextCamEyeY, gNextCamEyeZ, gNextCamAtX, gNextCamAtY, gNextCamAtZ, 0.0f, 1.0f, 0.0f,
                  MTXF_APPLY);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -200.0f, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, gControllerPress[gPlayerNum].stick_x * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix, gControllerPress[gPlayerNum].stick_y * M_DTOR, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_23();
    Matrix_Pop(&gGfxMatrix);
}

void func_800A3E00(void) {
    switch (D_ctx_80177868) {
        case 0:
            if (gNextGameStateTimer == 0) {
                D_ctx_80177868 = 1;
            }
            break;
        case 1:
            D_ctx_80177868 = 2;
            gDrawMode = DRAW_UNK_7;
            gNextCamAtY = 0.0f;
            gNextCamAtX = gNextCamAtY;
            gNextCamEyeZ = gNextCamAtX;
            gNextCamEyeY = gNextCamEyeZ;
            gNextCamEyeX = gNextCamEyeY;
            gNextCamAtZ = -10.0f;
            break;
        case 2:
            if ((gControllerPress[0].button & START_BUTTON) || (gControllerPress[1].button & START_BUTTON)) {
                Audio_PlayPauseSfx(0);
                D_ctx_80177868 = 3;
                gDrawMode = DRAW_NONE;
                Play_Setup();
                gNextGameStateTimer = 0;
            }
            break;
        case 3:
            if (gNextGameStateTimer == 0) {
                gPlayState = PLAY_UPDATE;
            }
            break;
    }
}

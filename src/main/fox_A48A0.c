#include "global.h"

void func_800A3CA0(void) {
    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0, 0.0f, 1.0f, 0.0f,
                  1);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -200.0f, 1);
    Matrix_RotateY(gGfxMatrix, gControllerPress[gPlayerNum].stick_x * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, gControllerPress[gPlayerNum].stick_y * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_23();
    Matrix_Pop(&gGfxMatrix);
}

void func_800A3E00(void) {
    switch (D_80177868) {
        case 0:
            if (D_Timer_8017783C == 0) {
                D_80177868 = 1;
            }
            break;
        case 1:
            D_80177868 = 2;
            gDrawMode = DRAWMODE_7;
            D_801779B8 = 0.0f;
            D_801779A0 = D_801779B8;
            D_80177988 = D_801779A0;
            D_80177980 = D_80177988;
            D_80177978 = D_80177980;
            D_801779C0 = -10.0f;
            break;
        case 2:
            if ((gControllerPress[0].button & START_BUTTON) || (gControllerPress[1].button & START_BUTTON)) {
                func_8001D638(0);
                D_80177868 = 3;
                gDrawMode = DRAWMODE_0;
                func_800A5844();
                D_Timer_8017783C = 0;
            }
            break;
        case 3:
            if (D_Timer_8017783C == 0) {
                D_80177854 = 2;
            }
            break;
    }
}

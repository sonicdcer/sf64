#include "global.h"

void func_800594F0(Object_80* arg0) {
    func_800B9EB0(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
    Matrix_RotateY(gGfxMatrix, M_PI, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6007D90);
    func_800BA1D0(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
}

void func_800595D0(Object_80* arg0) {
    func_800B9EB0(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
    Matrix_RotateY(gGfxMatrix, M_PI, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6007CF0);
    func_800BA1D0(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
}

void func_800596B0(Object_2F4* arg0) {
}

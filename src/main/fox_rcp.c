#include "global.h"

void func_800B8DD0(Gfx** gfxP, s16 i) {
    gSPDisplayList((*gfxP)++, &((Gfx*) gSetupDLs)[i * 9]);
}

void func_800B8E14(Gfx** gfxP, s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gDPSetFogColor((*gfxP)++, r, g, b, a);
    gSPFogPosition((*gfxP)++, near, far);
}

void dummy_800B8F08(void) {
}

void dummy_800B8F10(void) {
}

void func_800B8F18(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_0]);
}

void func_800B8F48(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_1]);
}

void func_800B8F78(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_11]);
}

void func_800B8FA8(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_12]);
}

void func_800B8FD8(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_2]);
}

void func_800B9008(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_3]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9120(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_4]);
}

void func_800B9150(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_7]);
}

void func_800B9180(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_9]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9298(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_8]);
}

void func_800B92C8(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_13]);
}

void func_800B92F8(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_14]);
}

void func_800B9328(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_17]);
}

void func_800B9358(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_36]);
}

void func_800B9388(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_52]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B94A0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_62]);
}

void func_800B94D0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_37]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B95E8(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_18]);
}

void func_800B9618(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_20]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9730(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_19]);
}

void func_800B9760(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_21]);
}

void func_800B9790(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_33]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B98A8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_34]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B99C0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_40]);
}

void func_800B99F0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_42]);
}

void func_800B9A20(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_43]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9B38(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_60]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9C50(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_47]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9D68(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_66]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9E80(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_55]);
}

void func_800B9EB0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_57]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800B9FC8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_45]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800BA0E0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_46]);
}

void func_800BA110(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_41]);
}

void func_800BA140(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_64]);
}

void func_800BA170(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_64]);
}

void func_800BA1A0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_23]);
}

void func_800BA1D0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_29]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800BA2E8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_30]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void func_800BA400(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_27]);
}

void func_800BA430(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_32]);
}

void func_800BA460(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_73]);
}

void func_800BA490(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_76]);
}

void func_800BA4C0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_74]);
}

void func_800BA4F0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_78]);
}

void func_800BA520(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_81]);
}

void func_800BA550(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_48]);
}

void func_800BA580(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_68]);
}

void func_800BA5B0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_49]);
}

void func_800BA5E0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_44]);
}

void func_800BA610(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_50]);
}

void func_800BA640(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_61]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

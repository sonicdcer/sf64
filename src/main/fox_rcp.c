#include "global.h"

#include "fox_rcp_setup.c"

void RCP_SetupDL(Gfx** gfxP, s16 i) {
    gSPDisplayList((*gfxP)++, &((Gfx*) gSetupDLs)[i * 9]);
}

void RCP_SetFog(Gfx** gfxP, s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gDPSetFogColor((*gfxP)++, r, g, b, a);
    gSPFogPosition((*gfxP)++, near, far);
}

void dummy_800B8F08(void) {
}

void dummy_800B8F10(void) {
}

void RCP_SetupDL_0(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_0]);
}

void RCP_SetupDL_1(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_1]);
}

void RCP_SetupDL_11(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_11]);
}

void RCP_SetupDL_12(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_12]);
}

void RCP_SetupDL_2(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_2]);
}

void RCP_SetupDL_3(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_3]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_4(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_4]);
}

void RCP_SetupDL_7(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_7]);
}

void RCP_SetupDL_9(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_9]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_8(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_8]);
}

void RCP_SetupDL_13(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_13]);
}

void RCP_SetupDL_14(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_14]);
}

void RCP_SetupDL_17(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_17]);
}

void RCP_SetupDL_36(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_36]);
}

void RCP_SetupDL_52(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_52]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_62(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_62]);
}

void RCP_SetupDL_37(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_37]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_18(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_18]);
}

void RCP_SetupDL_20(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_20]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_19(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_19]);
}

void RCP_SetupDL_21(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_21]);
}

void RCP_SetupDL_33(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_33]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_34(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_34]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_40(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_40]);
}

void RCP_SetupDL_42(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_42]);
}

void RCP_SetupDL_43(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_43]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_60(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_60]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_47(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_47]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_66(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_66]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_55(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_55]);
}

void RCP_SetupDL_57(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_57]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_45(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_45]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_46(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_46]);
}

void RCP_SetupDL_41(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_41]);
}

void RCP_SetupDL_64(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_64]);
}

void RCP_SetupDL_64_2(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_64]);
}

void RCP_SetupDL_23(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_23]);
}

void RCP_SetupDL_29(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_29]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_30(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_30]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

void RCP_SetupDL_27(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_27]);
}

void RCP_SetupDL_32(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_32]);
}

void RCP_SetupDL_73(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_73]);
}

void RCP_SetupDL_76(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_76]);
}

void RCP_SetupDL_74(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_74]);
}

void RCP_SetupDL_78(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_78]);
}

void RCP_SetupDL_81(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_81]);
}

void RCP_SetupDL_48(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_48]);
}

void RCP_SetupDL_68(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_68]);
}

void RCP_SetupDL_49(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_49]);
}

void RCP_SetupDL_44(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_44]);
}

void RCP_SetupDL_50(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_50]);
}

void RCP_SetupDL_61(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_61]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogPosition(gMasterDisp++, near, far);
}

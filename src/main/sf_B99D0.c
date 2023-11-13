#include "global.h"

void func_800B8DD0(Gfx** gfxP, s16 i) {
    gSPDisplayList((*gfxP)++, &((Gfx*) gSetupDLs)[i * 9]);
}

void func_800B8E14(Gfx** gfxP, s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gDPSetFogColor((*gfxP)++, r, g, b, a);
    gSPFogFactor((*gfxP)++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
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

void func_800B9008(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_3]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B9120(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_4]);
}

void func_800B9150(void) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_7]);
}

void func_800B9180(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, gSetupDLs[SETUPDL_9]);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
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

void func_800B9388(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D4050);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B94A0(void) {
    gSPDisplayList(gMasterDisp++, D_800D4320);
}

void func_800B94D0(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3C18);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B95E8(void) {
    gSPDisplayList(gMasterDisp++, D_800D36C0);
}

void func_800B9618(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3750);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B9730(void) {
    gSPDisplayList(gMasterDisp++, D_800D3708);
}

void func_800B9760(void) {
    gSPDisplayList(gMasterDisp++, D_800D3798);
}

void func_800B9790(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3AF8);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B98A8(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3B40);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B99C0(void) {
    gSPDisplayList(gMasterDisp++, D_800D3CF0);
}

void func_800B99F0(void) {
    gSPDisplayList(gMasterDisp++, D_800D3D80);
}

void func_800B9A20(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3DC8);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B9B38(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D4290);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B9C50(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3EE8);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B9D68(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D4440);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B9E80(void) {
    gSPDisplayList(gMasterDisp++, D_800D4128);
}

void func_800B9EB0(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D41B8);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800B9FC8(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3E58);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800BA0E0(void) {
    gSPDisplayList(gMasterDisp++, D_800D3EA0);
}

void func_800BA110(void) {
    gSPDisplayList(gMasterDisp++, D_800D3D38);
}

void func_800BA140(void) {
    gSPDisplayList(gMasterDisp++, D_800D43B0);
}

void func_800BA170(void) {
    gSPDisplayList(gMasterDisp++, D_800D43B0);
}

void func_800BA1A0(void) {
    gSPDisplayList(gMasterDisp++, D_800D3828);
}

void func_800BA1D0(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D39D8);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800BA2E8(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3A20);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

void func_800BA400(void) {
    gSPDisplayList(gMasterDisp++, D_800D3948);
}

void func_800BA430(void) {
    gSPDisplayList(gMasterDisp++, D_800D3AB0);
}

void func_800BA460(void) {
    gSPDisplayList(gMasterDisp++, D_800D4638);
}

void func_800BA490(void) {
    gSPDisplayList(gMasterDisp++, D_800D4710);
}

void func_800BA4C0(void) {
    gSPDisplayList(gMasterDisp++, D_800D4680);
}

void func_800BA4F0(void) {
    gSPDisplayList(gMasterDisp++, D_800D47A0);
}

void func_800BA520(void) {
    gSPDisplayList(gMasterDisp++, D_800D4878);
}

void func_800BA550(void) {
    gSPDisplayList(gMasterDisp++, D_800D3F30);
}

void func_800BA580(void) {
    gSPDisplayList(gMasterDisp++, D_800D44D0);
}

void func_800BA5B0(void) {
    gSPDisplayList(gMasterDisp++, D_800D3F78);
}

void func_800BA5E0(void) {
    gSPDisplayList(gMasterDisp++, D_800D3E10);
}

void func_800BA610(void) {
    gSPDisplayList(gMasterDisp++, D_800D3FC0);
}

void func_800BA640(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D42D8);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (500 * 0x100 / (fr - nr)), (((500 - nr) * 256) / (fr - nr)));
}

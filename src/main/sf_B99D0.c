#include "global.h"

// regalloc
// https://decomp.me/scratch/jkzoC
#ifdef NON_MATCHING
void func_800B8DD0(Gfx** gfxP, s16 arg1) {
    gSPDisplayList((*gfxP)++, D_800D31B0[arg1]);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B8DD0.s")
#endif

void func_800B8E14(Gfx** gfxP, s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gDPSetFogColor((*gfxP)++, r, g, b, a);
    gSPFogFactor((*gfxP)++, (0x1F400 / (fr - nr)), (((0x1F4 - nr) * 256) / (fr - nr)));
}

void dummy_800B8F08(void) {
}

void dummy_800B8F10(void) {
}

void func_800B8F18(void) {
    gSPDisplayList(gMasterDisp++, D_800D31B0);
}

void func_800B8F48(void) {
    gSPDisplayList(gMasterDisp++, D_800D31F8);
}

void func_800B8F78(void) {
    gSPDisplayList(gMasterDisp++, D_800D34C8);
}

void func_800B8FA8(void) {
    gSPDisplayList(gMasterDisp++, D_800D3510);
}

void func_800B8FD8(void) {
    gSPDisplayList(gMasterDisp++, D_800D3240);
}

void func_800B9008(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3288);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (0x1F400 / (fr - nr)), (((0x1F4 - nr) * 256) / (fr - nr)));
}

void func_800B9120(void) {
    gSPDisplayList(gMasterDisp++, D_800D32D0);
}

void func_800B9150(void) {
    gSPDisplayList(gMasterDisp++, D_800D33A8);
}

void func_800B9180(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3438);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (0x1F400 / (fr - nr)), (((0x1F4 - nr) * 256) / (fr - nr)));
}

void func_800B9298(void) {
    gSPDisplayList(gMasterDisp++, D_800D33F0);
}

void func_800B92C8(void) {
    gSPDisplayList(gMasterDisp++, D_800D3558);
}

void func_800B92F8(void) {
    gSPDisplayList(gMasterDisp++, D_800D35A0);
}

void func_800B9328(void) {
    gSPDisplayList(gMasterDisp++, D_800D3678);
}

void func_800B9358(void) {
    gSPDisplayList(gMasterDisp++, D_800D3BD0);
}

void func_800B9388(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D4050);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (0x1F400 / (fr - nr)), (((0x1F4 - nr) * 256) / (fr - nr)));
}

void func_800B94A0(void) {
    gSPDisplayList(gMasterDisp++, D_800D4320);
}

void func_800B94D0(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3C18);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (0x1F400 / (fr - nr)), (((0x1F4 - nr) * 256) / (fr - nr)));
}

void func_800B95E8(void) {
    gSPDisplayList(gMasterDisp++, D_800D36C0);
}

void func_800B9618(s32 r, s32 g, s32 b, s32 a, s32 nr, s32 fr) {
    gSPDisplayList(gMasterDisp++, D_800D3750);
    gDPSetFogColor(gMasterDisp++, r, g, b, a);
    gSPFogFactor(gMasterDisp++, (0x1F400 / (fr - nr)), (((0x1F4 - nr) * 256) / (fr - nr)));
}

void func_800B9730(void) {
    gSPDisplayList(gMasterDisp++, D_800D3708);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9760.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9790.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B98A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B99C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B99F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9A20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9B38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9C50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9D68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9E80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9EB0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800B9FC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA0E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA110.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA140.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA170.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA1A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA1D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA2E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA400.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA430.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA460.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA490.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA4C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA4F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA520.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA580.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA5B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA5E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA610.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_B99D0/func_800BA640.s")

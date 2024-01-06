#include "global.h"

extern u16 D_3000380[];
extern u8 D_30001E0[];
extern u8 D_30003A0[];
extern u16 D_30004E0[];
extern u8 D_3000510[];
extern u16 D_30006A0[];
extern u8 D_30006D0[];
extern u16 D_3000810[];
extern u8 D_30013E0[];
extern u8 D_3001420[];
extern u16 D_3003E20[];
extern u8 D_3004010[];
extern u16 D_3004D58[];
extern u8 D_3006C60[];
extern u16 D_3007500[];
extern u8 D_300A470[];
extern u16 D_300B218[];
extern Gfx D_7003830[];
extern u8 D_7003C70[];
extern u8 D_7003E10[];
extern u8 D_7003F10[];
extern u8 D_7004050[];
extern u16 D_7004150[];
extern u8 D_70041F0[];
extern u16 D_70042F0[];
extern u8 D_7004360[];
extern u16 D_7004460[];
extern u8 D_70044D0[];
extern u16 D_7004990[];
extern u8 D_70118E0[];
extern u16 D_70123F8[];

void func_800BC760(void) {
    s32 i;

    Memory_FreeAll();
    func_800A6148();

    for (i = 0; i < gCamCount; i++) {
        Audio_KillSfx(gPlayer[i].unk_460_arr);
        func_8001CA24(i);
    }

    gGameState = GSTATE_INIT;
    D_Timer_8017783C = 2;
    gCamCount = GSTATE_INIT;
    D_80177854 = 0;
    gDrawMode = DRAWMODE_0;
    D_80177AE0 = 0;
    D_8017784C = 0;
    D_80177B40 = 0;
    gBgColor = 0;
    D_80178380[0] = 0;
    D_80178380[1] = 0;
    D_80178380[2] = 0;
    D_80178380[3] = 0;
    gOverlayStage = 0;
    gRadioState = 0;
    gVersusMode = 0;
    D_80178358 = 0;
    D_80178340 = 0xFF;
    D_80177824 = GSTATE_INIT;
}

void func_800BC88C(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_8bIA(&gMasterDisp, &D_7003830, 64, 17, xPos, yPos, scale, scale);
}

void func_800BC8D8(f32 xPos, f32 yPos, f32 scale) {
    s32 i;

    for (i = 0; i < 2; i++) {
        TextureRect_8bCI(&gMasterDisp, D_300A470 + (i * 152 * 8), D_300B218, 152, 8, xPos, yPos + (8 * i * scale),
                         scale, scale);
    }

    TextureRect_8bCI(&gMasterDisp, D_300A470 + (152 * 8 * i), D_300B218, 152, 7, xPos, yPos + (8 * i * scale), scale,
                     scale);
}

// needs in-function data
#ifdef IMPORT_DATA
void func_800BC9DC(f32 xPos, f32 yPos, f32 scale, s32 yScale) {
    u16* D_800D4AA4[] = { (u16*) 0x03008DE0, (u16*) 0x03008DE0, (u16*) 0x03008DE0 };
    u8* D_800D4ABC[] = { (u8*) 0x030087A0, (u8*) 0x03008EC0, (u8*) 0x03009990 };
    s32 D_800D4AB0[] = { 40, 64, 64 };
    s32 i;

    for (i = 0; i < 5; i++) {
        TextureRect_8bCI(&gMasterDisp, D_800D4ABC[yScale] + (D_800D4AB0[yScale] * 8 * i), D_800D4AA4[yScale],
                         D_800D4AB0[yScale], 8, xPos, yPos + (8 * i * scale), scale, scale);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BC9DC.s")
#endif

void func_800BCB44(f32 xPos, f32 yPos, f32 scale) {
    s32 i;

    for (i = 0; i < 2; i++) {
        TextureRect_8bCI(&gMasterDisp, D_3006C60 + (96 * 8 * i), D_3007500, 96, 8, xPos, yPos + (8 * i * scale), scale,
                         scale);
    }
    TextureRect_8bCI(&gMasterDisp, D_3006C60 + (96 * 8 * i), D_3007500, 96, 7, xPos, yPos + (8 * i * scale), scale,
                     scale);
}

// needs in-function data
#ifdef IMPORT_DATA
void func_800BCC48(f32 xPos, f32 yPos, f32 xScale, f32 yScale, s32 arg4) {
    u16* D_800D4AC8[] = { (u16*) 0x03006A68, (u16*) 0x03008598, (u16*) 0x0300C458, (u16*) 0x03005E38 };
    u8* D_800D4AD8[] = { (u8*) 0x03006040, (u8*) 0x030076C0, (u8*) 0x0300B3F0, (u8*) 0x03004F60 };
    s32 D_800D4AE8[] = { 104, 152, 168, 152 };
    s32 i;

    for (i = 0; i < 3; i++) {
        TextureRect_8bCI(&gMasterDisp, D_800D4AD8[arg4] + (D_800D4AE8[arg4] * 8 * i), D_800D4AC8[arg4],
                         D_800D4AE8[arg4], 8, xPos, yPos + (8 * i * yScale), xScale, yScale);
    }
    TextureRect_8bCI(&gMasterDisp, D_800D4AD8[arg4] + (D_800D4AE8[arg4] * 8 * i), D_800D4AC8[arg4], D_800D4AE8[arg4], 1,
                     xPos, yPos + (8 * i * yScale), xScale, yScale);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BCC48.s")
#endif

void func_800BCE24(f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    s32 i;

    for (i = 0; i < 6; i++) {
        TextureRect_8bCI(&gMasterDisp, D_3001420 + (256 * 7 * i), D_3003E20, 256, 7, xPos, yPos + (7 * i * yScale),
                         xScale, yScale);
    }
}

void func_800BCEF8(f32 xPos, f32 yPos, f32 scale) {
    s32 i;

    for (i = 0; i < 12; i++) {
        TextureRect_8bCI(&gMasterDisp, D_3004010 + (136 * 2 * i), D_3004D58, 136, 2, xPos, yPos + (2 * i * scale),
                         scale, scale);
    }
    TextureRect_8bCI(&gMasterDisp, D_3004010 + (136 * 2 * i), D_3004D58, 136, 1, xPos, yPos + (2 * i * scale), scale,
                     scale);
}

void func_800BCFFC(f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    TextureRect_8bCI(&gMasterDisp, D_1013170, D_1013570, 24, 17, xPos, yPos, xScale, yScale);
}

void func_800BD05C(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_4bCI(&gMasterDisp, D_30003A0, D_30004E0, 64, 10, xPos, yPos, scale, scale);
}

void func_800BD0B4(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_4bCI(&gMasterDisp, D_3000510, D_30006A0, 80, 10, xPos, yPos, scale, scale);
}

void func_800BD10C(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_4bCI(&gMasterDisp, D_30006D0, D_3000810, 64, 10, xPos, yPos, scale, scale);
}

void func_800BD164(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_7003C70, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD1B0(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_7003F10, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD1FC(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_7003E10, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD248(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_7004050, D_7004150, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD2A0(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_70041F0, D_70042F0, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD2F8(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_7004360, D_7004460, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD350(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_70044D0, D_7004990, 64, 19, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD3A8(f32 xPos, f32 yPos) {
    s32 i;

    for (i = 0; i < 8; i++) {
        TextureRect_4bCI(&gMasterDisp, D_70118E0 + ((80 * 8 * i) / 2), D_70123F8, 80, 8, xPos, yPos + (i * 8), 1.0f,
                         1.0f);
    }
    TextureRect_4bCI(&gMasterDisp, D_70118E0 + ((80 * 8 * i) / 2), D_70123F8, 80, 7, xPos, yPos + (i * 8), 1.0f, 1.0f);
}

#ifdef IMPORT_DATA
void func_800BD4D4(f32 xPos, f32 yPos, s32 arg2) {
    u8* D_800D4AF8[] = {
        (u8*) 0x05000000, (u8*) 0x05000080, (u8*) 0x05000100, (u8*) 0x05000180, (u8*) D_5000200,
        (u8*) 0x05000280, (u8*) D_5000300,  (u8*) 0x05000380, (u8*) 0x05000400, (u8*) 0x05000480,
    };
    bool var_s2 = false;
    s32 i = 1000;
    s32 j;

    arg2 %= i;

    for (i /= 10; i != 1; i /= 10) {
        j = arg2 / i;
        if (j || (var_s2 == true)) {
            TextureRect_8bIA(&gMasterDisp, D_800D4AF8[j / i], 16, 8, xPos, yPos, 1.0f, 1.0f);
            xPos += 9.0f;
            arg2 %= i;
            var_s2 = true;
        }
    }
    TextureRect_8bIA(&gMasterDisp, D_800D4AF8[arg2 / i], 16, 8, xPos, yPos, 1.0f, 1.0f);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BD4D4.s")
#endif

void func_800BD720(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_30013E0, 8, 8, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD76C(f32 xPos, f32 yPos) {
    TextureRect_4bCI(&gMasterDisp, D_30001E0, D_3000380, 64, 13, xPos, yPos, 1.0f, 1.0f);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BD7C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BD9FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BDA54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BDAA0.s")

void func_800BDE3C(void) {
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BDE44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BE078.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BE300.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BE564.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BE924.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BECA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BED78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BEDDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BEF00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BEFE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BF17C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BF59C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BF750.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BF9AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C024C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0294.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C04DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C075C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C07C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C08D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0970.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0A04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0B0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0C84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0D10.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0E78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C107C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1368.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C15D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1690.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C16A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C16D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C176C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1E9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1ED4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C20B0.s")

void func_800C2190(void) {
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C2198.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C2244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C26C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D9260.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D9264.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D926C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D9274.s")

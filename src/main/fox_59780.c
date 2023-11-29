#include "global.h"
#include "sf64dma.h"

#define SEGMENT_SIZE(segment) ((ptrdiff_t) ((uintptr_t) (segment).end - (uintptr_t) (segment).start))

u8 D_800CA3B0 = 3;

#include "fox_59780_inits.c"

void func_80058B80(void* arg0, void* arg1, ptrdiff_t arg2) {
    s32 i;

    for (i = 0; gDmaTable[i].pRom.end != NULL; i++) {
        if (gDmaTable[i].vRomAddress == arg0) {
            if (gDmaTable[i].compFlag == 0) {
                Lib_DmaRead(gDmaTable[i].pRom.start, arg1, arg2);
            } else {
                Lib_FillScreen(1);
                D_800CA3B0 = 3;
                D_80161A39 = 1;
                Lib_DmaRead(gDmaTable[i].pRom.start, gFrameBuffers, SEGMENT_SIZE(gDmaTable[i].pRom));
                Mio0_Decompress(gFrameBuffers, arg1);
            }
            break;
        }
    }
}

u8 func_80058C48(OverlayInit* ovlInit) {
    u8* ramPtr = SEGMENT_VRAM_START(ovl_DF4260);
    u8 segment;
    u8 startLoad = false;

    if (ovlInit->ovl.rom.start == (0, D_800CBDD4.ovl.rom.start)) { // fake because D_800CBDD4 is probably 2D array
        ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.rom);
        ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.bss);
    } else {
        D_800CBDD4.ovl.rom.start = ovlInit->ovl.rom.start;
        D_800CBDD4.ovl.rom.end = ramPtr;
        if (ovlInit->ovl.rom.start != 0) {
            startLoad = true;
            func_80058B80(ovlInit->ovl.rom.start, ramPtr, SEGMENT_SIZE(ovlInit->ovl.rom));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.rom);
            bzero(ovlInit->ovl.bss.start, SEGMENT_SIZE(ovlInit->ovl.bss));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.bss);
        }
    }
    segment = 0;
    while ((segment < 15) && (ovlInit->assets[segment].start == D_800CBDD4.assets[segment].start) && (startLoad == 0)) {
        if (ovlInit->assets[segment].start != 0) {
            gSegments[segment + 1] = K0_TO_PHYS(ramPtr);
            gSPSegment(gUnkDisp1++, segment + 1, K0_TO_PHYS(ramPtr));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->assets[segment]);
        }
        segment += 1;
    }
    for (segment; segment < 15; segment += 1) {
        D_800CBDD4.assets[segment].start = ovlInit->assets[segment].start;
        D_800CBDD4.assets[segment].end = ramPtr;
        if (ovlInit->assets[segment].start != 0) {
            gSegments[segment + 1] = K0_TO_PHYS(ramPtr);
            gSPSegment(gUnkDisp1++, segment + 1, K0_TO_PHYS(ramPtr));
            func_80058B80(ovlInit->assets[segment].start, ramPtr, SEGMENT_SIZE(ovlInit->assets[segment]));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->assets[segment]);
        }
    }

    if (D_800CA3B0 != 0) {
        D_800CA3B0--;
    } else if (gStartNMI == 0) {
        Lib_FillScreen(0);
    }
    return startLoad;
}

u8 func_80058F14(u8 arg0, u8 arg1) {
    u8 var_v1;

    switch (arg0) {
        case 0x0:
            var_v1 = func_80058C48(&D_800CA7DC[arg1]);
            if (var_v1 == 1) {
                func_8001DC6C(0, 0x16);
            }
            break;
        case 0x1:
            var_v1 = func_80058C48(&D_800CA874[arg1]);
            break;
        case 0x2:
            var_v1 = func_80058C48(&D_800CA90C[arg1]);
            break;
        case 0x3:
            var_v1 = func_80058C48(&D_800CA9A4[arg1]);
            break;
        case 0x5:
            var_v1 = func_80058C48(&D_800CAA3C[arg1]);
            break;
        case 0x6:
            var_v1 = func_80058C48(&D_800CAAD4[arg1]);
            break;
        case 0x7:
            var_v1 = func_80058C48(&D_800CAC04[arg1]);
            break;
        case 0x8:
            var_v1 = func_80058C48(&D_800CAF94[arg1]);
            break;
        case 0x17:
            var_v1 = func_80058C48(&D_800CB0C4[arg1]);
            break;
        case 0x9:
            var_v1 = func_80058C48(&D_800CB15C[arg1]);
            break;
        case 0xA:
            var_v1 = func_80058C48(&D_800CB1F4[arg1]);
            break;
        case 0xB:
            var_v1 = func_80058C48(&D_800CB28C[arg1]);
            break;
        case 0xC:
            var_v1 = func_80058C48(&D_800CB3BC[arg1]);
            break;
        case 0xD:
            var_v1 = func_80058C48(&D_800CB454[arg1]);
            break;
        case 0xE:
            var_v1 = func_80058C48(&D_800CB4EC[arg1]);
            break;
        case 0xF:
            var_v1 = func_80058C48(&D_800CB584[arg1]);
            break;
        case 0x10:
            var_v1 = func_80058C48(&D_800CB6B4[arg1]);
            break;
        case 0x11:
            var_v1 = func_80058C48(&D_800CBB74[arg1]);
            break;
        case 0x12:
            var_v1 = func_80058C48(&D_800CB61C[arg1]);
            break;
        case 0x18:
            var_v1 = func_80058C48(&D_800CB74C[arg1]);
            break;
        case 0x14:
            var_v1 = func_80058C48(&D_800CB87C[arg1]);
            break;
        case 0x16:
            var_v1 = func_80058C48(&D_800CB914[arg1]);
            break;
        case 0x13:
            var_v1 = func_80058C48(&D_800CB9AC[arg1]);
            break;
        case 0x15:
            var_v1 = func_80058C48(&D_800CBA44[arg1]);
            break;
        case 0x32:
            var_v1 = func_80058C48(&D_800CBC0C[arg1]);
            if (var_v1 == 1) {
                func_8001DC6C(3, 0x310);
            }
            break;
        case 0x63:
            var_v1 = func_80058C48(&D_800CA3B4[arg1]);
            if (var_v1 == 1) {
                func_8001DC6C(0, 0xE);
            }
            break;
        case 0x4:
            var_v1 = func_80058C48(&D_800CA44C[arg1]);
            break;
        default:
            (void) "DMA MODE ERROR %d\n";
            var_v1 = 0;
            break;
    }
    return var_v1;
}

void func_80059498(void) {
    Lib_DmaRead(SEGMENT_ROM_START(dma_table), gDmaTable, SEGMENT_ROM_SIZE(dma_table));
    func_80058B80(SEGMENT_ROM_START(ast_DE5D50), gTextCharTextures, SEGMENT_ROM_SIZE(ast_DE5D50));
}

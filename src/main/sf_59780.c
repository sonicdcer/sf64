#include "global.h"

#define SEGMENT_SIZE(segment) ((ptrdiff_t) ((uintptr_t) (segment).end - (uintptr_t) (segment).start))

extern u8 func_80187520[];
extern OverlayInit D_800CBDD4;

void func_80058B80(void* arg0, void* arg1, ptrdiff_t arg2) {
    s32 i;

    for (i = 0; gDmaTable[i].pRom.end != NULL; i++) {
        if (gDmaTable[i].vRomAddress == arg0) {
            if (gDmaTable[i].compFlag == 0) {
                func_800033E0(gDmaTable[i].pRom.start, arg1, arg2);
            } else {
                func_800034E8(1);
                D_800CA3B0 = 3;
                D_80161A39 = 1;
                func_800033E0(gDmaTable[i].pRom.start, gFrameBuffers, SEGMENT_SIZE(gDmaTable[i].pRom));
                Mio0_Decompress(gFrameBuffers, arg1);
            }
            break;
        }
    }
}

u8 func_80058C48(OverlayInit* ovlInit) {
    u8* ramPtr = func_80187520;
    u8 segment;
    u8 startLoad = false;

    if (ovlInit->rom.start == (0, D_800CBDD4.rom.start)) { // fake because D_800CBDD4 is probably 2D array
        ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->rom);
        ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->bss);
    } else {
        D_800CBDD4.rom.start = ovlInit->rom.start;
        D_800CBDD4.rom.end = ramPtr;
        if (ovlInit->rom.start != 0) {
            startLoad = true;
            func_80058B80(ovlInit->rom.start, ramPtr, SEGMENT_SIZE(ovlInit->rom));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->rom);
            bzero(ovlInit->bss.start, SEGMENT_SIZE(ovlInit->bss));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->bss);
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
    } else if (D_80137E80 == 0) {
        func_800034E8(0);
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

extern u8 D_DE480[];
extern u8 D_DE5D50[];
extern u8 D_DEA20[];
extern u8 D_DF4260[];

void func_80059498(void) {
    func_800033E0(D_DE480, gDmaTable, D_DEA20 - D_DE480);
    func_80058B80(D_DE5D50, D_80179010, D_DF4260 - D_DE5D50);
}

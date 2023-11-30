#include "global.h"
#include "sf64dma.h"

#define SEGMENT_SIZE(segment) ((ptrdiff_t) ((uintptr_t) (segment).end - (uintptr_t) (segment).start))

u8 D_800CA3B0 = 3;

#include "fox_load_inits.c"

OverlayInit sCurrentOverlay = {
    NO_OVERLAY,
    { /* 0x1 */ NO_SEGMENT,
      /* 0x2 */ NO_SEGMENT,
      /* 0x3 */ NO_SEGMENT,
      /* 0x4 */ NO_SEGMENT,
      /* 0x5 */ NO_SEGMENT,
      /* 0x6 */ NO_SEGMENT,
      /* 0x7 */ NO_SEGMENT,
      /* 0x8 */ NO_SEGMENT,
      /* 0x9 */ NO_SEGMENT,
      /* 0xA */ NO_SEGMENT,
      /* 0xB */ NO_SEGMENT,
      /* 0xC */ NO_SEGMENT,
      /* 0xD */ NO_SEGMENT,
      /* 0xE */ NO_SEGMENT,
      /* 0xF */ NO_SEGMENT },
};


void Overlay_LoadSegment(void* vRomAddress, void* dest, ptrdiff_t size) {
    s32 i;

    for (i = 0; gDmaTable[i].pRom.end != NULL; i++) {
        if (gDmaTable[i].vRomAddress == vRomAddress) {
            if (gDmaTable[i].compFlag == 0) {
                Lib_DmaRead(gDmaTable[i].pRom.start, dest, size);
            } else {
                Lib_FillScreen(true);
                D_800CA3B0 = 3;
                D_80161A39 = true;
                Lib_DmaRead(gDmaTable[i].pRom.start, gFrameBuffers, SEGMENT_SIZE(gDmaTable[i].pRom));
                Mio0_Decompress(gFrameBuffers, dest);
            }
            break;
        }
    }
}

u8 Overlay_Init(OverlayInit* ovlInit) {
    u8* ramPtr = SEGMENT_VRAM_START(ovl_DF4260);
    u8 segment;
    u8 changeOvl = false;

    if (ovlInit->ovl.rom.start == (0, sCurrentOverlay.ovl.rom.start)) { // fake because D_800CBDD4 is probably 2D array
        ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.rom);
        ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.bss);
    } else {
        sCurrentOverlay.ovl.rom.start = ovlInit->ovl.rom.start;
        sCurrentOverlay.ovl.rom.end = ramPtr;
        if (ovlInit->ovl.rom.start != 0) {
            changeOvl = true;
            Overlay_LoadSegment(ovlInit->ovl.rom.start, ramPtr, SEGMENT_SIZE(ovlInit->ovl.rom));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.rom);
            bzero(ovlInit->ovl.bss.start, SEGMENT_SIZE(ovlInit->ovl.bss));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->ovl.bss);
        }
    }
    segment = 0;
    while ((segment < 15) && (ovlInit->assets[segment].start == sCurrentOverlay.assets[segment].start) && changeOvl == 0) {
        if (ovlInit->assets[segment].start != 0) {
            gSegments[segment + 1] = K0_TO_PHYS(ramPtr);
            gSPSegment(gUnkDisp1++, segment + 1, K0_TO_PHYS(ramPtr));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->assets[segment]);
        }
        segment += 1;
    }
    for (segment; segment < 15; segment += 1) {
        sCurrentOverlay.assets[segment].start = ovlInit->assets[segment].start;
        sCurrentOverlay.assets[segment].end = ramPtr;
        if (ovlInit->assets[segment].start != 0) {
            gSegments[segment + 1] = K0_TO_PHYS(ramPtr);
            gSPSegment(gUnkDisp1++, segment + 1, K0_TO_PHYS(ramPtr));
            Overlay_LoadSegment(ovlInit->assets[segment].start, ramPtr, SEGMENT_SIZE(ovlInit->assets[segment]));
            ramPtr = ramPtr + SEGMENT_SIZE(ovlInit->assets[segment]);
        }
    }

    if (D_800CA3B0 != 0) {
        D_800CA3B0--;
    } else if (gStartNMI == 0) {
        Lib_FillScreen(false);
    }
    return changeOvl;
}

u8 Overlay_Load(u8 arg0, u8 arg1) {
    u8 changeOvl;

    switch (arg0) {
        case 0x0:
            changeOvl = Overlay_Init(&sEBFBE0_Overlay1[arg1]);
            if (changeOvl == true) {
                func_8001DC6C(0, 0x16);
            }
            break;
        case 0x1:
            changeOvl = Overlay_Init(&sEBFBE0_Overlay2[arg1]);
            break;
        case 0x2:
            changeOvl = Overlay_Init(&sEBFBE0_Overlay3[arg1]);
            break;
        case 0x3:
            changeOvl = Overlay_Init(&sEBFBE0_Overlay4[arg1]);
            break;
        case 0x5:
            changeOvl = Overlay_Init(&sDF4260_Overlay1[arg1]);
            break;
        case 0x6:
            changeOvl = Overlay_Init(&sE08400_Overlay1_2[arg1]);
            break;
        case 0x7:
            changeOvl = Overlay_Init(&sE6A810_Overlay1_6[arg1]);
            break;
        case 0x8:
            changeOvl = Overlay_Init(&sE08400_Overlay2_2[arg1]);
            break;
        case 0x17:
            changeOvl = Overlay_Init(&sE51970_Overlay1[arg1]);
            break;
        case 0x9:
            changeOvl = Overlay_Init(&sE16C50_Overlay1[arg1]);
            break;
        case 0xA:
            changeOvl = Overlay_Init(&sE16C50_Overlay2[arg1]);
            break;
        case 0xB:
            changeOvl = Overlay_Init(&sE51970_Overlay2_2[arg1]);
            break;
        case 0xC:
            changeOvl = Overlay_Init(&sE16C50_Overlay3[arg1]);
            break;
        case 0xD:
            changeOvl = Overlay_Init(&sE9F1D0_Overlay1[arg1]);
            break;
        case 0xE:
            changeOvl = Overlay_Init(&sE16C50_Overlay4[arg1]);
            break;
        case 0xF:
            changeOvl = Overlay_Init(&sE16C50_Overlay5[arg1]);
            break;
        case 0x10:
            changeOvl = Overlay_Init(&sE9F1D0_Overlay2[arg1]);
            break;
        case 0x11:
            changeOvl = Overlay_Init(&sDF4260_Overlay3[arg1]);
            break;
        case 0x12:
            changeOvl = Overlay_Init(&sDF4260_Overlay2[arg1]);
            break;
        case 0x18:
            changeOvl = Overlay_Init(&sE9F1D0_Overlay3_2[arg1]);
            break;
        case 0x14:
            changeOvl = Overlay_Init(&sE08400_Overlay3[arg1]);
            break;
        case 0x16:
            changeOvl = Overlay_Init(&sE51970_Overlay3[arg1]);
            break;
        case 0x13:
            changeOvl = Overlay_Init(&sE51970_Overlay4[arg1]);
            break;
        case 0x15:
            changeOvl = Overlay_Init(&sE6A810_Overlay2_2[arg1]);
            break;
        case 0x32:
            changeOvl = Overlay_Init(&sE08400_Overlay4_2[arg1]);
            if (changeOvl == true) {
                func_8001DC6C(3, 0x310);
            }
            break;
        case 0x63:
            changeOvl = Overlay_Init(&sLogoOverlay[arg1]);
            if (changeOvl == true) {
                func_8001DC6C(0, 0xE);
            }
            break;
        case 0x4:
            changeOvl = Overlay_Init(&sCreditsOverlay_6[arg1]);
            break;
        default:
            (void) "DMA MODE ERROR %d\n";
            changeOvl = false;
            break;
    }
    return changeOvl;
}

void Overlay_InitDma(void) {
    Lib_DmaRead(SEGMENT_ROM_START(dma_table), SEGMENT_VRAM_START(dma_table), SEGMENT_ROM_SIZE(dma_table));
    Overlay_LoadSegment(SEGMENT_ROM_START(ast_DE5D50), SEGMENT_VRAM_START(ast_DE5D50), SEGMENT_ROM_SIZE(ast_DE5D50));
}

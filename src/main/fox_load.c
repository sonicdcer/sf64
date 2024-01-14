#include "global.h"
#include "sf64dma.h"

#define SEGMENT_SIZE(segment) ((ptrdiff_t) ((uintptr_t) (segment).end - (uintptr_t) (segment).start))

u8 sFillTimer = 3;

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
                sFillTimer = 3;
                D_80161A39 = true;
                Lib_DmaRead(gDmaTable[i].pRom.start, gFrameBuffers, SEGMENT_SIZE(gDmaTable[i].pRom));
                Mio0_Decompress(gFrameBuffers, dest);
            }
            break;
        }
    }
}

u8 Overlay_Init(OverlayInit* ovlInit) {
    u8* ramPtr = SEGMENT_VRAM_START(ovl_i1);
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
    while ((segment < 15) && (ovlInit->assets[segment].start == sCurrentOverlay.assets[segment].start) &&
           changeOvl == 0) {
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

    if (sFillTimer != 0) {
        sFillTimer--;
    } else if (gStartNMI == 0) {
        Lib_FillScreen(false);
    }
    return changeOvl;
}

u8 Overlay_Load(u8 ovlSetup, u8 ovlStage) {
    u8 changeOvl;

    switch (ovlSetup) {
        case OVL_SETUP_TITLE:
            changeOvl = Overlay_Init(&sOvlEBFBE0_Title[ovlStage]);
            if (changeOvl == true) {
                func_8001DC6C(0, 0x16);
            }
            break;
        case OVL_SETUP_MENU:
            changeOvl = Overlay_Init(&sOvlEBFBE0_Menu[ovlStage]);
            break;
        case OVL_SETUP_MAP:
            changeOvl = Overlay_Init(&sOvlEBFBE0_Map[ovlStage]);
            break;
        case OVL_SETUP_STATE_5:
            changeOvl = Overlay_Init(&sOvlEBFBE0_State5[ovlStage]);
            break;
        case OVL_SETUP_CORNERIA:
            changeOvl = Overlay_Init(&sOvli1_Corneria[ovlStage]);
            break;
        case OVL_SETUP_METEO:
            changeOvl = Overlay_Init(&sOvli2_Meteo[ovlStage]);
            break;
        case OVL_SETUP_TITANIA:
            changeOvl = Overlay_Init(&sOvli5_Titania[ovlStage]);
            break;
        case OVL_SETUP_SECTOR_X:
            changeOvl = Overlay_Init(&sOvli2_SectorX[ovlStage]);
            break;
        case OVL_SETUP_SECTOR_Z:
            changeOvl = Overlay_Init(&sOvli4_SectorZ[ovlStage]);
            break;
        case OVL_SETUP_AQUAS:
            changeOvl = Overlay_Init(&sOvli3_Aquas[ovlStage]);
            break;
        case OVL_SETUP_AREA_6:
            changeOvl = Overlay_Init(&sOvli3_Area6[ovlStage]);
            break;
        case OVL_SETUP_FORTUNA:
            changeOvl = Overlay_Init(&sOvli4_Fortuna[ovlStage]);
            break;
        case OVL_SETUP_UNK_4:
            changeOvl = Overlay_Init(&sOvli3_Unk4[ovlStage]);
            break;
        case OVL_SETUP_SECTOR_Y:
            changeOvl = Overlay_Init(&sOvlE9F1D0_SectorY[ovlStage]);
            break;
        case OVL_SETUP_SOLAR:
            changeOvl = Overlay_Init(&sOvli3_Solar[ovlStage]);
            break;
        case OVL_SETUP_ZONESS:
            changeOvl = Overlay_Init(&sOvli3_Zoness[ovlStage]);
            break;
        case OVL_SETUP_VENOM_ANDROSS:
            changeOvl = Overlay_Init(&sOvlE9F1D0_Venom2[ovlStage]);
            break;
        case OVL_SETUP_TRAINING:
            changeOvl = Overlay_Init(&sOvli1_Training[ovlStage]);
            break;
        case OVL_SETUP_VENOM_1:
            changeOvl = Overlay_Init(&sOvli1_Venom1[ovlStage]);
            break;
        case OVL_SETUP_VENOM_2:
            changeOvl = Overlay_Init(&sOvlE9F1D0_VenomSW[ovlStage]);
            break;
        case OVL_SETUP_20:
            changeOvl = Overlay_Init(&sOvli2_Setup20[ovlStage]);
            break;
        case OVL_SETUP_BOLSE:
            changeOvl = Overlay_Init(&sOvli4_Bolse[ovlStage]);
            break;
        case OVL_SETUP_KATINA:
            changeOvl = Overlay_Init(&sOvli4_Katina[ovlStage]);
            break;
        case OVL_SETUP_MACBETH:
            changeOvl = Overlay_Init(&sOvli5_Macbeth[ovlStage]);
            break;
        case OVL_SETUP_VERSUS:
            changeOvl = Overlay_Init(&sOvli2_Versus[ovlStage]);
            if (changeOvl == true) {
                func_8001DC6C(3, 0x310);
            }
            break;
        case OVL_SETUP_LOGO:
            changeOvl = Overlay_Init(&sNoOvl_Logo[ovlStage]); // Logo does not load an overlay file
            if (changeOvl == true) {
                func_8001DC6C(0, 0xE);
            }
            break;
        case OVL_SETUP_CREDITS:
            changeOvl = Overlay_Init(&sOvlEF0260_Credits[ovlStage]);
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

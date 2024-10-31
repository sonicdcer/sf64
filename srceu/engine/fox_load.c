#include "sf64dma.h"

/* Had to comment these out because the rom didn't match */
#if 0
u8 sFillTimer = 3;

#include "fox_load_inits.c"

Scene D_800CCC44 = {
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
#endif

// No difference
#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/engine/fox_load/Load_RomFile.s")

// No difference
#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/engine/fox_load/Load_SceneFiles.s")

// No difference
#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/engine/fox_load/Load_SceneSetup.s")

#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/engine/fox_load/func_80059428.s")
// https://decomp.me/scratch/vQ0WZ (matching)
/*
void func_80059428(void) {
    if (gStopTasks != 1) {
        Lib_DmaRead(dma_table_ROM_START, gDmaTable, audio_seq_ROM_START - dma_table_ROM_START);
    }
}
*/

#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/engine/fox_load/Load_SetTextLanguage.s")

// https://decomp.me/scratch/pCmOV
/*
void Load_SetTextLanguage(void) {
    if (gStopTasks != 1) {
        switch (D_8017AACB) {
        case 0:
            Load_RomFile(&ast_radio_en_ROM_START, &D_fr_8017B230,(u32) &ast_radio_fr_ROM_START -
(u32)&ast_radio_en_ROM_START); break; case 1: Load_RomFile(&ast_radio_fr_ROM_START, &D_fr_8017B230,
(u32)&ast_radio_fr_ROM_END - (u32)&ast_radio_fr_ROM_START); break; case 2: Load_RomFile(&ast_radio_de_ROM_START,
&D_fr_8017B230, (u32)&ast_radio_de_ROM_END - (u32)&ast_radio_de_ROM_START); break;
        }
    }
}
*/

#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/engine/fox_load/D_800D7350.s")

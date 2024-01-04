#include "sf64dma.h"

#define DMA_ENTRY(file) \
    { file##_ROM_START, { file##_ROM_START, file##_ROM_END }, false }
#define DMA_ENTRY_NONE \
    { NULL, { NULL, NULL }, false }

DmaEntry gDmaTable[90] = {
    { SEGMENT_ROM_START(makerom), { SEGMENT_ROM_START(makerom), SEGMENT_ROM_END(makerom) }, false },
    { SEGMENT_ROM_START(main), { SEGMENT_ROM_START(main), SEGMENT_ROM_END(main) }, false },
    { SEGMENT_ROM_START(dma_table), { SEGMENT_ROM_START(dma_table), SEGMENT_ROM_END(dma_table) }, false },
    { SEGMENT_ROM_START(audio_seq), { SEGMENT_ROM_START(audio_seq), SEGMENT_ROM_END(audio_seq) }, false },
    { SEGMENT_ROM_START(audio_bank), { SEGMENT_ROM_START(audio_bank), SEGMENT_ROM_END(audio_bank) }, false },
    { SEGMENT_ROM_START(audio_table), { SEGMENT_ROM_START(audio_table), SEGMENT_ROM_END(audio_table) }, false },
    { SEGMENT_ROM_START(ast_873CB0), { SEGMENT_ROM_START(ast_873CB0), SEGMENT_ROM_END(ast_873CB0) }, false },
    { SEGMENT_ROM_START(ast_8A68C0), { SEGMENT_ROM_START(ast_8A68C0), SEGMENT_ROM_END(ast_8A68C0) }, false },
    { SEGMENT_ROM_START(ast_8AE0A0), { SEGMENT_ROM_START(ast_8AE0A0), SEGMENT_ROM_END(ast_8AE0A0) }, false },
    { SEGMENT_ROM_START(ast_8BFC00), { SEGMENT_ROM_START(ast_8BFC00), SEGMENT_ROM_END(ast_8BFC00) }, false },
    { SEGMENT_ROM_START(ast_8D99F0), { SEGMENT_ROM_START(ast_8D99F0), SEGMENT_ROM_END(ast_8D99F0) }, false },
    { SEGMENT_ROM_START(ast_8E1F80), { SEGMENT_ROM_START(ast_8E1F80), SEGMENT_ROM_END(ast_8E1F80) }, false },
    { SEGMENT_ROM_START(ast_8E92D0), { SEGMENT_ROM_START(ast_8E92D0), SEGMENT_ROM_END(ast_8E92D0) }, false },
    { SEGMENT_ROM_START(ast_918430), { SEGMENT_ROM_START(ast_918430), SEGMENT_ROM_END(ast_918430) }, false },
    { SEGMENT_ROM_START(ast_922730), { SEGMENT_ROM_START(ast_922730), SEGMENT_ROM_END(ast_922730) }, false },
    { SEGMENT_ROM_START(ast_92EC40), { SEGMENT_ROM_START(ast_92EC40), SEGMENT_ROM_END(ast_92EC40) }, false },
    { SEGMENT_ROM_START(ast_940AD0), { SEGMENT_ROM_START(ast_940AD0), SEGMENT_ROM_END(ast_940AD0) }, false },
    { SEGMENT_ROM_START(ast_955270), { SEGMENT_ROM_START(ast_955270), SEGMENT_ROM_END(ast_955270) }, false },
    { SEGMENT_ROM_START(ast_961CE0), { SEGMENT_ROM_START(ast_961CE0), SEGMENT_ROM_END(ast_961CE0) }, false },
    { SEGMENT_ROM_START(ast_9A1460), { SEGMENT_ROM_START(ast_9A1460), SEGMENT_ROM_END(ast_9A1460) }, false },
    { SEGMENT_ROM_START(ast_9D2FD0), { SEGMENT_ROM_START(ast_9D2FD0), SEGMENT_ROM_END(ast_9D2FD0) }, false },
    { SEGMENT_ROM_START(ast_9DD390), { SEGMENT_ROM_START(ast_9DD390), SEGMENT_ROM_END(ast_9DD390) }, false },
    { SEGMENT_ROM_START(ast_9EB5E0), { SEGMENT_ROM_START(ast_9EB5E0), SEGMENT_ROM_END(ast_9EB5E0) }, false },
    { SEGMENT_ROM_START(ast_9F4880), { SEGMENT_ROM_START(ast_9F4880), SEGMENT_ROM_END(ast_9F4880) }, false },
    { SEGMENT_ROM_START(ast_A049A0), { SEGMENT_ROM_START(ast_A049A0), SEGMENT_ROM_END(ast_A049A0) }, false },
    { SEGMENT_ROM_START(ast_A0E340), { SEGMENT_ROM_START(ast_A0E340), SEGMENT_ROM_END(ast_A0E340) }, false },
    { SEGMENT_ROM_START(ast_A1D0F0), { SEGMENT_ROM_START(ast_A1D0F0), SEGMENT_ROM_END(ast_A1D0F0) }, false },
    { SEGMENT_ROM_START(ast_A4FBB0), { SEGMENT_ROM_START(ast_A4FBB0), SEGMENT_ROM_END(ast_A4FBB0) }, false },
    { SEGMENT_ROM_START(ast_A58F60), { SEGMENT_ROM_START(ast_A58F60), SEGMENT_ROM_END(ast_A58F60) }, false },
    { SEGMENT_ROM_START(ast_A8B470), { SEGMENT_ROM_START(ast_A8B470), SEGMENT_ROM_END(ast_A8B470) }, false },
    { SEGMENT_ROM_START(ast_AB4000), { SEGMENT_ROM_START(ast_AB4000), SEGMENT_ROM_END(ast_AB4000) }, false },
    { SEGMENT_ROM_START(ast_ACF960), { SEGMENT_ROM_START(ast_ACF960), SEGMENT_ROM_END(ast_ACF960) }, false },
    { SEGMENT_ROM_START(ast_AE60A0), { SEGMENT_ROM_START(ast_AE60A0), SEGMENT_ROM_END(ast_AE60A0) }, false },
    { SEGMENT_ROM_START(ast_B0AA00), { SEGMENT_ROM_START(ast_B0AA00), SEGMENT_ROM_END(ast_B0AA00) }, false },
    { SEGMENT_ROM_START(ast_B1CA50), { SEGMENT_ROM_START(ast_B1CA50), SEGMENT_ROM_END(ast_B1CA50) }, false },
    { SEGMENT_ROM_START(ast_B2CA50), { SEGMENT_ROM_START(ast_B2CA50), SEGMENT_ROM_END(ast_B2CA50) }, false },
    { SEGMENT_ROM_START(ast_B612E0), { SEGMENT_ROM_START(ast_B612E0), SEGMENT_ROM_END(ast_B612E0) }, false },
    { SEGMENT_ROM_START(ast_B84560), { SEGMENT_ROM_START(ast_B84560), SEGMENT_ROM_END(ast_B84560) }, false },
    { SEGMENT_ROM_START(ast_BB11D0), { SEGMENT_ROM_START(ast_BB11D0), SEGMENT_ROM_END(ast_BB11D0) }, false },
    { SEGMENT_ROM_START(ast_BC23D0), { SEGMENT_ROM_START(ast_BC23D0), SEGMENT_ROM_END(ast_BC23D0) }, false },
    { SEGMENT_ROM_START(ast_BFA740), { SEGMENT_ROM_START(ast_BFA740), SEGMENT_ROM_END(ast_BFA740) }, false },
    { SEGMENT_ROM_START(ast_BFC510), { SEGMENT_ROM_START(ast_BFC510), SEGMENT_ROM_END(ast_BFC510) }, false },
    { SEGMENT_ROM_START(ast_C48F40), { SEGMENT_ROM_START(ast_C48F40), SEGMENT_ROM_END(ast_C48F40) }, false },
    { SEGMENT_ROM_START(ast_CA9DE0), { SEGMENT_ROM_START(ast_CA9DE0), SEGMENT_ROM_END(ast_CA9DE0) }, false },
    { SEGMENT_ROM_START(ast_CBFE70), { SEGMENT_ROM_START(ast_CBFE70), SEGMENT_ROM_END(ast_CBFE70) }, false },
    { SEGMENT_ROM_START(ast_CD2410), { SEGMENT_ROM_START(ast_CD2410), SEGMENT_ROM_END(ast_CD2410) }, false },
    { SEGMENT_ROM_START(ast_CDDCA0), { SEGMENT_ROM_START(ast_CDDCA0), SEGMENT_ROM_END(ast_CDDCA0) }, false },
    { SEGMENT_ROM_START(ast_CE9E70), { SEGMENT_ROM_START(ast_CE9E70), SEGMENT_ROM_END(ast_CE9E70) }, false },
    { SEGMENT_ROM_START(ast_D25100), { SEGMENT_ROM_START(ast_D25100), SEGMENT_ROM_END(ast_D25100) }, false },
    { SEGMENT_ROM_START(ast_D27600), { SEGMENT_ROM_START(ast_D27600), SEGMENT_ROM_END(ast_D27600) }, false },
    { SEGMENT_ROM_START(ast_D43400), { SEGMENT_ROM_START(ast_D43400), SEGMENT_ROM_END(ast_D43400) }, false },
    { SEGMENT_ROM_START(ast_D68480), { SEGMENT_ROM_START(ast_D68480), SEGMENT_ROM_END(ast_D68480) }, false },
    { SEGMENT_ROM_START(ast_D91F10), { SEGMENT_ROM_START(ast_D91F10), SEGMENT_ROM_END(ast_D91F10) }, false },
    { SEGMENT_ROM_START(ast_DDC010), { SEGMENT_ROM_START(ast_DDC010), SEGMENT_ROM_END(ast_DDC010) }, false },
    { SEGMENT_ROM_START(ast_DE5D50), { SEGMENT_ROM_START(ast_DE5D50), SEGMENT_ROM_END(ast_DE5D50) }, false },
    { SEGMENT_ROM_START(ovl_DF4260), { SEGMENT_ROM_START(ovl_DF4260), SEGMENT_ROM_END(ovl_DF4260) }, false },
    { SEGMENT_ROM_START(ovl_E08400), { SEGMENT_ROM_START(ovl_E08400), SEGMENT_ROM_END(ovl_E08400) }, false },
    { SEGMENT_ROM_START(ovl_E16C50), { SEGMENT_ROM_START(ovl_E16C50), SEGMENT_ROM_END(ovl_E16C50) }, false },
    { SEGMENT_ROM_START(ovl_E51970), { SEGMENT_ROM_START(ovl_E51970), SEGMENT_ROM_END(ovl_E51970) }, false },
    { SEGMENT_ROM_START(ovl_E6A810), { SEGMENT_ROM_START(ovl_E6A810), SEGMENT_ROM_END(ovl_E6A810) }, false },
    { SEGMENT_ROM_START(ovl_E9F1D0), { SEGMENT_ROM_START(ovl_E9F1D0), SEGMENT_ROM_END(ovl_E9F1D0) }, false },
    { SEGMENT_ROM_START(ovl_menu), { SEGMENT_ROM_START(ovl_menu), SEGMENT_ROM_END(ovl_menu) }, false },
    { SEGMENT_ROM_START(ovl_EF0260), { SEGMENT_ROM_START(ovl_EF0260), SEGMENT_ROM_END(ovl_EF0260) }, false },
    { SEGMENT_ROM_START(ovl_EFFA40), { SEGMENT_ROM_START(ovl_EFFA40), SEGMENT_ROM_END(ovl_EFFA40) }, false },
};

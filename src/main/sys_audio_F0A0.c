#include "sys.h"
#include "sf64dma.h"
#include "sf64audio_provisional.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000E4A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000E5A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000E8E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000EBB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000EC14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000ECC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000ED28.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000EE14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000EEE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000EF48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F010.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F078.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F158.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F220.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F354.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F388.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F478.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F554.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F790.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F7CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F820.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000F864.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FA28.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FB50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FBA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FC7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FC8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FCA0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FCC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8000FF9C.s")

void func_8000FFCC(void) {
    s32 pad[13];
    s32 i;
    s32 j;
    s32 temp_s1;
    u32 temp_a0;
    s32 var_v1;
    u64 *var_v0;
    void *temp_v0;

    D_80155D8C = 0;
    
    for(i = 0 ; i < D_800C7C30 / 8; i++) {
        gAudioDataBuffer[i] = 0;
    }
    
    var_v0 = D_8014BA40;
    var_v1 = ((u32)D_80155D90 - (u32)D_8014BA40) / 8;
    for(; var_v1 >= 0; var_v1--) {
        *var_v0++ = 0;
    }
    switch (osTvType) {
        case 0:
            D_80155D68 = 20.03042f;
            D_80155D6C = 0x32;
            break;
        case 2:
            D_80155D68 = 16.546f;
            D_80155D6C = 0x3C;
            break;
        default:
        case 1:
            D_80155D68 = 16.713f;
            D_80155D6C = 0x3C;
            break;
    }
    func_8001EE3C();
    for(i = 0; i < 3; i++) {
        D_80155D7C[i] = 0xA0;
    }
    D_80155CA8 = 0;
    D_80155CB0 = 0;
    D_80155CB4 = 0;
    D_80155CA6 = 0;
    D_80155CC4 = NULL;
    D_80155CC8[0].task.t.data_size = 0;
    D_80155CC8[1].task.t.data_size = 0;
    osCreateMesgQueue(&D_80154A10, &D_80154A28, 1);
    osCreateMesgQueue(&D_801542F8, &D_80154310, 0x40);
    osCreateMesgQueue(&D_80154248, &D_80154260, 0x10);
    osCreateMesgQueue(&D_801542A0, &D_801542B8, 0x10);
    D_80155CAC = 0;
    D_80155A48 = 0;
    func_8000BFE8(D_800C7C34);
    for(i = 0; i < 3; i++) {
        D_80155D70[i] = AudioHeap_Alloc(&D_8014C1D0, 0x1540);
        for(j = 0; j < 0xAA0; j++) {
            D_80155D70[i][j] = 0;
        }
    }
    D_8014D529 = 0;
    D_8014D528 = 1;
    func_8000D104();
    D_80155C5C = &D_800C3660;
    D_80155C60 = &D_800C3A90;
    D_80155C64 = &D_800C3610;
    D_80155C68 = &D_800C3CB0;
    D_80155C6C = D_80155C5C->numEntries;
    func_8000EBB4(D_80155C5C, audio_seq_ROM_START, D_800C7C3C);
    func_8000EBB4(D_80155C60, audio_bank_ROM_START, D_800C7C40);
    func_8000EBB4(D_80155C64, audio_table_ROM_START, D_800C7C44);
    temp_s1 = D_80155C60->numEntries;
    D_80155C70 = AudioHeap_Alloc(&D_8014C1D0, temp_s1 * 0xC);
    for(i = 0; i < temp_s1; i++) {
        D_80155C70[i].sampleBankId1  = (D_80155C60->entries[i].shortData1 >> 8) & 0xFF;
        D_80155C70[i].sampleBankId2  = D_80155C60->entries[i].shortData1 & 0xFF;
        D_80155C70[i].numInstruments = (D_80155C60->entries[i].shortData2 >> 8) & 0xFF;
        D_80155C70[i].numDrums       = D_80155C60->entries[i].shortData2 & 0xFF;
    }
    temp_v0 = AudioHeap_Alloc(&D_8014C1D0, D_800C7C38);
    if (temp_v0 == NULL) {
        D_800C7C38 = 0;
    }
    AudioHeap_InitPool(&D_8014C7B0.pool, temp_v0, D_800C7C38);
    func_800168BC();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_800105EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8001079C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010808.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010870.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_800109FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010A80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010AD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010BF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010C60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010EFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010F8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80010FE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80011120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_8001154C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80011710.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_F0A0/func_80011758.s")

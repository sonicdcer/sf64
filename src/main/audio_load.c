#include "sys.h"
#include "sf64dma.h"
#include "sf64audio_provisional.h"

extern char D_800C4F6C[];
extern char D_800C50E8[];
extern char D_800C50F4[];
extern char D_800C52F4[];
extern char D_800C53AC[];

extern AudioTable gSampleBankTableInit;
// extern AudioTableEntry gSampleBankTableInitEntries[];
extern AudioTable gSeqTableInit;
// extern AudioTableEntry gSeqTableInitEntries[];
extern AudioTable gSoundFontTableInit;
// extern AudioTableEntry gSoundFontTableInitEntries[];
extern u8 gSeqFontTableInit[];

void func_8000E4A0(void) {
    SampleDma* dma;
    u32 i;

    for (i = 0; i < gSampleDmaListSize1; i++) {
        dma = &gSampleDmas[i];
        if (dma->ttl != 0) {
            dma->ttl--;
            if (dma->ttl == 0) {
                dma->reuseIndex = gSampleDmaReuseQueue1WrPos;
                gSampleDmaReuseQueue1[gSampleDmaReuseQueue1WrPos] = i;
                gSampleDmaReuseQueue1WrPos++;
            }
        }
    }
    for (i = gSampleDmaListSize1; i < gSampleDmaCount; i++) {
        dma = &gSampleDmas[i];
        if (dma->ttl != 0) {
            dma->ttl--;
            if (dma->ttl == 0) {
                dma->reuseIndex = gSampleDmaReuseQueue2WrPos;
                gSampleDmaReuseQueue2[gSampleDmaReuseQueue2WrPos] = i;
                gSampleDmaReuseQueue2WrPos++;
            }
        }
    }
    D_80155A50 = 0;
}

void* func_8000E5A8(u32 arg0, u32 arg1, u32 arg2, u8* arg3, s32 arg4) {
    u32 i;
    SampleDma* dma;
    s32 var_t3 = 0;
    s32 temp2;
    u32 temp_s0;
    s32 sp38;

    if ((arg2 != 0) || (*arg3 >= gSampleDmaListSize1)) {
        for (i = gSampleDmaListSize1; i < gSampleDmaCount; i++) {
            dma = &gSampleDmas[i];
            temp2 = arg0 - dma->devAddr;
            if ((0 <= temp2) && (temp2 <= (dma->size - arg1))) {
                if ((dma->ttl == 0) && (gSampleDmaReuseQueue2RdPos != gSampleDmaReuseQueue2WrPos)) {
                    if (dma->reuseIndex != gSampleDmaReuseQueue2RdPos) {
                        gSampleDmaReuseQueue2[dma->reuseIndex] = gSampleDmaReuseQueue2[gSampleDmaReuseQueue2RdPos];
                        gSampleDmas[gSampleDmaReuseQueue2[gSampleDmaReuseQueue2RdPos]].reuseIndex = dma->reuseIndex;
                    }
                    gSampleDmaReuseQueue2RdPos++;
                }
                dma->ttl = 60;
                *arg3 = i;
                return &dma->ramAddr[arg0 - dma->devAddr];
            }
        }
        if ((gSampleDmaReuseQueue2RdPos != gSampleDmaReuseQueue2WrPos) && (arg2 != 0)) {
            sp38 = gSampleDmaReuseQueue2[gSampleDmaReuseQueue2RdPos];
            gSampleDmaReuseQueue2RdPos++;
            dma = &gSampleDmas[sp38];
            var_t3 = 1;
        }
    } else {
        dma = &gSampleDmas[*arg3];
        for (i = 0; i < gSampleDmaListSize1; i++) {
            temp2 = arg0 - dma->devAddr;
            if ((0 <= temp2) && (temp2 <= (dma->size - arg1))) {
                if (dma->ttl == 0) {
                    if (dma->reuseIndex != gSampleDmaReuseQueue1RdPos) {
                        gSampleDmaReuseQueue1[dma->reuseIndex] = gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos];
                        gSampleDmas[gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos]].reuseIndex = dma->reuseIndex;
                    }
                    if (1) {}
                    gSampleDmaReuseQueue1RdPos++;
                }
                dma->ttl = 2;
                return &dma->ramAddr[arg0 - dma->devAddr];
            }
            dma = &gSampleDmas[i];
        }
    }

    if (var_t3 == 0) {
        sp38 = gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos];
        gSampleDmaReuseQueue1RdPos++;
        dma = &gSampleDmas[sp38];
    }
    temp_s0 = arg0 & ~0xF;
    dma->ttl = 2;
    dma->devAddr = temp_s0;
    dma->sizeUnused = dma->size;
    func_8000FBA8(&gCurAudioFrameDmaIoMsgBuf[gCurAudioFrameDmaCount++], 0, 0, temp_s0, dma->ramAddr, dma->size,
                  &gCurAudioFrameDmaQueue, arg4, D_800C4F6C);
    *arg3 = sp38;
    return arg0 - temp_s0 + dma->ramAddr;
}

void func_8000E8E0(s32 arg0) {
    s32 i;
    u8* temp_v0;

    gSampleDmaBuffSize = 0x2D0;
    for (i = 0; i < (3 * gNumNotes * gAudioBufferParams.specUnk4); i++) {
        temp_v0 = AudioHeap_Alloc(&gMiscPool, gSampleDmaBuffSize);
        gSampleDmas[gSampleDmaCount].ramAddr = temp_v0;
        if (temp_v0 == NULL) {
            break;
        }
        gSampleDmas[gSampleDmaCount].devAddr = 0;
        gSampleDmas[gSampleDmaCount].sizeUnused = 0;
        gSampleDmas[gSampleDmaCount].unused = 0;
        gSampleDmas[gSampleDmaCount].ttl = 0;
        gSampleDmas[gSampleDmaCount].size = gSampleDmaBuffSize;
        gSampleDmaCount++;
    }
    for (i = 0; i < gSampleDmaCount; i++) {
        gSampleDmaReuseQueue1[i] = i;
        gSampleDmas[i].reuseIndex = i;
    }
    for (i = gSampleDmaCount; i < 0x100; i++) {
        gSampleDmaReuseQueue1[i] = 0;
    }
    gSampleDmaReuseQueue1RdPos = 0;
    gSampleDmaReuseQueue1WrPos = gSampleDmaCount;
    gSampleDmaListSize1 = gSampleDmaCount;
    gSampleDmaBuffSize = 0x200;
    for (i = 0; i < gNumNotes; i++) {
        temp_v0 = AudioHeap_Alloc(&gMiscPool, gSampleDmaBuffSize);
        gSampleDmas[gSampleDmaCount].ramAddr = temp_v0;
        if (temp_v0 == NULL) {
            break;
        }
        gSampleDmas[gSampleDmaCount].devAddr = 0;
        gSampleDmas[gSampleDmaCount].sizeUnused = 0;
        gSampleDmas[gSampleDmaCount].unused = 0;
        gSampleDmas[gSampleDmaCount].ttl = 0;
        gSampleDmas[gSampleDmaCount].size = gSampleDmaBuffSize;
        gSampleDmaCount++;
    }
    for (i = gSampleDmaListSize1; i < gSampleDmaCount; i++) {
        gSampleDmaReuseQueue2[i - gSampleDmaListSize1] = i;
        gSampleDmas[i].reuseIndex = i - gSampleDmaListSize1;
    }
    for (i = gSampleDmaCount; i < 0x100; i++) {
        gSampleDmaReuseQueue2[i] = gSampleDmaListSize1;
    }
    gSampleDmaReuseQueue2RdPos = 0;
    gSampleDmaReuseQueue2WrPos = gSampleDmaCount - gSampleDmaListSize1;
}

void func_8000EBB4(AudioTable* arg0, u8* arg1, u16 arg2) {
    s32 i;

    arg0->unkMediumParam = arg2;
    arg0->romAddr = arg1;

    for (i = 0; i < arg0->numEntries; i++) {
        if ((arg0->entries[i].size != 0) && (arg0->entries[i].medium == 2)) {
            arg0->entries[i].romAddr += (u32) arg1;
        }
    }
}

void* func_8000EC14(s32 arg0, u32* arg1) {
    s32 var_s0 = ((u16*) gSeqFontTable)[func_8000F790(0, arg0)];
    s32 var_s2 = 0xFF;
    s32 var_s1 = gSeqFontTable[var_s0++];
    void* sp28;

    for (var_s1; var_s1 > 0; var_s1--) {
        var_s2 = gSeqFontTable[var_s0++];
        sp28 = func_8000F478(var_s2);
    }
    *arg1 = var_s2;
    return sp28;
}

void func_8000ECC0(s32 arg0, s32 arg1) {
    s32 pad;
    u32 sp18;

    arg0 = func_8000F790(0, arg0);
    if (arg1 & 2) {
        func_8000EC14(arg0, &sp18);
    }
    if (arg1 & 1) {
        func_8000F354(arg0);
    }
}

s32 func_8000ED28(Sample* arg0, s32 arg1) {
    u8* temp_v0_2;

    if ((arg0->isRelocated == 1) && (arg0->medium != 0)) {
        temp_v0_2 = AudioHeap_AllocPersistentSampleCache(arg0->size, arg1, arg0->sampleAddr, arg0->medium);
        if (temp_v0_2 == NULL) {
            return -1;
        }
        if (arg0->medium == 1) {
            func_8000FB50(arg0->sampleAddr, temp_v0_2, arg0->size, gSampleBankTable->unkMediumParam);
        } else {
            func_8000FA28(arg0->sampleAddr, temp_v0_2, arg0->size, arg0->medium);
        }
        arg0->medium = 0;
        arg0->sampleAddr = temp_v0_2;
    }
}

s32 func_8000EE14(s32 arg0, s32 arg1, s32 arg2) {
    Instrument* temp_v0;
    Drum* temp_v0_2;

    if (arg1 < 0x7F) {
        temp_v0 = func_80011D4C(arg0, arg1);
        if (temp_v0 == NULL) {
            return -1;
        }
        if (temp_v0->normalRangeLo != 0) {
            func_8000ED28(temp_v0->lowPitchTunedSample.sample, arg0);
        }
        func_8000ED28(temp_v0->normalPitchTunedSample.sample, arg0);
        if (temp_v0->normalRangeHi != 0x7F) {
            func_8000ED28(temp_v0->highPitchTunedSample.sample, arg0);
        }
    } else if (arg1 == 0x7F) {
        temp_v0_2 = func_80011DFC(arg0, arg2);
        if (temp_v0_2 == NULL) {
            return -1;
        }
        func_8000ED28(temp_v0_2->tunedSample.sample, arg0);
        return 0;
    }
}

void func_8000EEE4(s32 arg0, s32 arg1, s32 arg2, OSMesgQueue* arg3) {
    if (func_8000FCC0(2, func_8000F790(2, arg0), arg1, arg2, arg3) == NULL) {
        osSendMesg(arg3, NULL, 0);
    }
}

void func_8000EF48(s32 arg0, s32 arg1, s32 arg2, OSMesgQueue* arg3) {
    s32 var_s0 = ((u16*) gSeqFontTable)[func_8000F790(0, arg0)];
    s32 var_s1 = gSeqFontTable[var_s0++];

    for (var_s1; var_s1 > 0; var_s1--) {
        func_8000FCC0(1, func_8000F790(1, gSeqFontTable[var_s0++]), arg1, arg2, arg3);
    }
}

void* func_8000F010(s32 arg0, u32* arg1) {
    s32 var_s0 = ((u16*) gSeqFontTable)[func_8000F790(0, arg0)];

    *arg1 = gSeqFontTable[var_s0++];
    if (*arg1 == 0) {
        return NULL;
    }
    return &gSeqFontTable[var_s0];
}

void func_8000F078(s32 arg0) {
    s32 var_s0 = ((u16*) gSeqFontTable)[func_8000F790(0, arg0)];
    s32 var_s1 = gSeqFontTable[var_s0++];
    u32 temp_v0;

    while (var_s1 > 0) {
        var_s1--;
        temp_v0 = func_8000F790(1, gSeqFontTable[var_s0++]);
        if (AudioHeap_SearchPermanentCache(1, temp_v0) == NULL) {
            func_8000F158(temp_v0);
            if (gFontLoadStatus[temp_v0] != 5) {
                if (1) {}
                gFontLoadStatus[temp_v0] = 0;
            }
        }
    }
}

s32 func_8000F158(s32 arg0) {
    AudioCache* cache = &gFontCache;
    AudioTemporaryCache* tcache;
    AudioPersistentCache* pcache;
    s32 i;

    tcache = &cache->temporary;
    if (tcache->entries[0].id == arg0) {
        tcache->entries[0].id = -1;
    } else if (tcache->entries[1].id == arg0) {
        tcache->entries[1].id = -1;
    }
    pcache = &cache->persistent;
    for (i = 0; i < pcache->numEntries; i++) {
        if (pcache->entries[i].id == arg0) {
            pcache->entries[i].id = -1;
        }
    }
    AudioHeap_DiscardFont(arg0);
}

void func_8000F200(u32 arg0, u32* arg1, s32 arg2) {
    func_8000F220(arg0, arg1, arg2);
}

void func_8000F220(u32 arg0, u32* arg1, s32 arg2) {
    s32 temp_s5 = func_8000F790(0, arg1);
    s32 var_s0;
    s32 var_s1;
    u8* temp_s0_2;
    s32 var_s2;
    s32 i;

    func_800144E4(&gSeqPlayers[arg0]);
    if (temp_s5) {}
    var_s0 = ((u16*) gSeqFontTable)[temp_s5];
    var_s1 = gSeqFontTable[var_s0++];
    var_s2 = 0xFF;
    for (var_s1; var_s1 > 0; var_s1--) {
        var_s2 = gSeqFontTable[var_s0++];
        func_8000F478(var_s2);
    }
    temp_s0_2 = func_8000F354(temp_s5);
    func_80016804(arg0);
    gSeqPlayers[arg0].seqId = temp_s5;
    gSeqPlayers[arg0].defaultFont = var_s2;
    gSeqPlayers[arg0].enabled = true;
    gSeqPlayers[arg0].seqData = temp_s0_2;
    gSeqPlayers[arg0].scriptState.pc = temp_s0_2;
    gSeqPlayers[arg0].scriptState.depth = 0;
    gSeqPlayers[arg0].delay = 0;
    gSeqPlayers[arg0].finished = false;
    for (i = 0; i < 16; i++) {
        ;
    }
}

void* func_8000F354(s32 arg0) {
    s32 temp = func_8000F790(0, arg0);
    s32 sp18;

    return func_8000F554(0, temp, &sp18);
}

void* func_8000F388(u32 arg0, s32* arg1) {
    void* temp_v0;
    AudioTable* sp30 = func_8000F820(2);
    s32 pad;
    s32 sp28;

    arg0 = func_8000F790(2, arg0);
    temp_v0 = func_8000F7CC(2, arg0);
    if (temp_v0 != NULL) {
        if (gSampleFontLoadStatus[arg0] != 5) {
            gSampleFontLoadStatus[arg0] = 2;
        }
        *arg1 = 0;
        return temp_v0;
    }
    pad = sp30->entries[arg0].cachePolicy;
    if (pad == 4) {
        *arg1 = sp30->entries[arg0].medium;
        return sp30->entries[arg0].romAddr;
    }
    temp_v0 = func_8000F554(2, arg0, &sp28);
    if (temp_v0 != NULL) {
        *arg1 = 0;
        return temp_v0;
    }
    *arg1 = sp30->entries[arg0].medium;
    return sp30->entries[arg0].romAddr;
}

void* func_8000F478(s32 arg0) {
    void* sp44;
    s32 sp40;
    u32 sp3C;
    s32 sp38;
    SampleBankRelocInfo sp20;

    arg0 = func_8000F790(1, arg0);
    sp40 = gSoundFontList[arg0].sampleBankId1;
    sp3C = gSoundFontList[arg0].sampleBankId2;

    sp20.sampleBankId1 = sp40;
    sp20.sampleBankId2 = sp3C;
    if (sp40 != 0xFF) {
        sp20.baseAddr1 = func_8000F388(sp40, &sp20.medium1);
    } else {
        sp20.baseAddr1 = NULL;
    }
    if (sp3C != 0xFF) {
        sp20.baseAddr2 = func_8000F388(sp3C, &sp20.medium2);
    } else {
        sp20.baseAddr2 = NULL;
    }
    sp44 = func_8000F554(1, arg0, &sp38);
    if (sp44 == NULL) {
        return NULL;
    }
    if (sp38 == 1) {
        func_80011120(arg0, sp44, &sp20, 0);
    }
    return sp44;
}

void* func_8000F554(u32 arg0, u32 arg1, s32* arg2) {
    u32 sp3C;
    AudioTable* sp38;
    u8* sp34;
    u32 sp30;
    s32 var_v0;
    u32 sp28;
    s32 pad;
    s32 sp18;

    sp34 = func_8000F7CC(arg0, arg1);
    if (sp34 != NULL) {
        var_v0 = 2;
        *arg2 = 0;
    } else {
        sp38 = func_8000F820(arg0);
        sp3C = sp38->entries[arg1].size;
        sp3C = ALIGN16(sp3C);
        sp30 = sp38->entries[arg1].medium;
        sp18 = sp38->entries[arg1].cachePolicy;
        sp28 = sp38->entries[arg1].romAddr;
        switch (sp18) {
            case 0:
                sp34 = AudioHeap_AllocPermanent(arg0, arg1, sp3C);
                if (sp34 == NULL) {
                    return sp34;
                }
                break;
            case 1:
                sp34 = AudioHeap_AllocCached(arg0, sp3C, 1, arg1);
                if (sp34 == NULL) {
                    return sp34;
                }
                break;
            case 2:
                sp34 = AudioHeap_AllocCached(arg0, sp3C, 0, arg1);
                if (sp34 == NULL) {
                    return sp34;
                }
                break;
            case 3:
            case 4:
                sp34 = AudioHeap_AllocCached(arg0, sp3C, 2, arg1);
                if (sp34 == NULL) {
                    return sp34;
                }
                break;
        }

        *arg2 = 1;
        if (sp30 == 1) {
            func_8000FB50(sp28, sp34, sp3C, sp38->unkMediumParam);
        } else {
            func_8000FA28(sp28, sp34, sp3C, sp30);
        }
        var_v0 = (sp18 == 0) ? 5 : 2;
    }
    switch (arg0) {
        case 0:
            if (gSeqLoadStatus[arg1] != 5) {
                gSeqLoadStatus[arg1] = var_v0;
            }
            break;
        case 1:
            if (gFontLoadStatus[arg1] != 5) {
                gFontLoadStatus[arg1] = var_v0;
            }
            break;
        case 2:
            if (gSampleFontLoadStatus[arg1] != 5) {
                gSampleFontLoadStatus[arg1] = var_v0;
            }
            break;
    }
    return sp34;
}

s32 func_8000F790(s32 arg0, u32 arg1) {
    AudioTable* temp_v0 = func_8000F820(arg0);

    if (temp_v0->entries[arg1].size == 0) {
        arg1 = temp_v0->entries[arg1].romAddr;
    }
    return arg1;
}

void* func_8000F7CC(s32 arg0, s32 arg1) {
    void* temp_v0;

    temp_v0 = AudioHeap_SearchPermanentCache(arg0, arg1);
    if (temp_v0 != NULL) {
        return temp_v0;
    }
    temp_v0 = AudioHeap_SearchCaches(arg0, 2, arg1);
    if (temp_v0 != NULL) {
        return temp_v0;
    }
    return NULL;
}

AudioTable* func_8000F820(s32 arg0) {
    AudioTable* table;

    switch (arg0) {
        case 0:
            table = gSequenceTable;
            break;
        case 1:
            table = gSoundFontTable;
            break;
        case 2:
            table = gSampleBankTable;
            break;
        default:
            table = NULL;
            break;
    }
    return table;
}

void func_8000F864(s32 arg0, u32 arg1x, void* arg2) {
    u32* arg1 = arg1x;
    u32** arg1y = arg1x;
    s32 temp_s6;
    Drum* drum;
    Instrument* temp_t6;
    u32 temp2;
    s32 i;
    s32 sp40;

    temp_s6 = gSoundFontList[arg0].numDrums;
    sp40 = gSoundFontList[arg0].numInstruments;

    if ((arg1[0] != 0) && (temp_s6 != 0)) {
        arg1[0] += arg1x;

        for (i = 0; i < temp_s6; i++) {
            temp2 = arg1y[0][i];
            if (temp2 != 0) {
                temp2 += arg1x;
                arg1y[0][i] = temp2;
                drum = temp2;
                if (drum->isRelocated == 0) {
                    func_80010FE4(&drum->tunedSample, arg1x, arg2);
                    temp2 = (u32) drum->envelope;
                    drum->envelope = temp2 + arg1x;
                    drum->isRelocated = true;
                }
            }
        }
    }
    for (i = 1; i <= sp40; i++) {
        if (arg1[i] != 0) {

            arg1[i] += arg1x;

            temp_t6 = arg1[i];
            if (temp_t6->isRelocated == 0) {
                if (temp_t6->normalRangeLo != 0) {
                    func_80010FE4(&temp_t6->lowPitchTunedSample, arg1x, arg2);
                }
                func_80010FE4(&temp_t6->normalPitchTunedSample, arg1x, arg2);
                if (temp_t6->normalRangeHi != 0x7F) {
                    func_80010FE4(&temp_t6->highPitchTunedSample, arg1x, arg2);
                }
                temp2 = (u32) temp_t6->envelope;
                temp_t6->envelope = temp2 + arg1x;
                temp_t6->isRelocated = true;
            }
        }
    }
    gSoundFontList[arg0].drums = arg1[0];
    gSoundFontList[arg0].instruments = (u32) &arg1[1];
}

void func_8000FA28(u32 arg0, u8* arg1, u32 arg2, s32 arg3) {
    arg2 = ALIGN16(arg2);
    osInvalDCache(arg1, arg2);
    while (true) {
        if (arg2 < 0x400) {
            break;
        }
        func_8000FBA8(&gSyncDmaIoMsg, 1, 0, arg0, arg1, 0x400, &gSyncDmaQueue, arg3, D_800C50E8);
        osRecvMesg(&gSyncDmaQueue, NULL, 1);
        arg2 -= 0x400;
        arg0 += 0x400;
        arg1 += 0x400;
    }
    if (arg2 != 0) {
        func_8000FBA8(&gSyncDmaIoMsg, 1, 0, arg0, arg1, arg2, &gSyncDmaQueue, arg3, D_800C50F4);
        osRecvMesg(&gSyncDmaQueue, NULL, 1);
    }
}

void func_8000FB50(u32 arg0, u8* arg1, s32 arg2, s32 arg3) {
    s32 sp1C;

    sp1C = arg0;
    osInvalDCache(arg1, arg2);
    func_8000FC8C(func_8000FC7C(arg3, &sp1C), sp1C, arg1, arg2);
}

s32 func_8000FBA8(OSIoMesg* arg0, u32 arg1, s32 arg2, u32 arg3, void* arg4, u32 arg5, OSMesgQueue* arg6, s32 arg7,
                  const char* arg8) {
    OSPiHandle* var_a0;
    u32 var_v0;

    switch (arg7) { /* irregular */
        case 2:
            var_a0 = osCartRomInit();
            break;
        case 3:
            var_a0 = func_8001EE60();
            break;
        default:
            return 0;
    }

    if (arg5 & 0xF) {
        arg5 = ALIGN16(arg5);
    }
    arg0->hdr.pri = arg1;
    arg0->hdr.retQueue = arg6;
    arg0->dramAddr = arg4;
    arg0->devAddr = arg3;
    arg0->size = arg5;
    var_a0->transferInfo.cmdType = 2;
    osEPiStartDma(var_a0, arg0, arg2);

    return 0;
}

s32 func_8000FC7C(s32 arg0, s32* arg1) {
    return 0;
}

void func_8000FC8C(s32 arg0, s32 arg1, u8* arg2, s32 arg3) {
}

void func_8000FCA0(u32 arg0, u32 arg1) {
    s32 sp1C;

    func_8000F554(arg0, arg1, &sp1C);
}

void* func_8000FCC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, OSMesgQueue* arg4) {
    u32 sp44;
    AudioTable* temp_v0_6;
    u8* sp3C;
    s32 sp38;
    s32 sp34;
    u32 sp30;
    s32 sp2C;

    switch (arg0) { /* switch 1; irregular */
        case 0:     /* switch 1 */
            if (gSeqLoadStatus[arg1] == 1) {
                return NULL;
            }
            break;
        case 1: /* switch 1 */
            if (gFontLoadStatus[arg1] == 1) {
                return NULL;
            }
            break;
        case 2: /* switch 1 */
            if (gSampleFontLoadStatus[arg1] == 1) {
                return NULL;
            }
            break;
    }
    sp3C = func_8000F7CC(arg0, arg1);
    if (sp3C != NULL) {
        sp2C = 2;
        osSendMesg(arg4, (void*) (arg3 << 0x18), 0);
    } else {
        temp_v0_6 = func_8000F820(arg0);
        sp44 = temp_v0_6->entries[arg1].size;
        sp44 = ALIGN16(sp44);
        sp38 = temp_v0_6->entries[arg1].medium;
        sp34 = temp_v0_6->entries[arg1].cachePolicy;
        sp30 = temp_v0_6->entries[arg1].romAddr;
        sp2C = 2;
        switch (sp34) {
            case 0:
                sp3C = AudioHeap_AllocPermanent(arg0, arg1, sp44);
                if (sp3C == NULL) {
                    return sp3C;
                }
                sp2C = 5;
                break;
            case 1:
                sp3C = AudioHeap_AllocCached(arg0, sp44, 1, arg1);
                if (sp3C == NULL) {
                    return sp3C;
                }
                break;
            case 2:
                sp3C = AudioHeap_AllocCached(arg0, sp44, 0, arg1);
                if (sp3C == NULL) {
                    return sp3C;
                }
                break;
            case 3:
            case 4:
                sp3C = AudioHeap_AllocCached(arg0, sp44, 2, arg1);
                if (sp3C == NULL) {
                    return sp3C;
                }
                break;
        }
        func_80010AD8(sp30, sp3C, sp44, sp38, arg2, arg4, (arg3 << 0x18) | (arg0 << 0x10) | (arg1 << 8) | sp2C);
        sp2C = 1;
    }
    switch (arg0) {
        case 0:
            if (gSeqLoadStatus[arg1] != 5) {
                gSeqLoadStatus[arg1] = sp2C;
            }
            break;
        case 1:
            if (gFontLoadStatus[arg1] != 5) {
                gFontLoadStatus[arg1] = sp2C;
            }
            break;
        case 2:
            if (gSampleFontLoadStatus[arg1] != 5) {
                gSampleFontLoadStatus[arg1] = sp2C;
            }
            break;
    }

    return sp3C;
}

void func_8000FF9C(s32 arg0) {
    func_80010870(arg0);
    func_8001154C(arg0);
    func_80010BF0(arg0);
}

void func_8000FFCC(void) {
    s32 pad[13];
    s32 i;
    s32 j;
    s32 temp_s1;
    u32 temp_a0;
    s32 var_v1;
    u64* var_v0;
    void* temp_v0;

    gResetTimer = 0;

    for (i = 0; i < gAudioHeapSize / 8; i++) {
        ((u64*) gAudioHeap)[i] = 0;
    }

    var_v0 = gAudioContextStart;
    var_v1 = ((u32) gAudioContextEnd - (u32) gAudioContextStart) / 8;
    for (; var_v1 >= 0; var_v1--) {
        *var_v0++ = 0;
    }
    switch (osTvType) {
        case 0:
            gMaxTempoTvTypeFactors = 20.03042f;
            gRefreshRate = 0x32;
            break;
        case 2:
            gMaxTempoTvTypeFactors = 16.546f;
            gRefreshRate = 0x3C;
            break;
        default:
        case 1:
            gMaxTempoTvTypeFactors = 16.713f;
            gRefreshRate = 0x3C;
            break;
    }
    func_8001EE3C();
    for (i = 0; i < 3; i++) {
        gAiBuffLengths[i] = 0xA0;
    }
    gAudioTaskCountQ = 0;
    gAudioTaskIndexQ = 0;
    gCurAiBuffIndex = 0;
    gAudioSoundMode = 0;
    gAudioCurTask = NULL;
    gAudioRspTasks[0].task.t.data_size = 0;
    gAudioRspTasks[1].task.t.data_size = 0;
    osCreateMesgQueue(&gSyncDmaQueue, gSyncDmaMsg, 1);
    osCreateMesgQueue(&gCurAudioFrameDmaQueue, gCurAudioFrameDmaMsg, 64);
    osCreateMesgQueue(&gExternalLoadQueue, gExternalLoadMsg, 16);
    osCreateMesgQueue(&gPreloadSampleQueue, gPreloadSampleMsg, 16);
    gCurAudioFrameDmaCount = 0;
    gSampleDmaCount = 0;
    AudioHeap_InitMainPools(gInitPoolSize);
    for (i = 0; i < 3; i++) {
        gAiBuffers[i] = AudioHeap_Alloc(&gInitPool, 0xAA0 * sizeof(u16));
        for (j = 0; j < 0xAA0; j++) {
            gAiBuffers[i][j] = 0;
        }
    }
    gAudioSpecId = 0;
    gResetStatus = 1;
    AudioHeap_ResetStep();
    gSequenceTable = &gSeqTableInit;
    gSoundFontTable = &gSoundFontTableInit;
    gSampleBankTable = &gSampleBankTableInit;
    gSeqFontTable = gSeqFontTableInit;
    gNumSequences = gSequenceTable->numEntries;
    func_8000EBB4(gSequenceTable, audio_seq_ROM_START, gSequenceMedium);
    func_8000EBB4(gSoundFontTable, audio_bank_ROM_START, gSoundFontMedium);
    func_8000EBB4(gSampleBankTable, audio_table_ROM_START, gSampleBankMedium);
    temp_s1 = gSoundFontTable->numEntries;
    gSoundFontList = AudioHeap_Alloc(&gInitPool, temp_s1 * sizeof(SoundFont));
    for (i = 0; i < temp_s1; i++) {
        gSoundFontList[i].sampleBankId1 = (gSoundFontTable->entries[i].shortData1 >> 8) & 0xFF;
        gSoundFontList[i].sampleBankId2 = gSoundFontTable->entries[i].shortData1 & 0xFF;
        gSoundFontList[i].numInstruments = (gSoundFontTable->entries[i].shortData2 >> 8) & 0xFF;
        gSoundFontList[i].numDrums = gSoundFontTable->entries[i].shortData2 & 0xFF;
    }
    temp_v0 = AudioHeap_Alloc(&gInitPool, gPermanentPoolSize);
    if (temp_v0 == NULL) {
        gPermanentPoolSize = 0;
    }
    AudioHeap_InitPool(&gPermanentPool.pool, temp_v0, gPermanentPoolSize);
    func_800168BC();
}

s32 func_800105EC(s32 arg0, u8 arg1, s8* arg2) {
    Sample* temp_v0;
    AudioSlowLoad* temp_v1;

    temp_v0 = func_8001079C(arg0, arg1);
    if (temp_v0 == NULL) {
        *arg2 = 0;
        return -1;
    }
    if (temp_v0->medium == 0) {
        *arg2 = 2;
        return 0;
    }
    temp_v1 = &gSlowLoads.slowLoad[gSlowLoads.unk_00];
    if (temp_v1->state == 3) {
        temp_v1->state = 0;
    }
    temp_v1->sample = *temp_v0;
    temp_v1->status = arg2;
    temp_v1->curRamAddr =
        AudioHeap_AllocTemporarySampleCache(temp_v0->size, arg0, temp_v0->sampleAddr, temp_v0->medium);
    if (temp_v1->curRamAddr == NULL) {
        if ((temp_v0->medium == 1) || (temp_v0->codec == 2)) {
            *arg2 = 0;
            return -1;
        } else {
            *arg2 = 3;
            return -1;
        }
    }
    temp_v1->state = 1;
    temp_v1->bytesRemaining = ALIGN16(temp_v0->size);
    temp_v1->ramAddr = temp_v1->curRamAddr;
    temp_v1->curDevAddr = temp_v0->sampleAddr;
    temp_v1->medium = temp_v0->medium;
    temp_v1->seqOrFontId = arg0;
    temp_v1->instId = arg1;
    gSlowLoads.unk_00 ^= 1;
    return 0;
}

Sample* func_8001079C(s32 arg0, s32 arg1) {
    Sample* sample;
    Drum* temp_v0_2;
    Instrument* temp_v0;

    if (arg1 < 0x80) {
        temp_v0 = func_80011D4C(arg0, arg1);
        if (temp_v0 == NULL) {
            return NULL;
        }
        sample = temp_v0->normalPitchTunedSample.sample;
    } else {
        temp_v0_2 = func_80011DFC(arg0, arg1 - 0x80);
        if (temp_v0_2 == NULL) {
            return NULL;
        }
        sample = temp_v0_2->tunedSample.sample;
    }
    return sample;
}

void func_80010800(void) {
}

void func_80010808(AudioSlowLoad* arg0) {
    Sample* temp_v0 = func_8001079C(arg0->seqOrFontId, arg0->instId);

    if (temp_v0 != NULL) {
        arg0->sample = *temp_v0;
        temp_v0->sampleAddr = arg0->ramAddr;
        temp_v0->medium = 0;
    }
}

void func_80010870(s32 arg0) {
    AudioTable* temp_s6 = gSampleBankTable;
    AudioSlowLoad* slowLoad;
    s32 i;

    for (i = 0; i < 2; i++) {
        slowLoad = &gSlowLoads.slowLoad[i];
        switch (slowLoad->state) {
            case 2:
                osRecvMesg(&slowLoad->msgQueue, NULL, 1);
                if (arg0 != 0) {
                    slowLoad->state = 3;
                    break;
                }
            case 1:
                slowLoad->state = 2;
                if (slowLoad->bytesRemaining == 0) {
                    func_80010808(&gSlowLoads.slowLoad[i]);
                    slowLoad->state = 3;
                    *slowLoad->status = 1;
                } else if (slowLoad->bytesRemaining < 0x1000) {
                    if (slowLoad->medium == 1) {
                        func_80010A80(slowLoad->curDevAddr, slowLoad->curRamAddr, slowLoad->bytesRemaining,
                                      temp_s6->unkMediumParam);
                    } else {
                        func_800109FC(&gSlowLoads.slowLoad[i], slowLoad->bytesRemaining);
                    }
                    slowLoad->bytesRemaining = 0;
                } else {
                    if (slowLoad->medium == 1) {
                        func_80010A80(slowLoad->curDevAddr, slowLoad->curRamAddr, 0x1000, temp_s6->unkMediumParam);
                    } else {
                        func_800109FC(&gSlowLoads.slowLoad[i], 0x1000);
                    }
                    slowLoad->bytesRemaining -= 0x1000;
                    slowLoad->curRamAddr += 0x1000;
                    slowLoad->curDevAddr += 0x1000;
                }
                break;
        }
    }
}

void func_800109FC(AudioSlowLoad* arg0, s32 arg1) {
    osInvalDCache(arg0->curRamAddr, arg1);
    osCreateMesgQueue(&arg0->msgQueue, &arg0->msg, 1);
    func_8000FBA8(&arg0->ioMesg, 0U, 0, arg0->curDevAddr, arg0->curRamAddr, arg1, &arg0->msgQueue, arg0->medium,
                  D_800C52F4);
}

void func_80010A80(s32 arg0, u8* arg1, u32 arg2, s32 arg3) {
    s32 sp1C = arg0;

    osInvalDCache(arg1, arg2);
    func_8000FC8C(func_8000FC7C(arg3, &sp1C), sp1C, arg1, arg2);
}

AudioAsyncLoad* func_80010AD8(u32 arg0, u8* arg1, s32 arg2, s32 arg3, s32 arg4, OSMesgQueue* arg5, u32 arg6) {
    AudioAsyncLoad* sp1C;
    AudioAsyncLoad* var_v0;
    u32 temp_t1;
    s32 i;

    for (i = 0; i < 16; i++) {
        if (gAsyncLoads[i].status == 0) {
            sp1C = &gAsyncLoads[i];
            break;
        }
    }
    if (i == 16) {
        return NULL;
    }
    sp1C->status = 1;
    sp1C->curDevAddr = arg0;
    sp1C->ramAddr = arg1;
    sp1C->curRamAddr = arg1;
    sp1C->bytesRemaining = arg2;

    if (arg4 == 0) {
        sp1C->chunkSize = 0x1000;
    } else {
        sp1C->chunkSize = ALIGN256(arg2 / arg4);
        if (sp1C->chunkSize < 0x100) {
            sp1C->chunkSize = 0x100;
        }
    }
    sp1C->retQueue = arg5;

    sp1C->delay = 3;
    sp1C->medium = arg3;
    sp1C->retMsg = arg6;

    osCreateMesgQueue(&sp1C->msgQueue, &sp1C->msg, 1);
    return sp1C;
}

void func_80010BF0(s32 arg0) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (gAsyncLoads[i].status == 1) {
            func_80010C60(&gAsyncLoads[i], arg0);
        }
    }
}

void func_80010C60(AudioAsyncLoad* arg0, s32 arg1) {
    AudioTable* sp5C;
    s32 pad1;
    s32 pad2;
    u32 temp;
    s32 sp24;
    s32 sp48;
    s32 sp44;
    SampleBankRelocInfo sp2C;

    sp5C = gSampleBankTable;
    if (arg0->delay > 1) {
        arg0->delay--;
        return;
    }
    if (arg0->delay == 1) {
        arg0->delay = 0;
    } else {
        if (arg1 != 0) {
            osRecvMesg(&arg0->msgQueue, NULL, 1);
            arg0->status = 0;
            return;
        }
        if (osRecvMesg(&arg0->msgQueue, NULL, 0) == -1) {
            return;
        }
    }
    if (arg0->bytesRemaining == 0) {
        temp = arg0->retMsg;
        pad1 = (temp >> 0x10) & 0xFF;
        sp24 = (temp >> 8) & 0xFF;
        pad2 = temp & 0xFF;
        switch (pad1) { /* irregular */
            case 0:
                if (gSeqLoadStatus[sp24] != 5) {
                    gSeqLoadStatus[sp24] = pad2;
                }
                break;
            case 2:
                if (gSampleFontLoadStatus[sp24] != 5) {
                    gSampleFontLoadStatus[sp24] = pad2;
                }
                break;
            case 1:
                if (gFontLoadStatus[sp24] != 5) {
                    gFontLoadStatus[sp24] = pad2;
                }
                sp48 = gSoundFontList[sp24].sampleBankId1;
                sp44 = gSoundFontList[sp24].sampleBankId2;
                sp2C.sampleBankId1 = sp48;
                sp2C.sampleBankId2 = sp44;
                if (sp48 != 0xFF) {
                    sp2C.baseAddr1 = func_8000F388(sp48, &sp2C.medium1);
                } else {
                    sp2C.baseAddr1 = NULL;
                }
                if (sp44 != 0xFF) {
                    sp2C.baseAddr2 = func_8000F388(sp44, &sp2C.medium2);
                } else {
                    sp2C.baseAddr2 = NULL;
                }
                func_80011120(sp24, arg0->ramAddr, &sp2C, 1);
                break;
        }
        arg0->status = 0;
        osSendMesg(arg0->retQueue, arg0->retMsg, 0);
    } else {
        if (arg0->bytesRemaining < arg0->chunkSize) {
            if (arg0->medium == 1) {
                func_80010F8C(arg0->curDevAddr, arg0->curRamAddr, arg0->bytesRemaining, sp5C->unkMediumParam);
            } else {
                func_80010EFC(arg0, arg0->bytesRemaining);
            }
            arg0->bytesRemaining = 0;
        } else {
            if (arg0->medium == 1) {
                func_80010F8C(arg0->curDevAddr, arg0->curRamAddr, arg0->chunkSize, sp5C->unkMediumParam);
            } else {
                func_80010EFC(arg0, arg0->chunkSize);
            }
            arg0->bytesRemaining -= arg0->chunkSize;
            arg0->curDevAddr += arg0->chunkSize;
            arg0->curRamAddr += arg0->chunkSize;
        }
    }
}

void func_80010EFC(AudioAsyncLoad* arg0, u32 arg1) {
    arg1 = ALIGN16(arg1);
    osInvalDCache(arg0->curRamAddr, arg1);
    osCreateMesgQueue(&arg0->msgQueue, &arg0->msg, 1);
    if (arg1) {}
    func_8000FBA8(&arg0->ioMesg, 0, 0, arg0->curDevAddr, arg0->curRamAddr, arg1, &arg0->msgQueue, arg0->medium,
                  D_800C53AC);
}

void func_80010F8C(s32 arg0, u8* arg1, u32 arg2, s32 arg3) {
    s32 sp1C = arg0;

    osInvalDCache(arg1, arg2);
    func_8000FC8C(func_8000FC7C(arg3, &sp1C), sp1C, arg1, arg2);
}

void func_80010FE4(TunedSample* arg0, u32 arg1, SampleBankRelocInfo* arg2) {
    void* temp_v0;
    Sample* temp_v1;

    if ((u32) arg0->sample < 0x80000001U) {
        temp_v1 = arg0->sample = temp_v0 = (u32) arg0->sample + arg1;
        // arg0->sample = temp_v1;
        if ((temp_v1->size != 0) && (temp_v1->isRelocated != 1)) {
            temp_v1->loop = temp_v0 = (u32) temp_v1->loop + arg1;
            temp_v1->book = temp_v0 = (u32) temp_v1->book + arg1;
            switch (temp_v1->medium) { /* irregular */
                case 0:
                    temp_v1->sampleAddr = temp_v0 = temp_v1->sampleAddr + arg2->baseAddr1;
                    temp_v1->medium = arg2->medium1;
                    break;
                case 1:
                    temp_v1->sampleAddr = temp_v0 = temp_v1->sampleAddr + arg2->baseAddr2;
                    temp_v1->medium = arg2->medium2;
                    break;
                case 2:
                case 3:
                    break;
            }
            temp_v1->isRelocated = true;
            if (temp_v1->unk_bit26 && (temp_v1->medium != 0)) {
                gUsedSamples[gNumUsedSamples++] = temp_v1;
            }
        }
    }
}

#ifdef NON_MATCHING
// gPreloadSampleStackTop ends up in the wrong register near the end. https://decomp.me/scratch/tGyym
s32 func_80011120(s32 arg0, u32 arg1, SampleBankRelocInfo* arg2, s32 arg3) {
    s32 i;
    Sample* temp_s0;
    u8* sp5C;
    s32 size;
    s32 pad1;
    u32 nChunks;
    s32 sp4C;

    sp4C = 0;
    if (gPreloadSampleStackTop != 0) {
        sp4C = 1;
    } else {
        D_80146D80 = 0;
    }
    gNumUsedSamples = 0;
    func_8000F864(arg0, arg1, arg2);
    size = 0;
    for (i = 0; i < gNumUsedSamples; i++) {
        size += ALIGN16(gUsedSamples[i]->size);
    }
    if (size && size) {}
    for (i = 0; i < gNumUsedSamples; i++) {
        if (gPreloadSampleStackTop == 120) {
            break;
        }
        temp_s0 = gUsedSamples[i];
        //! Bug: Those are assignments, not equality checks.
        switch (arg3) {
            case 0:
                if (temp_s0->medium = arg2->medium1) {
                    sp5C = AudioHeap_AllocPersistentSampleCache(temp_s0->size, arg2->sampleBankId1, temp_s0->sampleAddr,
                                                                temp_s0->medium);
                } else if (temp_s0->medium = arg2->medium2) {
                    sp5C = AudioHeap_AllocPersistentSampleCache(temp_s0->size, arg2->sampleBankId2, temp_s0->sampleAddr,
                                                                temp_s0->medium);
                }
                break;
            case 1:
                if (temp_s0->medium = arg2->medium1) {
                    sp5C = AudioHeap_AllocTemporarySampleCache(temp_s0->size, arg2->sampleBankId1, temp_s0->sampleAddr,
                                                               temp_s0->medium);
                } else if (temp_s0->medium = arg2->medium2) {
                    sp5C = AudioHeap_AllocTemporarySampleCache(temp_s0->size, arg2->sampleBankId2, temp_s0->sampleAddr,
                                                               temp_s0->medium);
                }
                break;
        }
        if (sp5C == NULL) {
            continue;
        }
        switch (arg3) {
            case 0:
                if (temp_s0->medium == 1) {
                    func_8000FB50(temp_s0->sampleAddr, sp5C, temp_s0->size, gSampleBankTable->unkMediumParam);
                    temp_s0->sampleAddr = sp5C;
                    temp_s0->medium = 0;
                } else {
                    func_8000FA28(temp_s0->sampleAddr, sp5C, temp_s0->size, temp_s0->medium);
                    temp_s0->sampleAddr = sp5C;
                    temp_s0->medium = 0;
                }
                break;
            case 1:
                gPreloadSampleStack[gPreloadSampleStackTop].sample = temp_s0;
                gPreloadSampleStack[gPreloadSampleStackTop].ramAddr = sp5C;
                gPreloadSampleStack[gPreloadSampleStackTop].encodedInfo = (gPreloadSampleStackTop << 24) | 0xFFFFFF;
                gPreloadSampleStack[gPreloadSampleStackTop].isFree = 0;
                gPreloadSampleStack[gPreloadSampleStackTop].endAndMediumKey =
                    (u32) temp_s0->sampleAddr + temp_s0->size + temp_s0->medium;
                gPreloadSampleStackTop++;
                break;
        }
    }

    gNumUsedSamples = 0;
    if ((gPreloadSampleStackTop != 0) && (sp4C == 0)) {
        temp_s0 = gPreloadSampleStack[gPreloadSampleStackTop - 1].sample;
        if (1) {}
        nChunks = (temp_s0->size / 0x1000) + 1;

        func_80010AD8(temp_s0->sampleAddr, gPreloadSampleStack[gPreloadSampleStackTop - 1].ramAddr, temp_s0->size,
                      temp_s0->medium, nChunks, &gPreloadSampleQueue,
                      gPreloadSampleStack[gPreloadSampleStackTop - 1].encodedInfo);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_load/func_80011120.s")
#endif

s32 func_8001154C(s32 arg0) {
    Sample* sample;
    u32 sp50;
    u32 key;
    s32 temp;
    u32 temp2;
    s32 temp3;

    if (gPreloadSampleStackTop > 0) {
        if (arg0 != 0) {
            if (osRecvMesg(&gPreloadSampleQueue, (OSMesg) &sp50, 0)) {}
            gPreloadSampleStackTop = 0;
            return 0;
        }
        if (osRecvMesg(&gPreloadSampleQueue, (OSMesg) &sp50, 0) == -1) {
            return 0;
        }
        sp50 >>= 0x18;

        if (gPreloadSampleStack[sp50].isFree == 0) {
            sample = gPreloadSampleStack[sp50].sample;
            key = sample->sampleAddr + sample->size + sample->medium;
            if (key == gPreloadSampleStack[sp50].endAndMediumKey) {
                sample->sampleAddr = gPreloadSampleStack[sp50].ramAddr;
                sample->medium = 0;
            }
            gPreloadSampleStack[sp50].isFree = 1;
        }
        while (true) {
            if (gPreloadSampleStackTop <= 0) {
                break;
            }
            if (gPreloadSampleStack[gPreloadSampleStackTop - 1].isFree == 1) {
                gPreloadSampleStackTop--;
                continue;
            }

            sample = gPreloadSampleStack[gPreloadSampleStackTop - 1].sample;
            temp = sample->sampleAddr;
            temp2 = sample->size;
            temp3 = (temp2 >> 0xC) + 1;
            key = temp + temp2 + sample->medium;
            if (key != gPreloadSampleStack[gPreloadSampleStackTop - 1].endAndMediumKey) {
                gPreloadSampleStack[gPreloadSampleStackTop - 1].isFree = 1;
                gPreloadSampleStackTop--;
            } else {
                temp2 = sample->size;
                func_80010AD8(temp, gPreloadSampleStack[gPreloadSampleStackTop - 1].ramAddr, temp2, sample->medium,
                              temp3, &gPreloadSampleQueue, gPreloadSampleStack[gPreloadSampleStackTop - 1].encodedInfo);
                break;
            }
        }
    }
    return 1;
}

s32 func_80011710(Sample* sample, s32 numLoaded, Sample** arg2) {
    s32 i;

    for (i = 0; i < numLoaded; i++) {
        if (sample->sampleAddr == arg2[i]->sampleAddr) {
            break;
        }
    }
    if (i == numLoaded) {
        arg2[numLoaded++] = sample;
    }
    return numLoaded;
}

s32 func_80011758(s32 bankId, Sample** list) {
    s32 i;
    Drum* drum;
    Instrument* inst;
    s32 numLoaded;
    s32 numDrums;
    s32 numInstruments;

    numLoaded = 0;
    numDrums = gSoundFontList[bankId].numDrums;
    numInstruments = gSoundFontList[bankId].numInstruments;

    for (i = 0; i < numDrums; i++) {
        drum = func_80011DFC(bankId, i);
        if (drum == NULL) {
            continue;
        }
        numLoaded = func_80011710(drum->tunedSample.sample, numLoaded, list);
    }
    for (i = 0; i < numInstruments; i++) {
        inst = func_80011D4C(bankId, i);
        if (inst == NULL) {
            continue;
        }
        if (inst->normalRangeLo != 0) {
            numLoaded = func_80011710(inst->lowPitchTunedSample.sample, numLoaded, list);
        }
        if (inst->normalRangeHi != 127) {
            numLoaded = func_80011710(inst->highPitchTunedSample.sample, numLoaded, list);
        }
        numLoaded = func_80011710(inst->normalPitchTunedSample.sample, numLoaded, list);
    }
    return numLoaded;
}

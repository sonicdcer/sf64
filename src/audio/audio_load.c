#include "sys.h"
#include "sf64dma.h"
#include "sf64audio_provisional.h"

static char devstr00[] = "CAUTION:WAVE CACHE FULL %d";
static char D_800C4F6C[] = "SUPERDMA";
static char devstr02[] = "Bank Change... top %d lba %d\n";
static char devstr03[] = "BankCount %d\n";
static char devstr04[] = "BANK LOAD MISS! FOR %d\n";
static char devstr05[] = "BankCount %d\n";
static char devstr06[] = "Flush Start\n";
static char devstr07[] = "%d ->%d\n";
static char devstr08[] = "useflag %d\n";
static char devstr09[] = "BankCount %d\n";
static char devstr10[] = "%2x ";
static char devstr11[] = "StartSeq (Group %d,Seq %d) Process finish\n";
static char devstr12[] = "LoadCtrl, Ptr %x and Media is %d\n";
static char devstr13[] = "Load Bank, Type %d , ID %d\n";
static char devstr14[] = "get auto\n";
static char devstr15[] = "get s-auto %x\n";
static char devstr16[] = "Seq %d Write ID OK %d!\n";
static char devstr17[] = "Banknumber %d\n";
static char devstr18[] = "Bank Offset %x %d %d\n";
static char devstr19[] = "PEP Touch %x \n";
static char D_800C50E8[] = "FastCopy";

s32 D_80146D80;
s32 PAD_80146D88[2];
AudioSlowLoadBuffer gSlowLoads;

s32 AudioLoad_DiscardFont(s32 fontId);

void AudioLoad_SyncInitSeqPlayerInternal(s32 playerIdx, s32 seqId, s32 arg2);
void* AudioLoad_SyncLoadSeq(s32 seqId);
void* AudioLoad_SyncLoadSampleBank(u32 sampleBankId, s32* outMedium);
void* AudioLoad_SyncLoadFont(s32 fontId);
void* AudioLoad_SyncLoad(u32 tableType, u32 id, s32* didAllocate);
s32 AudioLoad_GetLoadTableIndex(s32 tableType, u32 entryId);
void* AudioLoad_SearchCaches(s32 tableType, s32 id);
AudioTable* AudioLoad_GetLoadTable(s32 tableType);
void AudioLoad_SyncDma(u32 devAddr, u8* ramAddr, u32 size, s32 medium);
void AudioLoad_SyncDmaUnkMedium(u32 devAddr, u8* ramAddr, u32 size, s32 unkMediumParam);
s32 AudioLoad_Dma(OSIoMesg* mesg, u32 priority, s32 direction, u32 devAddr, void* ramAddr, u32 size,
                  OSMesgQueue* retQueue, s32 medium, const char* dmaType);
s32 func_8000FC7C(u32 unkMediumParam, u32* addrPtr);
void func_8000FC8C(s32 unkParam2, u32 addr, u8* ramAddr, u32 size);
void AudioLoad_SyncLoadSimple(u32 tableType, u32 id);
void* AudioLoad_AsyncLoadInner(s32 tableType, s32 id, s32 nChunks, s32 retData, OSMesgQueue* retQueue);

Sample* AudioLoad_GetFontSample(s32 fontId, s32 instId);
void AudioLoad_ProcessSlowLoads(s32 resetStatus);
void AudioLoad_DmaSlowCopy(AudioSlowLoad* slowLoad, s32 size);
void AudioLoad_DmaSlowCopyUnkMedium(u32 devAddr, u8* ramAddr, u32 size, s32 unkMediumParam);
AudioAsyncLoad* AudioLoad_StartAsyncLoad(u32 devAddr, u8* ramAddr, u32 size, s32 medium, s32 nChunks,
                                         OSMesgQueue* retQueue, u32 retMesg);
void AudioLoad_ProcessAsyncLoads(s32 resetStatus);
void AudioLoad_ProcessAsyncLoad(AudioAsyncLoad* asyncLoad, s32 resetStatus);
void AudioLoad_AsyncDma(AudioAsyncLoad* asyncLoad, u32 size);
void AudioLoad_AsyncDmaUnkMedium(u32 devAddr, u8* ramAddr, u32 size, s32 unkMediumParam);
void AudioLoad_RelocateSample(TunedSample* tSample, u32 fontDataAddr, SampleBankRelocInfo* relocInfo);
s32 AudioLoad_RelocateFontAndPreloadSamples(s32 fontId, u32 fontDataAddr, SampleBankRelocInfo* relocData, s32 isAsync);
s32 AudioLoad_ProcessSamplePreloads(s32 resetStatus);
s32 AudioLoad_GetSamplesForFont(s32 fontId, Sample** sampleSet);

void AudioLoad_DecreaseSampleDmaTtls(void) {
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

void* AudioLoad_DmaSampleData(u32 devAddr, u32 size, u32 arg2, u8* dmaIndexRef, s32 medium) {
    u32 i;
    SampleDma* dma;
    bool hasDma = false;
    s32 bufferPos;
    u32 dmaDevAddr;
    s32 sp38;

    if ((arg2 != 0) || (*dmaIndexRef >= gSampleDmaListSize1)) {
        for (i = gSampleDmaListSize1; i < gSampleDmaCount; i++) {
            dma = &gSampleDmas[i];
            bufferPos = devAddr - dma->devAddr;
            if ((0 <= bufferPos) && (bufferPos <= (dma->size - size))) {
                if ((dma->ttl == 0) && (gSampleDmaReuseQueue2RdPos != gSampleDmaReuseQueue2WrPos)) {
                    if (dma->reuseIndex != gSampleDmaReuseQueue2RdPos) {
                        gSampleDmaReuseQueue2[dma->reuseIndex] = gSampleDmaReuseQueue2[gSampleDmaReuseQueue2RdPos];
                        gSampleDmas[gSampleDmaReuseQueue2[gSampleDmaReuseQueue2RdPos]].reuseIndex = dma->reuseIndex;
                    }
                    gSampleDmaReuseQueue2RdPos++;
                }
                dma->ttl = 60;
                *dmaIndexRef = i;
                return &dma->ramAddr[devAddr - dma->devAddr];
            }
        }
        if ((gSampleDmaReuseQueue2RdPos != gSampleDmaReuseQueue2WrPos) && (arg2 != 0)) {
            sp38 = gSampleDmaReuseQueue2[gSampleDmaReuseQueue2RdPos];
            gSampleDmaReuseQueue2RdPos++;
            dma = &gSampleDmas[sp38];
            hasDma = true;
        }
    } else {
        dma = &gSampleDmas[*dmaIndexRef];
        for (i = 0; i < gSampleDmaListSize1; i++) {
            bufferPos = devAddr - dma->devAddr;
            if ((0 <= bufferPos) && (bufferPos <= (dma->size - size))) {
                if (dma->ttl == 0) {
                    if (dma->reuseIndex != gSampleDmaReuseQueue1RdPos) {
                        gSampleDmaReuseQueue1[dma->reuseIndex] = gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos];
                        gSampleDmas[gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos]].reuseIndex = dma->reuseIndex;
                    }
                    if (1) {}
                    gSampleDmaReuseQueue1RdPos++;
                }
                dma->ttl = 2;
                return &dma->ramAddr[devAddr - dma->devAddr];
            }
            dma = &gSampleDmas[i];
        }
    }

    if (hasDma == 0) {
        sp38 = gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos];
        gSampleDmaReuseQueue1RdPos++;
        dma = &gSampleDmas[sp38];
    }
    dmaDevAddr = devAddr & ~0xF;
    dma->ttl = 2;
    dma->devAddr = dmaDevAddr;
    dma->sizeUnused = dma->size;
    AudioLoad_Dma(&gCurAudioFrameDmaIoMsgBuf[gCurAudioFrameDmaCount++], 0, 0, dmaDevAddr, dma->ramAddr, dma->size,
                  &gCurAudioFrameDmaQueue, medium, D_800C4F6C);
    *dmaIndexRef = sp38;
    return devAddr - dmaDevAddr + dma->ramAddr;
}

void AudioLoad_InitSampleDmaBuffers(s32 numNotes) {
    s32 i;
    u8* dma;

    gSampleDmaBuffSize = 0x2D0;
    for (i = 0; i < (3 * gNumNotes * gAudioBufferParams.specUnk4); i++) {
        dma = AudioHeap_Alloc(&gMiscPool, gSampleDmaBuffSize);
        gSampleDmas[gSampleDmaCount].ramAddr = dma;
        if (dma == NULL) {
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
        dma = AudioHeap_Alloc(&gMiscPool, gSampleDmaBuffSize);
        gSampleDmas[gSampleDmaCount].ramAddr = dma;
        if (dma == NULL) {
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

void AudioLoad_InitTable(AudioTable* table, u8* romAddr, u16 unkMediumParam) {
    s32 i;

    table->unkMediumParam = unkMediumParam;
    table->romAddr = romAddr;

    for (i = 0; i < table->numEntries; i++) {
        if ((table->entries[i].size != 0) && (table->entries[i].medium == MEDIUM_CART)) {
            table->entries[i].romAddr += (u32) romAddr;
        }
    }
}

void* AudioLoad_SyncLoadSeqFonts(s32 seqId, u32* outFontId) {
    s32 index = ((u16*) gSeqFontTable)[AudioLoad_GetLoadTableIndex(0, seqId)];
    s32 fontId = 0xFF;
    s32 numFonts = gSeqFontTable[index++];
    void* soundFontData;

    for (numFonts; numFonts > 0; numFonts--) {
        fontId = gSeqFontTable[index++];
        soundFontData = AudioLoad_SyncLoadFont(fontId);
    }
    *outFontId = fontId;
    return soundFontData;
}

void AudioLoad_SyncLoadSeqParts(s32 seqId, s32 flags) {
    s32 pad;
    u32 fontId;

    seqId = AudioLoad_GetLoadTableIndex(0, seqId);
    if (flags & 2) {
        AudioLoad_SyncLoadSeqFonts(seqId, &fontId);
    }
    if (flags & 1) {
        AudioLoad_SyncLoadSeq(seqId);
    }
}

s32 AudioLoad_SyncLoadSample(Sample* sample, s32 fontId) {
    u8* sampleAddr;

    if ((sample->isRelocated == 1) && (sample->medium != 0)) {
        sampleAddr = AudioHeap_AllocPersistentSampleCache(sample->size, fontId, sample->sampleAddr, sample->medium);
        if (sampleAddr == NULL) {
            return -1;
        }
        if (sample->medium == MEDIUM_UNK) {
            AudioLoad_SyncDmaUnkMedium(sample->sampleAddr, sampleAddr, sample->size, gSampleBankTable->unkMediumParam);
        } else {
            AudioLoad_SyncDma(sample->sampleAddr, sampleAddr, sample->size, sample->medium);
        }
        sample->medium = MEDIUM_RAM;
        sample->sampleAddr = sampleAddr;
    }
}

s32 AudioLoad_SyncLoadInstrument(s32 fontId, s32 instId, s32 drumId) {
    Instrument* instrument;
    Drum* drum;

    if (instId < 0x7F) {
        instrument = Audio_GetInstrument(fontId, instId);
        if (instrument == NULL) {
            return -1;
        }
        if (instrument->normalRangeLo != 0) {
            AudioLoad_SyncLoadSample(instrument->lowPitchTunedSample.sample, fontId);
        }
        AudioLoad_SyncLoadSample(instrument->normalPitchTunedSample.sample, fontId);
        if (instrument->normalRangeHi != 0x7F) {
            AudioLoad_SyncLoadSample(instrument->highPitchTunedSample.sample, fontId);
        }
    } else if (instId == 0x7F) {
        drum = Audio_GetDrum(fontId, drumId);
        if (drum == NULL) {
            return -1;
        }
        AudioLoad_SyncLoadSample(drum->tunedSample.sample, fontId);
        return 0;
    }
}

void AudioLoad_AsyncLoadSampleBank(s32 sampleBankId, s32 nChunks, s32 retData, OSMesgQueue* retQueue) {
    if (AudioLoad_AsyncLoadInner(2, AudioLoad_GetLoadTableIndex(2, sampleBankId), nChunks, retData, retQueue) == NULL) {
        osSendMesg(retQueue, NULL, 0);
    }
}

void AudioLoad_AsyncLoadSeq(s32 seqId, s32 nChunks, s32 retData, OSMesgQueue* retQueue) {
    s32 index = ((u16*) gSeqFontTable)[AudioLoad_GetLoadTableIndex(0, seqId)];
    s32 fontsLeft = gSeqFontTable[index++];

    for (fontsLeft; fontsLeft > 0; fontsLeft--) {
        AudioLoad_AsyncLoadInner(1, AudioLoad_GetLoadTableIndex(1, gSeqFontTable[index++]), nChunks, retData, retQueue);
    }
}

u8* AudioLoad_GetFontsForSequence(s32 seqId, u32* outNumFonts) {
    s32 index = ((u16*) gSeqFontTable)[AudioLoad_GetLoadTableIndex(0, seqId)];

    *outNumFonts = gSeqFontTable[index++];
    if (*outNumFonts == 0) {
        return NULL;
    }
    return &gSeqFontTable[index];
}

void AudioLoad_DiscardSeqFonts(s32 seqId) {
    s32 index = ((u16*) gSeqFontTable)[AudioLoad_GetLoadTableIndex(0, seqId)];
    s32 numFonts = gSeqFontTable[index++];
    u32 fontId;

    while (numFonts > 0) {
        numFonts--;
        fontId = AudioLoad_GetLoadTableIndex(1, gSeqFontTable[index++]);
        if (AudioHeap_SearchPermanentCache(1, fontId) == NULL) {
            AudioLoad_DiscardFont(fontId);
            if (gFontLoadStatus[fontId] != 5) {
                if (1) {}
                gFontLoadStatus[fontId] = 0;
            }
        }
    }
}

s32 AudioLoad_DiscardFont(s32 fontId) {
    AudioCache* cache = &gFontCache;
    AudioTemporaryCache* tcache;
    AudioPersistentCache* pcache;
    s32 i;

    tcache = &cache->temporary;
    if (tcache->entries[0].id == fontId) {
        tcache->entries[0].id = -1;
    } else if (tcache->entries[1].id == fontId) {
        tcache->entries[1].id = -1;
    }
    pcache = &cache->persistent;
    for (i = 0; i < pcache->numEntries; i++) {
        if (pcache->entries[i].id == fontId) {
            pcache->entries[i].id = -1;
        }
    }
    AudioHeap_DiscardFont(fontId);
}

void AudioLoad_SyncInitSeqPlayer(s32 playerIdx, s32 seqId, s32 arg2) {
    AudioLoad_SyncInitSeqPlayerInternal(playerIdx, seqId, arg2);
}

void AudioLoad_SyncInitSeqPlayerInternal(s32 playerIdx, s32 seqId, s32 arg2) {
    s32 index;
    s32 numFonts;
    u8* seqData;
    s32 fontId;
    s32 i;

    seqId = AudioLoad_GetLoadTableIndex(0, seqId);
    func_800144E4(&gSeqPlayers[playerIdx]);
    index = ((u16*) gSeqFontTable)[seqId];
    numFonts = gSeqFontTable[index++];
    fontId = 0xFF;
    for (numFonts; numFonts > 0; numFonts--) {
        fontId = gSeqFontTable[index++];
        AudioLoad_SyncLoadFont(fontId);
    }
    seqData = AudioLoad_SyncLoadSeq(seqId);
    func_80016804(playerIdx);
    gSeqPlayers[playerIdx].seqId = seqId;
    gSeqPlayers[playerIdx].defaultFont = fontId;
    gSeqPlayers[playerIdx].enabled = true;
    gSeqPlayers[playerIdx].seqData = seqData;
    gSeqPlayers[playerIdx].scriptState.pc = seqData;
    gSeqPlayers[playerIdx].scriptState.depth = 0;
    gSeqPlayers[playerIdx].delay = 0;
    gSeqPlayers[playerIdx].finished = false;
    for (i = 0; i < 16; i++) {
        ;
    }
}

void* AudioLoad_SyncLoadSeq(s32 seqId) {
    s32 seqIdx = AudioLoad_GetLoadTableIndex(0, seqId);
    s32 didAllocate;

    return AudioLoad_SyncLoad(0, seqIdx, &didAllocate);
}

void* AudioLoad_SyncLoadSampleBank(u32 sampleBankId, s32* outMedium) {
    void* ramAddr;
    AudioTable* sampleBankTable = AudioLoad_GetLoadTable(2);
    s32 cachePolicy;
    s32 noLoad;

    sampleBankId = AudioLoad_GetLoadTableIndex(2, sampleBankId);
    ramAddr = AudioLoad_SearchCaches(2, sampleBankId);
    if (ramAddr != NULL) {
        if (gSampleFontLoadStatus[sampleBankId] != 5) {
            gSampleFontLoadStatus[sampleBankId] = 2;
        }
        *outMedium = MEDIUM_RAM;
        return ramAddr;
    }
    cachePolicy = sampleBankTable->entries[sampleBankId].cachePolicy;
    if (cachePolicy == 4) {
        *outMedium = sampleBankTable->entries[sampleBankId].medium;
        return sampleBankTable->entries[sampleBankId].romAddr;
    }
    ramAddr = AudioLoad_SyncLoad(2, sampleBankId, &noLoad);
    if (ramAddr != NULL) {
        *outMedium = MEDIUM_RAM;
        return ramAddr;
    }
    *outMedium = sampleBankTable->entries[sampleBankId].medium;
    return sampleBankTable->entries[sampleBankId].romAddr;
}

void* AudioLoad_SyncLoadFont(s32 fontId) {
    void* fontData;
    s32 sampleBankId1;
    u32 sampleBankId2;
    s32 didAllocate;
    SampleBankRelocInfo relocInfo;

    fontId = AudioLoad_GetLoadTableIndex(1, fontId);
    sampleBankId1 = gSoundFontList[fontId].sampleBankId1;
    sampleBankId2 = gSoundFontList[fontId].sampleBankId2;

    relocInfo.sampleBankId1 = sampleBankId1;
    relocInfo.sampleBankId2 = sampleBankId2;
    if (sampleBankId1 != 0xFF) {
        relocInfo.baseAddr1 = AudioLoad_SyncLoadSampleBank(sampleBankId1, &relocInfo.medium1);
    } else {
        relocInfo.baseAddr1 = NULL;
    }
    if (sampleBankId2 != 0xFF) {
        relocInfo.baseAddr2 = AudioLoad_SyncLoadSampleBank(sampleBankId2, &relocInfo.medium2);
    } else {
        relocInfo.baseAddr2 = NULL;
    }
    fontData = AudioLoad_SyncLoad(1, fontId, &didAllocate);
    if (fontData == NULL) {
        return NULL;
    }
    if (didAllocate == 1) {
        AudioLoad_RelocateFontAndPreloadSamples(fontId, fontData, &relocInfo, 0);
    }
    return fontData;
}

void* AudioLoad_SyncLoad(u32 tableType, u32 id, s32* didAllocate) {
    u32 size;
    AudioTable* table;
    u8* ramAddr;
    u32 medium;
    s32 loadStatus;
    u32 romAddr;
    s32 pad;
    s32 cachePolicy;

    ramAddr = AudioLoad_SearchCaches(tableType, id);
    if (ramAddr != NULL) {
        loadStatus = 2;
        *didAllocate = false;
    } else {
        table = AudioLoad_GetLoadTable(tableType);
        size = table->entries[id].size;
        size = ALIGN16(size);
        medium = table->entries[id].medium;
        cachePolicy = table->entries[id].cachePolicy;
        romAddr = table->entries[id].romAddr;
        switch (cachePolicy) {
            case 0:
                ramAddr = AudioHeap_AllocPermanent(tableType, id, size);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                break;
            case 1:
                ramAddr = AudioHeap_AllocCached(tableType, size, 1, id);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                break;
            case 2:
                ramAddr = AudioHeap_AllocCached(tableType, size, 0, id);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                break;
            case 3:
            case 4:
                ramAddr = AudioHeap_AllocCached(tableType, size, 2, id);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                break;
        }

        *didAllocate = true;
        if (medium == MEDIUM_UNK) {
            AudioLoad_SyncDmaUnkMedium(romAddr, ramAddr, size, table->unkMediumParam);
        } else {
            AudioLoad_SyncDma(romAddr, ramAddr, size, medium);
        }
        loadStatus = (cachePolicy == 0) ? 5 : 2;
    }
    switch (tableType) {
        case SEQUENCE_TABLE:
            if (gSeqLoadStatus[id] != 5) {
                gSeqLoadStatus[id] = loadStatus;
            }
            break;
        case FONT_TABLE:
            if (gFontLoadStatus[id] != 5) {
                gFontLoadStatus[id] = loadStatus;
            }
            break;
        case SAMPLE_TABLE:
            if (gSampleFontLoadStatus[id] != 5) {
                gSampleFontLoadStatus[id] = loadStatus;
            }
            break;
    }
    return ramAddr;
}

s32 AudioLoad_GetLoadTableIndex(s32 tableType, u32 entryId) {
    AudioTable* table = AudioLoad_GetLoadTable(tableType);

    if (table->entries[entryId].size == 0) {
        entryId = table->entries[entryId].romAddr;
    }
    return entryId;
}

void* AudioLoad_SearchCaches(s32 tableType, s32 id) {
    void* ramAddr;

    ramAddr = AudioHeap_SearchPermanentCache(tableType, id);
    if (ramAddr != NULL) {
        return ramAddr;
    }
    ramAddr = AudioHeap_SearchCaches(tableType, 2, id);
    if (ramAddr != NULL) {
        return ramAddr;
    }
    return NULL;
}

AudioTable* AudioLoad_GetLoadTable(s32 tableType) {
    AudioTable* table;

    switch (tableType) {
        case SEQUENCE_TABLE:
            table = gSequenceTable;
            break;
        case FONT_TABLE:
            table = gSoundFontTable;
            break;
        case SAMPLE_TABLE:
            table = gSampleBankTable;
            break;
        default:
            table = NULL;
            break;
    }
    return table;
}

void AudioLoad_RelocateFont(s32 fontId, u32 fontBaseAddr, void* relocData) {
    u32* fontDataPtrs = fontBaseAddr;
    u32** drumDataPtrs = fontBaseAddr;
    s32 numDrums;
    Drum* drum;
    Instrument* instrument;
    u32 offset;
    s32 i;
    s32 numInstruments;

    numDrums = gSoundFontList[fontId].numDrums;
    numInstruments = gSoundFontList[fontId].numInstruments;

    if ((fontDataPtrs[0] != 0) && (numDrums != 0)) {
        fontDataPtrs[0] += fontBaseAddr;

        for (i = 0; i < numDrums; i++) {
            offset = (*drumDataPtrs)[i];
            if (offset != 0) {
                drum = offset += fontBaseAddr;
                (*drumDataPtrs)[i] = drum;
                //  temp2;
                if (!drum->isRelocated) {
                    AudioLoad_RelocateSample(&drum->tunedSample, fontBaseAddr, relocData);
                    offset = (u32) drum->envelope;
                    drum->envelope = offset + fontBaseAddr;
                    drum->isRelocated = true;
                }
            }
        }
    }
    for (i = 1; i <= numInstruments; i++) {
        if (fontDataPtrs[i] != 0) {

            fontDataPtrs[i] += fontBaseAddr;

            instrument = fontDataPtrs[i];
            if (instrument->isRelocated == 0) {
                if (instrument->normalRangeLo != 0) {
                    AudioLoad_RelocateSample(&instrument->lowPitchTunedSample, fontBaseAddr, relocData);
                }
                AudioLoad_RelocateSample(&instrument->normalPitchTunedSample, fontBaseAddr, relocData);
                if (instrument->normalRangeHi != 0x7F) {
                    AudioLoad_RelocateSample(&instrument->highPitchTunedSample, fontBaseAddr, relocData);
                }
                offset = (u32) instrument->envelope;
                instrument->envelope = offset + fontBaseAddr;
                instrument->isRelocated = true;
            }
        }
    }
    gSoundFontList[fontId].drums = fontDataPtrs[0];
    gSoundFontList[fontId].instruments = (u32) &fontDataPtrs[1];
}

static char D_800C50F4[] = "FastCopy";

void AudioLoad_SyncDma(u32 devAddr, u8* ramAddr, u32 size, s32 medium) {
    size = ALIGN16(size);
    osInvalDCache(ramAddr, size);
    while (true) {
        if (size < 0x400) {
            break;
        }
        AudioLoad_Dma(&gSyncDmaIoMsg, 1, 0, devAddr, ramAddr, 0x400, &gSyncDmaQueue, medium, D_800C50E8);
        osRecvMesg(&gSyncDmaQueue, NULL, 1);
        size -= 0x400;
        devAddr += 0x400;
        ramAddr += 0x400;
    }
    if (size != 0) {
        AudioLoad_Dma(&gSyncDmaIoMsg, 1, 0, devAddr, ramAddr, size, &gSyncDmaQueue, medium, D_800C50F4);
        osRecvMesg(&gSyncDmaQueue, NULL, 1);
    }
}

void AudioLoad_SyncDmaUnkMedium(u32 devAddr, u8* ramAddr, u32 size, s32 unkMediumParam) {
    s32 addr = devAddr;

    osInvalDCache(ramAddr, size);
    func_8000FC8C(func_8000FC7C(unkMediumParam, &addr), addr, ramAddr, size);
}

static char devstr22[] = "Error: Cannot DMA Media [%d]\n";
static char devstr23[] = "Warning: size not align 16 %x  (%s)\n";
static char devstr24[] = "Load Bank BG, Type %d , ID %d\n";
static char devstr25[] = "get auto\n";
static char devstr26[] = "get s-auto %x\n";

s32 AudioLoad_Dma(OSIoMesg* mesg, u32 priority, s32 direction, u32 devAddr, void* ramAddr, u32 size,
                  OSMesgQueue* retQueue, s32 medium, const char* dmaType) {
    OSPiHandle* handle;

    switch (medium) {
        case MEDIUM_CART:
            handle = osCartRomInit();
            break;
        case MEDIUM_DISK_DRIVE:
            handle = func_8001EE60();
            break;
        default:
            return 0;
    }

    if (size & 0xF) {
        size = ALIGN16(size);
    }
    mesg->hdr.pri = priority;
    mesg->hdr.retQueue = retQueue;
    mesg->dramAddr = ramAddr;
    mesg->devAddr = devAddr;
    mesg->size = size;
    handle->transferInfo.cmdType = 2;
    osEPiStartDma(handle, mesg, direction);

    return 0;
}

s32 func_8000FC7C(u32 unkMediumParam, u32* addrPtr) {
    return 0;
}

void func_8000FC8C(s32 unkParam2, u32 addr, u8* ramAddr, u32 size) {
}

void AudioLoad_SyncLoadSimple(u32 tableType, u32 id) {
    s32 didAllocate;

    AudioLoad_SyncLoad(tableType, id, &didAllocate);
}

void* AudioLoad_AsyncLoadInner(s32 tableType, s32 id, s32 nChunks, s32 retData, OSMesgQueue* retQueue) {
    u32 size;
    AudioTable* table;
    u8* ramAddr;
    s32 medium;
    s32 cachePolicy;
    u32 romAddr;
    s32 loadStatus;

    switch (tableType) {
        case 0:
            if (gSeqLoadStatus[id] == 1) {
                return NULL;
            }
            break;
        case 1:
            if (gFontLoadStatus[id] == 1) {
                return NULL;
            }
            break;
        case 2:
            if (gSampleFontLoadStatus[id] == 1) {
                return NULL;
            }
            break;
    }
    ramAddr = AudioLoad_SearchCaches(tableType, id);
    if (ramAddr != NULL) {
        loadStatus = 2;
        osSendMesg(retQueue, (void*) (retData << 0x18), 0);
    } else {
        table = AudioLoad_GetLoadTable(tableType);
        size = table->entries[id].size;
        size = ALIGN16(size);
        medium = table->entries[id].medium;
        cachePolicy = table->entries[id].cachePolicy;
        romAddr = table->entries[id].romAddr;
        loadStatus = 2;
        switch (cachePolicy) {
            case 0:
                ramAddr = AudioHeap_AllocPermanent(tableType, id, size);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                loadStatus = 5;
                break;
            case 1:
                ramAddr = AudioHeap_AllocCached(tableType, size, 1, id);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                break;
            case 2:
                ramAddr = AudioHeap_AllocCached(tableType, size, 0, id);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                break;
            case 3:
            case 4:
                ramAddr = AudioHeap_AllocCached(tableType, size, 2, id);
                if (ramAddr == NULL) {
                    return ramAddr;
                }
                break;
        }
        AudioLoad_StartAsyncLoad(romAddr, ramAddr, size, medium, nChunks, retQueue,
                                 (retData << 0x18) | (tableType << 0x10) | (id << 8) | loadStatus);
        loadStatus = 1;
    }
    switch (tableType) {
        case 0:
            if (gSeqLoadStatus[id] != 5) {
                gSeqLoadStatus[id] = loadStatus;
            }
            break;
        case 1:
            if (gFontLoadStatus[id] != 5) {
                gFontLoadStatus[id] = loadStatus;
            }
            break;
        case 2:
            if (gSampleFontLoadStatus[id] != 5) {
                gSampleFontLoadStatus[id] = loadStatus;
            }
            break;
    }

    return ramAddr;
}

void AudioLoad_ProcessLoads(s32 resetStatus) {
    AudioLoad_ProcessSlowLoads(resetStatus);
    AudioLoad_ProcessSamplePreloads(resetStatus);
    AudioLoad_ProcessAsyncLoads(resetStatus);
}

static char devstr27[] = "Clear Workarea %x -%x size %x \n";
static char devstr28[] = "AudioHeap is %x\n";
static char devstr29[] = "Heap reset.Synth Change %x \n";
static char devstr30[] = "Heap %x %x %x\n";
static char devstr31[] = "Main Heap Initialize.\n";
static char devstr32[] = "%d :WaveA %d WaveB %d Inst %d,Perc %d\n";
static char devstr33[] = "---------- Init Completed. ------------\n";
static char devstr34[] = " Syndrv    :[%6d]\n";
static char devstr35[] = " Seqdrv    :[%6d]\n";
static char devstr36[] = " audiodata :[%6d]\n";
static char devstr37[] = "---------------------------------------\n";

void AudioLoad_Init(void) {
    s32 pad[14];
    s32 i;
    s32 j;
    s32 numFonts;
    s32 dwordsLeft;
    u64* clearContext;
    void* ramAddr;

    gResetTimer = 0;

    for (i = 0; i < gAudioHeapSize / 8; i++) {
        ((u64*) gAudioHeap)[i] = 0;
    }

    clearContext = gAudioContextStart;
    dwordsLeft = ((u32) gAudioContextEnd - (u32) gAudioContextStart) / 8;
    for (; dwordsLeft >= 0; dwordsLeft--) {
        *clearContext++ = 0;
    }
    switch (osTvType) {
        case OS_TV_PAL:
            gMaxTempoTvTypeFactors = 20.03042f;
            gRefreshRate = 50;
            break;
        case OS_TV_MPAL:
            gMaxTempoTvTypeFactors = 16.546f;
            gRefreshRate = 60;
            break;
        default:
        case OS_TV_NTSC:
            gMaxTempoTvTypeFactors = 16.713f;
            gRefreshRate = 60;
            break;
    }
    AudioThread_Init();
    for (i = 0; i < 3; i++) {
        gAiBuffLengths[i] = 0xA0;
    }
    gAudioTaskCountQ = 0;
    gAudioTaskIndexQ = 0;
    gCurAiBuffIndex = 0;
    gAudioSoundMode = SOUNDMODE_STEREO;
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
        gAiBuffers[i] = AudioHeap_Alloc(&gInitPool, AIBUF_SIZE);
        for (j = 0; j < AIBUF_LEN; j++) {
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
    AudioLoad_InitTable(gSequenceTable, SEGMENT_ROM_START(audio_seq), gSequenceMedium);
    AudioLoad_InitTable(gSoundFontTable, SEGMENT_ROM_START(audio_bank), gSoundFontMedium);
    AudioLoad_InitTable(gSampleBankTable, SEGMENT_ROM_START(audio_table), gSampleBankMedium);
    numFonts = gSoundFontTable->numEntries;
    gSoundFontList = AudioHeap_Alloc(&gInitPool, numFonts * sizeof(SoundFont));
    for (i = 0; i < numFonts; i++) {
        gSoundFontList[i].sampleBankId1 = (gSoundFontTable->entries[i].shortData1 >> 8) & 0xFF;
        gSoundFontList[i].sampleBankId2 = gSoundFontTable->entries[i].shortData1 & 0xFF;
        gSoundFontList[i].numInstruments = (gSoundFontTable->entries[i].shortData2 >> 8) & 0xFF;
        gSoundFontList[i].numDrums = gSoundFontTable->entries[i].shortData2 & 0xFF;
    }
    ramAddr = AudioHeap_Alloc(&gInitPool, gPermanentPoolSize);
    if (ramAddr == NULL) {
        gPermanentPoolSize = 0;
    }
    AudioHeap_InitPool(&gPermanentPool.pool, ramAddr, gPermanentPoolSize);
    func_800168BC();
}

static char devstr38[] = "Entry--- %d %d\n";
static char devstr39[] = "---Block LPS here\n";
static char devstr40[] = "===Block LPS end\n";
s32 AudioLoad_SlowLoadSample(s32 fontId, u8 instId, s8* status) {
    Sample* sample;
    AudioSlowLoad* slowLoad;

    sample = AudioLoad_GetFontSample(fontId, instId);
    if (sample == NULL) {
        *status = 0;
        return -1;
    }
    if (sample->medium == MEDIUM_RAM) {
        *status = 2;
        return 0;
    }
    slowLoad = &gSlowLoads.slowLoad[gSlowLoads.unk_00];
    if (slowLoad->state == 3) {
        slowLoad->state = 0;
    }
    slowLoad->sample = *sample;
    slowLoad->status = status;
    slowLoad->curRamAddr =
        AudioHeap_AllocTemporarySampleCache(sample->size, fontId, sample->sampleAddr, sample->medium);
    if (slowLoad->curRamAddr == NULL) {
        if ((sample->medium == MEDIUM_UNK) || (sample->codec == 2)) {
            *status = 0;
            return -1;
        } else {
            *status = 3;
            return -1;
        }
    }
    slowLoad->state = 1;
    slowLoad->bytesRemaining = ALIGN16(sample->size);
    slowLoad->ramAddr = slowLoad->curRamAddr;
    slowLoad->curDevAddr = sample->sampleAddr;
    slowLoad->medium = sample->medium;
    slowLoad->seqOrFontId = fontId;
    slowLoad->instId = instId;
    gSlowLoads.unk_00 ^= 1;
    return 0;
}

Sample* AudioLoad_GetFontSample(s32 fontId, s32 instId) {
    Sample* sample;
    Drum* drum;
    Instrument* instrument;

    if (instId < 0x80) {
        instrument = Audio_GetInstrument(fontId, instId);
        if (instrument == NULL) {
            return NULL;
        }
        sample = instrument->normalPitchTunedSample.sample;
    } else {
        drum = Audio_GetDrum(fontId, instId - 0x80);
        if (drum == NULL) {
            return NULL;
        }
        sample = drum->tunedSample.sample;
    }
    return sample;
}

void AudioLoad_Stub_10800(void) {
}

void AudioLoad_FinishSlowLoad(AudioSlowLoad* slowLoad) {
    Sample* sample = AudioLoad_GetFontSample(slowLoad->seqOrFontId, slowLoad->instId);

    if (sample != NULL) {
        slowLoad->sample = *sample;
        sample->sampleAddr = slowLoad->ramAddr;
        sample->medium = MEDIUM_RAM;
    }
}

void AudioLoad_ProcessSlowLoads(s32 resetStatus) {
    AudioTable* sampleBankTable = gSampleBankTable;
    AudioSlowLoad* slowLoad;
    s32 i;

    for (i = 0; i < 2; i++) {
        slowLoad = &gSlowLoads.slowLoad[i];
        switch (slowLoad->state) {
            case 2:
                osRecvMesg(&slowLoad->msgQueue, NULL, 1);
                if (resetStatus != 0) {
                    slowLoad->state = 3;
                    break;
                }
            case 1:
                slowLoad->state = 2;
                if (slowLoad->bytesRemaining == 0) {
                    AudioLoad_FinishSlowLoad(&gSlowLoads.slowLoad[i]);
                    slowLoad->state = 3;
                    *slowLoad->status = 1;
                } else if (slowLoad->bytesRemaining < 0x1000) {
                    if (slowLoad->medium == MEDIUM_UNK) {
                        AudioLoad_DmaSlowCopyUnkMedium(slowLoad->curDevAddr, slowLoad->curRamAddr,
                                                       slowLoad->bytesRemaining, sampleBankTable->unkMediumParam);
                    } else {
                        AudioLoad_DmaSlowCopy(&gSlowLoads.slowLoad[i], slowLoad->bytesRemaining);
                    }
                    slowLoad->bytesRemaining = 0;
                } else {
                    if (slowLoad->medium == MEDIUM_UNK) {
                        AudioLoad_DmaSlowCopyUnkMedium(slowLoad->curDevAddr, slowLoad->curRamAddr, 0x1000,
                                                       sampleBankTable->unkMediumParam);
                    } else {
                        AudioLoad_DmaSlowCopy(&gSlowLoads.slowLoad[i], 0x1000);
                    }
                    slowLoad->bytesRemaining -= 0x1000;
                    slowLoad->curRamAddr += 0x1000;
                    slowLoad->curDevAddr += 0x1000;
                }
                break;
        }
    }
}

static char D_800C52F4[] = "SLOWCOPY";
static char devstr42[] = "Req: Src %x Dest %x Len %x,media %d,retcode %d\n";
static char devstr43[] = "Remain Size %d\n";
static char devstr44[] = "---Block BG here\n";
static char devstr45[] = "===Block BG end\n";
static char devstr46[] = "Retcode %x\n";
static char devstr47[] = "Other Type: Not Write ID.\n";

void AudioLoad_DmaSlowCopy(AudioSlowLoad* slowLoad, s32 size) {
    osInvalDCache(slowLoad->curRamAddr, size);
    osCreateMesgQueue(&slowLoad->msgQueue, &slowLoad->msg, 1);
    AudioLoad_Dma(&slowLoad->ioMesg, 0, 0, slowLoad->curDevAddr, slowLoad->curRamAddr, size, &slowLoad->msgQueue,
                  slowLoad->medium, D_800C52F4);
}

void AudioLoad_DmaSlowCopyUnkMedium(u32 devAddr, u8* ramAddr, u32 size, s32 unkMediumParam) {
    s32 addr = devAddr;

    osInvalDCache(ramAddr, size);
    func_8000FC8C(func_8000FC7C(unkMediumParam, &addr), addr, ramAddr, size);
}

AudioAsyncLoad* AudioLoad_StartAsyncLoad(u32 devAddr, u8* ramAddr, u32 size, s32 medium, s32 nChunks,
                                         OSMesgQueue* retQueue, u32 retMesg) {
    AudioAsyncLoad* asyncLoad;
    s32 i;

    for (i = 0; i < 16; i++) {
        if (gAsyncLoads[i].status == 0) {
            asyncLoad = &gAsyncLoads[i];
            break;
        }
    }
    if (i == 16) {
        return NULL;
    }
    asyncLoad->status = 1;
    asyncLoad->curDevAddr = devAddr;
    asyncLoad->ramAddr = ramAddr;
    asyncLoad->curRamAddr = ramAddr;
    asyncLoad->bytesRemaining = size;

    if (nChunks == 0) {
        asyncLoad->chunkSize = 0x1000;
    } else {
        asyncLoad->chunkSize = ALIGN256((s32) size / nChunks);
        if (asyncLoad->chunkSize < 0x100) {
            asyncLoad->chunkSize = 0x100;
        }
    }
    asyncLoad->retQueue = retQueue;

    asyncLoad->delay = 3;
    asyncLoad->medium = medium;
    asyncLoad->retMsg = retMesg;

    osCreateMesgQueue(&asyncLoad->msgQueue, &asyncLoad->msg, 1);
    return asyncLoad;
}

void AudioLoad_ProcessAsyncLoads(s32 resetStatus) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (gAsyncLoads[i].status == 1) {
            AudioLoad_ProcessAsyncLoad(&gAsyncLoads[i], resetStatus);
        }
    }
}

void AudioLoad_ProcessAsyncLoad(AudioAsyncLoad* asyncLoad, s32 resetStatus) {
    AudioTable* sp5C;
    s32 pad1;
    s32 pad2;
    u32 temp;
    s32 sp24;
    s32 sp48;
    s32 sp44;
    SampleBankRelocInfo sp2C;

    sp5C = gSampleBankTable;
    if (asyncLoad->delay > 1) {
        asyncLoad->delay--;
        return;
    }
    if (asyncLoad->delay == 1) {
        asyncLoad->delay = 0;
    } else {
        if (resetStatus != 0) {
            osRecvMesg(&asyncLoad->msgQueue, NULL, 1);
            asyncLoad->status = 0;
            return;
        }
        if (osRecvMesg(&asyncLoad->msgQueue, NULL, 0) == -1) {
            return;
        }
    }
    if (asyncLoad->bytesRemaining == 0) {
        temp = asyncLoad->retMsg;
        pad1 = (temp >> 0x10) & 0xFF;
        sp24 = (temp >> 8) & 0xFF;
        pad2 = temp & 0xFF;
        switch (pad1) {
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
                    sp2C.baseAddr1 = AudioLoad_SyncLoadSampleBank(sp48, &sp2C.medium1);
                } else {
                    sp2C.baseAddr1 = NULL;
                }
                if (sp44 != 0xFF) {
                    sp2C.baseAddr2 = AudioLoad_SyncLoadSampleBank(sp44, &sp2C.medium2);
                } else {
                    sp2C.baseAddr2 = NULL;
                }
                AudioLoad_RelocateFontAndPreloadSamples(sp24, asyncLoad->ramAddr, &sp2C, 1);
                break;
        }
        asyncLoad->status = 0;
        osSendMesg(asyncLoad->retQueue, asyncLoad->retMsg, 0);
    } else {
        if (asyncLoad->bytesRemaining < asyncLoad->chunkSize) {
            if (asyncLoad->medium == MEDIUM_UNK) {
                AudioLoad_AsyncDmaUnkMedium(asyncLoad->curDevAddr, asyncLoad->curRamAddr, asyncLoad->bytesRemaining,
                                            sp5C->unkMediumParam);
            } else {
                AudioLoad_AsyncDma(asyncLoad, asyncLoad->bytesRemaining);
            }
            asyncLoad->bytesRemaining = 0;
        } else {
            if (asyncLoad->medium == MEDIUM_UNK) {
                AudioLoad_AsyncDmaUnkMedium(asyncLoad->curDevAddr, asyncLoad->curRamAddr, asyncLoad->chunkSize,
                                            sp5C->unkMediumParam);
            } else {
                AudioLoad_AsyncDma(asyncLoad, asyncLoad->chunkSize);
            }
            asyncLoad->bytesRemaining -= asyncLoad->chunkSize;
            asyncLoad->curDevAddr += asyncLoad->chunkSize;
            asyncLoad->curRamAddr += asyncLoad->chunkSize;
        }
    }
}

static char devstr48[] = "BGLOAD:Error: dma length 0\n";
static char D_800C53AC[] = "BGCOPY";

void AudioLoad_AsyncDma(AudioAsyncLoad* asyncLoad, u32 size) {
    size = ALIGN16(size);
    osInvalDCache(asyncLoad->curRamAddr, size);
    osCreateMesgQueue(&asyncLoad->msgQueue, &asyncLoad->msg, 1);
    if (size) {}
    AudioLoad_Dma(&asyncLoad->ioMesg, 0, 0, asyncLoad->curDevAddr, asyncLoad->curRamAddr, size, &asyncLoad->msgQueue,
                  asyncLoad->medium, D_800C53AC);
}

void AudioLoad_AsyncDmaUnkMedium(u32 devAddr, u8* ramAddr, u32 size, s32 unkMediumParam) {
    s32 addr = devAddr;

    osInvalDCache(ramAddr, size);
    func_8000FC8C(func_8000FC7C(unkMediumParam, &addr), addr, ramAddr, size);
}

static char devstr50[] = "Error: Already wavetable is touched %x.\n";
static char devstr51[] = "Touch Warning: Length zero %x\n";

void AudioLoad_RelocateSample(TunedSample* tSample, u32 fontDataAddr, SampleBankRelocInfo* relocInfo) {
    void* reloc;
    Sample* sample;

    // "Error: Already wavetable is touched %x.\n";
    if ((u32) tSample->sample <= AUDIO_RELOCATED_ADDRESS_START) {
        sample = tSample->sample = reloc = (u32) tSample->sample + fontDataAddr;
        // "Touch Warning: Length zero %x\n";
        if ((sample->size != 0) && (sample->isRelocated != 1)) {
            sample->loop = reloc = (u32) sample->loop + fontDataAddr;
            sample->book = reloc = (u32) sample->book + fontDataAddr;
            switch (sample->medium) { /* irregular */
                case MEDIUM_RAM:
                    sample->sampleAddr = reloc = sample->sampleAddr + relocInfo->baseAddr1;
                    sample->medium = relocInfo->medium1;
                    break;
                case MEDIUM_UNK:
                    sample->sampleAddr = reloc = sample->sampleAddr + relocInfo->baseAddr2;
                    sample->medium = relocInfo->medium2;
                    break;
                case MEDIUM_CART:
                case MEDIUM_DISK_DRIVE:
                    break;
            }
            sample->isRelocated = true;
            if (sample->unk_bit26 && (sample->medium != 0)) {
                gUsedSamples[gNumUsedSamples++] = sample;
            }
        }
    }
}

static char devstr52[] = "It's busy now!!!!! %d\n";
static char devstr53[] = "BG LOAD BUFFER is OVER.\n";
static char devstr54[] = "Warning: Length zero %x\n";
static char devstr55[] = "Wave Load %d \n";
static char devstr56[] = "Total Bg Wave Load %d \n";

s32 AudioLoad_RelocateFontAndPreloadSamples(s32 fontId, u32 fontDataAddr, SampleBankRelocInfo* relocData, s32 isAsync) {
    s32 i;
    Sample* sample;
    u8* sampleRamAddr;
    s32 size;
    s32 pad;
    u32 nChunks;
    s32 inProgress;

    inProgress = false;
    if (gPreloadSampleStackTop != 0) {
        inProgress = true;
    } else {
        D_80146D80 = 0;
    }
    gNumUsedSamples = 0;
    AudioLoad_RelocateFont(fontId, fontDataAddr, relocData);
    size = 0;
    for (i = 0; i < gNumUsedSamples; i++) {
        size += ALIGN16(gUsedSamples[i]->size);
    }

    for (i = 0; i < gNumUsedSamples; i++) {
        if (gPreloadSampleStackTop == 120) {
            break;
        }
        sample = gUsedSamples[i];
        //! Bug: Those are assignments, not equality checks.
        switch (isAsync) {
            case 0:
                if (sample->medium = relocData->medium1) {
                    sampleRamAddr = AudioHeap_AllocPersistentSampleCache(sample->size, relocData->sampleBankId1,
                                                                         sample->sampleAddr, sample->medium);
                } else if (sample->medium = relocData->medium2) {
                    sampleRamAddr = AudioHeap_AllocPersistentSampleCache(sample->size, relocData->sampleBankId2,
                                                                         sample->sampleAddr, sample->medium);
                }
                break;
            case 1:
                if (sample->medium = relocData->medium1) {
                    sampleRamAddr = AudioHeap_AllocTemporarySampleCache(sample->size, relocData->sampleBankId1,
                                                                        sample->sampleAddr, sample->medium);
                } else if (sample->medium = relocData->medium2) {
                    sampleRamAddr = AudioHeap_AllocTemporarySampleCache(sample->size, relocData->sampleBankId2,
                                                                        sample->sampleAddr, sample->medium);
                }
                break;
        }
        if (sampleRamAddr == NULL) {
            continue;
        }
        switch (isAsync) {
            case 0:
                if (sample->medium == MEDIUM_UNK) {
                    AudioLoad_SyncDmaUnkMedium(sample->sampleAddr, sampleRamAddr, sample->size,
                                               gSampleBankTable->unkMediumParam);
                    sample->sampleAddr = sampleRamAddr;
                    sample->medium = MEDIUM_RAM;
                } else {
                    AudioLoad_SyncDma(sample->sampleAddr, sampleRamAddr, sample->size, sample->medium);
                    sample->sampleAddr = sampleRamAddr;
                    sample->medium = MEDIUM_RAM;
                }
                break;
            case 1:
                size = gPreloadSampleStackTop;
                gPreloadSampleStack[size].sample = sample;
                gPreloadSampleStack[size].ramAddr = sampleRamAddr;
                gPreloadSampleStack[size].encodedInfo = (size << 24) | 0xFFFFFF;
                gPreloadSampleStack[size].isFree = 0;
                gPreloadSampleStack[size].endAndMediumKey =
                    (uintptr_t) sample->sampleAddr + sample->size + sample->medium;
                gPreloadSampleStackTop++;
                break;
        }
    }
    gNumUsedSamples = 0;
    if ((gPreloadSampleStackTop != 0) && !inProgress) {
        sample = gPreloadSampleStack[gPreloadSampleStackTop - 1].sample;
        nChunks = (sample->size / 0x1000) + 1;
        AudioLoad_StartAsyncLoad(sample->sampleAddr, gPreloadSampleStack[gPreloadSampleStackTop - 1].ramAddr,
                                 sample->size, sample->medium, nChunks, &gPreloadSampleQueue,
                                 gPreloadSampleStack[gPreloadSampleStackTop - 1].encodedInfo);
    }
}

// static char devstr55[] = "Wave Load %d \n";
// static char devstr56[] = "Total Bg Wave Load %d \n";
// static char devstr57[] = "Receive %d\n";

static char devstr57[] = "Receive %d\n";
static char devstr58[] = "============Error: Magic is Broken after loading.\n";
static char devstr59[] = "Remain DMA: %d\n";
static char devstr60[] = "N start %d\n";
static char devstr61[] = "============Error: Magic is Broken: %x\n";

s32 AudioLoad_ProcessSamplePreloads(s32 resetStatus) {
    Sample* sample;
    u32 preloadIndex;
    u32 key;
    s32 sampleAddr;
    u32 size;
    s32 nChunks;

    if (gPreloadSampleStackTop > 0) {
        if (resetStatus != 0) {
            if (osRecvMesg(&gPreloadSampleQueue, (OSMesg) &preloadIndex, 0)) {}
            gPreloadSampleStackTop = 0;
            return false;
        }
        if (osRecvMesg(&gPreloadSampleQueue, (OSMesg) &preloadIndex, 0) == -1) {
            return false;
        }
        // "Receive %d\n"
        preloadIndex >>= 0x18;

        if (gPreloadSampleStack[preloadIndex].isFree == 0) {
            sample = gPreloadSampleStack[preloadIndex].sample;
            key = sample->sampleAddr + sample->size + sample->medium;
            if (key == gPreloadSampleStack[preloadIndex].endAndMediumKey) {
                sample->sampleAddr = gPreloadSampleStack[preloadIndex].ramAddr;
                sample->medium = MEDIUM_RAM;
            }
            //  "============Error: Magic is Broken after loading.\n"
            gPreloadSampleStack[preloadIndex].isFree = 1;
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
            sampleAddr = sample->sampleAddr;
            size = sample->size;
            nChunks = (size >> 0xC) + 1;
            key = sampleAddr + size + sample->medium;
            if (key != gPreloadSampleStack[gPreloadSampleStackTop - 1].endAndMediumKey) {
                // "============Error: Magic is Broken: %x\n";
                gPreloadSampleStack[gPreloadSampleStackTop - 1].isFree = 1;
                gPreloadSampleStackTop--;
            } else {
                size = sample->size;
                AudioLoad_StartAsyncLoad(sampleAddr, gPreloadSampleStack[gPreloadSampleStackTop - 1].ramAddr, size,
                                         sample->medium, nChunks, &gPreloadSampleQueue,
                                         gPreloadSampleStack[gPreloadSampleStackTop - 1].encodedInfo);
                break;
            }
        }
    }
    return true;
}

s32 AudioLoad_AddToSampleSet(Sample* sample, s32 numSamples, Sample** sampleSet) {
    s32 i;

    for (i = 0; i < numSamples; i++) {
        if (sample->sampleAddr == sampleSet[i]->sampleAddr) {
            break;
        }
    }
    if (i == numSamples) {
        sampleSet[numSamples++] = sample;
    }
    return numSamples;
}

static char devstr62[] = "Error: No Handle.\n";
static char devstr63[] = "Success: %x\n";

s32 AudioLoad_GetSamplesForFont(s32 fontId, Sample** sampleSet) {
    s32 i;
    Drum* drum;
    Instrument* inst;
    s32 numLoaded;
    s32 numDrums;
    s32 numInstruments;

    numLoaded = 0;
    numDrums = gSoundFontList[fontId].numDrums;
    numInstruments = gSoundFontList[fontId].numInstruments;

    for (i = 0; i < numDrums; i++) {
        drum = Audio_GetDrum(fontId, i);
        if (drum == NULL) {
            continue;
        }
        numLoaded = AudioLoad_AddToSampleSet(drum->tunedSample.sample, numLoaded, sampleSet);
    }
    for (i = 0; i < numInstruments; i++) {
        inst = Audio_GetInstrument(fontId, i);
        if (inst == NULL) {
            continue;
        }
        if (inst->normalRangeLo != 0) {
            numLoaded = AudioLoad_AddToSampleSet(inst->lowPitchTunedSample.sample, numLoaded, sampleSet);
        }
        if (inst->normalRangeHi != 127) {
            numLoaded = AudioLoad_AddToSampleSet(inst->highPitchTunedSample.sample, numLoaded, sampleSet);
        }
        numLoaded = AudioLoad_AddToSampleSet(inst->normalPitchTunedSample.sample, numLoaded, sampleSet);
    }
    return numLoaded;
}

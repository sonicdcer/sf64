#include "sys.h"
#include "sf64audio_provisional.h"

void AudioHeap_DiscardSampleCacheEntry(SampleCacheEntry* entry);
void AudioHeap_Init(void);
void AudioHeap_DiscardSampleCaches(void);
void AudioHeap_InitSampleCaches(u32, u32);
void AudioHeap_UnapplySampleCache(SampleCacheEntry* entry, Sample* sample);
SampleCacheEntry* AudioHeap_AllocTemporarySampleCacheEntry(s32);
void* AudioHeap_SearchRegularCaches(s32 tableType, s32 cache, s32 id);
void* AudioHeap_SearchPermanentCache(s32 tableType, s32 id);
SampleCacheEntry* AudioHeap_AllocPersistentSampleCacheEntry(u32);

void AudioHeap_ResetLoadStatus(void) {
    s32 i;

    for (i = 0; i < 64; i++) {
        if (gFontLoadStatus[i] != 5) {
            gFontLoadStatus[i] = 0;
        }
    }
    for (i = 0; i < 64; i++) {
        if (gSampleFontLoadStatus[i] != 5) {
            gSampleFontLoadStatus[i] = 0;
        }
    }
    for (i = 0; i < 256; i++) {
        if (gSeqLoadStatus[i] != 5) {
            gSeqLoadStatus[i] = 0;
        }
    }
}

void AudioHeap_DiscardFont(s32 fontId) {
    Note* note;
    s32 i;

    for (i = 0; i < gNumNotes; i++) {
        note = &gNotes[i];
        if (fontId == note->playbackState.fontId) {
            if (note->playbackState.unk_04 == 0 && note->playbackState.priority != 0) {
                note->playbackState.parentLayer->enabled = false;
                note->playbackState.parentLayer->finished = true;
            }
            func_80011F4C(note);
            func_80012C40(note);
            func_800145BC(&gNoteFreeLists.disabled, &note->listItem);
        }
    }
}

void AudioHeap_DiscardSequence(s32 seqId) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (gSeqPlayers[i].enabled && gSeqPlayers[i].seqId == seqId) {
            func_800144E4(&gSeqPlayers[i]);
        }
    }
}

void* AudioHeap_AllocZeroed(AudioAllocPool* pool, u32 size) {
    u32 aligned = ALIGN16(size);
    u8* ramAddr = pool->curRamAddr;
    u8* ptr;

    if (pool->startRamAddr + pool->size >= pool->curRamAddr + aligned) {
        pool->curRamAddr += aligned;
        for (ptr = ramAddr; ptr < pool->curRamAddr; ptr++) {
            *ptr = 0;
        }
    } else {
        return NULL;
    }
    pool->numEntries++;
    return ramAddr;
}

void* AudioHeap_Alloc(AudioAllocPool* pool, u32 size) {
    u32 aligned = ALIGN16(size);
    u8* ramAddr = pool->curRamAddr;

    if (pool->startRamAddr + pool->size >= pool->curRamAddr + aligned) {
        pool->curRamAddr += aligned;
    } else {
        return NULL;
    }
    pool->numEntries++;
    return ramAddr;
}

void AudioHeap_InitPool(AudioAllocPool* pool, void* ramAddr, u32 size) {
    pool->curRamAddr = pool->startRamAddr = (u8*) ALIGN16((u32) ramAddr);
    pool->size = size - ((u32) ramAddr & 0xF);
    pool->numEntries = 0;
}

void AudioHeap_InitPersistentCache(AudioPersistentCache* persistent) {
    persistent->pool.numEntries = 0;
    persistent->numEntries = 0;
    persistent->pool.curRamAddr = persistent->pool.startRamAddr;
}

void AudioHeap_InitTemporaryCache(AudioTemporaryCache* temporary) {
    temporary->pool.numEntries = 0;
    temporary->pool.curRamAddr = temporary->pool.startRamAddr;
    temporary->nextSide = 0;
    temporary->entries[0].ramAddr = temporary->pool.startRamAddr;
    temporary->entries[1].ramAddr = temporary->pool.startRamAddr + temporary->pool.size;
    temporary->entries[0].id = -1;
    temporary->entries[1].id = -1;
}

void AudioHeap_ResetPool(AudioAllocPool* pool) {
    pool->numEntries = 0;
    pool->curRamAddr = pool->startRamAddr;
}

void AudioHeap_InitMainPools(s32 initPoolSize) {
    AudioHeap_InitPool(&gInitPool, gAudioHeap, initPoolSize);
    AudioHeap_InitPool(&gSessionPool, gAudioHeap + initPoolSize, gAudioHeapSize - initPoolSize);
}

void AudioHeap_InitSessionPools(AudioSessionPoolSplit* split) {
    gSessionPool.curRamAddr = gSessionPool.startRamAddr;
    AudioHeap_InitPool(&gMiscPool, AudioHeap_Alloc(&gSessionPool, split->miscPoolSize), split->miscPoolSize);
    AudioHeap_InitPool(&gCachePool, AudioHeap_Alloc(&gSessionPool, split->cachePoolSize), split->cachePoolSize);
}

void AudioHeap_InitCachePools(AudioCachePoolSplit* split) {
    gCachePool.curRamAddr = gCachePool.startRamAddr;
    AudioHeap_InitPool(&gPersistentCommonPool, AudioHeap_Alloc(&gCachePool, split->persistentCommonPoolSize),
                       split->persistentCommonPoolSize);
    AudioHeap_InitPool(&gTemporaryCommonPool, AudioHeap_Alloc(&gCachePool, split->temporaryCommonPoolSize),
                       split->temporaryCommonPoolSize);
}

void AudioHeap_InitPersistentPoolsAndCaches(AudioCommonPoolSplit* split) {
    gPersistentCommonPool.curRamAddr = gPersistentCommonPool.startRamAddr;
    AudioHeap_InitPool(&gSeqCache.persistent.pool, AudioHeap_Alloc(&gPersistentCommonPool, split->seqCacheSize),
                       split->seqCacheSize);
    AudioHeap_InitPool(&gFontCache.persistent.pool, AudioHeap_Alloc(&gPersistentCommonPool, split->fontCacheSize),
                       split->fontCacheSize);
    AudioHeap_InitPool(&gSampleBankCache.persistent.pool,
                       AudioHeap_Alloc(&gPersistentCommonPool, split->sampleBankCacheSize), split->sampleBankCacheSize);
    AudioHeap_InitPersistentCache(&gSeqCache.persistent);
    AudioHeap_InitPersistentCache(&gFontCache.persistent);
    AudioHeap_InitPersistentCache(&gSampleBankCache.persistent);
}

void AudioHeap_InitTemporaryPoolsAndCaches(AudioCommonPoolSplit* split) {
    gTemporaryCommonPool.curRamAddr = gTemporaryCommonPool.startRamAddr;
    AudioHeap_InitPool(&gSeqCache.temporary.pool, AudioHeap_Alloc(&gTemporaryCommonPool, split->seqCacheSize),
                       split->seqCacheSize);
    AudioHeap_InitPool(&gFontCache.temporary.pool, AudioHeap_Alloc(&gTemporaryCommonPool, split->fontCacheSize),
                       split->fontCacheSize);
    AudioHeap_InitPool(&gSampleBankCache.temporary.pool,
                       AudioHeap_Alloc(&gTemporaryCommonPool, split->sampleBankCacheSize), split->sampleBankCacheSize);
    AudioHeap_InitTemporaryCache(&gSeqCache.temporary);
    AudioHeap_InitTemporaryCache(&gFontCache.temporary);
    AudioHeap_InitTemporaryCache(&gSampleBankCache.temporary);
}

void* AudioHeap_AllocCached(s32 tableType, s32 size, s32 cache, s32 id) {
    AudioCache* loadedCache;
    AudioTemporaryCache* temporaryCache;
    AudioAllocPool* temporaryPool;
    void* persistentRamAddr;
    void* temporaryRamAddr;
    u8 loadStatusEntry0;
    u8 loadStatusEntry1;
    s32 i;
    u8* loadStatus;

    switch (tableType) {
        case 0:
            loadedCache = &gSeqCache;
            loadStatus = gSeqLoadStatus;
            break;
        case 1:
            loadedCache = &gFontCache;
            loadStatus = gFontLoadStatus;
            break;
        case 2:
            loadedCache = &gSampleBankCache;
            loadStatus = gSampleFontLoadStatus;
            break;
    }
    if (cache == 0) {
        temporaryCache = &loadedCache->temporary;
        temporaryPool = &temporaryCache->pool;
        if (loadedCache->temporary.entries[0].id == -1) {
            loadStatusEntry0 = 0;
        } else {
            loadStatusEntry0 = loadStatus[temporaryCache->entries[0].id];
        }
        if (temporaryCache->entries[1].id == -1) {
            loadStatusEntry1 = 0;
        } else {
            loadStatusEntry1 = loadStatus[temporaryCache->entries[1].id];
        }
        if (tableType == 1) {
            if (loadStatusEntry0 == 4) {
                for (i = 0; i < gNumNotes; i++) {
                    if ((gNotes[i].playbackState.fontId == temporaryCache->entries[0].id) &&
                        gNotes[i].noteSubEu.bitField0.enabled) {
                        break;
                    }
                }
                if (i == gNumNotes) {
                    if (gFontLoadStatus[temporaryCache->entries[0].id] != 5) {
                        gFontLoadStatus[temporaryCache->entries[0].id] = 3;
                    }
                    loadStatusEntry0 = 3;
                }
            }
            if (loadStatusEntry1 == 4) {
                for (i = 0; i < gNumNotes; i++) {
                    if ((gNotes[i].playbackState.fontId == temporaryCache->entries[1].id) &&
                        gNotes[i].noteSubEu.bitField0.enabled) {
                        break;
                    }
                }
                if (i == gNumNotes) {
                    if (gFontLoadStatus[temporaryCache->entries[1].id] != 5) {
                        gFontLoadStatus[temporaryCache->entries[1].id] = 3;
                    }
                    loadStatusEntry1 = 3;
                }
            }
        }
        if (loadStatusEntry0 == 0) {
            temporaryCache->nextSide = 0;
        } else if (loadStatusEntry1 == 0) {
            temporaryCache->nextSide = 1;
        } else if ((loadStatusEntry0 == 3) && (loadStatusEntry1 == 3)) {
            // Use the opposite side from last time.
        } else if (loadStatusEntry0 == 3) {
            temporaryCache->nextSide = 0;
        } else if (loadStatusEntry1 == 3) {
            temporaryCache->nextSide = 1;
        } else {
            // Check if there is a side which isn't in active use, if so, evict that one.
            if (tableType == 0) {
                if (loadStatusEntry0 == 2) {
                    for (i = 0; i < 4; i++) {
                        if (gSeqPlayers[i].enabled && (gSeqPlayers[i].seqId == temporaryCache->entries[0].id)) {
                            break;
                        }
                    }
                    if (i == 4) {
                        temporaryCache->nextSide = 0;
                        goto block_85;
                    }
                }
                if (loadStatusEntry1 == 2) {
                    for (i = 0; i < 4; i++) {
                        if (gSeqPlayers[i].enabled && (gSeqPlayers[i].seqId == temporaryCache->entries[1].id)) {
                            break;
                        }
                    }
                    if (i == 4) {
                        temporaryCache->nextSide = 1;
                        goto block_85;
                    }
                }
            } else if (tableType == 1) {
                if (loadStatusEntry0 == 2) {
                    for (i = 0; i < gNumNotes; i++) {
                        if ((gNotes[i].playbackState.fontId == temporaryCache->entries[0].id) &&
                            gNotes[i].noteSubEu.bitField0.enabled) {
                            break;
                        }
                    }

                    if (i == gNumNotes) {
                        temporaryCache->nextSide = 0;
                        goto block_85;
                    }
                }
                if (loadStatusEntry1 == 2) {
                    for (i = 0; i < gNumNotes; i++) {
                        if ((gNotes[i].playbackState.fontId == temporaryCache->entries[1].id) &&
                            gNotes[i].noteSubEu.bitField0.enabled) {
                            break;
                        }
                    }
                    if (i == gNumNotes) {
                        temporaryCache->nextSide = 1;
                        goto block_85;
                    }
                }
            }
            // No such luck. Evict the side that wasn't chosen last time, except
            // if it is being loaded into.
            if (temporaryCache->nextSide == 0) {
                if (loadStatusEntry0 == 1) {
                    if (loadStatusEntry1 == 1) {
                        goto block_84;
                    }
                    temporaryCache->nextSide = 1;
                }
                goto block_85;
            }
            if (loadStatusEntry1 == 1) {
                if (loadStatusEntry0 == 1) {
                    goto block_84;
                }
                temporaryCache->nextSide = 0;
                goto block_85;
            block_84:
                return NULL;
            }
        }
    block_85:

        if (temporaryCache->entries[temporaryCache->nextSide].id != -1) {
            loadStatus[temporaryCache->entries[temporaryCache->nextSide].id] = 0;
            if (tableType == 1) {
                AudioHeap_DiscardFont(temporaryCache->entries[temporaryCache->nextSide].id);
            }
        }
        switch (temporaryCache->nextSide) {
            case 0:
                temporaryCache->entries[0].ramAddr = temporaryPool->startRamAddr;
                temporaryCache->entries[0].id = id;
                temporaryCache->entries[0].size = size;
                temporaryPool->curRamAddr = &temporaryPool->startRamAddr[size];
                if ((temporaryCache->entries[1].id != -1) &&
                    (temporaryCache->entries[1].ramAddr < temporaryPool->curRamAddr)) {
                    loadStatus[temporaryCache->entries[1].id] = 0;
                    switch (tableType) {
                        case 0:
                            AudioHeap_DiscardSequence(temporaryCache->entries[1].id);
                            break;
                        case 1:
                            AudioHeap_DiscardFont(temporaryCache->entries[1].id);
                            break;
                    }
                    temporaryCache->entries[1].id = -1;
                    temporaryCache->entries[1].ramAddr = &temporaryPool->startRamAddr[temporaryPool->size];
                }
                temporaryRamAddr = temporaryCache->entries[0].ramAddr;
                break;
            case 1:
                temporaryCache->entries[1].ramAddr =
                    (u8*) (((u32) &temporaryPool->startRamAddr[temporaryPool->size] - size) & ~0xF);
                temporaryCache->entries[1].id = id;
                temporaryCache->entries[1].size = size;
                if ((temporaryCache->entries[0].id != -1) &&
                    (temporaryCache->entries[1].ramAddr < temporaryPool->curRamAddr)) {
                    loadStatus[temporaryCache->entries[0].id] = 0;
                    switch (tableType) {
                        case 0:
                            AudioHeap_DiscardSequence(temporaryCache->entries[0].id);
                            break;
                        case 1:
                            AudioHeap_DiscardFont(temporaryCache->entries[0].id);
                            break;
                    }
                    temporaryCache->entries[0].id = -1;
                    temporaryPool->curRamAddr = temporaryPool->startRamAddr;
                }
                temporaryRamAddr = temporaryCache->entries[1].ramAddr;
                break;
            default:
                return NULL;
        }
        temporaryCache->nextSide ^= 1;
        return temporaryRamAddr;
    }
    persistentRamAddr = AudioHeap_Alloc(&loadedCache->persistent.pool, size);
    loadedCache->persistent.entries[loadedCache->persistent.numEntries].ramAddr = persistentRamAddr;
    if (persistentRamAddr == NULL) {
        switch (cache) {
            case 2:
                return AudioHeap_AllocCached(tableType, size, 0, id);
            case 0:
            case 1:
                return NULL;
        }
    }
    loadedCache->persistent.entries[loadedCache->persistent.numEntries].id = id;
    loadedCache->persistent.entries[loadedCache->persistent.numEntries].size = size;
    return loadedCache->persistent.entries[loadedCache->persistent.numEntries++].ramAddr;
}

s32 AudioHeap_SearchCaches(s32 tableType, s32 cache, s32 id) {
    void* ramAddr;

    // Always search the permanent cache in addition to the regular ones.
    ramAddr = AudioHeap_SearchPermanentCache(tableType, id);
    if (ramAddr != NULL) {
        return ramAddr;
    }
    if (cache == CACHE_PERMANENT) {
        return NULL;
    }
    return AudioHeap_SearchRegularCaches(tableType, cache, id);
}

void* AudioHeap_SearchRegularCaches(s32 tableType, s32 cache, s32 id) {
    u32 i;
    AudioCache* loadedCache;
    AudioTemporaryCache* temporary;
    AudioPersistentCache* persistent;

    switch (tableType) {
        case SEQUENCE_TABLE:
            loadedCache = (AudioCache*) &gSeqCache;
            break;

        case FONT_TABLE:
            loadedCache = (AudioCache*) &gFontCache;
            break;

        case SAMPLE_TABLE:
            loadedCache = (AudioCache*) &gSampleBankCache;
            break;
    }

    temporary = &loadedCache->temporary;
    if (cache == CACHE_TEMPORARY) {
        if (temporary->entries[0].id == id) {
            temporary->nextSide = 1;
            return temporary->entries[0].ramAddr;
        } else if (temporary->entries[1].id == id) {
            temporary->nextSide = 0;
            return temporary->entries[1].ramAddr;
        } else {
            return NULL;
        }
    }

    persistent = &loadedCache->persistent;
    for (i = 0; i < persistent->numEntries; i++) {
        if (persistent->entries[i].id == id) {
            return persistent->entries[i].ramAddr;
        }
    }

    if (cache == CACHE_EITHER) {
        return AudioHeap_SearchCaches(tableType, CACHE_TEMPORARY, id);
    }
    return NULL;
}

void func_8000CAF4(f32 p, f32 q, u16* out) {
    // With the bug below fixed, this mysterious unused function computes two recurrences
    // out[0..7] = a_i, out[8..15] = b_i, where
    // a_{-2} = b_{-1} = 262159 = 2^18 + 15
    // a_{-1} = b_{-2} = 0
    // a_i = q * a_{i-1} + p * a_{i-2}
    // b_i = q * b_{i-1} + p * b_{i-2}
    // These grow exponentially if p < -1 or p + |q| > 1.
    s32 i;
    f32 tmp[16];

    tmp[0] = (f32) (q * 262159.0f);
    tmp[8] = (f32) (p * 262159.0f);
    tmp[1] = (f32) ((q * p) * 262159.0f);
    tmp[9] = (f32) (((p * p) + q) * 262159.0f);

    for (i = 2; i < 8; i++) {
        //! @bug value should be stored to tmp[i] and tmp[8 + i], otherwise we read
        //! garbage in later loop iterations.
        out[i] = q * tmp[i - 2] + p * tmp[i - 1];
        out[8 + i] = q * tmp[6 + i] + p * tmp[7 + i];
    }

    for (i = 0; i < 16; i++) {
        out[i] = tmp[i];
    }
}

void AudioHeap_UpdateReverbs(void) {
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;

    if (gAudioBufferParams.specUnk4 == 2) {
        var_v0 = 2;
    } else {
        var_v0 = 1;
    }
    for (var_v1 = 0; var_v1 < gNumSynthReverbs; var_v1++) {
        for (var_a1 = 0; var_a1 < var_v0; var_a1++) {
            gSynthReverbs[var_v1].unk_08 -= gSynthReverbs[var_v1].unk_08 / 3;
        }
    }
}

void AudioHeap_ClearCurrentAiBuffer(void) {
    s32 i;
    s32 var_a1 = gCurAiBuffIndex;

    gAiBuffLengths[var_a1] = gAudioBufferParams.minAiBufferLength;

    for (i = 0; i < 0xAA0; i++) {
        gAiBuffers[var_a1][i] = 0;
    }
}

s32 AudioHeap_ResetStep(void) {
    s32 i;
    s32 j;
    s32 sp24;

    if (gAudioBufferParams.specUnk4 == 2) {
        sp24 = 2;
    } else {
        sp24 = 1;
    }
    switch (gResetStatus) {
        case 5:
            for (i = 0; i < 4; i++) {
                func_800144E4(&gSeqPlayers[i]);
            }
            gResetFadeoutFramesLeft = 4 / sp24;
            gResetStatus--;
            break;
        case 4:
            if (gResetFadeoutFramesLeft != 0) {
                gResetFadeoutFramesLeft--;
                AudioHeap_UpdateReverbs();
            } else {
                for (i = 0; i < gNumNotes; i++) {
                    if (gNotes[i].noteSubEu.bitField0.enabled && (gNotes[i].playbackState.adsr.state != 0)) {
                        gNotes[i].playbackState.adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
                        gNotes[i].playbackState.adsr.action.asByte |= 0x10;
                    }
                }

                gResetFadeoutFramesLeft = 0x10 / sp24;
                gResetStatus--;
            }
            break;
        case 3:
            if (gResetFadeoutFramesLeft != 0) {
                gResetFadeoutFramesLeft--;
                AudioHeap_UpdateReverbs();
            } else {
                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 0xAA0; j++) {
                        gAiBuffers[i][j] = 0;
                    }
                }
                gResetFadeoutFramesLeft = 4 / sp24;
                gResetStatus--;
                break; // needed to match
            }
            break;
        case 2:
            AudioHeap_ClearCurrentAiBuffer();
            if (gResetFadeoutFramesLeft != 0) {
                gResetFadeoutFramesLeft--;
            } else {
                gResetStatus--;
                AudioHeap_DiscardSampleCaches();
            }
            break;
        case 1:
            AudioHeap_Init();
            gResetStatus = 0;
            for (i = 0; i < 3; i++) {
                gAiBuffLengths[i] = gAudioBufferParams.maxAiBufferLength;
                for (j = 0; j < 0xAA0; j++) {
                    gAiBuffers[i][j] = 0;
                }
            }
            break;
    }
    if (gResetStatus < 3) {
        return 0;
    }
    return 1;
}

void AudioHeap_Init(void) {
    s32 i;
    s32 j;
    AudioSpec* spec = &gAudioSpecs[gAudioSpecId];
    ReverbSettings* temp_v0_2;
    SynthesisReverb* temp;
    s16* temp_v0_3;
    u32 temp_s0;
    u32 temp_s1;
    u32 temp_v0;
    u32 temp_v1;

    gSampleDmaCount = 0;
    gAudioBufferParams.samplingFrequency = spec->samplingFrequency;
    gAudioBufferParams.aiSamplingFrequency = osAiSetFrequency(gAudioBufferParams.samplingFrequency);
    gAudioBufferParams.samplesPerFrameTarget =
        ((gAudioBufferParams.samplingFrequency / gRefreshRate) + 0xF) & (u16) ~0xF;

    gAudioBufferParams.minAiBufferLength = gAudioBufferParams.samplesPerFrameTarget - 0x10;
    gAudioBufferParams.maxAiBufferLength = gAudioBufferParams.samplesPerFrameTarget + 0x10;

    gAudioBufferParams.ticksPerUpdate = ((gAudioBufferParams.samplesPerFrameTarget + 0x10) / 192) + 1;
    gAudioBufferParams.samplesPerTick =
        (gAudioBufferParams.samplesPerFrameTarget / gAudioBufferParams.ticksPerUpdate) & ~7;
    gAudioBufferParams.samplesPerTickMax = gAudioBufferParams.samplesPerTick + 8;
    gAudioBufferParams.samplesPerTickMin = gAudioBufferParams.samplesPerTick - 8;
    gAudioBufferParams.resampleRate = 32000.0f / (s32) gAudioBufferParams.samplingFrequency;
    gAudioBufferParams.ticksPerUpdateInvScaled = 0.001171875f / gAudioBufferParams.ticksPerUpdate;
    gAudioBufferParams.ticksPerUpdateInv = 1.0f / gAudioBufferParams.ticksPerUpdate;
    gNumNotes = spec->numNotes;
    D_8014C1B0 = spec->unk_14;
    gMaxTempo = (gAudioBufferParams.ticksPerUpdate * 2880000.0f / gSeqTicksPerBeat) / gMaxTempoTvTypeFactors;
    gAudioBufferParams.specUnk4 = spec->unk_04;
    gAudioBufferParams.samplesPerFrameTarget *= gAudioBufferParams.specUnk4;
    gAudioBufferParams.maxAiBufferLength *= gAudioBufferParams.specUnk4;
    gAudioBufferParams.minAiBufferLength *= gAudioBufferParams.specUnk4;
    gAudioBufferParams.ticksPerUpdate *= gAudioBufferParams.specUnk4;
    if (gAudioBufferParams.specUnk4 >= 2) {
        gAudioBufferParams.maxAiBufferLength -= 0x10;
    }
    gMaxAudioCmds = (gNumNotes * 0x14 * gAudioBufferParams.ticksPerUpdate) + (spec->numReverbs * 0x20) + 0x1E0;
    temp_s0 = spec->persistentSeqCacheSize + spec->persistentFontCacheSize + spec->persistentSampleBankCacheSize +
              spec->persistentSampleCacheSize + 0x10;
    temp_s1 = spec->temporarySeqCacheSize + spec->temporaryFontCacheSize + spec->temporarySampleBankCacheSize +
              spec->temporarySampleCacheSize + 0x10;
    temp_v0 = temp_s0 + temp_s1;
    temp_v1 = gSessionPool.size - temp_v0 - 0x100;
    gSessionPoolSplit.miscPoolSize = temp_v1;
    gSessionPoolSplit.cachePoolSize = temp_v0;
    AudioHeap_InitSessionPools(&gSessionPoolSplit);
    gCachePoolSplit.persistentCommonPoolSize = temp_s0;
    gCachePoolSplit.temporaryCommonPoolSize = temp_s1;
    AudioHeap_InitCachePools(&gCachePoolSplit);
    gPersistentCommonPoolSplit.seqCacheSize = spec->persistentSeqCacheSize;
    gPersistentCommonPoolSplit.fontCacheSize = spec->persistentFontCacheSize;
    gPersistentCommonPoolSplit.sampleBankCacheSize = spec->persistentSampleBankCacheSize;
    AudioHeap_InitPersistentPoolsAndCaches(&gPersistentCommonPoolSplit);
    gTemporaryCommonPoolSplit.seqCacheSize = spec->temporarySeqCacheSize;
    gTemporaryCommonPoolSplit.fontCacheSize = spec->temporaryFontCacheSize;
    gTemporaryCommonPoolSplit.sampleBankCacheSize = spec->temporarySampleBankCacheSize;
    AudioHeap_InitTemporaryPoolsAndCaches(&gTemporaryCommonPoolSplit);
    AudioHeap_InitSampleCaches(spec->persistentSampleCacheSize, spec->temporarySampleCacheSize);
    AudioHeap_ResetLoadStatus();
    gNotes = AudioHeap_AllocZeroed(&gMiscPool, gNumNotes * sizeof(Note));
    func_800132E8();
    func_800128B4();
    gNoteSubsEu = AudioHeap_AllocZeroed(&gMiscPool, gAudioBufferParams.ticksPerUpdate * gNumNotes * sizeof(NoteSubEu));
    for (i = 0; i != 2; i++) {
        gAbiCmdBuffs[i] = AudioHeap_AllocZeroed(&gMiscPool, gMaxAudioCmds * 8);
    }
    for (i = 0; i < 4; i++) {
        gSynthReverbs[i].useReverb = 0;
    }
    gNumSynthReverbs = spec->numReverbs;
    for (i = 0; i < gNumSynthReverbs; i++) {
        temp_v0_2 = &spec->reverbSettings[i];
        temp = &gSynthReverbs[i];
        temp->downsampleRate = temp_v0_2->downsampleRate;
        temp->windowSize = temp_v0_2->windowSize * 64;
        temp->unk_08 = temp_v0_2->unk_2;
        temp->decayRatio = temp_v0_2->decayRatio;
        temp->unk_0E = temp_v0_2->unk_6;
        temp->useReverb = 8;

        temp->leftRingBuf = AudioHeap_AllocZeroed(&gMiscPool, temp->windowSize * 2);
        temp->rightRingBuf = AudioHeap_AllocZeroed(&gMiscPool, temp->windowSize * 2);
        temp->nextRingBufPos = 0;
        temp->unk_20 = 0;
        temp->curFrame = 0;

        temp->bufSizePerChan = temp->windowSize;
        temp->framesToIgnore = 2;
        if (temp->downsampleRate != 1) {
            temp->resampleFlags = 1;
            temp->unk_0A = (0x8000 / temp->downsampleRate);
            temp->unk_30 = AudioHeap_AllocZeroed(&gMiscPool, 0x20);
            temp->unk_34 = AudioHeap_AllocZeroed(&gMiscPool, 0x20);
            temp->unk_38 = AudioHeap_AllocZeroed(&gMiscPool, 0x20);
            temp->unk_3C = AudioHeap_AllocZeroed(&gMiscPool, 0x20);
            for (j = 0; j < gAudioBufferParams.ticksPerUpdate; j++) {
                temp_v0_3 = AudioHeap_AllocZeroed(&gMiscPool, 0x300);
                temp->items[0][j].toDownsampleLeft = temp_v0_3;
                temp->items[0][j].toDownsampleRight = temp_v0_3 + 192;
                temp_v0_3 = AudioHeap_AllocZeroed(&gMiscPool, 0x300);
                temp->items[1][j].toDownsampleLeft = temp_v0_3;
                temp->items[1][j].toDownsampleRight = temp_v0_3 + 192;
            }
        }
    }
    func_8000E8E0(gNumNotes);
    gPreloadSampleStackTop = 0;
    D_8014C1B4 = 0x1000;
    osWritebackDCacheAll();
}

void* AudioHeap_SearchPermanentCache(s32 tableType, s32 id) {
    s32 i;
    AudioAllocPool* var_a1;
    s32 var_v0;

    for (i = 0; i < gPermanentPool.pool.numEntries; i++) {
        if ((tableType == gPermanentPool.entry[i].tableType) && (id == gPermanentPool.entry[i].id)) {
            return gPermanentPool.entry[i].ramAddr;
        }
    }
    return NULL;
}

u8* AudioHeap_AllocPermanent(s32 tableType, s32 id, u32 size) {
    u8* temp;
    s32 sp18 = gPermanentPool.pool.numEntries;

    temp = AudioHeap_Alloc(&gPermanentPool.pool, size);
    gPermanentPool.entry[sp18].ramAddr = temp;
    if (temp == NULL) {
        return NULL;
    }

    gPermanentPool.entry[sp18].tableType = tableType;
    gPermanentPool.entry[sp18].id = id;
    gPermanentPool.entry[sp18].size = size;
    // return temp;
}

void* AudioHeap_AllocTemporarySampleCache(s32 size, s32 fontId, s32 sampleAddr, s8 medium) {
    SampleCacheEntry* entry = AudioHeap_AllocTemporarySampleCacheEntry(size);

    if (entry != NULL) {
        entry->sampleBankId = fontId;
        entry->sampleAddr = sampleAddr;
        entry->origMedium = medium;
        return entry->allocatedAddr;
    } else {
        return NULL;
    }
}

void* AudioHeap_AllocPersistentSampleCache(s32 size, s32 fontId, s32 sampleAddr, s8 medium) {
    SampleCacheEntry* entry = AudioHeap_AllocPersistentSampleCacheEntry(size);

    if (entry != NULL) {
        entry->sampleBankId = fontId;
        entry->sampleAddr = sampleAddr;
        entry->origMedium = medium;
        return entry->allocatedAddr;
    } else {
        return NULL;
    }
}

void* AudioHeap_AllocPersistentSampleCache_2(u32 size, s32 fontId, s32 sampleAddr, s8 medium) {
    SampleCacheEntry* entry = AudioHeap_AllocPersistentSampleCacheEntry(size);

    if (entry != NULL) {
        entry->sampleBankId = fontId;
        entry->sampleAddr = sampleAddr;
        entry->origMedium = medium;
        return entry->allocatedAddr;
    } else {
        return NULL;
    }
}

void AudioHeap_InitSampleCaches(u32 persistentSampleCacheSize, u32 temporarySampleCacheSize) {
    void* temp_v0;

    temp_v0 = AudioHeap_Alloc(&gPersistentCommonPool, persistentSampleCacheSize);
    if (temp_v0 == NULL) {
        gPersistentSampleCache.pool.size = 0;
    } else {
        AudioHeap_InitPool(&gPersistentSampleCache.pool, temp_v0, persistentSampleCacheSize);
    }
    temp_v0 = AudioHeap_Alloc(&gTemporaryCommonPool, temporarySampleCacheSize);
    if (temp_v0 == NULL) {
        gTemporarySampleCache.pool.size = 0;
    } else {
        AudioHeap_InitPool(&gTemporarySampleCache.pool, temp_v0, temporarySampleCacheSize);
    }
    gPersistentSampleCache.numEntries = 0;
    gTemporarySampleCache.numEntries = 0;
}

SampleCacheEntry* AudioHeap_AllocTemporarySampleCacheEntry(s32 size) {
    u8* temp_a0;
    u8* temp_s0;
    u8* sp3C;
    s32 i;
    s32 var_s5;
    SampleCacheEntry* entry;
    AudioPreloadReq* preload;
    AudioSampleCache* cache;
    u8* temp_s2;
    u8* temp_v0_3;
    u8* var_s3;

    cache = &gTemporarySampleCache;
    var_s3 = cache->pool.curRamAddr;
    sp3C = AudioHeap_Alloc(&cache->pool, (u32) size);
    if (sp3C == NULL) {
        temp_s0 = cache->pool.curRamAddr;
        cache->pool.curRamAddr = cache->pool.startRamAddr;
        sp3C = AudioHeap_Alloc(&cache->pool, (u32) size);
        if (sp3C == NULL) {
            cache->pool.curRamAddr = temp_s0;
            return NULL;
        }
        var_s3 = cache->pool.startRamAddr;
    }
    temp_s2 = cache->pool.curRamAddr;
    var_s5 = -1;
    for (i = 0; i < gPreloadSampleStackTop; i++) {
        preload = &gPreloadSampleStack[i];
        if (preload->isFree == 0) {
            temp_v0_3 = preload->ramAddr;
            temp_a0 = preload->ramAddr + preload->sample->size - 1;
            if ((temp_a0 < var_s3) && (temp_v0_3 < var_s3)) {
                continue;
            }
            if ((temp_a0 >= temp_s2) && (temp_v0_3 >= temp_s2)) {
                continue;
            }
            preload->isFree = 1;
        }
    }
    for (i = 0; i < cache->numEntries; i++) {
        if (cache->entries[i].inUse == 0) {
            continue;
        }
        temp_v0_3 = cache->entries[i].allocatedAddr;
        temp_a0 = temp_v0_3 + cache->entries[i].size - 1;
        if ((temp_a0 < var_s3) && (temp_v0_3 < var_s3)) {
            continue;
        }
        if ((temp_a0 >= temp_s2) && (temp_v0_3 >= temp_s2)) {
            continue;
        }
        AudioHeap_DiscardSampleCacheEntry(&cache->entries[i]);
        if (var_s5 == -1) {
            var_s5 = i;
        }
    }
    if (var_s5 == -1) {
        var_s5 = cache->numEntries++;
    }
    entry = &cache->entries[var_s5];
    entry->inUse = 1;
    entry->allocatedAddr = sp3C;
    entry->size = size;
    return entry;
}

void AudioHeap_DiscardSampleCacheEntry(SampleCacheEntry* entry) {
    s32 i;
    s32 sp40;
    Drum* temp_v0_3;
    Instrument* temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    s32 temp_a0;
    s32 temp_v1;

    sp40 = gSoundFontTable->numEntries;
    for (i = 0; i < sp40; i++) {
        temp_v1 = gSoundFontList[i].sampleBankId1;
        temp_a0 = gSoundFontList[i].sampleBankId2;
        if (((temp_v1 != 0xFF) && (entry->sampleBankId == temp_v1)) ||
            ((temp_a0 != 0xFF) && (entry->sampleBankId == temp_a0)) || (entry->sampleBankId == 0)) {
            if ((AudioHeap_SearchCaches(1, 2, i) != NULL) && ((gFontLoadStatus[i] > 1) != 0)) {
                for (var_s1 = 0; var_s1 < gSoundFontList[i].numInstruments; var_s1++) {
                    temp_v0_2 = func_80011D4C(i, var_s1);
                    if (temp_v0_2 != NULL) {
                        if (temp_v0_2->normalRangeLo != 0) {
                            AudioHeap_UnapplySampleCache(entry, temp_v0_2->lowPitchTunedSample.sample);
                        }
                        if (temp_v0_2->normalRangeHi != 0x7F) {
                            AudioHeap_UnapplySampleCache(entry, temp_v0_2->highPitchTunedSample.sample);
                        }
                        AudioHeap_UnapplySampleCache(entry, temp_v0_2->normalPitchTunedSample.sample);
                    }
                }
                for (var_s2 = 0; var_s2 < gSoundFontList[i].numDrums; var_s2++) {
                    temp_v0_3 = func_80011DFC(i, var_s2);
                    if (temp_v0_3 != NULL) {
                        AudioHeap_UnapplySampleCache(entry, temp_v0_3->tunedSample.sample);
                    }
                }
            }
        }
    }
}

void AudioHeap_UnapplySampleCache(SampleCacheEntry* entry, Sample* sample) {
    if ((sample != NULL) && (sample->sampleAddr == entry->allocatedAddr)) {
        sample->sampleAddr = entry->sampleAddr;
        sample->medium = entry->origMedium;
    }
}

SampleCacheEntry* AudioHeap_AllocPersistentSampleCacheEntry(u32 size) {
    AudioSampleCache* cache = &gPersistentSampleCache;
    SampleCacheEntry* temp_v0;
    u8* temp_v0_2;

    temp_v0_2 = AudioHeap_Alloc(&cache->pool, size);
    if (temp_v0_2 == NULL) {
        return NULL;
    }
    temp_v0 = &cache->entries[cache->numEntries];
    temp_v0->inUse = 1;
    temp_v0->allocatedAddr = temp_v0_2;
    temp_v0->size = size;
    cache->numEntries++;
    return temp_v0;
}

void AudioHeap_DiscardSampleCaches(void) {
    s32 i;
    s32 j;
    s32 sp40;
    s32 temp_a0;
    s32 temp_v1;
    u32 temp_a1;
    s32 var_s1;
    s32 var_s2;
    Drum* temp_v0_3;
    Instrument* temp_v0_2;
    SampleCacheEntry* entry;

    sp40 = gSoundFontTable->numEntries;
    for (i = 0; i < sp40; i++) {
        temp_v1 = gSoundFontList[i].sampleBankId1;
        temp_a0 = gSoundFontList[i].sampleBankId2;
        if (((temp_v1 != 0xFFU) && (entry->sampleBankId == temp_v1)) ||
            ((temp_a0 != 0xFF) && (entry->sampleBankId == temp_a0)) || (entry->sampleBankId == 0)) {
            if ((AudioHeap_SearchCaches(1, 3, i) != NULL) && ((gFontLoadStatus[i] > 1) != 0)) {
                for (j = 0; j < gPersistentSampleCache.numEntries; j++) {
                    entry = &gPersistentSampleCache.entries[j];
                    for (var_s1 = 0; var_s1 < gSoundFontList[i].numInstruments; var_s1++) {
                        temp_v0_2 = func_80011D4C(i, var_s1);
                        if (temp_v0_2 != NULL) {
                            if (temp_v0_2->normalRangeLo != 0) {
                                AudioHeap_UnapplySampleCache(entry, temp_v0_2->lowPitchTunedSample.sample);
                            }
                            if (temp_v0_2->normalRangeHi != 0x7F) {
                                AudioHeap_UnapplySampleCache(entry, temp_v0_2->highPitchTunedSample.sample);
                            }
                            AudioHeap_UnapplySampleCache(entry, temp_v0_2->normalPitchTunedSample.sample);
                        }
                    }
                    for (var_s2 = 0; var_s2 < gSoundFontList[i].numDrums; var_s2++) {
                        temp_v0_3 = func_80011DFC(i, var_s2);
                        if (temp_v0_3 != NULL) {
                            AudioHeap_UnapplySampleCache(entry, temp_v0_3->tunedSample.sample);
                        }
                    }
                }
            }
        }
    }
}

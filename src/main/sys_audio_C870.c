#include "global.h"
#include "sf64audio.h"

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ char pad_18[0x6];
    /* 0x1E */ s16 unk_1E;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ char pad24[0x6];
    /* 0x2A */ s16 unk_2A;
} UnkStruct_func_8000BFA8;

typedef struct {
    /* 0x00 */ char pad00;
    /* 0x01 */ s8 unk_01;
    /* 0x02 */ s8 unk_02;
    /* 0x03 */ char pad[0x5];
    /* 0x08 */ s32 unk_08;
    /* 0x08 */ s32 unk_0C;
} UnkStruct_8000E1C4_1;

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ s32 unk_04;
} UnkStruct_8000E1C4_2;

extern s32 D_800C7C30;
extern AudioAllocPool D_8014C1C0;
extern AudioAllocPool D_8014C1D0;
extern AudioAllocPool D_8014C1E0;
extern AudioAllocPool D_8014C210;
extern AudioAllocPool D_8014C220;
extern AudioAllocPool D_8014C230;
extern AudioPersistentCache D_8014C240; // seqCache
extern AudioTemporaryCache D_8014C3D4;  // fontCache
extern AudioAllocPool D_8014C3D8;
extern AudioPersistentCache D_8014C410;
extern AudioAllocPool D_8014C420;
extern AudioTemporaryCache D_8014C5A4;
extern AudioPersistentCache D_8014C5E0; // sampleBankCache
extern AudioTemporaryCache D_8014C774;

SampleCacheEntry* AudioHeap_AllocTemporarySampleCacheEntry(s32);
void* AudioHeap_SearchRegularCaches(s32 tableType, s32 cache, s32 id);
void* AudioHeap_SearchPermanentCache(s32 tableType, s32 id);
SampleCacheEntry* AudioHeap_AllocPersistentSampleCacheEntry(u32);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BC70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BD38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BE24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BE94.s")

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

void func_8000BFE8(s32 arg0) {
    AudioHeap_InitPool(&D_8014C1D0, gAudioDataBuffer, arg0);
    AudioHeap_InitPool(&D_8014C1C0, &gAudioDataBuffer[arg0], D_800C7C30 - arg0);
}

void func_8000C044(AudioSessionPoolSplit* split) {
    D_8014C1C0.curRamAddr = D_8014C1C0.startRamAddr;
    AudioHeap_InitPool(&D_8014C1E0, AudioHeap_Alloc(&D_8014C1C0, split->miscPoolSize), split->miscPoolSize);
    AudioHeap_InitPool(&D_8014C210, AudioHeap_Alloc(&D_8014C1C0, split->cachePoolSize), split->cachePoolSize);
}

void func_8000C0C0(AudioCommonPoolSplit* split) {
    D_8014C210.curRamAddr = D_8014C210.startRamAddr;
    AudioHeap_InitPool(&D_8014C220, AudioHeap_Alloc(&D_8014C210, split->seqCacheSize), split->seqCacheSize);
    AudioHeap_InitPool(&D_8014C230, AudioHeap_Alloc(&D_8014C210, split->fontCacheSize), split->fontCacheSize);
}

void func_8000C13C(AudioCommonPoolSplit* split) {
    D_8014C220.curRamAddr = D_8014C220.startRamAddr;
    AudioHeap_InitPool(&D_8014C240.pool, AudioHeap_Alloc(&D_8014C220, split->seqCacheSize), split->seqCacheSize);
    AudioHeap_InitPool(&D_8014C410.pool, AudioHeap_Alloc(&D_8014C220, split->fontCacheSize), split->fontCacheSize);
    AudioHeap_InitPool(&D_8014C5E0.pool, AudioHeap_Alloc(&D_8014C220, split->sampleBankCacheSize),
                       split->sampleBankCacheSize);
    AudioHeap_InitPersistentCache(&D_8014C240);
    AudioHeap_InitPersistentCache(&D_8014C410);
    AudioHeap_InitPersistentCache(&D_8014C5E0);
}

void func_8000C1F8(AudioCommonPoolSplit* split) {
    D_8014C230.curRamAddr = D_8014C230.startRamAddr;
    AudioHeap_InitPool(&D_8014C3D4.pool, AudioHeap_Alloc(&D_8014C230, split->seqCacheSize), split->seqCacheSize);
    AudioHeap_InitPool(&D_8014C5A4.pool, AudioHeap_Alloc(&D_8014C230, split->fontCacheSize), split->fontCacheSize);
    AudioHeap_InitPool(&D_8014C774.pool, AudioHeap_Alloc(&D_8014C230, split->sampleBankCacheSize),
                       split->sampleBankCacheSize);
    AudioHeap_InitTemporaryCache(&D_8014C3D4);
    AudioHeap_InitTemporaryCache(&D_8014C5A4);
    AudioHeap_InitTemporaryCache(&D_8014C774);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C2B4.s")

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
            loadedCache = (AudioCache*) &D_8014C240;
            break;

        case FONT_TABLE:
            loadedCache = (AudioCache*) &D_8014C410;
            break;

        case SAMPLE_TABLE:
            loadedCache = (AudioCache*) &D_8014C5E0;
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

// Likely AudioHeap_UpdateReverbs
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000CEC8.s")

// Likely AudioHeap_ClearCurrentAiBuffer
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D08C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D104.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D4A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/AudioHeap_SearchPermanentCache.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DB64.s")

bool func_8000DBE4(s32 size, s32 fontId, s32 sampleAddr, s8 medium) {
    SampleCacheEntry* entry = AudioHeap_AllocTemporarySampleCacheEntry(size);

    if (entry != NULL) {
        entry->sampleBankId = fontId;
        entry->sampleAddr = sampleAddr;
        entry->origMedium = medium;
        return entry->allocatedAddr;
    } else {
        return false;
    }
}

s32 func_8000DC34(s32 size, s32 fontId, s32 sampleAddr, s8 medium) {
    SampleCacheEntry* entry = AudioHeap_AllocPersistentSampleCacheEntry(size);

    if (entry != NULL) {
        entry->sampleBankId = fontId;
        entry->sampleAddr = sampleAddr;
        entry->origMedium = medium;
        return entry->allocatedAddr;
    } else {
        return false;
    }
}

u8* func_8000DC84(u32 size, s32 fontId, s32 sampleAddr, s8 medium) {
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DCD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/AudioHeap_AllocTemporarySampleCacheEntry.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DFFC.s")

void func_8000E1C4(UnkStruct_8000E1C4_1* arg0, UnkStruct_8000E1C4_2* arg1) {
    if ((arg1 != NULL) && (arg1->unk_04 == arg0->unk_08)) {
        arg1->unk_04 = arg0->unk_0C;
        arg1->unk_00 = (((arg0->unk_01 & 0xFF) * 4) & 0xC) | (arg1->unk_00 & 0xFFF3);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/AudioHeap_AllocPersistentSampleCacheEntry.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000E290.s")

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
extern AudioPersistentCache D_8014C240;
extern AudioTemporaryCache D_8014C3D4;
extern AudioAllocPool D_8014C3D8;
extern AudioPersistentCache D_8014C410;
extern AudioAllocPool D_8014C420;
extern AudioTemporaryCache D_8014C5A4;
extern AudioPersistentCache D_8014C5E0;
extern AudioTemporaryCache D_8014C774;

UnkStruct_8000E1C4_1* func_8000DD68(s32);

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C990.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C9E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000CAF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000CEC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D08C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D104.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D4A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DB0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DB64.s")

bool func_8000DBE4(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    UnkStruct_8000E1C4_1* ret = func_8000DD68(arg0);

    if (ret != NULL) {
        ret->unk_02 = arg1;
        ret->unk_0C = arg2;
        ret->unk_01 = arg3;
        return ret->unk_08;
    } else {
        return false;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DC34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DC84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DCD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DD68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DFFC.s")

void func_8000E1C4(UnkStruct_8000E1C4_1* arg0, UnkStruct_8000E1C4_2* arg1) {
    if ((arg1 != NULL) && (arg1->unk_04 == arg0->unk_08)) {
        arg1->unk_04 = arg0->unk_0C;
        arg1->unk_00 = (((arg0->unk_01 & 0xFF) * 4) & 0xC) | (arg1->unk_00 & 0xFFF3);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000E208.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000E290.s")

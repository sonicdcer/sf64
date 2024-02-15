#ifndef SF64_AUDIO_H
#define SF64_AUDIO_H

#include "PR/ultratypes.h"

/**
 * Meta-data associated with a pool (contained within the Audio Heap)
 */
typedef struct {
    /* 0x0 */ u8* startRamAddr; // start addr of the pool
    /* 0x4 */ u8* curRamAddr; // address of the next available memory for allocation
    /* 0x8 */ s32 size; // size of the pool
    /* 0xC */ s32 numEntries; // number of entries allocated to the pool
} AudioAllocPool; // size = 0x10

/**
 * Audio cache entry data to store a single entry containing either a sequence, soundfont, or entire sample banks
 */
typedef struct {
    /* 0x0 */ u8* ramAddr;
    /* 0x4 */ u32 size;
    /* 0x8 */ s16 tableType;
    /* 0xA */ s16 id;
} AudioCacheEntry; // size = 0xC

typedef struct {
    /* 0x00*/ u32 numEntries;
    /* 0x04*/ AudioAllocPool pool;
    /* 0x14*/ AudioCacheEntry entries[16];
} AudioPersistentCache; // size = 0xD4

typedef struct {
    /* 0x00*/ u32 nextSide;
    /* 0x04*/ AudioAllocPool pool;
    /* 0x14*/ AudioCacheEntry entries[2];
} AudioTemporaryCache; // size = 0x3C

#endif
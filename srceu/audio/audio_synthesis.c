// No regional differences in this file.
#include "sys.h"
#include "sf64audio_provisional.h"

extern s8 D_8014E322;
extern f32 D_80147EB8[256];
extern f32 D_801482B8[256];
extern f32 D_801486B8[515];
extern s16 D_8014E324;

void func_800083D4(f32* buffer0, f32* buffer1, s32 length, f32* buffer2);
void func_80009194(s16** arg0);
Acmd* func_80009DE8(Acmd* aList, s32 aiBufLen, s16 reverbIndex, s16 updateIndex);
Acmd* func_8000A198(Acmd* aList, s16 reverbIndex, s16 updateIndex);
Acmd* func_8000A770(s32 noteIndex, NoteSubEu* noteSub, NoteSynthesisState* synthState, s16* aiBuf, s32 aiBufLen,
                    Acmd* aList, s32 updateIndex);
Acmd* func_800099F4(Acmd* aList, u16 dmem, u16 startPos, s32 size, s32 reverbIndex);
Acmd* func_8000994C(Acmd* aList, u16 dmem, u16 startPos, s32 size, s32 reverbIndex);
void func_8001676C(s32 arg0);
void func_80009B1C(s32 updateIndex);
void func_80008130(s32 sampleCount, s32 itemIndex, s32 reverbIndex);
Acmd* func_8000A2CC(s16* aiBuf, s32 aiBufLen, Acmd* aList, s32 updateIndex);
s32 func_800096EC(s32 length, s16* ramAddr, UnkStruct_800097A8* arg2);
void func_80009574(s16* arg0, UnkStruct_800097A8* arg1);
void func_800087F0(f32*, s32, f32*);

void func_80008130(s32 sampleCount, s32 itemIndex, s32 reverbIndex) {
    ReverbRingBufferItem* ringItem;
    SynthesisReverb* reverb = &gSynthReverbs[reverbIndex];
    s32 temp_lo;
    s32 temp_v1_3;
    s32 i;
    s32 j;
    s32 pad1;
    s32 pad2;
    s32 pad3;

    if ((reverb->downsampleRate != 1) && (reverb->framesToIgnore == 0)) {
        ringItem = &reverb->items[reverb->curFrame][itemIndex];
        osInvalDCache(ringItem->toDownsampleLeft, 0x300);
        j = 0;
        for (i = 0; i < ringItem->lengthA / 2; i++, j += reverb->downsampleRate) {
            reverb->leftRingBuf[ringItem->startPos + i] = ringItem->toDownsampleLeft[j];
            reverb->rightRingBuf[ringItem->startPos + i] = ringItem->toDownsampleRight[j];
        }
        for (i = 0; i < ringItem->lengthB / 2; i++, j += reverb->downsampleRate) {
            reverb->leftRingBuf[i] = ringItem->toDownsampleLeft[j];
            reverb->rightRingBuf[i] = ringItem->toDownsampleRight[j];
        }
    }
    ringItem = &reverb->items[reverb->curFrame][itemIndex];
    temp_lo = sampleCount / reverb->downsampleRate;
    temp_v1_3 = reverb->nextRingBufPos + temp_lo - reverb->bufSizePerChan;

    if (temp_v1_3 < 0) {
        ringItem->lengthA = temp_lo * 2;
        ringItem->lengthB = 0;
        ringItem->startPos = reverb->nextRingBufPos;
        reverb->nextRingBufPos += temp_lo;
    } else {
        ringItem->lengthA = (temp_lo - temp_v1_3) * 2;
        ringItem->lengthB = temp_v1_3 * 2;
        ringItem->startPos = reverb->nextRingBufPos;
        reverb->nextRingBufPos = temp_v1_3;
    }
    ringItem->numSamplesAfterDownsampling = temp_lo;
    ringItem->chunkLen = sampleCount;
}

void func_800083D4(f32* buffer0, f32* buffer1, s32 length, f32* buffer2) {
    f32 temp_ft0;
    f32 var_fs0;
    f32* buff0fromStart;
    f32* buf2half2;
    f32* buf2half3;
    f32* buff1half1;
    f32* buff0FromEnd;
    f32* buff1half2;
    s32 half;
    s32 i;
    s32 size;

    size = 1 << length;
    half = size >> 1;

    // Initialize buffer 2 if it is the wrong size for this calculation
    if (size != (s32) buffer2[0]) {
        buf2half2 = &buffer2[half];
        buf2half3 = &buf2half2[half];
        var_fs0 = 0.0f;
        temp_ft0 = D_PI / (f32) (2 * size);
        for (i = 0; i < half; i++) {
            *buf2half2++ = (__cosf(var_fs0) - __sinf(var_fs0)) * 0.707107f;
            *buf2half3++ = (__cosf(var_fs0) + __sinf(var_fs0)) * 0.707107f;
            var_fs0 += temp_ft0;
        }
    }

    // reset the buffer pointers
    buf2half2 = &buffer2[half];
    buf2half3 = &buf2half2[half];
    buff1half1 = buffer1;
    buff0fromStart = buffer0;

    // handle i = 0 case
    buffer1[0] = buffer0[0];
    buffer1[half] = buffer0[half];

    // advance buffer pointers
    buf2half2++;
    buf2half3++;
    buff0fromStart++;
    buff0FromEnd = &buffer0[size - 1];
    buff1half1++;
    buff1half2 = &buffer1[size - 1];

    // convert to real amplitudes
    for (i = 1; i < half; i++) {
        *buff1half1++ = (*buf2half2 * *buff0fromStart) + (*buf2half3 * *buff0FromEnd);
        *buff1half2-- = (*buf2half3 * *buff0fromStart) - (*buf2half2 * *buff0FromEnd);
        buff0fromStart++;
        buf2half3++;
        buf2half2++;
        buff0FromEnd--;
    }

    // FFT buffer 1 using buffer 2
    func_800087F0(buffer1, length, buffer2);

    buff0fromStart = buffer0;
    buff0FromEnd = &buffer0[size - 1];
    buff1half1 = buffer1;
    buff1half2 = &buffer1[half];

    // Copy even entries of buffer 0 into the first half of buffer 1. Copy odd entries into the second half in reverse
    // order
    for (i = 0; i < half; i++) {
        *buff0fromStart = *buff1half1++;
        *buff0FromEnd = *buff1half2++;
        buff0fromStart += 2;
        buff0FromEnd -= 2;
    }
}

#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/audio/audio_synthesis/func_800087F0.s")

#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/audio/audio_synthesis/func_80009194.s")

void func_80009574(s16* arg0, UnkStruct_800097A8* arg1) {
    s32 i;

    if (arg1->unk_0 != NULL) {
        arg1->unk_C = arg1->unk_0;
        arg1->unk_0 = 0;
    }

    arg1->unk18 += D_8014E324;
    while (arg1->unk18 > 0x1000) {
        func_80009194(&arg1->unk_C);
        arg1->unk18 -= 0x1000;
    }

    func_800083D4(D_80147EB8, D_801482B8, 8, D_801486B8);

    for (i = 0; i < 256; i++) {
        if (D_80147EB8[i] > 32767.0f) {
            D_80147EB8[i] = 32767.0f;
        }
        if (D_80147EB8[i] < -32767.0f) {
            D_80147EB8[i] = -32767.0f;
        }
    }

    for (i = 0; i < 0x100; i++, arg0++) {
        *arg0 = D_80147EB8[i];
    }
}

s32 func_800096EC(s32 length, s16* ramAddr, UnkStruct_800097A8* arg2) {
    s32 pad;
    s32 temp_t0;
    s32 i;
    s32 var_s1;
    s16* temp_t7 = (s16*) arg2->unk_14->ramAddr;

    for (i = 0; i < arg2->unk_4; i++) {
        ramAddr[i] = temp_t7[i];
    }

    var_s1 = arg2->unk_4;
    temp_t0 = (length - arg2->unk_4 + 0xFF) / 256;
    arg2->unk_4 = (temp_t0 * 256) + arg2->unk_4 - length;

    for (i = 0; i < temp_t0; i++) {
        func_80009574(&ramAddr[var_s1], arg2);
        var_s1 += 0x100;
    }

    for (i = 0; i < arg2->unk_4; i++) {
        temp_t7[i] = ramAddr[length + i];
    }
    return temp_t0;
}

u8* func_80009818(Sample* sample, s32 length, u32 flags, UnkStruct_800097A8* arg3) {
    s32 pad1;
    SampleDma* pad2;
    SampleDma* sp1C;

    if (flags == 1) {
        arg3->unk_0 = (s16*) sample->sampleAddr;
        arg3->unk_4 = 0;
        arg3->unk_8 = 0;
        arg3->unk18 = 0;

        if (gSampleDmaReuseQueue1RdPos != gSampleDmaReuseQueue1WrPos) {
            arg3->unk_14 = &gSampleDmas[gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos++]];
            arg3->unk_14->devAddr = -1;
            arg3->unk_14->sizeUnused = 0;
        }
    }

    if (gSampleDmaReuseQueue1RdPos != gSampleDmaReuseQueue1WrPos) {
        sp1C = &gSampleDmas[gSampleDmaReuseQueue1[gSampleDmaReuseQueue1RdPos++]];
    }

    if (1) {} //! FAKE

    sp1C->ttl = 2;
    sp1C->devAddr = sample->sampleAddr;
    sp1C->sizeUnused = length * 2;
    pad2 = arg3->unk_14;
    pad2->ttl = 2;
    arg3->unk_8 += func_800096EC(length, (s16*) sp1C->ramAddr, arg3);
    return sp1C->ramAddr;
}

Acmd* func_8000994C(Acmd* aList, u16 dmem, u16 startPos, s32 size, s32 reverbIndex) {
    aLoadBuffer(aList++, OS_K0_TO_PHYSICAL(&gSynthReverbs[reverbIndex].leftRingBuf[startPos]), dmem, size);
    aLoadBuffer(aList++, OS_K0_TO_PHYSICAL(&gSynthReverbs[reverbIndex].rightRingBuf[startPos]), dmem + 0x180, size);
    return aList;
}

Acmd* func_800099F4(Acmd* aList, u16 dmem, u16 startPos, s32 size, s32 reverbIndex) {
    aSaveBuffer(aList++, dmem, OS_K0_TO_PHYSICAL(&gSynthReverbs[reverbIndex].leftRingBuf[startPos]), size);
    aSaveBuffer(aList++, dmem + 0x180, OS_K0_TO_PHYSICAL(&gSynthReverbs[reverbIndex].rightRingBuf[startPos]), size);
    return aList;
}

void func_80009A9C(s32 updateIndex, s32 noteIndex) {
    NoteSubEu* noteSubEu;
    s32 i;

    for (i = updateIndex + 1; i < gAudioBufferParams.ticksPerUpdate; i++) {
        if (!gNoteSubsEu[(gNumNotes * i) + noteIndex].bitField0.needsInit) {
            gNoteSubsEu[(gNumNotes * i) + noteIndex].bitField0.enabled = false;
        } else {
            break;
        }
    }
}

void func_80009B1C(s32 updateIndex) {
    NoteSubEu* subEu;
    NoteSubEu* subEu2;
    s32 i;

    for (i = 0; i < gNumNotes; i++) {
        subEu = &gNotes[i].noteSubEu;
        subEu2 = &gNoteSubsEu[gNumNotes * updateIndex + i];
        if (subEu->bitField0.enabled) {
            *subEu2 = *subEu;
            subEu->bitField0.needsInit = false;
        } else {
            subEu2->bitField0.enabled = false;
        }
    }
}

Acmd* func_80009BD4(Acmd* aList, s32* cmdCount, s16* aiBufStart, s32 aiBufLen) {
    Acmd* aCmdPtr;
    s32* aiBufPtr;
    s32 chunkLen;
    s32 i;
    s32 j;

    aCmdPtr = aList;
    for (i = gAudioBufferParams.ticksPerUpdate; i > 0; i--) {
        func_8001676C(i - 1);
        func_80009B1C(gAudioBufferParams.ticksPerUpdate - i);
    }

    aiBufPtr = (s32*) aiBufStart;
    for (i = gAudioBufferParams.ticksPerUpdate; i > 0; i--) {
        if (i == 1) {
            chunkLen = aiBufLen;
        } else if ((aiBufLen / i) >= gAudioBufferParams.samplesPerTickMax) {
            chunkLen = gAudioBufferParams.samplesPerTickMax;
        } else if (gAudioBufferParams.samplesPerTickMin >= (aiBufLen / i)) {
            chunkLen = gAudioBufferParams.samplesPerTickMin;
        } else {
            chunkLen = gAudioBufferParams.samplesPerTick;
        }

        for (j = 0; j < gNumSynthReverbs; j++) {
            if (gSynthReverbs[j].useReverb) {
                func_80008130(chunkLen, gAudioBufferParams.ticksPerUpdate - i, j);
            }
        }

        aCmdPtr = func_8000A2CC((s16*) aiBufPtr, chunkLen, aCmdPtr, gAudioBufferParams.ticksPerUpdate - i);
        aiBufLen -= chunkLen;
        aiBufPtr += chunkLen;
    }

    for (j = 0; j < gNumSynthReverbs; j++) {
        if (gSynthReverbs[j].framesToIgnore != 0) {
            gSynthReverbs[j].framesToIgnore--;
        }
        gSynthReverbs[j].curFrame ^= 1;
    }

    *cmdCount = aCmdPtr - aList;

    return aCmdPtr;
}
Acmd* func_80009DE8(Acmd* aList, s32 aiBufLen, s16 reverbIndex, s16 updateIndex) {
    ReverbRingBufferItem* sp64 = &gSynthReverbs[reverbIndex].items[gSynthReverbs[reverbIndex].curFrame][updateIndex];
    s16 sp62;
    s16 sp60;

    aClearBuffer(aList++, 0xC90, 0x300);

    if (gSynthReverbs[reverbIndex].downsampleRate == 1) {
        aList = func_8000994C(aList, 0xC90, sp64->startPos, sp64->lengthA, reverbIndex);
        if (sp64->lengthB != 0) {
            aList = func_8000994C(aList, sp64->lengthA + 0xC90, 0, sp64->lengthB, reverbIndex);
        }
        aAddMixer(aList++, 0x300, 0xC90, 0x990, 0x7FFF);
        aMix(aList++, 0x30, gSynthReverbs[reverbIndex].decayRatio + 0x8000, 0xC90, 0xC90);
    } else {
        sp62 = (sp64->startPos & 7) * 2;
        sp60 = ALIGN16(sp62 + sp64->lengthA);
        aList = func_8000994C(aList, 0x470, sp64->startPos - (sp62 / 2), 0x180, reverbIndex);
        if (sp64->lengthB != 0) {
            aList = func_8000994C(aList, sp60 + 0x470, 0, 0x180 - sp60, reverbIndex);
        }
        aSetBuffer(aList++, 0, sp62 + 0x470, 0xC90, aiBufLen * 2);
        aResample(aList++, gSynthReverbs[reverbIndex].resampleFlags, gSynthReverbs[reverbIndex].unk_0A,
                  OS_K0_TO_PHYSICAL(gSynthReverbs[reverbIndex].unk_30));
        aSetBuffer(aList++, 0, sp62 + 0x5F0, 0xE10, aiBufLen * 2);
        aResample(aList++, gSynthReverbs[reverbIndex].resampleFlags, gSynthReverbs[reverbIndex].unk_0A,
                  OS_K0_TO_PHYSICAL(gSynthReverbs[reverbIndex].unk_34));
        aAddMixer(aList++, 0x300, 0xC90, 0x990, 0x7FFF);
        aMix(aList++, 0x30, gSynthReverbs[reverbIndex].decayRatio + 0x8000, 0xC90, 0xC90);
    }

    if ((gSynthReverbs[reverbIndex].leakRtL != 0) || (gSynthReverbs[reverbIndex].leakLtR != 0)) {
        aDMEMMove(aList++, 0xC90, 0x470, 0x180);
        aMix(aList++, 0x18, gSynthReverbs[reverbIndex].leakRtL, 0xE10, 0xC90);
        aMix(aList++, 0x18, gSynthReverbs[reverbIndex].leakLtR, 0x470, 0xE10);
    }
    return aList;
}

Acmd* func_8000A198(Acmd* aList, s16 reverbIndex, s16 updateIndex) {
    ReverbRingBufferItem* sp24;

    sp24 = &gSynthReverbs[reverbIndex].items[gSynthReverbs[reverbIndex].curFrame][updateIndex];
    switch (gSynthReverbs[reverbIndex].downsampleRate) {
        case 1:
            aList = func_800099F4(aList, 0xC90, sp24->startPos, sp24->lengthA, reverbIndex);
            if (sp24->lengthB != 0) {
                aList = func_800099F4(aList, sp24->lengthA + 0xC90, 0, sp24->lengthB, reverbIndex);
            }
            break;

        default:
            aSaveBuffer(aList++, 0xC90,
                        OS_K0_TO_PHYSICAL(gSynthReverbs[reverbIndex]
                                              .items[gSynthReverbs[reverbIndex].curFrame][updateIndex]
                                              .toDownsampleLeft),
                        0x300);
            gSynthReverbs[reverbIndex].resampleFlags = 0;
            break;
    }

    return aList;
}

Acmd* func_8000A2CC(s16* aiBuf, s32 aiBufLen, Acmd* aList, s32 updateIndex) {
    u8 sp84[0x3C];
    NoteSubEu* temp_v0;
    s16 var_s2;
    s16 i;
    s32 j;

    var_s2 = 0;
    if (gNumSynthReverbs == 0) {
        if (gSynthReverbs[i].useReverb) {} // fake?
        for (j = 0; j < gNumNotes; j++) {
            if (gNoteSubsEu[gNumNotes * updateIndex + j].bitField0.enabled) {
                sp84[var_s2++] = j;
            }
        }
    } else {
        for (i = 0; i < gNumSynthReverbs; i++) {
            for (j = 0; j < gNumNotes; j++) {
                temp_v0 = &gNoteSubsEu[gNumNotes * updateIndex + j];
                if (temp_v0->bitField0.enabled && (temp_v0->bitField1.reverbIndex == i)) {
                    sp84[var_s2++] = j;
                }
            }
        }
        for (j = 0; j < gNumNotes; j++) {
            temp_v0 = &gNoteSubsEu[gNumNotes * updateIndex + j];
            if (temp_v0->bitField0.enabled && (temp_v0->bitField1.reverbIndex >= gNumSynthReverbs)) {
                sp84[var_s2++] = j;
            }
        }
    }

    aClearBuffer(aList++, 0x990, 0x300);

    j = 0;
    for (i = 0; i < gNumSynthReverbs; i++) {
        D_8014E322 = gSynthReverbs[i].useReverb;
        if (D_8014E322) {
            aList = func_80009DE8(aList, aiBufLen, i, updateIndex);
        }
        while (j < var_s2) {
            if (i != gNoteSubsEu[updateIndex * gNumNotes + sp84[j]].bitField1.reverbIndex) {
                break;
            }
            aList = func_8000A770(sp84[j], &gNoteSubsEu[updateIndex * gNumNotes + sp84[j]],
                                  &gNotes[sp84[j]].synthesisState, aiBuf, aiBufLen, aList, updateIndex);
            j++;
        }
        if (gSynthReverbs[i].useReverb) {
            aList = func_8000A198(aList, i, updateIndex);
        }
    }

    while (j < var_s2) {
        aList = func_8000A770(sp84[j], &gNoteSubsEu[updateIndex * gNumNotes + sp84[j]], &gNotes[sp84[j]].synthesisState,
                              aiBuf, aiBufLen, aList, updateIndex);
        j++;
    }

    j = aiBufLen * 2;
    aSetBuffer(aList++, 0, 0, 0x450, j);
    aInterleave(aList++, 0, 0x990, 0xB10, 0);
    aSaveBuffer(aList++, 0x450, OS_K0_TO_PHYSICAL(aiBuf), j * 2);

    return aList;
}

#pragma GLOBAL_ASM("asm/eu/rev0/nonmatchings/audio/audio_synthesis/func_8000A770.s")

Acmd* func_8000B460(Acmd* aList, NoteSubEu* noteSub, NoteSynthesisState* synthState, s32 numSamplesToLoad) {
    s32 temp_v1;

    aLoadBuffer(aList++, OS_K0_TO_PHYSICAL(noteSub->waveSampleAddr), 0x5F0, 0x80);
    synthState->samplePosInt &= 0x3F;
    temp_v1 = 0x40 - synthState->samplePosInt;
    if (temp_v1 < numSamplesToLoad) {
        if ((((numSamplesToLoad - temp_v1) + 0x3F) / 64) != 0) {
            aDuplicate(aList++, ((numSamplesToLoad - temp_v1) + 0x3F) / 64, 0x5F0, 0x670);
        }
    }
    return aList;
}

Acmd* func_8000B4F0(Acmd* aList, NoteSynthesisState* synthState, s32 size, u16 pitch, u16 inpDmem, u32 resampleFlags) {
    if (pitch == 0) {
        aClearBuffer(aList++, 0x450, size);
    } else {
        aSetBuffer(aList++, 0, inpDmem, 0x450, size);
        aResample(aList++, resampleFlags, pitch, OS_K0_TO_PHYSICAL(synthState->synthesisBuffers->finalResampleState));
    }
    return aList;
}

Acmd* func_8000B58C(Acmd* aList, NoteSubEu* noteSub, NoteSynthesisState* synthState, s32 aiBufLen, u16 dmemSrc,
                    s32 delaySide, s32 flags) {
    s16 var_a2;
    s16 var_a3;
    s16 var_t0;
    u16 temp_t7;
    u16 temp_t9;
    u16 temp_t1;
    u16 temp_t2;
    s32 temp_a1;
    s32 temp = 0;

    temp_t1 = synthState->curVolLeft;
    temp_t2 = synthState->curVolRight;

    temp_t7 = noteSub->panVolLeft;
    temp_t9 = noteSub->panVolRight;

    temp_t7 <<= 4;
    temp_t9 <<= 4;

    if (temp_t7 != temp_t1) {
        var_t0 = (temp_t7 - temp_t1) / (aiBufLen >> 3);
    } else {
        var_t0 = 0;
    }
    if (temp_t9 != temp_t2) {
        var_a3 = (temp_t9 - temp_t2) / (aiBufLen >> 3);
    } else {
        var_a3 = 0;
    }

    temp_a1 = synthState->reverbVol;

    if (noteSub->reverb != temp_a1) {
        temp = (((noteSub->reverb & 0x7F) - (temp_a1 & 0x7F)) << 8);
        var_a2 = temp / (aiBufLen >> 3);
        synthState->reverbVol = noteSub->reverb;
    } else {
        var_a2 = 0;
    }

    synthState->curVolLeft = temp_t1 + (var_t0 * (aiBufLen >> 3));
    synthState->curVolRight = temp_t2 + (var_a3 * (aiBufLen >> 3));

    if (noteSub->bitField0.usesHeadsetPanEffects) {
        aClearBuffer(aList++, 0x650, 0x180);
        aEnvSetup1(aList++, (temp_a1 & 0x7F), var_a2, var_t0, var_a3);
        aEnvSetup2(aList++, temp_t1, temp_t2);

        switch (delaySide) {
            case 1:
                aEnvMixer(aList++, dmemSrc, aiBufLen, 0, 0, ((temp_a1 & 0x80) >> 7),
                          noteSub->bitField0.stereoStrongRight, noteSub->bitField0.stereoStrongLeft, 0x65B1C9E1);
                break;
            case 2:
                aEnvMixer(aList++, dmemSrc, aiBufLen, 0, 0, ((temp_a1 & 0x80) >> 7),
                          noteSub->bitField0.stereoStrongRight, noteSub->bitField0.stereoStrongLeft, 0x9965C9E1);
                break;
            default:
                aEnvMixer(aList++, dmemSrc, aiBufLen, 0, 0, ((temp_a1 & 0x80) >> 7),
                          noteSub->bitField0.stereoStrongRight, noteSub->bitField0.stereoStrongLeft, 0x99B1C9E1);
                break;
        }
    } else {
        aEnvSetup1(aList++, (temp_a1 & 0x7F), var_a2, var_t0, var_a3);
        aEnvSetup2(aList++, temp_t1, temp_t2);
        aEnvMixer(aList++, dmemSrc, aiBufLen, 0, 0, ((temp_a1 & 0x80) >> 7), noteSub->bitField0.stereoStrongRight,
                  noteSub->bitField0.stereoStrongLeft, 0x99B1C9E1);
    }

    return aList;
}

Acmd* func_8000B9FC(Acmd* aList, NoteSubEu* noteSub, NoteSynthesisState* synthState, s32 size, s32 flags,
                    s32 delaySide) {
    u16 var_t0;
    u8 var_a1;
    u8 var_v1;
    u16 temp;

    switch (delaySide) {
        case 1:
            var_t0 = 0x990;
            var_a1 = noteSub->leftDelaySize;
            synthState->prevHaasEffectRightDelaySize = 0;
            var_v1 = synthState->prevHaasEffectLeftDelaySize;
            synthState->prevHaasEffectLeftDelaySize = var_a1;
            break;

        case 2:
            var_t0 = 0xB10;
            var_a1 = noteSub->rightDelaySize;
            synthState->prevHaasEffectLeftDelaySize = 0;
            var_v1 = synthState->prevHaasEffectRightDelaySize;
            synthState->prevHaasEffectRightDelaySize = var_a1;
            break;

        default:
            return aList;
    }

    if (flags != 1) {
        if (var_a1 != var_v1) {
            temp = (((size << 0xF) / 2) - 1) / ((size + var_a1 - var_v1 - 2) / 2);
            aSetBuffer(aList++, 0, 0x650, 0x450, size + var_a1 - var_v1);
            aResampleZoh(aList++, temp, 0);
        } else {
            aDMEMMove(aList++, 0x650, 0x450, size);
        }
        if (var_v1 != 0) {
            aLoadBuffer(aList++, OS_K0_TO_PHYSICAL(synthState->synthesisBuffers->panSamplesBuffer), 0x650,
                        ALIGN16(var_v1));
            aDMEMMove(aList++, 0x450, var_v1 + 0x650, size + var_a1 - var_v1);
        } else {
            aDMEMMove(aList++, 0x450, 0x650, size + var_a1);
        }
    } else {
        aDMEMMove(aList++, 0x650, 0x450, size);
        aClearBuffer(aList++, 0x650, var_a1);
        aDMEMMove(aList++, 0x450, var_a1 + 0x650, size);
    }
    if (var_a1) {
        aSaveBuffer(aList++, size + 0x650, OS_K0_TO_PHYSICAL(synthState->synthesisBuffers->panSamplesBuffer),
                    ALIGN16(var_a1));
    }

    aAddMixer(aList++, ALIGN64(size), 0x650, var_t0, 0x7FFF);

    return aList;
}

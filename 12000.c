#include "sys.h"
#include "sf64audio_provisional.h"


? func_80013A18(Note *);                            /* extern */
? func_80013A84(Note *);                            /* extern */
? func_80013B6C(AdsrState *, EnvelopePoint *, s16 *, Note *); /* extern */
f32 func_80013B90(void *);                          /* extern */
? func_8001415C(void *, u32);                       /* extern */
AudioListItem *func_800145FC(AudioListItem *);      /* extern */
extern ? D_800C57E8;
extern AudioListItem D_801530D0;
extern AudioListItem D_801530E0;
extern AudioListItem D_801530F0;
extern ? gDefaultNoteSub;
extern ? gDefaultPanVolume;
extern ? gHaasEffectDelaySizes;
extern ? gHeadsetPanVolume;
extern ? gStereoPanVolume;
extern ? gUnkSample;
extern ? gZeroNoteSub;

void func_80011890(Note *arg0, NoteAttributes *arg1) {
    u8 sp27;
    u8 sp26;
    s32 sp24;
    NoteSubEu *temp_v0;
    NoteSubEu *temp_v0_2;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fv1;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    u32 temp_t6;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t3_2;
    u8 temp_t3_3;
    u8 temp_t5;
    u8 temp_t8;
    u8 temp_t9;

    func_80011C58(arg0, arg1->freqScale);
    var_fv1 = arg1->velocity;
    sp27 = arg1->pan;
    temp_v0 = &arg0->noteSubEu;
    sp26 = arg1->reverb;
    sp24 = (u8) arg1->stereo.asByte;
    temp_t3 = sp27 & 0x7F;
    sp27 = temp_t3;
    if ((arg0->unkB0 & 0x02000000) && (temp_t0 = (s32) (temp_t3 & 0xFF) >> 1, (gSoundMode == 1))) {
        var_a0 = temp_t0;
        if (temp_t0 >= 0x40) {
            var_a0 = 0x3F;
        }
        temp_v1 = var_a0 * 2;
        temp_v0_2 = &arg0->noteSubEu;
        temp_v0_2->pad2[2] = (u8) *(&gHaasEffectDelaySizes + temp_v1);
        temp_t5 = temp_v0_2->unk0 & 0xFFF7;
        temp_t3_2 = temp_t5 & 0xFB;
        temp_v0_2->unk0 = temp_t5;
        temp_v0_2->unk0 = temp_t3_2;
        temp_v0_2->unk0 = (u8) (temp_t3_2 | 1);
        temp_v0_2->pad2[1] = (u8) *(&gHaasEffectDelaySizes + 0x7E + -temp_v1);
        var_fa0 = *(&gHeadsetPanVolume + (sp27 * 4));
        var_fa1 = *(&gHeadsetPanVolume + 0x1FC + -(sp27 * 4));
    } else if (((s32) temp_v0->unk0 & 0x02000000) && (gSoundMode == 0)) {
        temp_v0->pad2[1] = 0;
        temp_v0->pad2[2] = 0;
        temp_v0->unk0 = (u8) (temp_v0->unk0 & 0xFFFE);
        var_a0_2 = 0;
        var_fa0 = *(&gStereoPanVolume + (sp27 * 4));
        var_fa1 = *(&gStereoPanVolume + 0x1FC + -(sp27 * 4));
        var_a1 = 0;
        if ((s32) sp27 < 0x20) {
            var_a1 = 1;
        } else if ((s32) sp27 >= 0x61) {
            var_a0_2 = 1;
        }
        temp_t2 = ((var_a0_2 * 8) & 8) | (temp_v0->unk0 & 0xFFF7);
        temp_v0->unk0 = temp_t2;
        temp_v0->unk0 = (u8) (((var_a1 * 4) & 4) | (temp_t2 & 0xFB));
        temp_t6 = (u32) (sp24 * 0x10) >> 0x1E;
        switch (temp_t6) {                          /* irregular */
        case 1:
            break;
        case 0:
            temp_t9 = ((((u32) (sp24 << 6) >> 0x1F) * 8) & 8) | (temp_v0->unk0 & 0xFFF7);
            temp_v0->unk0 = temp_t9;
            temp_v0->unk0 = (u8) ((((u8) sp24 * 4) & 4) | (temp_t9 & 0xFB));
            break;
        case 2:
            temp_t8 = (((((u32) (sp24 << 6) >> 0x1F) | var_a0_2) * 8) & 8) | (temp_v0->unk0 & 0xFFF7);
            temp_v0->unk0 = temp_t8;
            temp_v0->unk0 = (u8) (((((u8) sp24 | var_a1) * 4) & 4) | (temp_t8 & 0xFB));
            break;
        case 3:
            temp_t3_3 = (((((u32) (sp24 << 6) >> 0x1F) ^ var_a0_2) * 8) & 8) | (temp_v0->unk0 & 0xFFF7);
            temp_v0->unk0 = temp_t3_3;
            temp_v0->unk0 = (u8) (((((u8) sp24 ^ var_a1) * 4) & 4) | (temp_t3_3 & 0xFB));
            break;
        }
    } else if (gSoundMode == 3) {
        var_fa1 = 0.707f;
        var_fa0 = 0.707f;
    } else {
        var_fa0 = *(&gDefaultPanVolume + (sp27 * 4));
        var_fa1 = *(&gDefaultPanVolume + 0x1FC + -(sp27 * 4));
    }
    if (var_fv1 < 0.0f) {
        var_fv1 = 0.0f;
    }
    if (var_fv1 > 1.0f) {
        var_fv1 = 1.0f;
    }
    arg0->noteSubEu.unk6 = (s16) (s32) (var_fv1 * var_fa0 * 4095.999f);
    arg0->noteSubEu.unk8 = (s16) (s32) (var_fv1 * var_fa1 * 4095.999f);
    arg0->noteSubEu.pad2[0] = arg1->gain;
    if (sp26 != arg0->noteSubEu.pad2[3]) {
        arg0->noteSubEu.pad2[3] = sp26;
        arg0->noteSubEu.unk0 = (u8) (arg0->noteSubEu.unk0 | 0x10);
        return;
    }
    if ((s32) arg0->noteSubEu.unk0 & 0x40000000) {
        arg0->noteSubEu.unk0 = (u8) (arg0->noteSubEu.unk0 | 0x10);
        return;
    }
    arg0->noteSubEu.unk0 = (u8) (arg0->noteSubEu.unk0 & 0xFFEF);
}

void func_80011C58(Note *arg0, f32 arg1) {
    NoteSubEu *temp_v0;
    NoteSubEu *temp_v0_2;
    f32 var_fv0;

    temp_v0 = &arg0->noteSubEu;
    if (arg1 < 2.0f) {
        temp_v0_2 = &arg0->noteSubEu;
        temp_v0_2->unk1 = (u8) (temp_v0_2->unk1 & 0xFFFE);
        if (arg1 > 1.99998f) {
            var_fv0 = 1.99998f;
        } else {
            var_fv0 = arg1;
        }
    } else {
        temp_v0->unk1 = (u8) (temp_v0->unk1 | 1);
        if (arg1 > 3.99996f) {
            var_fv0 = 1.99998f;
        } else {
            var_fv0 = arg1 * 0.5f;
        }
    }
    arg0->unkBA = (s16) (s32) (var_fv0 * 32768.0f);
}

void *func_80011D10(void *arg0, s32 arg1) {
    if (arg1 < (s32) arg0->unk1) {
        return arg0 + 8;
    }
    if ((s32) arg0->unk2 >= arg1) {
        return arg0 + 0x10;
    }
    return arg0 + 0x18;
}

Instrument *func_80011D4C(s32 arg0, s32 arg1) {
    Instrument *temp_v1;
    SoundFont *temp_v0;

    if ((s32) gFontLoadStatus[arg0] < 2) {
        D_80155D88 = arg0 + 0x10000000;
        return NULL;
    }
    temp_v0 = &gSoundFontList[arg0];
    if (arg1 >= (s32) temp_v0->numInstruments) {
        D_80155D88 = (arg0 << 8) + arg1 + 0x03000000;
        return NULL;
    }
    temp_v1 = temp_v0->instruments[arg1];
    if (temp_v1 == NULL) {
        D_80155D88 = (arg0 << 8) + arg1 + 0x01000000;
        return temp_v1;
    }
    return temp_v1;
}

Drum *func_80011DFC(s32 arg0, s32 arg1) {
    Drum **temp_v1;
    Drum *temp_a2;
    SoundFont *temp_v0;

    if ((s32) gFontLoadStatus[arg0] < 2) {
        D_80155D88 = arg0 + 0x10000000;
        return NULL;
    }
    temp_v0 = &gSoundFontList[arg0];
    if (arg1 >= (s32) temp_v0->numDrums) {
        D_80155D88 = (arg0 << 8) + arg1 + 0x04000000;
        return NULL;
    }
    temp_v1 = temp_v0->drums;
    if ((u32) temp_v1 < 0x80000000U) {
        return NULL;
    }
    temp_a2 = temp_v1[arg1];
    if (temp_a2 == NULL) {
        D_80155D88 = (arg0 << 8) + arg1 + 0x05000000;
    }
    return temp_a2;
}

void func_80011EB8(Note *arg0) {
    SequenceLayer_2 *temp_v0;

    temp_v0 = arg0->playbackState.parentLayer;
    if (temp_v0->unk_18.decayIndex == 0) {
        func_80013B6C(&arg0->playbackState.adsr, temp_v0->unk_4C->adsr.envelope, &arg0->playbackState.adsrVolScaleUnused, arg0);
    } else {
        func_80013B6C(&arg0->playbackState.adsr, temp_v0->unk_18.envelope, &arg0->playbackState.adsrVolScaleUnused, arg0);
    }
    arg0->playbackState.adsr.state = 1;
    arg0->unkB0 = (s32) gDefaultNoteSub.unk0;
    arg0->unkB4 = (s32) gDefaultNoteSub.unk4;
    arg0->unkB8 = (s32) gDefaultNoteSub.unk8;
    arg0->noteSubEu.waveSampleAddr = gDefaultNoteSub.unkC;
}

void func_80011F4C(Note *arg0) {
    if (((u32) (arg0->unkB0 * 2) >> 0x1F) == 1) {
        arg0->unkB0 = (s8) ((u8) arg0->unkB0 & 0xFFBF);
    }
    arg0->playbackState.priority = 0;
    arg0->playbackState.unk_04 = 0;
    arg0->unkB0 = (s8) ((u8) arg0->unkB0 & 0xFF7F);
    arg0->playbackState.parentLayer = (SequenceLayer_2 *)-1;
    arg0->playbackState.prevParentLayer = (SequenceLayer_2 *)-1;
    arg0->unkB0 = (s8) ((u8) arg0->unkB0 & 0xFFDF);
    arg0->playbackState.adsr.state = 0;
    arg0->playbackState.adsr.current = 0.0f;
}

void func_80011FA8(void) {
    f32 sp78;
    f32 sp74;
    u8 sp73;
    u8 sp72;
    u8 sp71;
    u8 sp70;
    u8 sp6F;
    Note *temp_s1;
    SequenceLayer_2 *temp_a1_2;
    f32 temp_fs0;
    f32 temp_ft3;
    s32 *temp_v0;
    s32 temp_v1;
    s32 var_s3;
    s32 var_v0;
    u32 temp_a1;
    u8 *var_s0;
    u8 temp_v0_2;
    u8 var_v0_2;
    u8 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0_3;

    temp_v1 = gNumNotes;
    if (temp_v1 > 0) {
        var_s3 = 0;
        do {
            temp_s1 = var_s3 + gNotes;
            var_s0 = temp_s1 + 0x30;
            if (temp_s1->playbackState.parentLayer != (SequenceLayer_2 *)-1) {
                var_s0 = temp_s1 + 0x30;
                temp_a1 = var_s0->unk14;
                if (temp_a1 < 0x7FFFFFFFU) {
                    var_v0 = temp_v1 * 3;
                } else {
                    if ((temp_s1 != temp_a1->unk40) && (var_s0->unk4 == 0)) {
                        var_v0_2 = 1 & 0xFF;
                        var_s0->unk28 = (u8) (var_s0->unk28 | 0x10);
                        var_s0->unk0 = 1;
                        var_s0->unk4 = 2U;
                        var_s0->unk38 = (f32) gAudioBufferParams.ticksPerUpdateInv;
                        goto block_21;
                    }
                    if ((((u32) temp_a1->unk0 >> 0x1F) != 0) || (var_s0->unk4 != 0) || ((s32) var_s0->unk0 <= 0)) {
                        temp_a0 = temp_a1->unk4C;
                        temp_v0 = temp_a0->unk44;
                        if (temp_v0 == NULL) {
                            func_8001415C(temp_a0, temp_a1);
                            var_s0->unk0 = 1;
                            var_s0->unk4 = 1U;
                            var_v0 = gNumNotes * 3;
                        } else {
                            if (!(*temp_v0 & 0x20000000) || !(temp_a0->unk3 & 0x40)) {

                            } else {
                                goto block_16;
                            }
                            goto block_20;
                        }
                    } else {
block_16:
                        func_8001268C((SequenceLayer_2 *) temp_a1);
                        func_80012C40(temp_s1);
                        func_80012C00(&temp_s1->listItem.pool->decaying, &temp_s1->listItem);
                        var_s0->unk0 = 1;
                        var_s0->unk4 = 2U;
                        goto block_20;
                    }
                }
            } else if ((var_s0->unk4 == 0) && (var_v0 = temp_v1 * 3, ((s32) var_s0->unk0 > 0))) {

            } else {
block_20:
                var_v0_2 = *var_s0;
block_21:
                if (var_v0_2 != 0) {
                    if (((s32) var_s0->unk4 > 0) || (temp_s1->noteSubEu & 0x20000000)) {
                        if ((var_s0->unk29 == 0) || (temp_s1->noteSubEu & 0x20000000)) {
                            if (var_s0->unk18 != (SequenceLayer_2 *)-1) {
                                func_80011F4C(temp_s1);
                                temp_a1_2 = var_s0->unk18;
                                if (temp_a1_2->unk_4C != NULL) {
                                    func_80012CEC(temp_s1, temp_a1_2);
                                    func_80013A84(temp_s1);
                                    func_80012C40(temp_s1);
                                    func_800145BC(&temp_s1->listItem.pool->active, &temp_s1->listItem);
                                    var_s0->unk18 = (SequenceLayer_2 *)-1;
                                    goto block_33;
                                }
                                func_80011F4C(temp_s1);
                                func_80012C40(temp_s1);
                                func_800145BC(&temp_s1->listItem.pool->disabled, &temp_s1->listItem);
                                var_s0->unk18 = (SequenceLayer_2 *)-1;
                            } else {
                                func_80011F4C(temp_s1);
                                func_80012C40(temp_s1);
                                func_800145BC(&temp_s1->listItem.pool->disabled, &temp_s1->listItem);
                            }
                        } else {
                            goto block_33;
                        }
                    } else if (var_s0->unk29 == 0) {
                        func_80011F4C(temp_s1);
                        func_80012C40(temp_s1);
                        func_800145BC(&temp_s1->listItem.pool->disabled, &temp_s1->listItem);
                    } else {
block_33:
                        temp_fs0 = func_80013B90(var_s0 + 0x28);
                        func_80013A18(temp_s1);
                        temp_v0_2 = var_s0->unk4;
                        if ((temp_v0_2 == 1) || (temp_v0_2 == 2)) {
                            temp_v0_3 = var_s0 + 0x1C;
                            sp74 = temp_v0_3->unk4;
                            sp78 = temp_v0_3->unk8;
                            sp72 = temp_v0_3->unk2;
                            sp70 = temp_v0_3->unk0;
                            sp73 = temp_v0_3->unk3;
                            sp71 = temp_v0_3->unk1;
                            var_v1 = ((u32) (temp_s1->noteSubEu << 0xB) >> 0x1D) & 0xFF;
                        } else {
                            sp74 = var_s0->unk14->unk30;
                            sp78 = var_s0->unk14->unk2C;
                            sp72 = var_s0->unk14->unk7;
                            sp73 = var_s0->unk14->unk1;
                            sp70 = var_s0->unk14->unk4C->unk4;
                            sp71 = var_s0->unk14->unk4C->unkB;
                            temp_a0_2 = var_s0->unk14->unk4C;
                            var_v1 = temp_a0_2->unk8 & 7;
                            if ((*temp_a0_2->unk44 & 0x20000000) && (temp_a0_2->unk3 & 8)) {
                                sp74 = 0.0f;
                                sp78 = 0.0f;
                            }
                        }
                        sp6F = var_v1;
                        temp_ft3 = sp74 * (var_s0->unkC * var_s0->unk8);
                        sp74 = temp_ft3;
                        sp74 = temp_ft3 * gAudioBufferParams.resampleRate;
                        sp78 *= temp_fs0;
                        func_80011890(temp_s1, (NoteAttributes *) &sp70);
                        temp_s1->noteSubEu.unk1 = (u8) (((sp6F * 4) & 0x1C) | (temp_s1->noteSubEu.unk1 & 0xFFE3));
                    }
                }
                var_v0 = gNumNotes * 3;
            }
            var_s3 += 0xC0;
        } while (var_s3 < (var_v0 << 6));
    }
}

void func_80012438(SequenceLayer_2 *arg0, s32 arg1) {
    Note *sp1C;
    Note *temp_v0;
    NoteAttributes *temp_v0_3;
    SequenceChannel *temp_v1;
    SequenceChannel *temp_v1_2;
    SequenceLayer_2 *temp_t9;
    SequenceLayer_2 *temp_v0_2;
    f32 var_ft4;
    f32 var_ft5;
    u8 temp_t7;
    u8 temp_v0_4;

    if ((arg0 != (SequenceLayer_2 *)-1) && (temp_v0 = arg0->unk_40, arg0->unk_3 = 0, (temp_v0 != NULL))) {
        if (arg0 == temp_v0->playbackState.wantedParentLayer) {
            temp_v0->playbackState.wantedParentLayer = (SequenceLayer_2 *)-1;
        }
        temp_v0_2 = temp_v0->playbackState.parentLayer;
        if (arg0 != temp_v0_2) {
            if ((temp_v0_2 == (SequenceLayer_2 *)-1) && (temp_v0->playbackState.wantedParentLayer == (SequenceLayer_2 *)-1) && (arg0 == temp_v0->playbackState.prevParentLayer) && (arg1 != 6)) {
                temp_v0->playbackState.adsr.action.asByte |= 0x10;
                temp_v0->playbackState.adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
            }
        } else {
            if (temp_v0->playbackState.adsr.state != 6) {
                temp_v0_3 = &temp_v0->playbackState.attributes;
                temp_v0_3->freqScale = arg0->unk_30;
                temp_v0_3->velocity = arg0->unk_2C;
                temp_v0_3->pan = arg0->unk_7;
                temp_v0_3->stereo.asByte = arg0->unk_1;
                temp_v1 = arg0->unk_4C;
                if (temp_v1 != NULL) {
                    temp_v0_3->reverb = temp_v1->targetReverbVol;
                    temp_v0_3->gain = arg0->unk_4C->reverbIndex;
                    temp_v1_2 = arg0->unk_4C;
                    if ((*temp_v1_2->seqPlayer & 0x20000000) && (temp_v1_2->muteBehavior & 8)) {
                        temp_v0->unkB0 = (u8) (temp_v0->unkB0 | 0x20);
                    }
                }
                temp_t9 = temp_v0->playbackState.parentLayer;
                temp_v0->playbackState.priority = 1;
                temp_v0->playbackState.parentLayer = (SequenceLayer_2 *)-1;
                temp_v0->playbackState.prevParentLayer = temp_t9;
                if (arg1 == 7) {
                    temp_v0->playbackState.adsr.action.asByte |= 0x10;
                    temp_v0->playbackState.unk_04 = 2;
                    temp_v0->playbackState.adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
                } else {
                    temp_v0->playbackState.unk_04 = 1;
                    temp_v0->playbackState.adsr.action.asByte |= 0x20;
                    temp_v0_4 = arg0->unk_18.decayIndex;
                    if (temp_v0_4 == 0) {
                        temp_t7 = arg0->unk_4C->adsr.decayIndex;
                        var_ft5 = (f32) temp_t7;
                        if ((s32) temp_t7 < 0) {
                            var_ft5 += 4294967296.0f;
                        }
                        temp_v0->playbackState.adsr.fadeOutVel = var_ft5 * gAudioBufferParams.ticksPerUpdateInvScaled;
                    } else {
                        var_ft4 = (f32) temp_v0_4;
                        if ((s32) temp_v0_4 < 0) {
                            var_ft4 += 4294967296.0f;
                        }
                        temp_v0->playbackState.adsr.fadeOutVel = var_ft4 * gAudioBufferParams.ticksPerUpdateInvScaled;
                    }
                    temp_v0->playbackState.adsr.sustain = (f32) arg0->unk_4C->adsr.sustain * temp_v0->playbackState.adsr.current * 0.00390625f;
                }
            }
            if (arg1 == 6) {
                sp1C = temp_v0;
                func_80012C40(temp_v0);
                func_80012C00(&temp_v0->listItem.pool->decaying, &temp_v0->listItem);
            }
        }
    }
}

void func_8001266C(SequenceLayer_2 *arg0) {
    func_80012438(arg0, 6);
}

void func_8001268C(SequenceLayer_2 *arg0) {
    func_80012438(arg0, 7);
}

s32 func_800126AC(Note *arg0, SequenceLayer_2 *arg1, s32 arg2) {
    f32 temp_fa0;
    f32 temp_fv1;
    f32 var_fv0;
    f32 var_fv0_2;
    s32 var_a2;
    u8 var_v1;

    var_a2 = arg2;
    var_v1 = 0;
    if (var_a2 < 0x80) {
        var_a2 = 0x80;
    }
    temp_fv1 = arg1->unk_24;
    var_fv0 = temp_fv1;
    if (arg1->unk_8 != 0) {
        temp_fa0 = arg1->unk_14;
        if (temp_fa0 > 0.0f) {
            var_fv0 *= temp_fa0 + 1.0f;
        }
    }
    if (var_fv0 < 1.0f) {
        var_fv0_2 = 1.0465f;
    } else {
        var_v1 = 1;
        if (var_fv0 < 2.0f) {
            var_fv0_2 = 0.52325f;
        } else {
            var_v1 = 3;
            if (var_fv0 < 4.0f) {
                var_v1 = 2;
                var_fv0_2 = 0.26263f;
            } else {
                var_fv0_2 = 0.13081f;
            }
        }
    }
    arg1->unk_24 = temp_fv1 * var_fv0_2;
    arg0->playbackState.waveId = (u8) var_a2;
    arg0->playbackState.harmonicIndex = var_v1;
    arg0->noteSubEu.waveSampleAddr = *(&gUnkSample + (var_a2 * 4)) + (var_v1 << 7);
    return (s32) var_v1;
}

void func_800127B0(Note *arg0, SequenceLayer_2 *arg1) {
    s32 sp1C;
    u8 var_a2;

    var_a2 = arg1->unk_2;
    if (var_a2 == 0xFF) {
        var_a2 = (u8) arg1->unk_4C->instOrWave;
    }
    sp1C = (s32) arg0->playbackState.harmonicIndex;
    arg0->synthesisState.samplePosInt = (s32) (arg0->synthesisState.samplePosInt * *(&D_800C57E8 + func_800126AC(arg0, arg1, (s32) var_a2))) / (s32) *(&D_800C57E8 + sp1C);
}

void func_80012854(AudioListItem *arg0) {
    arg0->prev = arg0;
    arg0->next = arg0;
    arg0->u.value = NULL;
}

void func_80012864(NotePool *arg0) {
    func_80012854(&arg0->disabled);
    func_80012854(&arg0->decaying);
    func_80012854(&arg0->releasing);
    func_80012854(&arg0->active);
    arg0->disabled.pool = arg0;
    arg0->decaying.pool = arg0;
    arg0->releasing.pool = arg0;
    arg0->active.pool = arg0;
}

void func_800128B4(void) {
    s32 var_s0;
    s32 var_s1;

    func_80012864(&gNoteFreeLists);
    var_s1 = 0;
    var_s0 = 0;
    if (gNumNotes > 0) {
        do {
            (gNotes + var_s0)->unk8 = (void *) (var_s0 + gNotes);
            *(gNotes + var_s0) = 0;
            func_800145BC(&gNoteFreeLists.disabled, var_s0 + gNotes);
            var_s1 += 1;
            var_s0 += 0xC0;
        } while (var_s1 < gNumNotes);
    }
}

void func_80012964(NotePool *arg0) {
    AudioListItem *sp48;
    AudioListItem *sp40;
    AudioListItem *var_s0;
    AudioListItem *var_s1;
    AudioListItem *var_s2;
    s32 var_s3;

    var_s1 = sp48;
    var_s2 = sp40;
    var_s3 = 0;
    do {
        switch (var_s3) {                           /* irregular */
        case 0:
            var_s1 = &arg0->disabled;
            var_s2 = &gNoteFreeLists.disabled;
            var_s0 = arg0->disabled.next;
            break;
        case 1:
            var_s1 = &arg0->decaying;
            var_s2 = &D_801530D0;
        default:
block_10:
            var_s0 = var_s1->next;
            break;
        case 2:
            var_s1 = &arg0->releasing;
            var_s2 = &D_801530E0;
            goto block_10;
        case 3:
            var_s1 = &arg0->active;
            var_s2 = &D_801530F0;
            goto block_10;
        }
        if (var_s0 != var_s1) {
loop_12:
            if (var_s0 != NULL) {
                func_80012C40((Note *) var_s0);
                func_800145BC(var_s2, var_s0);
                var_s0 = var_s1->next;
                if (var_s0 != var_s1) {
                    goto loop_12;
                }
            }
        }
        var_s3 += 1;
    } while (var_s3 != 4);
    sp40 = var_s2;
    sp48 = var_s1;
}

void func_80012AC4(NotePool *arg0, s32 arg1) {
    AudioListItem *sp48;
    AudioListItem *sp44;
    AudioListItem *temp_v0;
    AudioListItem *var_s1;
    AudioListItem *var_s2;
    s32 var_s0;
    s32 var_s4;

    func_80012964(arg0);
    var_s4 = 0;
    var_s0 = 0;
    if (arg1 > 0) {
        var_s2 = sp44;
        var_s1 = sp48;
loop_2:
        switch (var_s4) {                           /* irregular */
        case 0:
            var_s1 = &gNoteFreeLists.disabled;
            var_s2 = &arg0->disabled;
        default:
block_12:
            if (var_s0 < arg1) {
loop_13:
                temp_v0 = func_800145FC(var_s1);
                if (temp_v0 != NULL) {
                    func_800145BC(var_s2, temp_v0);
                    var_s0 += 1;
                    if (var_s0 < arg1) {
                        goto loop_13;
                    }
                }
            }
            var_s4 += 1;
            if (var_s0 >= arg1) {
                sp44 = var_s2;
                sp48 = var_s1;
            } else {
                goto loop_2;
            }
            break;
        case 1:
            var_s1 = &D_801530D0;
            var_s2 = &arg0->decaying;
            goto block_12;
        case 2:
            var_s1 = &D_801530E0;
            var_s2 = &arg0->releasing;
            goto block_12;
        case 3:
            var_s1 = &D_801530F0;
            var_s2 = &arg0->active;
            goto block_12;
        }
    }
}

void func_80012C00(AudioListItem *arg0, AudioListItem *arg1) {
    if (arg1->prev == NULL) {
        arg1->prev = arg0;
        arg1->next = arg0->next;
        arg0->next->prev = arg1;
        arg0->next = arg1;
        arg0->u.value += 1;
        arg1->pool = arg0->pool;
    }
}

void func_80012C40(Note *arg0) {
    AudioListItem *temp_v0;

    temp_v0 = arg0->listItem.prev;
    if (temp_v0 != NULL) {
        temp_v0->next = arg0->listItem.next;
        arg0->listItem.next->prev = arg0->listItem.prev;
        arg0->listItem.prev = NULL;
    }
}

Note *func_80012C6C(AudioListItem *arg0, s32 arg1) {
    AudioListItem *var_v0;
    AudioListItem *var_v1;
    void *temp_a0;

    var_v0 = arg0->next;
    if (var_v0 == arg0) {
        return NULL;
    }
    var_v1 = var_v0;
    if (var_v0 != arg0) {
        do {
            if ((s32) var_v1->u.value->unk30 >= (s32) var_v0->u.value->unk30) {
                var_v1 = var_v0;
            }
            var_v0 = var_v0->next;
        } while (var_v0 != arg0);
    }
    if (var_v1 == NULL) {
        return NULL;
    }
    temp_a0 = var_v1->u.value;
    if ((s32) temp_a0->unk30 >= arg1) {
        return NULL;
    }
    return (Note *) temp_a0;
}

void func_80012CEC(Note *arg0, SequenceLayer_2 *arg1) {
    NoteSubEu *sp1C;
    NoteSubEu *temp_v0;
    u8 var_a2;

    arg0->playbackState.prevParentLayer = (SequenceLayer_2 *)-1;
    arg0->playbackState.parentLayer = arg1;
    arg0->playbackState.priority = arg1->unk_4C->notePriority;
    arg1->unk_3 = 3;
    arg1->unk_0 |= 4;
    arg1->unk_40 = arg0;
    arg1->unk_4C->noteUnused = arg0;
    arg1->unk_4C->layerUnused = arg1;
    arg1->unk_2C = 0.0f;
    func_80011EB8(arg0);
    var_a2 = arg1->unk_2;
    temp_v0 = &arg0->noteSubEu;
    if (var_a2 == 0xFF) {
        var_a2 = (u8) arg1->unk_4C->instOrWave;
    }
    temp_v0->waveSampleAddr = arg1->unk_48;
    if ((s32) var_a2 >= 0x80) {
        temp_v0->unk1 = (u8) (temp_v0->unk1 | 2);
    } else {
        temp_v0->unk1 = (u8) (temp_v0->unk1 & 0xFFFD);
    }
    if (temp_v0->unk0 & 0x20000) {
        sp1C = temp_v0;
        func_800126AC(arg0, arg1, (s32) var_a2);
    }
    arg0->playbackState.fontId = arg1->unk_4C->fontId;
    temp_v0->unk0 = (s8) (((((u32) (arg1->unk_4C->unk0 << 5) >> 0x1F) * 2) & 2) | ((u8) temp_v0->unk0 & 0xFFFD));
    temp_v0->unk1 = (u8) (((arg1->unk_4C->someOtherPriority & 3) << 5) | (temp_v0->unk1 & 0xFF1F));
}

void func_80012E28(Note *arg0, SequenceLayer_2 *arg1) {
    func_8001268C(arg0->playbackState.parentLayer);
    arg0->playbackState.wantedParentLayer = arg1;
}

void func_80012E5C(Note *arg0, SequenceLayer_2 *arg1) {
    arg0->playbackState.wantedParentLayer = arg1;
    arg0->playbackState.priority = arg1->unk_4C->notePriority;
    arg0->playbackState.adsr.action.asByte |= 0x10;
    arg0->playbackState.adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
}

Note *func_80012E88(NotePool *arg0, SequenceLayer_2 *arg1) {
    AudioListItem *sp1C;
    AudioListItem *temp_v0;

    temp_v0 = func_800145FC();
    sp1C = temp_v0;
    if (temp_v0 != NULL) {
        func_80012CEC((Note *) temp_v0, arg1);
        func_80012C00(&arg0->active, sp1C);
    }
    return (Note *) sp1C;
}

Note *func_80012ED4(NotePool *arg0, SequenceLayer_2 *arg1) {
    AudioListItem *sp1C;
    AudioListItem *temp_v0;

    temp_v0 = func_800145FC(&arg0->decaying);
    sp1C = temp_v0;
    if (temp_v0 != NULL) {
        func_80012E5C((Note *) temp_v0, arg1);
        func_800145BC(&arg0->releasing, sp1C);
    }
    return (Note *) sp1C;
}

Note *func_80012F24(NotePool *arg0, SequenceLayer_2 *arg1) {
    Note *sp34;
    s32 sp2C;
    s32 sp28;
    AudioListItem *sp24;
    AudioListItem *temp_a0;
    Note *temp_v0;
    Note *temp_v0_2;

    sp2C = 0x10;
    sp28 = 0x10;
    temp_a0 = &arg0->releasing;
    sp24 = temp_a0;
    temp_v0 = func_80012C6C(temp_a0, (s32) arg1->unk_4C->notePriority);
    if (temp_v0 != NULL) {
        sp2C = (s32) temp_v0->playbackState.priority;
    }
    sp34 = temp_v0;
    temp_v0_2 = func_80012C6C(&arg0->active, (s32) arg1->unk_4C->notePriority);
    if (temp_v0_2 != NULL) {
        sp28 = (s32) temp_v0_2->playbackState.priority;
    }
    if ((temp_v0 == NULL) && (temp_v0_2 == NULL)) {
        return NULL;
    }
    if (sp28 < sp2C) {
        func_80012C40(temp_v0_2);
        func_80012E28(temp_v0_2, arg1);
        func_800145BC(sp24, &temp_v0_2->listItem);
        temp_v0_2->playbackState.priority = arg1->unk_4C->notePriority;
        return temp_v0_2;
    }
    temp_v0->playbackState.wantedParentLayer = arg1;
    temp_v0->playbackState.priority = arg1->unk_4C->notePriority;
    return temp_v0;
}

Note *func_8001301C(SequenceLayer_2 *arg0) {
    Note *sp24;
    Note *temp_a2;
    Note *temp_v0_10;
    Note *temp_v0_11;
    Note *temp_v0_12;
    Note *temp_v0_13;
    Note *temp_v0_14;
    Note *temp_v0_15;
    Note *temp_v0_16;
    Note *temp_v0_17;
    Note *temp_v0_18;
    Note *temp_v0_19;
    Note *temp_v0_20;
    Note *temp_v0_21;
    Note *temp_v0_22;
    Note *temp_v0_2;
    Note *temp_v0_3;
    Note *temp_v0_4;
    Note *temp_v0_5;
    Note *temp_v0_6;
    Note *temp_v0_7;
    Note *temp_v0_8;
    Note *temp_v0_9;
    Note *var_a2;
    Note *var_a2_2;
    Note *var_a2_3;
    Note *var_a2_4;
    SequenceChannel *temp_v1;
    u8 temp_v0;

    temp_v1 = arg0->unk_4C;
    temp_v0 = temp_v1->noteAllocPolicy;
    if (temp_v0 & 1) {
        temp_a2 = arg0->unk_40;
        if ((temp_a2 != NULL) && (arg0 == temp_a2->playbackState.prevParentLayer) && (temp_a2->playbackState.wantedParentLayer == (SequenceLayer_2 *)-1)) {
            sp24 = temp_a2;
            func_80012E5C(temp_a2, arg0);
            func_80012C40(sp24);
            func_800145BC(&sp24->listItem.pool->releasing, &sp24->listItem);
            return sp24;
        }
    }
    if (temp_v0 & 2) {
        temp_v0_2 = func_80012E88(&temp_v1->notePool, arg0);
        var_a2_4 = temp_v0_2;
        if ((temp_v0_2 != NULL) || (temp_v0_3 = func_80012ED4(&arg0->unk_4C->notePool, arg0), var_a2_4 = temp_v0_3, (temp_v0_3 != NULL)) || (temp_v0_4 = func_80012F24(&arg0->unk_4C->notePool, arg0), var_a2_4 = temp_v0_4, (temp_v0_4 != NULL))) {
            return var_a2_4;
        }
        goto block_33;
    }
    if (temp_v0 & 4) {
        temp_v0_5 = func_80012E88(&temp_v1->notePool, arg0);
        var_a2_3 = temp_v0_5;
        if ((temp_v0_5 != NULL) || (temp_v0_6 = func_80012E88((NotePool *) &arg0->unk_4C->seqPlayer->shortNoteGateTimeTable, arg0), var_a2_3 = temp_v0_6, (temp_v0_6 != NULL)) || (temp_v0_7 = func_80012ED4(&arg0->unk_4C->notePool, arg0), var_a2_3 = temp_v0_7, (temp_v0_7 != NULL)) || (temp_v0_8 = func_80012ED4((NotePool *) &arg0->unk_4C->seqPlayer->shortNoteGateTimeTable, arg0), var_a2_3 = temp_v0_8, (temp_v0_8 != NULL)) || (temp_v0_9 = func_80012F24(&arg0->unk_4C->notePool, arg0), var_a2_3 = temp_v0_9, (temp_v0_9 != NULL)) || (temp_v0_10 = func_80012F24((NotePool *) &arg0->unk_4C->seqPlayer->shortNoteGateTimeTable, arg0), var_a2_3 = temp_v0_10, (temp_v0_10 != NULL))) {
            return var_a2_3;
        }
        goto block_33;
    }
    if (temp_v0 & 8) {
        temp_v0_11 = func_80012E88(&gNoteFreeLists, arg0);
        var_a2_2 = temp_v0_11;
        if ((temp_v0_11 != NULL) || (temp_v0_12 = func_80012ED4(&gNoteFreeLists, arg0), var_a2_2 = temp_v0_12, (temp_v0_12 != NULL)) || (temp_v0_13 = func_80012F24(&gNoteFreeLists, arg0), var_a2_2 = temp_v0_13, (temp_v0_13 != NULL))) {
            return var_a2_2;
        }
        goto block_33;
    }
    temp_v0_14 = func_80012E88(&temp_v1->notePool, arg0);
    var_a2 = temp_v0_14;
    if ((temp_v0_14 != NULL) || (temp_v0_15 = func_80012E88((NotePool *) &arg0->unk_4C->seqPlayer->shortNoteGateTimeTable, arg0), var_a2 = temp_v0_15, (temp_v0_15 != NULL)) || (temp_v0_16 = func_80012E88(&gNoteFreeLists, arg0), var_a2 = temp_v0_16, (temp_v0_16 != NULL)) || (temp_v0_17 = func_80012ED4(&arg0->unk_4C->notePool, arg0), var_a2 = temp_v0_17, (temp_v0_17 != NULL)) || (temp_v0_18 = func_80012ED4((NotePool *) &arg0->unk_4C->seqPlayer->shortNoteGateTimeTable, arg0), var_a2 = temp_v0_18, (temp_v0_18 != NULL)) || (temp_v0_19 = func_80012ED4(&gNoteFreeLists, arg0), var_a2 = temp_v0_19, (temp_v0_19 != NULL)) || (temp_v0_20 = func_80012F24(&arg0->unk_4C->notePool, arg0), var_a2 = temp_v0_20, (temp_v0_20 != NULL)) || (temp_v0_21 = func_80012F24((NotePool *) &arg0->unk_4C->seqPlayer->shortNoteGateTimeTable, arg0), var_a2 = temp_v0_21, (temp_v0_21 != NULL)) || (temp_v0_22 = func_80012F24(&gNoteFreeLists, arg0), var_a2 = temp_v0_22, (temp_v0_22 != NULL))) {
        return var_a2;
    }
block_33:
    arg0->unk_3 = 0;
    return NULL;
}

void func_800132E8(void) {
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;

    var_s1 = 0;
    if (gNumNotes > 0) {
        var_s2 = 0;
        do {
            temp_s0 = var_s2 + gNotes;
            temp_s0->unkB0 = (s32) gZeroNoteSub.unk0;
            temp_s0->unkB4 = (s32) gZeroNoteSub.unk4;
            temp_s0->unkB8 = (s32) gZeroNoteSub.unk8;
            temp_s0->unk30 = 0;
            temp_s0->unk34 = 0;
            temp_s0->unk44 = -1;
            temp_s0->unk48 = -1;
            temp_s0->unk40 = -1;
            temp_s0->unk31 = 0;
            temp_s0->unk54 = 0.0f;
            temp_s0->unk36 = 0;
            temp_s0->unk59 = 0;
            temp_s0->unk58 = 0;
            temp_s0->unkA0 = 0;
            temp_s0->unk80 = 0.0f;
            temp_s0->unk84 = 0.0f;
            temp_s0->unkBC = (s32) gZeroNoteSub.unkC;
            temp_s0->unk1C = AudioHeap_Alloc(&gMiscPool, 0xC0U);
            var_s1 += 1;
            var_s2 += 0xC0;
        } while (var_s1 < gNumNotes);
    }
}

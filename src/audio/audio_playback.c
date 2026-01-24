#include "sys.h"
#include "sf64audio.h"

static const char devstr00[] = "Audio: setvol: volume minus %f\n";
static const char devstr01[] = "Audio: setvol: volume overflow %f\n";
static const char devstr02[] = "Audio: setpitch: pitch zero or minus %f\n";
static const char devstr03[] = "Audio: voiceman: No bank error %d\n";
static const char devstr04[] = "Audio: voiceman: progNo. overflow %d,%d\n";
static const char devstr05[] = "ptr2 %x\n";
static const char devstr06[] = "Audio: voiceman: progNo. undefined %d,%d\n";
static const char devstr07[] = "Audio: voiceman: No bank error %d\n";
static const char devstr08[] = "Audio: voiceman: Percussion Overflow %d,%d\n";
static const char devstr09[] = "Audio: voiceman: Percussion table pointer (bank %d) is irregular %x.\n";
static const char devstr10[] = "Audio: voiceman: Percpointer NULL %d,%d\n";
static const char devstr11[] = "--4 %x\n";
static const char devstr12[] = "----------------------Double-Error CH: %x %f\n";
static const char devstr13[] = "----------------------Double-Error NT: %x\n";
static const char devstr14[] = "CAUTION:SUB IS SEPARATED FROM GROUP\n";
static const char devstr15[] = "CAUTION:PAUSE EMERGENCY\n";
static const char devstr16[] = "Error:Wait Track disappear\n";
static const char devstr17[] = "NoteOff Comes during wait release %x (note %x)\n";
static const char devstr18[] = "Slow Release Batting\n";

u8 sSamplesPerWavePeriod[] = { 64, 32, 16, 8 };

static const char devstr19[] = "Audio:Wavemem: Bad voiceno (%d)\n";
static const char devstr20[] = "Audio: C-Alloc : Dealloc voice is NULL\n";
static const char devstr21[] = "Alloc Error:Dim voice-Alloc %d";
static const char devstr22[] = "Error:Same List Add\n";
static const char devstr23[] = "Already Cut\n";
static const char devstr24[] = "Audio: C-Alloc : lowerPrio is NULL\n";
static const char devstr25[] = "Intterupt UseStop %d (Kill %d)\n";
static const char devstr26[] = "Intterupt RelWait %d (Kill %d)\n";
static const char devstr27[] = "Drop Voice (Prio %x)\n";

// Original name: Nas_smzSetParam
void AudioPlayback_InitSampleState(Note* note, NoteAttributes* noteAttr) {
    NoteSampleState* sampleState;
    f32 panVolumeLeft;
    f32 pamVolumeRight;
    f32 velocity;
    s32 temp_t0;
    s32 halfPanIndex;
    s32 strongRight;
    s32 strongLeft;
    u8 pan;
    u8 reverb;
    Stereo stereo;

    AudioPlayback_NoteSetResamplingRate(note, noteAttr->freqMod);

    sampleState = &note->sampleState;
    velocity = noteAttr->velocity;
    pan = noteAttr->pan;
    reverb = noteAttr->reverb;
    stereo = noteAttr->stereo;
    pan %= ARRAY_COUNTU(gHeadsetPanVolume);

    if ((sampleState->bitField0.stereoHeadsetEffects) && (gAudioSoundMode == SOUNDMODE_HEADSET)) {
        halfPanIndex = pan >> 1;
        if (halfPanIndex >= ARRAY_COUNT(gHaasEffectDelaySizes)) {
            halfPanIndex = ARRAY_COUNT(gHaasEffectDelaySizes) - 1;
        }
        sampleState->rightDelaySize = gHaasEffectDelaySizes[halfPanIndex];
        sampleState->leftDelaySize = gHaasEffectDelaySizes[ARRAY_COUNT(gHaasEffectDelaySizes) - 1 - halfPanIndex];
        sampleState->bitField0.stereoStrongRight = false;
        sampleState->bitField0.stereoStrongLeft = false;
        sampleState->bitField0.usesHeadsetPanEffects = true;

        panVolumeLeft = gHeadsetPanVolume[pan];
        pamVolumeRight = gHeadsetPanVolume[ARRAY_COUNT(gHeadsetPanVolume) - 1 - pan];
    } else if (sampleState->bitField0.stereoHeadsetEffects && (gAudioSoundMode == SOUNDMODE_STEREO)) {
        strongLeft = strongRight = false;

        sampleState->leftDelaySize = 0;
        sampleState->rightDelaySize = 0;
        sampleState->bitField0.usesHeadsetPanEffects = false;

        panVolumeLeft = gStereoPanVolume[pan];
        pamVolumeRight = gStereoPanVolume[ARRAY_COUNT(gStereoPanVolume) - 1 - pan];

        if (pan < 32) {
            strongLeft = true;
        } else if (pan > 96) {
            strongRight = true;
        }

        sampleState->bitField0.stereoStrongRight = strongRight;
        sampleState->bitField0.stereoStrongLeft = strongLeft;

        switch (stereo.s.bit2) {
            case 0:
                sampleState->bitField0.stereoStrongRight = stereo.s.strongRight;
                sampleState->bitField0.stereoStrongLeft = stereo.s.strongLeft;
                break;
            case 1:
                break;
            case 2:
                sampleState->bitField0.stereoStrongRight = stereo.s.strongRight | strongRight;
                sampleState->bitField0.stereoStrongLeft = stereo.s.strongLeft | strongLeft;
                break;
            case 3:
                sampleState->bitField0.stereoStrongRight = stereo.s.strongRight ^ strongRight;
                sampleState->bitField0.stereoStrongLeft = stereo.s.strongLeft ^ strongLeft;
                break;
        }
    } else if (gAudioSoundMode == SOUNDMODE_MONO) {
        panVolumeLeft = 0.707f; // approx 1/sqrt(2)
        pamVolumeRight = 0.707f;
    } else {
        panVolumeLeft = gDefaultPanVolume[pan];
        pamVolumeRight = gDefaultPanVolume[ARRAY_COUNT(gDefaultPanVolume) - 1 - pan];
    }

    if (velocity < 0.0f) {
        velocity = 0.0f;
    }
    if (velocity > 1.0f) {
        velocity = 1.0f;
    }

    sampleState->panVolLeft = (s32) (velocity * panVolumeLeft * 4095.999f);
    sampleState->panVolRight = (s32) (velocity * pamVolumeRight * 4095.999f);
    sampleState->gain = noteAttr->gain;

    if (sampleState->reverb != reverb) {
        sampleState->reverb = reverb;
        sampleState->bitField0.unused = true;
    } else if (sampleState->bitField0.needsInit) {
        sampleState->bitField0.unused = true;
    } else {
        sampleState->bitField0.unused = false;
    }
}

// Original name: Nas_smzSetPitch
void AudioPlayback_NoteSetResamplingRate(Note* note, f32 resamplingRateInput) {
    NoteSampleState* sampleState = &note->sampleState;
    f32 resamplingRate;

    if (resamplingRateInput < 2.0f) {
        sampleState->bitField1.hasTwoParts = false;
        resamplingRate = CLAMP_MAX(resamplingRateInput, 1.99998f);
    } else {
        sampleState->bitField1.hasTwoParts = true;
        if (resamplingRateInput > 3.99996f) {
            resamplingRate = 1.99998f;
        } else {
            resamplingRate = resamplingRateInput * 0.5f;
        }
    }
    note->sampleState.resampleRate = (s32) (resamplingRate * 32768.0f);
}

// Original name: NoteToVoice
TunedSample* AudioPlayback_GetInstrumentTunedSample(Instrument* instrument, s32 semitone) {
    TunedSample* sample;

    if (semitone < instrument->normalRangeLo) {
        sample = &instrument->lowPitchTunedSample;
    } else if (semitone <= instrument->normalRangeHi) {
        sample = &instrument->normalPitchTunedSample;
    } else {
        sample = &instrument->highPitchTunedSample;
    }
    return sample;
}

// Original name: ProgToVp
Instrument* AudioPlayback_GetInstrumentInner(s32 fontId, s32 instId) {
    Instrument* instrument;

    if ((gFontLoadStatus[fontId] < LOAD_STATUS_COMPLETE) != 0) {
        gAudioErrorFlags = AUDIO_ERROR(0, fontId, AUDIO_ERROR_FONT_NOT_LOADED);
        return NULL;
    }

    if (instId >= gSoundFontList[fontId].numInstruments) {
        gAudioErrorFlags = AUDIO_ERROR(fontId, instId, AUDIO_ERROR_INVALID_INST_ID);
        return NULL;
    }

    instrument = gSoundFontList[fontId].instruments[instId];
    if (instrument == NULL) {
        gAudioErrorFlags = AUDIO_ERROR(fontId, instId, AUDIO_ERROR_NO_INST);
        return instrument;
    }

    return instrument;
}

// Original name: PercToPp
Drum* AudioPlayback_GetDrum(s32 fontId, s32 drumId) {
    Drum* drum;

    if ((gFontLoadStatus[fontId] < LOAD_STATUS_COMPLETE) != 0) {
        gAudioErrorFlags = AUDIO_ERROR(0, fontId, AUDIO_ERROR_FONT_NOT_LOADED);
        return NULL;
    }

    if (drumId >= gSoundFontList[fontId].numDrums) {
        gAudioErrorFlags = AUDIO_ERROR(fontId, drumId, AUDIO_ERROR_INVALID_DRUM_SFX_ID);
        return NULL;
    }

    if ((u32) gSoundFontList[fontId].drums < AUDIO_RELOCATED_ADDRESS_START) {
        return NULL;
    }

    drum = gSoundFontList[fontId].drums[drumId];
    if (gSoundFontList[fontId].drums[drumId] == NULL) {
        gAudioErrorFlags = AUDIO_ERROR(fontId, drumId, AUDIO_ERROR_NO_DRUM_SFX);
    }

    return drum;
}

// Original name: Nas_StartVoice
void AudioPlayback_NoteInit(Note* note) {
    if (note->playbackState.parentLayer->adsr.decayIndex == 0) {
        AudioEffects_InitAdsr(&note->playbackState.adsr, note->playbackState.parentLayer->channel->adsr.envelope,
                              &note->playbackState.adsrVolModUnused);
    } else {
        AudioEffects_InitAdsr(&note->playbackState.adsr, note->playbackState.parentLayer->adsr.envelope,
                              &note->playbackState.adsrVolModUnused);
    }
    note->playbackState.adsr.state = ADSR_STATE_INITIAL;
    note->sampleState = gDefaultSampleState;
}

// Original name: Nas_StopVoice
void AudioPlayback_NoteDisable(Note* note) {
    if (note->sampleState.bitField0.needsInit == true) {
        note->sampleState.bitField0.needsInit = false;
    }
    note->playbackState.priority = 0;
    note->sampleState.bitField0.enabled = false;
    note->playbackState.status = PLAYBACK_STATUS_0;
    note->playbackState.parentLayer = NO_LAYER;
    note->playbackState.prevParentLayer = NO_LAYER;
    note->sampleState.bitField0.finished = 0;
    note->playbackState.adsr.state = ADSR_STATE_DISABLED;
    note->playbackState.adsr.current = 0.0f;
}

// Original name: Nas_UpdateChannel
void AudioPlayback_ProcessNotes(void) {
    s32 pad2;
    s32 pad;
    Note* note;
    NotePlaybackState* playbackState;
    NoteSampleState* sampleState;
    NoteAttributes* attr;
    s32 i;
    NoteAttributes sp70;
    u8 bookOffset;
    f32 scale;

    for (i = 0; i < gNumNotes; i++) {
        note = &gNotes[i];

        playbackState = &note->playbackState;
        if ((playbackState->parentLayer != NO_LAYER)) {
            if ((u32) playbackState->parentLayer < 0x7FFFFFFF) {
                continue;
            }

            if ((note != playbackState->parentLayer->note) && (playbackState->status == PLAYBACK_STATUS_0)) {
                playbackState->adsr.action.asByte |= ADSR_RELEASE_FLAG;
                playbackState->adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
                playbackState->priority = 1;
                playbackState->status = PLAYBACK_STATUS_2;
                goto out;
            } else {
                if ((playbackState->parentLayer->enabled) || (playbackState->status != PLAYBACK_STATUS_0) ||
                    (playbackState->priority <= 0)) {
                    if (playbackState->parentLayer->channel->seqPlayer == NULL) {
                        AudioSeq_SequenceChannelDisable(playbackState->parentLayer->channel);
                        playbackState->priority = 1;
                        playbackState->status = PLAYBACK_STATUS_1;
                        continue;
                    }
                    if (!(playbackState->parentLayer->channel->seqPlayer->muted &&
                          (playbackState->parentLayer->channel->muteBehavior & MUTE_BEHAVIOR_STOP_NOTES))) {
                        goto out;
                    }
                }
                AudioPlayback_SeqLayerNoteRelease(playbackState->parentLayer);
                AudioList_Remove(note);
                AudioList_PushFront(&note->listItem.pool->decaying, &note->listItem);
                playbackState->priority = 1;
                playbackState->status = PLAYBACK_STATUS_2;
            }
        } else if ((playbackState->status == PLAYBACK_STATUS_0) && (playbackState->priority > 0)) {
            continue;
        }
    out:

        if (playbackState->priority != 0) {
            if (1) {}
            sampleState = &note->sampleState;
            if ((playbackState->status > PLAYBACK_STATUS_0) || sampleState->bitField0.finished) {
                if ((playbackState->adsr.state == 0) || sampleState->bitField0.finished) {
                    if (playbackState->wantedParentLayer != NO_LAYER) {
                        AudioPlayback_NoteDisable(note);
                        if (playbackState->wantedParentLayer->channel != NULL) {
                            AudioPlayback_NoteInitForLayer(note, playbackState->wantedParentLayer);
                            AudioEffects_InitVibrato(note);
                            AudioList_Remove(note);
                            AudioSeq_AudioListPushBack(&note->listItem.pool->active, &note->listItem);
                            playbackState->wantedParentLayer = NO_LAYER;
                        } else {
                            AudioPlayback_NoteDisable(note);
                            AudioList_Remove(note);
                            AudioSeq_AudioListPushBack(&note->listItem.pool->disabled, &note->listItem);
                            playbackState->wantedParentLayer = NO_LAYER;
                            goto next;
                        }
                    } else {
                        AudioPlayback_NoteDisable(note);
                        AudioList_Remove(note);
                        AudioSeq_AudioListPushBack(&note->listItem.pool->disabled, &note->listItem);
                        goto next;
                    }
                }
            } else if (playbackState->adsr.state == 0) {
                AudioPlayback_NoteDisable(note);
                AudioList_Remove(note);
                AudioSeq_AudioListPushBack(&note->listItem.pool->disabled, &note->listItem);
                goto next;
            }

            scale = AudioEffects_UpdateAdsr(&playbackState->adsr);
            AudioEffects_UpdatePortamentoAndVibrato(note);

            attr = &playbackState->attributes;
            if ((playbackState->status == PLAYBACK_STATUS_1) || (playbackState->status == PLAYBACK_STATUS_2)) {
                sp70.freqMod = attr->freqMod;
                sp70.velocity = attr->velocity;
                sp70.pan = attr->pan;
                sp70.reverb = attr->reverb;
                sp70.stereo = attr->stereo;
                sp70.gain = attr->gain;
                bookOffset = sampleState->bitField1.bookOffset;
            } else {
                sp70.freqMod = playbackState->parentLayer->noteFreqMod;
                sp70.velocity = playbackState->parentLayer->noteVelocity;
                sp70.pan = playbackState->parentLayer->notePan;
                sp70.stereo = playbackState->parentLayer->stereo;
                sp70.reverb = playbackState->parentLayer->channel->targetReverbVol;
                sp70.gain = playbackState->parentLayer->channel->reverbIndex;

                bookOffset = playbackState->parentLayer->channel->bookOffset % 8U;
                if ((playbackState->parentLayer->channel->seqPlayer->muted) &&
                    (playbackState->parentLayer->channel->muteBehavior & 8)) {
                    sp70.freqMod = 0.0f;
                    sp70.velocity = 0.0f;
                }
            }
            sp70.freqMod *= playbackState->vibratoFreqMod * playbackState->portamentoFreqMod;
            sp70.freqMod *= gAudioBufferParams.resampleRate;
            sp70.velocity *= scale;
            AudioPlayback_InitSampleState(note, &sp70);
            sampleState->bitField1.bookOffset = bookOffset;
        next:;
        }
    }
}

// Original name: __Nas_Release_Channel_Main
void AudioPlayback_SeqLayerDecayRelease(SequenceLayer* layer, s32 target) {
    Note* note;
    NoteAttributes* noteAttr;

    if (layer == NO_LAYER) {
        return;
    }

    layer->unk_3 = 0;

    if (layer->note == NULL) {
        return;
    }

    note = layer->note;

    if (layer == note->playbackState.wantedParentLayer) {
        note->playbackState.wantedParentLayer = NO_LAYER;
    }

    if (layer != note->playbackState.parentLayer) {
        if ((note->playbackState.parentLayer == NO_LAYER) && (note->playbackState.wantedParentLayer == NO_LAYER) &&
            (layer == note->playbackState.prevParentLayer) && (target != ADSR_STATE_DECAY)) {
            note->playbackState.adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
            note->playbackState.adsr.action.asByte |= ADSR_RELEASE_FLAG;
        }
    } else {
        noteAttr = &note->playbackState.attributes;
        if (note->playbackState.adsr.state != 6) {
            noteAttr->freqMod = layer->noteFreqMod;
            noteAttr->velocity = layer->noteVelocity;
            noteAttr->pan = layer->notePan;
            noteAttr->stereo = layer->stereo;
            if (layer->channel != NULL) {
                noteAttr->reverb = layer->channel->targetReverbVol;
                noteAttr->gain = layer->channel->reverbIndex;
                if (layer->channel->seqPlayer->muted && (layer->channel->muteBehavior & 8)) {
                    note->sampleState.bitField0.finished = 1;
                }
            }
            note->playbackState.priority = 1;
            note->playbackState.prevParentLayer = note->playbackState.parentLayer;
            note->playbackState.parentLayer = NO_LAYER;

            if (target == ADSR_STATE_RELEASE) {
                note->playbackState.adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
                note->playbackState.adsr.action.asByte |= ADSR_RELEASE_FLAG;
                note->playbackState.status = PLAYBACK_STATUS_2;

            } else {
                note->playbackState.status = PLAYBACK_STATUS_1;
                note->playbackState.adsr.action.asByte |= ADSR_DECAY_FLAG;
                if (layer->adsr.decayIndex == 0) {
                    note->playbackState.adsr.fadeOutVel =
                        layer->channel->adsr.decayIndex * gAudioBufferParams.ticksPerUpdateInvScaled;
                } else {
                    note->playbackState.adsr.fadeOutVel =
                        layer->adsr.decayIndex * gAudioBufferParams.ticksPerUpdateInvScaled;
                }
                note->playbackState.adsr.sustain =
                    (s32) layer->channel->adsr.sustain * note->playbackState.adsr.current / 256.0f;
            }
        }
        if (target == ADSR_STATE_DECAY) {
            AudioList_Remove(note);
            AudioList_PushFront(&note->listItem.pool->decaying, &note->listItem);
        }
    }
}

// Original name: Nas_Release_Channel
void AudioPlayback_SeqLayerNoteDecay(SequenceLayer* layer) {
    AudioPlayback_SeqLayerDecayRelease(layer, ADSR_STATE_DECAY);
}

// Original name: Nas_Release_Channel_Force
void AudioPlayback_SeqLayerNoteRelease(SequenceLayer* layer) {
    AudioPlayback_SeqLayerDecayRelease(layer, ADSR_STATE_RELEASE);
}

/**
 * Extract the synthetic wave to use from gWaveSamples and update corresponding frequencies
 *
 * @param note
 * @param layer
 * @param waveId the index of the type of synthetic wave to use, offset by 128
 * @return harmonicIndex, the index of the harmonic for the synthetic wave contained in gWaveSamples
 */
s32 AudioPlayback_BuildSyntheticWave(Note* note, SequenceLayer* layer, s32 waveId) {
    f32 freqMod;
    u8 harmonicIndex = 0;

    if (waveId < 128) {
        waveId = 128;
    }

    freqMod = layer->freqMod;
    if ((layer->portamento.mode != 0) && (layer->portamento.extent > 0.0f)) {
        freqMod *= layer->portamento.extent + 1.0f;
    }

    // Map frequency to the harmonic to use from gWaveSamples
    if (freqMod < 1.0f) {
        freqMod = 1.0465f;
    } else if (freqMod < 2.0f) {
        harmonicIndex = 1;
        freqMod = 0.52325f;
    } else if (freqMod < 4.0f) {
        harmonicIndex = 2;
        freqMod = 0.26263f;
    } else {
        harmonicIndex = 3;
        freqMod = 0.13081f;
    }

    // Update results
    layer->freqMod *= freqMod;
    note->playbackState.waveId = waveId;
    note->playbackState.harmonicIndex = harmonicIndex;

    // Save the pointer to the synthethic wave
    // waveId index starts at 128, there are WAVE_SAMPLE_COUNT samples to read from
    note->sampleState.waveSampleAddr = &gWaveSamples[waveId - 128][harmonicIndex * WAVE_SAMPLE_COUNT];

    return harmonicIndex;
}

void AudioPlayback_InitSyntheticWave(Note* note, SequenceLayer* layer) {
    s32 prevHarmonicIndex;
    s32 curHarmonicIndex;
    s32 waveId;

    waveId = layer->instOrWave;
    if (waveId == 0xFF) {
        waveId = layer->channel->instOrWave;
    }

    prevHarmonicIndex = note->playbackState.harmonicIndex;
    curHarmonicIndex = AudioPlayback_BuildSyntheticWave(note, layer, waveId);

    note->synthesisState.samplePosInt = (note->synthesisState.samplePosInt * sSamplesPerWavePeriod[curHarmonicIndex]) /
                                        sSamplesPerWavePeriod[prevHarmonicIndex];
}

// Original name: __Nas_InitList
void AudioList_InitNoteList(AudioListItem* item) {
    item->prev = item;
    item->next = item;
    item->u.value = NULL;
}

// Original name: Nas_InitChNode
void AudioList_InitNoteLists(NotePool* pool) {
    AudioList_InitNoteList(&pool->disabled);
    AudioList_InitNoteList(&pool->decaying);
    AudioList_InitNoteList(&pool->releasing);
    AudioList_InitNoteList(&pool->active);
    pool->disabled.pool = pool;
    pool->decaying.pool = pool;
    pool->releasing.pool = pool;
    pool->active.pool = pool;
}

// Original name: Nas_InitChannelList
void AudioList_InitNoteFreeList(void) {
    s32 i;

    AudioList_InitNoteLists(&gNoteFreeLists);
    for (i = 0; i < gNumNotes; i++) {
        gNotes[i].listItem.u.value = &gNotes[i];
        gNotes[i].listItem.prev = NULL;
        AudioSeq_AudioListPushBack(&gNoteFreeLists.disabled, &gNotes[i].listItem);
    }
}

// Original name: Nas_DeAllocAllVoices
void AudioList_ClearNotePool(NotePool* pool) {
    s32 poolType;
    AudioListItem* poolItem;
    AudioListItem* cur;
    AudioListItem* freeList;

    for (poolType = 0; poolType < 4; poolType++) {
        switch (poolType) {
            case 0:
                poolItem = &pool->disabled;
                freeList = &gNoteFreeLists.disabled;
                break;
            case 1:
                poolItem = &pool->decaying;
                freeList = &gNoteFreeLists.decaying;
                break;
            case 2:
                poolItem = &pool->releasing;
                freeList = &gNoteFreeLists.releasing;
                break;
            case 3:
                poolItem = &pool->active;
                freeList = &gNoteFreeLists.active;
                break;

            default:
                break;
        }

        while (true) {
            cur = poolItem->next;
            if ((cur == poolItem) || (cur == NULL)) {
                break;
            }
            AudioList_Remove((Note*) cur);
            AudioSeq_AudioListPushBack(freeList, cur);
        }
    }
}

// Original name: Nas_AllocVoices
void AudioList_FillNotePool(NotePool* pool, s32 count) {
    s32 j;
    s32 poolType;
    AudioListItem* note;
    AudioListItem* freeList;
    AudioListItem* poolList;

    AudioList_ClearNotePool(pool);

    for (poolType = 0, j = 0; j < count; poolType++) {
        if (poolType == 4) {
            return;
        }
        switch (poolType) {
            case 0:
                freeList = &gNoteFreeLists.disabled;
                poolList = &pool->disabled;
                break;
            case 1:
                freeList = &gNoteFreeLists.decaying;
                poolList = &pool->decaying;
                break;
            case 2:
                freeList = &gNoteFreeLists.releasing;
                poolList = &pool->releasing;
                break;
            case 3:
                freeList = &gNoteFreeLists.active;
                poolList = &pool->active;
                break;
        }
        while (j < count) {
            note = AudioSeq_AudioListPopBack(freeList);
            if (note == NULL) {
                break;
            }
            AudioSeq_AudioListPushBack(poolList, note);
            j++;
        }
    }
}

// Original name: Nas_AddListHead
void AudioList_PushFront(AudioListItem* list, AudioListItem* item) {
    // add 'item' to the front of the list given by 'list', if it's not in any list
    if (item->prev == NULL) {
        item->prev = list;
        item->next = list->next;
        list->next->prev = item;
        list->next = item;
        list->u.count++;
        item->pool = list->pool;
    }
}

// Original name: Nas_CutList
void AudioList_Remove(Note* note) {
    // remove 'item' from the list it's in, if any
    if (note->listItem.prev != NULL) {
        note->listItem.prev->next = note->listItem.next;
        note->listItem.next->prev = note->listItem.prev;
        note->listItem.prev = NULL;
    }
}

// Original name: __Nas_GetLowerPrio
Note* AudioList_FindNodeWithPrioLessThan(AudioListItem* item, s32 priority) {
    AudioListItem* priorityItem;
    AudioListItem* nextItem = item->next;

    if (nextItem == item) {
        return NULL;
    }

    for (priorityItem = nextItem; nextItem != item; nextItem = nextItem->next) {
        if (((Note*) nextItem->u.value)->playbackState.priority <=
            ((Note*) priorityItem->u.value)->playbackState.priority) {
            priorityItem = nextItem;
        }
    }

    if (priorityItem == NULL) {
        return NULL;
    }

    if (((Note*) priorityItem->u.value)->playbackState.priority >= priority) {
        return NULL;
    }
    return (Note*) priorityItem->u.value;
}

// Original name: Nas_EntryTrack
void AudioPlayback_NoteInitForLayer(Note* note, SequenceLayer* layer) {
    s32 pad[4];
    s32 waveId;
    NoteSampleState* sampleState;

    note->playbackState.prevParentLayer = NO_LAYER;
    note->playbackState.parentLayer = layer;
    note->playbackState.priority = layer->channel->notePriority;

    layer->ignoreDrumPan = 1;
    layer->unk_3 = 3;
    layer->note = note;
    layer->channel->noteUnused = note;
    layer->channel->layerUnused = layer;
    layer->noteVelocity = 0.0f;

    AudioPlayback_NoteInit(note);

    waveId = layer->instOrWave;
    sampleState = &note->sampleState;

    if (waveId == 0xFF) {
        waveId = layer->channel->instOrWave;
    }

    sampleState->waveSampleAddr = (s16*) layer->tunedSample;

    if (waveId >= 128) {
        sampleState->bitField1.isSyntheticWave = true;
    } else {
        sampleState->bitField1.isSyntheticWave = false;
    }
    if (sampleState->bitField1.isSyntheticWave) {
        AudioPlayback_BuildSyntheticWave(note, layer, waveId);
    }
    note->playbackState.fontId = layer->channel->fontId;
    sampleState->bitField0.stereoHeadsetEffects = layer->channel->stereoHeadsetEffects;
    sampleState->bitField1.reverbIndex = layer->channel->someOtherPriority & 3;
}

// Original name: __Nas_InterTrack
void func_80012E28(Note* note, SequenceLayer* layer) {
    AudioPlayback_SeqLayerNoteRelease(note->playbackState.parentLayer);
    note->playbackState.wantedParentLayer = layer;
}

// Original name: __Nas_InterReleaseTrack
void AudioPlayback_NoteReleaseAndTakeOwnership(Note* note, SequenceLayer* layer) {
    note->playbackState.wantedParentLayer = layer;
    note->playbackState.priority = layer->channel->notePriority;
    note->playbackState.adsr.fadeOutVel = gAudioBufferParams.ticksPerUpdateInv;
    note->playbackState.adsr.action.asByte |= ADSR_RELEASE_FLAG;
}

// Original name: __Nas_ChLookFree
Note* AudioPlayback_AllocNoteFromDisabled(NotePool* pool, SequenceLayer* layer) {
    Note* note = AudioSeq_AudioListPopBack(&pool->disabled);

    if (note != NULL) {
        AudioPlayback_NoteInitForLayer(note, layer);
        AudioList_PushFront(&pool->active, &note->listItem);
    }
    return note;
}

// Original name: __Nas_ChLookRelease
Note* AudioPlayback_AllocNoteFromDecaying(NotePool* pool, SequenceLayer* layer) {
    Note* note = AudioSeq_AudioListPopBack(&pool->decaying);

    if (note != NULL) {
        AudioPlayback_NoteReleaseAndTakeOwnership(note, layer);
        AudioSeq_AudioListPushBack(&pool->releasing, &note->listItem);
    }
    return note;
}

// Original name: __Nas_ChLookRelWait
Note* AudioPlayback_AllocNoteFromActive(NotePool* pool, SequenceLayer* layer) {
    Note* rNote;
    Note* aNote;
    s32 rPriority;
    s32 aPriority;

    rPriority = aPriority = 16;

    rNote = AudioList_FindNodeWithPrioLessThan(&pool->releasing, layer->channel->notePriority);
    if (rNote != NULL) {
        rPriority = rNote->playbackState.priority;
    }

    aNote = AudioList_FindNodeWithPrioLessThan(&pool->active, layer->channel->notePriority);
    if (aNote != NULL) {
        aPriority = aNote->playbackState.priority;
    }

    if (rNote == NULL && aNote == NULL) {
        return NULL;
    }

    if (aPriority < rPriority) {
        AudioList_Remove(aNote);
        func_80012E28(aNote, layer);
        AudioSeq_AudioListPushBack(&pool->releasing, &aNote->listItem);
        aNote->playbackState.priority = layer->channel->notePriority;
        return aNote;
    } else {
        rNote->playbackState.wantedParentLayer = layer;
        rNote->playbackState.priority = layer->channel->notePriority;
        return rNote;
    }
}

// Original name: Nas_AllocationOnRequest
Note* AudioPlayback_AllocNote(SequenceLayer* layer) {
    Note* note;

    if (layer->channel->noteAllocPolicy & 1) {
        note = layer->note;
        if ((note != NULL) && (layer == note->playbackState.prevParentLayer) &&
            (note->playbackState.wantedParentLayer == NO_LAYER)) {

            AudioPlayback_NoteReleaseAndTakeOwnership(note, layer);
            AudioList_Remove(note);
            AudioSeq_AudioListPushBack(&note->listItem.pool->releasing, &note->listItem);
            return note;
        }
    }

    if (layer->channel->noteAllocPolicy & 2) {
        if (((note = AudioPlayback_AllocNoteFromDisabled(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDecaying(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromActive(&layer->channel->notePool, layer)) != NULL)) {
            return note;
        }
    } else if (layer->channel->noteAllocPolicy & 4) {
        if (((note = AudioPlayback_AllocNoteFromDisabled(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDisabled(&layer->channel->seqPlayer->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDecaying(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDecaying(&layer->channel->seqPlayer->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromActive(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromActive(&layer->channel->seqPlayer->notePool, layer)) != NULL)) {
            return note;
        }
    } else if (layer->channel->noteAllocPolicy & 8) {
        if (((note = AudioPlayback_AllocNoteFromDisabled(&gNoteFreeLists, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDecaying(&gNoteFreeLists, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromActive(&gNoteFreeLists, layer)) != NULL)) {
            return note;
        }
    } else {
        if (((note = AudioPlayback_AllocNoteFromDisabled(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDisabled(&layer->channel->seqPlayer->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDisabled(&gNoteFreeLists, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDecaying(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDecaying(&layer->channel->seqPlayer->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromDecaying(&gNoteFreeLists, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromActive(&layer->channel->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromActive(&layer->channel->seqPlayer->notePool, layer)) != NULL) ||
            ((note = AudioPlayback_AllocNoteFromActive(&gNoteFreeLists, layer)) != NULL)) {
            return note;
        }
    }

    layer->unk_3 = 0;

    return NULL;
}

// Original name: Nas_ChannelInit
void AudioPlayback_NoteInitAll(void) {
    Note* note;
    s32 i;

    for (i = 0; i < gNumNotes; i++) {
        note = &gNotes[i];

        note->sampleState = gZeroedSampleState;

        note->playbackState.priority = 0;
        note->playbackState.status = PLAYBACK_STATUS_0;
        note->playbackState.parentLayer = NO_LAYER;
        note->playbackState.wantedParentLayer = NO_LAYER;
        note->playbackState.prevParentLayer = NO_LAYER;
        note->playbackState.waveId = 0;
        note->playbackState.attributes.velocity = 0.0f;
        note->playbackState.adsrVolModUnused = 0;
        note->playbackState.adsr.state = 0;
        note->playbackState.adsr.action.asByte = 0;
        note->playbackState.vibratoState.active = 0;
        note->playbackState.portamento.cur = 0.0f;
        note->playbackState.portamento.speed = 0.0f;

        note->synthesisState.synthesisBuffers = AudioHeap_Alloc(&gMiscPool, sizeof(Note));
    }
}

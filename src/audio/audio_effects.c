// Original filename: effect.c

/**
 * @file audio_effects.c
 *
 * The first half of this file processes sound on the seqPlayer, channel, and layer level
 * once the .seq file is finished for this update.
 *
 * The second half of this file implements three types of audio effects over long periods of times:
 * - Vibrato: regular, pulsating change of pitch
 * - Portamento: pitch sliding from one note to another
 * - Multi-Point ADSR Envelope: volume changing over time through Attack, Decay, Sustain, Release
 */
#include "sys.h"
#include "sf64audio.h"

static const char devstr[] = "Audio:Envp: overflow  %f\n";

// Original name: __Nas_CallWaveProcess_Sub
void AudioScript_SequenceChannelProcessSound(SequenceChannel* channel, s32 updateVolume) {
    s32 i;

    if (channel->changes.flags.volume || updateVolume) {
        f32 channelVolume = channel->volume * channel->volumeMod * channel->seqPlayer->appliedFadeVolume;

        if (channel->seqPlayer->muted && (channel->muteBehavior & MUTE_BEHAVIOR_SOFTEN)) {
            channelVolume = channel->seqPlayer->muteVolumeMod * channelVolume;
        }
        channel->appliedVolume = SQ(channelVolume);
    }

    if (channel->changes.flags.pan) {
        channel->pan = channel->newPan * channel->panChannelWeight;
    }

    for (i = 0; i < ARRAY_COUNT(channel->layers); i++) {
        SequenceLayer* layer = channel->layers[i];

        if ((layer != NULL) && layer->enabled && (layer->note != NULL)) {
            if (layer->ignoreDrumPan) {
                layer->noteFreqMod = layer->freqMod * channel->freqMod;
                layer->noteVelocity = layer->velocitySquare * channel->appliedVolume;
                layer->notePan = (channel->pan + (layer->pan * (128 - channel->panChannelWeight))) >> 7;
                layer->ignoreDrumPan = false;
            } else {
                if (channel->changes.flags.freqMod) {
                    layer->noteFreqMod = layer->freqMod * channel->freqMod;
                }
                if (channel->changes.flags.volume || updateVolume) {
                    layer->noteVelocity = layer->velocitySquare * channel->appliedVolume;
                }
                if (channel->changes.flags.pan) {
                    layer->notePan = (channel->pan + (layer->pan * (128 - channel->panChannelWeight))) >> 7;
                }
            }
        }
    }

    channel->changes.asByte = 0;
}

// Original name: Nas_MainCtrl
void AudioScript_SequencePlayerProcessSound(SequencePlayer* seqplayer) {
    s32 i;

    if (seqplayer->fadeTimer != 0) {
        seqplayer->fadeVolume += seqplayer->fadeVelocity;
        seqplayer->recalculateVolume = true;

        if (seqplayer->fadeVolume > 1.0f) {
            seqplayer->fadeVolume = 1.0f;
        }
        if (seqplayer->fadeVolume < 0.0f) {
            seqplayer->fadeVolume = 0.0f;
        }

        seqplayer->fadeTimer--;
        if ((seqplayer->fadeTimer == 0) && (seqplayer->state == 2)) {
            AudioSeq_SequencePlayerDisable(seqplayer);
            return;
        }
    }

    if (seqplayer->recalculateVolume) {
        seqplayer->appliedFadeVolume = seqplayer->fadeVolume * seqplayer->fadeVolumeMod;
    }

    for (i = 0; i < SEQ_NUM_CHANNELS; i++) {
        if ((IS_SEQUENCE_CHANNEL_VALID(seqplayer->channels[i]) == 1) && (seqplayer->channels[i]->enabled == 1)) {
            AudioScript_SequenceChannelProcessSound(seqplayer->channels[i], seqplayer->recalculateVolume);
        }
    }
    seqplayer->recalculateVolume = false;
}

// Original name: Nas_SweepCalculator
f32 AudioEffects_UpdatePortamento(Portamento* portamento) {
    u32 bendIndex;
    f32 portamentoFreq;

    portamento->cur += portamento->speed;
    bendIndex = portamento->cur;

    if (bendIndex > 127) {
        bendIndex = 127;
    }

    portamentoFreq = 1.0f + ((gBendPitchOneOctaveFrequencies[bendIndex + 128] - 1.0f) * portamento->extent);

    return portamentoFreq;
}

// Original name: Nas_ModTableRead
s16 AudioEffects_GetVibratoPitchChange(VibratoState* vibrato) {
    s32 index;

    vibrato->time += (s32) vibrato->rate;
    // 0x400 is 1 unit of time, 0x10000 is 1 period
    index = (vibrato->time / 0x400) % WAVE_SAMPLE_COUNT;

    return vibrato->curve[index] >> 8;
}

// Original name: Nas_Modulator
f32 AudioEffects_UpdateVibrato(VibratoState* vibrato) {
    s32 pitchChange;
    f32 scaledDepth;
    f32 result;

    if (vibrato->delay != 0) {
        vibrato->delay--;
        return 1.0f;
    }

    if (vibrato->depthChangeTimer) {
        if (vibrato->depthChangeTimer == 1) {
            vibrato->depth = (s32) vibrato->channel->vibratoDepthTarget;
        } else {
            vibrato->depth +=
                ((s32) vibrato->channel->vibratoDepthTarget - vibrato->depth) / (s32) vibrato->depthChangeTimer;
        }
        vibrato->depthChangeTimer--;
    } else if (vibrato->channel->vibratoDepthTarget != (s32) vibrato->depth) {
        if ((vibrato->depthChangeTimer = vibrato->channel->vibratoDepthChangeDelay) == 0) {
            vibrato->depth = (s32) vibrato->channel->vibratoDepthTarget;
        }
    }

    if (vibrato->rateChangeTimer) {
        if (vibrato->rateChangeTimer == 1) {
            vibrato->rate = (s32) vibrato->channel->vibratoRateTarget;
        } else {
            vibrato->rate +=
                ((s32) vibrato->channel->vibratoRateTarget - vibrato->rate) / (s32) vibrato->rateChangeTimer;
        }
        vibrato->rateChangeTimer--;
    } else if (vibrato->channel->vibratoRateTarget != (s32) vibrato->rate) {
        if ((vibrato->rateChangeTimer = vibrato->channel->vibratoRateChangeDelay) == 0) {
            vibrato->rate = (s32) vibrato->channel->vibratoRateTarget;
        }
    }

    if (vibrato->depth == 0.0f) {
        return 1.0f;
    }

    pitchChange = AudioEffects_GetVibratoPitchChange(vibrato);
    scaledDepth = vibrato->depth / 4096.0f;

    result = 1.0f + scaledDepth * (gBendPitchOneOctaveFrequencies[0x80 + pitchChange] - 1.0f);

    return result;
}

// Original name: Nas_ChannelModulation
void AudioEffects_UpdatePortamentoAndVibrato(Note* note) {
    // Update Portamento
    if (note->playbackState.portamento.mode != PORTAMENTO_MODE_OFF) {
        note->playbackState.portamentoFreqMod = AudioEffects_UpdatePortamento(&note->playbackState.portamento);
    }
    // Update Vibrato
    if ((note->playbackState.vibratoState.active != 0) && (note->playbackState.parentLayer != NO_LAYER)) {
        note->playbackState.vibratoFreqMod = AudioEffects_UpdateVibrato(&note->playbackState.vibratoState);
    }
}

// Original name: Nas_ChannelModInit
void AudioEffects_InitVibrato(Note* note) {
    NotePlaybackState* noteState = &note->playbackState;
    VibratoState* vibrato = &noteState->vibratoState;

    vibrato->active = true;
    vibrato->time = 0;
    noteState->vibratoFreqMod = 1.0f;
    noteState->portamentoFreqMod = 1.0f;

    vibrato->curve = gWaveSamples[2]; // gSineWaveSample

    vibrato->channel = noteState->parentLayer->channel;

    if ((vibrato->depthChangeTimer = vibrato->channel->vibratoDepthChangeDelay) == 0) {
        vibrato->depth = (s32) vibrato->channel->vibratoDepthTarget;
    } else {
        vibrato->depth = (s32) vibrato->channel->vibratoDepthStart;
    }

    if ((vibrato->rateChangeTimer = vibrato->channel->vibratoRateChangeDelay) == 0) {
        vibrato->rate = (s32) vibrato->channel->vibratoRateTarget;
    } else {
        vibrato->rate = (s32) vibrato->channel->vibratoRateStart;
    }

    vibrato->delay = vibrato->channel->vibratoDelay;
    noteState->portamento = noteState->parentLayer->portamento;
}

// Original name: Nas_EnvInit
void AudioEffects_InitAdsr(AdsrState* adsr, EnvelopePoint* envelope, s16* volOut) {
    adsr->action.asByte = 0;
    adsr->state = 0;
    adsr->delay = 0;
    adsr->envelope = envelope;
    adsr->sustain = 0.0f;
    adsr->current = 0.0f;
    // (An older versions of the audio engine used in Super Mario 64 did
    // adsr->volOut = volOut. That line and associated struct member were
    // removed, but the function parameter was forgotten and remains.)
}

// Original name: Nas_EnvProcess
f32 AudioEffects_UpdateAdsr(AdsrState* adsr) {
    u8 action = adsr->action.asByte;
    u8 state = adsr->state;

    switch (state) {
        case ADSR_STATE_DISABLED:
            return 0.0f;

        case ADSR_STATE_INITIAL:
            if (action & ADSR_HANG_FLAG) {
                adsr->state = ADSR_STATE_HANG;
                break;
            }
            // Fallthrough
        case ADSR_STATE_START_LOOP:
            adsr->envIndex = 0;
            adsr->state = ADSR_STATE_LOOP;
        retry:
            // Fallthrough
        case ADSR_STATE_LOOP:
            adsr->delay = adsr->envelope[adsr->envIndex].delay;
            switch (adsr->delay) {
                case ADSR_DISABLE:
                    adsr->state = ADSR_STATE_DISABLED;
                    break;

                case ADSR_HANG:
                    adsr->state = ADSR_STATE_HANG;
                    break;

                case ADSR_GOTO:
                    adsr->envIndex = adsr->envelope[adsr->envIndex].value;
                    goto retry;

                case ADSR_RESTART:
                    adsr->state = ADSR_STATE_INITIAL;
                    break;

                default:
                    if (adsr->delay >= 4) {
                        adsr->delay =
                            (adsr->delay * gAudioBufferParams.ticksPerUpdate / gAudioBufferParams.numBuffers) / 4;
                    }
                    if (adsr->delay == 0) {
                        adsr->delay = 1;
                    }

                    adsr->target = adsr->envelope[adsr->envIndex].value / 32767.0f;
                    adsr->target = SQ(adsr->target);
                    adsr->velocity = (adsr->target - adsr->current) / adsr->delay;
                    adsr->state = ADSR_STATE_FADE;
                    adsr->envIndex++;
                    break;
            }
            if (adsr->state != ADSR_STATE_FADE) {
                break;
            }
        // fallthrough
        case ADSR_STATE_FADE:
            adsr->delay--;
            adsr->current += adsr->velocity;
            if (adsr->delay <= 0) {
                adsr->state = ADSR_STATE_LOOP;
            }
            break;

        case ADSR_STATE_DECAY:
        case ADSR_STATE_RELEASE:
            adsr->current -= adsr->fadeOutVel;
            if ((adsr->sustain != 0.0f) && (state == ADSR_STATE_DECAY)) {
                if (adsr->current < adsr->sustain) {
                    adsr->current = adsr->sustain;
                    adsr->delay = 128;
                    adsr->state = ADSR_STATE_SUSTAIN;
                }
            } else if (adsr->current < 0.00001f) {
                adsr->current = 0.0f;
                adsr->state = ADSR_STATE_DISABLED;
            }
            break;

        case ADSR_STATE_SUSTAIN:
            adsr->delay--;
            if (adsr->delay == 0) {
                adsr->state = ADSR_STATE_RELEASE;
            }
            break;
    }

    if (action & ADSR_DECAY_FLAG) {
        adsr->state = ADSR_STATE_DECAY;
        adsr->action.asByte = action & ~ADSR_DECAY_FLAG;
    }
    if (action & ADSR_RELEASE_FLAG) {
        adsr->state = ADSR_STATE_RELEASE;
        adsr->action.asByte = action & ~ADSR_RELEASE_FLAG;
    }

    if (adsr->current < 0.0f) {
        return 0.0f;
    }
    if (adsr->current > 1.0f) {
        return 1.0f;
    }

    return adsr->current;
}

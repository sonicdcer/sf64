#ifndef SF64_AUDIO_EXTERNAL_H
#define SF64_AUDIO_EXTERNAL_H

#include "sys.h"
#include "audioseq_cmd.h"
#include "sfx.h"
#include "bgm.h"

void Audio_PlayVoice(s32 msgId);
void Audio_PlayVoiceWithoutBGM(u32 msgId);
void Audio_ClearVoice(void);
s32 Audio_GetCurrentVoice(void);
s32 Audio_GetCurrentVoiceStatus(void);
void Audio_SetUnkVoiceParam(u8 unkVoiceParam);

u8* Audio_UpdateFrequencyAnalysis(void);
void Audio_SetVolume(u8 audioType, u8 volume);
void Audio_FadeOutAll(u8 fadeoutTime);
void Audio_SetAudioSpec(u8 unused, u16 specParam);

#define AUDIO_SET_SPEC(sfxLayout, spec) Audio_SetAudioSpec(0, ((sfxLayout) << 8) | (spec))
#define AUDIO_SET_SPEC_ALT(sfxLayout, spec) Audio_SetAudioSpec((sfxLayout), ((sfxLayout) << 8) | (spec))

// used by sys or related
void AudioLoad_Init(void);
void Audio_dummy_80016A50(void);
void Audio_InitSounds(void);
void Audio_Update(void);
SPTask* AudioThread_CreateTask(void);
void AudioThread_PreNMIReset(void);

typedef enum AudioType {
    /* 0 */ AUDIO_TYPE_MUSIC,
    /* 1 */ AUDIO_TYPE_VOICE,
    /* 2 */ AUDIO_TYPE_SFX,
    /* 3 */ AUDIO_TYPE_MAX,
} AudioType;

typedef enum {
    /* 0 */ SOUNDMODE_STEREO,
    /* 1 */ SOUNDMODE_HEADSET,
    /* 2 */ SOUNDMODE_SURROUND,
    /* 3 */ SOUNDMODE_MONO
} SoundMode;

typedef enum OptionSoundMode {
    /* 0 */ OPTIONSOUND_STEREO,
    /* 1 */ OPTIONSOUND_MONO,
    /* 2 */ OPTIONSOUND_HEADSET,
    /* 3 */ OPTIONSOUND_MAX,
} OptionSoundMode;

typedef enum {
    /* 0 */ SFX_LAYOUT_DEFAULT,
    /* 1 */ SFX_LAYOUT_MAP,
    /* 2 */ SFX_LAYOUT_SO,
    /* 3 */ SFX_LAYOUT_VS
} SfxChannelLayout;

typedef enum {
    /*  0 */ AUDIOSPEC_CO,
    /*  1 */ AUDIOSPEC_ME,
    /*  2 */ AUDIOSPEC_TI,
    /*  3 */ AUDIOSPEC_SX,
    /*  4 */ AUDIOSPEC_ZO,
    /*  5 */ AUDIOSPEC_A6,
    /*  6 */ AUDIOSPEC_VE,
    /*  7 */ AUDIOSPEC_SY,
    /*  8 */ AUDIOSPEC_FO,
    /*  9 */ AUDIOSPEC_SO,
    /* 10 */ AUDIOSPEC_BO,
    /* 11 */ AUDIOSPEC_KA,
    /* 12 */ AUDIOSPEC_AQ,
    /* 13 */ AUDIOSPEC_SZ,
    /* 14 */ AUDIOSPEC_MA,
    /* 15 */ AUDIOSPEC_AND,
    /* 16 */ AUDIOSPEC_VS,
    /* 17 */ AUDIOSPEC_VS_LAST,
    /* 18 */ AUDIOSPEC_18,
    /* 19 */ AUDIOSPEC_19,
    /* 20 */ AUDIOSPEC_20,
    /* 21 */ AUDIOSPEC_21,
    /* 22 */ AUDIOSPEC_OPENING,
    /* 23 */ AUDIOSPEC_TITLE,
    /* 24 */ AUDIOSPEC_MAP,
    /* 25 */ AUDIOSPEC_GAME_OVER,
    /* 26 */ AUDIOSPEC_26,
    /* 27 */ AUDIOSPEC_ENDING,
    /* 28 */ AUDIOSPEC_TR,
} AudioSpecID;

#endif

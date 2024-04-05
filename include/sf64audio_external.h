#ifndef SF64_AUDIO_EXTERNAL_H
#define SF64_AUDIO_EXTERNAL_H

#include "sys.h"
#include "audioseq_cmd.h"

#define AUDIO_PLAY_SFX(sfxId, srcPos, token) (Audio_PlaySfx((sfxId),(srcPos),(token),&gDefaultMod,&gDefaultMod,&gDefaultReverb))
#define AUDIO_PLAY_BGM(seqId) Audio_PlaySequence(SEQ_PLAYER_BGM, (seqId), 0, -1)

typedef enum {
    /* 0 */ SOUNDMODE_STEREO,
    /* 1 */ SOUNDMODE_HEADSET,
    /* 2 */ SOUNDMODE_SURROUND,
    /* 3 */ SOUNDMODE_MONO
} SoundMode;

typedef enum BgmSeqIds {
    /*  0 */ SEQ_ID_SFX,
    /*  1 */ SEQ_ID_VOICE,
    /*  2 */ SEQ_ID_CORNERIA,
    /*  3 */ SEQ_ID_METEO,
    /*  4 */ SEQ_ID_TITANIA,
    /*  5 */ SEQ_ID_SECTOR_X,
    /*  6 */ SEQ_ID_ZONESS,
    /*  7 */ SEQ_ID_AREA_6,
    /*  8 */ SEQ_ID_VENOM_1,
    /*  9 */ SEQ_ID_SECTOR_Y,
    /* 10 */ SEQ_ID_FORTUNA,
    /* 11 */ SEQ_ID_SOLAR,
    /* 12 */ SEQ_ID_BOLSE,
    /* 13 */ SEQ_ID_KATINA,
    /* 14 */ SEQ_ID_AQUAS,
    /* 15 */ SEQ_ID_SECTOR_Z,
    /* 16 */ SEQ_ID_MACBETH,
    /* 17 */ SEQ_ID_ANDROSS,
    /* 18 */ SEQ_ID_CO_BOSS_1,
    /* 19 */ SEQ_ID_ME_BOSS,
    /* 20 */ SEQ_ID_TI_BOSS,
    /* 21 */ SEQ_ID_SX_BOSS,
    /* 22 */ SEQ_ID_ZO_BOSS,
    /* 23 */ SEQ_ID_A6_BOSS,
    /* 24 */ SEQ_ID_VE_BOSS,
    /* 25 */ SEQ_ID_SY_BOSS,
    /* 26 */ SEQ_ID_UNK_26,
    /* 27 */ SEQ_ID_SO_BOSS,
    /* 28 */ SEQ_ID_BO_BOSS,
    /* 29 */ SEQ_ID_KA_BOSS,
    /* 30 */ SEQ_ID_AQ_BOSS,
    /* 31 */ SEQ_ID_SZ_BOSS,
    /* 32 */ SEQ_ID_MA_BOSS,
    /* 33 */ SEQ_ID_AND_BOSS,
    /* 34 */ SEQ_ID_TITLE,
    /* 35 */ SEQ_ID_OPENING,
    /* 36 */ SEQ_ID_MENU,
    /* 37 */ SEQ_ID_CO_INTRO,
    /* 38 */ SEQ_ID_GOOD_END,
    /* 39 */ SEQ_ID_DEATH,
    /* 40 */ SEQ_ID_GAME_OVER,
    /* 41 */ SEQ_ID_UNK_41,
    /* 42 */ SEQ_ID_ENDING,
    /* 43 */ SEQ_ID_STAR_WOLF,
    /* 44 */ SEQ_ID_INTRO_44,
    /* 45 */ SEQ_ID_INTRO_45,
    /* 46 */ SEQ_ID_VERSUS,
    /* 47 */ SEQ_ID_VS_HURRY,
    /* 48 */ SEQ_ID_CO_BOSS_2,
    /* 49 */ SEQ_ID_BAD_END,
    /* 50 */ SEQ_ID_ME_INTRO,
    /* 51 */ SEQ_ID_INTRO_51,
    /* 52 */ SEQ_ID_UNK_52,
    /* 53 */ SEQ_ID_UNK_53,
    /* 54 */ SEQ_ID_KATT,
    /* 55 */ SEQ_ID_BILL,
    /* 56 */ SEQ_ID_VS_MENU,
    /* 57 */ SEQ_ID_UNK_57,
    /* 58 */ SEQ_ID_WARP_ZONE,
    /* 59 */ SEQ_ID_UNK_59,
    /* 60 */ SEQ_ID_WORLD_MAP,
    /* 61 */ SEQ_ID_AND_BRAIN,
    /* 62 */ SEQ_ID_TO_ANDROSS,
    /* 63 */ SEQ_ID_TRAINING,
    /* 64 */ SEQ_ID_VE_CLEAR,
    /* 65 */ SEQ_ID_BOSS_RESUME,
    /* 66 */ SEQ_ID_MAX,
    /* -1 */ SEQ_ID_NONE = 0xFFFF,
} BgmSeqIds;

#define SEQ_FLAG 0x8000

extern f32 gDefaultSfxSource[];
extern f32 gDefaultMod;
extern s8 gDefaultReverb;

void Audio_PlaySfx(u32 sfxId, f32* sfxSource, u8 token, f32* freqMod, f32* volMod, s8* reverbAdd);
void Audio_KillSfxByBank(u8 bankId);
void Audio_StopSfxByBankAndSource(u8 bankId, f32* sfxSource);
void Audio_KillSfxByBankAndSource(u8 bankId, f32* sfxSource);
void Audio_KillSfxBySource(f32* sfxSource);
void Audio_KillSfxBySourceAndId(f32* sfxSource, u32 sfxId);
void Audio_KillSfxByTokenAndId(u8 token, u32 sfxId);
void Audio_KillSfxById(u32 sfxId);
void Audio_PlayVoice(s32 msgId);
void Audio_PlayVoiceWithoutBGM(u32 msgId);
void Audio_ClearVoice(void);
s32 Audio_GetCurrentVoice(void);
s32 Audio_GetCurrentVoiceStatus(void);
void func_8001AF40(u8 unkVoiceParam);
u8* Audio_UpdateFrequencyAnalysis(void);
void func_8001C8B8(u8 playerId);
void func_8001CA24(u8 playerId);
void func_8001CB80(u8 playerId, u8 arg1);
void func_8001CCDC(u8 playerId, f32* sfxSource);
void func_8001CE28(u8 playerId, f32* sfxSource);
void func_8001CF60(f32* sfxSource);
void func_8001CFA8(f32 arg0);
void func_8001D034(f32* sfxSource, u32 sfxId, u8 semitones);
void func_8001D0B4(f32* sfxSource, u32 sfxId, f32 freqMod);
void func_8001D10C(f32* sfxSource, u32 sfxId);
void func_8001D15C(u8 arg0);
void func_8001D1C8(u8 arg0, u8 arg1);
void Audio_PlayEventSfx(f32* sfxSource, u16 arg1);
void Audio_StopEventSfx(f32* sfxSource, u16 arg1);
void Audio_SetBaseSfxReverb(s8 reverb);
void Audio_SetBgmParam(s8 bgmParam);
void Audio_PlaySequence(u8 seqPlayId, u16 seqId, u8 fadeinTime, u8 bgmParam);
void Audio_PlayFanfare(u16 seqId, u8 bgmVolume, u8 bgmFadeoutTime, u8 bgmFadeinTime);
void func_8001D520(void);
void func_8001D638(u8 arg0);
void func_8001D6DC(u8 arg0);
void func_8001D8A8(u8 audioType, u8 volume);
void Audio_PlaySoundTest(u8 enable);
void Audio_PlaySequenceDistorted(u8 seqPlayId, u16 seqId, u16 distortion, u8 fadeinTime, u8 unused);
void Audio_PlaySoundTestTrack(u8 trackNumber);
void Audio_FadeOutAll(u8 fadeoutTime);
void Audio_KillAllSfx(void);
void Audio_SetAudioSpec(u8 unused, u16 specParam);
void Audio_PlayBgm(u16 seqId);

// used by sys or related
void AudioLoad_Init(void);
void func_80016A50(void);
void Audio_InitSounds(void);
void Audio_Update(void);
SPTask* AudioThread_CreateTask(void);
void AudioThread_PreNMIReset(void);


#endif

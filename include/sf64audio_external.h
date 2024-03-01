#ifndef SF64_AUDIO_EXTERNAL_H
#define SF64_AUDIO_EXTERNAL_H

#include "sys.h"
#include "audioseq_cmd.h"

#define AUDIO_PLAY_SFX(sfxId, srcPos, token) (Audio_PlaySfx((sfxId),(srcPos),(token),&gDefaultMod,&gDefaultMod,&gDefaultReverb))
#define AUDIO_PLAY_BGM(seqId) Audio_PlaySequence(SEQ_PLAYER_BGM, (seqId), 0, -1)

typedef enum {
    SEQ_ID_0,
    SEQ_ID_1,
    SEQ_ID_2,
    SEQ_ID_3,
    SEQ_ID_4,
    SEQ_ID_5,
    SEQ_ID_6,
    SEQ_ID_7,
    SEQ_ID_8,
    SEQ_ID_9,
    SEQ_ID_10,
    SEQ_ID_11,
    SEQ_ID_12,
    SEQ_ID_13,
    SEQ_ID_14,
    SEQ_ID_15,
    SEQ_ID_16,
    SEQ_ID_17,
    SEQ_ID_18,
    SEQ_ID_19,
    SEQ_ID_20,
    SEQ_ID_21,
    SEQ_ID_22,
    SEQ_ID_23,
    SEQ_ID_24,
    SEQ_ID_25,
    SEQ_ID_26,
    SEQ_ID_27,
    SEQ_ID_28,
    SEQ_ID_29,
    SEQ_ID_30,
    SEQ_ID_31,
    SEQ_ID_32,
    SEQ_ID_33,
    SEQ_ID_34,
    SEQ_ID_35,
    SEQ_ID_36,
    SEQ_ID_37,
    SEQ_ID_38,
    SEQ_ID_39,
    SEQ_ID_40,
    SEQ_ID_41,
    SEQ_ID_42,
    SEQ_ID_43,
    SEQ_ID_44,
    SEQ_ID_45,
    SEQ_ID_46,
    SEQ_ID_47,
    SEQ_ID_48,
    SEQ_ID_49,
    SEQ_ID_50,
    SEQ_ID_51,
    SEQ_ID_52,
    SEQ_ID_53,
    SEQ_ID_54,
    SEQ_ID_55,
    SEQ_ID_56,
    SEQ_ID_57,
    SEQ_ID_58,
    SEQ_ID_59,
    SEQ_ID_60,
    SEQ_ID_61,
    SEQ_ID_62,
    SEQ_ID_63,
    SEQ_ID_64,
    SEQ_ID_65,
    SEQ_ID_66,
    SEQ_ID_67,
    SEQ_ID_68,
    SEQ_ID_69,
} BgmSeqIds;

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
void func_8001D2FC(f32* sfxSource, u16 arg1);
void func_8001D3A0(f32* sfxSource, u16 arg1);
void Audio_SetBaseSfxReverb(s8 reverb);
void Audio_SetBgmParam(s8 bgmParam);
void Audio_PlaySequence(u8 seqPlayId, u16 seqId, u8 fadeinTime, u8 bgmParam);
void Audio_PlayFanfare(u16 seqId, u8 bgmVolume, u8 bgmFadeoutTime, u8 bgmFadeinTime);
void func_8001D520(void);
void func_8001D638(u8 arg0);
void func_8001D6DC(u8 arg0);
void func_8001D8A8(u8 audioType, u8 volume);
void Audio_PlaySoundTest(u8 enable);
void Audio_PlaySequenceDistorted(u8 seqPlayId, u16 seqId, u16 distortion, u8 duration, u8 unused);
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
SPTask* func_8001DF50(void);
void func_8001EE00(void);


#endif

#include "sys.h"
#include "sf64audio_provisional.h"
#include "context.h"
#include "audiothread_cmd.h"
#include "audioseq_cmd.h"

void func_8001D0B4(f32* sfxSource, u32 sfxId, f32 freqMod);
void func_8001DD40(void);
s32 Audio_GetCurrentVoice(void);
void Audio_PlaySequence(u8, u16, u8, u8);
void Audio_PlayFanfare(u16, u8, u8, u8);
void func_8001D6DC(u8);
void Audio_PlaySequenceDistorted(u8, u16, u16, u8, u8);
void func_8001DE1C(u8);

static const char devstr1[] = "preload start (%d): ";
static const char devstr2[] = "%d ";
static const char devstr3[] = "\n";
static const char devstr4[] = "***** START SEQ : %d *****\n";
static const char devstr5[] = "spec change finished !!!\n";
static const char devstr6[] = "interface wait spec change finished !!!\n";
static const char devstr7[] = "********** SE Interface Buffer SE Stop %08X **********\n";
static const char devstr8[] = "MedlayStart : \n";
static const char devstr9[] = "MedlayStart : \n";
static const char devstr10[] = "MedlayStart(TuneUp) : \n";
static const char devstr11[] = "MedlayStart(cross) : \n";
static const char devstr12[] = "MedlayEnd : \n";
static const char devstr13[] = "MedlayWait : %d\n";
static const char devstr14[] = "ControlSePicth : %f %f %f \n";
static const char devstr15[] = "ChangeWarningSePara : %d %d\n";
static const char devstr16[] = "set Grp 0 port %02x \n";
static const char devstr17[] = "main BGM start %08X\n";
static const char devstr18[] = "<<<<< PlayCrossMixBgm pass !!! >>>>>\n";
static const char devstr19[] = "SetVolumeBallnce %d %d\n";
static const char devstr20[] = "START HANDLE : %d (old:%d)\n";
static const char devstr21[] = "All Sound Fade Out time:%d\n";

SfxRequest gSfxRequests[256];
SfxBankEntry gSfxBanks[5][20];
u8 gSfxBankListEnd[5];
u8 gSfxBankFreeListStart[5];
u8 gSfxBankUnused[5];
ActiveSfx gActiveSfx[5][8];
u8 gCurSfxPlayerChannelIndex;
u8 gSfxBankMuted[5];
Modulation gSfxVolumeMods[5];
f32 D_80149AD8[256];
f32 D_80149ED8[256];
f32 D_8014A2D8[384];
f32 D_8014A8D8[32];
u8 D_8014A958[32];
SeqRequest gSeqRequests[4][5];
u8 gNumSeqRequests[4];
s32 gAudioSeqCmds[256];
ActiveSequence gActiveSequences[4];
u16 gDelayedSeqCmdFlags;
DelayedSeqCmd gDelayedSeqCmds[16];
SfxChannelState gSfxChannelState[16];
PlayerNoiseModulation gPlayerNoise[4];
f32 D_8014BA10[4];
u8 D_8014BA20[4];
u8 D_8014BA24[4];
s32 D_8014BA28[4];

u8 gChannelsPerBank[5][5] = {
    { 3, 2, 2, 2, 2 }, { 3, 1, 2, 2, 2 }, { 3, 2, 2, 2, 3 }, { 6, 0, 2, 0, 4 }, { 0, 0, 0, 0, 0 },
};
u8 gUsedChannelsPerBank[5][5] = {
    { 3, 2, 1, 2, 3 }, { 3, 2, 1, 1, 2 }, { 3, 2, 1, 1, 3 }, { 2, 0, 1, 0, 1 }, { 0, 0, 0, 0, 0 },
};
u8 gSfxRequestWriteIndex = 0;
u8 gSfxRequestReadIndex = 0;
u8 gSfxChannelLayout = 0;
u16 D_800C5D24 = 0;
f32 gDefaultSfxSource[3] = { 0.0f, 0.0f, 0.0f };
f32 gDefaultMod = 1.0f;
s32 D_800C5D38 = 0; // unused. perhaps a default pan?
s8 gDefaultReverb = 0;
s32 gAudioFrameCounter = 0;
u8 gSeqCmdWritePos = 0;
u8 gSeqCmdReadPos = 0;
u8 gStartSeqDisabled = 0;
u8 gSoundModeList[4] = { SOUNDMODE_STEREO, SOUNDMODE_HEADSET, SOUNDMODE_SURROUND, SOUNDMODE_MONO };
u8 sNewAudioSpecId = 0;
u8 D_800C5D58 = 0;
s32 D_800C5D5C = 0; // unused. file split?
s8 sBaseReverb = 0;
s8 sAudioSpecReverb = 0;
u8 sVolumeSettings[3] = { 99, 99, 99 };
u8 D_800C5D6C[29][7] = {
    { 0, 3, 4, 80, 12, 21, 255 },    { 17, 18, 15, 96, 20, 22, 255 }, { 0, 3, 5, 80, 16, 255, 0 },
    { 17, 18, 15, 96, 20, 22, 255 }, { 0, 3, 4, 80, 12, 21, 255 },    { 17, 18, 15, 96, 20, 22, 255 },
    { 0, 3, 4, 80, 12, 21, 255 },    { 17, 18, 15, 96, 20, 22, 255 }, { 0, 3, 4, 80, 12, 21, 255 },
    { 0, 3, 4, 80, 12, 21, 255 },    { 17, 18, 15, 96, 20, 22, 255 }, { 0, 3, 4, 80, 12, 21, 255 },
    { 17, 18, 95, 96, 41, 255, 0 },  { 17, 18, 15, 96, 20, 22, 255 }, { 0, 3, 5, 80, 16, 255, 0 },
    { 0, 3, 4, 80, 12, 21, 255 },    { 0, 3, 4, 80, 12, 21, 255 },    { 17, 18, 15, 96, 20, 22, 255 },
    { 0, 3, 4, 80, 12, 21, 255 },    { 0, 3, 4, 80, 12, 21, 255 },    { 0, 3, 4, 80, 12, 21, 255 },
    { 255, 0, 0, 0, 0, 0, 0 },       { 255, 0, 0, 0, 0, 0, 0 },       { 255, 0, 0, 0, 0, 0, 0 },
    { 255, 0, 0, 0, 0, 0, 0 },       { 255, 0, 0, 0, 0, 0, 0 },       { 255, 0, 0, 0, 0, 0, 0 },
    { 255, 0, 0, 0, 0, 0, 0 },       { 0, 3, 4, 80, 12, 21, 255 },
};
s8 D_800C5E38[29] = {
    10, 0, 25, 0, 25, 0, 10, 0, 10, 35, 0, 10, 40, 0, 25, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
u32 D_800C5E58[5] = { 20, 16, 10, 10, 20 };
s32 D_800C5E6C = 0; // unused. file split?
u8 D_800C5E70 = 0;
f32 gSfxFreqMod = 1.0f;
f32 gSfxVolMod = 1.0f; // never modified
u8 gPlaylistIndex = 255;
s32 gPlaylistTimer = 0;
u8 gPlaylistCmdIndex = 0;
u32 D_800C5E88[] = {
    0x1903000D, 0x1903000E, 0x19500015, 0x2903A021, 0x4900000C, 0x19122005, 0x1913204A, 0x2900306A,
    0x29034024, 0x2902306C, 0x19032056, 0x19030057, 0x19033058, 0x19030006, 0x29503032, 0x1903407D,
    0x4900402E, 0x19038072, 0x1903807E, 0x1903807F, 0x19038080, 0x11032081, 0x19031082,
};
SoundTestTrack D_800C5EE4[] = {
    { 35, 22, 255, 0 },
    { 34, 23, 255, 0 },
    { 36, 23, 255, 0 },
    { 60, 280, 255, 0 },
    { 37, 0, 255, 0 },
    { 44, 1, 255, 0 },
    { 45, 1, 255, 0 },
    { 50, 1, 255, 0 },
    { 51, 8, 255, 0 },
    { 0x8000 + 2, 0, 255, 0 },
    { 0x8000 + 3, 1, 255, 0 },
    { 0x8000 + 4, 2, 255, 0 },
    { 0x8000 + 5, 3, 255, 0 },
    { 0x8000 + 6, 4, 255, 0 },
    { 0x8000 + 7, 5, 255, 0 },
    { 0x8000 + 8, 6, 255, 0 },
    { 0x8000 + 9, 7, 255, 0 },
    { 0x8000 + 10, 8, 255, 0 },
    { 0x8000 + 12, 10, 255, 0 },
    { 0x8000 + 13, 11, 255, 0 },
    { 14, 12, 255, 0 },
    { 0x8000 + 58, 1, 255, 0 },
    { 54, 13, 255, 0 },
    { 55, 11, 255, 0 },
    { 0x8000 + 18, 0, 255, 0 },
    { 0x8000 + 19, 1, 0, 0 },
    { 0x8000 + 19, 1, 255, 0 },
    { 0x8000 + 65, 7, 255, 0 },
    { 0x8000 + 28, 10, 255, 0 },
    { 0x8000 + 43, 6, 255, 0 },
    { 38, 0, 255, 0 },
    { 49, 0, 255, 0 },
    { 39, 0, 255, 0 },
    { 40, 25, 255, 0 },
    { 0x8000 + 63, 28, 255, 0 },
    { 0x8000 + 46, 784, 255, 0 },
    { 0x8000 + 47, 785, 255, 0 },
    { 56, 23, 255, 0 },
    { 0x8000 + 62, 6, 0, 0 },
    { 0x8000 + 17, 23, 255, 0 },
    { 0x8000 + 33, 6, 0, 0 },
    { 0x8000 + 33, 6, 255, 0 },
    { 0x8000 + 61, 6, 255, 0 },
    { 0x8000 + 64, 6, 255, 0 },
    { 42, 27, 255, 0 },
};
PlaylistCmd gPlaylists[][100] = {
    {
        { 0, 0, 0x25, 0, 0, 255, 1620 },
        { 0, 0, 0x8002, 0, 0, 255, 2490 },
        { 1, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0x8012, 0, 0, 255, 1600 },
        { 1, 0, 0x8012, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x32, 0, 0, 255, 838 },
        { 0, 0, 0x8003, 0, 0, 255, 1584 },
        { 1, 0, 0x8003, 0, 50, 255, 50 },
        { 0, 0, 0x8013, 0, 0, 0, 1620 },
        { 1, 0, 0x8013, 0, 1, 255, 50 },
        { 0, 0, 0x8041, 0, 0, 255, 1620 },
        { 1, 0, 0x8041, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x33, 0, 0, 255, 241 },
        { 0, 0, 0x800A, 0, 0, 255, 1632 },
        { 1, 0, 0x800A, 0, 100, 255, 100 },
        { 0, 0, 0x802B, 0, 0, 255, 2120 },
        { 0, 0, 0x800A, 0, 0, 0, 450 },
        { 1, 0, 0x800A, 0, 50, 255, 200 },
        { 0, 0, 0x31, 0, 0, 255, 1604 },
        { 1, 0, 0x31, 0, 100, 255, 100 },
        { 0, 0, 0x2C, 0, 0, 255, 242 },
        { 0, 0, 0x8005, 0, 0, 255, 2291 },
        { 1, 0, 0x8005, 0, 50, 255, 100 },
        { 0, 0, 0x8015, 0, 0, 255, 1600 },
        { 1, 0, 0x8015, 0, 1, 255, 50 },
        { 2, 0, 0x8015, 0, 0, 255, 1600 },
        { 1, 0, 0x8015, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x2D, 0, 0, 255, 542 },
        { 0, 0, 0x8004, 0, 0, 255, 1920 },
        { 1, 0, 0x8004, 0, 50, 255, 50 },
        { 0, 0, 0x8014, 0, 0, 255, 1600 },
        { 1, 0, 0x8014, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x33, 0, 0, 255, 241 },
        { 0, 0, 0x800C, 0, 0, 255, 1177 },
        { 1, 0, 0x800C, 0, 100, 255, 100 },
        { 0, 0, 0x801C, 0, 0, 255, 1115 },
        { 1, 0, 0x801C, 0, 50, 255, 50 },
        { 0, 0, 0x802B, 0, 0, 255, 2120 },
        { 1, 0, 0x802B, 0, 1, 255, 50 },
        { 0, 0, 0x27, 0, 0, 255, 150 },
        { 0, 0, 0x28, 0, 0, 255, 1020 },
        { 1, 0, 0x28, 0, 100, 255, 100 },
        { 255, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0x25, 0, 0, 255, 1620 },
        { 0, 0, 0x8002, 0, 0, 255, 2490 },
        { 1, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0x8030, 0, 0, 255, 1620 },
        { 1, 0, 0x8030, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x2C, 0, 0, 255, 242 },
        { 0, 0, 0x8009, 0, 0, 255, 2096 },
        { 1, 0, 0x8009, 0, 50, 255, 50 },
        { 0, 0, 0x8019, 0, 0, 2, 1600 },
        { 1, 0, 0x8019, 0, 1, 255, 50 },
        { 0, 0, 0x8041, 0, 0, 255, 1600 },
        { 1, 0, 0x8041, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x33, 0, 0, 255, 241 },
        { 0, 0, 0x800D, 0, 0, 255, 2184 },
        { 1, 0, 0x800D, 0, 1, 255, 100 },
        { 0, 0, 0x801D, 0, 0, 1, 1115 },
        { 1, 0, 0x801D, 0, 50, 255, 100 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x33, 0, 0, 255, 250 },
        { 0, 0, 0x800B, 0, 0, 255, 1096 },
        { 3, 0, 0x37, 0, 0, 255, 1000 },
        { 1, 0, 0x800B, 0, 50, 255, 50 },
        { 0, 0, 0x801B, 0, 0, 255, 1600 },
        { 1, 0, 0x801B, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x2C, 0, 0, 255, 260 },
        { 0, 0, 0x8010, 0, 0, 255, 1920 },
        { 1, 0, 0x8010, 0, 50, 255, 50 },
        { 0, 0, 0x8020, 0, 0, 255, 1600 },
        { 1, 0, 0x8020, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x33, 0, 0, 255, 241 },
        { 0, 0, 0x800C, 0, 0, 255, 1177 },
        { 1, 0, 0x800C, 0, 100, 255, 100 },
        { 0, 0, 0x801C, 0, 0, 255, 1115 },
        { 1, 0, 0x801C, 0, 50, 255, 50 },
        { 0, 0, 0x802B, 0, 0, 255, 2120 },
        { 1, 0, 0x802B, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x8008, 0, 0, 255, 1671 },
        { 1, 0, 0x8008, 0, 50, 255, 50 },
        { 0, 0, 0x8018, 0, 0, 255, 1600 },
        { 1, 0, 0x8018, 0, 1, 255, 50 },
        { 0, 0, 0x803E, 0, 0, 0, 176 },
        { 0, 0, 0x8011, 0, 0, 255, 588 },
        { 0, 0, 0x8021, 0, 0, 0, 2420 },
        { 1, 0, 0x8021, 0, 10, 255, 50 },
        { 0, 0, 0x8021, 0, 0, 255, 1200 },
        { 1, 0, 0x8021, 0, 1, 255, 150 },
        { 0, 0, 0x8040, 0, 0, 255, 1091 },
        { 1, 0, 0x8040, 0, 80, 255, 160 },
        { 0, 0, 0x2A, 0, 0, 255, 9500 },
        { 255, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0x25, 0, 0, 255, 1620 },   { 0, 0, 0x8002, 0, 0, 255, 2490 }, { 1, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0x8030, 0, 0, 255, 1620 }, { 1, 0, 0x8030, 0, 1, 255, 50 },   { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },  { 0, 0, 0x2C, 0, 0, 255, 260 },    { 0, 0, 0x8009, 0, 0, 255, 2096 },
        { 1, 0, 0x8009, 0, 50, 255, 50 },  { 0, 0, 0x8019, 0, 0, 2, 1590 },   { 1, 0, 0x8019, 0, 1, 255, 50 },
        { 0, 0, 0x8041, 0, 0, 255, 1600 }, { 1, 0, 0x8041, 0, 1, 255, 50 },   { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },  { 0, 0, 0x2C, 0, 0, 255, 260 },    { 0, 0, 0xE, 0, 0, 255, 2400 },
        { 1, 0, 0xE, 0, 150, 255, 200 },   { 0, 0, 0x801E, 0, 0, 1, 1590 },   { 1, 0, 0x801E, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },   { 1, 0, 0x26, 0, 100, 255, 100 },  { 0, 0, 0x2C, 0, 0, 255, 260 },
        { 0, 0, 0x8006, 0, 0, 255, 1005 }, { 3, 0, 0x36, 0, 0, 255, 1000 },   { 1, 0, 0x8006, 0, 50, 255, 100 },
        { 0, 0, 0x8016, 0, 0, 255, 1600 }, { 1, 0, 0x8016, 0, 1, 255, 50 },   { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },  { 0, 0, 0x33, 0, 0, 255, 241 },    { 0, 0, 0x800F, 0, 0, 255, 1632 },
        { 1, 0, 0x800F, 0, 50, 255, 100 }, { 0, 0, 0x801F, 0, 0, 1, 1310 },   { 3, 0, 0x36, 0, 0, 255, 500 },
        { 1, 0, 0x801F, 0, 1, 255, 50 },   { 0, 0, 0x26, 0, 0, 255, 1091 },   { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x33, 0, 0, 255, 241 },    { 0, 0, 0x8007, 0, 0, 255, 1906 }, { 1, 0, 0x8007, 0, 50, 255, 100 },
        { 0, 0, 0x8017, 0, 0, 1, 1590 },   { 1, 0, 0x8017, 0, 1, 255, 50 },   { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },  { 0, 0, 0x802B, 0, 0, 255, 2120 }, { 1, 0, 0x802B, 0, 30, 255, 150 },
        { 0, 0, 0x803E, 0, 0, 0, 176 },    { 0, 0, 0x8011, 0, 0, 255, 588 },  { 0, 0, 0x8021, 0, 0, 0, 2392 },
        { 1, 0, 0x8021, 0, 10, 255, 50 },  { 0, 0, 0x803D, 0, 0, 255, 1700 }, { 1, 0, 0x8021, 0, 10, 255, 250 },
        { 0, 0, 0x8017, 0, 0, 255, 1600 }, { 1, 0, 0x8017, 0, 1, 255, 50 },   { 0, 0, 0x8040, 0, 0, 255, 1091 },
        { 1, 0, 0x8040, 0, 80, 255, 160 }, { 0, 0, 0x2A, 0, 0, 255, 9250 },   { 255, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },           { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0x25, 0, 0, 255, 1620 },
        { 0, 0, 0x8002, 0, 0, 255, 2490 },
        { 1, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0x8012, 0, 0, 255, 1600 },
        { 1, 0, 0x8012, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x32, 0, 0, 255, 838 },
        { 0, 0, 0x8003, 0, 0, 255, 1584 },
        { 1, 0, 0x8003, 0, 150, 255, 150 },
        { 0, 0, 0x803A, 0, 0, 255, 1635 },
        { 1, 0, 0x803A, 0, 150, 255, 150 },
        { 0, 0, 0x33, 0, 0, 255, 241 },
        { 0, 0, 0x800D, 0, 0, 255, 2184 },
        { 1, 0, 0x800D, 0, 1, 255, 100 },
        { 0, 0, 0x801D, 0, 0, 1, 1115 },
        { 1, 0, 0x801D, 0, 50, 255, 100 },
        { 0, 0, 0x31, 0, 0, 255, 1604 },
        { 1, 0, 0x31, 0, 100, 255, 100 },
        { 0, 0, 0x2C, 0, 0, 255, 242 },
        { 0, 0, 0x8005, 0, 0, 255, 1291 },
        { 3, 0, 0x37, 0, 0, 255, 1000 },
        { 1, 0, 0x8005, 0, 50, 255, 100 },
        { 0, 0, 0x803A, 0, 0, 255, 1635 },
        { 1, 0, 0x803A, 0, 150, 255, 150 },
        { 0, 0, 0x33, 0, 0, 255, 241 },
        { 0, 0, 0x800F, 0, 0, 255, 1632 },
        { 1, 0, 0x800F, 0, 50, 255, 100 },
        { 0, 0, 0x801F, 0, 0, 1, 1115 },
        { 1, 0, 0x801F, 0, 1, 255, 50 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 100, 255, 100 },
        { 0, 0, 0x33, 0, 0, 255, 241 },
        { 0, 0, 0x8007, 0, 0, 255, 1906 },
        { 1, 0, 0x8007, 0, 50, 255, 100 },
        { 0, 0, 0x8017, 0, 0, 1, 1590 },
        { 1, 0, 0x8017, 0, 1, 255, 50 },
        { 0, 0, 0x27, 0, 0, 255, 150 },
        { 0, 0, 0x28, 0, 0, 255, 1020 },
        { 1, 0, 0x28, 0, 100, 255, 100 },
        { 255, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0x23, 0, 0, 255, 2926 },
        { 0, 0, 0x22, 0, 0, 255, 1251 },
        { 1, 0, 0x22, 0, 200, 255, 200 },
        { 0, 0, 0x24, 0, 0, 255, 1636 },
        { 1, 0, 0x24, 0, 200, 255, 200 },
        { 0, 0, 0x3C, 0, 0, 255, 1560 },
        { 1, 0, 0x3C, 0, 200, 255, 200 },
        { 0, 0, 0x25, 0, 0, 255, 1618 },
        { 0, 0, 0x2C, 0, 0, 255, 242 },
        { 0, 0, 0x2D, 0, 0, 255, 582 },
        { 0, 0, 0x32, 0, 0, 255, 868 },
        { 0, 0, 0x33, 0, 0, 255, 281 },
        { 0, 0, 0x8002, 0, 0, 255, 2490 },
        { 1, 0, 0x8002, 0, 200, 255, 200 },
        { 0, 0, 0x8003, 0, 0, 255, 1584 },
        { 1, 0, 0x8003, 0, 200, 255, 200 },
        { 0, 0, 0x8004, 0, 0, 255, 1920 },
        { 1, 0, 0x8004, 0, 200, 255, 200 },
        { 0, 0, 0x8005, 0, 0, 255, 2290 },
        { 1, 0, 0x8005, 0, 200, 255, 200 },
        { 0, 0, 0x8006, 0, 0, 255, 2005 },
        { 1, 0, 0x8006, 0, 200, 255, 200 },
        { 0, 0, 0x8007, 0, 0, 255, 1905 },
        { 1, 0, 0x8007, 0, 200, 255, 200 },
        { 0, 0, 0x8008, 0, 0, 255, 1671 },
        { 1, 0, 0x8008, 0, 200, 255, 200 },
        { 0, 0, 0x8009, 0, 0, 255, 2095 },
        { 1, 0, 0x8009, 0, 200, 255, 200 },
        { 0, 0, 0x800A, 0, 0, 255, 1632 },
        { 1, 0, 0x800A, 0, 200, 255, 200 },
        { 0, 0, 0x800D, 0, 0, 255, 2184 },
        { 1, 0, 0x800D, 0, 200, 255, 200 },
        { 0, 0, 0xE, 0, 0, 255, 2400 },
        { 1, 0, 0xE, 0, 200, 255, 200 },
        { 0, 0, 0x803A, 0, 0, 255, 1635 },
        { 1, 0, 0x803A, 0, 200, 255, 200 },
        { 0, 0, 0x36, 0, 0, 255, 389 },
        { 0, 0, 0x37, 0, 0, 255, 268 },
        { 0, 0, 0x8012, 0, 0, 255, 1598 },
        { 1, 0, 0x8012, 0, 200, 255, 200 },
        { 0, 0, 0x8013, 0, 0, 0, 1470 },
        { 1, 0, 0x8013, 0, 200, 255, 200 },
        { 0, 0, 0x8013, 0, 0, 255, 1470 },
        { 1, 0, 0x8013, 0, 200, 255, 200 },
        { 0, 0, 0x8041, 0, 0, 255, 1311 },
        { 1, 0, 0x8041, 0, 200, 255, 200 },
        { 0, 0, 0x801C, 0, 0, 255, 1115 },
        { 1, 0, 0x801C, 0, 200, 255, 200 },
        { 0, 0, 0x802B, 0, 0, 255, 2120 },
        { 1, 0, 0x802B, 0, 200, 255, 200 },
        { 0, 0, 0x26, 0, 0, 255, 1091 },
        { 1, 0, 0x26, 0, 200, 255, 200 },
        { 0, 0, 0x31, 0, 0, 255, 1604 },
        { 1, 0, 0x31, 0, 200, 255, 200 },
        { 0, 0, 0x27, 0, 0, 255, 200 },
        { 0, 0, 0x28, 0, 0, 255, 1020 },
        { 1, 0, 0x28, 0, 200, 255, 200 },
        { 0, 0, 0x803F, 0, 0, 255, 900 },
        { 1, 0, 0x803F, 0, 200, 255, 200 },
        { 0, 0, 0x38, 0, 0, 255, 665 },
        { 1, 0, 0x38, 0, 200, 255, 200 },
        { 0, 0, 0x802E, 0, 0, 255, 1647 },
        { 1, 0, 0x802E, 0, 200, 255, 200 },
        { 0, 0, 0x802F, 0, 0, 255, 1667 },
        { 1, 0, 0x802F, 0, 200, 255, 200 },
        { 0, 0, 0x803E, 0, 0, 0, 176 },
        { 0, 0, 0x8011, 0, 0, 255, 588 },
        { 1, 0, 0x8011, 0, 200, 255, 200 },
        { 0, 0, 0x8021, 0, 0, 0, 2391 },
        { 1, 0, 0x8021, 0, 200, 255, 200 },
        { 0, 0, 0x8021, 0, 0, 255, 2391 },
        { 1, 0, 0x8021, 0, 200, 255, 200 },
        { 0, 0, 0x803D, 0, 0, 255, 1700 },
        { 1, 0, 0x803D, 0, 200, 255, 200 },
        { 0, 0, 0x8040, 0, 0, 255, 1459 },
        { 1, 0, 0x8040, 0, 200, 255, 200 },
        { 0, 0, 0x2A, 0, 0, 255, 9250 },
        { 1, 0, 0x2A, 0, 200, 255, 200 },
        { 255, 0, 0x8002, 0, 50, 255, 50 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
    },
};
s32 D_800C737C = 0; // unused. file split?
f32 D_800C7380 = 1.0f;
u32 sNextVoiceId = 0;
u32 sCurrentVoiceId = 0;
u8 sSetNextVoiceId = 0;
u8 D_800C7390 = 0;
u8 sMuteBgmForVoice = 0;

void func_80016A50(void) {
}

f32 Audio_GetSfxFalloff(u8 bankId, u8 entryIndex) {
    f32 cutoff;
    f32 midDist;
    f32 distance;
    f32 falloff;
    f32 midrange;
    f32 range;

    if (SFX_BIT09(gSfxBanks[bankId][entryIndex].sfxId)) {
        return 1.0f;
    }
    distance = gSfxBanks[bankId][entryIndex].distance;
    if (distance > 33000.0f) {
        falloff = 0.0f;
    } else {
        switch (SFX_RANGE_MASK(gSfxBanks[bankId][entryIndex].sfxId)) {
            default:
                range = 1650.0f;
                break;
            case 1 << 16:
                range = 2200.0f;
                break;
            case 2 << 16:
                range = 3142.8572f;
                break;
            case 3 << 16:
                range = 6346.1543f;
                break;
        }
        cutoff = range / 5.0f;
        if (distance < range / 5.0f) {
            falloff = 1.0f;
        } else if (distance < range) {
            midDist = range - cutoff;
            midrange = distance - cutoff;
            falloff = (((midDist - midrange) / midDist) * 0.19f) + 0.81f;
        } else {
            falloff = (1.0f - ((distance - range) / (33000.0f - range))) * 0.81f;
        }
        falloff = SQ(falloff);
    }
    return falloff;
}

s8 Audio_GetSfxReverb(u8 bankId, u8 entryIndex, u8 channelId) {
    s32 totalReverb;
    s8 distReverb = 0;
    s8 scriptReverb = 0;

    if (!SFX_BIT10(gSfxBanks[bankId][entryIndex].sfxId)) {
        if (gSfxBanks[bankId][entryIndex].distance < 8250.0f) {
            distReverb = (gSfxBanks[bankId][entryIndex].distance / 8250.0f) * 40.0f;
        } else {
            distReverb = 40;
        }
    }
    if (gSeqPlayers[SEQ_PLAYER_SFX].channels[channelId] != &gSeqChannelNone) {
        scriptReverb = gSeqPlayers[SEQ_PLAYER_SFX].channels[channelId]->seqScriptIO[6];
    }
    if (scriptReverb == -1) {
        scriptReverb = 0;
    }
    totalReverb = *gSfxBanks[bankId][entryIndex].reverbAdd + distReverb + scriptReverb + sBaseReverb + sAudioSpecReverb;
    totalReverb = MIN(127, totalReverb);
    return totalReverb;
}

s8 Audio_GetSfxPan(f32 xPos, f32 zPos, u8 mode) {
    if (gSfxChannelLayout != 3) {
        f32 absx = ABSF(xPos);
        f32 absz = ABSF(zPos);
        f32 pan;

        if ((absx < 1.0f) && (absz < 1.0f)) {
            return 64;
        }
        absx = MIN(1200.0f, absx);
        absz = MIN(1200.0f, absz);

        if ((xPos == 0) && (zPos == 0)) {
            pan = 0.5f;
        } else if ((xPos >= 0.f) && (absz <= absx)) {
            pan = 1.0f - ((2400.0f - absx) / (10.0f * (2400.0f - absz)));
        } else if ((xPos < 0.0f) && (absz <= absx)) {
            pan = (2400.0f - absx) / (10.0f * (2400.0f - absz));
        } else {
            pan = (xPos / (2.5f * absz)) + 0.5f;
        }
        return ROUND(pan * 127.0f);
    } else if (mode != 4) {
        return ((mode & 1) * 127);
    }
    return 64;
}

f32 Audio_GetSfxFreqMod(u8 bankId, u8 entryIndex) {
    f32 distance;
    f32 freqMod = 1.0f;

    if (SFX_BIT08(gSfxBanks[bankId][entryIndex].sfxId)) {
        freqMod -= ((gAudioRandom % 16) / 192.0f);
    }
    distance = gSfxBanks[bankId][entryIndex].distance;
    if (!SFX_BIT09(gSfxBanks[bankId][entryIndex].sfxId)) {
        if (distance >= 33000.0f) {
            freqMod += 0.2f;
        } else {
            freqMod += 0.2f * (distance / 33000.0f);
        }
    }
    if ((gSfxChannelLayout != 0) && (gSfxBanks[bankId][entryIndex].token & 2)) {
        freqMod *= 1.1f;
    }
    return freqMod;
}

void Audio_SetSfxProperties(u8 bankId, u8 entryIndex, u8 channelId) {
    f32 volumeMod = 1.0f;
    s8 reverb = 0;
    f32 freqMod = 1.0f;
    s8 pan = 64;
    SfxBankEntry* entry = &gSfxBanks[bankId][entryIndex];

    switch (bankId) {
        case 0:
        case 1:
        case 2:
        case 3:
            if (entry->state == 2) {
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, channelId, 1, gLevelType);
            }
            if (SFX_BIT13(entry->sfxId) && (*entry->zPos > 0.0f)) {
                f32 yScaled = *entry->yPos / 2.5f;

                entry->distance = SQ(*entry->xPos) + SQ(yScaled);
            }
            entry->distance = sqrtf(entry->distance);
            volumeMod = (Audio_GetSfxFalloff(bankId, entryIndex) * *entry->volMod) * gSfxVolumeMods[bankId].value;
            reverb = Audio_GetSfxReverb(bankId, entryIndex, channelId);
            freqMod = Audio_GetSfxFreqMod(bankId, entryIndex) * *entry->freqMod;
            if ((bankId != 0) || !(*entry->zPos > -200.0f) || !(*entry->zPos < 200.0f) || (gSfxChannelLayout == 3)) {
                pan = Audio_GetSfxPan(*entry->xPos, *entry->zPos, entry->token);
            }
            break;
        case 4:
            if (gSfxChannelLayout == 3) {
                if (entry->token != 4) {
                    pan = (entry->token & 1) * 127;
                }
            }
            break;
    }
    if (volumeMod != gSfxChannelState[channelId].volMod) {
        AUDIOCMD_CHANNEL_SET_VOL_SCALE(SEQ_PLAYER_SFX, channelId, volumeMod);
        gSfxChannelState[channelId].volMod = volumeMod;
    }
    if (reverb != gSfxChannelState[channelId].reverb) {
        AUDIOCMD_CHANNEL_SET_REVERB_VOLUME(SEQ_PLAYER_SFX, channelId, reverb);
        gSfxChannelState[channelId].reverb = reverb;
    }
    if (freqMod != gSfxChannelState[channelId].freqMod) {
        AUDIOCMD_CHANNEL_SET_FREQ_SCALE(SEQ_PLAYER_SFX, channelId, freqMod);
        gSfxChannelState[channelId].freqMod = freqMod;
    }
    if (pan != gSfxChannelState[channelId].pan) {
        AUDIOCMD_CHANNEL_SET_PAN(SEQ_PLAYER_SFX, channelId, pan);
        gSfxChannelState[channelId].pan = pan;
    }
}

f32 Audio_UpdateDopplerShift(f32* srcPos, f32* srcVel, f32 soundSpeed, f32* curDopplerShift) {
    f32 xVel;
    f32 zVel;
    f32 xPos;
    f32 zPos;
    f32 xzDist;
    f32 xPosNext;
    f32 zPosNext;
    f32 xzDistNext;
    f32 step;
    f32 newShift;
    f32 relativeSpeed;
    f32 targetDopplerShift;
    s32 pad;

    xPos = srcPos[0];
    zPos = srcPos[2];
    xVel = srcVel[0];
    zVel = srcVel[2];
    xzDist = sqrtf(SQ(xPos) + SQ(zPos));
    xPosNext = xPos + xVel;
    zPosNext = zPos + zVel;
    xzDistNext = sqrtf(SQ(xPosNext) + SQ(zPosNext));
    relativeSpeed = (xzDist - xzDistNext) / soundSpeed;
    targetDopplerShift = 1.0f / (1.0f - relativeSpeed);

    step = targetDopplerShift - *curDopplerShift;
    newShift = *curDopplerShift;
    if (step != 0.0f) {
        if (step > 0.2f) {
            newShift += 0.2f;
        } else if (step < -0.2f) {
            newShift -= 0.2f;
        } else {
            newShift += step;
        }
    }
    *curDopplerShift = newShift;

    if (newShift > 4.0f) {
        newShift = 4.0f;
    } else if (newShift < 0.1f) {
        newShift = 0.1f;
    }

    return newShift;
}

void func_80017494(void) {
    u8 i;

    for (i = 0; D_800C5D6C[sNewAudioSpecId][i] != 0xFF; i++) {
        AUDIOCMD_GLOBAL_SYNC_LOAD_INSTRUMENT(0, D_800C5D6C[sNewAudioSpecId][i], 0);
    }
}

void func_80017550(void) {
    if (sNewAudioSpecId == 12) {
        AUDIOCMD_GLOBAL_SYNC_LOAD_SEQ_PARTS(14, 0);
    }
}

void Audio_ResetSfxChannelState(void) {
    u8 i;

    sBaseReverb = 0;
    sAudioSpecReverb = D_800C5E38[sNewAudioSpecId];
    for (i = 0; i < 16; i++) {
        gSfxChannelState[i].volMod = 1.0f;
        gSfxChannelState[i].freqMod = 1.0f;
        gSfxChannelState[i].reverb = 0;
        gSfxChannelState[i].pan = 64;
    }
}

void Audio_StartSequence(u8 seqPlayId, u8 seqId, u8 seqArgs, u16 fadeInTime) {
    u8 i;
    s32 pad;

    if (!gStartSeqDisabled || (seqPlayId == SEQ_PLAYER_SFX)) {
        AUDIOCMD_GLOBAL_INIT_SEQPLAYER((u32) seqPlayId, (u32) seqId, 0, fadeInTime);
        gActiveSequences[seqPlayId].prevSeqId = gActiveSequences[seqPlayId].seqId = seqId | ((seqArgs) << 8);
        if (gActiveSequences[seqPlayId].mainVolume.mod != 1.0f) {
            AUDIOCMD_SEQPLAYER_FADE_VOLUME_SCALE((u32) seqPlayId, gActiveSequences[seqPlayId].mainVolume.mod);
        }
        gActiveSequences[seqPlayId].tempo.timer = 0;
        gActiveSequences[seqPlayId].tempoOriginal = 0;
        gActiveSequences[seqPlayId].tempoCmd = 0;
        for (i = 0; i < 16; i++) {
            gActiveSequences[seqPlayId].channelMod[i].volume.value = 1.0f;
            gActiveSequences[seqPlayId].channelMod[i].volume.timer = 0;
            gActiveSequences[seqPlayId].channelMod[i].freq.value = 1.0f;
            gActiveSequences[seqPlayId].channelMod[i].freq.timer = 0;
        }
        gActiveSequences[seqPlayId].volChannelFlags = gActiveSequences[seqPlayId].freqModChannelFlags = 0;
    }
}

void Audio_StopSequence(u8 seqPlayId, u16 fadeOutTime) {
    AUDIOCMD_GLOBAL_DISABLE_SEQPLAYER(seqPlayId, fadeOutTime);
    gActiveSequences[seqPlayId].seqId = 0xFFFF;
}

void Audio_ProcessSeqCmd(u32 seqCmd) {
    u16 flag;
    u16 channelDisableMask;
    u16 fadeTimer;
    u16 val;
    s32 priority;
    u8 i; // sp63
    u8 specId;
    u8 sp61;
    u8 ioPort;
    u8 channel;
    u8 found;
    u8 muteFlag;
    u8 duration;
    u8 seqNumber;
    u8 subOp;
    u8 seqPlayId;
    u8 seqArgs;
    u8* tempptr; // sp54
    u8* tempPtr2;
    u32 sp4C;

    seqPlayId = (seqCmd & 0x0F000000) >> 0x18;
    switch ((seqCmd >> 0x1C) & 0xFF) {
        case 0:
            seqNumber = seqCmd & 0xFF;
            seqArgs = (seqCmd & 0xFF00) >> 8;
            fadeTimer = (seqCmd & 0xFF0000) >> 13;
            if (gActiveSequences[seqPlayId].isWaitingForFonts == 0) {
                if (seqArgs < 0x80) {
                    Audio_StartSequence(seqPlayId, seqNumber, seqArgs, fadeTimer);
                } else {
                    gActiveSequences[seqPlayId].startSeqCmd = seqCmd & ~0x8000;
                    gActiveSequences[seqPlayId].isWaitingForFonts = 1;
                    Audio_StopSequence(seqPlayId, 1);
                    if (gActiveSequences[seqPlayId].prevSeqId != 0xFFFF) {
                        tempptr = AudioThread_GetFontsForSequence(seqNumber, &sp4C);
                        tempPtr2 = AudioThread_GetFontsForSequence(gActiveSequences[seqPlayId].prevSeqId & 0xFF, &sp4C);
                        if (tempptr[0] != tempPtr2[0]) {
                            AUDIOCMD_GLOBAL_DISCARD_SEQ_FONTS(seqNumber);
                        }
                    }
                    AUDIOCMD_GLOBAL_ASYNC_LOAD_FONT(seqNumber, 20, (s8) (seqPlayId + 1));
                    // AudioThread_QueueCmdS8(0xF5000000 | ((temp1 & 0xFF) << 0x10) | 0x1400 | ((seqPlayId + 1) & 0xFF),
                    // 0);
                }
            }
            break;
        case 1:
            fadeTimer = (seqCmd & 0xFF0000) >> 13;
            Audio_StopSequence(seqPlayId, fadeTimer);
            return;
        case 2:
            seqNumber = seqCmd & 0xFF;
            seqArgs = (seqCmd & 0xFF00) >> 8;
            fadeTimer = (seqCmd & 0xFF0000) >> 13;
            priority = seqArgs;
            for (i = 0; i < gNumSeqRequests[seqPlayId]; i++) {
                if (seqNumber == gSeqRequests[seqPlayId][i].seqId) {
                    if (i == 0) {
                        Audio_StartSequence(seqPlayId, seqNumber, seqArgs, fadeTimer);
                    }
                    return;
                }
            }
            found = gNumSeqRequests[seqPlayId];
            for (i = 0; i < gNumSeqRequests[seqPlayId]; i++) {
                if (seqArgs >= gSeqRequests[seqPlayId][i].priority) {
                    found = i;
                    i = gNumSeqRequests[seqPlayId];
                }
            }
            if ((found != gNumSeqRequests[seqPlayId]) || (found == 0)) {
                if (gNumSeqRequests[seqPlayId] < 5) {
                    gNumSeqRequests[seqPlayId]++;
                }
                for (i = gNumSeqRequests[seqPlayId] - 1; i != found; i--) {
                    gSeqRequests[seqPlayId][i].priority = gSeqRequests[seqPlayId][i - 1].priority;
                    gSeqRequests[seqPlayId][i].seqId = gSeqRequests[seqPlayId][i - 1].seqId;
                }
                gSeqRequests[seqPlayId][found].priority = seqArgs;
                gSeqRequests[seqPlayId][found].seqId = seqNumber;
            }
            if (found == 0) {
                Audio_StartSequence(seqPlayId, seqNumber, seqArgs, fadeTimer);
            }
            break;
        case 3:
            fadeTimer = (seqCmd & 0xFF0000) >> 0xD;
            found = gNumSeqRequests[seqPlayId];
            for (i = 0; i < gNumSeqRequests[seqPlayId]; i++) {
                seqNumber = seqCmd & 0xFF;
                if (gSeqRequests[seqPlayId][i].seqId == seqNumber) {
                    found = i;
                    i = gNumSeqRequests[seqPlayId];
                }
            }
            if (found != gNumSeqRequests[seqPlayId]) {
                for (i = found; i < gNumSeqRequests[seqPlayId] - 1; i++) {
                    gSeqRequests[seqPlayId][i].priority = gSeqRequests[seqPlayId][i + 1].priority;
                    gSeqRequests[seqPlayId][i].seqId = gSeqRequests[seqPlayId][i + 1].seqId;
                }
                gNumSeqRequests[seqPlayId]--;
            }
            if (found == 0) {
                Audio_StopSequence(seqPlayId, fadeTimer);
                if (gNumSeqRequests[seqPlayId] != 0) {

                    Audio_StartSequence(seqPlayId, gSeqRequests[seqPlayId][0].seqId,
                                        gSeqRequests[seqPlayId][0].priority, fadeTimer);
                }
            }
            break;
        case 4:
            val = seqCmd & 0xFF;
            duration = (seqCmd & 0xFF0000) >> 0xF;

            if (duration == 0) {
                duration++;
            }
            gActiveSequences[seqPlayId].mainVolume.target = val / 127.0f;
            if (gActiveSequences[seqPlayId].mainVolume.mod != gActiveSequences[seqPlayId].mainVolume.target) {
                gActiveSequences[seqPlayId].mainVolume.step =
                    (gActiveSequences[seqPlayId].mainVolume.mod - gActiveSequences[seqPlayId].mainVolume.target) /
                    duration;
                gActiveSequences[seqPlayId].mainVolume.timer = duration;
            }
            break;
        case 5:
            val = (seqCmd & 0xFFFF);
            duration = (seqCmd & 0xFF0000) >> 0xF;

            if (duration == 0) {
                duration++;
            }
            for (i = 0; i < 16; i++) {
                gActiveSequences[seqPlayId].channelMod[i].freq.target = val / 1000.0f;
                gActiveSequences[seqPlayId].channelMod[i].freq.step =
                    (gActiveSequences[seqPlayId].channelMod[i].freq.value -
                     gActiveSequences[seqPlayId].channelMod[i].freq.target) /
                    duration;
                gActiveSequences[seqPlayId].channelMod[i].freq.timer = duration;
            }
            gActiveSequences[seqPlayId].freqModChannelFlags = 0xFFFF;
            break;
        case 6:
            val = (seqCmd & 0xFF);
            channel = (seqCmd & 0xF00) >> 8;
            duration = (seqCmd & 0xFF0000) >> 0xF;

            if (duration == 0) {
                duration++;
            }

            gActiveSequences[seqPlayId].channelMod[channel].volume.target = val / 127.0f;
            if (gActiveSequences[seqPlayId].channelMod[channel].volume.value !=
                gActiveSequences[seqPlayId].channelMod[channel].volume.target) {
                gActiveSequences[seqPlayId].channelMod[channel].volume.step =
                    (gActiveSequences[seqPlayId].channelMod[channel].volume.value -
                     gActiveSequences[seqPlayId].channelMod[channel].volume.target) /
                    duration;
                gActiveSequences[seqPlayId].channelMod[channel].volume.timer = duration;
                gActiveSequences[seqPlayId].freqModChannelFlags |= 1 << channel;
            }
            break;
        case 7:
            val = seqCmd & 0xFF;
            ioPort = ((seqCmd & 0xFF0000) >> 0x10); // may be misnamed
            AUDIOCMD_SEQPLAYER_SET_IO(seqPlayId, ioPort, val);
            // AudioThread_QueueCmdS8(((seqPlayId & 0xFF) << 0x10) | 0x46000000 | (temp3 << 8), temp4);
            break;
        case 8:
            val = seqCmd & 0xFF;
            channel = (seqCmd & 0xF00) >> 8;

            ioPort = (seqCmd & 0xFF0000) >> 0x10;
            if (!(gActiveSequences[seqPlayId].channelPortMask & (1 << channel))) {
                AUDIOCMD_CHANNEL_SET_IO(seqPlayId, (u32) channel, ioPort, val);
                // AudioThread_QueueCmdS8(((seqPlayId & 0xFF) << 0x10) | 0x06000000 | ((temp_a2_5 & 0xFF) << 8) | temp3,
                // temp4);
            }
            break;
        case 9:
            channelDisableMask = seqCmd & 0xFFFF;
            gActiveSequences[seqPlayId].channelPortMask = channelDisableMask;
            break;
        case 10:
            channelDisableMask = seqCmd & 0xFFFF;

            flag = 1;
            for (i = 0; i < 16; i++) {
                AUDIOCMD_CHANNEL_SET_MUTE(seqPlayId, (u32) i, (channelDisableMask & flag) ? 1 : 0);
                flag <<= 1;
            }
            break;
        case 11:
            gActiveSequences[seqPlayId].tempoCmd = seqCmd;
            break;
        case 12:
            subOp = (seqCmd & 0xF00000) >> 20;
            if (subOp != 15) {
                found = gActiveSequences[seqPlayId].setupCmdNum++;
                if (found < 5) {
                    gActiveSequences[seqPlayId].setupCmd[found] = seqCmd;
                    gActiveSequences[seqPlayId].setupCmdTimer = 2;
                }
            } else {
                gActiveSequences[seqPlayId].setupCmdNum = 0;
            }
            break;
        case 14:
            val = seqCmd & 0xFF;
            subOp = (seqCmd & 0xF00) >> 8;

            switch (subOp) {
                case 0:
                    AUDIOCMD_GLOBAL_SET_SOUND_MODE(gSoundModeList[val]);
                    // AudioThread_QueueCmdS32(0xF0000000, gSoundModeList[temp11]);
                    break;
                case 1:
                    gStartSeqDisabled = val & 1;
                    break;
            }
            break;
        case 15:
            specId = seqCmd & 0xFF;
            gSfxChannelLayout = (seqCmd & 0xFF00) >> 8;
            sp61 = sNewAudioSpecId;
            sNewAudioSpecId = specId;

            if (sp61 != specId) {
                AudioThread_ResetAudioHeap(specId);
                func_8001DE1C(sp61);
                AUDIOCMD_GLOBAL_STOP_AUDIOCMDS();

            } else {
                Audio_StopSequence(SEQ_PLAYER_BGM, 1);
                Audio_StopSequence(SEQ_PLAYER_FANFARE, 1);
            }
            break;
    }
}

void Audio_QueueSeqCmd(s32 seqCmd) {
    gAudioSeqCmds[gSeqCmdWritePos] = seqCmd;
    gSeqCmdWritePos++;
}

void Audio_ProcessSeqCmds(void) {
    while (gSeqCmdWritePos != gSeqCmdReadPos) {
        Audio_ProcessSeqCmd(gAudioSeqCmds[gSeqCmdReadPos++]);
    }
}

u16 Audio_GetActiveSeqId(u8 seqPlayId) {
    if (!gSeqPlayers[seqPlayId].enabled) {
        return 0xFFFF;
    }
    return gActiveSequences[seqPlayId].seqId;
}

s32 Audio_SeqCmdNotQueued(s32 seqCmd) {
    s32 notFound = true;
    u8 i;

    for (i = gSeqCmdReadPos; i < gSeqCmdWritePos; i++) {
        if (seqCmd == gAudioSeqCmds[i]) {
            notFound = false;
            i = gSeqCmdWritePos;
        }
    }
    return notFound;
}

s32 Audio_SeqCmdValueNotQueued(s32 cmdVal, s32 cmdMask) {
    s32 notFound = true;
    u8 i;

    for (i = gSeqCmdReadPos; i < gSeqCmdWritePos; i++) {
        if (cmdVal == (gAudioSeqCmds[i] & cmdMask)) {
            notFound = false;
            i = gSeqCmdWritePos;
        }
    }
    return notFound;
}

void Audio_ResetSequenceRequests(u8 seqPlayId) {
    gNumSeqRequests[seqPlayId] = 0;
}

void func_800184EC(u8 seqPlayId, u8 setupOpDisable) {
    u8 i;

    for (i = 0; i < gActiveSequences[seqPlayId].setupCmdNum; i++) {
        u8 setupOp = ((gActiveSequences[seqPlayId].setupCmd[i] & 0xF00000) >> 20);

        if (setupOp == setupOpDisable) {
            gActiveSequences[seqPlayId].setupCmd[i] = 0xFF000000;
        }
    }
}

void Audio_SetSequenceFade(u8 seqPlayId, u8 fadeModId, u8 fadeMod, u8 fadeTime) {
    gActiveSequences[seqPlayId].mainVolume.fadeMod[fadeModId] = fadeMod;
    gActiveSequences[seqPlayId].mainVolume.fadeTimer = fadeTime;
    gActiveSequences[seqPlayId].mainVolume.fadeActive = true;
}

void Audio_UpdateActiveSequences(void) {
    u8 seqPlayId;
    u8 i;
    u8 tempoTimer;
    u8 channelId;
    u16 tempoTarget;
    u16 prevTempo;
    u16 seqId;
    u8 tempoOp;
    u8 setupSeqPlayId;
    u8 val1;
    u8 setupOp;
    u8 val2;
    u8 temp2;
    s32 temp;
    u32 cmd;
    f32 fadeMod;
    u32 sp70;
    s32 pad1;
    s32 pad2;

    for (seqPlayId = 0; seqPlayId < 4; seqPlayId++) {
        if ((gActiveSequences[seqPlayId].isWaitingForFonts != 0)) {
            switch ((s32) AudioThread_GetAsyncLoadStatus(&sp70)) {
                case SEQ_PLAYER_BGM + 1:
                case SEQ_PLAYER_FANFARE + 1:
                case SEQ_PLAYER_SFX + 1:
                case SEQ_PLAYER_VOICE + 1:
                    gActiveSequences[seqPlayId].isWaitingForFonts = 0;
                    Audio_ProcessSeqCmd(gActiveSequences[seqPlayId].startSeqCmd);
                    break;
            }
        }
        if (gActiveSequences[seqPlayId].mainVolume.fadeActive != 0) {
            fadeMod = 1.0f;
            for (i = 0; i < 3; i++) {
                fadeMod *= gActiveSequences[seqPlayId].mainVolume.fadeMod[i] / 127.0f;
            }
            SEQCMD_SET_SEQPLAYER_VOLUME(seqPlayId, gActiveSequences[seqPlayId].mainVolume.fadeTimer,
                                        (u8) (fadeMod * 127.0f));
            gActiveSequences[seqPlayId].mainVolume.fadeActive = false;
        }
        if (gActiveSequences[seqPlayId].mainVolume.timer != 0) {
            gActiveSequences[seqPlayId].mainVolume.timer--;
            if (gActiveSequences[seqPlayId].mainVolume.timer != 0) {
                gActiveSequences[seqPlayId].mainVolume.mod -= gActiveSequences[seqPlayId].mainVolume.step;
            } else {
                gActiveSequences[seqPlayId].mainVolume.mod = gActiveSequences[seqPlayId].mainVolume.target;
            }
            AUDIOCMD_SEQPLAYER_FADE_VOLUME_SCALE((u32) seqPlayId, gActiveSequences[seqPlayId].mainVolume.mod);
        }
        if (gActiveSequences[seqPlayId].tempoCmd != 0) {
            cmd = gActiveSequences[seqPlayId].tempoCmd;
            temp = cmd & 0xFFF;
            temp2 = (cmd & 0xFF0000) >> 0xF;
            tempoTimer = temp2;
            tempoTarget = temp;

            if (temp2 == 0) {
                tempoTimer = temp2 + 1;
            }
            if (gSeqPlayers[seqPlayId].enabled) {
                prevTempo = gSeqPlayers[seqPlayId].tempo / 48;
                tempoOp = ((cmd & 0xF000) >> 0xC);

                switch (tempoOp) {
                    case SEQCMD_SUB_OP_TEMPO_SPEED_UP:
                        tempoTarget = tempoTarget + prevTempo;
                        break;
                    case SEQCMD_SUB_OP_TEMPO_SLOW_DOWN:
                        if (tempoTarget < prevTempo) {
                            tempoTarget = prevTempo - tempoTarget;
                        }
                        break;
                    case SEQCMD_SUB_OP_TEMPO_SCALE:
                        tempoTarget = prevTempo * (tempoTarget / 100.0f);
                        break;
                    case SEQCMD_SUB_OP_TEMPO_RESET:
                        if (gActiveSequences[seqPlayId].tempoOriginal != 0) {
                            tempoTarget = gActiveSequences[seqPlayId].tempoOriginal;
                        } else {
                            tempoTarget = prevTempo;
                        }
                        break;
                }
                if (tempoTarget > 300) {
                    tempoTarget = 300;
                }
                if (!gActiveSequences[seqPlayId].tempoOriginal) {
                    gActiveSequences[seqPlayId].tempoOriginal = prevTempo;
                }
                gActiveSequences[seqPlayId].tempo.target = tempoTarget;
                gActiveSequences[seqPlayId].tempo.value = (s32) gSeqPlayers[seqPlayId].tempo / 48;

                gActiveSequences[seqPlayId].tempo.step =
                    (gActiveSequences[seqPlayId].tempo.value - gActiveSequences[seqPlayId].tempo.target) / tempoTimer;
                gActiveSequences[seqPlayId].tempo.timer = tempoTimer;
                gActiveSequences[seqPlayId].tempoCmd = 0;
            }
        }
        if (gActiveSequences[seqPlayId].tempo.timer != 0) {
            gActiveSequences[seqPlayId].tempo.timer--;
            if (gActiveSequences[seqPlayId].tempo.timer != 0) {
                gActiveSequences[seqPlayId].tempo.value -= gActiveSequences[seqPlayId].tempo.step;
            } else {
                gActiveSequences[seqPlayId].tempo.value = gActiveSequences[seqPlayId].tempo.target;
            }
            AUDIOCMD_SEQPLAYER_SET_TEMPO((u32) seqPlayId, (s32) gActiveSequences[seqPlayId].tempo.value);
        }
        if (gActiveSequences[seqPlayId].volChannelFlags != 0) {
            for (channelId = 0; channelId < 16; channelId++) {
                if (gActiveSequences[seqPlayId].channelMod[channelId].volume.timer != 0) {
                    gActiveSequences[seqPlayId].channelMod[channelId].volume.timer--;
                    if (gActiveSequences[seqPlayId].channelMod[channelId].volume.timer) {
                        gActiveSequences[seqPlayId].channelMod[channelId].volume.value -=
                            gActiveSequences[seqPlayId].channelMod[channelId].volume.step;
                    } else {
                        gActiveSequences[seqPlayId].channelMod[channelId].volume.value =
                            gActiveSequences[seqPlayId].channelMod[channelId].volume.target;
                        gActiveSequences[seqPlayId].volChannelFlags ^= 1 << channelId;
                    }
                    AUDIOCMD_CHANNEL_SET_VOL_SCALE((u32) seqPlayId, (u32) channelId,
                                                   gActiveSequences[seqPlayId].channelMod[channelId].volume.value);
                }
            }
        }
        if (gActiveSequences[seqPlayId].freqModChannelFlags != 0) {
            for (channelId = 0; channelId < 16; channelId++) {
                if (gActiveSequences[seqPlayId].channelMod[channelId].freq.timer != 0) {
                    gActiveSequences[seqPlayId].channelMod[channelId].freq.timer--;
                    if (gActiveSequences[seqPlayId].channelMod[channelId].freq.timer != 0) {
                        gActiveSequences[seqPlayId].channelMod[channelId].freq.value -=
                            gActiveSequences[seqPlayId].channelMod[channelId].freq.step;
                    } else {
                        gActiveSequences[seqPlayId].channelMod[channelId].freq.value =
                            gActiveSequences[seqPlayId].channelMod[channelId].freq.target;
                        gActiveSequences[seqPlayId].freqModChannelFlags ^= 1 << channelId;
                    }
                    AUDIOCMD_CHANNEL_SET_FREQ_SCALE((u32) seqPlayId, (u32) channelId,
                                                    gActiveSequences[seqPlayId].channelMod[channelId].freq.value);
                }
            }
        }
        if (gActiveSequences[seqPlayId].setupCmdNum == 0) {
            continue;
        }
        if (!Audio_SeqCmdValueNotQueued(SEQCMD_OP_MASK, SEQCMD_OP_RESET_AUDIO_HEAP << 28)) {
            gActiveSequences[seqPlayId].setupCmdNum = 0;
            break;
        }
        if (gActiveSequences[seqPlayId].setupCmdTimer != 0) {
            gActiveSequences[seqPlayId].setupCmdTimer--;
        } else if (!gSeqPlayers[seqPlayId].enabled) {
            for (i = 0; i < gActiveSequences[seqPlayId].setupCmdNum; i++) {
                setupOp = (gActiveSequences[seqPlayId].setupCmd[i] & 0xF00000) >> 0x14;

                setupSeqPlayId = (gActiveSequences[seqPlayId].setupCmd[i] & 0xF0000) >> 0x10;
                val2 = (gActiveSequences[seqPlayId].setupCmd[i] & 0xFF00) >> 8;
                val1 = gActiveSequences[seqPlayId].setupCmd[i] & 0xFF;
                switch (setupOp) {
                    case SEQCMD_SUB_OP_SETUP_RESTORE_SEQPLAYER_VOLUME:
                        Audio_SetSequenceFade(setupSeqPlayId, 1, 127, val2);
                        break;
                    case SEQCMD_SUB_OP_SETUP_SEQ_UNQUEUE:
                        SEQCMD_UNQUEUE_SEQUENCE(seqPlayId, 0, gActiveSequences[seqPlayId].seqId);
                        break;
                    case SEQCMD_SUB_OP_SETUP_RESTART_SEQ:
                        SEQCMD_PLAY_SEQUENCE(setupSeqPlayId, 1, 0, gActiveSequences[setupSeqPlayId].seqId);
                        gActiveSequences[setupSeqPlayId].mainVolume.fadeActive = true;
                        gActiveSequences[setupSeqPlayId].mainVolume.fadeMod[1] = 127;
                        break;
                    case SEQCMD_SUB_OP_SETUP_TEMPO_SCALE:
                        SEQCMD_SCALE_TEMPO(setupSeqPlayId, val2, val1);
                        break;
                    case SEQCMD_SUB_OP_SETUP_TEMPO_RESET:
                        SEQCMD_RESET_TEMPO(setupSeqPlayId, val1);
                        break;
                    case SEQCMD_SUB_OP_SETUP_PLAY_SEQ:
                        seqId = gActiveSequences[seqPlayId].setupCmd[i] & 0xFFFF;
                        SEQCMD_PLAY_SEQUENCE(setupSeqPlayId, gActiveSequences[setupSeqPlayId].setupFadeTimer, 0, seqId);
                        Audio_SetSequenceFade(setupSeqPlayId, 1, 127, 0);
                        gActiveSequences[setupSeqPlayId].setupFadeTimer = 0;
                        break;
                    case SEQCMD_SUB_OP_SETUP_SET_FADE_TIMER:
                        gActiveSequences[seqPlayId].setupFadeTimer = val2;
                        break;
                }
            }
            gActiveSequences[seqPlayId].setupCmdNum = 0;
        }
    }
}

void Audio_SetDelayedSeqCmd(u32 seqCmd, u16 delay) {
    u8 opcode = (seqCmd >> 0x1C);

    gDelayedSeqCmds[opcode].seqData = seqCmd;
    gDelayedSeqCmds[opcode].timer = delay;
    gDelayedSeqCmdFlags |= 1 << opcode;
}

void Audio_UpdateDelayedSeqCmds(void) {
    u8 opcode = 0;
    u16 flag = 1;
    u16 delayedCmdFlags = gDelayedSeqCmdFlags;

    while (delayedCmdFlags) {
        if (delayedCmdFlags & flag) {
            if (gDelayedSeqCmds[opcode].timer != 0) {
                gDelayedSeqCmds[opcode].timer--;
            } else {
                Audio_QueueSeqCmd(gDelayedSeqCmds[opcode].seqData);
                gDelayedSeqCmdFlags ^= flag;
            }
            delayedCmdFlags ^= flag;
        }
        opcode++;
        flag <<= 1;
    }
}

u8 func_80018FA4(void) {
    if (D_800C5D58 != 0) {
        if (D_800C5D58 == 1) {
            if (func_8001ED34() == 1) {
                D_800C5D58 = 0;
                AUDIOCMD_SEQPLAYER_SET_IO(SEQ_PLAYER_SFX, 0, gSfxChannelLayout);
                func_8001DD40();
            }
        } else if (D_800C5D58 == 2) {
            while (func_8001ED34() != 1) {
                ;
            }
            D_800C5D58 = 0;
            AUDIOCMD_SEQPLAYER_SET_IO(SEQ_PLAYER_SFX, 0, gSfxChannelLayout);
            func_8001DD40();
        }
    }
    return D_800C5D58;
}

void Audio_ResetActiveSequences(void) {
    u8 i;

    for (i = 0; i < 4; i++) {
        gNumSeqRequests[i] = 0;
        gActiveSequences[i].seqId = 0xFFFF;
        gActiveSequences[i].prevSeqId = 0xFFFF;
        gActiveSequences[i].tempo.timer = 0;
        gActiveSequences[i].tempoOriginal = 0;
        gActiveSequences[i].tempoCmd = 0;
        gActiveSequences[i].channelPortMask = 0;
        gActiveSequences[i].setupCmdNum = 0;
        gActiveSequences[i].setupFadeTimer = 0;
        gActiveSequences[i].freqModChannelFlags = 0;
        gActiveSequences[i].volChannelFlags = 0;
        gActiveSequences[i].mainVolume.fadeMod[2] = 127;
    }
}

void Audio_ResetActiveSequencesAndVolume(void) {
    u8 i;

    for (i = 0; i < 4; i++) {
        gActiveSequences[i].mainVolume.mod = 1.0f;
        gActiveSequences[i].mainVolume.timer = 0;
        gActiveSequences[i].mainVolume.fadeActive = false;
        gActiveSequences[i].mainVolume.fadeMod[0] = 127;
        gActiveSequences[i].mainVolume.fadeMod[1] = 127;
        gActiveSequences[i].mainVolume.fadeMod[2] = 127;
    }
    Audio_ResetActiveSequences();
}

void Audio_SetSfxBanksMute(u16 muteFlags) {
    u8 i;

    for (i = 0; i < 5; i++) {
        gSfxBankMuted[i] = (muteFlags & 1) ? true : false;
        muteFlags = muteFlags >> 1;
    }
}

void Audio_ClearBGMMute(u8 channelIndex) {
    D_800C5D24 &= (1 << channelIndex) ^ 0xFFFF;
    if (D_800C5D24 == 0) {
        Audio_SetSequenceFade(SEQ_PLAYER_BGM, 2, 127, 15);
    }
}

void Audio_PlaySfx(u32 sfxId, f32* sfxSource, u8 token, f32* freqMod, f32* volMod, s8* reverbAdd) {
    if (gSfxBankMuted[SFX_BANK_SHIFT(sfxId)] == 0) {
        SfxRequest* request = &gSfxRequests[gSfxRequestWriteIndex];

        request->sfxId = sfxId;
        request->pos = sfxSource;
        request->token = token;
        request->freqMod = freqMod;
        request->volMod = volMod;
        request->reverbAdd = reverbAdd;
        gSfxRequestWriteIndex++;
    }
}

void Audio_RemoveMatchingSfxRequests(u8 aspect, SfxBankEntry* data) {
    u8 i = gSfxRequestReadIndex;

    for (i; i != gSfxRequestWriteIndex; i++) {
        s32 found = false;
        SfxRequest* request = &gSfxRequests[i];

        switch (aspect) {
            case 0:
                if (SFX_BANK_MASK(request->sfxId) == SFX_BANK_MASK(data->sfxId)) {
                    found = true;
                }
                break;
            case 1:
                if ((SFX_BANK_MASK(request->sfxId) == SFX_BANK_MASK(data->sfxId)) && (&request->pos[0] == data->xPos)) {
                    found = true;
                }
                break;
            case 2:
                if (&request->pos[0] == data->xPos) {
                    found = true;
                }
                break;
            case 3:
                if ((&request->pos[0] == data->xPos) && (request->sfxId == data->sfxId)) {
                    found = true;
                }
                break;
            case 4:
                if ((request->token == data->token) && (request->sfxId == data->sfxId)) {
                    found = true;
                }
                break;
            case 5:
                if (request->sfxId == data->sfxId) {
                    found = true;
                }
                break;
        }
        if (found) {
            request->sfxId = 0;
        }
    }
}

void Audio_ProcessSfxRequest(void) {
    SfxRequest* request = &gSfxRequests[gSfxRequestReadIndex];
    u8 next;
    s32 bankId;
    u8 evict;
    u32 sfxId;
    u8 count;
    SfxBankEntry* entry;

    if (request->sfxId == 0) {
        return;
    }
    bankId = SFX_BANK(request->sfxId);
    next = gSfxBanks[bankId][0].next;
    count = 0;
    while ((next != 0xFF) && (next != 0)) {
        if (request->pos == gSfxBanks[bankId][next].xPos) {
            if (request->sfxId == gSfxBanks[bankId][next].sfxId) {
                count = gUsedChannelsPerBank[gSfxChannelLayout][bankId];
            } else {
                if (count == 0) {
                    evict = next;
                    sfxId = gSfxBanks[bankId][next].sfxId;
                } else if (SFX_IMPORTANCE_MASK(gSfxBanks[bankId][next].sfxId) < SFX_IMPORTANCE_MASK(sfxId)) {
                    evict = next;
                    sfxId = gSfxBanks[bankId][next].sfxId;
                }
                count++;
                if (count == gUsedChannelsPerBank[gSfxChannelLayout][bankId]) {
                    if (SFX_IMPORTANCE_MASK(request->sfxId) >= SFX_IMPORTANCE_MASK(sfxId)) {
                        next = evict;
                    } else {
                        next = 0;
                    }
                }
            }
            if (count == gUsedChannelsPerBank[gSfxChannelLayout][bankId]) {
                if (SFX_BIT04(request->sfxId) || SFX_BIT13(request->sfxId) || (next == evict)) {
                    if (SFX_BIT12(gSfxBanks[bankId][next].sfxId) && (gSfxBanks[bankId][next].state != 1)) {
                        Audio_ClearBGMMute(gSfxBanks[bankId][next].channelIndex);
                    }
                    gSfxBanks[bankId][next].token = request->token;
                    gSfxBanks[bankId][next].sfxId = request->sfxId;
                    gSfxBanks[bankId][next].state = SFX_STATE(request->sfxId);
                    gSfxBanks[bankId][next].freshness = 2;
                    gSfxBanks[bankId][next].freqMod = request->freqMod;
                    gSfxBanks[bankId][next].volMod = request->volMod;
                    gSfxBanks[bankId][next].reverbAdd = request->reverbAdd;
                }
                next = 0;
            }
        }
        if (next != 0) {
            next = gSfxBanks[bankId][next].next;
        }
    }
    if ((gSfxBanks[bankId][gSfxBankFreeListStart[bankId]].next != 0xFF) && (next != 0)) {
        next = gSfxBankFreeListStart[bankId];
        entry = &gSfxBanks[bankId][next];
        entry->xPos = &request->pos[0];
        entry->yPos = &request->pos[1];
        entry->zPos = &request->pos[2];
        entry->token = request->token;
        entry->freqMod = request->freqMod;
        entry->volMod = request->volMod;
        entry->reverbAdd = request->reverbAdd;
        entry->sfxId = request->sfxId;
        entry->state = SFX_STATE(request->sfxId);
        entry->freshness = 2;

        entry->prev = gSfxBankListEnd[bankId];

        gSfxBanks[bankId][gSfxBankListEnd[bankId]].next = gSfxBankFreeListStart[bankId];
        gSfxBankListEnd[bankId] = gSfxBankFreeListStart[bankId];
        gSfxBankFreeListStart[bankId] = gSfxBanks[bankId][gSfxBankFreeListStart[bankId]].next;
        gSfxBanks[bankId][gSfxBankFreeListStart[bankId]].prev = 0xFF;

        entry->next = 0xFF;
    }
}

void Audio_RemoveSfxBankEntry(u8 bankId, u8 entryIndex) {
    SfxBankEntry* sfxBank = gSfxBanks[bankId];
    s32 pad;

    if (SFX_BIT12(sfxBank[entryIndex].sfxId)) {
        Audio_ClearBGMMute(sfxBank[entryIndex].channelIndex);
    }
    if (entryIndex == gSfxBankListEnd[bankId]) {
        gSfxBankListEnd[bankId] = sfxBank[entryIndex].prev;
    } else {
        sfxBank[sfxBank[entryIndex].next].prev = sfxBank[entryIndex].prev;
    }
    sfxBank[sfxBank[entryIndex].prev].next = sfxBank[entryIndex].next;
    sfxBank[entryIndex].next = gSfxBankFreeListStart[bankId];
    sfxBank[entryIndex].prev = 0xFF;

    sfxBank[gSfxBankFreeListStart[bankId]].prev = entryIndex;
    gSfxBankFreeListStart[bankId] = entryIndex;
    sfxBank[entryIndex].state = 0;
}

void Audio_ChooseActiveSfx(u8 bankId) {
    u8 numChosenSfx = 0;
    u8 numChannels;
    u8 k;
    u8 i;
    SfxBankEntry* entry;
    ActiveSfx* activeSfx;
    f32 maxRangeSq;
    f32 yScaled;
    ActiveSfx chosenSfx[8];
    u8 chosenEntryIndex;
    u8 j;
    u8 entryIndex;
    u8 needNewSfx;
    s32 importance;

    for (i = 0; i < 8; i++) {
        chosenSfx[i].priority = INT32_MAX;
        chosenSfx[i].entryIndex = 0xFF;
    }
    entryIndex = gSfxBanks[bankId]->next;
    k = 0;
    while (entryIndex != 0xFF) {
        if ((gSfxBanks[bankId][entryIndex].state == 1) &&
            (SFX_BIT04(gSfxBanks[bankId][entryIndex].sfxId) == SFX_BIT04(-1))) {
            gSfxBanks[bankId][entryIndex].freshness--;
        }
        if (gSfxBanks[bankId][entryIndex].freshness == 0) {
            Audio_RemoveSfxBankEntry(bankId, entryIndex);
        } else if (gSfxBanks[bankId][entryIndex].state != 0) {
            entry = &gSfxBanks[bankId][entryIndex];

            if (&entry->xPos[0] == gDefaultSfxSource) {
                entry->distance = 0.0f;
            } else {
                yScaled = *entry->yPos / 2.5f;
                entry->distance = SQ(*entry->xPos) + SQ(yScaled) + SQ(*entry->zPos);
            }
            importance = SFX_IMPORTANCE(entry->sfxId);
            if (SFX_BIT11(entry->sfxId)) {
                entry->priority = SQ(0xFF - importance) * SQ(76);
            } else {
                entry->priority = (u32) entry->distance + SQ(0xFF - importance) * SQ(76);
                if (*entry->zPos > 0.0f) {
                    entry->priority += (s32) (*entry->zPos * 6.0f);
                }
            }
            if (SFX_RANGE(entry->sfxId) != 0) {
                maxRangeSq = SQ(33000.0f) / SQ((s32) SFX_RANGE(entry->sfxId));
            } else {
                maxRangeSq = SQ(100000.0f);
            }
            if (entry->distance > maxRangeSq) {
                if (entry->state == 4) {
                    AUDIOCMD_CHANNEL_SET_IO(2, entry->channelIndex, 0, 0);
                    if (SFX_BIT04(entry->sfxId)) {
                        Audio_RemoveSfxBankEntry(bankId, entryIndex);
                        entryIndex = k;
                    }
                }
            } else {
                numChannels = gChannelsPerBank[gSfxChannelLayout][bankId];
                for (i = 0; i < numChannels; i++) {
                    if (chosenSfx[i].priority >= entry->priority) {
                        if (numChosenSfx < gChannelsPerBank[gSfxChannelLayout][bankId]) {
                            numChosenSfx++;
                        }
                        for (j = numChannels - 1; j > i; j--) {
                            chosenSfx[j].priority = chosenSfx[j - 1].priority;
                            chosenSfx[j].entryIndex = chosenSfx[j - 1].entryIndex;
                        }
                        chosenSfx[i].priority = entry->priority;
                        chosenSfx[i].entryIndex = entryIndex;
                        i = numChannels;
                    }
                }
            }
            k = entryIndex;
        }
        entryIndex = gSfxBanks[bankId][k].next;
    }

    for (i = 0; i < numChosenSfx; i++) {
        if (gSfxBanks[bankId][chosenSfx[i].entryIndex].state == 1) {
            gSfxBanks[bankId][chosenSfx[i].entryIndex].state = 2;
        } else if (gSfxBanks[bankId][chosenSfx[i].entryIndex].state == 4) {
            gSfxBanks[bankId][chosenSfx[i].entryIndex].state = 3;
        }
    }
    numChannels = gChannelsPerBank[gSfxChannelLayout][bankId];
    for (i = 0; i < numChannels; i++) {
        activeSfx = &gActiveSfx[bankId][i];
        needNewSfx = 0;
        if (activeSfx->entryIndex == 0xFF) {
            needNewSfx = 1;
        } else if (gSfxBanks[bankId][activeSfx->entryIndex].state == 4) {
            if (SFX_BIT04(gSfxBanks[bankId][activeSfx->entryIndex].sfxId)) {
                Audio_RemoveSfxBankEntry(bankId, activeSfx->entryIndex);
            } else {
                gSfxBanks[bankId][activeSfx->entryIndex].state = 1;
            }
            needNewSfx = 1;
        } else if (gSfxBanks[bankId][activeSfx->entryIndex].state == 0) {
            activeSfx->entryIndex = 0xFF;
            needNewSfx = 1;
        } else {
            for (j = 0; j < numChannels; j++) {
                if (activeSfx->entryIndex == chosenSfx[j].entryIndex) {
                    chosenSfx[j].entryIndex = 0xFF;
                    j = numChannels;
                }
            }
            numChosenSfx--;
        }

        if (needNewSfx == 1) {
            for (j = 0; j < numChannels; j++) {
                chosenEntryIndex = chosenSfx[j].entryIndex;
                if ((chosenEntryIndex != 0xFF) && (gSfxBanks[bankId][chosenEntryIndex].state != 3)) {
                    for (k = 0; k < numChannels; k++) {
                        if (chosenEntryIndex == gActiveSfx[bankId][k].entryIndex) {
                            needNewSfx = 0;
                            k = numChannels;
                        }
                    }
                    if (needNewSfx == 1) {
                        activeSfx->entryIndex = chosenEntryIndex;
                        chosenSfx[j].entryIndex = 0xFF;
                        j = numChannels + 1;
                        numChosenSfx--;
                    }
                }
            }
            if (j == numChannels) {
                activeSfx->entryIndex = 0xFF;
            }
        }
    }
}

void Audio_PlayActiveSfx(u8 bankId) {
    u8 i;

    for (i = 0; i < gChannelsPerBank[gSfxChannelLayout][bankId]; i++) {
        u8 entryIndex = gActiveSfx[bankId][i].entryIndex;

        if (entryIndex != 0xFF) {
            SfxBankEntry* entry = &gSfxBanks[bankId][entryIndex];
            SequenceChannel* channel = gSeqPlayers[SEQ_PLAYER_SFX].channels[gCurSfxPlayerChannelIndex];
            s32 pad;

            if (entry->state == 2) {
                entry->channelIndex = gCurSfxPlayerChannelIndex;
                if (SFX_BIT12(entry->sfxId)) {
                    D_800C5D24 |= 1 << gCurSfxPlayerChannelIndex;
                    Audio_SetSequenceFade(SEQ_PLAYER_BGM, 2, 64, 15);
                }
                Audio_SetSfxProperties(bankId, entryIndex, gCurSfxPlayerChannelIndex);
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, gCurSfxPlayerChannelIndex, 0, 1);
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, gCurSfxPlayerChannelIndex, 4, SFX_INDEX(entry->sfxId) & 0xFF);
                entry->state = 4;
            } else if ((u8) channel->seqScriptIO[7] == 0x80) {
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, gCurSfxPlayerChannelIndex, 7, 0);
                Audio_RemoveSfxBankEntry(bankId, entryIndex);
            } else if (entry->state == 3) {
                Audio_SetSfxProperties(bankId, entryIndex, gCurSfxPlayerChannelIndex);
                entry->state = 4;
            }
        }
        gCurSfxPlayerChannelIndex++;
    }
}

void Audio_KillSfxByBank(u8 bankId) {
    SfxBankEntry* entry;
    u8 next = gSfxBanks[bankId][0].next;

    SfxBankEntry cmp;

    while (next != 0xFF) {
        entry = &gSfxBanks[bankId][next];
        if (entry->state >= 3) {
            AUDIOCMD_CHANNEL_SET_IO(2, entry->channelIndex, 0, 0);
        }
        if (entry->state != 0) {
            Audio_RemoveSfxBankEntry(bankId, next);
        }
        next = gSfxBanks[bankId][0].next;
    }
    cmp.sfxId = bankId << 28;
    Audio_RemoveMatchingSfxRequests(0, &cmp);
}

void Audio_StopSfxByBankAndSource(u8 bankId, f32* sfxSource) {
    SfxBankEntry* entry;
    u8 curIndex = 0;
    u8 nextIndex = gSfxBanks[bankId][0].next;

    while (nextIndex != 0xFF) {
        entry = &gSfxBanks[bankId][nextIndex];
        if (entry->xPos == sfxSource) {
            if (entry->state >= 3) {
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, entry->channelIndex, 0, 0);
            }
            if (entry->state != 0) {
                Audio_RemoveSfxBankEntry(bankId, nextIndex);
            }
        } else {
            curIndex = nextIndex;
        }
        nextIndex = gSfxBanks[bankId][curIndex].next;
    }
}

void Audio_KillSfxByBankAndSource(u8 bankId, f32* sfxSource) {
    SfxBankEntry sp18;

    Audio_StopSfxByBankAndSource(bankId, sfxSource);
    sp18.sfxId = bankId << 0x1C;
    sp18.xPos = sfxSource;
    Audio_RemoveMatchingSfxRequests(1, &sp18);
}

void Audio_KillSfxBySource(f32* sfxSource) {
    u8 i;
    SfxBankEntry sp24;

    for (i = 0; i < 5; i++) {
        Audio_StopSfxByBankAndSource(i, sfxSource);
    }
    sp24.xPos = sfxSource;
    Audio_RemoveMatchingSfxRequests(2, &sp24);
}

void Audio_KillSfxBySourceAndId(f32* sfxSource, u32 sfxId) {
    u32 bankId = SFX_BANK(sfxId);
    u8 next = gSfxBanks[bankId][0].next;
    u8 current = 0;
    SfxBankEntry cmp;

    while (next != 0xFF) {
        if ((gSfxBanks[bankId][next].xPos == sfxSource) && (gSfxBanks[bankId][next].sfxId == sfxId)) {
            if (gSfxBanks[bankId][next].state >= 3) {
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, gSfxBanks[bankId][next].channelIndex, 0, 0);
            }
            if (gSfxBanks[bankId][next].state != 0) {
                Audio_RemoveSfxBankEntry(bankId, next);
            }
            next = 0xFF;
        } else {
            current = next;
        }
        if (next != 0xFF) {
            next = gSfxBanks[bankId][current].next;
        }
    }
    cmp.sfxId = sfxId;
    cmp.xPos = sfxSource;
    Audio_RemoveMatchingSfxRequests(3, &cmp);
}

void Audio_KillSfxByTokenAndId(u8 token, u32 sfxId) {
    u32 bankId = SFX_BANK(sfxId);
    u8 next = gSfxBanks[bankId][0].next;
    u8 current = 0;
    SfxBankEntry cmp;

    while (next != 0xFF) {
        if ((gSfxBanks[bankId][next].token == token) && (gSfxBanks[bankId][next].sfxId == sfxId)) {
            if (gSfxBanks[bankId][next].state >= 3) {
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, gSfxBanks[bankId][next].channelIndex, 0, 0);
            }
            if (gSfxBanks[bankId][next].state != 0) {
                Audio_RemoveSfxBankEntry(bankId, next);
            }
        } else {
            current = next;
        }
        if (next != 0xFF) {
            next = gSfxBanks[bankId][current].next;
        }
    }
    cmp.token = token;
    cmp.sfxId = sfxId;
    Audio_RemoveMatchingSfxRequests(4, &cmp);
}

void Audio_KillSfxById(u32 sfxId) {
    u32 bankId = SFX_BANK(sfxId);
    u8 next = gSfxBanks[bankId][0].next;
    u8 current = 0;
    SfxBankEntry cmp;

    while (next != 0xFF) {
        if (sfxId == gSfxBanks[bankId][next].sfxId) {
            if (gSfxBanks[bankId][next].state >= 3) {
                AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, gSfxBanks[bankId][next].channelIndex, 0, 0);
            }
            if (gSfxBanks[bankId][next].state != 0) {
                Audio_RemoveSfxBankEntry(bankId, next);
            }
        } else {
            current = next;
        }
        next = gSfxBanks[bankId][current].next;
    }
    cmp.sfxId = sfxId;
    Audio_RemoveMatchingSfxRequests(5, &cmp);
}

void Audio_ProcessSfxRequests(void) {
    while (gSfxRequestWriteIndex != gSfxRequestReadIndex) {
        Audio_ProcessSfxRequest();
        gSfxRequestReadIndex++;
    }
}

void Audio_SetSfxVolumeMod(u8 bankId, u8 target, u16 timer) {
    Modulation* scale = &gSfxVolumeMods[bankId];

    if (timer == 0) {
        timer++;
    }

    scale->target = target / 127.0f;
    scale->timer = timer;
    scale->step = (scale->value - scale->target) / timer;
}

void Audio_UpdateSfxVolumeMod(u8 bankId) {
    Modulation* scale = &gSfxVolumeMods[bankId];

    if (scale->timer != 0) {
        scale->timer--;
        if (scale->timer != 0) {
            scale->value -= scale->step;
        } else {
            scale->value = scale->target;
        }
    }
}

void Audio_PlayAllSfx(void) {
    u8 bankId;

    if (gSeqPlayers[SEQ_PLAYER_SFX].channels[0] != &gSeqChannelNone) {
        gCurSfxPlayerChannelIndex = 0;
        for (bankId = 0; bankId < 5; bankId++) {
            Audio_ChooseActiveSfx(bankId);
            Audio_PlayActiveSfx(bankId);
            Audio_UpdateSfxVolumeMod(bankId);
        }
    }
}

void Audio_ResetSfx(void) {
    u8 i;
    u8 j;

    gSfxRequestWriteIndex = 0;
    gSfxRequestReadIndex = 0;
    D_800C5D24 = 0;
    for (i = 0; i < 5; i++) {
        gSfxBankListEnd[i] = 0;
        gSfxBankFreeListStart[i] = 1;
        gSfxBankUnused[i] = 0;
        gSfxBankMuted[i] = 0;
        gSfxVolumeMods[i].value = 1.0f;
        gSfxVolumeMods[i].timer = 0;
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            gActiveSfx[i][j].entryIndex = 0xFF;
        }
    }
    for (i = 0; i < 5; i++) {
        gSfxBanks[i][0].prev = 0xFF;
        gSfxBanks[i][0].next = 0xFF;
        for (j = 1; j < 19; j++) {
            gSfxBanks[i][j].prev = j - 1;
            gSfxBanks[i][j].next = j + 1;
        }
        gSfxBanks[i][j].prev = j - 1;
        gSfxBanks[i][j].next = 0xFF;
    }
}

void Audio_PlayVoice(s32 msgId) {
    sCurrentVoiceId = sNextVoiceId = msgId;
    sSetNextVoiceId = true;
}

void Audio_PlayVoiceWithoutBGM(u32 msgId) {
    sMuteBgmForVoice = true;
    Audio_SetSequenceFade(SEQ_PLAYER_BGM, 2, 64, 15);
    Audio_PlayVoice(msgId);
}

void Audio_UpdateVoice(void) {
    s8 voiceBank;
    u16 voiceId;
    u8 voiceIdHi;
    u8 voiceIdLo;

    if (sSetNextVoiceId) {
        voiceBank = sNextVoiceId / 1000;
        voiceId = sNextVoiceId % 1000;
        voiceIdHi = voiceId / 256;
        voiceIdLo = voiceId % 256;
        AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_VOICE, 15, 0, 1);
        AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_VOICE, 15, 4, voiceBank);
        AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_VOICE, 15, 5, voiceIdHi);
        AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_VOICE, 15, 6, voiceIdLo);
        sSetNextVoiceId = false;
    } else if ((sMuteBgmForVoice) && (Audio_GetCurrentVoice() == 0)) {
        Audio_SetSequenceFade(SEQ_PLAYER_BGM, 2, 127, 15);
        sMuteBgmForVoice = false;
    }
}

void Audio_ClearVoice(void) {
    sCurrentVoiceId = 0;
    sNextVoiceId = 1;
    sSetNextVoiceId = true;
}

s32 Audio_GetCurrentVoice(void) {
    if (gSeqPlayers[SEQ_PLAYER_VOICE].channels[15] == &gSeqChannelNone) {
        return 0;
    }
    if (gSeqPlayers[SEQ_PLAYER_VOICE].channels[15]->seqScriptIO[1] == 1) {
        if (sCurrentVoiceId < 4) {
            return 0;
        } else {
            return sCurrentVoiceId;
        }
    }
    return 0;
}

s32 Audio_GetCurrentVoiceStatus(void) {
    SequenceChannel* channel = gSeqPlayers[SEQ_PLAYER_VOICE].channels[15];
    SequenceLayer* layer = channel->layers[0];

    if ((channel == &gSeqChannelNone) || (layer == NULL) || (channel->seqScriptIO[1] != 1)) {
        return 0;
    }
    if (layer->note != NULL) {
        if (layer != layer->note->playbackState.parentLayer) {
            return 2;
        } else {
            return 1;
        }
    }
    return 0;
}

void func_8001AF40(u8 unkVoiceParam) {
    D_800C7390 = unkVoiceParam;
}

void func_8001AF50(void) {
    if (D_800C7390 != 0xFF) {
        AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_VOICE, 14, 0, D_800C7390);
        D_800C7390 = 0xFF;
    }
}

void Audio_ResetPlayerFreqMods(void) {
    u8 i;
    u8 j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            gPlayerNoise[i].freqMod[j].value = 1.0f;
            gPlayerNoise[i].freqMod[j].timer = 0;
            gPlayerNoise[i].freqMod[j].boost = 0;
            gPlayerNoise[i].freqMod[j].brake = 0;
        }
    }
}

void Audio_UpdateArwingNoise(u8 playerId) {
    f32 freqMod;
    u8 i;

    if (gPlayer[playerId].sfx.boost) {
        gPlayerNoise[playerId].freqMod[0].target = 1.5f;
        gPlayerNoise[playerId].freqMod[0].timer = 18;
        gPlayerNoise[playerId].freqMod[0].step =
            (gPlayerNoise[playerId].freqMod[0].target - gPlayerNoise[playerId].freqMod[0].value) / 18;
        gPlayerNoise[playerId].freqMod[0].boost = true;
    } else if (gPlayerNoise[playerId].freqMod[0].boost) {
        gPlayerNoise[playerId].freqMod[0].boost = false;
        gPlayerNoise[playerId].freqMod[0].timer = 1;
    }
    if (gPlayer[playerId].sfx.brake) {
        gPlayerNoise[playerId].freqMod[0].target = 0.65f;
        gPlayerNoise[playerId].freqMod[0].timer = 20;
        gPlayerNoise[playerId].freqMod[0].step =
            (gPlayerNoise[playerId].freqMod[0].target - gPlayerNoise[playerId].freqMod[0].value) / 20;
        gPlayerNoise[playerId].freqMod[0].brake = true;
    } else if (gPlayerNoise[playerId].freqMod[0].brake) {
        gPlayerNoise[playerId].freqMod[0].brake = false;
        gPlayerNoise[playerId].freqMod[0].timer = 1;
    }
    if ((gPlayer[playerId].sfx.bank != 0) && (gPlayer[playerId].sfx.zRot < 45.0f)) {
        gPlayerNoise[playerId].freqMod[2].target = 1.25f;
        gPlayerNoise[playerId].freqMod[2].timer = 10;
        gPlayerNoise[playerId].freqMod[2].step =
            (gPlayerNoise[playerId].freqMod[2].target - gPlayerNoise[playerId].freqMod[2].value) / 10;
    }
    if (gPlayer[playerId].sfx.roll != 0) {
        Audio_PlaySfx(0x09000012, gPlayer[playerId].sfx.srcPos, playerId, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        gPlayerNoise[playerId].freqMod[1].target = 1.65f;
        gPlayerNoise[playerId].freqMod[1].timer = 8;
        gPlayerNoise[playerId].freqMod[1].step =
            (gPlayerNoise[playerId].freqMod[1].target - gPlayerNoise[playerId].freqMod[1].value) / 8;
    }
    if (ABS(gPlayer[playerId].sfx.yVel) > 2.0f) {
        gPlayerNoise[playerId].freqMod[3].target = 1.25f;
        gPlayerNoise[playerId].freqMod[3].timer = 15;
        gPlayerNoise[playerId].freqMod[3].step =
            (gPlayerNoise[playerId].freqMod[3].target - gPlayerNoise[playerId].freqMod[3].value) / 15;
        gPlayerNoise[playerId].freqMod[3].boost = true;
    } else if (gPlayerNoise[playerId].freqMod[3].boost) {
        gPlayerNoise[playerId].freqMod[3].boost = false;
        gPlayerNoise[playerId].freqMod[3].timer = 1;
    }
    if (gPlayerNoise[playerId].freqMod[4].timer == 0) {
        gPlayerNoise[playerId].freqMod[4].target = (((f32) (gAudioRandom % 0x10000) / 32768.0) * 0.15f) + 1.0f - 0.15f;
        gPlayerNoise[playerId].freqMod[4].timer = 16 + (gAudioRandom >> 27);
        gPlayerNoise[playerId].freqMod[4].step =
            (gPlayerNoise[playerId].freqMod[4].target - gPlayerNoise[playerId].freqMod[3].value) /
            gPlayerNoise[playerId].freqMod[4].timer;
    }
    for (i = 0; i < 5; i++) {
        if (gPlayerNoise[playerId].freqMod[i].timer != 0) {
            gPlayerNoise[playerId].freqMod[i].timer--;
            gPlayerNoise[playerId].freqMod[i].value += gPlayerNoise[playerId].freqMod[i].step;
            if ((gPlayerNoise[playerId].freqMod[i].timer == 0) && (gPlayerNoise[playerId].freqMod[i].target != 1.0f)) {
                gPlayerNoise[playerId].freqMod[i].target = 1.0f;
                gPlayerNoise[playerId].freqMod[i].timer = D_800C5E58[i];
                gPlayerNoise[playerId].freqMod[i].step =
                    (1.0f - gPlayerNoise[playerId].freqMod[i].value) / D_800C5E58[i];
            }
        }
    }
    freqMod = 1.0f;
    for (i = 0; i < 5; i++) {
        freqMod *= gPlayerNoise[playerId].freqMod[i].value;
    }
    if (freqMod >= 4.0f) {
        freqMod = 4.0f;
    }
    gPlayerNoise[playerId].totalMod = freqMod;
}

void Audio_UpdateLandmasterNoise(u8 playerId) {
    f32 freqMod;
    u8 i;

    if ((gPlayer[playerId].sfx.bank != 0) && (gPlayer[playerId].sfx.zRot < 45.0f)) {
        gPlayerNoise[playerId].freqMod[2].timer = 10;
        gPlayerNoise[playerId].freqMod[2].target = 1.25f;
        gPlayerNoise[playerId].freqMod[2].step = (1.25f - gPlayerNoise[playerId].freqMod[2].value) / 10;
    }
    if (gPlayer[playerId].sfx.roll != 0) {
        gPlayerNoise[playerId].freqMod[1].timer = 8;
        gPlayerNoise[playerId].freqMod[1].target = 1.65f;
        gPlayerNoise[playerId].freqMod[1].step = (1.65f - gPlayerNoise[playerId].freqMod[1].value) / 8;
    }
    if (ABS(gPlayer[playerId].sfx.yVel) > 2.0f) {
        gPlayerNoise[playerId].freqMod[3].target = 1.25f;
        gPlayerNoise[playerId].freqMod[3].timer = 15;
        gPlayerNoise[playerId].freqMod[3].boost = true;
        gPlayerNoise[playerId].freqMod[3].step = (1.25f - gPlayerNoise[playerId].freqMod[3].value) / 15;
    } else if (gPlayerNoise[playerId].freqMod[3].boost) {
        gPlayerNoise[playerId].freqMod[3].boost = false;
        gPlayerNoise[playerId].freqMod[3].timer = 1;
    }
    for (i = 0; i < 5; i++) {
        if (gPlayerNoise[playerId].freqMod[i].timer != 0) {
            gPlayerNoise[playerId].freqMod[i].timer--;
            gPlayerNoise[playerId].freqMod[i].value += gPlayerNoise[playerId].freqMod[i].step;
            if ((gPlayerNoise[playerId].freqMod[i].timer == 0) && (gPlayerNoise[playerId].freqMod[i].target != 1.0f)) {
                gPlayerNoise[playerId].freqMod[i].target = 1.0f;
                gPlayerNoise[playerId].freqMod[i].timer = D_800C5E58[i];
                gPlayerNoise[playerId].freqMod[i].step =
                    (1.0f - gPlayerNoise[playerId].freqMod[i].value) / D_800C5E58[i];
            }
        }
    }
    freqMod = 1.0f;
    for (i = 0; i < 5; i++) {
        freqMod *= gPlayerNoise[playerId].freqMod[i].value;
    }
    if (ABS(gPlayer[playerId].pos.y) < 600.0f) {
        freqMod += (gPlayer[playerId].pos.y / 600.0f);
    } else {
        freqMod += 1.0f;
    }
    if (gPlayer[playerId].unk_0D0 > 25.0f) {
        freqMod += 0.5f;
    } else if (gPlayer[playerId].unk_0D0 < 5.0f) {
        freqMod -= 0.5f;
    } else {
        freqMod += (gPlayer[playerId].unk_0D0 - 15.0f) * 0.05f;
    }
    if (freqMod > 2.0f) {
        freqMod = 2.0f;
    }
    gPlayerNoise[playerId].totalMod = freqMod;
}

void Audio_UpdateBlueMarineNoise(u8 playerId) {
    u8 i;
    f32 freqMod;

    if ((gPlayer[playerId].sfx.bank != 0) && (gPlayer[playerId].sfx.zRot < 45.0f)) {
        gPlayerNoise[playerId].freqMod[2].timer = 10;
        gPlayerNoise[playerId].freqMod[2].target = 1.1f;
        gPlayerNoise[playerId].freqMod[2].step = (1.1f - gPlayerNoise[playerId].freqMod[2].value) / 10;
    }
    if (gPlayer[playerId].sfx.roll != 0) {
        Audio_PlaySfx(0x09000017, gPlayer[playerId].sfx.srcPos, playerId, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        gPlayerNoise[playerId].freqMod[1].timer = 8;
        gPlayerNoise[playerId].freqMod[1].target = 1.2f;
        gPlayerNoise[playerId].freqMod[1].step = (1.2f - gPlayerNoise[playerId].freqMod[1].value) / 8;
    }
    if (ABS(gPlayer[playerId].sfx.yVel) > 2.0f) {
        gPlayerNoise[playerId].freqMod[3].timer = 15;
        gPlayerNoise[playerId].freqMod[3].boost = true;
        gPlayerNoise[playerId].freqMod[3].target = 1.12f;
        gPlayerNoise[playerId].freqMod[3].step = (1.12f - gPlayerNoise[playerId].freqMod[3].value) / 15;
    } else if (gPlayerNoise[playerId].freqMod[3].boost) {
        gPlayerNoise[playerId].freqMod[3].boost = false;
        gPlayerNoise[playerId].freqMod[3].timer = 1;
    }
    for (i = 0; i < 5; i++) {
        if (gPlayerNoise[playerId].freqMod[i].timer != 0) {
            gPlayerNoise[playerId].freqMod[i].timer--;
            gPlayerNoise[playerId].freqMod[i].value += gPlayerNoise[playerId].freqMod[i].step;
            if ((gPlayerNoise[playerId].freqMod[i].timer == 0) && (gPlayerNoise[playerId].freqMod[i].target != 1.0f)) {
                gPlayerNoise[playerId].freqMod[i].target = 1.0f;
                gPlayerNoise[playerId].freqMod[i].timer = D_800C5E58[i];
                gPlayerNoise[playerId].freqMod[i].step =
                    (1.0f - gPlayerNoise[playerId].freqMod[i].value) / D_800C5E58[i];
            }
        }
    }
    freqMod = 1.0f;

    for (i = 0; i < 5; i++) {
        freqMod *= gPlayerNoise[playerId].freqMod[i].value;
    }
    if (freqMod > 2.0f) {
        freqMod = 2.0f;
    }
    gPlayerNoise[playerId].totalMod = freqMod;
}

void Audio_UpdatePlayerFreqMod(void) {
    u8 playerId;

    for (playerId = 0; playerId < 4; playerId++) {
        switch (gPlayerNoise[playerId].form) {
            case FORM_ARWING:
                Audio_UpdateArwingNoise(playerId);
                gPlayerNoise[playerId].totalMod *=
                    Audio_UpdateDopplerShift(gPlayer[playerId].sfx.srcPos, gPlayer[playerId].sfx.srcVel, 150.0f,
                                             &gPlayerNoise[playerId].dopplerShift);
                break;
            case FORM_LANDMASTER:
                Audio_UpdateLandmasterNoise(playerId);
                break;
            case FORM_BLUE_MARINE:
                Audio_UpdateBlueMarineNoise(playerId);
                break;
            case FORM_NONE:
                break;
        }
    }
}

void Audio_UpdatePlayerReverb(void) {
    u8 playerId;

    for (playerId = 0; playerId < 4; playerId++) {
        if ((gPlayerNoise[playerId].form == FORM_ARWING) && (gPlayer[playerId].sfx.levelType == LEVELTYPE_PLANET)) {
            if (gPlayer[playerId].pos.y < 150.0f) {
                gPlayerNoise[playerId].reverbAdd = (150.0f - gPlayer[playerId].pos.y) * 0.53f;
            } else {
                gPlayerNoise[playerId].reverbAdd = 0;
            }
        }
    }
}

void Audio_UpdatePlayerNoise(void) {
    Audio_UpdatePlayerFreqMod();
    Audio_UpdatePlayerReverb();
}

void Audio_ResetVoicesAndPlayers(void) {
    u8 playerId;

    Audio_ResetPlayerFreqMods();
    for (playerId = 0; playerId < 4; playerId++) {
        gPlayerNoise[playerId].form = FORM_NONE;
        gPlayerNoise[playerId].reverbAdd = 0;
        gPlayerNoise[playerId].totalMod = 1.0f;
        gPlayerNoise[playerId].dopplerShift = 1.0f;
        D_8014BA24[playerId] = 0;
        D_8014BA28[playerId] = 0;
    }
    gSfxFreqMod = 1.0f;
    gSfxVolMod = 1.0f;
    sNextVoiceId = 0;
    sCurrentVoiceId = 0;
    sSetNextVoiceId = 0;
    sMuteBgmForVoice = 0;
    gPlaylistIndex = 0xFF;
}

void Audio_ProcessPlaylist(void) {
    PlaylistCmd* cmd;
    u32 temp;
    u32 temp2;
    u32 temp1;
    u32 temp5;

    if (gPlaylistIndex != 0xFF) {
        if (gPlaylistTimer == 0) {
            cmd = &gPlaylists[gPlaylistIndex][gPlaylistCmdIndex];
            switch (cmd->type) {
                case 0:
                    Audio_PlaySequence(cmd->unk_1, cmd->unk_2 & 0xFF, 0, cmd->unk_6);
                    gPlaylistTimer = gPlaylists[gPlaylistIndex][gPlaylistCmdIndex].unk_8;
                    gPlaylistCmdIndex++;
                    break;
                case 1:
                    SEQCMD_STOP_SEQUENCE_ALT(cmd->unk_1, cmd->unk_5);
                    gPlaylistTimer = gPlaylists[gPlaylistIndex][gPlaylistCmdIndex].unk_8;
                    gPlaylistCmdIndex++;
                    break;
                case 2:
                    Audio_PlaySequenceDistorted(cmd->unk_1, cmd->unk_2 & 0xFF, 1121, 25, cmd->unk_6);
                    gPlaylistTimer = gPlaylists[gPlaylistIndex][gPlaylistCmdIndex].unk_8;
                    gPlaylistCmdIndex++;
                    break;
                case 3:
                    Audio_PlayFanfare(cmd->unk_2 & 0xFF, 20, 10, 10);
                    gPlaylistTimer = gPlaylists[gPlaylistIndex][gPlaylistCmdIndex].unk_8;
                    gPlaylistCmdIndex++;
                    break;
                case 0xFF:
                    gPlaylistIndex = 0xFF;
                    break;
            }
        } else {
            gPlaylistTimer--;
        }
    }
}

void func_8001BFC0(f32* buffer0, f32* buffer1, s32 length, f32* buffer2) {
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
        temp_ft0 = D_PI / (2 * size);
        for (i = 0; i < half; i++) {
            *buf2half2++ = (__cosf(var_fs0) - __sinf(var_fs0)) * 0.707107f;
            *buf2half3++ = (__cosf(var_fs0) + __sinf(var_fs0)) * 0.707107f;
            var_fs0 += temp_ft0;
        }
    }

    buff0fromStart = buffer0;
    buff0FromEnd = &buffer0[size - 1];
    buff1half1 = buffer1;
    buff1half2 = &buffer1[half];

    // Copy even entries of buffer 0 into the first half of buffer 1. Copy odd entries into the second half in reverse
    // order
    for (i = 0; i < half; i++) {
        *buff1half1++ = *buff0fromStart;
        *buff1half2++ = *buff0FromEnd;
        buff0fromStart += 2;
        buff0FromEnd -= 2;
    }

    // reset the buffer pointers
    buff0FromEnd = &buffer0[size - 1];
    buff0fromStart = buffer0;
    buf2half2 = &buffer2[half];
    buf2half3 = &buf2half2[half];
    buff1half1 = buffer1;

    // FFT buffer 1 using buffer 2
    func_80008780(buffer1, length, buffer2);

    // handle i = 0 case
    buff0fromStart[0] = buff1half1[0];
    buff0fromStart[half] = buff1half1[half];

    // advance buffer pointers
    buf2half2++;
    buf2half3++;
    buff0fromStart++;
    buff1half1++;

    // seconnd half of buffer 1 in reverse order this time
    buff1half2 = &buffer1[size - 1];

    // convert to real amplitudes
    for (i = 1; i < half; i++) {
        *buff0fromStart++ = (*buf2half2 * *buff1half1) + (*buf2half3 * *buff1half2);
        *buff0FromEnd-- = (*buf2half3 * *buff1half1) - (*buf2half2 * *buff1half2);
        buff1half1++;
        buf2half3++;
        buf2half2++;
        buff1half2--;
    }
}

u8* Audio_UpdateFrequencyAnalysis(void) {
    s32 temp2;
    s32 i;
    s32 j;
    s32 k;
    s32 l;
    s32 m;
    s16* temp;
    f32* test;
    static s32 sFreqBins[] = {
        0,  1,  2,  3,  4,  6,  7,  8,   9,   10,  11,  12,  14,  16,  19,  22,
        26, 31, 37, 44, 54, 68, 88, 108, 138, 163, 188, 208, 222, 234, 242, 246,
    };
    static f32 sFreqGain = 17.0f;
    static f32 sFreqAmplitudes[32] = {
        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    };

    Audio_ProcessPlaylist();
    // clang-format off
    temp = gAiBuffers[gCurAiBuffIndex];\
    for(l = 0; l < 256; l++) {\
        D_80149AD8[l] = *temp++;
    }
    // clang-format on
    func_8001BFC0(D_80149AD8, D_80149ED8, 8, D_8014A2D8);
    j = 0;
    for (i = 0; i < 32; i++) {
        temp2 = sFreqBins[i] + 1;
        for (m = j; m < temp2; m++) {
            if (D_80149AD8[m] > 0.0f) {
                D_8014A8D8[i] += D_80149AD8[m];
            } else {
                D_8014A8D8[i] -= D_80149AD8[m];
            }
        }
        j = m;
    }
    for (k = 0; k < 32; k++) {
        D_8014A8D8[k] /= 8;
    }
    for (l = 0; l < 32; l++) {
        D_8014A8D8[l] = (D_8014A8D8[l] / 32768.0f) * sFreqGain;
        if (D_8014A8D8[l] > 1.0f) {
            D_8014A8D8[l] = 1.0f;
        }
        sFreqAmplitudes[l] = sFreqAmplitudes[l] * 0.75f + 0.25f * D_8014A8D8[l];
        D_8014A958[l] = sFreqAmplitudes[l] * 255.0f;
    }
    return D_8014A958;
}

void func_8001C8B8(u8 playerId) {
    u32 sfxId = 0x00000000;

    gPlayerNoise[playerId].form = gPlayer[playerId].sfx.form;
    Audio_ResetPlayerFreqMods();
    switch (gPlayerNoise[playerId].form) {
        case FORM_ARWING:
            if (gPlayer[playerId].sfx.levelType == LEVELTYPE_SPACE) {
                sfxId = 0x0100F020;
            } else {
                sfxId = 0x0100F005;
            }
            break;
        case FORM_LANDMASTER:
            sfxId = 0x0100F006;
            break;
        case FORM_BLUE_MARINE:
            sfxId = 0x0100F022;
            Audio_PlaySfx(0x1100802C, gPlayer[playerId].sfx.srcPos, playerId, &gDefaultMod, &gDefaultMod,
                          &gPlayerNoise[playerId].reverbAdd);
            break;
    }
    if (sfxId != 0) {
        Audio_PlaySfx(sfxId, gPlayer[playerId].sfx.srcPos, playerId, &gPlayerNoise[playerId].totalMod, &gDefaultMod,
                      &gPlayerNoise[playerId].reverbAdd);
    }
}

void func_8001CA24(u8 playerId) {
    u32 sfxId = 0x00000000;

    switch (gPlayerNoise[playerId].form) {
        case FORM_ARWING:
            if (gPlayer[playerId].sfx.levelType == LEVELTYPE_SPACE) {
                sfxId = 0x0100F020;
            } else {
                sfxId = 0x0100F005;
            }
            Audio_KillSfxBySourceAndId(gPlayer[playerId].sfx.srcPos, 0x1100000B);
            break;
        case FORM_LANDMASTER:
            sfxId = 0x0100F006;
            break;
        case FORM_BLUE_MARINE:
            sfxId = 0x0100F022;
            Audio_KillSfxBySourceAndId(gPlayer[playerId].sfx.srcPos, 0x1100802C);
            break;
    }
    gPlayerNoise[playerId].form = FORM_NONE;
    if (sfxId != 0) {
        Audio_KillSfxBySourceAndId(gPlayer[playerId].sfx.srcPos, sfxId);
    }
}

void func_8001CB80(u8 playerId, u8 arg1) {
    D_8014BA28[playerId] = gAudioFrameCounter;
    switch (arg1) {
        case 1:
            D_8014BA10[playerId] = 1.0f;
            D_8014BA20[playerId] = 1;
            break;
        case 2:
            D_8014BA10[playerId] = 1.5f;
            D_8014BA20[playerId] = 2;
            break;
        default:
        case 0:
            D_8014BA10[playerId] = 0.75f;
            D_8014BA20[playerId] = 0;
            break;
    }
    if (D_8014BA24[playerId] != 1) {
        Audio_PlaySfx(0x01008008, gPlayer[playerId].sfx.srcPos, playerId, &D_8014BA10[playerId], &gDefaultMod,
                      &gPlayerNoise[playerId].reverbAdd);
        D_8014BA24[playerId] = 1;
    }
}

void func_8001CCDC(u8 playerId, f32* sfxSource) {
    if (D_8014BA24[playerId] != 0) {
        switch (D_8014BA20[playerId]) {
            case 1:
                D_8014BA10[playerId] = 1.2f;
                break;
            case 2:
                D_8014BA10[playerId] = 1.5f;
                break;
            default:
            case 0:
                D_8014BA10[playerId] = 1.0f;
                break;
        }
        Audio_KillSfxBySourceAndId(gPlayer[playerId].sfx.srcPos, 0x01008008);
        Audio_PlaySfx(0x09001001, sfxSource, playerId, &D_8014BA10[playerId], &gDefaultMod,
                      &gPlayerNoise[playerId].reverbAdd);
        D_8014BA24[playerId] = 2;
    }
}

void func_8001CE28(u8 playerId, f32* sfxSource) {
    u32 sfxId;

    if (D_8014BA24[playerId] != 0) {
        switch (D_8014BA20[playerId]) {
            case 1:
                sfxId = 0x0903A00A;
                break;
            case 2:
                sfxId = 0x0901A00B;
                break;
            default:
            case 0:
                sfxId = 0x0901A009;
                break;
        }
        Audio_KillSfxByTokenAndId(playerId, 0x09001001);
        Audio_PlaySfx(sfxId, sfxSource, playerId, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        D_8014BA24[playerId] = 0;
    }
}

void func_8001CEFC(f32* sfxSource) {
    u32 sfxId = (gPlayer[0].sfx.levelType == LEVELTYPE_SPACE) ? 0x31000040 : 0x3100000C;

    Audio_PlaySfx(sfxId, sfxSource, 0, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
}

void func_8001CF60(f32* sfxSource) {
    u32 sfxId = (gPlayer[0].sfx.levelType == LEVELTYPE_SPACE) ? 0x31000040 : 0x3100000C;

    Audio_KillSfxBySourceAndId(sfxSource, sfxId);
}

void func_8001CFA8(f32 arg0) {
    f32 var_fv0 = ABS(arg0);

    if (var_fv0 < 6.0f) {
        var_fv0 = 6.0f;
    } else if (var_fv0 > 30.0f) {
        var_fv0 = 30.0f;
    }

    gSfxFreqMod = ((var_fv0 - 18.0f) / 24.0f) + 1.0f;
}

void func_8001D034(f32* sfxSource, u32 sfxId, u8 semitones) {
    f32 semitoneMods[] = {
        1.0f, 1.059f, 1.122f, 1.189f, 1.26f, 1.335f, 1.414f, 1.498f, 1.587f, 1.682f, 1.782f, 1.888f, 2.0f,
    };

    if (semitones > 12) {
        semitones = 12;
    }
    func_8001D0B4(sfxSource, sfxId, semitoneMods[semitones]);
}

void func_8001D0B4(f32* sfxSource, u32 sfxId, f32 freqMod) {
    gSfxFreqMod = freqMod;
    Audio_PlaySfx(sfxId, sfxSource, 0, &gSfxFreqMod, &gDefaultMod, &gDefaultReverb);
}

void func_8001D10C(f32* sfxSource, u32 sfxId) {
    Audio_PlaySfx(sfxId, sfxSource, 0, &gSfxFreqMod, &gSfxVolMod, &gDefaultReverb);
}

void func_8001D15C(u8 arg0) {
    if (arg0 < 12) {
        gSfxFreqMod = (arg0 / 11.0f) + 0.5f;
    } else {
        gSfxFreqMod = 1.5f;
    }
}

void func_8001D1C8(u8 arg0, u8 arg1) {
    u8 temp1;
    u8 temp2;

    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 9, 2, 8 + (arg0 >> 2));
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 10, 2, 8 + (arg0 >> 2));
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 11, 2, 8 + (arg0 >> 2));
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 9, 1, 19 - (arg1 * 3));
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 10, 1, 19 - (arg1 * 3));
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 11, 1, 19 - (arg1 * 3));
    temp1 = 68 - (arg0 >> 3);
    temp2 = 80 - (arg1 * 10);
    if (temp1 < temp2) {
        temp1 = temp2;
    }
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 9, 3, temp1);
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 10, 3, temp1);
    AUDIOCMD_CHANNEL_SET_IO(SEQ_PLAYER_SFX, 11, 3, temp1);
}

void func_8001D2FC(f32* sfxSource, u16 arg1) {
    if ((D_800C5E88[arg1] & 0xF0000000) != 0x40000000) {
        Audio_PlaySfx(D_800C5E88[arg1], sfxSource, 0, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
    } else {
        Audio_PlaySfx(D_800C5E88[arg1], gDefaultSfxSource, 0, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
    }
}

void func_8001D3A0(f32* sfxSource, u16 arg1) {
    if ((D_800C5E88[arg1] & 0xF0000000) != 0x40000000) {
        Audio_KillSfxBySourceAndId(sfxSource, D_800C5E88[arg1]);
    } else {
        Audio_KillSfxBySourceAndId(gDefaultSfxSource, D_800C5E88[arg1]);
    }
}

void Audio_SetBaseSfxReverb(s8 reverb) {
    sBaseReverb = reverb;
}

void Audio_SetBgmParam(s8 bgmParam) {
    SEQCMD_SET_SEQPLAYER_IO(SEQ_PLAYER_BGM, 0, bgmParam);
}

void Audio_PlaySequence(u8 seqPlayId, u16 seqId, u8 fadeinTime, u8 bgmParam) {
    SEQCMD_SET_SEQPLAYER_IO(seqPlayId, 0, bgmParam);
    SEQCMD_PLAY_SEQUENCE(seqPlayId, fadeinTime, 0, seqId);
}

void Audio_PlayFanfare(u16 seqId, u8 bgmVolume, u8 bgmFadeoutTime, u8 bgmFadeinTime) {
    if (Audio_GetActiveSeqId(SEQ_PLAYER_BGM) != 39) {
        Audio_SetSequenceFade(SEQ_PLAYER_BGM, 1, bgmVolume, bgmFadeoutTime);
        SEQCMD_SETUP_RESTORE_SEQPLAYER_VOLUME(SEQ_PLAYER_FANFARE, SEQ_PLAYER_BGM, bgmFadeinTime);
        SEQCMD_PLAY_SEQUENCE(SEQ_PLAYER_FANFARE, 0, 0, seqId);
    }
}

void func_8001D520(void) {
    u8 i;

    if (sNewAudioSpecId == 24) {
        Audio_ClearVoice();
        func_8001D6DC(0);
        Audio_PlaySfx(0x0903F004, gDefaultSfxSource, 4, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        SEQCMD_SET_SEQPLAYER_VOLUME(SEQ_PLAYER_BGM, 5, 30);
        SEQCMD_SETUP_RESTORE_SEQPLAYER_VOLUME(SEQ_PLAYER_FANFARE, SEQ_PLAYER_BGM, 30);
        SEQCMD_PLAY_SEQUENCE(SEQ_PLAYER_FANFARE, 0, 0, 39);
    } else {
        for (i = 0; i < 5; i++) {
            Audio_KillSfxByBank(i);
        }
        AUDIOCMD_GLOBAL_UNMUTE(true);
        Audio_PlaySfx(0x0903F004, gDefaultSfxSource, 4, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 0);
        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 0);
        SEQCMD_PLAY_SEQUENCE(SEQ_PLAYER_BGM, 0, 0, 39);
    }
}

void func_8001D638(u8 arg0) {
    if (arg0) {
        Audio_PlaySfx(0x4900F000, gDefaultSfxSource, 4, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        AUDIOCMD_GLOBAL_MUTE();
    } else {
        Audio_PlaySfx(0x4900F000, gDefaultSfxSource, 4, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        AUDIOCMD_GLOBAL_UNMUTE(false);
    }
}

void func_8001D6DC(u8 arg0) {
    if (arg0) {
        Audio_PlaySfx(0x49000019, gDefaultSfxSource, 4, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        AUDIOCMD_GLOBAL_MUTE();
    } else {
        Audio_PlaySfx(0x4900101A, gDefaultSfxSource, 4, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
        AUDIOCMD_GLOBAL_UNMUTE(false);
    }
}

void func_8001D780(u8 audioType) {
    s8 volume = ((sVolumeSettings[audioType] * 127) / 99) % 128U;
    u8 i;

    switch (audioType) {
        case 0:
            Audio_SetSequenceFade(SEQ_PLAYER_BGM, 0, volume, 1);
            Audio_SetSequenceFade(SEQ_PLAYER_FANFARE, 0, volume, 1);
            break;
        case 2:
            for (i = 0; i < 15; i++) {
                AUDIOCMD_CHANNEL_SET_VOL(SEQ_PLAYER_SFX, (u32) i, volume / 127.0f);
            }
            break;
        case 1:
            AUDIOCMD_CHANNEL_SET_VOL(SEQ_PLAYER_VOICE, 15, volume / 127.0f);
            break;
    }
}

void func_8001D8A8(u8 audioType, u8 volume) {
    if (volume > 99) {
        volume = 99;
    }
    sVolumeSettings[audioType] = volume;
    func_8001D780(audioType);
}

void Audio_PlaySoundTest(u8 enable) {
    switch (enable) {
        case false:
            Audio_PlaySequence(0, 36, 0, 255);
            Audio_PlayVoice(1);
            Audio_KillSfxById(0x0100001F);
            Audio_KillSfxById(0x0100F005);
            break;
        case true:
            Audio_PlaySequence(0, 46, 0, 255);
            Audio_PlayVoice(2);
            Audio_PlaySfx(0x0100001F, gDefaultSfxSource, 0, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
            Audio_PlaySfx(0x0100F005, gDefaultSfxSource, 0, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
            break;
    }
}

void Audio_PlaySequenceDistorted(u8 seqPlayId, u16 seqId, u16 distortion, u8 fadeinTime, u8 unused) {
    u8 tempoDistortion = (distortion / 10);

    Audio_PlaySequence(seqPlayId, seqId & ~0x8000, 0, 255);
    SEQCMD_SET_SEQPLAYER_FREQ(seqPlayId, fadeinTime, distortion);
    SEQCMD_SCALE_TEMPO(seqPlayId, fadeinTime, tempoDistortion);
}

void Audio_PlaySoundTestTrack(u8 trackNumber) {
    u16 sp26;
    u8 sp25;

    if ((trackNumber >= 45) && (trackNumber < 50)) {
        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 1);
        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 1);
        gPlaylistIndex = trackNumber - 45;
        gPlaylistCmdIndex = 0;
        gPlaylistTimer = 0;
    } else if (trackNumber >= 50) {
        Audio_PlaySfx(0x4900100A, gDefaultSfxSource, 4, &gDefaultMod, &gDefaultMod, &gDefaultReverb);
    } else {
        gPlaylistIndex = 0xFF;
        sp26 = D_800C5EE4[trackNumber].unk_0 & 0xFF;
        sp25 = D_800C5EE4[trackNumber].unk_4;
        SEQCMD_STOP_SEQUENCE(D_800C5E70 ^ 1, 5);
        Audio_PlaySequence(D_800C5E70, sp26, 0, sp25);
        D_800C5E70 ^= 1;
    }
}

void Audio_FadeOutAll(u8 fadeoutTime) {
    SEQCMD_SET_SEQPLAYER_VOLUME(SEQ_PLAYER_BGM, fadeoutTime, 0);
    SEQCMD_SET_SEQPLAYER_VOLUME(SEQ_PLAYER_FANFARE, fadeoutTime, 0);
    SEQCMD_SET_SEQPLAYER_VOLUME(SEQ_PLAYER_SFX, fadeoutTime, 0);
    SEQCMD_SET_SEQPLAYER_VOLUME(SEQ_PLAYER_VOICE, fadeoutTime, 0);
}

void Audio_KillAllSfx(void) {
    u8 i;

    for (i = 0; i < 5; i++) {
        Audio_KillSfxByBank(i);
    }
}

void Audio_SetAudioSpec(u8 unused, u16 specParam) {
    u8 sfxChannelLayout = ((specParam & 0xFF00) >> 8);
    u8 specId = specParam & 0xFF;

    SEQCMD_RESET_AUDIO_HEAP(sfxChannelLayout, specId);
}

// unused despite being equivalent to AUDIO_PLAY_BGM
void Audio_PlayBgm(u16 seqId) {
    SEQCMD_PLAY_SEQUENCE(SEQ_PLAYER_BGM, 1, 0, seqId);
}

void Audio_InitSounds(void) {
    Audio_ResetVoicesAndPlayers();
    Audio_ResetSfxChannelState();
    Audio_ResetActiveSequencesAndVolume();
    Audio_ResetSfx();
    Audio_StartSequence(SEQ_PLAYER_VOICE, 1, 0xFF, 1);
    Audio_StartSequence(SEQ_PLAYER_SFX, 0, 0xFF, 10);
}

void func_8001DD40(void) {
    s32 pad1;
    s32 pad2;
    u16 sp1E = 1;

    Audio_StartSequence(SEQ_PLAYER_VOICE, 1, 0xFF, 1);
    if (sNewAudioSpecId == 12) {
        sp1E = 360;
    } else if (sNewAudioSpecId < 23) {
        sp1E = 90;
    }
    Audio_StartSequence(SEQ_PLAYER_SFX, 0, 0xFF, sp1E);
    func_80017494();
    func_80017550();
    SEQCMD_SET_SEQPLAYER_VOLUME(SEQ_PLAYER_SFX, 0, 127);
    SEQCMD_SET_SEQPLAYER_VOLUME(SEQ_PLAYER_VOICE, 0, 127);
    AudioThread_ScheduleProcessCmds();
    AUDIOCMD_GLOBAL_STOP_AUDIOCMDS();
    AUDIOCMD_GLOBAL_STOP_AUDIOCMDS();
    AUDIOCMD_GLOBAL_STOP_AUDIOCMDS();
    func_8001D780(0);
    func_8001D780(2);
    func_8001D780(1);
}

void func_8001DE1C(u8 oldSpecId) {
    if (oldSpecId == 16) {
        if ((sNewAudioSpecId == 22) || (sNewAudioSpecId == 23)) {
            D_800C5D58 = 2;
        }
    } else if ((oldSpecId == 28) && (sNewAudioSpecId == 23)) {
        D_800C5D58 = 2;
    } else {
        D_800C5D58 = 1;
    }
    AUDIOCMD_GLOBAL_UNMUTE(true);
    Audio_ResetVoicesAndPlayers();
    Audio_ResetSfxChannelState();
    Audio_ResetActiveSequences();
    Audio_ResetSfx();
}

void Audio_Update(void) {
    if (func_80018FA4() == 0) {
        Audio_ProcessSfxRequests();
        Audio_ProcessSeqCmds();
        Audio_PlayAllSfx();
        Audio_UpdatePlayerNoise();
        Audio_UpdateVoice();
        func_8001AF50();
        Audio_UpdateActiveSequences();
        Audio_UpdateDelayedSeqCmds();
        AudioThread_ScheduleProcessCmds();
    }
    gAudioFrameCounter++;
}

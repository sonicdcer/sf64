/**
 * This file is provisional, some of the structs need to be corrected, and others might be unused
 * This file is only meant to be used as reference to help audio decompilation
*/

#ifndef SF64_AUDIO_H
#define SF64_AUDIO_H

#include "PR/ultratypes.h"

typedef void (*AudioCustomUpdateFunction)(void);

#define REFRESH_RATE_PAL 50
#define REFRESH_RATE_MPAL 60
#define REFRESH_RATE_NTSC 60

// Small deviation parameters used in estimating the max tempo
// It is unclear why these vary by region, and aren't all just 1
#define REFRESH_RATE_DEVIATION_PAL 1.001521f
#define REFRESH_RATE_DEVIATION_MPAL 0.99276f
#define REFRESH_RATE_DEVIATION_NTSC 1.00278f

#define AUDIO_MK_CMD(b0, b1, b2, b3) \
    ((((b0) &0xFF) << 0x18) | (((b1) &0xFF) << 0x10) | (((b2) &0xFF) << 0x8) | (((b3) &0xFF) << 0))

#define NO_LAYER ((SequenceLayer*) (-1))

// Also known as "Pulses Per Quarter Note" or "Tatums Per Beat"
#define SEQTICKS_PER_BEAT 48

#define IS_SEQUENCE_CHANNEL_VALID(ptr) ((u32) (ptr) != (u32) &gAudioCtx.sequenceChannelNone)
#define SEQ_NUM_CHANNELS 16
#define SEQ_IO_VAL_NONE -1

#define MAX_CHANNELS_PER_BANK 3

#define MUTE_BEHAVIOR_3 (1 << 3)           // prevent further noteSubEus from playing
#define MUTE_BEHAVIOR_4 (1 << 4)           // stop something in seqLayer scripts
#define MUTE_BEHAVIOR_SOFTEN (1 << 5)      // lower volume, by default to half
#define MUTE_BEHAVIOR_STOP_NOTES (1 << 6)  // prevent further notes from playing
#define MUTE_BEHAVIOR_STOP_SCRIPT (1 << 7) // stop processing sequence/channel scripts

#define ADSR_DISABLE 0
#define ADSR_HANG -1
#define ADSR_GOTO -2
#define ADSR_RESTART -3

// size of a single sample point
#define SAMPLE_SIZE sizeof(s16)

// Samples are processed in groups of 16 called a "frame"
#define SAMPLES_PER_FRAME ADPCMFSIZE

// The length of one left/right channel is 13 frames
#define DMEM_1CH_SIZE (13 * SAMPLES_PER_FRAME * SAMPLE_SIZE)
// Both left and right channels
#define DMEM_2CH_SIZE (2 * DMEM_1CH_SIZE)

#define AIBUF_LEN (88 * SAMPLES_PER_FRAME)   // number of samples
#define AIBUF_SIZE (AIBUF_LEN * SAMPLE_SIZE) // number of bytes

// Filter sizes
#define FILTER_SIZE (8 * SAMPLE_SIZE)
#define FILTER_BUF_PART1 (8 * SAMPLE_SIZE)
#define FILTER_BUF_PART2 (8 * SAMPLE_SIZE)

// Must be the same amount of samples as copied by aDuplicate() (audio microcode)
#define WAVE_SAMPLE_COUNT 64

#define AUDIO_RELOCATED_ADDRESS_START K0BASE

typedef enum {
    /* 0 */ SOUNDMODE_STEREO,
    /* 1 */ SOUNDMODE_HEADSET,
    /* 2 */ SOUNDMODE_SURROUND,
    /* 3 */ SOUNDMODE_MONO
} SoundMode;

typedef enum {
    /* 0 */ ADSR_STATE_DISABLED,
    /* 1 */ ADSR_STATE_INITIAL,
    /* 2 */ ADSR_STATE_START_LOOP,
    /* 3 */ ADSR_STATE_LOOP,
    /* 4 */ ADSR_STATE_FADE,
    /* 5 */ ADSR_STATE_HANG,
    /* 6 */ ADSR_STATE_DECAY,
    /* 7 */ ADSR_STATE_RELEASE,
    /* 8 */ ADSR_STATE_SUSTAIN
} AdsrStatus;

typedef enum {
    /* 0 */ MEDIUM_RAM,
    /* 1 */ MEDIUM_UNK,
    /* 2 */ MEDIUM_CART,
    /* 3 */ MEDIUM_DISK_DRIVE
} SampleMedium;

typedef enum {
    /* 0 */ CODEC_ADPCM,       // 16 2-byte samples (32 bytes) compressed into 4-bit samples (8 bytes) + 1 header byte
    /* 1 */ CODEC_S8,          // 16 2-byte samples (32 bytes) compressed into 8-bit samples (16 bytes)
    /* 2 */ CODEC_S16_INMEMORY,
    /* 3 */ CODEC_SMALL_ADPCM, // 16 2-byte samples (32 bytes) compressed into 2-bit samples (4 bytes) + 1 header byte
    /* 4 */ CODEC_REVERB,
    /* 5 */ CODEC_S16
} SampleCodec;

typedef enum {
    /* 0 */ SEQUENCE_TABLE,
    /* 1 */ FONT_TABLE,
    /* 2 */ SAMPLE_TABLE
} SampleBankTableType;

typedef enum {
    /* 0 */ CACHE_TEMPORARY,
    /* 1 */ CACHE_PERSISTENT,
    /* 2 */ CACHE_EITHER,
    /* 3 */ CACHE_PERMANENT
} AudioCacheType;

typedef enum {
    /* 0 */ LOAD_STATUS_NOT_LOADED,  // the entry data is not loaded
    /* 1 */ LOAD_STATUS_IN_PROGRESS, // the entry data is being loaded asynchronously
    /* 2 */ LOAD_STATUS_COMPLETE,    // the entry data is loaded, it may be discarded if not stored persistently, and
                                     // either no longer in use, or the memory is needed for something else
    /* 3 */ LOAD_STATUS_DISCARDABLE, // the entry data is loaded, and can be discarded
    /* 4 */ LOAD_STATUS_MAYBE_DISCARDABLE, // only for font table entries, like COMPLETE but prefer discarding it over a
                                           // COMPLETE entry
    /* 5 */ LOAD_STATUS_PERMANENTLY_LOADED // the entry data is loaded in the permanent pool, it won't be discarded
} AudioLoadStatus;

typedef s32 (*DmaHandler)(OSPiHandle* handle, OSIoMesg* mb, s32 direction);

struct Note;
struct NotePool;
struct SequenceChannel;
struct SequenceLayer;

typedef struct AudioListItem {
    // A node in a circularly linked list. Each node is either a head or an item:
    // - Items can be either detached (prev = NULL), or attached to a list.
    //   'value' points to something of interest.
    // - List heads are always attached; if a list is empty, its head points
    //   to itself. 'count' contains the size of the list.
    // If the list holds notes, 'pool' points back to the pool where it lives.
    // Otherwise, that member is NULL.
    /* 0x00 */ struct AudioListItem* prev;
    /* 0x04 */ struct AudioListItem* next;
    /* 0x08 */ union {
        void* value; // either Note* or SequenceLayer*
        s32 count;
    } u;
    /* 0x0C */ struct NotePool* pool;
} AudioListItem; // size = 0x10

typedef struct NotePool {
    /* 0x00 */ AudioListItem disabled;
    /* 0x10 */ AudioListItem decaying;
    /* 0x20 */ AudioListItem releasing;
    /* 0x30 */ AudioListItem active;
} NotePool; // size = 0x40

// Pitch sliding by up to one octave in the positive direction. Negative
// direction is "supported" by setting extent to be negative. The code
// exterpolates exponentially in the wrong direction in that case, but that
// doesn't prevent seqplayer from doing it, AFAICT.
typedef struct {
    /* 0x00 */ u8 mode; // bit 0x80 denotes something; the rest are an index 0-5
    /* 0x04 */ f32 cur;
    /* 0x08 */ f32 speed;
    /* 0x0C */ f32 extent;
} Portamento; // size = 0x10

typedef struct {
    /* 0x0 */ s16 delay;
    /* 0x2 */ s16 arg;
} EnvelopePoint; // size = 0x4

typedef struct {
    /* 0x00 */ u32 start;
    /* 0x04 */ u32 end;
    /* 0x08 */ u32 count;
    /* 0x0C */ char unk_0C[0x4];
    /* 0x10 */ s16 predictorState[16]; // only exists if count != 0. 8-byte aligned
} AdpcmLoop;                           // size = 0x30 (or 0x10)

typedef struct {
    /* 0x00 */ s32 order;
    /* 0x04 */ s32 numPredictors;
    /* 0x08 */ s16 book[1]; // size 8 * order * numPredictors. 8-byte aligned
} AdpcmBook;                // size >= 0x8

typedef struct {
    /* 0x00 */ u32 codec : 4;       // The state of compression or decompression
    /* 0x00 */ u32 medium : 2;      // Medium where sample is currently stored
    /* 0x00 */ u32 unk_bit26 : 1;
    /* 0x00 */ u32 isRelocated : 1; // Has the sample header been relocated (offsets to pointers)
    /* 0x01 */ u32 size : 24;       // Size of the sample
    /* 0x04 */ u8* sampleAddr;      // Raw sample data. Offset from the start of the sample bank or absolute address to
                                    // either rom or ram
    /* 0x08 */ AdpcmLoop*
        loop; // Adpcm loop parameters used by the sample. Offset from the start of the sound font / pointer to ram
    /* 0x0C */ AdpcmBook*
        book; // Adpcm book parameters used by the sample. Offset from the start of the sound font / pointer to ram
} Sample;     // size = 0x10

typedef struct {
    /* 0x00 */ Sample* sample;
    /* 0x04 */ f32 tuning; // frequency scale factor
} TunedSample;             // size = 0x8

typedef struct {
    /* 0x00 */ u8 isRelocated; // have the envelope and all samples been relocated (offsets to pointers)
    /* 0x01 */ u8 normalRangeLo;
    /* 0x02 */ u8 normalRangeHi;
    /* 0x03 */ u8 adsrDecayIndex; // index used to obtain adsr decay rate from adsrDecayTable
    /* 0x04 */ EnvelopePoint* envelope;
    /* 0x08 */ TunedSample lowPitchTunedSample;
    /* 0x10 */ TunedSample normalPitchTunedSample;
    /* 0x18 */ TunedSample highPitchTunedSample;
} Instrument; // size = 0x20

typedef struct {
    /* 0x00 */ u8 adsrDecayIndex; // index used to obtain adsr decay rate from adsrDecayTable
    /* 0x01 */ u8 pan;
    /* 0x02 */ u8 isRelocated;    // have tunedSample.sample and envelope been relocated (offsets to pointers)
    /* 0x04 */ TunedSample tunedSample;
    /* 0x0C */ EnvelopePoint* envelope;
} Drum; // size = 0x10

typedef struct {
    /* 0x00 */ TunedSample tunedSample;
} SoundEffect; // size = 0x08

/**
 * Stores parsed information from soundfont data
 */
typedef struct {
    /* 0x00 */ u8 numInstruments;
    /* 0x01 */ u8 numDrums;
    /* 0x02 */ u8 sampleBankId1;
    /* 0x03 */ u8 sampleBankId2;
    /* 0x04 */ Instrument** instruments;
    /* 0x08 */ Drum** drums;
} SoundFont; // size = 0x10

typedef struct {
    /* 0x00 */ s16 numSamplesAfterDownsampling; // never read
    /* 0x02 */ s16 chunkLen;                    // never read
    /* 0x04 */ s16* toDownsampleLeft;
    /* 0x08 */ s16* toDownsampleRight;          // data pointed to by left and right are adjacent in memory
    /* 0x0C */ s32 startPos;                    // start pos in ring buffer
    /* 0x10 */ s16 lengthA;                     // first length in ring buffer (from startPos, at most until end)
    /* 0x12 */ s16 lengthB;                     // second length in ring buffer (from pos 0)
} ReverbRingBufferItem; // size = 0x14

typedef struct {
    /* 0x000 */ u8 resampleFlags;
    /* 0x001 */ u8 useReverb;
    /* 0x002 */ u8 framesToIgnore;
    /* 0x003 */ u8 curFrame;
    /* 0x004 */ u8 downsampleRate;
    /* 0x005 */ s8 unk_05;
    /* 0x006 */ u16 windowSize;
    /* 0x008 */ u16 unk_08;
    /* 0x00A */ s16 unk_0A;
    /* 0x00C */ u16 decayRatio; // determines how much reverb persists
    /* 0x00E */ u16 unk_0E;
    /* 0x010 */ s32 nextRingBufPos;
    /* 0x014 */ s32 unk_20;
    /* 0x018 */ s32 bufSizePerChan;
    /* 0x01C */ s16* leftRingBuf;
    /* 0x020 */ s16* rightRingBuf;
    /* 0x024 */ void* unk_30;
    /* 0x028 */ void* unk_34;
    /* 0x02C */ void* unk_38;
    /* 0x030 */ void* unk_3C;
    /* 0x034 */ ReverbRingBufferItem items[2][10];
    char pad[0x10];
} SynthesisReverb; // size = 0x1D4

typedef struct {
    /* 0x00 */ u8* pc;             // program counter
    /* 0x04 */ u8* stack[4];
    /* 0x14 */ u8 remLoopIters[4]; // remaining loop iterations
    /* 0x18 */ u8 depth;
    /* 0x19 */ s8 value;
} SeqScriptState; // size = 0x1C

// Also known as a Group, according to debug strings.
typedef struct {
    /* 0x000 */ u8 enabled : 1;
    /* 0x000 */ u8 finished : 1;
    /* 0x000 */ u8 muted : 1;
    /* 0x000 */ u8 seqDmaInProgress : 1;
    /* 0x000 */ u8 fontDmaInProgress : 1;
    /* 0x000 */ u8 recalculateVolume : 1;
    /* 0x000 */ u8 stopScript : 1;
    /* 0x000 */ u8 applyBend : 1;
    /* 0x001 */ u8 state;
    /* 0x002 */ u8 noteAllocPolicy;
    /* 0x003 */ u8 muteBehavior;
    /* 0x004 */ u8 seqId;
    /* 0x005 */ u8 defaultFont;
    /* 0x006 */ u8 unk_06[1];
    /* 0x007 */ s8 playerIdx;
    /* 0x008 */ u16 tempo;       // seqTicks per minute
    /* 0x00A */ u16 tempoAcc;    // tempo accumulation, used in a discretized algorithm to apply tempo.
    /* 0x00C */ u16 tempoChange; // Used to adjust the tempo without altering the base tempo.
    /* 0x00E */ s16 transposition;
    /* 0x010 */ u16 delay;
    /* 0x012 */ u16 fadeTimer; // in ticks
    /* 0x014 */ u16 fadeTimerUnkEu;
    /* 0x018 */ u8* seqData;
    /* 0x01C */ f32 fadeVolume;
    /* 0x020 */ f32 fadeVelocity;
    /* 0x024 */ f32 volume;
    /* 0x028 */ f32 muteVolumeScale;
    /* 0x02C */ f32 fadeVolumeScale;
    /* 0x030 */ f32 appliedFadeVolume;
    // /* 0x034 */ f32 bend;
    /* 0x038 */ struct SequenceChannel* channels[16];
    /* 0x078 */ SeqScriptState scriptState;
    /* 0x094 */ u8* shortNoteVelocityTable;
    /* 0x098 */ u8* shortNoteGateTimeTable;
    /* 0x09C */ NotePool notePool;
    /* 0x0DC */ s32 skipTicks;
    /* 0x0E0 */ u32 scriptCounter;
    /* 0x0E4 */ char
        padE4[0x6C];  // unused struct members for sequence/sound font dma management, according to sm64 decomp
} SequencePlayer; // size = 0x14C

typedef struct {
    /* 0x0 */ u8 decayIndex; // index used to obtain adsr decay rate from adsrDecayTable
    /* 0x1 */ u8 sustain;
    /* 0x4 */ EnvelopePoint* envelope;
} AdsrSettings; // size = 0x8

typedef struct {
    /* 0x00 */ union {
        struct A {
            /* 0x00 */ u8 unused : 1;
            /* 0x00 */ u8 hang : 1;
            /* 0x00 */ u8 decay : 1;
            /* 0x00 */ u8 release : 1;
            /* 0x00 */ 
        } s;
        /* 0x00 */ u8 asByte;
    } action;
    /* 0x01 */ u8 state;
    /* 0x02 */ u8 envIndex;
    /* 0x04 */ s16 delay;
    /* 0x08 */ f32 sustain;
    /* 0x0C */ f32 velocity;
    /* 0x10 */ f32 fadeOutVel;
    /* 0x14 */ f32 current;
    /* 0x18 */ f32 target;
    /* 0x1C */ EnvelopePoint* envelope;
} AdsrState; // size = 0x20

typedef struct {
    /* 0x00 */ u8 unused : 2;
    /* 0x00 */ u8 bit2 : 2;
    /* 0x00 */ u8 strongRight : 1;
    /* 0x00 */ u8 strongLeft : 1;
    /* 0x00 */ u8 stereoHeadsetEffects : 1;
    /* 0x00 */ u8 usesHeadsetPanEffects : 1;
} StereoData; // size = 0x1

typedef union {
    /* 0x00 */ StereoData s;
    /* 0x00 */ u8 asByte;
} Stereo; // size = 0x1

typedef struct {
    /* 0x00 */ u8 reverb;
    /* 0x01 */ u8 gain; // Increases volume by a multiplicative scaling factor. Represented as a UQ4.4 number
    /* 0x02 */ u8 pan;
    /* 0x03 */ Stereo stereo;
    /* 0x04 */ f32 freqScale;
    /* 0x08 */ f32 velocity;
} NoteAttributes; // size = 0xC

// Also known as a SubTrack, according to sm64 debug strings.
typedef struct SequenceChannel {
    /* 0x00 */ u8 enabled : 1;
    /* 0x00 */ u8 finished : 1;
    /* 0x00 */ u8 stopScript : 1;
    /* 0x00 */ u8 muted : 1; // sets SequenceLayer.muted
    /* 0x00 */ u8 hasInstrument : 1;
    /* 0x00 */ u8 stereoHeadsetEffects : 1;
    /* 0x00 */ u8 largeNotes : 1; // notes specify duration and velocity
    /* 0x00 */ u8 unused : 1;
    union {
        struct {
            /* 0x01 */ u8 freqScale : 1;
            /* 0x01 */ u8 volume : 1;
            /* 0x01 */ u8 pan : 1;
        } s;
        /* 0x01 */ u8 asByte;
    } changes;
    /* 0x02 */ u8 noteAllocPolicy;
    /* 0x03 */ u8 muteBehavior;
    /* 0x04 */ u8 targetReverbVol;
    /* 0x05 */ u8 notePriority; // 0-3
    /* 0x06 */ u8 fontId;
    /* 0x07 */ u8 someOtherPriority;
    /* 0x08 */ u8 bookOffset;
    /* 0x09 */ u8 newPan;
    /* 0x0A */ u8 panChannelWeight; // proportion of pan that comes from the channel (0..128)
    /* 0x0B */ u8 reverbIndex;
    /* 0x0C */ u16 vibratoRateStart;
    /* 0x0E */ u16 vibratoDepthStart;
    /* 0x10 */ u16 vibratoRateTarget;
    /* 0x12 */ u16 vibratoDepthTarget;
    /* 0x14 */ u16 vibratoRateChangeDelay;
    /* 0x16 */ u16 vibratoDepthChangeDelay;
    /* 0x18 */ u16 vibratoDelay;
    /* 0x1A */ u16 delay;
    /* 0x1C */ s16 instOrWave; // either 0 (none), instrument index + 1, or
                               // 0x80..0x83 for sawtooth/triangle/sine/square waves.
    /* 0x1E */ s16 transposition;
    /* 0x20 */ f32 volumeScale;
    /* 0x24 */ f32 volume;
    /* 0x28 */ s32 pan;
    /* 0x2C */ f32 appliedVolume;
    /* 0x30 */ f32 freqScale;
    /* 0x34 */ u8 (*dynTable)[][2];
    /* 0x38 */ struct Note* noteUnused;
    /* 0x3C */ struct SequenceLayer* layerUnused;
    /* 0x40 */ Instrument* instrument;
    /* 0x44 */ SequencePlayer* seqPlayer;
    /* 0x48 */ struct SequenceLayer* layers[4];
    /* 0x58 */ SeqScriptState scriptState;
    /* 0x74 */ AdsrSettings adsr;
    /* 0x7C */ NotePool notePool;
    /* 0xBC */ s8 seqScriptIO[8]; // bridge between .seq script and audio lib, "io ports"
    /* 0xC4 */ Stereo stereo;
} SequenceChannel; // size = 0xC8

// Might also be known as a Track, according to sm64 debug strings (?).
typedef struct SequenceLayer {
    /* 0x00 */ u8 enabled : 1;
    /* 0x00 */ u8 finished : 1;
    /* 0x00 */ u8 muted : 1;
    /* 0x00 */ u8 continuousNotes : 1; // keep the same note for consecutive notes with the same sound
    /* 0x00 */ u8 bit3 : 1;            // "loaded"?
    /* 0x00 */ u8 ignoreDrumPan : 1;
    /* 0x00 */ u8 bit1 : 1;            // "has initialized continuous notes"?
    /* 0x00 */ u8 notePropertiesNeedInit : 1;
    /* 0x01 */ Stereo stereo;
    /* 0x02 */ u8 instOrWave;
    /* 0x03 */ s8 unk_3;
    /* 0x04 */ u8 gateTime;
    /* 0x05 */ u8 portamentoTargetNote;
    /* 0x06 */ u8 pan;
    /* 0x07 */ u8 notePan;
    /* 0x08 */ Portamento portamento;
    /* 0x18 */ AdsrSettings adsr;
    /* 0x20 */ u16 portamentoTime;
    /* 0x22 */ s16 transposition;
    /* 0x24 */ f32 freqScale;
    /* 0x28 */ f32 velocitySquare;
    /* 0x2C */ f32 noteVelocity;
    /* 0x30 */ f32 noteFreqScale;
    /* 0x34 */ u16 shortNoteDefaultDelay;    
    /* 0x36 */ u16 lastDelay;
    /* 0x38 */ s16 delay;
    /* 0x3A */ s16 gateDelay;
    /* 0x3C */ s16 delay2;
    /* 0x40 */ struct Note *note;
    /* 0x44 */ Instrument* instrument;
    /* 0x48 */ TunedSample *tunedSample;
    /* 0x4C */ SequenceChannel *channel;
    /* 0x50 */ SeqScriptState state;
    /* 0x6C */ AudioListItem listItem;
    /* 0x7C */ UNK_TYPE pad7C[4];
} SequenceLayer; //size = 0x80

typedef struct {
    /* 0x000 */ s16 adpcmdecState[16];
    /* 0x020 */ s16 finalResampleState[16];
    /* 0x040 */ s16 mixEnvelopeState[32];
    /* 0x080 */ s16 unusedState[16];
    /* 0x0A0 */ s16 haasEffectDelayState[32];
    /* 0x0E0 */ s16 combFilterState[128];
} NoteSynthesisBuffers; // size = 0x1E0

typedef struct {
    /* 0x00 */ u8 restart;
    /* 0x01 */ u8 sampleDmaIndex;
    /* 0x02 */ u8 prevHaasEffectLeftDelaySize;
    /* 0x03 */ u8 prevHaasEffectRightDelaySize;
    /* 0x04 */ u8 reverbVol;
    /* 0x05 */ u8 numParts;
    /* 0x06 */ u16 samplePosFrac;
    /* 0x08 */ s32 samplePosInt;
    /* 0x0C */ NoteSynthesisBuffers* synthesisBuffers;
    /* 0x10 */ s16 curVolLeft;
    /* 0x12 */ s16 curVolRight;
    /* 0x14 */ char unk_14[0x6];
    /* 0x1A */ u8 combFilterNeedsInit;
    /* 0x1C */ char unk_1C[0x4];
} NoteSynthesisState; // size = 0x20

typedef struct {
    /* 0x00 */ struct SequenceChannel* channel;
    /* 0x04 */ u32 time;
    /* 0x08 */ s16* curve; // sineWave
    /* 0x0C */ f32 depth;
    /* 0x10 */ f32 rate;
    /* 0x14 */ u8 active;
    /* 0x16 */ u16 rateChangeTimer;
    // /* 0x18 */ u16 depthChangeTimer;
    // /* 0x1A */ u16 delay;
} VibratoState; // size = 0x18

typedef struct {
    /* 0x00 */ u8 priority;
    /* 0x01 */ u8 waveId;
    /* 0x02 */ u8 harmonicIndex; // the harmonic index for the synthetic wave contained in gWaveSamples (also matches
                                 // the base 2 logarithm of the harmonic order)
    /* 0x03 */ u8 fontId;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 stereoHeadsetEffects;
    /* 0x06 */ s16 adsrVolScaleUnused;
    /* 0x08 */ f32 portamentoFreqScale;
    /* 0x0C */ f32 vibratoFreqScale;
    /* 0x10 */ struct SequenceLayer* prevParentLayer;
    /* 0x14 */ struct SequenceLayer* parentLayer;
    /* 0x18 */ struct SequenceLayer* wantedParentLayer;
    /* 0x1C */ NoteAttributes attributes;
    /* 0x28 */ AdsrState adsr;
    /* 0x48 */ Portamento portamento;
    /* 0x58 */ VibratoState vibratoState;
} NotePlaybackState; // size = 0x70

typedef struct {
    struct {
        /* 0x00 */ volatile u8 enabled : 1;
        /* 0x00 */ u8 needsInit : 1;
        /* 0x00 */ u8 finished : 1; // ?
        /* 0x00 */ u8 unused : 1;
        /* 0x00 */ u8 stereoStrongRight : 1;
        /* 0x00 */ u8 stereoStrongLeft : 1;
        /* 0x00 */ u8 stereoHeadsetEffects : 1;
        /* 0x00 */ u8 usesHeadsetPanEffects : 1; // ?
    } bitField0;
    struct {
        /* 0x01 */ u8 reverbIndex : 3;
        /* 0x01 */ u8 bookOffset : 2;
        /* 0x01 */ u8 isSyntheticWave : 1;
        /* 0x01 */ u8 hasTwoParts : 1;
        /* 0x01 */ u8 useHaasEffect : 1;
    } bitField1;
    /* 0x02 */ u8 pad2[0xA];
    /* 0x0C*/ s16* waveSampleAddr;
} NoteSubEu; // size = 0x10

typedef struct Note {
    /* 0x00 */ AudioListItem listItem;
    /* 0x10 */ NoteSynthesisState synthesisState;
    /* 0x30 */ NotePlaybackState playbackState;
    /* 0xA0 */ char padA0[0x10];
    /* 0xB0 */ NoteSubEu noteSubEu;
} Note; // size = 0xC0

typedef struct {
    /* 0x00 */ u8 downsampleRate;
    /* 0x02 */ u8 windowSize;
    /* 0x02 */ u16 unk_2;
    /* 0x04 */ u16 decayRatio; // determines how much reverb persists
    /* 0x06 */ u16 unk_6;
} ReverbSettings; // size = 0x8

/**
 * The high-level audio specifications requested when initializing or resetting the audio heap.
 * The audio heap can be reset on various occasions, including on most scene transitions.
 */
typedef struct {
    /* 0x00 */ u32 samplingFrequency; // Target sampling rate in Hz
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 numNotes;
    /* 0x06 */ u8 numReverbs;
    /* 0x08 */ ReverbSettings* reverbSettings;
    /* 0x0C */ u16 unk_14;
    /* 0x10 */ u32 persistentSeqCacheSize;  // size of cache on audio pool to store sequences persistently
    /* 0x14 */ u32 persistentFontCacheSize; // size of cache on audio pool to store soundFonts persistently
    /* 0x18 */ u32
        persistentSampleBankCacheSize;      // size of cache on audio pool to store entire sample banks persistently
    /* 0x1C */ u32 temporarySeqCacheSize;   // size of cache on audio pool to store sequences temporarily
    /* 0x20 */ u32 temporaryFontCacheSize;  // size of cache on audio pool to store soundFonts temporarily
    /* 0x24 */ u32 temporarySampleBankCacheSize; // size of cache on audio pool to store entire sample banks temporarily
    /* 0x28 */ s32
        persistentSampleCacheSize; // size of cache in the audio misc pool to store individual samples persistently
    /* 0x2C */ s32
        temporarySampleCacheSize;  // size of cache in the audio misc pool to store individual samples temporarily
} AudioSpec;                       // size = 0x30

/**
 * The audio buffer stores the fully processed digital audio before it is sent to the audio interface (AI), then to the
 * digital-analog converter (DAC), then to play on the speakers. The audio buffer is written to by the rsp after
 * processing audio commands. This struct parameterizes that buffer.
 */
typedef struct {
    /* 0x00 */ s16 specUnk4;
    /* 0x02 */ u16 samplingFrequency;   // Target sampling rate in Hz
    /* 0x04 */ u16 aiSamplingFrequency; // True sampling rate of the audio interface (AI), see `osAiSetFrequency`
    /* 0x06 */ s16 samplesPerFrameTarget;
    /* 0x08 */ s16 maxAiBufferLength;
    /* 0x0A */ s16 minAiBufferLength;
    /* 0x0C */ s16 ticksPerUpdate; // for each audio thread update, number of ticks to process audio
    /* 0x0E */ s16 samplesPerTick;
    /* 0x10 */ s16 samplesPerTickMax;
    /* 0x12 */ s16 samplesPerTickMin;
    /* 0x14 */ f32 resampleRate;
    /* 0x18 */ f32 ticksPerUpdateInv;       // inverse (reciprocal) of ticksPerUpdate
    /* 0x1C */ f32 ticksPerUpdateInvScaled; // ticksPerUpdateInv scaled down by a factor of 256
} AudioBufferParameters;                    // size = 0x20

/**
 * Meta-data associated with a pool (contained within the Audio Heap)
 */
typedef struct {
    /* 0x0 */ u8* startRamAddr; // start addr of the pool
    /* 0x4 */ u8* curRamAddr;   // address of the next available memory for allocation
    /* 0x8 */ s32 size;         // size of the pool
    /* 0xC */ s32 numEntries;   // number of entries allocated to the pool
} AudioAllocPool;               // size = 0x10

/**
 * Audio cache entry data to store a single entry containing either a sequence, soundfont, or entire sample banks
 */
typedef struct {
    /* 0x0 */ u8* ramAddr;
    /* 0x4 */ u32 size;
    /* 0x8 */ s16 tableType;
    /* 0xA */ s16 id;
} AudioCacheEntry; // size = 0xC

/**
 * Audio cache entry data to store a single entry containing an individual sample
 */
typedef struct {
    /* 0x00 */ s8 inUse;
    /* 0x01 */ s8 origMedium;
    /* 0x02 */ s8 sampleBankId;
    /* 0x03 */ char unk_03[0x5];
    /* 0x08 */ u8* allocatedAddr;
    /* 0x0C */ void* sampleAddr;
    /* 0x10 */ u32 size;
} SampleCacheEntry; // size = 0x14

/**
 * Audio cache entry data to store individual samples
 */
typedef struct {
    /* 0x000 */ AudioAllocPool pool;
    /* 0x010 */ SampleCacheEntry entries[64];
    /* 0x290 */ s32 numEntries;
} AudioSampleCache; // size = 0x294

typedef struct {
    /* 0x00*/ u32 numEntries;
    /* 0x04*/ AudioAllocPool pool;
    /* 0x14*/ AudioCacheEntry entries[32];
} AudioPersistentCache; // size = 0x194

typedef struct {
    /* 0x00*/ u32 nextSide;
    /* 0x04*/ AudioAllocPool pool;
    /* 0x14*/ AudioCacheEntry entries[2];
} AudioTemporaryCache; // size = 0x3C

typedef struct {
    /* 0x000*/ AudioPersistentCache persistent;
    /* 0x194*/ AudioTemporaryCache temporary;
} AudioCache; // size = 0x1D0

typedef struct {
    /* 0x0 */ u32 persistentCommonPoolSize;
    /* 0x4 */ u32 temporaryCommonPoolSize;
} AudioCachePoolSplit; // size = 0x8

typedef struct {
    /* 0x0 */ u32 seqCacheSize;
    /* 0x4 */ u32 fontCacheSize;
    /* 0x8 */ u32 sampleBankCacheSize;
} AudioCommonPoolSplit; // size = 0xC

typedef struct {
    /* 0x0 */ u32 miscPoolSize;
    /* 0x4 */ u32 unkSizes[2];
    /* 0xC */ u32 cachePoolSize;
} AudioSessionPoolSplit; // size = 0x10

typedef struct {
    /* 0x00 */ u32 endAndMediumKey;
    /* 0x04 */ Sample* sample;
    /* 0x08 */ u8* ramAddr;
    /* 0x0C */ u32 encodedInfo;
    /* 0x10 */ s32 isFree;
} AudioPreloadReq; // size = 0x14

/**
 * Audio commands used to transfer audio requests from the graph thread to the audio thread
 */
typedef struct {
    /* 0x0 */ union {
        u32 opArgs;
        struct {
            u8 op;
            u8 arg0;
            u8 arg1;
            u8 arg2;
        };
    };
    /* 0x4 */ union {
        void* data;
        f32 asFloat;
        s32 asInt;
        u16 asUShort;
        s8 asSbyte;
        u8 asUbyte;
        u32 asUInt;
    };
} AudioCmd; // size = 0x8

typedef struct {
    /* 0x00 */ s8 status;
    /* 0x01 */ s8 delay;
    /* 0x02 */ s8 medium;
    /* 0x04 */ u8* ramAddr;
    /* 0x08 */ u32 curDevAddr;
    /* 0x0C */ u8* curRamAddr;
    /* 0x10 */ u32 bytesRemaining;
    /* 0x14 */ u32 chunkSize;
    /* 0x18 */ OSMesg retMsg;
    /* 0x1C */ OSMesgQueue* retQueue;
    /* 0x20 */ OSMesgQueue msgQueue;
    /* 0x38 */ OSMesg msg;
    /* 0x3C */ OSIoMesg ioMesg;
} AudioAsyncLoad; // size = 0x54

typedef struct {
    /* 0x00 */ u8 medium;
    /* 0x01 */ u8 seqOrFontId;
    /* 0x02 */ u8 instId;
    /* 0x04 */ u32 curDevAddr;
    /* 0x08 */ u8* curRamAddr;
    /* 0x0C */ u8* ramAddr;
    /* 0x10 */ s32 state;
    /* 0x14 */ s32 bytesRemaining;
    /* 0x18 */ s8* status; // write-only
    /* 0x1C */ Sample sample;
    /* 0x2C */ OSMesgQueue msgQueue;
    /* 0x44 */ OSMesg msg;
    /* 0x48 */ OSIoMesg ioMesg;
} AudioSlowLoad; // size = 0x60

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ AudioSlowLoad slowLoad[2];
} AudioSlowLoadBuffer; // size = 0xC4

typedef struct {
    /* 0x00 */ u32 romAddr;
    /* 0x04 */ u32 size;
    /* 0x08 */ s8 medium;
    /* 0x09 */ s8 cachePolicy;
    /* 0x0A */ s16 shortData1;
    /* 0x0C */ s16 shortData2;
    /* 0x0E */ s16 shortData3;
} AudioTableEntry; // size = 0x10

typedef struct {
    /* 0x00 */ s16 numEntries;
    /* 0x02 */ s16 unkMediumParam;
    /* 0x04 */ u32 romAddr;
    /* 0x08 */ char pad[0x8];
    /* 0x10 */ AudioTableEntry entries[1]; // (dynamic size)
} AudioTable;                              // size >= 0x20

typedef struct {
    /* 0x00 */ u8* ramAddr;
    /* 0x04 */ u32 devAddr;
    /* 0x08 */ u16 sizeUnused;
    /* 0x0A */ u16 size;
    /* 0x0C */ u8 unused;
    /* 0x0D */ u8 reuseIndex; // position in sSampleDmaReuseQueue1/2, if ttl == 0
    /* 0x0E */ u8 ttl;        // duration after which the DMA can be discarded
} SampleDma;                  // size = 0x10

typedef struct {
    /* 0x00 */ OSTask task;
    /* 0x40 */ OSMesgQueue* msgQueue;
    /* 0x44 */ void* unk_44; // probably a message that gets unused.
    /* 0x48 */ char unk_48[0x8];
} AudioTask;                 // size = 0x50

typedef struct {
    /* 0x0000 */ char unk_0000;
    /* 0x0001 */ s8 numSynthesisReverbs;
    /* 0x0002 */ u16 unk_2; // reads from audio spec unk_14, never used, always set to 0x7FFF
    /* 0x0004 */ u16 unk_4;
    /* 0x0006 */ char unk_0006[0x0A];
    /* 0x0010 */ s16* curLoadedBook;
    /* 0x0014 */ NoteSubEu* noteSubsEu;
    /* 0x0018 */ SynthesisReverb synthesisReverbs[4];
    /* 0x0B38 */ char unk_0B38[0x30];
    /* 0x0B68 */ Sample* usedSamples[128];
    /* 0x0D68 */ AudioPreloadReq preloadSampleStack[128];
    /* 0x1768 */ s32 numUsedSamples;
    /* 0x176C */ s32 preloadSampleStackTop;
    /* 0x1770 */ AudioAsyncLoad asyncLoads[0x10];
    /* 0x1CF0 */ OSMesgQueue asyncLoadUnkMediumQueue;
    /* 0x1D08 */ char unk_1D08[0x40];
    /* 0x1D48 */ AudioAsyncLoad* curUnkMediumLoad;
    /* 0x1D4C */ u32 slowLoadPos;
    /* 0x1D50 */ AudioSlowLoad slowLoads[2];
    /* 0x1E18 */ OSPiHandle* cartHandle;
    /* 0x1E1C */ OSPiHandle* driveHandle;
    /* 0x1E20 */ OSMesgQueue externalLoadQueue;
    /* 0x1E38 */ OSMesg externalLoadMsgBuf[16];
    /* 0x1E78 */ OSMesgQueue preloadSampleQueue;
    /* 0x1E90 */ OSMesg preloadSampleMsgBuf[16];
    /* 0x1ED0 */ OSMesgQueue gCurAudioFrameDmaQueue;
    /* 0x1EE8 */ OSMesg curAudioFrameDmaMsgBuf[64];
    /* 0x1FE8 */ OSIoMesg curAudioFrameDmaIoMsgBuf[64];
    /* 0x25E8 */ OSMesgQueue syncDmaQueue;
    /* 0x2600 */ OSMesg syncDmaMesg;
    /* 0x2604 */ OSIoMesg syncDmaIoMesg;
    /* 0x261C */ SampleDma* sampleDmas;
    /* 0x2620 */ u32 sampleDmaCount;
    /* 0x2624 */ u32 sampleDmaListSize1;
    /* 0x2628 */ s32 unused2628;
    /* 0x262C */ u8 sampleDmaReuseQueue1[0x100]; // read pos <= write pos, wrapping mod 256
    /* 0x272C */ u8 sampleDmaReuseQueue2[0x100];
    /* 0x282C */ u8 sampleDmaReuseQueue1RdPos;   // Read position for short-lived sampleDma
    /* 0x282D */ u8 sampleDmaReuseQueue2RdPos;   // Read position for long-lived sampleDma
    /* 0x282E */ u8 sampleDmaReuseQueue1WrPos;   // Write position for short-lived sampleDma
    /* 0x282F */ u8 sampleDmaReuseQueue2WrPos;   // Write position for long-lived sampleDma
    /* 0x2830 */ AudioTable* sequenceTable;
    /* 0x2834 */ AudioTable* soundFontTable;
    /* 0x2838 */ AudioTable* sampleBankTable;
    /* 0x283C */ u8* sequenceFontTable;
    /* 0x2840 */ u16 numSequences;
    /* 0x2844 */ SoundFont* soundFontList;
    /* 0x2848 */ AudioBufferParameters audioBufferParameters;
    /* 0x2870 */ f32 unk_2870;
    /* 0x2874 */ s32 sampleDmaBufSize1;
    /* 0x2874 */ s32 sampleDmaBufSize2;
    /* 0x287C */ char unk_287C[0x10];
    /* 0x288C */ s32 sampleDmaBufSize;
    /* 0x2890 */ s32 maxAudioCmds;
    /* 0x2894 */ s32 numNotes;
    /* 0x2898 */ s16
        maxTempo; // Maximum possible tempo (seqTicks per minute), using every tick as a seqTick to process a .seq file
    /* 0x289A */ s8 soundMode;
    /* 0x289C */ s32 totalTaskCount; // The total number of times the top-level function on the audio thread has run
                                     // since audio was initialized
    /* 0x28A0 */ s32 gCurAudioFrameDmaCount;
    /* 0x28A4 */ s32 rspTaskIndex;
    /* 0x28A8 */ s32 curAiBufIndex;
    /* 0x28AC */ Acmd* abiCmdBufs[2]; // Pointer to audio heap where the audio binary interface command lists (for the
                                      // rsp) are stored. Two lists that alternate every frame
    /* 0x28B4 */ Acmd* curAbiCmdBuf;  // Pointer to the currently active abiCmdBufs
    /* 0x28B8 */ AudioTask* curTask;
    /* 0x28BC */ char unk_28BC[0x4];
    /* 0x28C0 */ AudioTask rspTask[2];
    /* 0x2960 */ f32 maxTempoTvTypeFactors; // tvType factors that impact maxTempo, in units of milliseconds/frame
    /* 0x2964 */ s32 refreshRate;
    /* 0x2968 */ s16* aiBuffers[3];
    /* 0x2974 */ s16 aiBufLengths[3];
    /* 0x297C */ u32 audioRandom;
    /* 0x2980 */ s32 audioErrorFlags;
    /* 0x2984 */ volatile u32 resetTimer;
    /* 0x2988 */ char unk_2988[0x8];
    /* 0x2990 */ AudioAllocPool
        sessionPool; // A sub-pool to main pool, contains all sub-pools and data that changes every audio reset
    /* 0x29A0 */ AudioAllocPool externalPool; // pool allocated externally to the audio heap. Never used in game
    /* 0x29B0 */ AudioAllocPool
        initPool; // A sub-pool to the main pool, contains all sub-pools and data that persists every audio reset
    /* 0x29C0 */ AudioAllocPool miscPool;  // A sub-pool to the session pool.
    /* 0x29D0 */ char unk_29D0[0x20];      // probably two unused pools
    /* 0x29F0 */ AudioAllocPool cachePool; // The common pool for cache entries
    /* 0x2A00 */ AudioAllocPool
        persistentCommonPool;              // A sub-pool to the cache pool, contains caches for data stored persistently
    /* 0x2A10 */ AudioAllocPool
        temporaryCommonPool;               // A sub-pool to the cache pool, contains caches for data stored temporarily
    /* 0x2A20 */ AudioCache seqCache;      // Cache to store sequences
    /* 0x2B30 */ AudioCache fontCache;     // Cache to store soundFonts
    /* 0x2C40 */ AudioCache sampleBankCache;         // Cache for loading entire sample banks
    /* 0x2D50 */ AudioAllocPool permanentPool;       // Pool to store audio data that is always loaded. Used for sfxs
    /* 0x2D60 */ AudioCacheEntry permanentCache[32]; // individual entries to the permanent pool
    /* 0x2EE0 */ AudioSampleCache persistentSampleCache; // Stores individual samples persistently
    /* 0x3174 */ AudioSampleCache temporarySampleCache;  // Stores individual samples temporarily
    /* 0x3408 */ AudioSessionPoolSplit sessionPoolSplit; // splits session pool into the cache pool and misc pool
    /* 0x3418 */ AudioCachePoolSplit cachePoolSplit; // splits cache pool into the persistent & temporary common pools
    /* 0x3420 */ AudioCommonPoolSplit
        persistentCommonPoolSplit; // splits persistent common pool into caches for sequences, soundFonts, sample banks
    /* 0x342C */ AudioCommonPoolSplit
        temporaryCommonPoolSplit;  // splits temporary common pool into caches for sequences, soundFonts, sample banks
    /* 0x3438 */ u8 sampleFontLoadStatus[0x30];
    /* 0x3468 */ u8 fontLoadStatus[0x30];
    /* 0x3498 */ u8 seqLoadStatus[0x80];
    /* 0x3518 */ volatile u8 resetStatus;
    /* 0x3519 */ u8 specId;
    /* 0x351C */ s32 audioResetFadeOutFramesLeft;
    /* 0x3520 */ f32* adsrDecayTable; // A table on the audio heap that stores decay rates used for adsr
    /* 0x3524 */ u8* audioHeap;
    /* 0x3528 */ u32 audioHeapSize;
    /* 0x352C */ Note* notes;
    /* 0x3530 */ SequencePlayer seqPlayers[4];
    /* 0x3AB0 */ SequenceLayer sequenceLayers[64];
    /* 0x5AB0 */ SequenceChannel sequenceChannelNone;
    /* 0x5B84 */ s32 noteSubEuOffset;
    /* 0x5B88 */ AudioListItem layerFreeList;
    /* 0x5B98 */ NotePool noteFreeLists;
    /* 0x5BD8 */ u8 threadCmdWritePos;
    /* 0x5BD9 */ u8 threadCmdReadPos;
    /* 0x5BDA */ u8 threadCmdQueueFinished;
    /* 0x5BDC */ u16 threadCmdChannelMask[4]; // bitfield for 16 channels. When processing an audio thread channel
                                              // command on all channels, only process channels with their bit set.
    /* 0x5BE4 */ OSMesgQueue* audioResetQueueP;
    /* 0x5BE8 */ OSMesgQueue* taskStartQueueP;
    /* 0x5BEC */ OSMesgQueue* threadCmdProcQueueP;
    /* 0x5BF0 */ OSMesgQueue taskStartQueue;
    /* 0x5C08 */ OSMesgQueue threadCmdProcQueue;
    /* 0x5C20 */ OSMesgQueue audioResetQueue;
    /* 0x5C38 */ OSMesg taskStartMsgBuf[1];
    /* 0x5C3C */ OSMesg audioResetMsgBuf[1];
    /* 0x5C40 */ OSMesg threadCmdProcMsgBuf[4];
    /* 0x5C50 */ AudioCmd threadCmdBuf[0x100]; // Audio thread commands used to transfer audio requests from the graph
                                               // thread to the audio thread
} AudioContext;                                // size = 0x6450

typedef struct {
    /* 0x00 */ u8 reverbVol;
    /* 0x01 */ u8 gain; // Increases volume by a multiplicative scaling factor. Represented as a UQ4.4 number
    /* 0x02 */ u8 pan;
    /* 0x03 */ Stereo stereo;
    /* 0x04 */ f32 frequency;
    /* 0x08 */ f32 velocity;
    /* 0x0C */ char unk_0C[0x4];
    /* 0x10 */ s16* filter;
    /* 0x14 */ u8 combFilterSize;
    /* 0x16 */ u16 combFilterGain;
} NoteSubAttributes; // size = 0x18

typedef struct {
    /* 0x0 */ s16 unk_00; // set to 0x1C00, unused
    /* 0x2 */ s16 seqTicksPerBeat;
} TempoData;              // size = 0x4

typedef struct {
    /* 0x00 */ u32 heapSize; // total number of bytes allocated to the audio heap. Must be <= the size of `gAudioHeap`
                             // (ideally about the same size)
    /* 0x04 */ u32 initPoolSize; // The entire audio heap is split into two pools.
    /* 0x08 */ u32 permanentPoolSize;
} AudioHeapInitSizes;            // size = 0xC

typedef struct {
    AudioAllocPool pool;
    AudioCacheEntry entry[32];
} PermanentCache; // size = 0x190

typedef struct {
    /* 0x00 */ s32 sampleBankId1;
    /* 0x04 */ s32 sampleBankId2;
    /* 0x08 */ s32 baseAddr1;
    /* 0x0C */ s32 baseAddr2;
    /* 0x10 */ u32 medium1;
    /* 0x14 */ u32 medium2;
} SampleBankRelocInfo; // size = 0x18

typedef struct {
    Drum** drums;
    Instrument* instruments[1];
} SoundFontData;

typedef struct {
    /* 0x0 */ u8 type;
    /* 0x1 */ u8 unk_1;
    /* 0x2 */ u32 unk_2;
    /* 0x4 */ u8 unk_4;
    /* 0x5 */ u8 unk_5;
    /* 0x6 */ u8 unk_6;
    /* 0x8 */ u16 unk_8;
} PlaylistCmd; // size:0xA

typedef struct {
    /* 0x0 */ u16 unk_0;
    /* 0x2 */ u16 unk_2;
    /* 0x4 */ u8 unk_4;
    /* 0x5 */ u8 unk_5;
} SoundTestTrack; // size: 0x6

void AudioHeap_ResetLoadStatus(void);
void AudioHeap_DiscardFont(s32 fontId);
void AudioHeap_DiscardSequence(s32 seqId);
void* AudioHeap_AllocZeroed(AudioAllocPool* pool, u32 size);
void* AudioHeap_Alloc(AudioAllocPool* pool, u32 size);
void AudioHeap_InitPool(AudioAllocPool* pool, void* ramAddr, u32 size);
void AudioHeap_InitPersistentCache(AudioPersistentCache* persistent);
void AudioHeap_InitTemporaryCache(AudioTemporaryCache* temporary);
void AudioHeap_ResetPool(AudioAllocPool* pool);
void AudioHeap_InitMainPools(s32 initPoolSize);
void AudioHeap_InitSessionPools(AudioSessionPoolSplit* split);
void AudioHeap_InitCachePools(AudioCachePoolSplit* split);
void AudioHeap_InitPersistentPoolsAndCaches(AudioCommonPoolSplit* split);
void AudioHeap_InitTemporaryPoolsAndCaches(AudioCommonPoolSplit* split);
void* AudioHeap_AllocCached(s32 tableType, s32 size, s32 cache, s32 id);
s32 AudioHeap_SearchCaches(s32 tableType, s32 cache, s32 id);
void* AudioHeap_SearchRegularCaches(s32 tableType, s32 cache, s32 id);
void func_8000CAF4(f32 p, f32 q, u16* out);
void AudioHeap_UpdateReverbs(void);
void AudioHeap_ClearCurrentAiBuffer(void);
s32 AudioHeap_ResetStep(void);
void AudioHeap_Init(void);
void* AudioHeap_SearchPermanentCache(s32 tableType, s32 id);
u8* AudioHeap_AllocPermanent(s32 tableType, s32 id, u32 size);
void* AudioHeap_AllocTemporarySampleCache(s32 size, s32 fontId, s32 sampleAddr, s8 medium);
void* AudioHeap_AllocPersistentSampleCache(s32 size, s32 fontId, s32 sampleAddr, s8 medium);
void* AudioHeap_AllocPersistentSampleCache_2(u32 size, s32 fontId, s32 sampleAddr, s8 medium);
void AudioHeap_InitSampleCaches(u32 persistentSampleCacheSize, u32 temporarySampleCacheSize);
SampleCacheEntry* AudioHeap_AllocTemporarySampleCacheEntry(s32 size);
void AudioHeap_DiscardSampleCacheEntry(SampleCacheEntry* entry);
void AudioHeap_UnapplySampleCache(SampleCacheEntry* entry, Sample* sample);
SampleCacheEntry* AudioHeap_AllocPersistentSampleCacheEntry(u32 size);
void AudioHeap_DiscardSampleCaches(void);


void func_8000E4A0(void);
void* func_8000E5A8(u32, u32, u32, u8*, s32);
void func_8000E8E0(s32);
void func_8000EBB4(AudioTable*, u8*, u16);
void* func_8000EC14(s32, u32*);
void func_8000ECC0(s32, s32);
s32 func_8000ED28(Sample*, s32);
s32 func_8000EE14(s32, s32, s32);
void func_8000EEE4(s32, s32, s32, OSMesgQueue*);
void func_8000EF48(s32, s32, s32, OSMesgQueue*);
void* func_8000F010(s32, u32*);
void func_8000F078(s32);
s32 func_8000F158(s32);
void func_8000F200(u32, u32*, s32);
void func_8000F220(u32, u32*, s32);
void* func_8000F354(s32);
void* func_8000F388(u32, s32*);
void* func_8000F478(s32);
void* func_8000F554(u32, u32, s32*);
s32 func_8000F790(s32, u32);
void* func_8000F7CC(s32, s32);
AudioTable* func_8000F820(s32);
void func_8000F864(s32, u32, void*);
void func_8000FA28(u32, u8*, u32, s32);
void func_8000FB50(u32, u8*, s32, s32);
s32 func_8000FBA8(OSIoMesg*, u32, s32, u32, void*, u32, OSMesgQueue*, s32, const char*);
s32 func_8000FC7C(s32, s32*);
void func_8000FC8C(s32, s32, u8*, s32);
void func_8000FCA0(u32, u32);
void* func_8000FCC0(s32, s32, s32, s32, OSMesgQueue*);
void func_8000FF9C(s32);
void func_8000FFCC(void);
s32 func_800105EC(s32, u8, s8*);
Sample* func_8001079C(s32, s32);
void func_80010808(AudioSlowLoad*);
void func_80010870(s32);
void func_800109FC(AudioSlowLoad*, s32);
void func_80010A80(s32, u8*, u32, s32);
AudioAsyncLoad* func_80010AD8(u32, u8*, s32, s32, s32, OSMesgQueue*, u32);
void func_80010BF0(s32);
void func_80010C60(AudioAsyncLoad*, s32);
void func_80010EFC(AudioAsyncLoad*, u32);
void func_80010F8C(s32, u8*, u32, s32);
void func_80010FE4(TunedSample*, u32, SampleBankRelocInfo*);
s32 func_80011120(s32, u32, SampleBankRelocInfo*, s32);
s32 func_8001154C(s32);
s32 func_80011710(Sample*, s32, Sample**);
s32 func_80011758(s32, Sample**);









void func_80011890(Note*, NoteAttributes*);
void func_80011C58(Note*, f32);
Instrument* func_80011D4C(s32, s32);
Drum* func_80011DFC(s32, s32);
void func_80011EB8(Note*);
void func_80011F4C(Note*);
void func_80012438(SequenceLayer*, s32);
void func_8001266C(SequenceLayer*);
void func_8001268C(SequenceLayer*);
s32 func_800126AC(Note*, SequenceLayer*, s32);
void func_800127B0(Note*, SequenceLayer*);
void func_80012854(AudioListItem*);
void func_80012864(NotePool*);
void func_800128B4(void);
void func_80012964(NotePool*);
void func_80012AC4(NotePool*, s32);
void func_80012C00(AudioListItem*, AudioListItem*);
void func_80012C40(Note*);
Note* func_80012C6C(AudioListItem*, s32);
void func_80012CEC(Note *, SequenceLayer *);
void func_80012E28(Note *, SequenceLayer *);
void func_80012E5C(Note* , SequenceLayer *);
Note *func_80012E88(NotePool* , SequenceLayer *);
Note *func_80012ED4(NotePool* , SequenceLayer *);
Note *func_80012F24(NotePool* , SequenceLayer *);
Note *func_8001301C(SequenceLayer *);
void func_800132E8(void);





void func_800144E4(SequencePlayer*);
void func_800145BC(AudioListItem*, AudioListItem*);
void func_80016804(s32);
void func_800168BC(void);


void func_80016A50(void);
void func_800182F4(s32);
void func_80019290(s32, void*);
void Audio_PlaySfx(u32, f32*, u8, f32*, f32*, s8*);
void func_8001A38C(u8, f32*);
void func_8001A55C(f32*, u32);
void Audio_KillSfx(f32*);
void func_8001A838(u32);
void func_8001ACDC(s32);
void func_8001AD00(u32);
void func_8001AE58(void);
s32 func_8001AE78(void);
s32 func_8001AED4(void);
void func_8001AF40(s32);
u8* func_8001C3EC(void);
void func_8001C8B8(u8);
void func_8001CA24(u8);
void func_8001CB80(u8, u8);
void func_8001CCDC(u8, f32 *);
void func_8001CE28(u8, f32 *);
void func_8001CFA8(f32);
void func_8001D034(f32*, s32, u8);
void func_8001D10C(f32*, u32);
void func_8001D15C(u8);
void func_8001D1C8(u8, u32);
void func_8001D2FC(f32*, u16);
void func_8001D3A0(f32*, u16);
void func_8001D400(s8);
void func_8001D410(s32);
void func_8001D444(u8, u16, u8, u8);
void func_8001D4AC(u16, u8, u8, u8);
void func_8001D520(void);
void func_8001D638(u8);
void func_8001D6DC(s32);
void func_8001D8A8(u8, u8);
void func_8001D8F4(u8);
void func_8001DA90(u8);
void func_8001DBD0(s32);
void func_8001DC6C(u8, u16);
void func_8001DCE0(void);
void func_8001DECC(void);

SPTask* func_8001DF50(void);
void func_8001EE00(void);
void func_8001EE3C(void);



extern u8 D_800C57E8[4];

extern u8 D_800C5CE0[5][5];
extern u8 D_800C5CFC[5][5];
extern u8 D_800C5D18;
extern u8 D_800C5D1C;
extern u8 D_800C5D20;
extern u16 D_800C5D24;
extern f32 D_800C5D28[3];
extern f32 D_800C5D34;
extern s8 D_800C5D3C;
extern s32 D_800C5D40;
extern u8 D_800C5D44;
extern u8 D_800C5D48;
extern u8 D_800C5D4C;
extern u8 D_800C5D50[3];
extern u8 D_800C5D54;
extern u8 D_800C5D58;

// file split?

extern u8 D_800C5D60;
extern u8 D_800C5D64;
extern u8 D_800C5D68[3];
extern u8  D_800C5D6C[29][7];
extern u8  D_800C5E38[29];
extern s32 D_800C5E58[5];

// file split?

extern u8  D_800C5E70;
extern f32 D_800C5E74;
extern f32 D_800C5E78;
extern u8  D_800C5E7C;
extern s32 D_800C5E80;
extern u8  D_800C5E84;
extern u32 D_800C5E88[];
extern SoundTestTrack D_800C5EE4[];
extern PlaylistCmd gPlaylists[][100];

// file split?

extern f32 D_800C7380;
extern s32 D_800C7384;
extern s32 D_800C7388;
extern u8 D_800C738C;
extern u8 D_800C7390;
extern u8 D_800C7394;
extern s32 D_800C7398[128];
extern f32 D_800C7414;
extern f32 D_800C7418[16][2];
extern f32 D_800C749C[13];


extern AudioSpec gAudioSpecs[];
extern s16 gSeqTicksPerBeat;
extern s32 gAudioHeapSize;
extern s32 gInitPoolSize;
extern u32 gPermanentPoolSize;
extern u16 gSequenceMedium;
extern u16 gSoundFontMedium;
extern u16 gSampleBankMedium;



extern s8 D_800C7C50;
extern s8 D_800C7C54;
extern OSMesgQueue* D_800C7C58;
extern OSMesgQueue* D_800C7C5C;
extern OSMesgQueue* D_800C7C60;
extern OSMesgQueue* D_800C7C64;
extern s32 D_800C7C68;
extern AudioTask* D_800C7C6C;
extern s32 D_800C7C70;
extern u8 D_800C7C74;
extern u8 D_800C7C78;

extern s32 D_80146D80;

extern AudioSlowLoadBuffer gSlowLoads;
// extern AudioSlowLoad D_80146D94[2];


extern u64 gAudioContextStart[4];
extern SynthesisReverb gSynthReverbs[4];
// 0x10
extern u16 D_8014C1B0;
extern s8 D_8014C1B2;
extern s8 gNumSynthReverbs;
extern s16 D_8014C1B4;
extern NoteSubEu* gNoteSubsEu;
// 0x4
extern AudioAllocPool gSessionPool;
extern AudioAllocPool gInitPool;
extern AudioAllocPool gMiscPool;
// 0x20
extern AudioAllocPool gCachePool;
extern AudioAllocPool gPersistentCommonPool;
extern AudioAllocPool gTemporaryCommonPool;
extern AudioCache gSeqCache; // seqCache
extern AudioCache gFontCache; // fontCache
extern AudioCache gSampleBankCache; // sampleBankCache
extern PermanentCache gPermanentPool;
extern AudioSampleCache gPersistentSampleCache;
// 0x4
extern AudioSampleCache gTemporarySampleCache;
// 0x4
extern AudioSessionPoolSplit gSessionPoolSplit;
extern AudioCachePoolSplit gCachePoolSplit;
extern AudioCommonPoolSplit gPersistentCommonPoolSplit;
// 0x4
extern AudioCommonPoolSplit gTemporaryCommonPoolSplit;
// 0x4
extern u8 gSampleFontLoadStatus[64];
extern u8 gFontLoadStatus[64];
extern u8 gSeqLoadStatus[256];
extern volatile u8 gResetStatus;
extern u8 gAudioSpecId;
extern s32 gResetFadeoutFramesLeft;
// 0x1000 gap
extern Note* gNotes;
// 0x4
extern SequencePlayer gSeqPlayers[4];
extern SequenceChannel gSeqChannels[48];
extern SequenceLayer gSeqLayers[64];
extern SequenceChannel gSeqChannelNone;
extern AudioListItem gLayerFreeList;
extern NotePool gNoteFreeLists;
extern Sample* gUsedSamples[128];
extern AudioPreloadReq gPreloadSampleStack[128];
extern s32 gNumUsedSamples;
extern s32 gPreloadSampleStackTop;
extern AudioAsyncLoad gAsyncLoads[16];
extern OSMesgQueue gExternalLoadQueue;
extern OSMesg gExternalLoadMsg[16];
extern OSMesgQueue gPreloadSampleQueue;
extern OSMesg gPreloadSampleMsg[16];
extern OSMesgQueue gCurAudioFrameDmaQueue;
extern OSMesg gCurAudioFrameDmaMsg[64];
extern OSIoMesg gCurAudioFrameDmaIoMsgBuf[64];
extern OSMesgQueue gSyncDmaQueue;
extern OSMesg gSyncDmaMsg[1];
// 0x4
extern OSIoMesg gSyncDmaIoMsg;
extern SampleDma gSampleDmas[0x100];
extern u32 gSampleDmaCount;
extern u32 gSampleDmaListSize1;
extern s32 D_80155A50;
// 0x4
extern u8 gSampleDmaReuseQueue1[0x100];
extern u8 gSampleDmaReuseQueue2[0x100];
extern u8 gSampleDmaReuseQueue1RdPos;
extern u8 gSampleDmaReuseQueue2RdPos;
extern u8 gSampleDmaReuseQueue1WrPos;
extern u8 gSampleDmaReuseQueue2WrPos;
extern AudioTable *gSequenceTable;
extern AudioTable* gSoundFontTable;
extern AudioTable *gSampleBankTable;
extern u8 *gSeqFontTable;
extern s16 gNumSequences;
extern SoundFont* gSoundFontList;
// 0x4
extern AudioBufferParameters gAudioBufferParams;
extern s32 gSampleDmaBuffSize;
extern s32 gMaxAudioCmds;
extern s32 gNumNotes;
extern u16 gMaxTempo;
extern s8 gAudioSoundMode;
extern volatile s32 gAudioTaskCountQ;
extern s32 gCurAudioFrameDmaCount;
extern s32 gAudioTaskIndexQ;
extern s32 gCurAiBuffIndex;
extern void* gAbiCmdBuffs[2];
extern UNK_TYPE D_80155CC0;
extern AudioTask* gAudioCurTask;
extern AudioTask gAudioRspTasks[2];
extern f32 gMaxTempoTvTypeFactors;
extern s32 gRefreshRate;
extern u16* gAiBuffers[3];
extern u16 gAiBuffLengths[3];
extern UNK_TYPE D_80155D84;
extern UNK_TYPE D_80155D88;
extern volatile u32 gResetTimer;

extern u64 gAudioContextEnd[4];

extern OSMesgQueue D_80155DA0;
extern OSMesgQueue D_80155DB8;
extern OSMesgQueue D_80155DD0;
extern OSMesgQueue D_80155DE8;
extern AudioCmd    D_80155E00[256];
extern OSMesg      D_80156600[1];
extern OSMesg      D_80156608[4];
extern OSMesg      D_80156618[1];
extern OSMesg      D_8015661C[1];




#endif

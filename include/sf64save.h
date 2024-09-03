#ifndef SF64_SAVE
#define SF64_SAVE

#include "PR/ultratypes.h"

#define RANKING_MAX (10) // Maximum number of entries in the ranking
#define ROUTE_MAX (7)    // Maximum number of planets in a route
#define ENTRY_MAX (3)    // Maximum number of letters for name entry

typedef struct {
    /* bit 0 */ u8 unk_0 : 3; // unused
    /* bit 3 */ u8 expertMedal : 1;
    /* bit 4 */ u8 expertClear : 1;
    /* bit 5 */ u8 played : 1;
    /* bit 6 */ u8 normalMedal : 1;
    /* bit 7 */ u8 normalClear : 1;
} PlanetData; // size = 0x1

typedef struct PlanetStats {
    /* bit 0 */ u16 hitCount : 8;
    /* bit 8 */ u16 planetId : 4;
    /* bit C */ u16 unk_C : 1; // hitCount related
    /* bit D */ u16 peppyAlive : 1;
    /* bit E */ u16 falcoAlive : 1;
    /* bit F */ u16 slippyAlive : 1;
} PlanetStats; // size = 0x10

typedef struct SaveData {
    /* 0x00 */ PlanetData planet[16];
    /* 0x10 */ char pad10[0x4];
    /* 0x14 */ u8 soundMode;
    /* 0x15 */ u8 musicVolume;
    /* 0x16 */ u8 voiceVolume;
    /* 0x17 */ u8 sfxVolume;
    /* 0x18 */ u8 rankNameEntry[RANKING_MAX][ENTRY_MAX]; // Name entries in the ranking
    /* 0x36 */ u8 rankingRoute[RANKING_MAX];  // Maximum number of planets played in the current record
    /* 0x40 */ u8 rankingLives[RANKING_MAX];  // Player lives left in the current record
    /* 0x4A */ u16 rankingMedal[RANKING_MAX]; // Medals obtained in the current record
    /* 0x5E */ PlanetStats stats[RANKING_MAX][ROUTE_MAX];
    /* 0xEA */ u8 unk_EA;
    /* 0xEB */ char padEB[0x3];
    /* 0xEE */ char padEE[0x10];
} SaveData; // size = 0xFE

typedef struct {
    /* 0x00 */ union {
        u8 raw[sizeof(SaveData)];
        SaveData data;
    };
    /* 0xFE */ u16 checksum;
} Save; // size = 0x100

typedef struct {
    /* 0x000 */ Save save;
    /* 0x100 */ Save backup;
} SaveFile; // size = 0x200

s32 Save_Write(void);
s32 Save_Read(void);

void Save_ReadData(void);
void Save_WriteData(void);

s32 Save_WriteEeprom(SaveFile*);
s32 Save_ReadEeprom(SaveFile*);

extern SaveFile gSaveIOBuffer;
extern SaveFile sPrevSaveData;
extern Save gDefaultSave;
extern SaveFile gSaveFile;

#endif

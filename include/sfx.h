#ifndef SFX_H
#define SFX_H

#define SFX_FLAG_18 (1 << 18)  // makes distance ignore z position? probably more
#define SFX_FLAG_19 (1 << 19)
#define SFX_FLAG_20 (1 << 20)  // make priority ignore distance
#define SFX_FLAG_21 (1 << 21)  // make reverb ignore distance
#define SFX_FLAG_22 (1 << 22)  // make volume ignore distance
#define SFX_FLAG_23 (1 << 23)  // make noisy

#define SFX_FLAG_27 (1 << 27)  // allow duplicate requests

#define SFX_BANK_SHIFT 28
#define SFX_STATE_SHIFT 24
#define SFX_RANGE_SHIFT 16
#define SFX_IMPORT_SHIFT 8

#define SFX_BANK_MASK (0xF << SFX_BANK_SHIFT)
#define SFX_STATE_FLAG (1 << SFX_STATE_SHIFT)
#define SFX_RANGE_MASK (3 << SFX_RANGE_SHIFT)
#define SFX_IMPORT_MASK (0xFF << SFX_IMPORT_SHIFT)

#define SFX_BANK(sfxId) ((((sfxId) & SFX_BANK_MASK) >> SFX_BANK_SHIFT) & 0xFF)
#define SFX_BANK_ALT(sfxId) (((sfxId) >> SFX_BANK_SHIFT) & 0xFF)
#define SFX_STATE(sfxId) (((sfxId) & SFX_STATE_FLAG) >> SFX_STATE_SHIFT)
#define SFX_RANGE(sfxId) ((((sfxId) & SFX_RANGE_MASK) >> SFX_RANGE_SHIFT) & 0xFF)
#define SFX_IMPORT(sfxId) ((((sfxId) & SFX_IMPORT_MASK) >> SFX_IMPORT_SHIFT) & 0xFF)
#define SFX_INDEX(sfxId) ((sfxId) & 0xFF)

#define SFX_PACK(bank, index, range, importance, flags) \
        ((((bank)<<SFX_BANK_SHIFT)&SFX_BANK_MASK)|(((range)<<SFX_RANGE_SHIFT)&SFX_RANGE_MASK)|\
        (((importance)<<SFX_IMPORT_SHIFT)&SFX_IMPORT_MASK)|((index)&0xFF)|SFX_STATE_FLAG|(flags))

typedef enum SfxBankId {
    SFX_BANK_PLAYER,
    SFX_BANK_1,
    SFX_BANK_2,
    SFX_BANK_3,
    SFX_BANK_SYSTEM,
} SfxBankId;

#define NA_SE_NONE                  0x00000000

#define NA_SE_TURRET_SHOT           0x09000000 // Invented name. Appears in unused turret mode.
#define NA_SE_ARWING_SHOT           0x09400000
#define NA_SE_SMART_BOMB_SHOT       0x09001001
#define NA_SE_ARWING_BOOST          0x09000002
#define NA_SE_ARWING_DASH           0x09004002 // Boost variant used by Venom 1 intro and boss Titania
#define NA_SE_ARWING_BRAKE          0x09000003
#define NA_SE_ARWING_EXPLOSION      0x0903F004
#define NA_SE_SLIPPY_HIT            0x09000004 // From Sector X boss
#define NA_SE_ARWING_ENGIN_GRD      0x0100F005
#define NA_SE_TANK_ENGIN            0x0100F006
#define NA_SE_WING_OPEN             0x09000007
#define NA_SE_BOMB_CHARGE           0x01008008 // iniial bomb flight. only plays for 1 frame. Bombs were chargeable?
#define NA_SE_BOMB_EXPLODE0         0x0901A009 // unused bomb explosion
#define NA_SE_BOMB_EXPLODE1         0x0903A00A // used bomb explosion
#define NA_SE_BOMB_EXPLODE2         0x0901A00B // unused bomb explosion
#define NA_SE_BACKUP_CLEAR          0x0940A00B // Also used for explosion on Corneria at game start
#define NA_SE_ARWING_TWIN_LASER     0x0940800C
#define NA_SE_ZERO_SHIELD           0x0900000D // Unreferenced. Sounds like an explosion
#define NA_SE_DAMAGE_S              0x0903900E
#define NA_SE_DAMAGE_L              0x0903A00F
#define NA_SE_ARWING_DOWN           0x0900C010
#define NA_SE_ROLLING_REFLECT       0x09007011
#define NA_SE_ROLLING_AIR           0x09000012
#define NA_SE_WING_OPEN_END         0x09000013
#define NA_SE_LIFT_UP_END           0x09002013
#define NA_SE_TANK_SHOT             0x09000014 // Also used for on-foot shot
#define NA_SE_TANK_BOUND            0x09008015 // Same as NA_SE_TANK_WALL_HIT
#define NA_SE_TANK_WALL_HIT         0x09008015 // Same as NA_SE_TANK_BOUND
#define NA_SE_TANK_GO_UP            0x01008016
#define NA_SE_MAR_ROLLING_AIR       0x09000017
#define NA_SE_STEP_FOX              0x09000018 // Unreferenced
#define NA_SE_STEP_FALCO            0x09000019 // Unreferenced
#define NA_SE_STEP_PEPPY            0x0900001A // Unreferenced
#define NA_SE_STEP_SLIPPY           0x0900001B // Unreferenced
#define NA_SE_DENO_RUNNING          0x0140001C
#define NA_SE_LIFT_UP               0x0100001D
#define NA_SE_ENGINE_START          0x0100001E
#define NA_SE_VOLUME_TEST           0x0100001F
#define NA_SE_ARWING_ENGIN_SPC      0x0100F020
#define NA_SE_MAR_SHOT              0x09400021
#define NA_SE_MARINE_ENGINE00       0x0100F022
#define NA_SE_WING_REPAIR           0x09008023
#define NA_SE_TANK_BURNER_HALF      0x01004024
#define NA_SE_MAR_BOMB_SHOT         0x01000025
#define NA_SE_MAR_LAUNCH            0x01038026
#define NA_SE_MAR_TWIN_LASER        0x09400027 // Also used for hyper lasers
#define NA_SE_MAR_BOUND             0x09404028
#define NA_SE_LOCK_ON_LASER         0x09007029 // Charge shot fire
#define NA_SE_ARWING_WARP_DASH      0x0940802A // During warp zone entrance cutscene
#define NA_SE_MAP_ARWING_WARP_DASH  0x0900802A
#define NA_SE_ARWING_TWIN_LASER2    0x0940802B
#define NA_SE_ARWING_WING_BROKEN    0x0900A02C
#define NA_SE_LOCK_SEARCH           0x0900302D // Charge shot charge
#define NA_SE_SPREAD_EXPLSION       0x0903502E // Charge shot/torpedo explode
#define NA_SE_TANK_DASH             0x0900402F
#define NA_SE_MARINE_BOOST          0x09004030
#define NA_SE_MARINE_BRAKE          0x09004031
#define NA_SE_MAP_ARWING_DASH       0x09000032





#define NA_SE_PAUSE_ON              0x4900F000
#define NA_SE_PAUSE_OFF             0x4900F001 // Unreferenced. Seems to be identical to NA_SE_PAUSE_ON
#define NA_SE_CURSOR                0x49000002
#define NA_SE_DECIDE                0x49000003
#define NA_SE_TWIN_LASER_GET        0x49002004
#define NA_SE_BOMB_GET              0x49002005 // Collect bomb. Seems to be identical to NA_SE_BOMB_GUAGE_UP
#define NA_SE_BOMB_GAUGE_UP         0x49002006 // Collect bomb. Seems to be identical to NA_SE_BOMB_GET
#define NA_SE_COUNT_UP              0x49004007
#define NA_SE_READY                 0x49000008
#define NA_SE_GO                    0x49000009
#define NA_SE_ERROR                 0x4900100A
#define NA_SE_DIR_WARNING           0x4100000B // Unreferenced.
#define NA_SE_ITEM_APPEAR           0x4900000C
#define NA_SE_SHIELD_RING_M         0x4900200D
#define NA_SE_SHIELD_RING           0x4900200E
#define NA_SE_CHECKPOINT            0x4900400F
#define NA_SE_SHIELD_WARNING0       0x49008010 // Low health hit alarm
#define NA_SE_SHIELD_WARNING1       0x49008011 // Critical health hit alarm
#define NA_SE_TEAM_SHIELD_UP        0x41007012
#define NA_SE_GOLD_RING             0x49003013
#define NA_SE_DEMO_SIREN            0x49000014
#define NA_SE_SHIELD_UPGRADE        0x49008015
#define NA_SE_GOOD_LUCK             0x49002016
#define NA_SE_MESSAGE_MOVE          0x49000017 // Used for text in training mode
#define NA_SE_COMMU_REQUEST         0x49002018 // C> call alert
#define NA_SE_MAP_WINDOW_OPEN       0x49000019 // Also crosshairs on
#define NA_SE_MAP_WINDOW_CLOSE      0x4900101A // Also crosshairs off
#define NA_SE_MAR_LOCKON            0x4900001B
#define NA_SE_MISSILE_ALARM         0x4900001C
#define NA_SE_CANCEL                0x4900101D
#define NA_SE_COMPUTER_NOISE        0x4100001E // Used in mission briefing
#define NA_SE_MAP_MOVE_STOP         0x4900001F
#define NA_SE_ARWING_DECIDE         0x49000020 // Used in main menu
#define NA_SE_ARWING_CANCEL         0x49000021 // Used in main menu
#define NA_SE_ARWING_CURSOR         0x49000022 // Used in main menu
#define NA_SE_OVERHEAT_ALARM        0x4100C023
#define NA_SE_ONE_UP                0x4900C024
#define NA_SE_RING_PASS             0x49008025 // Also used for Corneria mech boss secret 1UP
#define NA_SE_SHIELD_BUZZER         0x49001026
#define NA_SE_LOCK_ON               0x49008027
#define NA_SE_BOSS_GAUGE_OPEN       0x4900C028
#define NA_SE_UNK_1                 0x40000029 // Unreferenced. Sounds like an item collect jingle
#define NA_SE_COUNTDOWN             0x4900C02A
#define NA_SE_VIEW_SITCHW_ON        0x4000002B // Unreferenced. Related to D_ctx_80177C70?
#define NA_SE_VIEW_MOVE_IN          0x4900002C
#define NA_SE_VIEW_MOVE_OUT         0x4900002D
#define NA_SE_SEARCHLIGHT_MISS      0x4900402E
#define NA_SE_RING_MISS             0x4900402F 
#define NA_SE_GET_EMBLEM            0x49008030
#define NA_SE_MISSION_ACCOMPLISHED  0x49008031
#define NA_SE_VO_PEPPER_CONSENT     0x49000032 // This is ONE steep bill, but it's worth it.
#define NA_SE_VO_PEPPER_SURPRISE    0x49000033 // WHAT?!
#define NA_SE_MISSION_COMPLETE      0x49008034
#define NA_SE_UNK_2                 0x40000035 // Unreferenced. Hard to make out what it is
#define NA_SE_TIME_OVER             0x4900D036

#endif



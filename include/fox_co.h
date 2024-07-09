#ifndef FOX_CO_H
#define FOX_CO_H

#define TEAM_HEAD_XROT (19)
#define TEAM_HEAD_YROT (20)

// Granga Boss:

#define DMG_FLICKER_5 (5)    // Damage indicator flickers for 5 frames
#define DMG_FLICKER_15 (15)  // Damage indicator flickers for 15 frames
#define DMG_DESTROYED (1000) // Damage part is destroyed

typedef enum GrangaStates {
    /* 0 */ GRANGA_STATIONARY,
    /* 1 */ GRANGA_STATE_1,
    /* 2 */ GRANGA_STATE_2, // Walk backwards + attack
    /* 3 */ GRANGA_STATE_3, // Walk towards player + attack
    /* 4 */ GRANGA_STATE_4, // Walk forward + attack
    /* 5 */ GRANGA_FALL_TO_LEFT, // Falling from missing left leg
    /* 6 */ GRANGA_FALL_TO_RIGHT, // Falling from missing right leg
    /* 7 */ GRANGA_EXPLODE, // BOOM!
} GrangaStates;

typedef enum GrangaWork {
    /* 00 */ GRANGA_WORK_00, // x of missiles launched from it's right arm ?
    /* 01 */ GRANGA_WORK_01, // y of missiles launched from it's right arm ?
    /* 02 */ GRANGA_WORK_02, // z of missiles launched from it's right arm ?
    /* 03 */ GRANGA_WORK_03, // x of something // destroy effect related?
    /* 04 */ GRANGA_WORK_04, // y of something // destroy effect related?
    /* 05 */ GRANGA_WORK_05, // z of something // destroy effect related?
    /* 06 */ GRANGA_WORK_06, // x of missiles launched from it's left arm ?
    /* 07 */ GRANGA_WORK_07, // y of missiles launched from it's left arm ?
    /* 08 */ GRANGA_WORK_08, // z of missiles launched from it's left arm ?
    /* 09 */ GRANGA_WORK_09,
    /* 10 */ GRANGA_WORK_10,
    /* 11 */ GRANGA_WORK_11,
    /* 12 */ GRANGA_WORK_12,
    /* 13 */ GRANGA_WORK_13,
    /* 14 */ GRANGA_WORK_14,
    /* 15 */ GRANGA_WORK_15,
    /* 16 */ GRANGA_WORK_16, // yRot of missiles launched from both arms ?
    /* 17 */ GRANGA_WORK_17, // player.pos.x target position
    /* 18 */ GRANGA_WORK_18, // player.pos.y target position
    /* 19 */ GRANGA_WORK_19, // player.pos.trueZpos target position
    /* 20 */ GRANGA_WORK_20,
    /* 21 */ GRANGA_WORK_21,
    /* 22 */ GRANGA_WORK_22,
    /* 23 */ GRANGA_WORK_23,
    /* 24 */ GRANGA_WORK_24,
    /* 25 */ GRANGA_WORK_25,
    /* 26 */ GRANGA_WORK_26,
    /* 27 */ GRANGA_WORK_27,
    /* 28 */ GRANGA_WORK_28,
    /* 29 */ GRANGA_WORK_29,
    /* 30 */ GRANGA_WORK_30,
    /* 31 */ GRANGA_WORK_31,
    /* 32 */ GRANGA_WORK_32,
    /* 33 */ GRANGA_WORK_33,
    /* 34 */ GRANGA_WORK_34,
    /* 35 */ GRANGA_WORK_35,
    /* 36 */ GRANGA_WORK_36,
    /* 37 */ GRANGA_WORK_37,
    /* 38 */ GRANGA_WORK_38,
    /* 39 */ GRANGA_WORK_39,
    /* 40 */ GRANGA_WORK_40,
    /* 41 */ GRANGA_WORK_41,
    /* 42 */ GRANGA_WORK_42,
    /* 43 */ GRANGA_WORK_43,
    /* 44 */ GRANGA_WORK_44,
    /* 45 */ GRANGA_WORK_45,
    /* 46 */ GRANGA_WORK_46,
    /* 47 */ GRANGA_WORK_47,
    /* 48 */ GRANGA_WORK_48,
    /* 49 */ GRANGA_WORK_49,
    /* 50 */ GRANGA_WORK_50,
    /* 51 */ GRANGA_WORK_51,
    /* 52 */ GRANGA_WORK_52,
    /* 53 */ GRANGA_WORK_53,
    /* 54 */ GRANGA_WORK_54,
    /* 55 */ GRANGA_WORK_55,
    /* 56 */ GRANGA_WORK_56,
    /* 57 */ GRANGA_WORK_57,
    /* 58 */ GRANGA_WORK_58,
    /* 59 */ GRANGA_WORK_59,
    /* 60 */ GRANGA_WORK_60,
    /* 61 */ GRANGA_WORK_61,
    /* 62 */ GRANGA_WORK_62, // x
    /* 63 */ GRANGA_WORK_63, // y
    /* 64 */ GRANGA_WORK_64, // z
    /* 65 */ GRANGA_WORK_65,
    /* 66 */ GRANGA_WORK_66, // xTargetPos ?
    /* 67 */ GRANGA_WORK_67  // zTargetPos ?
} GrangaWork;

typedef enum GrangaSwork {
    /* 00 */ GRANGA_SWK_0,

    // Damage indicators, one per limb
    /* 01 */ GRANGA_RIGHT_ARM_DMG_IND,
    /* 02 */ GRANGA_LEFT_ARM_DMG_IND,
    /* 03 */ GRANGA_GUN_DMG_IND,
    /* 04 */ GRANGA_RIGHT_LEG_DMG_IND,
    /* 07 */ GRANGA_LEFT_LEG_DMG_IND = 7,
    /* 10 */ GRANGA_BACKPACK_DMG_IND = 10,

    /* 18 */ GRANGA_SWK_18 = 18,
    /* 19 */ GRANGA_SWK_19,
    /* 20 */ GRANGA_SWK_20,
    /* 21 */ GRANGA_SWK_21,
    /* 22 */ GRANGA_SWK_22,
    /* 23 */ GRANGA_SWK_23,

    /* 24 */ GRANGA_LEFT_LEG_HP,
    /* 25 */ GRANGA_RIGHT_LEG_HP,
    /* 26 */ GRANGA_LEFT_ARM_HP,
    /* 27 */ GRANGA_RIGHT_ARM_HP,
    /* 28 */ GRANGA_PLASMA_GUN_HP,
    /* 29 */ GRANGA_BACKPACK_HP,

    /* 30 */ GRANGA_ATTACK_STATE,
    /* 31 */ GRANGA_NEXT_STATE,
    /* 32 */ GRANGA_SWK_32,
    /* 33 */ GRANGA_INIT,
    /* 35 */ GRANGA_MISSILE_COUNT = 35,
    /* 36 */ GRANGA_1UP_CHECK
} GrangaSwork;

typedef enum GrangaFwork {
    /* 00 */ GRANGA_FWK_00,
    /* 01 */ GRANGA_FWK_01,
    /* 02 */ GRANGA_FWK_02,
    /* 03 */ GRANGA_FWK_03,
    /* 04 */ GRANGA_FWK_04,
    /* 12 */ GRANGA_FWK_12 = 12,
    /* 13 */ GRANGA_FWK_13,
    /* 14 */ GRANGA_FWK_14,
} GrangaFwork;

typedef enum GrangaDmgParts {
    /* 0 */ GRANGA_DMG_BACKPACK,
    /* 1 */ GRANGA_DMG_LEFT_ARM,
    /* 2 */ GRANGA_DMG_RIGHT_ARM,
    /* 3 */ GRANGA_DMG_GUN,
    /* 4 */ GRANGA_DMG_LEFT_LEG,
    /* 5 */ GRANGA_DMG_RIGHT_LEG,
} GrangaDmgParts;

typedef enum GrangaAttackState {
    /* 0 */ GRANGA_ATTACK_IDLE,
    /* 1 */ GRANGA_ATTACK_MISSILES,
    /* 2 */ GRANGA_ATTACK_LASERS,
    /* 3 */ GRANGA_ATTACK_PLASMA,
} GrangaAttackState;


// Carrier Boss:

typedef enum CoCarrierParts {
    /* 0 */ CARRIER_0,
    /* 1 */ CARRIER_1,
    /* 2 */ CARRIER_2,
    /* 3 */ CARRIER_3
} CarrierParts;

#endif

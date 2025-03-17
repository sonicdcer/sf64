/**
 * Glossary:
 * EVID: Event ID
 * EVACT: Event Action
 * EVOP: Event Opcode
 * EVC: Event Condition
 * EVSTATE: Event State
 * 
 * Level Prefixes:
 * CO: Corneria
 * ME: Meteo
 * SX: Sector X
 * SY: Sector Y
 * SZ: Sector Z
 * KA: Katina
 * AQ: Aquas
 * A6: Area 6
 * FO: Fortuna
 * SO: Solar
 * MA: Macbeth
 * TI: Titania
 * BO: Bolse
 * ZO: Zoness
 * VE1: Venom 1
 * VE2: Venom 2
 * AND: Venom Andross
 * WZ: Warpzone
 */

#ifndef SF64_EVENT
#define SF64_EVENT

#define EV_OPC(opcode) (((opcode) & 0x7F) << 9)
#define EV_OPC_MASK(cmd) ((cmd) & (0x7F << 9))
#define EVENT_CMD(opcode, arg1, arg2) (EV_OPC(opcode) | ((s16) (arg1) & 0x1FF)), (arg2)

#define EV_ZMODE(zmode) (((zmode) & 3) << 7)
#define EV_ZMODE_MASK(cmd) ((cmd) & (3 << 7))

#define EV_CHANGE_SCRIPT 200

#define EVENT_SET_WAIT(duration) EVENT_CMD(EVOP_SET_WAIT, 0, duration)
#define EVENT_UPDATE_ACTOR() EVENT_SET_WAIT(1)
#define EVENT_LOOP(count, cmd) EVENT_CMD(EVOP_LOOP, cmd, count)
#define EVENT_GOTO(cmd) EVENT_LOOP(0, cmd)
#define EVENT_STOP_SCRIPT() EVENT_CMD(EVOP_STOP_SCRIPT, 0, 0)

#define EVENT_SET_TRIGGER(cond, cmd) EVENT_CMD(EVOP_SET_TRIGGER, cmd, cond)
#define EVENT_SET_Z_TRIGGER(z, cmd) EVENT_SET_TRIGGER(EVC_CLOSE_Z + (s32)((z) / 100), cmd)
#define EVENT_CLEAR_TRIGGER(cmd) EVENT_SET_TRIGGER(EVC_NONE, cmd)

#define EVENT_INIT_ACTOR(info, health) EVENT_CMD(EVOP_INIT_ACTOR, health, info)
#define EVENT_SET_TEAM_ID(teamId) EVENT_CMD(EVOP_SET_TEAM_ID, 0, teamId)
#define EVENT_ADD_TO_GROUP(num, flags) EVENT_CMD(EVOP_ADD_TO_GROUP, flags, num)

#define EVENT_SET_SPEED(speed, zmode, time) EVENT_CMD(EVOP_SET_SPEED, EV_ZMODE(zmode) | ((speed) & 0x7F), time)
#define EVENT_UPDATE_SPEED(speed, zmode) EVENT_SET_SPEED(speed, zmode, 1)
#define EVENT_SET_ACCEL(speedTarget, zmode, time) EVENT_CMD(EVOP_SET_ACCEL, EV_ZMODE(zmode) | ((speedTarget) & 0x7F), time)
#define EVENT_SET_BASE_ZVEL(zvel) EVENT_CMD(EVOP_SET_BASE_ZVEL, 0, zvel)

#define EVENT_TURN_DOWN(rot, rotVel) EVENT_CMD(EVOP_TURN_DOWN, rot, (rotVel) * 10)
#define EVENT_TURN_UP(rot, rotVel) EVENT_CMD(EVOP_TURN_UP, rot, (rotVel) * 10)
#define EVENT_TURN_LEFT(rot, rotVel) EVENT_CMD(EVOP_TURN_LEFT, rot, (rotVel) * 10)
#define EVENT_TURN_RIGHT(rot, rotVel) EVENT_CMD(EVOP_TURN_RIGHT, rot, (rotVel) * 10)
#define EVENT_UPDATE_TURN_UP(rot) EVENT_TURN_UP(rot, rot)
#define EVENT_UPDATE_TURN_DOWN(rot) EVENT_TURN_DOWN(rot, rot)
#define EVENT_UPDATE_TURN_LEFT(rot) EVENT_TURN_LEFT(rot, rot)
#define EVENT_UPDATE_TURN_RIGHT(rot) EVENT_TURN_RIGHT(rot, rot)

#define EVENT_LOCAL_ROTATION() EVENT_CMD(EVOP_LOCAL_ROTATION, 0, 0)
#define EVENT_FREE_ROTATION() EVENT_CMD(EVOP_FREE_ROTATION, 0, 0)

#define EVENT_PITCH_DOWN(rot, rotVel) EVENT_CMD(EVOP_PITCH_DOWN, rot, (rotVel) * 10)
#define EVENT_PITCH_UP(rot, rotVel) EVENT_CMD(EVOP_PITCH_UP, rot, (rotVel) * 10)
#define EVENT_YAW_LEFT(rot, rotVel) EVENT_CMD(EVOP_YAW_LEFT, rot, (rotVel) * 10)
#define EVENT_YAW_RIGHT(rot, rotVel) EVENT_CMD(EVOP_YAW_RIGHT, rot, (rotVel) * 10)
#define EVENT_ROLL_RIGHT(rot, rotVel) EVENT_CMD(EVOP_ROLL_RIGHT, rot, (rotVel) * 10)
#define EVENT_ROLL_LEFT(rot, rotVel) EVENT_CMD(EVOP_ROLL_LEFT, rot, (rotVel) * 10)

#define EVENT_SET_AS_LEADER() EVENT_CMD(EVOP_SET_AS_LEADER, 0 ,0 )
#define EVENT_START_FORMATION(duration) EVENT_CMD(EVOP_START_FORMATION, 0, duration)
#define EVENT_STOP_FORMATION() EVENT_CMD(EVOP_STOP_FORMATION, 0, 0)

#define EVENT_PURSUE_PLAYER(duration, turnRate) EVENT_CMD(EVOP_PURSUE_PLAYER, turnRate, duration)
#define EVENT_FLEE_PLAYER(duration, turnRate) EVENT_CMD(EVOP_FLEE_PLAYER, turnRate, duration)
#define EVENT_PURSUE_TARGET(duration, turnRate) EVENT_CMD(EVOP_PURSUE_TARGET, turnRate, duration)
#define EVENT_FLEE_TARGET(duration, turnRate) EVENT_CMD(EVOP_FLEE_TARGET, turnRate, duration)
#define EVENT_CHASE_TARGET(duration, turnRate) EVENT_CMD(EVOP_CHASE_TARGET, turnRate, duration)
#define EVENT_SET_TARGET(teamId, spread) EVENT_CMD(EVOP_SET_TARGET, teamId, spread)
#define EVENT_PURSUE_CAMERA(duration, turnRate) EVENT_CMD(EVOP_PURSUE_CAMERA, turnRate, duration)
#define EVENT_FLEE_CAMERA(duration, turnRate) EVENT_CMD(EVOP_FLEE_CAMERA, turnRate, duration)

#define EVENT_SET_ACTION(action) EVENT_CMD(EVOP_SET_ACTION, 0, action)
#define EVENT_DROP_ITEM(item) EVENT_CMD(EVOP_DROP_ITEM, 0, item)
#define EVENT_DAMAGE_TEAM(teamId, damage) EVENT_CMD(EVOP_DAMAGE_TEAM, damage, teamId)
#define EVENT_RESTORE_TEAM(teammate) EVENT_CMD(EVOP_RESTORE_TEAM, 0, teammate)
#define EVENT_SET_CALL(duration, voiceParam) EVENT_CMD(EVOP_SET_CALL, voiceParam, duration)
#define EVENT_PLAY_MSG(rcid, msg) EVENT_CMD(EVOP_PLAY_MSG, rcid, msg)

#define EVENT_PLAY_SFX(sfx) EVENT_CMD(EVOP_PLAY_SFX, 0, sfx)
#define EVENT_STOP_SFX(sfx) EVENT_CMD(EVOP_STOP_SFX, 0, sfx)
#define EVENT_STOP_BGM() EVENT_CMD(EVOP_STOP_BGM, 0, 0)
#define EVENT_SET_REVERB(reverb) EVENT_CMD(EVOP_SET_REVERB, 0, reverb)
#define EVENT_SET_SURFACE(type) EVENT_CMD(EVOP_SET_SURFACE, 0, type)

#define EVENT_MAKE_TEXLINE(color) EVENT_CMD(EVOP_MAKE_TEXLINE, 0, color)
#define EVENT_STOP_TEXLINE() EVENT_CMD(EVOP_STOP_TEXLINE, 0, 0)

typedef enum EventActorIwork {
    /*  0 */ EVA_LOOP_COUNT,
    /*  1 */ EVA_TARGET_INDEX,
    /*  2 */ EVA_TRIGGER_COND,
    /*  3 */ EVA_BRANCH,
    /*  4 */ EVA_IWORK_4,
    /*  5 */ EVA_Z_MODE,
    /*  6 */ EVA_LOCAL_ROTATION,
    /*  7 */ EVA_TEXLINE_ACTIVE,
    /*  8 */ EVA_TEXLINE_INDEX,
    /*  9 */ EVA_LEADER_INDEX,
    /* 10 */ EVA_TARGET_TYPE,
    /* 11 */ EVA_IWORK_11,
    /* 12 */ EVA_TEAM_ID,
    /* 13 */ EVA_FORMATION,
    /* 14 */ EVA_IWORK_14,
    /* 15 */ EVA_GROUP_ID,
    /* 16 */ EVA_GROUP_FLAG,
} EventActorIwork;

typedef enum EventActorFwork {
    /*  0 */ EVA_SPEED,
    /*  1 */ EVA_SPEED_TARGET,
    /*  2 */ EVA_TURN_ANGLE,
    /*  3 */ EVA_TURN_RATE,
    /*  4 */ EVA_X_ROT_ANGLE,
    /*  5 */ EVA_X_ROT_RATE,
    /*  6 */ EVA_X_ROT_DIRECTION,
    /*  7 */ EVA_Y_ROT_ANGLE,
    /*  8 */ EVA_Y_ROT_RATE,
    /*  9 */ EVA_Y_ROT_DIRECTION,
    /* 10 */ EVA_Z_ROT_ANGLE,
    /* 11 */ EVA_Z_ROT_RATE,
    /* 12 */ EVA_Z_ROT_DIRECTION,
    /* 13 */ EVA_KNOCKBACK_X,
    /* 14 */ EVA_KNOCKBACK_Y,
    /* 15 */ EVA_FWORK_15,
             EVA_WZ_RED = 15,
    /* 16 */ EVA_FWORK_16,
             EVA_WZ_GREEN = 16,
    /* 17 */ EVA_FWORK_17,
             EVA_WZ_BLUE = 17,
    /* 18 */ EVA_FWORK_18,
             EVA_WZ_RED_TARGET = 18,
    /* 19 */ EVA_FWORK_19,
             EVA_WZ_GREEN_TARGET = 19,
    /* 20 */ EVA_FWORK_20,
             EVA_WZ_BLUE_TARGET = 20,
    /* 21 */ EVA_FWORK_21,
    /* 22 */ EVA_BASE_ZVEL,
    /* 23 */ EVA_Z_ROT_TARGET,
    /* 24 */ EVA_PURSUIT_TURN_RATE,
    /* 25 */ EVA_INFO_UNK10,
    /* 26 */ EVA_FWORK_26,
    /* 27 */ EVA_FWORK_27,
    /* 28 */ EVA_FWORK_28,
    /* 29 */ EVA_FWORK_29,
} EventActorFwork;

#define EVA_FORMATION_OFFSET 28
#define EVA_FORMATION_ROT 29

typedef enum EventModeZ {
    /* 0 */ EMZ_REST,
    /* 1 */ EMZ_RELATIVE,
    /* 2 */ EMZ_PLAYER,
    /* 3 */ EMZ_3,
} EventModeZ;

typedef enum EventOpcode {
    /*   0 */ EVOP_SET_SPEED,
    /*   1 */ EVOP_SET_ACCEL,
    /*   2 */ EVOP_SET_BASE_ZVEL,
    /*   3 */ EVOP_SET_AS_LEADER,
    /*   4 */ EVOP_START_FORMATION,
    /*   8 */ EVOP_STOP_FORMATION = 8,
    /*   9 */ EVOP_TURN_DOWN,
    /*  10 */ EVOP_TURN_UP,
    /*  11 */ EVOP_TURN_LEFT,
    /*  12 */ EVOP_TURN_RIGHT,
    /*  16 */ EVOP_PITCH_DOWN = 16,
    /*  17 */ EVOP_PITCH_UP,
    /*  18 */ EVOP_YAW_LEFT,
    /*  19 */ EVOP_YAW_RIGHT,
    /*  20 */ EVOP_ROLL_RIGHT,
    /*  21 */ EVOP_ROLL_LEFT,
    /*  24 */ EVOP_LOCAL_ROTATION = 24,
    /*  25 */ EVOP_FREE_ROTATION,
    /*  40 */ EVOP_PURSUE_PLAYER = 40,
    /*  41 */ EVOP_FLEE_PLAYER,
    /*  42 */ EVOP_PURSUE_TARGET,
    /*  43 */ EVOP_FLEE_TARGET,
    /*  44 */ EVOP_CHASE_TARGET,
    /*  45 */ EVOP_SET_TARGET,
    /*  46 */ EVOP_PURSUE_CAMERA,
    /*  47 */ EVOP_FLEE_CAMERA,
    /*  48 */ EVOP_SET_WAIT,
    /*  56 */ EVOP_SET_CALL = 56,
    /*  57 */ EVOP_RESTORE_TEAM,
    /*  58 */ EVOP_PLAY_SFX,
    /*  59 */ EVOP_STOP_SFX,
    /*  96 */ EVOP_SET_TRIGGER = 96,
    /* 104 */ EVOP_INIT_ACTOR = 104,
    /* 105 */ EVOP_SET_TEAM_ID,
    /* 112 */ EVOP_SET_ACTION = 112,
    /* 113 */ EVOP_ADD_TO_GROUP,
    /* 116 */ EVOP_DROP_ITEM = 116,
    /* 118 */ EVOP_SET_REVERB = 118,
    /* 119 */ EVOP_SET_SURFACE,
    /* 120 */ EVOP_PLAY_MSG,
    /* 121 */ EVOP_DAMAGE_TEAM,
    /* 122 */ EVOP_STOP_BGM,
    /* 124 */ EVOP_MAKE_TEXLINE = 124,
    /* 125 */ EVOP_STOP_TEXLINE,
    /* 126 */ EVOP_LOOP,
    /* 127 */ EVOP_STOP_SCRIPT,
} EventOpcode;

typedef enum EventCondition {
    /*  0 */ EVC_NONE,
    /*  1 */ EVC_NO_TARGET,
    /*  2 */ EVC_TEAM_COUNT_3,
    /*  3 */ EVC_TEAM_COUNT_2,
    /*  4 */ EVC_TEAM_COUNT_1,
    /*  5 */ EVC_TEAM_COUNT_0,
    /*  6 */ EVC_FALCO_ACTIVE,
    /*  7 */ EVC_PEPPY_ACTIVE,
    /*  8 */ EVC_SLIPPY_ACTIVE,
    /*  9 */ EVC_CLOSE_LEFT_100,
    /* 10 */ EVC_CLOSE_LEFT_400,
    /* 11 */ EVC_CLOSE_LEFT_700,
    /* 12 */ EVC_CLOSE_LEFT_200,
    /* 13 */ EVC_CLOSE_RIGHT_100,
    /* 14 */ EVC_CLOSE_RIGHT_400,
    /* 15 */ EVC_CLOSE_RIGHT_700,
    /* 16 */ EVC_CLOSE_RIGHT_200,
    /* 17 */ EVC_CLOSE_ABOVE_100,
    /* 18 */ EVC_CLOSE_ABOVE_400,
    /* 19 */ EVC_CLOSE_ABOVE_700,
    /* 20 */ EVC_CLOSE_ABOVE_200,
    /* 21 */ EVC_CLOSE_BELOW_100,
    /* 22 */ EVC_CLOSE_BELOW_400,
    /* 23 */ EVC_CLOSE_BELOW_700,
    /* 24 */ EVC_CLOSE_BELOW_200,
    /* 25 */ EVC_HEALTH_100p,
    /* 26 */ EVC_HEALTH_75p,
    /* 27 */ EVC_HEALTH_50p,
    /* 28 */ EVC_HEALTH_25p,
    /* 29 */ EVC_HEALTH_0p,
    /* 30 */ EVC_UNK270_5PLUS,
    /* 31 */ EVC_UNK270_NONZERO,
    /* 32 */ EVC_UNK270_ZERO,
    /* 33 */ EVC_UNK250_GREATER_168,
    /* 34 */ EVC_UNK250_LESS_84,
    /* 35 */ EVC_SINGLE_LASER,
    /* 36 */ EVC_TWIN_LASER,
    /* 37 */ EVC_HYPER_LASER,
    /* 38 */ EVC_UNK3_LASER,
    /* 39 */ EVC_SHOT_CLOSE_150,
    /* 40 */ EVC_SHOT_CLOSE_300,
    /* 41 */ EVC_NO_LEADER,
    /* 42 */ EVC_NO_FOLLOWER,
    /* 43 */ EVC_HAS_FOLLOWER,
    /* 44 */ EVC_TOOK_DAMAGE,
    /* 45 */ EVC_PASSED_ALL_RINGS,
    /* 46 */ EVC_ATTACK_GROUP_CLEARED,
    /* 47 */ EVC_PRESS_CRIGHT,
    /* 48 */ EVC_WING_BROKEN,
    /* 49 */ EVC_ME_CLEAR,
    /* 50 */ EVC_FO_CLEAR,
    /* 51 */ EVC_SX_CLEAR,
    /* 52 */ EVC_TI_CLEAR,
    /* 53 */ EVC_BO_CLEAR,
    /* 54 */ EVC_SY_CLEAR,
    /* 55 */ EVC_KA_CLEAR,
    /* 56 */ EVC_SO_CLEAR,
    /* 57 */ EVC_MA_CLEAR,
    /* 58 */ EVC_AQ_CLEAR,
    /* 59 */ EVC_ZO_CLEAR,
    /* 60 */ EVC_SZ_CLEAR,
    /* 61 */ EVC_A6_CLEAR,
    /* 62 */ EVC_NOT_CHASED,
    /* 63 */ EVC_CHASED,
    /* 64 */ EVC_MISSED_SEARCHLIGHT,
    /* 65 */ EVC_30_HITS,
    /* 66 */ EVC_80_HITS,
    /* 67 */ EVC_EXPERT_MODE,
    /* 100 */ EVC_CLOSE_Z=100,
} EventCondition;

typedef enum EventState {
    /*  0 */ EVSTATE_READY,
    /*  1 */ EVSTATE_WAIT,
    /*  2 */ EVSTATE_TURN_DOWN,
    /*  3 */ EVSTATE_TURN_UP,
    /*  4 */ EVSTATE_TURN_LEFT,
    /*  5 */ EVSTATE_TURN_RIGHT,
    /*  6 */ EVSTATE_PURSUE_PLAYER,
    /*  7 */ EVSTATE_FLEE_PLAYER,
    /*  8 */ EVSTATE_PURSUE_TARGET,
    /*  9 */ EVSTATE_FLEE_TARGET,
    /* 10 */ EVSTATE_ME_AS_OPEN,
    /* 11 */ EVSTATE_ME_AS_CLOSE,
    /* 12 */ EVSTATE_TEAM_RETREAT,
    /* 13 */ EVSTATE_CHASE_TARGET,
    /* 14 */ EVSTATE_PURSUE_CAMERA,
    /* 15 */ EVSTATE_FLEE_CAMERA,  
    /* 200 */ EVSTATE_SCRIPT_END = 200,
    /* 1000 */ EVSTATE_1000 = 1000,
} EventState;

typedef enum EventAction {
    /*  0 */ EVACT_NONE,
    /*  1 */ EVACT_SHOOT_FORWARD,
    /*  2 */ EVACT_SHOOT_AT_PLAYER,
    /*  3 */ EVACT_TEAM_SHOOT,
    /*  4 */ EVACT_FLAME_PILLAR,
    /*  5 */ EVACT_BLUE_ORB_FORWARD,
    /*  6 */ EVACT_BLUE_ORB_AT_PLAYER,
    /*  7 */ EVACT_ME_FIREBALL_AT_PLAYER,
    /*  8 */ EVACT_SHOOT_NEAR_PLAYER,
    /*  9 */ EVACT_EXPLODE_LARGE,
    /* 10 */ EVACT_EXPLODE_SMALL,
    /* 11 */ EVACT_EXPLODE_FIRE,
    /* 12 */ EVACT_DESPAWN,
    /* 13 */ EVACT_TI_DROP_MINE,
    /* 14 */ EVACT_ME_AS_OPEN,
    /* 15 */ EVACT_ME_AS_CLOSE,
    /* 16 */ EVACT_SHOOT_PLAYER_TWICE,
    /* 17 */ EVACT_SHOOT_AT_CAMERA,
    /* 18 */ EVACT_GFOX_COVER_FIRE,
    /* 19 */ EVACT_ORB_RING,  // projectile ring used by bee enemies
} EventAction;

typedef enum EventActorId {
    /*   0 */ EVID_VENOM_FIGHTER_1,
    /*   1 */ EVID_VENOM_FIGHTER_2,
    /*   2 */ EVID_ME_SLIPPY,
    /*   3 */ EVID_SPY_EYE, // jp name: Sunfish II
    /*   4 */ EVID_GRANGA_FIGHTER_1, // jp name: Dragon
    /*   5 */ EVID_GRANGA_FIGHTER_2, // jp name: Dragon II
    /*   6 */ EVID_FIREBIRD, // Handles Firebird from Corneria and Gore from Solar
    /*   7 */ EVID_CORNERIAN_FIGHTER, // Seems unused?
    /*   8 */ EVID_VENOM_TANK,
    /*   9 */ EVID_TRIPOD, // jp name: Butterfly
    /*  10 */ EVID_ATTACKER_1,
    /*  11 */ EVID_ATTACKER_2,
    /*  12 */ EVID_ATTACKER_3,
    /*  13 */ EVID_ME_METEOR_1,
    /*  14 */ EVID_ME_METEOR_2,
    /*  15 */ EVID_COMMANDER,
    /*  16 */ EVID_SPIDER,
    /*  17 */ EVID_ZERAM_CLASS_CRUISER,
    /*  18 */ EVID_SX_SPY_EYE, // jp name: Sunfish I
    /*  19 */ EVID_SX_CANINE,
    /*  20 */ EVID_SPACE_MINE,
    /*  21 */ EVID_A6_NINJIN_MISSILE,
    /*  22 */ EVID_A6_ROCKET,
    /*  23 */ EVID_VENOM_FIGHTER_3,
    /*  24 */ EVID_SX_BASE_DEBRIS_1,
    /*  25 */ EVID_SX_BASE_WALL_1,
    /*  26 */ EVID_SX_BASE_DEBRIS_2,
    /*  27 */ EVID_SX_LASER,
    /*  28 */ EVID_SX_WATCH_POST, // Invented name
    /*  29 */ EVID_SX_SPACE_MINE,
    /*  30 */ EVID_A6_HARLOCK_FRIGATE,
    /*  31 */ EVID_A6_UMBRA_STATION,
    /*  32 */ EVID_SX_BASE_FLOOR_1,
    /*  33 */ EVID_CRUISER_GUN, // Guns located on Zeram-class Cruisers
    /*  34 */ EVID_SX_BASE_WALL_2,
    /*  35 */ EVID_SX_BASE_WALL_3,
    /*  36 */ EVID_TI_BOMBER, // Bird-like ship that drops land mines
    /*  37 */ EVID_SX_BORZOI_FIGHTER,
    /*  38 */ EVID_SX_WARP_GATE,
    /*  39 */ EVID_SX_BASE_WALL_TILE_1,
    /*  40 */ EVID_EVENT_HANDLER,
    /*  41 */ EVID_SY_SHIP_1,
    /*  42 */ EVID_SY_SHIP_2,
    /*  43 */ EVID_TEAMMATE,
    /*  44 */ EVID_SY_SHIP_3,
    /*  45 */ EVID_ME_METEOR_3,
    /*  46 */ EVID_ZO_PATROL_BOAT,
    /*  47 */ EVID_ME_SECRET_MARKER_1, // Metal spheres that mark secret items. Invented name
    /*  48 */ EVID_SY_ROBOT_1,
    /*  49 */ EVID_SY_ROBOT_2,
    /*  50 */ EVID_SY_ROBOT_3,
    /*  51 */ EVID_SY_ROBOT_4, // Unclear as to whether it's used or not, only it's hitbox gets used in code
    /*  52 */ EVID_SARUMARINE_PERISCOPE,
    /*  53 */ EVID_SX_BASE_WALL_4,
    /*  54 */ EVID_GAMMA_ON, // Andross Army Gamma-Off Formation Leader (Orange Andross Fighter)
    /*  55 */ EVID_GAMMA_OFF, // Blue Andross Fighter
    /*  56 */ EVID_TI_GREAT_FOX, // Great Fox that flees after the intro cutscene
    /*  57 */ EVID_SY_SHIP_3_2, // Another variant of EVID_SY_SHIP_3 without a hitbox, seems unused?
    /*  58 */ EVID_SY_SARUZIN, // flagship of Sector Y, base of the Shogun Boss
    /*  59 */ EVID_SY_ROBOT_SPRITE_SIDE, // Robot sprites that appear in Sector Y's background, side variant
    /*  60 */ EVID_SY_ROBOT_SPRITE_FRONT, // Robot sprites that appear in Sector Y's background, front variant
    /*  61 */ EVID_ME_METEOR_4,
    /*  62 */ EVID_ME_METEOR_5,
    /*  63 */ EVID_ME_BIG_METEOR, // Big meteor that bounces in Meteo
    /*  64 */ EVID_ME_ROCK_GULL, // Enemy laser turret inside a meteorite
    /*  65 */ EVID_ME_METEOR_6,
    /*  66 */ EVID_ME_SECRET_MARKER_2, // Metal spheres that mark secret items. Invented name
    /*  67 */ EVID_ME_FLIP_BOT,
    /*  68 */ EVID_SY_LASER_TURRET,
    /*  69 */ EVID_SY_SHIP_DESTROYED,
    /*  70 */ EVID_SY_DEBRIS, // Sprite portraying small pieces of debris. Seems unused
    /*  71 */ EVID_ITEM_WING_REPAIR,
    /*  72 */ EVID_SY_SHIP_WINDOWS,
    /*  73 */ EVID_SY_SHIP_4,
    /*  74 */ EVID_SY_SHIP_4_DESTROYED,
    /*  75 */ EVID_SY_SHIP_2_SPRITE, // Unused
    /*  76 */ EVID_SY_SHIP_3_SPRITE, // Unused
    /*  77 */ EVID_SY_SHIP_MISSILE,
    /*  78 */ EVID_SUPPLY_CRATE,
    /*  79 */ EVID_ZO_BIRD,
    /*  80 */ EVID_VE1_PILLAR,
    /*  81 */ EVID_VE1_BLOCKER,
    /*  82 */ EVID_MA_LASER_TURRET,
    /*  83 */ EVID_AQ_OYSTER,
    /*  84 */ EVID_VE1_PILLAR_5,
    /*  85 */ EVID_BILL,
    /*  86 */ EVID_KATT,
    /*  87 */ EVID_VE1_TEMPLE_BG, // Background used inside Venom 1 temple to hide drawing popup
    /*  88 */ EVID_AQ_STARFISH,
    /*  89 */ EVID_AQ_SHELL,
    /*  90 */ EVID_MA_RAILROAD_CART,
    /*  91 */ EVID_MA_GUILLOTINE_1,
    /*  92 */ EVID_WZ_PILLAR_1,
    /*  93 */ EVID_WZ_PILLAR_2,
    /*  94 */ EVID_WZ_METEOR_1,
    /*  95 */ EVID_WZ_METEOR_2,
    /*  96 */ EVID_WZ_GATE,
    /*  97 */ EVID_ME_METEOR_7,
    /*  98 */ EVID_MA_BOULDER,
    /*  99 */ EVID_VE1_ENEMY_GATE, // Gate in Venom 1 for outcoming enemies
    /* 100 */ EVID_ENEMY_GATE_DOOR_RIGHT,
    /* 101 */ EVID_ENEMY_GATE_DOOR_LEFT,
    /* 102 */ EVID_TR_BARRIER,
    /* 103 */ EVID_ANDROSS_GATE,
    /* 104 */ EVID_ANDROSS_GATE_2,
    /* 105 */ EVID_SX_WARP_ENMY,
    /* 106 */ EVID_KILLER_BEE,
    /* 107 */ EVID_MA_GUILLOTINE_2, // Variant of the Macbeth Guillotine that can be shot at to be opened
    /* 200 */ EVID_ME_MORA = 200,
    /* 300 */ EVID_300 = 300,
    /* 4095*/ EVID_UNINITIALIZED = 4095,
} EventActorId;

typedef enum EventSfx {
    /*  0 */ EVSFX_OB_SLIDE_OPEN,
    /*  1 */ EVSFX_OB_SLIDE_CLOSE,
    /*  2 */ EVSFX_OB_STEELFRAME,
    /*  3 */ EVSFX_OB_HEAVY_BOUND,
    /*  4 */ EVSFX_ITEM_APPEAR,
    /*  5 */ EVSFX_OB_BLOCK_APPEAR,
    /*  6 */ EVSFX_OB_ROCKWALL_UP,
    /*  7 */ EVSFX_EN_UNIT_GATHERING,
    /*  8 */ EVSFX_EN_MOTOR_STOP,
    /*  9 */ EVSFX_EN_MS_DASH,
    /* 10 */ EVSFX_OB_ROCK_CRASH,
    /* 11 */ EVSFX_OB_ROCK_EYE_OPEN,
    /* 12 */ EVSFX_OB_SHIP_FALLDOWN,
    /* 13 */ EVSFX_OB_BOUND_M,
    /* 14 */ EVSFX_OB_SPEAR_PILLAR,
    /* 15 */ EVSFX_OB_PILLER_ROLL,
    /* 16 */ EVSFX_SEARCHLIGHT_MISS,
    /* 17 */ EVSFX_OB_ROUTEGATE_OPEN_Q,
    /* 18 */ EVSFX_OB_ROUTEGATE_CLOSE_Q,
    /* 19 */ EVSFX_OB_ROUTEGATE_OPEN_S,
    /* 20 */ EVSFX_OB_ROUTEGATE_CLOSE_S,
    /* 21 */ EVSFX_OB_LIFT,
    /* 22 */ EVSFX_OB_PLATE_ROLL,
} EventSfx;

typedef enum TexLineColor {
    /* 0 */ TXLC_WHITE,
    /* 1 */ TXLC_LIGHT_BLUE,
    /* 2 */ TXLC_BLUE,
    /* 3 */ TXLC_GREEN,
    /* 4 */ TXLC_RED,
    /* 5 */ TXLC_YELLOW,
} TexLineColor;

#endif

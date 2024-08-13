#ifndef MODS_H
#define MODS_H


/* ************************* */
/*        MOD SETTINGS       */
/* ************************* */

#define MODS_SFX_JUKEBOX                0
#define MODS_AUTO_DEBUGGER              0
#define MODS_FPS_COUNTER                0
#define DISP_MESSAGE                    0
#define DISP_MESSAGE2                   0
#define MODS_SPAWNER                    1
#define ENABLE_FREEZE                   1
#define BOSS_KILLER                     1
#define MODS_LEVEL_SELECT               1
#define MODS_RAM_MOD                    1
#define MODS_ENABLE_ALL_RANGE_MODE      1
#define MODS_PLAYER_NO_CLIP             1
#define MODS_WIDESCREEN                 1
#define DPAD_CONTROL                    1
#define ENABLE_60FPS                    1
#define MOD_FOG_FIX                     1

/* ************************* */
/**
 * Quick Boot:
 * Define this variable to a game state to boot into that
 * state. Two presets (map and main menu) are provided.
 * For the full list of game states, see sf64thread.h.
 */
#define MODS_BOOT_STATE 3  // main menu
// #define MODS_BOOT_STATE 4  // map
// #define MODS_BOOT_STATE GSTATE_PLAY  // DEMO 


/**
 * MODS_LEVEL_SELECT:
 * Use the D-Pad to select a level. Press L to start in
 * an advanced level phase (warp zone or Andross fight).
 * Useful for debugging and speedrunning training.
 */

/**
 * MODS_SFX_JUKEBOX:
 * Ability to play sound effects inside the expert sound menu.
 * Use L to switch between jukebox and soundtrack.
 * Use D-PAD to move the cursor.
 * Use C buttons to edit values.
 */

/**
 * MODS_AUTO_DEBUGGER:
 * Crash debugger appears without needing to enter code.
 */

/**
 * MODS_FPS_COUNTER:
 * Hold Z + R and press L to toggle FPS Display.
 */

/**
 * MODS_RAM_MOD:
 * Hold Z + R and press C> to cycle modes.
 *
 * Cheats:
 * Use D-Pad up and down to select a cheat.
 * Use D-Pad left and right to set its value.
 * Press L to set the value or twice to lock it.
 *
 * Object RAM Editor:
 * Watch up to seven addresses from the player and object arrays.
 * Use D-Pad to move the cursor and change values.
 * Press L to edit the highlighted value.
 */

/**
 * MODS_ENABLE_ALL_RANGE_MODE:
 * Lets the player skip to all range mode
 * by pressing L & R during on rails missions.
 */

/**
 * MODS_PLAYER_NO_CLIP:
 * Player will fly through all objects but can still
 * do damage to bosses and enemies.
 */

/**
 * MODS_WIDESCREEN:
 * Enable/Disable Wide Screen 16:9.
 */

/**
 * DPAD_CONTROL:
 * Enable/Disable D-PAD Controls.
 */

/**
 * ENABLE_60FPS:
 * Enable/Disable 60fps MOD.
 */

/**
 * DISP_MESSAGE:
 * Enables Display messages found in fox_game.c.
 */

/**
 * MOD_FOG_FIX:
 * Increased Fog slightly to hide the seams of the level.
 */


#if MODS_LEVEL_SELECT == 1
void Map_LevelSelect(void);
#endif

#if MODS_FPS_COUNTER == 1
static void Play_RenderFps(void);
#endif

#if MODS_RAM_MOD == 1
void RamMod_Update(void);
#endif

#if MODS_ENABLE_ALL_RANGE_MODE == 1
void ENABLE_360_MODE(void);
#endif

#if DISP_MESSAGE == 1
void Display_Text(void);
#endif

#if DISP_MESSAGE2 == 1
void Display_Text2(char*);
extern char* msgPrint;
#endif

#if MODS_SPAWNER == 1
void Spawner(void);
#endif

#if BOSS_KILLER == 1
void KillBoss(void);
#endif

#if ENABLE_60FPS == 1
#define FRAME_FACTOR 2
#define DIV_FRAME_FACTOR / FRAME_FACTOR
#define MUL_FRAME_FACTOR * FRAME_FACTOR
#define PROPER_DIV_FRAME_FACTOR(x) ((x + 1.0f)  DIV_FRAME_FACTOR) // under 1.0
#define IMPROPER_DIV_FRAME_FACTOR(x) (1.0f + (x - 1.0f)  DIV_FRAME_FACTOR) // over 1.0
extern int gGameFrameCountHack;
#else
#define DIV_FRAME_FACTOR
#define MUL_FRAME_FACTOR
#define PROPER_DIV_FRAME_FACTOR
#define IMPROPER_DIV_FRAME_FACTOR
#endif

#endif // MODS_H


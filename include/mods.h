#ifndef MODS_H
#define MODS_H

/**
 * Quick Boot:
 * Define this variable to a game state to boot into that
 * state. Two presets (map and main menu) are provided.
 * For the full list of game states, see sf64thread.h.
 */
//#define MODS_BOOT_STATE 3  // main menu
// #define MODS_BOOT_STATE 4 // map

/**
 * Level Select:
 * Use the D-Pad to select a level. Press L to start in
 * an advanced level phase (warp zone or Andross fight).
 * Useful for debugging and speedrunning training.
 */
#define MODS_LEVEL_SELECT 0

/**
 * Sound Effects Jukebox:
 * Ability to play sound effects inside the expert sound menu
 * Use L to switch between jukebox and soundtrack
 * Use D-PAD to move the cursor
 * Use C buttons to edit values
 */
#define MODS_SFX_JUKEBOX 0

/**
 * Auto debugger:
 * Crash debugger appears without needing to enter code.
 */
#define MODS_AUTO_DEBUGGER 0

/**
 * FPS Counter:
 * Hold Z + R and press L to toggle FPS Display
 */
#define MODS_FPS_COUNTER 0

/**
 * RAM modifier:
 * Hold Z + R and press C> to cycle modes
 *
 * Cheats:
 * Use D-Pad up and down to select a cheat
 * Use D-Pad left and right to set its value
 * Press L to set the value or twice to lock it
 *
 * Object Ram Editor:
 * Watch up to seven addresses from the player and object arrays
 * Use D-Pad to move the cursor and change values
 * Press L to edit the highlighted value
 */

#define MODS_RAM_MOD 0

/**
 * Lets the player skip to all range mode
 * by pressing L & R during on rails missions
 */

#define MODS_ENABLE_ALL_RANGE_MODE 0

/**
 * Enable/Disable no clip mode
 * Player will fly through all objects but can stil
 * do damage to bosses and enemies
 */

#define MODS_PLAYER_NO_CLIP 0

/**
 * Enable/Disable Wide Screen 16:9
 */

#define MODS_WIDESCREEN 0

/**
 * Enable/Disable D-PAD Controls
 */

#define DPAD_CONTROL 0

/** 
 * Enable/Disable 60fps MOD
 * 
*/

#define ENABLE_60FPS 0

/**
*Enables Display mesages found in fox_game.c
*/
#define DISP_MESSAGE 0

/**
*Increased Fog slightly to hide the seams of the level
*/

#define MOD_FOG_FIX 0



/* ************************* */

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

#if ENABLE_60FPS == 1
#define FRAME_FACTOR 2
#define DIV_FRAME_FACTOR / FRAME_FACTOR
#define MUL_FRAME_FACTOR * FRAME_FACTOR
#else
#define DIV_FRAME_FACTOR
#define MUL_FRAME_FACTOR
#endif


#endif

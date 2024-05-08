#ifndef MODS_H
#define MODS_H

/**
 * Quick Boot:
 * Define this variable to a game state to boot into that
 * state. Two presets (map and main menu) are provided. 
 * For the full list of game states, see sf64thread.h.
*/
// #define MODS_BOOT_STATE 3  // main menu
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
 * Press L to toggle FPS Display
*/
#define MODS_FPS_COUNTER 0

/**
 * Object Ram Watch:
 * Watch up to seven addresses from the player and object arrays
 * Press C> while paused to enable/disable
 * Use D-PAD to move the cursor and change values
 * Press L to edit the highlighted value
*/

#define MODS_OBJECT_RAM 0

/* ************************* */

#if MODS_LEVEL_SELECT == 1
void Map_LevelSelect(void);
#endif

#if MODS_FPS_COUNTER == 1
static void Play_RenderFps(void);
#endif

#if MODS_OBJECT_RAM == 1
void ObjectRam_Update(void);
#endif

#endif

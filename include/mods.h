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
 * Spawner:
 * Spawn Scenery, Actors, Bosses, Sprites, Items, Effects and even Event Actors.
 *
 * Controls:
 * D-Pad left and right to set the object Id.
 * C-Right to change between spawn modes.
 * Analog stick sets the spawn position.
 * L-Trigger to spawn the object.
 * D-Pad UP to kill all objects.
 * D-Pad DOWN to freeze/unfreeze the ship speed.
 * WARNING: Spawning an object that's not loaded in memory will likely result in a crash.
 */
#define MODS_SPAWNER 0

/**
 * IS Viewer:
 * Allows to use osSyncPrintf to print debug messages to the console on emulators that support it.
 */
#define MODS_ISVIEWER 0

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

#if MODS_SPAWNER == 1
void Spawner(void);
#endif

#if MODS_ISVIEWER == 1
void ISViewer_Init(void);
#endif

#endif

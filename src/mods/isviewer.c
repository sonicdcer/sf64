#include "PR/xstdio.h"
#include "PR/rcp.h"
#include "libc/stdarg.h"

// Most of the code here is from libdragon https://github.com/DragonMinded/libdragon/blob/trunk/src/debug.c
// with small changes to make it work with libultra

/** ISViewer register for magic value (to check ISViewer presence) */
#define ISVIEWER_MAGIC 0x13FF0000
/** ISViewer register for circular buffer write pointer */
#define ISVIEWER_WRITE_POINTER 0x13FF0014
/** ISViewer buffer */
#define ISVIEWER_BUFFER 0x13FF0020
/** ISViewer buffer length */
#define ISVIEWER_BUFFER_LEN 0x00000200 // Buffer size is configurable on real ISViewer, it's usually 64kB - 0x20

static u8 sISViewerInitialized = 0;

void ISViewer_Init(void) {
    // To check whether an ISViewer is present (probably emulated),
    // write some data to the "magic" register. If we can read it
    // back, it means that there's some memory there and we can
    // hopefully use it.

    // Magic value is different than what official ISViewer code used, but since
    // libdragon doesn't implement correct access pattern (circular buffer)
    // we want to differentiate our implementation from the real thing
    const u32 magic = 0x12345678;

    // Write inverted magic value to check if the memory is truly writable,
    // and to make sure there's no residual value that's equal to our magic value
    IO_WRITE(ISVIEWER_MAGIC, ~magic);
    if (IO_READ(ISVIEWER_MAGIC) != ~magic) {
        sISViewerInitialized = 0;
        return;
    }

    IO_WRITE(ISVIEWER_MAGIC, magic);
    sISViewerInitialized = IO_READ(ISVIEWER_MAGIC) == magic;
}

static void ISViewer_Write(const u8* data, int len) {
    int i;
    while (len > 0) {
        u32 l = len < ISVIEWER_BUFFER_LEN ? len : ISVIEWER_BUFFER_LEN;

        // Write 32-bit aligned words to copy the buffer. Notice that
        // we might overflow the input buffer if it's not a multiple
        // of 4 bytes but it doesn't matter because we are going to
        // write the exact number of bytes later.
        for (i = 0; i < l; i += 4) {
            u32 value = ((u32) data[0] << 24) | ((u32) data[1] << 16) | ((u32) data[2] << 8) | ((u32) data[3] << 0);
            IO_WRITE(ISVIEWER_BUFFER + i, value);
            data += 4;
        }

        // Flush the data into the ISViewer
        // We use write pointer register as length register,
        // but that's fine for emulators that usually doesn't
        // update the read and write pointers anyways.
        IO_WRITE(ISVIEWER_WRITE_POINTER, l);
        len -= l;
    }
}

static char* ISViwer_ProutPrintf(char* arg, const char* str, size_t count) {
    ISViewer_Write(str, count);
    return 1;
}

void osSyncPrintf(const char* fmt, ...) {
    va_list args;

    if (!sISViewerInitialized) {
        return;
    }

    va_start(args, fmt);
    _Printf(ISViwer_ProutPrintf, NULL, fmt, args);
    va_end(args);
}

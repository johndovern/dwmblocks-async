#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"sb-tasks",  10,  8},
    {"sb-yt-monitor",  0,  12},
    {"sb-mpv-music",  1,  21},
    {"sb-mpv",  1,  22},
    {"sb-music",  1,  11},
    {"sb-memory",  10,  6},
    {"sb-cpu",    10,  5},
    {"sb-volume",  0,  10},
    {"sb-battery",  5,  4},
    {"sb-forecast",  18000,  23},
    {"sb-clock",  60,  3},
    {"sb-internet",  5,  2},
    {"sb-actions",  0,  1},
    /* {"sb-mail",    600,  1 }, */
    /* {"sb-music",   0,    2 }, */
    /* {"sb-disk",    1800, 3 }, */
    /* {"sb-memory",  10,   4 }, */
    /* {"sb-loadavg", 5,    5 }, */
    /* {"sb-mic",     0,    6 }, */
    /* {"sb-record",  0,    7 }, */
    /* {"sb-volume",  0,    8 }, */
    /* {"sb-battery", 5,    9 }, */
    /* {"sb-date",    1,    10}, */
};

const unsigned short blockCount = LEN(blocks);

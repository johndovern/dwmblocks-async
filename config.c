#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"sb-tasks",            10,     19},
    {"sb-yt-monitor",       0,      18},
    {"sb-mpv-music",        1,      17},
    {"sb-mpv",              1,      16},
    /* {"sb-mpv-prev",         1,      15}, */
    /* {"sb-mpv-play",         1,      14}, */
    /* {"sb-mpv-next",         1,      13}, */
    {"sb-music",            1,      12},
    /* {"sb-music-prev",       0,      11}, */
    /* {"sb-music-play",       1,      10}, */
    /* {"sb-music-next",       0,      9}, */
    {"sb-memory",           10,     8},
    {"sb-cpu",              10,     7},
    {"sb-volume",           0,      6},
    {"sb-battery",          5,      5},
    {"sb-forecast",         18000,  4},
    {"sb-clock",            60,     3},
    {"sb-internet",         5,      2},
    /* {"sb-actions",          0,      1}, */
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

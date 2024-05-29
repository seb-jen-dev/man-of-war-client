#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "raylib.h"

#define VERSION_MAJOR 0
#define VERSION_MINOR 1

#define GAME_WIDTH 1920 / 2
#define GAME_HEIGHT 1080 / 2

typedef uint8_t byte;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef float f32;
typedef double f64;

typedef Vector2 vec2_t;
typedef Rectangle rect_t;
typedef Color color_t;

// STRUCTS :
typedef struct point_t
{
    i32 x;
    i32 y;
} point_t;

// ENUMS :
typedef enum game_state_e
{
    gs_developer_menu,
    gs_main_menu,
    gs_world_map,
    gs_town_view,
    gs_game_over,
    NUM_GAME_STATES
} game_state_e;

// DATA :

game_state_e game_state = gs_developer_menu;

#endif
#include "include/common.h"

#include "include/developer.h"
#include "include/main_menu.h"

#include "developer.c"
#include "main_menu.c"

void update(f32 delta_time)
{
    switch (game_state) // defined in common.h
    {
    case gs_developer_menu:
    {
        developer_menu_update();
    }
    break;
    case gs_main_menu:
    {
        main_menu_update(delta_time);
    }
    break;
    case gs_world_map:
    {
        if (IsKeyPressed(KEY_BACKSPACE))
        {
            game_state = gs_developer_menu;
        }
    }
    break;
    case gs_town_view:
    {
        if (IsKeyPressed(KEY_BACKSPACE))
        {
            game_state = gs_developer_menu;
        }
    }
    break;
    case gs_game_over:
    {
        if (IsKeyPressed(KEY_BACKSPACE))
        {
            game_state = gs_developer_menu;
        }
    }
    break;
    default:
        break;
    }
}

void render()
{

    BeginDrawing();
    ClearBackground(BLACK);
    switch (game_state) // defined in common.h
    {
    case gs_developer_menu:
    {
        developer_menu_render();
    }
    break;
    case gs_main_menu:
    {
        main_menu_render();
    }
    break;
    case gs_world_map:
        break;
    case gs_town_view:
        break;
    case gs_game_over:
        break;
    default:
        break;
    }
    EndDrawing();
}

int main()
{
    InitWindow(GAME_WIDTH, GAME_HEIGHT, TextFormat("Man Of War v. %d.%d", VERSION_MAJOR, VERSION_MINOR));

    while (!WindowShouldClose())
    {
        update(GetFrameTime());
        render();
    }
    return 0;
}
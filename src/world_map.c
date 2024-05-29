#include "include/common.h"
#include "include/world_map.h"

void world_map_update(f32 delta_time)
{

    if (IsKeyPressed(KEY_BACKSPACE))
    {
        game_state = gs_developer_menu;
    }

    // TODO(@sebbe) : Sail a ship around ....
}

void world_map_render()
{
    ClearBackground(BLUE); // : )
}
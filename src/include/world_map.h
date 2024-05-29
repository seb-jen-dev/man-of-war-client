#ifndef __WORLD_MAP_H__
#define __WORLD_MAP_H__

#include "common.h"

// STRUCTS :
typedef struct world_map_state_t
{
    // TODO(@sebbe) : All of the stuff we need for the world map goes here ...
} world_map_state_t;

// NOTE(@sebbe) : is probably not going to be global in the end
// but it is by far the easiet way to deal with it for now,
// so try to resist the temptantion of making this malloc'd or
// something local that we pass around ...
world_map_state_t world_map_state;

// PROTOTYPES :
void world_map_update(f32 delta_time);
void world_map_render();

#endif
#include "gamer_manager.h"
#include "enum_manager.h"
#include "global_manager.h"

// Global variable.
struct_gamer_object global_gamer_object;

static void kid_calculate_tile();

// todo do I need this func?
void engine_gamer_manager_init()
{
	struct_gamer_object *go = &global_gamer_object;

	go->kidColor = 0;
	//go->pathIndex = 0;
	//go->prevIndex = 0;
	//go->moveFrame = 0;
}

void engine_gamer_manager_load()
{
	struct_gamer_object *go = &global_gamer_object;

	go->kidColor = 0;
	go->kidX = 32;
	go->kidY = 32;
	go->velZ = 0;
	go->kidFrame = 0;
	kid_calculate_tile();
	go->direction = direction_none;
	go->lifecycle = lifecycle_idle;
}

static void kid_calculate_tile()
{
	struct_gamer_object *go = &global_gamer_object;
	go->kidTile = SPRITE_TILES + ( ( go->kidColor * 2 ) + go->kidFrame ) * 2;
}
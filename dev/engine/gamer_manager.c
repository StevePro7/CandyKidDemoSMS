#include "gamer_manager.h"
#include "enum_manager.h"
#include "hack_manager.h"
#include "global_manager.h"
#include "input_manager.h"
#include "sprite_manager.h"
#include <stdlib.h>

// Global variable.
struct_gamer_object global_gamer_object;

static void kid_calculate_tile();

void engine_gamer_manager_load()
{
	struct_hack_object *ho = &global_hack_object;
	struct_gamer_object *go = &global_gamer_object;

	go->kidColor = 0;
	go->kidX = 48;
	go->kidY = 32;
	go->velZ = 0;
	go->steps = ho->hack_steps;
	go->kidFrame = 0;
	kid_calculate_tile();
	go->direction = direction_none;
	go->lifecycle = lifecycle_idle;

	go->moveFrame = 0;
	if( ho->hack_paths )
	{
		go->pathIndex = ho->hack_paths - 1;
	}
	else
	{
		// Ensure do not repeat path!
		while( go->pathIndex == go->prevIndex )
		{
			go->pathIndex = rand() % GAMER_MAX_PATHS;
		}

		go->prevIndex = go->pathIndex;
	}
}

void engine_gamer_manager_toggle_color()
{
	struct_gamer_object *go = &global_gamer_object;

	unsigned char input = engine_input_manager_hold_up();
	if( !input )
	{
		return;
	}

	go->kidColor = ( 1 - go->kidColor );
	kid_calculate_tile();
}

void engine_gamer_manager_toggle_frame()
{
	struct_gamer_object *go = &global_gamer_object;
	go->kidFrame = ( 1 - go->kidFrame );
	kid_calculate_tile();
}

void engine_gamer_manager_move()
{
	struct_gamer_object *go = &global_gamer_object;
	go->lifecycle = lifecycle_move;
	engine_gamer_manager_toggle_frame();
}

void engine_gamer_manager_update()
{

}

void engine_gamer_manager_draw()
{
	struct_gamer_object *go = &global_gamer_object;
	engine_sprite_manager_draw( go->kidX, go->kidY, go->kidTile );
}

static void kid_calculate_tile()
{
	struct_gamer_object *go = &global_gamer_object;
	go->kidTile = SPRITE_TILES + ( ( go->kidColor * 2 ) + go->kidFrame ) * 2;
}
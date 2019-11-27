#include "hack_manager.h"

#define PEEK( addr)			(* ( unsigned char *)( addr ) )
#define POKE( addr, data )	(* ( unsigned char *)( addr ) = ( data ) )

#define HACKER_START		0x0050

// Global variable.
struct_hack_object global_hack_object;

void engine_hack_manager_init()
{
	struct_hack_object *ho = &global_hack_object;

	ho->hack_debug = 0;
	ho->hack_start = 0;
	ho->hack_steps = 0;
	ho->hack_delay = 0;
	ho->hack_hands = 0;
	ho->hack_music = 0;
	ho->hack_sound = 0;
	ho->hack_paths = 0;

#ifndef _CONSOLE

	ho->hack_debug = PEEK( HACKER_START - 1 );		// 0x004F		// 0=debug on otherwise off.
	ho->hack_start = PEEK( HACKER_START - 2 );		// 0x004E		// 0=splash off for testing.
	ho->hack_steps = PEEK( HACKER_START + 0 );		// 0x0050		// 0=steps to move: 1,2,4,8.
	ho->hack_delay = PEEK( HACKER_START + 1 );		// 0x0051		// 0=enemy to alternate arm.
	ho->hack_hands = PEEK( HACKER_START + 2 );		// 0x0052		// 0=hands to alternate not.
	ho->hack_music = PEEK( HACKER_START + 3 );		// 0x0053		// 0=music on otherwise off.
	ho->hack_sound = PEEK( HACKER_START + 4 );		// 0x0054		// 0=sound on otherwise off.
	ho->hack_paths = PEEK( HACKER_START + 5 );		// 0x0055		// 0=paths index to testing.

#endif

}

void engine_hack_manager_invert()
{
	struct_hack_object *ho = &global_hack_object;

	ho->hack_start = !ho->hack_start;
	//ho->hack_hands = !ho->hack_hands;		// todo revert!!
	//ho->hack_music = !ho->hack_music;		// todo revert!!
	ho->hack_sound = !ho->hack_sound;
}
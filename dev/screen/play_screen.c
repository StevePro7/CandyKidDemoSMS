#include "play_screen.h"
#include "..\devkit\_sms_manager.h"
#include "..\devkit\_snd_manager.h"
#include "..\engine\enum_manager.h"
#include "..\engine\enemy_manager.h"
#include "..\engine\font_manager.h"		// todo delete!!
#include "..\engine\gamer_manager.h"
#include "..\engine\input_manager.h"
#include "..\engine\sound_manager.h"
#include "..\engine\text_manager.h"

void screen_play_screen_load()
{
	engine_text_manager_space();
	engine_gamer_manager_load();
	engine_enemy_manager_load();

	engine_music_manager_play();
}

void screen_play_screen_update( unsigned char *screen_type )
{
	unsigned char input;

	engine_gamer_manager_draw();
	engine_enemy_manager_draw();

	input = engine_input_manager_hold_fire2();
	if( input )
	{
		engine_sound_manager_play();
	}

	*screen_type = screen_type_play;
}
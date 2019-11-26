#include "ready_screen.h"
#include "..\devkit\_sms_manager.h"
#include "..\devkit\_snd_manager.h"
#include "..\engine\enum_manager.h"
#include "..\engine\content_manager.h"
#include "..\engine\font_manager.h"
#include "..\engine\gamer_manager.h"
#include "..\engine\input_manager.h"
#include "..\engine\text_manager.h"

void screen_ready_screen_load()
{
	engine_text_manager_names();
	engine_gamer_manager_load();
	//engine_enemy_manager_load();
}

void screen_ready_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_ready;
}
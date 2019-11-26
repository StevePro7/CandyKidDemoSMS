#include "ready_screen.h"
#include "..\devkit\_sms_manager.h"
#include "..\devkit\_snd_manager.h"
#include "..\engine\enum_manager.h"
#include "..\engine\content_manager.h"
#include "..\engine\font_manager.h"
//#include "memo_manager.h"
//#include "delay_manager.h"
//#include "level_manager.h"
#include "..\engine\input_manager.h"

void screen_ready_screen_load()
{
	// todo delete
	engine_content_manager_load_tiles();
	engine_content_manager_load_sprites();
	engine_font_manager_draw_text( "READY", 2, 2 );
	// todo delete

	/*engine_text_manager_names();
	engine_gamer_manager_load();
	engine_enemy_manager_load();*/
}

void screen_ready_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_ready;
}
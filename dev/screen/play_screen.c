#include "play_screen.h"
#include "..\engine\enum_manager.h"
#include "..\engine\content_manager.h"
#include "..\engine\font_manager.h"

void screen_play_screen_load()
{
	// todo delete
	engine_content_manager_load_tiles();
	engine_content_manager_load_sprites();
	engine_font_manager_draw_text( "PLAY", 4, 4 );
	// todo delete
}

void screen_play_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_play;
}
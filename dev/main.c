#include "main.h"

// Global variables.
//bool global_pause;
//unsigned char hacker_debug, hacker_splash;
//unsigned char hacker_steps, hacker_delay, hacker_hands, hacker_music, hacker_sound, hacker_paths;
//unsigned char enum_curr_screen_type, enum_next_screen_type;

void main( void )
{
	// Global variables.
	static bool global_pause;
	//unsigned char open_screen_type;

	devkit_SMS_init();
	devkit_SMS_displayOff();

	//devkit_SMS_setSpritePaletteColor( 0, 3, 0, 0 );

	devkit_SMS_setSpriteMode( devkit_SPRITEMODE_NORMAL() );
	devkit_SMS_useFirstHalfTilesforSprites_False();
	devkit_SMS_VDPturnOnFeature( devkit_VDPFEATURE_HIDEFIRSTCOL() );

	engine_asm_manager_clear_VRAM();
	engine_content_manager_load_tiles();
	engine_content_manager_load_sprites();
	engine_screen_manager_init();

	devkit_SMS_displayOn();

	for( ;; )
	{
		devkit_SMS_waitForVBlank();
	}
}

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
	devkit_SMS_setSpritePaletteColor( 0, 0, 0, 3 );
	devkit_SMS_displayOn();

	for( ;; )
	{
		devkit_SMS_waitForVBlank();
	}
}

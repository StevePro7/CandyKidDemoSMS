#include "main.h"

void main( void )
{
	devkit_SMS_init();
	devkit_SMS_setSpritePaletteColor( 0, 0, 0, 2 );
	devkit_SMS_displayOn();

	for( ;; )
	{
		devkit_SMS_waitForVBlank();
	}
}

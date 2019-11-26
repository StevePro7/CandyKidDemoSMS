#include "sprite_manager.h"
#include "..\devkit\_sms_manager.h"

void engine_sprite_manager_draw( unsigned char x, unsigned char y, unsigned char tile )
{
	devkit_SMS_addSprite( x + 0, y + 0, tile + 0 );
	devkit_SMS_addSprite( x + 8, y + 0, tile + 1 );
	devkit_SMS_addSprite( x + 0, y + 8, tile + 8 );
	devkit_SMS_addSprite( x + 8, y + 8, tile + 9 );
}
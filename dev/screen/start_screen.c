#include "start_screen.h"
#include "..\devkit\_sms_manager.h"
#include "..\engine\content_manager.h"
#include "..\engine\enum_manager.h"

void screen_start_screen_load()
{
	devkit_SMS_displayOff();
	engine_content_manager_load_splash();
	devkit_SMS_displayOn();
}

void screen_start_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_start;
}
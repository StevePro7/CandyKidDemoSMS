#include "ready_screen.h"
#include "..\devkit\_sms_manager.h"
#include "..\devkit\_snd_manager.h"
#include "..\engine\enum_manager.h"
#include "..\engine\font_manager.h"
//#include "memo_manager.h"
//#include "delay_manager.h"
//#include "level_manager.h"
#include "..\engine\input_manager.h"

void screen_ready_screen_load()
{

}

void screen_ready_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_ready;
}
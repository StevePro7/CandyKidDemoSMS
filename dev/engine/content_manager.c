#include "content_manager.h"
#include "..\devkit\_sms_manager.h"
#include "..\gfx.h"

#define TREE_TILES		64
#define FONT_TILES		0
#define SPRITE_TILES	256

void engine_content_manager_load_tiles()
{
	

}

void engine_content_manager_load_sprites()
{
	// Sprite tiles.
	devkit_SMS_loadPSGaidencompressedTiles( sprites__tiles__psgcompr, SPRITE_TILES );
	devkit_SMS_loadSpritePalette( ( void * ) sprites__palette__bin );
}
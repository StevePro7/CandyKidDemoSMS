#include "content_manager.h"
#include "..\devkit\_sms_manager.h"
#include "..\engine\global_manager.h"
#include "..\gfx.h"

#define FONT_TILES		0
#define TREE_TILES		64
#define SPLASH_TILES	128

void engine_content_manager_load_tiles()
{
	// Tree tiles.
	devkit_SMS_loadPSGaidencompressedTiles( tree_avoid__tiles__psgcompr, TREE_TILES );
	devkit_SMS_loadBGPalette( ( void * ) tree_avoid__palette__bin );

	// Font tiles.
	devkit_SMS_loadPSGaidencompressedTiles( font_tiles__tiles__psgcompr, FONT_TILES );
	devkit_SMS_loadBGPalette( ( void * ) font_tiles__palette__bin );
}

void engine_content_manager_load_sprites()
{
	// Sprite tiles.
	devkit_SMS_loadPSGaidencompressedTiles( sprites__tiles__psgcompr, SPRITE_TILES );
	devkit_SMS_loadSpritePalette( ( void * ) sprites__palette__bin );
}

void engine_content_manager_load_splash()
{
	devkit_SMS_loadPSGaidencompressedTiles( splash__tiles__psgcompr, SPLASH_TILES );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) splash__tilemap__stmcompr );
	devkit_SMS_loadBGPalette( ( void * ) splash__palette__bin );
}
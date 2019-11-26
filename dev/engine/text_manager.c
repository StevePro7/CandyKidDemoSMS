#include "text_manager.h"
#include "font_manager.h"
#include "locale_manager.h"

void engine_text_manager_draw()
{
	unsigned char move;

	engine_font_manager_draw_text( LOCALE_TITLE1, 9, 11 );
	engine_font_manager_draw_text( LOCALE_TITLE2, 9, 12 );

	engine_font_manager_draw_text( LOCALE_SIDE1, 25, 0 );
	engine_font_manager_draw_text( LOCALE_SIDE2, 25, 1 );

	move = 4;
	engine_font_manager_draw_text( LOCALE_MOVE0, 25, move + 0 );
	engine_font_manager_draw_text( LOCALE_MOVE1, 25, move + 1 );
	engine_font_manager_draw_text( LOCALE_MOVE2, 25, move + 2 );
	engine_font_manager_draw_text( LOCALE_MOVE3, 25, move + 3 );
	engine_font_manager_draw_text( LOCALE_MOVE4, 25, move + 4 );
	engine_font_manager_draw_text( LOCALE_MOVE5, 25, move + 5 );

	move += 4;
	engine_font_manager_draw_text( LOCALE_MOVE6, 25, move + 6 );
	engine_font_manager_draw_text( LOCALE_MOVE7, 25, move + 7 );

	move++;
	engine_font_manager_draw_text( LOCALE_MOVE8, 25, move + 8 );
	engine_font_manager_draw_text( LOCALE_MOVE9, 25, move + 9 );

	//engine_font_manager_draw_text( LOCALE_STEVEPRO1, 25, 22 );
	//engine_font_manager_draw_text( LOCALE_STEVEPRO2, 25, 23 );
}

void engine_text_manager_names()
{
	engine_font_manager_draw_text( LOCALE_NAME1, 3, 7 );
	engine_font_manager_draw_text( LOCALE_NAME2, 3, 21 );
	engine_font_manager_draw_text( LOCALE_NAME3, 17, 7 );
	engine_font_manager_draw_text( LOCALE_NAME4, 17, 21 );
}

void engine_text_manager_space()
{
	engine_font_manager_draw_text( LOCALE_SPACE, 3, 7 );
	engine_font_manager_draw_text( LOCALE_SPACE, 3, 21 );
	engine_font_manager_draw_text( LOCALE_SPACE, 17, 7 );
	engine_font_manager_draw_text( LOCALE_SPACE, 17, 21 );
}


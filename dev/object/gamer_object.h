#ifndef _GAMER_OBJECT_H_
#define _GAMER_OBJECT_H_

typedef struct tag_struct_gamer_object
{
	unsigned char gamer_id;

	unsigned char kidX;
	unsigned char kidY;
	unsigned char velZ;
	unsigned char kidColor;
	unsigned char kidFrame;
	unsigned char kidTile;
	unsigned char direction;
	unsigned char lifecycle;

} struct_gamer_object;

#endif//_GAMER_OBJECT_H_
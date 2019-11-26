#ifndef _GAMER_MANAGER_H_
#define _GAMER_MANAGER_H_

#include "..\object\gamer_object.h"

void engine_gamer_manager_init();
void engine_gamer_manager_load();

// Global variable.
extern struct_gamer_object global_gamer_object;

#endif//_GAMER_MANAGER_H_

/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** zoom_event.c
*/

#include "event.h"
#include "convex_map.h"

void zoom_event(void *objet)
{
	map_t *map = objet;

	if (sfKeyboard_isKeyPressed(sfKeyP))
		zoom_up(map);
	if (sfKeyboard_isKeyPressed(sfKeyM))
		zoom_down(map);
}

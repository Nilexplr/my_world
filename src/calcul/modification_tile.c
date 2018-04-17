/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** modification_tile.c
*/

#include "event.h"
#include "convex_map.h"

void modification_tile(void *objet, sfRenderWindow *window)
{
	map_t *map = objet;
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

	map->map2d[map->point[0].y][map->point[0].x].y -=
		map->mouse->y - mouse.y;
	map->map2d[map->point[1].y][map->point[1].x].y -=
		map->mouse->y - mouse.y;
	map->map2d[map->point[2].y][map->point[2].x].y -=
		map->mouse->y - mouse.y;
	map->map2d[map->point[3].y][map->point[3].x].y -=
		map->mouse->y - mouse.y;
	*map->mouse = mouse;
}

/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** zoom.c
*/

#include "convex_map.h"

void zoom_up(void *objet)
{
	map_t *map = objet;

	map->zoom.x *= 1.005;
	map->zoom.y *= 1.005;
	map_water(map);
	map3d_to_2d(map);
}

void zoom_down(void *objet)
{
	map_t *map = objet;

	map->zoom.x /= 1.005;
	map->zoom.y /= 1.005;
	map_water(map);
	map3d_to_2d(map);
}

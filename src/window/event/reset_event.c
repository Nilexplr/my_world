/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** reset_event.c
*/

#include "convex_map.h"
#include "window.h"
#include <stdlib.h>
#include <math.h>

void reset_all(void *objet)
{
	map_t *map = objet;

	for (int i = 0; i < map->max.y; i++)
		for (int j = 0; j < map->max.x; j++)
			map->map3d[i][j] = 0.2;
	map3d_to_2d(map);
}

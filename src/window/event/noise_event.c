/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** noise_event.c
*/

#include "noise.h"
#include "convex_map.h"

void noise_event(void *objet)
{
	map_t *map = objet;

	map->map3d = create_noise(map->max.x, map->max.y);
	map3d_to_2d(map);
	map->option = 0;
}

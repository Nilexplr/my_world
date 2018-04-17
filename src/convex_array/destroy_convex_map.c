/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** destroy_convex_map
*/

#include "convex_map.h"
#include "map.h"
#include <stdlib.h>

void free_map2d(sfVector2f **map, sfVector2f max)
{
	for (int i = 0; i < max.y; i++) {
			free(map[i]);
	}
	free(map);
}

void free_convex_map(sfConvexShape ***map, sfVector2f max)
{
	for (int i = 0; i < max.y - 1; i++) {
		for (int j = 0; j < max.x - 1; j++)
			sfConvexShape_destroy(map[i][j]);
		free(map[i]);
	}
	free(map);
}

void free_tile(tile_t **tile, sfVector2f max)
{
	for (int j = 0; j < max.y - 1; j++) {
		for (int i = 0; i < max.y - 1; i++) {
			sfConvexShape_destroy(tile[j][i].shape1);
			sfConvexShape_destroy(tile[j][i].shape2);
		}
		free(tile[j]);
	}
	free(tile);
}

void destroy_map(map_t *map)
{
	if (map != NULL) {
		if (map->map3d != NULL)
			free_map(map->map3d);
		if (map->map2d != NULL)
			free_map2d(map->map2d, map->max);
		if (map->map != NULL)
			free_convex_map(map->map, map->max);
		if (map->tile != NULL)
			free_tile(map->tile, map->max);
		if (map->mouse != NULL)
			free(map->mouse);
		free(map);
	}
}

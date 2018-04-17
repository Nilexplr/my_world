/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** mouve functions
*/

#include "convex_map.h"
#include "window.h"

void mouve_up(void *objet)
{
	map_t *map = objet;

	for (int j = 0; j < map->max.y; j++) {
		for (int i = 0; i < map->max.x; i++) {
			map->map2d[j][i].y += 5;
			map->water[j][i].y += 5;
		}
	}
	map->pos.y += 5;
}

void mouve_right(void *objet)
{
	map_t *map = objet;

	for (int j = 0; j < map->max.y; j++) {
		for (int i = 0; i < map->max.x; i++) {
			map->map2d[j][i].x -= 5;
			map->water[j][i].x -= 5;
		}
	}
	map->pos.x -= 5;
}

void mouve_left(void *objet)
{
	map_t *map = objet;

	for (int j = 0; j < map->max.y; j++) {
		for (int i = 0; i < map->max.x; i++) {
			map->map2d[j][i].x += 5;
			map->water[j][i].x += 5;
		}
	}
	map->pos.x += 5;
}

void mouve_down(void *objet)
{
	map_t *map = objet;

	for (int j = 0; j < map->max.y; j++) {
		for (int i = 0; i < map->max.x; i++) {
			map->map2d[j][i].y -= 5;
			map->water[j][i].y -= 5;
		}
	}
	map->pos.y -= 5;
}

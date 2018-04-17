/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** calcul_map.c
*/

#include "convex_map.h"

void map3d_to_2d(map_t *map)
{
	for (int j = 0; j < map->max.y; j++) {
		for (int i = 0; i < map->max.x; i++) {
			map->map2d[j][i] = project_iso_point(map->zoom.x * (i),
				map->zoom.x * (j),
				map->map3d[j][i] * map->zoom.y,
				map->angle);
			map->map2d[j][i].x += map->pos.x;
			map->map2d[j][i].y += map->pos.y;
		}
	}
}

float point_3d(map_t *map, int j, int i)
{
	return ((sin(RADIAN(map->angle.y)) * j * map->zoom.x + sin(
		RADIAN(map->angle.y)) * i * map->zoom.x
		- (map->map2d[j][i].y - map->pos.y)) / map->zoom.y);
}

void map_2d_to_3d(map_t *map)
{
	for (int j = 0; j < map->max.y; j++)
		for (int i = 0; i < map->max.x; i++) {
			(map->map2d[j][i].y != project_iso_point(
				map->zoom.x * (i), map->zoom.x * (j),
				map->map3d[j][i] * map->zoom.y,
				map->angle).y + map->pos.y) ?
			map->map3d[j][i] = point_3d(map, j, i) : 0;
		}
}

void map_water(map_t *map)
{
	for (int j = 0; j < map->max.y; j++) {
		for (int i = 0; i < map->max.x; i++) {
			map->water[j][i] = project_iso_point(map->zoom.x * (i),
				map->zoom.x * (j),
				0.0 * map->zoom.y,
				map->angle);
			map->water[j][i].x += map->pos.x;
			map->water[j][i].y += map->pos.y;
		}
	}
}

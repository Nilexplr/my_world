/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** draw_map.c
*/

#include "convex_map.h"

void updtate_square(sfConvexShape *square, sfVector2f **map, sfVector2u pos)
{
	sfVector2f point[4] = { map[pos.y][pos.x],
				map[pos.y + 1][pos.x],
				map[pos.y + 1][pos.x + 1],
				map[pos.y][pos.x + 1] };

	for (int i = 0; i < 4; i++)
		sfConvexShape_setPoint(square, i, point[i]);
}

void updtate_convex_map(map_t *map)
{
	sfVector2u pos;

	for (int j = 0; j < map->max.y - 1; j++) {
		for (int i = 0; i < map->max.x - 1; i++) {
			pos.x = i;
			pos.y = j;
			updtate_square(map->map[j][i], map->water, pos);
		}
	}
}

void draw_map(sfRenderWindow *window, map_t *map)
{
	updtate_convex_map(map);
	for (int j = 0; j < map->max.y - 1; j++)
		for (int i = 0; i < map->max.x - 1; i++)
			sfRenderWindow_drawConvexShape(window, map->map[j][i],
			NULL);
}

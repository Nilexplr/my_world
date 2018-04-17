/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** draw_tile.c
*/

#include "convex_map.h"

tile_t update_tile(tile_t tile, sfVector2f **map
	, sfVector2u pos, float **map3d)
{
	sfVector2f point[4] = { map[pos.y][pos.x],
				map[pos.y + 1][pos.x],
				map[pos.y + 1][pos.x + 1],
				map[pos.y][pos.x + 1] };
	float point3d[4] = { map3d[pos.y][pos.x],
				map3d[pos.y + 1][pos.x],
				map3d[pos.y + 1][pos.x + 1],
				map3d[pos.y][pos.x + 1] };

	choose_triangle(point, tile.shape1, tile.shape2, point3d);
	return (tile);
}

void update_tile_map(map_t *map)
{
	sfVector2u pos;

	for (int j = 0; j < map->max.y - 1; j++) {
		for (int i = 0; i < map->max.x - 1; i++) {
			pos.x = i;
			pos.y = j;
			map->tile[j][i] = update_tile(map->tile[j][i]
				, map->map2d, pos, map->map3d);
		}
	}
}

void draw_tile(sfRenderWindow *window, map_t *map)
{
	map_2d_to_3d(map);
	updtate_convex_map(map);
	update_tile_map(map);
	for (int j = 0; j < map->max.y - 1; j++)
		for (int i = 0; i < map->max.x - 1; i++) {
			sfRenderWindow_drawConvexShape(window, map->map[j][i],
			NULL);
			draw_vertex_square(window, i, j, map);
			sfRenderWindow_drawConvexShape(window
				, map->tile[j][i].shape1, NULL);
			sfRenderWindow_drawConvexShape(window
				, map->tile[j][i].shape2, NULL);
		}
	draw_socle(map, window);
}

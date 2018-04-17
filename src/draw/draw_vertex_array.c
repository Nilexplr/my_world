/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** draw_vertex.c
*/

#include "convex_map.h"

void draw_vertex_square(sfRenderWindow *window, int i, int j, map_t *map)
{
	sfVector2f **map2d = map->map2d;
	sfVertexArray *ligne1 = create_line(map2d[j][i], map2d[j][i + 1]);
	sfVertexArray *ligne2 = create_line(map2d[j][i + 1]
		, map2d[j + 1][i + 1]);
	sfVertexArray *ligne3 = create_line(map2d[j + 1][i + 1]
		, map2d[j + 1][i]);
	sfVertexArray *ligne4 = create_line(map2d[j + 1][i], map2d[j][i]);
	sfRenderWindow_drawVertexArray(window, ligne1, NULL);
	sfRenderWindow_drawVertexArray(window, ligne2, NULL);
	sfRenderWindow_drawVertexArray(window, ligne3, NULL);
	sfRenderWindow_drawVertexArray(window, ligne4, NULL);
	sfVertexArray_destroy(ligne1);
	sfVertexArray_destroy(ligne2);
	sfVertexArray_destroy(ligne3);
	sfVertexArray_destroy(ligne4);
}

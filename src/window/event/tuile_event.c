/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** tuile_event.c
*/

#include "event.h"
#include "convex_map.h"
#include <stdlib.h>

int detect_tile(map_t *map, int i, int j, sfVector2i mouse)
{
	int x = inside_triangle(map->tile[j][i].shape1, mouse);
	int y = inside_triangle(map->tile[j][i].shape2, mouse);

	if (x == 1 || y == 1) {
		map->point = malloc(sizeof(sfVector2u) * 4);
		map->point[0].x = i;
		map->point[0].y = j;
		map->point[1].x = i + 1;
		map->point[1].y = j;
		map->point[2].x = i + 1;
		map->point[2].y = j + 1;
		map->point[3].x = i;
		map->point[3].y = j + 1;
		*map->mouse = mouse;
		return (1);
	}
	return (0);
}

void get_tuile(void *objet, sfVector2i mouse)
{
	map_t *map = objet;
	int counter = 0;

	for (int j = map->max.y - 2; j > - 1 && counter == 0; j--)
		for (int i = map->max.x - 2; i > - 1 && counter == 0; i--)
			counter = detect_tile(map, i, j, mouse);
}

void tuile_event(void *objet, sfRenderWindow *window, sfEvent *event)
{
	map_t *map = objet;

	if (event->type == sfEvtMouseButtonPressed)
		get_tuile(map, sfMouse_getPositionRenderWindow(window));
	if (event->type == sfEvtMouseButtonReleased) {
		if (map->point != NULL) {
			free(map->point);
			map->point = NULL;
		}
	}
}

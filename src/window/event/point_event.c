/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** point_event.c
*/

#include "convex_map.h"
#include "window.h"
#include <stdlib.h>
#include <math.h>

sfVector2f find_point(sfVector2f point, sfVector2i mouse, int *k)
{
	if (fabs(point.x - mouse.x) < 8 &&
		fabs(point.y - mouse.y) < 8) {
		point.y = mouse.y;
		*k = 1;
	}
	return (point);
}

void get_point(void *objet, sfVector2i mouse, int k)
{
	map_t *map = objet;
	int j;
	int i;

	for (j = map->max.y - 1; j > -1  && k == 0; j--) {
		for (i = map->max.x - 1; i > -1 && k == 0; i--) {
			map->map2d[j][i] = find_point(map->map2d[j][i],
							mouse, &k);
		}
	}
	if (k == 1) {
		map->point = malloc(sizeof(sfVector2f));
		map->point[0].x = i + 1;
		map->point[0].y = j + 1;
	}
}

void point_event(void *objet, sfRenderWindow *window, sfEvent *event)
{
	map_t *map = objet;
	static int k = 0;

	if (event->type == sfEvtMouseButtonPressed)
		get_point(map, sfMouse_getPositionRenderWindow(window), k);
	if (event->type == sfEvtMouseButtonReleased) {
		if (map->point != NULL)
			free(map->point);
		map->point = NULL;
		k = 0;
	}
}

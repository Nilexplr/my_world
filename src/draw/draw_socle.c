/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** draw_socle
*/

#include "convex_map.h"
#include <stdlib.h>

int find_ymax(sfVector2f **map, sfVector2f counter)
{
	int result = 0;

	for (int i = 0; i < counter.y; i++)
		for (int j = 0; j < counter.x; j++)
			map[i][j].y > result ? result = map[i][j].y : 0;
	return (result);
}

sfConvexShape *create_soclel(map_t *map, int y)
{
	sfConvexShape *soclel = sfConvexShape_create();
	int xa = map->max.x - 1;
	int ya = map->max.y - 1;
	sfVector2f pointa = {map->map2d[ya][xa].x, (y + 10 * map->max.y)};
	sfVector2f pointb = {map->map2d[0][xa].x, y};
	sfColor color = sfColor_fromRGB(121, 93, 31);

	sfConvexShape_setPointCount(soclel, map->max.y + 2);
	for (int i = 0; i < map->max.y; i++)
		sfConvexShape_setPoint(soclel, i
			, map->map2d[i][xa]);
	sfConvexShape_setPoint(soclel, map->max.y, pointa);
	sfConvexShape_setPoint(soclel, map->max.y + 1, pointb);
	sfConvexShape_setFillColor(soclel, color);
	return (soclel);
}

sfConvexShape *create_socler(map_t *map, int y)
{
	sfConvexShape *socler = sfConvexShape_create();
	int xa = map->max.x - 1;
	int ya = map->max.y - 1;
	sfVector2f pointa = {map->map2d[ya][xa].x, (y + 10 * map->max.y)};
	sfVector2f pointb = {map->map2d[ya][0].x, y};
	sfColor color = sfColor_fromRGB(158, 120, 40);

	sfConvexShape_setPointCount(socler, map->max.y + 2);
	for (int i = 0; i < map->max.y; i++)
		sfConvexShape_setPoint(socler, i, map->map2d[ya][i]);
	sfConvexShape_setPoint(socler, map->max.y, pointa);
	sfConvexShape_setPoint(socler, map->max.y + 1, pointb);
	sfConvexShape_setFillColor(socler, color);
	return (socler);
}

sfConvexShape **create_water(map_t *map, int y)
{
	sfConvexShape **water = malloc(sizeof(sfConvexShape*) * 2);
	water[0] = sfConvexShape_create();
	water[1] = sfConvexShape_create();
	int xa = map->max.x - 1;
	int ya = map->max.y - 1;
	sfVector2f pointaa = {map->water[ya][xa].x, (y + 10 * map->max.y)};
	sfVector2f pointba = {map->water[ya][0].x, y};
	sfVector2f pointbb = {map->water[0][xa].x, y};

	sfConvexShape_setPointCount(water[0], 4);
	sfConvexShape_setPointCount(water[1], 4);
	sfConvexShape_setPoint(water[0], 0, pointba);
	sfConvexShape_setPoint(water[0], 1, map->water[ya][0]);
	sfConvexShape_setPoint(water[0], 2, map->water[ya][xa]);
	sfConvexShape_setPoint(water[0], 3, pointaa);
	sfConvexShape_setPoint(water[1], 0, pointbb);
	sfConvexShape_setPoint(water[1], 1, map->water[0][xa]);
	sfConvexShape_setPoint(water[1], 2, map->water[ya][xa]);
	sfConvexShape_setPoint(water[1], 3, pointaa);
	return (water);
}

void draw_socle(map_t *map, sfRenderWindow *window)
{
	int ymin = find_ymax(map->map2d, map->max);
	sfConvexShape *soclel = create_soclel(map, ymin);
	sfConvexShape *socler = create_socler(map, ymin);
	sfConvexShape **water = create_water(map, ymin);
	sfColor color = sfColor_fromRGBA(33, 73, 231, 150);

	sfConvexShape_setFillColor(water[0], color);
	sfConvexShape_setFillColor(water[1], color);
	sfRenderWindow_drawConvexShape(window, water[0], NULL);
	sfRenderWindow_drawConvexShape(window, water[1], NULL);
	sfRenderWindow_drawConvexShape(window, soclel, NULL);
	sfRenderWindow_drawConvexShape(window, socler, NULL);
	sfConvexShape_destroy(soclel);
	sfConvexShape_destroy(socler);
	sfConvexShape_destroy(water[0]);
	sfConvexShape_destroy(water[1]);
	free(water);
}

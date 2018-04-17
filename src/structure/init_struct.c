/*
** EPITECH PROJECT, 2018
** init struct
** File description:
** init structure function
*/

#include "convex_map.h"
#include "noise.h"
#include <stdlib.h>
#include "map.h"
#include "lib.h"

sfVector2f define_max(float **map_3d)
{
	sfVector2f result;
	int i = 0;
	int j = 0;

	for (; map_3d[j]; j++)
		for (i = 0; !compare_float(map_3d[j][i], REF_MAP, 0.0001);
		i++);
	result.x = i;
	result.y = j;
	return (result);
}

map_t *init_map(float **map_3d)
{
	map_t *new = malloc(sizeof(map_t));
	if (new != NULL) {
		new->map3d = map_3d;
		new->max = define_max(map_3d);
		new->map2d = create_2d_map(map_3d, new->max);
		new->water = create_2d_map(create_map(new->max.y, new->max.x)
						, new->max);
		new->map = create_convex_map(new->water, new->max);
		new->tile = create_tile_map(new->map2d, new->max, map_3d);
		new->pos.x = 962;
		new->pos.y = 0;
		new->option = 0;
		new->zoom.x = 28;
		new->zoom.y = 100;
		new->angle.x = 45,
		new->angle.y = 20;
		new->point = NULL;
		new->mouse = malloc(sizeof(sfVector2i));
	}
	return (new);
}

reset_t init_reset(void)
{
	reset_t new;

	new.select = sfConvexShape_create();
	sfConvexShape_setPointCount(new.select, 4);
	sfConvexShape_setOutlineThickness(new.select, 2);
	sfConvexShape_setOutlineColor(new.select, sfBlue);
	return (new);
}

tile_t create_tile(sfVector2f **points, int y, int x, float **map3d)
{
	tile_t new;
	sfTexture *texture =
	sfTexture_createFromFile("./ressources/texture/grass.png", NULL);
	sfVector2f point[4] = {points[y][x], points[y + 1][x],
				points[y + 1][x + 1], points[y][x + 1] };
	float point3d[4] = {map3d[y][x], map3d[y + 1][x],
				map3d[y + 1][x + 1], map3d[y][x + 1] };

	new.shape1 = sfConvexShape_create();
	sfConvexShape_setTexture(new.shape1, texture, sfTrue);
	new.shape2 = sfConvexShape_create();
	sfConvexShape_setTexture(new.shape2, texture, sfTrue);
	choose_triangle(point, new.shape1, new.shape2, point3d);
	return (new);
}

noise_t *init_noise(int x, int y)
{
	noise_t *new = malloc(sizeof(noise_t));

	if (new != NULL) {
		new->step = 64;
		new->nb_octaves = 8;
		new->hauteur_max = x;
		new->longueur_max = y;
		new->persistance = 0.6;
		new->map = create_map(new->longueur_max, new->hauteur_max);
		randomize(new->map, new->longueur_max, new->hauteur_max);
	}
	return (new);
}

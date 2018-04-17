/*
** EPITECH PROJECT, 2018
** bootstrap.c
** File description:
** bootstrap my_radar
*/

#include "window.h"
#include "convex_map.h"
#include "map.h"
#include "math.h"
#include "stdlib.h"
#include "lib.h"

sfVector2f project_iso_point(float x, float y, float z, sfVector2f angle)
{
	sfVector2f point;
	float angle_x = angle.x;
	float angle_y = angle.y;

	point.x = cos(RADIAN(angle_x)) * x - cos(RADIAN(angle_x)) * y;
	point.y = sin(RADIAN(angle_y)) * y + sin(RADIAN(angle_y)) * x - z;
	return (point);
}

sfVector2f **create_2d_map(float **map_3d, sfVector2f counter)
{
	sfVector2f **map_2d = malloc(sizeof(sfVector2f *) * counter.y);
	sfVector2f angle = { 45, 20};

	if (!map_2d)
		return (NULL);

	for (int j = 0; map_3d[j]; j++) {
		map_2d[j] = malloc(sizeof(sfVector2f) * counter.x);
		if (!map_2d[j])
			return (NULL);
		for (int i = 0; !compare_float(map_3d[j][i], REF_MAP, 0.0001)
			; i++) {
			map_2d[j][i] = project_iso_point(28 * (i),
							28 * (j),
							map_3d[j][i] * 100,
							angle);
			map_2d[j][i].x += 962;
		}
	}
	return (map_2d);
}

sfConvexShape *create_square(sfVector2f **points, int y, int x)
{
	sfColor color = sfColor_fromRGBA(33, 73, 231, 150);
	sfConvexShape *shape = sfConvexShape_create();
	sfVector2f point[4] = { points[y][x], points[y + 1][x],
		points[y + 1][x + 1], points[y][x + 1] };

	sfConvexShape_setPointCount(shape, 4);
	for (int i = 0; i < 4; i++)
		sfConvexShape_setPoint(shape, i, point[i]);
	sfConvexShape_setFillColor(shape, color);
	return (shape);
}

sfConvexShape ***create_convex_map(sfVector2f **map_2d, sfVector2f counter)
{
	sfConvexShape ***map_convex = malloc(sizeof(sfShape **)
		* counter.y - 1);

	for (int j = 0; j < counter.y - 1; j++) {
		map_convex[j] = malloc(sizeof(sfShape *) * counter.x - 1);
		for (int i = 0; i < counter.x - 1; i++) {
			map_convex[j][i] = create_square(map_2d, j, i);
		}
	}
	return (map_convex);
}

tile_t **create_tile_map(sfVector2f **map_2d, sfVector2f counter
			, float **map3d)
{
	tile_t **map = malloc(sizeof(tile_t *) * counter.y - 1);

	for (int j = 0; j < counter.y - 1; j++) {
		map[j] = malloc(sizeof(tile_t) * counter.x - 1);
		for (int i = 0; i < counter.x - 1; i++) {
			map[j][i] = create_tile(map_2d, j, i, map3d);
		}
	}
	return (map);
}

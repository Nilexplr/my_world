/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** choose_triangle.c
*/

#include "convex_map.h"

int find_bigger(double *nb)
{
	double bigger = 0;
	int counter = 0;

	for (int i = 0; i < 4; i++) {
		if (nb[i] >= bigger) {
			bigger = nb[i];
			counter = i;
		}
	}
	return (counter);
}

void triangle_left(sfVector2f *point, sfConvexShape *shape1,
	sfConvexShape *shape2)
{
	sfConvexShape_setPointCount(shape1, 3);
	sfConvexShape_setPointCount(shape2, 3);
	sfConvexShape_setPoint(shape1, 0, point[0]);
	sfConvexShape_setPoint(shape1, 1, point[2]);
	sfConvexShape_setPoint(shape1, 2, point[3]);
	sfConvexShape_setPoint(shape2, 0, point[0]);
	sfConvexShape_setPoint(shape2, 1, point[1]);
	sfConvexShape_setPoint(shape2, 2, point[2]);
}

void triangle_right(sfVector2f *point, sfConvexShape *shape1,
	sfConvexShape *shape2)
{
	sfConvexShape_setPointCount(shape1, 3);
	sfConvexShape_setPointCount(shape2, 3);
	sfConvexShape_setPoint(shape1, 0, point[0]);
	sfConvexShape_setPoint(shape1, 1, point[1]);
	sfConvexShape_setPoint(shape1, 2, point[3]);
	sfConvexShape_setPoint(shape2, 0, point[1]);
	sfConvexShape_setPoint(shape2, 1, point[2]);
	sfConvexShape_setPoint(shape2, 2, point[3]);
}

void choose_triangle(sfVector2f *point, sfConvexShape *shape1,
	sfConvexShape *shape2, float *map3d)
{
	double moyenne;
	double nb[4];
	int max;

	moyenne = (map3d[0] + map3d[1] + map3d[2] + map3d[3]) / 4;
	for (int i = 0; i < 4; i++)
		nb[i] = fabs(moyenne - map3d[i]);
	max = find_bigger(nb);
	if (max == 1 || max == 3)
		triangle_left(point, shape1, shape2);
	else
		triangle_right(point, shape1, shape2);
}

/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** inside_triangle.c
*/

#include "convex_map.h"

int inside_triangle(sfConvexShape *triangle, sfVector2i mouse)
{
	sfVector2f p1 = sfConvexShape_getPoint(triangle, 0);
	sfVector2f p2 = sfConvexShape_getPoint(triangle, 1);
	sfVector2f p3 = sfConvexShape_getPoint(triangle, 2);
	sfVector2i p = mouse;

	float alpha = ((p2.y - p3.y) * (p.x - p3.x) + (p3.x - p2.x)
		* (p.y - p3.y))
		/ ((p2.y - p3.y) * (p1.x - p3.x) + (p3.x - p2.x)
		* (p1.y - p3.y));
	float beta =
		((p3.y - p1.y) * (p.x - p3.x) + (p1.x - p3.x) * (p.y - p3.y))
		/ ((p2.y - p3.y) * (p1.x - p3.x) + (p3.x - p2.x)
		* (p1.y - p3.y));
	float gamma = 1.0f - alpha - beta;

	if (alpha >= 0 && beta >= 0 && gamma >= 0)
		return (1);
	else
		return (0);
}

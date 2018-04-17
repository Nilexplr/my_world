/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** vertex_array.c
*/

#include "convex_map.h"

sfVertexArray *create_line(sfVector2f point1, sfVector2f point2)
{
	sfColor color = sfColor_fromRGB(132, 96, 54);
	sfVertexArray *vertex_array = sfVertexArray_create();
	sfVertex vertex1 = { .position = point1, .color = color };
	sfVertex vertex2 = { .position = point2, .color = color };

	sfVertexArray_append(vertex_array, vertex1);
	sfVertexArray_append(vertex_array, vertex2);
	sfVertexArray_setPrimitiveType(vertex_array, sfLinesStrip);
	return (vertex_array);
}

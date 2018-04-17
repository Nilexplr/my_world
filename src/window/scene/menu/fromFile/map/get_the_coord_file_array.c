/*
** EPITECH PROJECT, 2018
** get_the_coord.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "load_map.h"
#include "menu.h"
#include "lib.h"

int get_xmax_file_array(file_array_t *map, int *xmax, int safe)
{
	if (!map)
		return -1;
	*xmax = (map->x < *xmax) ? *xmax : map->x;
	if (map->down && !safe)
		if (get_xmax_file_array(map->down, xmax, 0) < 0)
			return -1;
	if (map->right)
		if (get_xmax_file_array(map->right, xmax, 1) < 0)
			return -1;
	return *xmax;
}

int get_ymax_file_array(file_array_t *map, int *ymax, int safe)
{
	if (!map)
		return -1;
	*ymax = (map->y < *ymax) ? *ymax : map->y;
	if (map->down && !safe)
		if (get_ymax_file_array(map->down, ymax, 0) < 0)
			return -1;
	if (map->right)
		if (get_ymax_file_array(map->right, ymax, 1) < 0)
			return -1;
	return *ymax;
}

int get_the_coord_file_array(int *x, int *y, file_array_t *map, int safe)
{
	char *type = ALL_TYPE;

	if (!map)
		return 0;
	if (map->symbole == type[*x]) {
		*x = map->x;
		*y = map->y;
		map->symbole = '\0';
		return 0;
	}
	if (map->down && !safe)
		if (!get_the_coord_file_array(x, y, map->down, 0))
			return 0;
	if (map->right)
		if (!get_the_coord_file_array(x, y, map->right, 1))
			return 0;
	return 1;
}

/*
** EPITECH PROJECT, 2018
** get_the_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "load_map.h"
#include "stdlib.h"

file_array_t *get_the_file_array(char const *filepath)
{
	char *file_in_mem = load_file_array_in_mem(filepath);
	file_array_t *map;

	if (!file_in_mem)
		return NULL;
	map = load_2d_file(file_in_mem);
	if (!map) {
		free(file_in_mem);
		return NULL;
	}
	if (!get_xy_file_array(map, 0, 0, 0)) {
		free(file_in_mem);
		return NULL;
	}
	free(file_in_mem);
	return map;
}

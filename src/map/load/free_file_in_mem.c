/*
** EPITECH PROJECT, 2018
** free_file_in_mem.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "file.h"
#include "stdlib.h"

void free_file_in_mem(file_t *map)
{
	if (!map)
		return;
	if (map->next)
		free_file_in_mem(map->next);
	if (map->line)
		free(map->line);
	free(map);
}

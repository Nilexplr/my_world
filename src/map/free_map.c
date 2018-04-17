/*
** EPITECH PROJECT, 2018
** create_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include <stdlib.h>

void free_map(float **map)
{
	if (!map)
		return;
	for (int i = 0; map[i] ; i++)
		free(map[i]);
	free(map);
}

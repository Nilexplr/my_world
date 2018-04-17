/*
** EPITECH PROJECT, 2018
** display_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "load_map.h"
#include <unistd.h>

void display_file_array(file_array_t *map, int safe)
{
	file_array_t *buff;

	if (map == NULL)
		return;
	if (map->symbole != '\0')
		write(1, &map->symbole, 1);
	if (map->right != NULL) {
		buff = map->right;
		display_file_array(buff, 1);
	} else
		write(1, "\n", 1);
	if (map->down != NULL && safe != 1) {
		buff = map->down;
		display_file_array(buff, 0);
	}
}

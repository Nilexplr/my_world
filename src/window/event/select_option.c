/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** select_option.c
*/

#include "event.h"
#include "convex_map.h"

int retour_option(int option, int nb)
{
	if (option == nb)
		return (0);
	else
		return (nb);
}
int select_option(void *objet, sfEvent *event)
{
	map_t *map = objet;

	if (event->key.code == sfKeyA) {
		return (retour_option(map->option, 1));
	}
	if (event->key.code == sfKeyZ) {
		return (retour_option(map->option, 2));
	}
	if (event->key.code == sfKeyE) {
		if (event->key.alt == sfTrue)
			reset_all(map);
		else if (map->option == 3)
			return (0);
		else
			return (3);
	}
	if (event->key.code == sfKeyR) {
		return (retour_option(map->option, 4));
	}
	return (map->option);
}

/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** display_map.c
*/

#include "convex_map.h"
#include "struct_window.h"

void display_map(sfRenderWindow *window, objet_t *objet)
{
	if (!objet)
		return;
	draw_tile(window, objet->adr);
	if (objet->next)
		display_menu(window, objet->next);
}

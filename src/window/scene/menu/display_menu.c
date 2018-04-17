/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** display_menu.c
*/

#include "menu.h"

void display_menu(sfRenderWindow *window, objet_t *objets)
{
	void (*display[NB_TYPE])(void *, sfRenderWindow *) = {
	display_the_button, display_the_button, display_the_button,
	display_text, display_text, display_text, display_the_button,
	display_text, display_the_button, display_text, display_text,
	display_text, display_the_button, display_the_button,
	display_the_button, display_the_button, display_the_button};

	if (!window || !objets)
		return;
	display[objets->type](objets->adr, window);
	if (objets->next)
		display_menu(window, objets->next);
}

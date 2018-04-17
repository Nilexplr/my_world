/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** free_main_menu.c
*/

#include "struct_window.h"
#include "menu.h"
#include "button.h"
#include "text.h"
#include <stdlib.h>

void free_main_menu(objet_t *objets)
{
	void (*free_objets[NB_TYPE])(void *) = {
		free_button, free_button, free_button, free_text, free_text,
	free_text, free_button, free_text, free_button, free_text, free_text,
	free_text, free_button, free_button, free_button, free_button,
	free_button};

	if (objets->next)
		free_main_menu(objets->next);
	free_objets[objets->type](objets->adr);
	free(objets);
}

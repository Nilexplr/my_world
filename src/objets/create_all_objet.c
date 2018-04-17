/*
** EPITECH PROJECT, 2018
** create_all_objet.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "struct_window.h"
#include "menu.h"
#include "button.h"
#include "text.h"
#include <stdlib.h>

static int find_type_objet(char to_create, char *type)
{
	if (!type)
		return 0;
	for (int i = 0 ; i < NB_TYPE ; i++)
		if (type[i] == to_create)
			return i;
	return -1;
}

static objet_t *fill_objets(objet_t *objets, char *to_create,
	void *(*create_objet[NB_TYPE])(void))
{
	objets->type = find_type_objet(*to_create, ALL_TYPE);
	if (objets->type < 0) {
		free(objets);
		return NULL;
	}
	objets->adr = create_objet[objets->type]();
	if (!objets->adr) {
		free(objets);
		return NULL;
	}
	objets->next = create_all_objet(to_create + 1);
	return objets;
}

objet_t *create_all_objet(char *to_create)
{
	void *(*create_objet[NB_TYPE])(void) = {
	create_button_lauch, create_button_option, create_button_quit,
	create_text_l, create_text_o, create_text_q, create_button_usage,
	create_text_u, create_button_return, create_text_r, create_text_T,
	create_text_H, create_button_reset, create_button_tile,
	create_button_point, create_button_save, create_button_background};
	objet_t *objets;

	if (!to_create)
		return NULL;
	objets = malloc(sizeof(objet_t));
	if (!objets)
		return NULL;
	return fill_objets(objets, to_create, create_objet);
}

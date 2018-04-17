/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** place_all_objet.c
*/

#include "menu.h"
#include "text.h"
#include "button.h"

void place_all_objet(objet_t *objets, void *file_array, sfVideoMode video)
{
	void (*place_objet[NB_TYPE])(void *, void *, sfVideoMode) = {
		place_button_l, place_button_o, place_button_q, place_text_l,
		place_text_o, place_text_q, place_button_u, place_text_u,
		place_button_r, place_text_r, place_text_T, place_text_H,
		place_button_reset, place_button_tile, place_button_point,
		place_button_save, place_button_background};

	if (!objets)
		return;
	place_objet[objets->type](objets->adr, file_array, video);
	if (objets->next)
		place_all_objet(objets->next, file_array, video);
}

/*
** EPITECH PROJECT, 2018
** free_button.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "button.h"
#include <stdlib.h>

void free_button(void *adr)
{
	button_t *button = adr;

	if (!button)
		return;
	if (button->rect) {
		sfRectangleShape_destroy(button->rect);
	}
	free(button);
}

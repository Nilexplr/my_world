/*
** EPITECH PROJECT, 2018
** create_button.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "button.h"
#include <stdlib.h>
#include "utility.h"

static button_t *create_empty_button()
{
	button_t *button = malloc(sizeof(button_t));

	if (!button)
		return NULL;
	button->rect = sfRectangleShape_create();
	if (!button->rect) {
		free(button);
		return NULL;
	}
	button->action = NULL;
	return button;
}

void *create_buttonFromTexture()
{
	button_t *button = create_empty_button();
	sfIntRect rect;
	sfTexture *texture;

	if (!button)
		return NULL;
	rect = init_rect(0, 0, 512, 512);
	texture = sfTexture_createFromFile(PATH_TEXTURE, &rect);
	sfRectangleShape_setTexture(button->rect, texture, sfTrue);
	return button;
}

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
	button->push = 0;
	return button;
}

void *create_button(sfVector2f size, sfColor color, float angle,
			float thickness)
{
	button_t *button = create_empty_button();

	if (!button)
		return NULL;
	sfRectangleShape_setSize(button->rect, size);
	sfRectangleShape_setFillColor(button->rect, color);
	sfRectangleShape_setRotation(button->rect, angle);
	sfRectangleShape_setOutlineThickness(button->rect, thickness);
	return button;
}

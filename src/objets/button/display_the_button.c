/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** display_the_button.c
*/

#include "button.h"

void display_the_button(void *adr_button, sfRenderWindow *window)
{
	button_t *button = adr_button;

	if (!button)
		return;
	sfRenderWindow_drawRectangleShape(window, button->rect, NULL);
}

/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** display_text.c
*/

#include "text.h"

void display_text(void *adr, sfRenderWindow *window)
{
	text_t *txt = adr;

	if (!window || !txt)
		return;
	sfRenderWindow_drawText(window, txt->text, NULL);
}

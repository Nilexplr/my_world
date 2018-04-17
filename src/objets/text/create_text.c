/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** create_text.c
*/

#include "text.h"
#include <stdlib.h>

text_t *create_text(char *str, sfColor color, sfVector2f scale,
	sfVector2f pos)
{
	text_t *text = malloc(sizeof(text_t));
	sfFont *font = manage_font(1);

	if (!text || !font)
		return NULL;
	text->text = sfText_create();
	if (!text->text) {
		free(text);
		return NULL;
	}
	sfText_setFont(text->text, font);
	sfText_setString(text->text, str);
	sfText_setScale(text->text, scale);
	sfText_setPosition(text->text, pos);
	sfText_setColor(text->text, color);
	return text;
}

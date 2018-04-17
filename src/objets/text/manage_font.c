/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** manage_font.c
*/

#include "text.h"

sfFont *manage_font(int mode)
{
	static sfFont *font = NULL;

	if (mode) {
		if (!font)
			font = sfFont_createFromFile(
				"./ressources/goodMorning.ttf");
		return font;
	} else {
		if (font)
			sfFont_destroy(font);
	}
	return NULL;
}

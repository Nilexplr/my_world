/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** text_menu.c
*/

#include "menu.h"
#include "text.h"

void *create_text_T(void)
{
	sfColor color[9] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	sfColor tmp = color[COLOR_TITLE_TEXT];
	text_t *text = create_text(STR_TITLE_TEXT, tmp,
	(sfVector2f){SCALE_HEIGHT_TITLE_TEXT, SCALE_WEIGHT_TITLE_TEXT},
	(sfVector2f){POS_X_TITLE_TEXT, POS_Y_TITLE_TEXT});

	return text;
}

void *create_text_H(void)
{
	sfColor color[9] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	sfColor tmp = color[COLOR_HELP_TEXT];
	text_t *text = create_text(STR_HELP_TEXT, tmp,
	(sfVector2f){SCALE_HEIGHT_HELP_TEXT, SCALE_WEIGHT_HELP_TEXT},
	(sfVector2f){POS_X_HELP_TEXT, POS_Y_HELP_TEXT});

	return text;
}

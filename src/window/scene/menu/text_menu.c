/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** text_menu.c
*/

#include "menu.h"
#include "text.h"

void *create_text_l(void)
{
	sfColor color[9] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	sfColor tmp = color[COLOR_LAUNCH_TEXT];
	text_t *text = create_text(STR_LAUNCH_TEXT, tmp,
	(sfVector2f){SCALE_HEIGHT_LAUNCH_TEXT, SCALE_WEIGHT_LAUNCH_TEXT},
	(sfVector2f){POS_X_LAUNCH_TEXT, POS_Y_LAUNCH_TEXT});

	return text;
}

void *create_text_o(void)
{
	sfColor color[9] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	sfColor tmp = color[COLOR_OPTION_TEXT];
	text_t *text = create_text(STR_OPTION_TEXT, tmp,
	(sfVector2f){SCALE_HEIGHT_OPTION_TEXT, SCALE_WEIGHT_OPTION_TEXT},
	(sfVector2f){POS_X_OPTION_TEXT, POS_Y_OPTION_TEXT});

	return text;
}

void *create_text_q(void)
{
	sfColor color[9] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	sfColor tmp = color[COLOR_QUIT_TEXT];
	text_t *text = create_text(STR_QUIT_TEXT, tmp,
	(sfVector2f){SCALE_HEIGHT_QUIT_TEXT, SCALE_WEIGHT_QUIT_TEXT},
	(sfVector2f){POS_X_QUIT_TEXT, POS_Y_QUIT_TEXT});

	return text;
}

void *create_text_u(void)
{
	sfColor color[9] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	sfColor tmp = color[COLOR_USAGE_TEXT];
	text_t *text = create_text(STR_USAGE_TEXT, tmp,
	(sfVector2f){SCALE_HEIGHT_USAGE_TEXT, SCALE_WEIGHT_USAGE_TEXT},
	(sfVector2f){POS_X_USAGE_TEXT, POS_Y_USAGE_TEXT});

	return text;
}

void *create_text_r(void)
{
	sfColor color[9] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	sfColor tmp = color[COLOR_RETURN_TEXT];
	text_t *text = create_text(STR_RETURN_TEXT, tmp,
	(sfVector2f){SCALE_HEIGHT_RETURN_TEXT, SCALE_WEIGHT_RETURN_TEXT},
	(sfVector2f){POS_X_RETURN_TEXT, POS_Y_RETURN_TEXT});

	return text;
}

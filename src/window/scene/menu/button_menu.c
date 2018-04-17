/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** button_menu.c
*/

#include "button.h"
#include "menu.h"
#include <SFML/Graphics.h>

void *create_button_lauch(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_LAUNCH_BUTTON,
		WEIGHT_LAUNCH_BUTTON}, color[COLOR_LAUNCH_BUTTON],
		ANGLE_LAUNCH_BUTTON,THICKNESS_LAUNCH_BUTTON);

	button->action = action_lauch;
	return button;
}

void *create_button_option(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_OPTION_BUTTON,
		WEIGHT_OPTION_BUTTON}, color[COLOR_OPTION_BUTTON],
		ANGLE_OPTION_BUTTON,THICKNESS_OPTION_BUTTON);

	button->action = action_option;
	return button;
}

void *create_button_quit(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_QUIT_BUTTON,
		WEIGHT_QUIT_BUTTON}, color[COLOR_QUIT_BUTTON],
		ANGLE_QUIT_BUTTON,THICKNESS_QUIT_BUTTON);

	button->action = action_quit;
	return button;
}

void *create_button_usage(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_USAGE_BUTTON,
		WEIGHT_USAGE_BUTTON}, color[COLOR_USAGE_BUTTON],
		ANGLE_USAGE_BUTTON,THICKNESS_USAGE_BUTTON);

	button->action = action_usage;
	return button;
}

void *create_button_return(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_RETURN_BUTTON,
		WEIGHT_RETURN_BUTTON}, color[COLOR_RETURN_BUTTON],
		ANGLE_RETURN_BUTTON,THICKNESS_RETURN_BUTTON);

	button->action = action_return;
	return button;
}

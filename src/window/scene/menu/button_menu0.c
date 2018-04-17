/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** button_menu.c
*/

#include <SFML/Graphics.h>
#include "button.h"
#include "menu.h"

void *create_button_reset(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_RESET_BUTTON,
		WEIGHT_RESET_BUTTON}, color[COLOR_RESET_BUTTON],
		ANGLE_RESET_BUTTON,THICKNESS_RESET_BUTTON);

	button->action = action_reset;
	return button;
}

void *create_button_tile(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_TILE_BUTTON,
		WEIGHT_TILE_BUTTON}, color[COLOR_TILE_BUTTON],
		ANGLE_TILE_BUTTON,THICKNESS_TILE_BUTTON);

	button->action = action_tile;
	return button;
}

void *create_button_point(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_POINT_BUTTON,
		WEIGHT_POINT_BUTTON}, color[COLOR_POINT_BUTTON],
		ANGLE_POINT_BUTTON,THICKNESS_POINT_BUTTON);

	button->action = action_point;
	return button;
}

void *create_button_save(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan};
	button_t *button = create_button((sfVector2f){HEIGHT_SAVE_BUTTON,
		WEIGHT_SAVE_BUTTON}, color[COLOR_SAVE_BUTTON],
		ANGLE_SAVE_BUTTON,THICKNESS_SAVE_BUTTON);

	button->action = action_save;
	return button;
}

void *create_button_background(void)
{
	sfColor color[10] = {sfRed, sfBlack, sfWhite, sfGreen, sfBlue, sfYellow
		, sfMagenta, sfCyan, (sfColor){23, 40, 59, 50}};
	button_t *button = create_button((sfVector2f){HEIGHT_BACKGROUND_BUTTON,
		WEIGHT_BACKGROUND_BUTTON}, color[COLOR_BACKGROUND_BUTTON],
		ANGLE_BACKGROUND_BUTTON,THICKNESS_BACKGROUND_BUTTON);

	button->action = NULL;
	return button;
}

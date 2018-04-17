/*
** EPITECH PROJECT, 2018
** place_button.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "button.h"
#include "load_map.h"

void place_button_l(void *adr, void *file_array, sfVideoMode video)
{
	button_t *button = adr;
	file_array_t *map = file_array;
	int x = 0;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfRectangleShape_setPosition(button->rect, pos);
}

void place_button_o(void *adr, void *file_array, sfVideoMode video)
{
	button_t *button = adr;
	file_array_t *map = file_array;
	int x = 1;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfRectangleShape_setPosition(button->rect, pos);
}

void place_button_q(void *adr, void *file_array, sfVideoMode video)
{
	button_t *button = adr;
	file_array_t *map = file_array;
	int x = 2;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfRectangleShape_setPosition(button->rect, pos);
}

void place_button_u(void *adr, void *file_array, sfVideoMode video)
{
	button_t *button = adr;
	file_array_t *map = file_array;
	int x = 6;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfRectangleShape_setPosition(button->rect, pos);
}

void place_button_r(void *adr, void *file_array, sfVideoMode video)
{
	button_t *button = adr;
	file_array_t *map = file_array;
	int x = 8;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfRectangleShape_setPosition(button->rect, pos);
}

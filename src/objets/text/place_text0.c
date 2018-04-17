/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** place_text.c
*/

#include "text.h"
#include "load_map.h"

void place_text_r(void *adr, void *file_array, sfVideoMode video)
{
	text_t *text = adr;
	file_array_t *map = file_array;
	int x = 9;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfText_setPosition(text->text, pos);
}

void place_text_T(void *adr, void *file_array, sfVideoMode video)
{
	text_t *text = adr;
	file_array_t *map = file_array;
	int x = 10;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfText_setPosition(text->text, pos);
}

void place_text_H(void *adr, void *file_array, sfVideoMode video)
{
	text_t *text = adr;
	file_array_t *map = file_array;
	int x = 11;
	int y;
	int xmax = 0;
	int ymax = 0;
	sfVector2f pos = {0, 0};

	xmax = get_xmax_file_array(map, &xmax, 0);
	ymax = get_ymax_file_array(map, &ymax, 0);
	get_the_coord_file_array(&x, &y, map, 0);
	pos.y = (float)y / (ymax + 1) * video.height;
	pos.x = (float)x / (xmax + 1) * video.width;
	sfText_setPosition(text->text, pos);
}

/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** place_text.c
*/

#include "text.h"
#include "load_map.h"

void place_text(void *adr, void *file_array, sfVideoMode video)
{
	adr = adr;
	file_array = file_array;
	video = video;
}

void place_text_l(void *adr, void *file_array, sfVideoMode video)
{
	text_t *text = adr;
	file_array_t *map = file_array;
	int x = 3;
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

void place_text_o(void *adr, void *file_array, sfVideoMode video)
{
	text_t *text = adr;
	file_array_t *map = file_array;
	int x = 4;
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

void place_text_q(void *adr, void *file_array, sfVideoMode video)
{
	text_t *text = adr;
	file_array_t *map = file_array;
	int x = 5;
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

void place_text_u(void *adr, void *file_array, sfVideoMode video)
{
	text_t *text = adr;
	file_array_t *map = file_array;
	int x = 7;
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

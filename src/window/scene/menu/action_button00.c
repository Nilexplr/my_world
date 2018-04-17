/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** action_button.c
*/

#include <SFML/Graphics.h>
#include "button.h"
#include "menu.h"
#include "convex_map.h"
#include "colors.h"
#include "lib.h"
#include "map.h"
#include "music.h"

void action_add_size(sfRenderWindow *window, scenes_t *scenes)
{
	scene_t *scene;
	map_t *map;

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	map = scene->objets->adr;
	map_size(1);
	destroy_map(map);
	scene->objets->adr = (void *)create_map_from_nb(pow(2,
		map_size(0)) + 1);
	window = window;
}

void action_add_vol(sfRenderWindow *window, scenes_t *scenes)
{
	scenes = scenes;
	window = window;
	music_loop(9);
}

void action_rmv_vol(sfRenderWindow *window, scenes_t *scenes)
{
	scenes = scenes;
	window = window;
	music_loop(8);
}

void action_rmv_size(sfRenderWindow *window, scenes_t *scenes)
{
	scene_t *scene;
	map_t *map;

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	map = scene->objets->adr;
	map_size(-1);
	destroy_map(map);
	scene->objets->adr = create_map_from_nb(pow(2, map_size(0)) + 1);
	window = window;
}

void action_load_map(sfRenderWindow *window, scenes_t *scenes)
{
	scene_t *scene;
	void *tmp;

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	tmp = scene->objets->adr;
	scene->objets->adr = create_map_from_file_();
	if (scene->objets->adr)
		destroy_map(tmp);
	else
		scene->objets->adr = tmp;
	window = window;
}

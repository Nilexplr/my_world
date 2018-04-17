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

void action_reset(sfRenderWindow *window, scenes_t *scenes)
{
	scene_t *scene;
	map_t *map;

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	map = scene->objets->adr;
	reset_all(map);
	window = window;
}

void reset_all_button_except(int type, objet_t *objs)
{
	button_t *button;

	for (; objs ; objs = objs->next) {
		if ((objs->type == 13 || objs->type == 14)
		&& objs->type != type) {
		button = objs->adr;
		button->push = 0;
		}
	}
}

void action_tile(sfRenderWindow *window, scenes_t *scenes)
{
	scene_t *scene;
	button_t *button;
	objet_t *objet;
	map_t *map;

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	for (objet = scene->objets ; objet->next && objet->type != 13 ;
	objet = objet->next);
	button = objet->adr;
	map = scene->objets->adr;
	if (map->option == 2) {
		map->option = 0;
		button->push = 0;
	} else {
		map->option = 2;
		button->push = 1;
		reset_all_button_except(objet->type, scene->objets);
	}
	window = window;
}

void action_point(sfRenderWindow *window, scenes_t *scenes)
{
	scene_t *scene;
	button_t *button;
	objet_t *objet;
	map_t *map;

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	for (objet = scene->objets ; objet->next && objet->type != 14 ;
	objet = objet->next);
	button = objet->adr;
	map = scene->objets->adr;
	if (map->option == 1) {
		map->option = 0;
		button->push = 0;
	} else {
		map->option = 1;
		button->push = 1;
		reset_all_button_except(objet->type, scene->objets);
	}
	window = window;
}

void action_save(sfRenderWindow *window, scenes_t *scenes)
{
	scene_t *scene;
	map_t *map;
	char *path = my_strdup("save_map.txt");

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	map = scene->objets->adr;
	if (save_map(path, map->map3d, 0.01))
		my_putstr(RED "Invalid save\n" RESET);
	else
		my_putstr(GREEN "Succeful save\n" RESET);
	window = window;
}

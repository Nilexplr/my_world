/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** init_menu.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "menu.h"
#include "window.h"
#include "lib.h"
#include "usage.h"
#include "option.h"

scene_t *init_scene(char **scene_to_create, sfVideoMode video);

static int find_right_type(char *scene)
{
	char *tab[NB_SCENE] = {_MENU_H__, _USAGE_H__, _OPTION_H__};

	for (int i = 0 ; i < NB_SCENE ; i++)
		if (!my_strcmp(scene, tab[i]))
			return i;
	return -1;
}

static scene_t *finish_init_scene(scene_t **scene, char **scene_to_create,
	sfVideoMode video)
{
	if (!(*scene)->objets) {
		free(*scene);
		return NULL;
	}
	(*scene)->prev = NULL;
	(*scene)->next = init_scene(&scene_to_create[1], video);
	if ((*scene)->next)
		(*scene)->next->prev = *scene;
	return *scene;
}

scene_t *init_scene(char **scene_to_create, sfVideoMode video)
{
	scene_t *scene;
	char *objets[NB_SCENE] = {ALL_TYPE, ALL_TYPE, ALL_TYPE};
	char *path[NB_SCENE] = {MAIN_MENU_OBJETS, USAGE_OBJETS,
		OPTION_OBJETS};

	if (!scene_to_create)
		return NULL;
	if (!*scene_to_create)
		return NULL;
	scene = malloc(sizeof(scene_t));
	if (!scene)
		return NULL;
	scene->type = find_right_type(scene_to_create[0]);
	if (scene->type < 0)
		return NULL;
	scene->objets = create_allobjetsfromfile(path[scene->type],
		objets[scene->type], video);
	return finish_init_scene(&scene, scene_to_create, video);
}

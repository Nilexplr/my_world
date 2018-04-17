/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** free.c
*/

#include "window.h"
#include <stdlib.h>
#include "convex_map.h"

static void free_scene_map(objet_t *objet)
{
	if (!objet)
		return;
	destroy_map(objet->adr);
}

void free_scene(scene_t *scene)
{
	void (*free_objet_from_scene[NB_SCENE])(objet_t *) = {free_main_menu,
		free_main_menu, free_main_menu, free_scene_map};
	if (scene->next)
		free(scene->next);
	free_objet_from_scene[scene->type](scene->objets);
	free(scene);
}

void free_scenes(scenes_t *scenes)
{
	if (!scenes)
		return;
	if (scenes->scene)
		free_scene(scenes->scene);
}

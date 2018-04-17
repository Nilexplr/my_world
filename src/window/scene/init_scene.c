/*
** EPITECH PROJECT, 2018
** init_scene.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "struct_window.h"
#include "stdlib.h"

scenes_t *init_scenes(int current_scene, scene_t *scene)
{
	scenes_t *result;

	if (!scene)
		return NULL;
	result = malloc(sizeof(scenes_t));
	if (!result)
		return NULL;
	result->current_scene = current_scene;
	result->scene = scene;
	return result;
}

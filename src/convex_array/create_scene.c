/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** create_scene.c
*/

#include <stdlib.h>
#include "map.h"
#include "file.h"
#include "convex_map.h"
#include "noise.h"

map_t *create_map_from_file_(void)
{
	file_t *file;
	float **map;

	file = load_file_in_mem("./save_map.txt");
	if (!file)
		return NULL;
	map = create_map_from_file(file);
	if (!map)
		return NULL;
	free_file_in_mem(file);
	return init_map(map);
}

map_t *create_map_from_nb(int nb)
{
	float **map;

	map = create_noise(nb, nb);
	if (!map)
		return NULL;
	return init_map(map);
}

scene_t *create_scene(sfVideoMode video)
{
	scene_t *scene = malloc(sizeof(scene_t));
	objet_t *objet = malloc(sizeof(objet_t));
	int nb = map_size(0);
	map_t *convex_map;

	if (!scene || !objet)
		return NULL;
	convex_map = create_map_from_nb(pow(2, nb) + 1);
	if (!convex_map)
		return NULL;
	objet->adr = convex_map;
	objet->type = -1;
	objet->next = create_allobjetsfromfile(OBJETS_CONVEX_MAP, ALL_TYPE,
						video);
	scene->objets = objet;
	scene->type = 3;
	scene->next = NULL;
	scene->prev = NULL;
	return scene;
}

int add_scene_to_list(scene_t *list, scene_t *scene)
{
	if (!list)
		return -1;
	for (; list->next ; list = list->next);
	list->next = scene;
	scene->prev = list;
	return 0;
}

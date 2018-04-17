/*
** EPITECH PROJECT, 2018
** create_allobjetsfromfile.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "struct_window.h"
#include "load_map.h"
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "menu.h"

objet_t *create_allobjetsfromfile(char const *path, char *all_type,
				sfVideoMode video)
{
	file_array_t *map = get_the_file_array(path);
	char *all_objetToCreate;
	objet_t *all_objets = NULL;

	all_objetToCreate = get_all_objet(map, all_type);
	all_objets = create_all_objet(all_objetToCreate);
	place_all_objet(all_objets, map, video);
	free_file_array(map, 0);
	free(all_objetToCreate);
	return all_objets;
}

/*
** EPITECH PROJECT, 2018
** get_info.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "lib.h"
#include "load_map.h"
#include "stdlib.h"

int count_objet(file_array_t *map, char *objet_symbole, int safe)
{
	int count = 0;

	if (!map || !objet_symbole)
		return -1;
	if (map->down && !safe) {
		count += count_objet(map->down, objet_symbole, 0);
		if (count < 0)
			return -1;
	}
	if (map->right) {
		count += count_objet(map->right, objet_symbole, 1);
		if (count < 0)
			return -1;
	}
	if (!compare(&map->symbole, objet_symbole))
		return count;
	return (count + 1);
}

int get_xy_file_array(file_array_t *map, int x, int y, int safe)
{
	file_array_t *buff;

	if (map == NULL)
		return 0;
	map->x = x;
	map->y = y;
	if (map->down != NULL && safe != 1) {
		buff = map->down;
		if (!get_xy_file_array(buff, x, y + 1, 0))
			return 0;
	}
	if (map->right != NULL) {
		buff = map->right;
		if (!get_xy_file_array(buff, x + 1, y, 1))
			return 0;
	}
	return 1;
}

int get_objet_type(char **objets, file_array_t *map, char *objet_symbole,
	int safe)
{
	if (!map || !objet_symbole || !objets)
		return 0;
	for (int i = 0 ; *(objet_symbole + i) != '\0' ; i++)
		if (map->symbole == *(objet_symbole + i)) {
			*objets = my_strncat(*objets, objet_symbole + i, 0);
			break;
		}
	if (!*objets)
		return -1;
	if (map->down && !safe)
		if (!get_objet_type(objets, map->down, objet_symbole, 0))
			return 0;
	if (map->right)
		if (!get_objet_type(objets, map->right, objet_symbole, 1))
			return 0;
	return 1;
}

char *get_all_objet(file_array_t *map, char *objet_symbole)
{
	int nb_objet;
	char *all_objet;

	if (!map || !objet_symbole)
		return NULL;
	nb_objet = count_objet(map, objet_symbole, 0);
	if (nb_objet < 0)
		return NULL;
	all_objet = my_empty_string(sizeof(char) * (nb_objet + 1), '\0');
	if (!all_objet)
		return NULL;
	if (!get_objet_type(&all_objet, map, objet_symbole, 0))
		return NULL;
	return all_objet;
}

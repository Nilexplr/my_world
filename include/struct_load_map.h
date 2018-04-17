/*
** EPITECH PROJECT, 2018
** struct_load_map.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _STRUCT_LOAD_MAP_H_
#define _STRUCT_LOAD_MAP_H_

typedef struct map {
	char symbole;
	int x;
	int y;
	struct map *up;
	struct map *down;
	struct map *left;
	struct map *right;
}file_array_t;

#endif

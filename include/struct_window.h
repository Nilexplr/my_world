/*
** EPITECH PROJECT, 2018
** struct_window.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _STRUCT_WINDOW_H__
#define _STRUCT_WINDOW_H__

#include "SFML/Graphics.h"

typedef struct objet {
	void *adr;
	int type;
	struct objet *next;
}objet_t;

typedef struct scene {
	objet_t *objets;
	int type;
	struct scene *next;
	struct scene *prev;
}scene_t;

typedef struct scenes {
	int current_scene;
	scene_t *scene;
}scenes_t;

#endif

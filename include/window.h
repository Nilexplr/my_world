/*
** EPITECH PROJECT, 2018
** window.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _WINDOW_H__
#define _WINDOW_H__

#include "SFML/Graphics.h"
#include "stdio.h"
#include "struct_window.h"
#include "menu.h"

#define NB_SCENE 4

void event(sfRenderWindow *, scenes_t *);
// manage_event

int window(scenes_t *, sfVideoMode );
// init a window and it take a void * to have all the scene needed

void display_scene(scenes_t *, sfRenderWindow *, sfClock *);
// display the correct scene at the right time

scene_t *init_scene(char **scene_to_create, sfVideoMode video);
// init_all the scene

scenes_t *init_scenes(int current_scene, scene_t *scene);
// init global struct

int initialisation(scenes_t **scenes, sfVideoMode video);
// init for my_world

void free_scenes(scenes_t *);
// free all

#endif

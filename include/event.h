/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** event.h
*/

#ifndef _EVENT_H__
#define _EVENT_H__
#include "window.h"
#include <SFML/Window/Keyboard.h>

typedef struct reset_s {
	sfConvexShape *select;
	sfVector2f origin;
}reset_t;

void mouve_right(void *objet);
void mouve_left(void *objet);
void mouve_up(void *objet);
void mouve_down(void *objet);
void get_point(void *objet, sfVector2i mouse, int k);
sfVector2f find_point(sfVector2f point, sfVector2i mouse, int *k);
void point_event(void *objet, sfRenderWindow *window, sfEvent *event);
int select_option(void *map, sfEvent *event);
void reset_all(void *objet);
void noise_event(void *map);
int select_option(void *map, sfEvent *event);
void zoom_event(void *objet);
void zoom_up(void *objet);
void zoom_down(void *objet);
int inside_triangle(sfConvexShape *triangle, sfVector2i mouse);
void tuile_event(void *objet, sfRenderWindow *window, sfEvent *event);
void modification_tile(void *objet, sfRenderWindow *window);


#endif

/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** event_button.c
*/

#include <SFML/Graphics.h>
#include "struct_window.h"
#include "button.h"

void event_menu(sfRenderWindow *window, sfEvent *event,
	scenes_t *scenes)
{
	scene_t *scene;
	objet_t *objet;

	if (!scenes)
		return;
	scene = scenes->scene;
	for (; scene->next && scene->type != scenes->current_scene;
		scene = scene->next);
	for (objet = scene->objets ; objet ; objet = objet->next) {
		if (objet->type == 0 || objet->type == 1 || objet->type == 2 ||
		objet->type == 6 || objet->type == 8 || objet->type == 12
		|| objet->type == 13 || objet->type == 14 || objet->type == 15)
			event_button(objet, window, scenes);
	}
	event = event;
}

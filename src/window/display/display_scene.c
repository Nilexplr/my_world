/*
** EPITECH PROJECT, 2018
** display_sprites.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "window.h"
#include "convex_map.h"

static void choose_scene(scene_t *scene, sfRenderWindow *window,
	int scene_type)
{
	void (*display_scen[NB_SCENE])(sfRenderWindow *, objet_t *) = {
		display_menu, display_menu, display_menu, display_map};

	for (; scene->next && scene->type != scene_type ; scene = scene->next);
	for (; scene->prev && scene->type != scene_type ; scene = scene->prev);
	display_scen[scene->type](window, scene->objets);
}

void display_scene(scenes_t *scenes, sfRenderWindow *window, sfClock *clock)
{
	sfTime time;

	if (!scenes || !window || !clock)
		return;
	sfRenderWindow_clear(window, sfBlack);
	choose_scene(scenes->scene, window, scenes->current_scene);
	time = sfClock_getElapsedTime(clock);
	while (time.microseconds < (1000000.0 / 60))
		time = sfClock_getElapsedTime(clock);
	sfClock_restart(clock);
	sfRenderWindow_display(window);
}

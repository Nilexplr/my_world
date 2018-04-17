/*
** EPITECH PROJECT, 2018
** window.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "window.h"
#include "map.h"
#include "convex_map.h"
#include "view.h"

int window(scenes_t *scenes, sfVideoMode video)
{
	sfRenderWindow *window = sfRenderWindow_create(video, "My_World",
						sfDefaultStyle, NULL);
	sfClock *clock = sfClock_create();

	if (!window || !clock)
		return -1;
	while (sfRenderWindow_isOpen(window)) {
		event(window, scenes);
		display_scene(scenes, window, clock);
	}
	sfRenderWindow_destroy(window);
	return (0);
}

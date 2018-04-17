/*
** EPITECH PROJECT, 2018
** close.c
** File description:
** julien.ollivier@epitech.eu
*/

#include <stdlib.h>
#include "window.h"
#include "event.h"
#include "convex_map.h"

static void mouve_event(void *objet, sfRenderWindow *window)
{
	map_t *map = objet;
	sfVector2u size = sfRenderWindow_getSize(window);
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

	if (sfKeyboard_isKeyPressed(sfKeyUp) || mouse.y <= 10)
		mouve_up(map);
	if (sfKeyboard_isKeyPressed(sfKeyRight) ||
			(unsigned int) mouse.x >= size.x - 5)
		mouve_right(map);
	if (sfKeyboard_isKeyPressed(sfKeyLeft) || mouse.x <= 5)
		mouve_left(map);
	if (sfKeyboard_isKeyPressed(sfKeyDown) ||
			(unsigned int) mouse.y >= size.y - 5)
		mouve_down(map);
}

static void analyse_event(sfRenderWindow *window, sfEvent *event,
	scenes_t *scenes)
{
	scene_t *scene;
	map_t *map;

	for (scene = scenes->scene ; scene->next ; scene = scene->next);
	map = scene->objets->adr;
	if (event->type == sfEvtKeyPressed) {
		map->option = select_option(map, event);
	}
	if (map->option == 1)
		point_event(map, window, event);
	if (map->option == 2)
		tuile_event(map, window, event);
	if (map->option == 3)
		return;
	if (map->option == 4)
		noise_event(map);
}

void pre_event(map_t *map, sfRenderWindow *window)
{
	mouve_event(map, window);
	zoom_event(map);
	if (map->point != NULL && map->option == 1)
		map->map2d[map->point[0].y][map->point[0].x].y =
		sfMouse_getPositionRenderWindow(window).y;
	if (map->option == 2 && map->point != NULL)
		modification_tile(map, window);
}

void event(sfRenderWindow *window, scenes_t *scenes)
{
	sfEvent event;
	scene_t *scene;

	if (scenes->current_scene == 3) {
		for (scene = scenes->scene; scene->next; scene = scene->next);
		pre_event(scene->objets->adr, window);
	}
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (scenes->current_scene == 3)
			analyse_event(window, &event, scenes);
		event_menu(window, &event, scenes);
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
	}
}

/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** action_button.c
*/

#include "button.h"
#include "menu.h"
#include <SFML/Graphics.h>

void action_lauch(sfRenderWindow *window, scenes_t *scenes)
{
	scenes->current_scene = 3;
	window = window;
}

void action_quit(sfRenderWindow *window, scenes_t *scenes)
{
	scenes = scenes;
	sfRenderWindow_close(window);
}

void action_usage(sfRenderWindow *window, scenes_t *scenes)
{
	window = window;
	scenes->current_scene = 1;
}

void action_return(sfRenderWindow *window, scenes_t *scenes)
{
	window = window;
	scenes->current_scene = 0;
}

void action_option(sfRenderWindow *window, scenes_t *scenes)
{
	window = window;
	scenes->current_scene = 2;
}

/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** initialisation.c
*/

#include "window.h"
#include "usage.h"
#include "menu.h"
#include "option.h"
#include "text.h"
#include "button.h"

static void change_all_objet_to_dont_have_to_create_other3(scenes_t *scenes)
{
	objet_t *obj;
	button_t *but;
	text_t *text;

	for (obj = scenes->scene->next->next->objets; obj ; obj = obj->next)
		if (obj->type == 3)
			break;
	text = obj->adr;
	sfText_setString(text->text, "LOAD MAP");
	if (!obj)
		return;
	for (obj = scenes->scene->next->next->objets; obj ; obj = obj->next)
		if (obj->type == 2)
			break;
	if (!obj)
		return;
	but = obj->adr;
	but->action = action_load_map;
}

static void change_all_objet_to_dont_have_to_create_other2(scenes_t *scenes)
{
	objet_t *obj;
	button_t *but;

	for (obj = scenes->scene->next->next->objets; obj ; obj = obj->next)
		if (obj->type == 0)
			break;
	but = obj->adr;
	but->action = action_rmv_vol;
	if (!obj)
		return;
	for (obj = obj->next ; obj ; obj = obj->next)
		if (obj->type == 0)
			break;
	if (!obj)
		return;
	but = obj->adr;
	but->action = action_rmv_size;
	change_all_objet_to_dont_have_to_create_other3(scenes);
}

static void change_all_objet_to_dont_have_to_create_other(scenes_t *scenes)
{
	objet_t *obj;
	button_t *but;

	for (obj = scenes->scene->next->next->objets; obj ; obj = obj->next)
		if (obj->type == 1)
			break;
	but = obj->adr;
	but->action = action_add_vol;
	if (!obj)
		return;
	for (obj = obj->next ; obj ; obj = obj->next)
		if (obj->type == 1)
			break;
	if (!obj)
		return;
	but = obj->adr;
	but->action = action_add_size;
	change_all_objet_to_dont_have_to_create_other2(scenes);
}

int initialisation(scenes_t **scenes, sfVideoMode video)
{
	char *to_create[NB_SCENE] = {_MENU_H__, _USAGE_H__, _OPTION_H__};
	objet_t *obj;
	text_t *txt;

	*scenes = init_scenes(0, init_scene(to_create, video));
	if (!*scenes)
		return -1;
	for (obj = (*scenes)->scene->next->next->objets; obj ; obj = obj->next)
		if (obj->type == 11)
			break;
	txt = obj->adr;
	sfText_setString(txt->text, "MUSIC");
	if (!obj)
		return-1;
	for (obj = obj->next ; obj ; obj = obj->next)
		if (obj->type == 11)
			break;
	txt = obj->adr;
	sfText_setString(txt->text, "SIZE OF MAP");
	change_all_objet_to_dont_have_to_create_other(*scenes);
	return 0;
}

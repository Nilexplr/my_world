/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** event_button.c
*/

#include <SFML/Graphics.h>
#include "struct_window.h"
#include "button.h"
#include "menu.h"

static void highlight(int type, sfRenderWindow *window, button_t *button_)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f button = sfRectangleShape_getPosition(button_->rect);
	sfVector2f size = sfRectangleShape_getSize(button_->rect);
	sfColor color[NB_TYPE] = {sfRed, sfBlue, sfGreen, sfYellow, sfYellow,
		sfYellow, sfYellow, sfYellow, sfYellow, sfYellow, sfGreen,
		sfGreen, sfGreen, sfGreen, sfGreen, sfGreen};

	if ((((int)button.x < mouse.x && (int)button.x + (int)size.x > mouse.x)
	&& ((int)button.y < mouse.y && (int)button.y + (int)size.y > mouse.y))
	|| button_->push)
		sfRectangleShape_setFillColor(button_->rect, sfMagenta);
	else
		sfRectangleShape_setFillColor(button_->rect, color[type]);
}

 static void clic(sfRenderWindow *window, button_t *button_, scenes_t *scns)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
	sfVector2f button = sfRectangleShape_getPosition(button_->rect);
	sfVector2f size = sfRectangleShape_getSize(button_->rect);

	if (((int)button.x < mouse.x && (int)button.x + (int)size.x > mouse.x)
	&& ((int)button.y < mouse.y && (int)button.y + (int)size.y > mouse.y))
		if (sfMouse_isButtonPressed(sfMouseLeft))
			button_->action(window, scns);
}

void event_button(objet_t *objet, sfRenderWindow *window, scenes_t *scenes)
{
	button_t *button;

	if (!objet)
		return;
	button = objet->adr;
	if (!button || !scenes)
		return;
	highlight(objet->type, window, button);
	clic(window, button, scenes);
}

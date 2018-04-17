/*
** EPITECH PROJECT, 2018
** button.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _BUTTON_H_
#define _BUTTON_H_

#include <SFML/Graphics.h>
#include "struct_window.h"

#define PATH_TEXTURE "./ressources/icon/play-button.png"

typedef struct button {
	sfRectangleShape *rect;
	void (*action)(sfRenderWindow *, scenes_t *);
	char push;
}button_t;

void free_button(void *);
// free a button

void *create_buttonFromTexture(void);
// create a button from a texture

void *create_button(sfVector2f , sfColor, float, float);
// create a button with a color, a size, an angle

void place_button_l(void *, void *, sfVideoMode);
// place the button in function of his placement in the file array and the open
// window

void place_button_o(void *, void *, sfVideoMode);
// place the button in function of his placement in the file array and the open
// window

void place_button_q(void *, void *, sfVideoMode);
// place the button in function of his placement in the file array and the open
// window

void place_button_r(void *, void *, sfVideoMode);
// place the button in function of his placement in the file array and the open
// window

void place_button_u(void *adr, void *file_array, sfVideoMode video);
// place the button in function of his placement in the file array and the open
// window

void place_button_reset(void *adr, void *file_array, sfVideoMode video);
// place the button in function of his placement in the file array and the open
// window

void place_button_tile(void *adr, void *file_array, sfVideoMode video);
// place the button in function of his placement in the file array and the open
// window

void place_button_point(void *adr, void *file_array, sfVideoMode video);
// place the button in function of his placement in the file array and the open
// window

void place_button_save(void *adr, void *file_array, sfVideoMode video);
// place the button in function of his placement in the file array and the open
// window

void place_button_background(void *adr, void *file_array, sfVideoMode video);
// place the button in function of his placement in the file array and the open
// window

void event_button(objet_t *objet, sfRenderWindow *window, scenes_t *scenes);
// manage button event

void *create_button_lauch(void);

void *create_button_option(void);

void *create_button_quit(void);

void *create_button_usage(void);

void *create_button_return(void);

void *create_button_reset(void);

void *create_button_tile(void);

void *create_button_point(void);

void *create_button_save(void);

void *create_button_background(void);

#endif

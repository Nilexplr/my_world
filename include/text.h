/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** text.h
*/

#ifndef _TTEXT_H__
#define _TTEXT_H__

#include "SFML/Graphics.h"

typedef struct text{
	sfText *text;
} text_t;

sfFont *manage_font(int mode);
// if mode == 0 free the font else return the font adr

text_t *create_text(char *, sfColor, sfVector2f, sfVector2f);
// create a text in function of this param.

void place_text(void *adr, void *file_array, sfVideoMode video);
// place nothing

void place_text_l(void *adr, void *file_array, sfVideoMode video);
// place the text
void place_text_o(void *adr, void *file_array, sfVideoMode video);
// place the text
void place_text_q(void *adr, void *file_array, sfVideoMode video);
// place the text
void place_text_u(void *adr, void *file_array, sfVideoMode video);
// place the text
void place_text_r(void *adr, void *file_array, sfVideoMode video);
// place the text
void place_text_T(void *adr, void *file_array, sfVideoMode video);
// place the Title
void place_text_H(void *adr, void *file_array, sfVideoMode video);
// place the Help

void free_text(void *adr);
//free text

void *create_text_l(void);
// create_text_lauch

void *create_text_o(void);
// create_text_lauch

void *create_text_q(void);
// create_text_lauch

void *create_text_u(void);
// create text usage

void *create_text_r(void);
// create text return

void *create_text_T(void);
// create text return

void *create_text_H(void);
// create text return

#endif

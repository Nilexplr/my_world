/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** free_text.c
*/

#include "text.h"
#include <stdlib.h>

void free_text(void *adr)
{
	text_t *txt = adr;

	if (!txt)
		return;
	if (txt->text)
		sfText_destroy(txt->text);
	free(txt);
}

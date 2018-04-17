/*
** EPITECH PROJECT, 2018
** my_empty_string.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "stdlib.h"

char *my_empty_string(int size_to_malloc, char symbole_to_init)
{
	char *result = malloc(size_to_malloc + 1);

	if (!result)
		return NULL;
	for (int i = 0 ; i < size_to_malloc ; *(result + i) = symbole_to_init,
		i++);
	*(result + size_to_malloc) = '\0';
	return result;
}

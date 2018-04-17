/*
** EPITECH PROJECT, 2018
** error_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include <stdlib.h>

int compare(char *c, char *to_compare)
{
	if (c == NULL && to_compare == NULL)
		return -1;
	if (*c == '\0' && *to_compare == '\0')
		return 1;
	for (int i = 0 ; *(to_compare + i) != '\0' ; i++)
		if (*c == *(to_compare + i))
			return 1;
	return 0;
}

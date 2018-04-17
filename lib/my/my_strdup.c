/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** julien.ollivier@epitech.eu
*/

#include <stdlib.h>
#include "lib.h"

char *my_strdup(char const *src)
{
	char *str;
	int len = my_strlen(src);

	str = malloc(sizeof(char) * len + 1);
	my_strcpy(str, src);
	return (str);
}

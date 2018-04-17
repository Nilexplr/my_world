/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** same as my_strcat.c
*/

#include "lib.h"
#include "stdio.h"

char *my_strncat(char *dest, char const *src, int n)
{
	int len = my_strlen(dest);
	int lenmax = n;
	int i = 0;

	lenmax += len + 1;
	while (len < lenmax) {
		if ((dest + len) == NULL || (src + i) == NULL)
			return NULL;
		dest[len] = src[i];
		i++;
		len++;
	}
	return (dest);
}

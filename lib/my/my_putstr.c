/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
**
*/

#include "lib.h"
#include <unistd.h>

void my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
}

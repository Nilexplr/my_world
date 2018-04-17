/*
** EPITECH PROJECT, 2018
** clear_buff.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "load_map.h"
#include <unistd.h>

void clear_buff(int fd, int nb_read, int buff, char *buffer)
{
	close(fd);
	*(buffer + 300 * (nb_read - 1) + buff) = '\0';
	*(buffer + 300 * (nb_read - 1) + buff + 1) = '\0';
}

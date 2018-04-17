/*
** EPITECH PROJECT, 2018
** save_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "map.h"
#include "lib.h"

static void display_less_than_one(int fd, float nb, float precision)
{
	char c;

	if (nb < 0)
		nb *= -1;
	nb *= 10;
	c = (int)nb % 10 + 48;
	for (; precision <= 1 ; precision *= 10, c = (int)(nb) % 10 + 48) {
		write(fd, &c, 1);
		nb *= 10;
	}
}

void write_float(int fd, float nb, float precision)
{
	write_nbr(fd, (int)nb);
	write(fd, ".", 1);
	display_less_than_one(fd, nb, (precision) * 10);
}

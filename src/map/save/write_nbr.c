/*
** EPITECH PROJECT, 2018
** save_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include <unistd.h>
#include "lib.h"

void write_nbr(int fd, int nb)
{
	char c = nb + 48;

	if (nb == -2147483648) {
		write(fd, "-2147483648", my_strlen("-2147483648"));
		return;
	}
	if (nb < 0) {
		nb = nb * -1;
		write(fd, "-", 1);
	}
	if (nb >= 10) {
		write_nbr(fd, nb / 10);
		write_nbr(fd, nb % 10);
	}
	else {
		write(fd, &c, 1);
	}
}

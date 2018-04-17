/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "lib.h"

void my_put_nbr(int nb)
{
	if (nb == -2147483648) {
		my_putstr("-2147483648");
		return;
	}
	if (nb < 0) {
		nb = nb * -1;
		my_putchar('-');
	}
	if (nb >= 10) {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	else
		my_putchar(nb + 48);
}

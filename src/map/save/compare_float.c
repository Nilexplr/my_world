/*
** EPITECH PROJECT, 2018
** save_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "lib.h"

int compare_float(float nb1, float nb2, float precision)
{
	if (nb1 <= nb2 && nb1 + precision >= nb2)
		return 1;
	if (nb1 >= nb2 && nb1 - precision <= nb2)
		return 1;
	return 0;
}

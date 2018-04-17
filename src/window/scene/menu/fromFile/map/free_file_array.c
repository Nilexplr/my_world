/*
** EPITECH PROJECT, 2018
** free_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "load_map.h"
#include <stdlib.h>

void free_file_array(file_array_t *compartment, int safe)
{
	file_array_t *buff;

	if (compartment == NULL)
		return;
	if (compartment->down != NULL && safe != 1) {
		buff = compartment->down;
		free_file_array(buff, 0);
	}
	if (compartment->right != NULL) {
		buff = compartment->right;
		free_file_array(buff, 1);
	}
	free(compartment);
}

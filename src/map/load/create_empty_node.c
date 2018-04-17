/*
** EPITECH PROJECT, 2018
** create_empty_node.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "file.h"
#include <stdlib.h>

file_t *create_empty_node(void)
{
	file_t *node = malloc(sizeof(file_t));

	if (!node)
		return NULL;
	node->line = NULL;
	node->next = NULL;
	return node;
}

/*
** EPITECH PROJECT, 2018
** file.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _FILE_H__
#define _FILE_H__

typedef struct file {
	char *line;
	struct file *next;
}file_t;

file_t *create_empty_node(void);
// create a empty node

file_t *load_file_in_mem(char const *);
// create a file from a file

void free_file_in_mem(file_t *);
// free a file in mem

#endif

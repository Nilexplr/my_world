/*
** EPITECH PROJECT, 2018
** load_map.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "load_map.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "error.h"

char *load_file_array_in_mem(char const *filepath)
{
	int fd = open(filepath, O_RDONLY);
	int fd_size = open(filepath, O_RDONLY);
	char *buffer = malloc(sizeof(char) * 300);
	int nb_read;
	int buff = 300;

	if (!error_open(fd, filepath, buffer) ||
	!error_open(fd_size, filepath, buffer))
		return NULL;
	for (nb_read = 0 ; buff == 300 ; nb_read++)
		buff = read(fd_size, buffer, 300);
	close(fd_size);
	free(buffer);
	buffer = malloc(sizeof(char) * (300 * (nb_read - 1) + buff + 2));
	if (read(fd, buffer, 300 * (nb_read - 1) + buff) < 0) {
		error_read(buffer, fd, 1);
		return NULL;
	}
	clear_buff(fd, nb_read, buff, buffer);
	return buffer;
}

file_array_t *load_2d_file(char *file_in_mem)
{
	int i = 0;
	file_array_t *result;

	if (!file_in_mem)
		return NULL;
	result = load_line_file_array(file_in_mem, &i);
	if (*(file_in_mem + i) != '\0')
		for (i += 1 ; *(file_in_mem + i) != '\0' ; i++)
			add_new_line(result, load_line_file_array(
					file_in_mem, &i));
	return result;
}

void add_new_line(file_array_t *result, file_array_t *to_add)
{
	if (result == NULL || to_add == NULL) {
		error_map(3);
		return;
	}
	for (; result->down != NULL ; GO_D(result));
	for (; result != NULL && to_add != NULL ; GO_R(result), GO_R(to_add)) {
		to_add->up = result;
		result->down = to_add;
	}
}

file_array_t *load_line_file_array(char *line_in_Mem, int *i)
{
	file_array_t *compartment = malloc(sizeof(file_array_t));
	file_array_t *first = compartment;

	if (compartment == NULL || line_in_Mem == NULL)
		return NULL;
	compartment->left = NULL;
	compartment->symbole = (*(line_in_Mem + *i) == '\n') ? '\0' :
		*(line_in_Mem + *i);
	compartment->down = NULL;
	compartment->up = NULL;
	if (line_in_Mem[*i] == '\n' || line_in_Mem[*i] == '\0')
		set_up_compartment(&compartment, line_in_Mem, *i);
	for (*i += 1; line_in_Mem[*i] != '\n' &&
		line_in_Mem[*i] != '\0' ; *i += 1) {
		set_up_compartment(&compartment, line_in_Mem, *i);
		compartment->down = NULL;
		compartment->up = NULL;
	}
	compartment->right = NULL;
	return first;
}

void set_up_compartment(file_array_t **compartment, char *line_in_Mem, int i)
{
	if (*(line_in_Mem + i) != '\n') {
		(*compartment)->right = malloc(sizeof(file_array_t));
		if ((*compartment)->right == NULL)
			return;
		(*compartment)->right->left = *compartment;
		*compartment = (*compartment)->right;
	} else
		(*compartment)->right = NULL;
	(*compartment)->symbole = (*(line_in_Mem + i) == '\n') ? '\0' :
		*(line_in_Mem + i);
}

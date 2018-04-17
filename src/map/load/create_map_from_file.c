/*
** EPITECH PROJECT, 2018
** create_map_from_file.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "file.h"
#include "map.h"
#include "lib.h"
#include <unistd.h>

static int get_sizeof_map(char *first_line, int *line, int *colum)
{
	int i;

	if (*first_line > 57 || *first_line < 48) {
		write(2, "Error : Invalid Map\n", 20);
		return -1;
	}
	*line = my_getnbr(first_line);
	for (i = 0 ; first_line[i] != ' ' && first_line[i] != '\0' ; i++);
	if (first_line[i] != ' ' || first_line[i] == '\0') {
		write(2, "Error : Invalid Map\n", 20);
		return -1;
	}
	if (first_line[i + 1] > 57 || first_line[i + 1] < 48) {
		write(2, "Error : Invalid Map\n", 20);
		return -1;
	}
	*colum = my_getnbr(&first_line[i + 1]);
	return 0;
}

static int fill_with_the_correct_value(char *line, float *map, int colum)
{
	int count = 0;

	for (int i = 0 ; count < colum && line[i] != '\0' ;
	i = ((line[i] != '\0') ? (i + 1) : i), count++) {
		if ((line[i] > 57 || line[i] < 48) && line[i] != '-') {
			write(2, "Error : Invalid Map\n", 20);
			return -1;
		}
		map[count] = my_getfloat(&line[i]);
		for (; line[i] != ' ' && line[i] != '\0'; i++);
		if (line[i] != ' ' && count == colum - 2) {
			write(2, "Error : Invalid Map\n", 20);
			return -1;
		}
	}
	if (count < colum) {
		write(2, "Error : Invalid Map\n", 20);
		return -1;
	}
	return 0;
}

float **create_map_from_file(void *adr)
{
	file_t *file = adr;
	int line = 0;
	int colum = 0;
	float **map;

	if (!file)
		return NULL;
	if (get_sizeof_map(file->line, &line, &colum) < 0)
		return NULL;
	map = create_map(line, colum);
	if (!map)
		return NULL;
	file = file->next;
	for (int i = 0 ; i < line && file->line ; file = file->next, i++)
		if (fill_with_the_correct_value(file->line, map[i],
						colum) < 0) {
			free_map(map);
			return NULL;
		}
	return map;
}

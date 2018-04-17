/*
** EPITECH PROJECT, 2018
** create_map_from_file.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "file.h"
#include "lib.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

file_t *load_file_in_mem(char const *path)
{
	int fd = open(path, O_RDONLY);
	void *first;
	file_t *map;

	if (fd < 0)
		return NULL;
	map = create_empty_node();
	if (!map)
		return NULL;
	first = map;
	for (map->line = get_next_line(fd); map->line ;
	map = map->next, map->line = get_next_line(fd)) {
		map->next = create_empty_node();
		if (!map->next) {
			free_file_in_mem(first);
			return NULL;
		}
	}
	close(fd);
	return first;
}

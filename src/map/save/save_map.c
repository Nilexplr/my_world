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

static void write_len_map(int fd, float **map)
{
	int line;
	int colum;

	for (line = 0 ; map[line] ; line++);
	write_nbr(fd, line);
	write(fd, " ", 1);
	for (colum = 0 ; !compare_float(map[0][colum], REF_MAP, 0.0001)
		; colum++);
	write_nbr(fd, colum);
	write(fd, "\n", 1);
}

int save_map(char const *path, float **map, float precision)
{
	int fd;

	if (!map)
		return -1;
	fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return -1;
	write_len_map(fd, map);
	for (int i = 0 ; map[i] ; i++, write(fd, "\n", 1))
		for (int j = 0 ; !compare_float(map[i][j], REF_MAP, 0.0001)
			; j++, write(fd, " ", 1))
			write_float(fd, map[i][j], precision);
	close(fd);
	return 0;
}

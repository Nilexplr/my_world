/*
** EPITECH PROJECT, 2018
** error.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "lib.h"
#include "error.h"

int error_open(int fd, char const *filepath, char *buf)
{
	if (fd < 0) {
		write(2, "fail to open file ", 18);
		if (filepath != NULL)
			write(2, filepath, my_strlen(filepath));
		write(2, "\n", 1);
		if (buf)
			free(buf);
		return 0;
	}
	return 1;
}

void error_stat(char const *filepath)
{
	write(2, filepath, my_strlen(filepath));
	write(2, " isn't a valid path\n", 20);
}

void error_read(char *buf, int fd, int mode)
{
	if (buf)
		free(buf);
	close(fd);
	if (mode == 1)
		write(2, "can't read\n", 12);
}

void error_malloc(void)
{
	write(2, "Malloc can't alloc\n", 20);
}

void error_map(int size_or_char)
{
	if (size_or_char == 1) {
		write(2, "Invalid size Map\n", 18);
	} else if (size_or_char == 2)
		write(2, "Invalid char in Map\n", 21);
	else
		write(2, "Invalide initialisation of map\n", 32);
}

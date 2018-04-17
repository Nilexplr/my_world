/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** julien.ollvier@epitech.eu
*/

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

static int my_strlen(char *string, int mode)
{
	int i;

	if (!string)
		return 0;
	for (i = 0 ; *(string + i) != '\0' ; i++)
		if (*(string + i) == '\n' && mode == 1)
			return 1;
	if (mode == 1)
		return 0;
	return i;
}

static char *reset_buff(char *buff, int i, int mode)
{
	char *tmp;
	int j = 0;

	if (mode == 0) {
		tmp = malloc(sizeof(char) * my_strlen(buff, 0) - i + 1);
		if (!tmp)
			return NULL;
		for (j = 0, i = i + 1 ; *(buff + i) != '\0' ; j++, i++)
			*(tmp + j) = *(buff + i);
		*(tmp + j) = '\0';
		free(buff);
	} else {
		if (buff)
			free(buff);
		tmp = malloc(sizeof(char) * i + 1);
		if (!tmp)
			return NULL;
		for (; j != i ; *(tmp + j) = '\0', j++, *(tmp + i) = '\0');
	}
	return tmp;
}

static char *my_strcat(char *dest, char *src, int mode)
{
	int len;
	int lenmax;
	int i;

	if (mode == 1) {
		for (i = 0 ; *(src + i) != '\0' && *(src + i) != '\n' ; i++)
			*(dest + i) = *(src + i);
		*(dest + i) = '\0';
		return dest;
	}
	len = my_strlen(dest, 0);
	lenmax = len + my_strlen(src, 0);
	for (int i = 0 ; len != lenmax ; dest[len] = src[i], i++, len++);
	dest[lenmax] = '\0';
	return dest;
}

char *get_next_line(int fd)
{
	static char *buff = NULL;
	int i;
	char *line = NULL;

	if (!buff)
		buff = reset_buff(NULL, sizeof(char) * READ_SIZE + 1, 1);
	if (!my_strlen(buff, 1))
		buff = fill_the_buff(fd, buff);
	if (!buff)
		return NULL;
	for (i = 0 ; *(buff + i) != '\0' && *(buff + i) != '\n' ; i++);
	line = reset_buff(line, sizeof(char) * i, 1);
	if (!line)
		return NULL;
	line = my_strcat(line, buff, 1);
	buff = reset_buff(buff, i, 0);
	return line;
}

char *fill_the_buff(int fd, char *buff)
{
	char *tmp = reset_buff(NULL, sizeof(char) *
			(READ_SIZE + my_strlen(buff, 0) + 1), 1);

	if (!tmp)
		return NULL;
	tmp = my_strcat(tmp, buff, 0);
	buff = reset_buff(buff, sizeof(char) * READ_SIZE + 1, 1);
	if (!buff)
		return NULL;
	if (read(fd, buff, READ_SIZE) <= 0) {
		free(buff);
		if (*tmp != '\0')
			return tmp;
		free(tmp);
		return NULL;
	}
	*(buff + READ_SIZE) = '\0';
	tmp = my_strcat(tmp, buff, 0);
	free(buff);
	return (my_strlen(tmp, 1)) ? (tmp) : (fill_the_buff(fd, tmp));
}

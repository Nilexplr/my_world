/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** map_size.c
*/

int map_size(int mode)
{
	static int size = 5;

	if (mode == 0)
		return size;
	size += mode;
	if (size < 1)
		size = 2;
	if (size > 6)
		size = 2;
	return size;
}

/*
** EPITECH PROJECT, 2018
** did_i_start_by.c
** File description:
** julien.ollivier@epitech.eu
*/

int did_i_start_by(char *str, char *to_find)
{
	int i;

	for (i = 0 ; str[i] == to_find[i] && str[i] ; i++);
	if (!to_find[i])
		return 1;
	return 0;
}

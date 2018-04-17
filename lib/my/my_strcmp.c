/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** julien.ollivier@epitech.eu
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i;

	for (i = 0 ; s1[i] == s2[i] && s1[i] != '\0' && s2[i] !='\0' ; i++);
	return (s1[i] - s2[i]);
}

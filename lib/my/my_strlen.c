/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
**
*/

int my_strlen(char const *str)
{
	int countc = 0;

	if (str[countc] == '\0')
		return (0);
	do
	{
		countc++;
	} while (str[countc] != '\0');
	return (countc);
}

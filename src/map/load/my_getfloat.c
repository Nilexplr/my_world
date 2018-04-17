/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** get a number in a string
*/

float my_getfloat(char const *str)
{
	float res = 0;
	int i;
	int div = 10;
	int neg = 0;

	if (!str)
		return 0.0;
	for (i = 0 ; (str[i] < 48 || str[i] > 57) && str[i] != '\0' ; i++);
	if (str[(i == 0) ? (0) : (i - 1)] == '-')
		neg = 1;
	for (; str[i] < 58 && str[i] > 47; i++)
		res = (res + (str[i] - 48)) *
			((str[i + 1] < 58 && str[i + 1] > 47) ? 10 : 1);
	if (str[i] == '.')
		for (i = i + 1; str[i] < 58 && str[i] > 47; i++, div *= 10)
			res += (float)(str[i] - 48) / div;
	if (neg == 1)
		res *= -1;
	return res;
}

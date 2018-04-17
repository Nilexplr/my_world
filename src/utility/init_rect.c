/*
** EPITECH PROJECT, 2018
** init_bird.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "utility.h"

sfIntRect init_rect(int left, int top, int width, int height)
{
	sfIntRect rectangle;

	rectangle.left = left;
	rectangle.top = top;
	rectangle.width = width;
	rectangle.height = height;
	return rectangle;
}

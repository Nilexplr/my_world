/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** randomize.c
*/

#include "noise.h"
#include <stdlib.h>

float rand_noise(int t)
{
	t = (t<<13) ^ t;
	t = (t * (t * t * 15731 + 789221) + 1376312589);
	return (1.0 - (t & 0x7fffffff) / 1073741824.0);
}

float **randomize(float **map, int lg_max, int ht_max)
{
	map[0][0] = (rand_noise(rand()));
	map[lg_max - 1][0] = (rand_noise(rand()));
	map[0][ht_max - 1] = (rand_noise(rand()));
	map[lg_max - 1][ht_max - 1] = (rand_noise(rand()));
	return (map);
}

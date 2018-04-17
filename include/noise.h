/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** noise prototypes
*/

#ifndef _NOISE_H_
#define _NOISE_H_
#include <math.h>
#include "convex_map.h"

typedef struct noise_s {
	int step;
	int nb_octaves;
	int hauteur;
	int longueur;
	int longueur_max;
	int hauteur_max;
	float persistance;
	float **map;
}noise_t;

noise_t *init_noise(int x, int y);
float **create_noise(int longueur_max, int hauteur_max);
float **randomize(float **map, int lg_max, int ht_max);
float rand_noise(int t);


#endif

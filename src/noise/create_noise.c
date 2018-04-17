/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** create noise by procedural generation
*/

#include "convex_map.h"
#include "noise.h"
#include <stdlib.h>

float diamond(float **map, sfVector2i point, int h, int id)
{
	float somme = 0;
	int n = 0;

	if (point.x >= id && point.y >= id) {
		somme += map[point.y - id][point.x - id];
		n++;
	}
	if (point.y + id < h && point.x >= id) {
		somme += map[point.y + id][point.x - id];
		n++;
	}
	if (point.y + id < id && point.x + id < h) {
		somme += map[point.y + id][point.x + id];
		n++;
	}
	if (point.y >= id && point.x + id < h) {
		somme += map[point.y - id][point.x + id];
		n++;
	}
	return (somme / n);
}

void diamond_phase(noise_t *noise, int id, int i, int nb)
{
	int h = noise->longueur_max;
	sfVector2i point;

	for (int y = id; y < h; y += i)
		for (int x = id; x < h; x += i) {
			point.y = y;
			point.x = x;
			noise->map[y][x] = diamond(noise->map, point, h, id)
			+ nb;
		}
}

float square(float **map, sfVector2i point, int h, int id)
{
	float somme = 0;
	int n = 0;

	if (point.x >= id) {
		somme += map[point.x - id][point.y];
		n++;
	}
	if (point.x + id < h) {
		somme += map[point.x + id][point.y];
		n++;
	}
	if (point.y >= id) {
		somme += map[point.x][point.y- id];
		n++;
	}
	if (point.y + id < h) {
		somme += map[point.x][point.y + id];
		n++;
	}
	return (somme / n);
}

void square_phase(noise_t *noise, int id, int i, float nb)
{
	float decalage = 0;
	int h = noise->longueur_max;
	sfVector2i point;

	for (int x = 0; x < h; x += id) {
		decalage == 0 ? (decalage = id) : (decalage = 0);
		for (int y = decalage; y < h; y += i) {
			point.y = y;
			point.x = x;
			noise->map[x][y] = square(noise->map, point, h, id)
			+ nb * rand_noise(rand());
		}
	}
}

float **create_noise(int longueur_max, int hauteur_max)
{
	noise_t *noise = init_noise(longueur_max, hauteur_max);
	int h = longueur_max;
	float z = 0.25;
	float id;
	float **map;

	for (int i = ((h - 1) / (rand() % 4 + 1)); i > 1; i /= 2, z /= 2) {
		id = i / 2;
		diamond_phase(noise, id, i, i * z * fabs(rand_noise(rand())));
		square_phase(noise, id, i, i * z * fabs(rand_noise(rand())));
	}
	map = noise->map;
	free(noise);
	return (map);
}

/*
** EPITECH PROJECT, 2018
** map.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _MAP_H__
#define _MAP_H__

#define REF_MAP -10.141111

float **create_map(int, int);
// create a map of float of int line and int colum

void free_map(float **);
// free the map

float **create_map_from_file(void *);
// create a map and fill it from a file

int save_map(char const *, float **, float);
// write a serie of float in a file

#endif

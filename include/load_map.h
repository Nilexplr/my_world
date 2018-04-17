/*
** EPITECH PROJECT, 2018
** load_map.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _LOAD_MAP_H_
#define _LOAD_MAP_H_

#include "struct_load_map.h"

#define GO_R(x) (x = x->right)
#define GO_L(x) (x = x->left)
#define GO_U(x) (x = x->up)
#define GO_D(x) (x = x->down)
#define GO_N(x) (x = x->next)

char *load_file_array_in_mem(char const *);
// load the entire file into a char *

file_array_t *get_the_file_array(char const *);
// get the map with the coord

char *get_all_objet(file_array_t *, char *);
// get all objet in a map with all objet type in the char *

int get_the_coord_file_array(int *, int *, file_array_t *, int);
// put in the two first int * the coord of the char like that ALL_TYPE[x]
int get_xmax_file_array(file_array_t *, int *, int);
// get the xmax of a map into the int *
int get_ymax_file_array(file_array_t *, int *, int);
//get the ymax of a map into the int *

file_array_t *load_2d_file(char *);
// transforme the file into a chain list of file_array_t *
file_array_t *load_line_file_array(char *, int *);
// transforme a char * line into a chain list of file_array_t *
void add_new_line(file_array_t *, file_array_t *);
// add a new line to the first chain list file_array_t *
void set_up_compartment(file_array_t **, char *, int);
// Set up the new compartment in function of the char *
int get_xy_file_array(file_array_t *, int, int, int);
// Set up the coord of all the compartment in map | return 0 in case of error
void verif_file_array(char *, char *);
// Check if ther is other char thehen those given in char *
void clear_buff(int, int, int, char *);
// clear the buff and close the fd

void free_file_array(file_array_t *, int);
// free all map;

void display_file_array(file_array_t *, int);
// display all the map

#endif

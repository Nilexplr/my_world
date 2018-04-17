/*
** EPITECH PROJECT, 2018
** load_map.h
** File description:
** julien.ollivier@epitech.eu
*/

#ifndef _ERROR_H_
#define _ERROR_H_

#include <unistd.h>
#include <stdlib.h>

int error_open(int, char const *, char *);
// check and display the error of open and free the buf
void error_stat(char const *);
// display why type of error is there is an error
void error_malloc(void);
// display which type of error is there is an error
void error_map(int);
// display why ther is an error in the map
// 1 --> Invalid size Map\n
// 2 --> Invalid char in Map\n
// 3 --> Invalid initialisation of map\n
void error_read(char *, int, int);
// display why ther is an error in the map free char * and close int

#endif

/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** File that contains library's protoypes
*/

#ifndef LIB_H_
#define LIB_H_

#define READ_SIZE 19

char *get_next_line(int);
// get the next line of the fd
char **create_char_tab(char *, char const*);
// create a char tab from the first char * with sep of the second
char **copy_char_tab(char **);
// copy a char tab
int compare_char_tab(char **, char **);
// return 1 if match else return 0
int my_str_isnum(char const *);
// look if all char are number or space
int did_i_start_by(char *, char*);
//look if the second char is the start of the first char *
unsigned int my_countwords(char const *);
// count the number of char 32 in a string + 1
int my_getnbr(char const *);
// get the first nbr from a string
float my_getfloat(char const *);
// get the first float from a string
char *my_strdup(char const *);
// alloc the string
char *my_strcpy(char *, char const *);
// copy a string in a a other char const * --> char *
char *my_strncpy(char *, char const *, int);
// copy a string in a a other char const * --> char * but only n char
int my_strlen(char const *);
// count the number of char in a string
int compare(char *, char *);
// Compare a char with a complete string
int my_strcmp(char const *, char const *);
// Compare to string and return 0 in case of complete match
char *my_empty_string(int, char);
// create a empty string of int size and fill the string of the char except the
// last one of '\0'
// return NULL in case of error
char *my_int_to_str(int);
// Transforme a int into a str | return NULL in case of error
char *my_strcat(char *, char const *);
// add the second char *, to the first char *
char *my_strncat(char *, char const *, int);
// add the second char *, to the first char * for n
char **my_str_to_word_array(char const *, char *);
// transforme a string into a word array the second char is the separator
void my_putstr(char const *);
// display a string
void my_putchar(char);
// display a char
void my_put_nbr(int);
// display a number
int compare_float(float, float, float);
// compare float with a precision
void write_float(int, float, float);
// write a float in function of his precision
void write_nbr(int , int);
// write a int
void free_char_tab(char **, int);
// free a tab of char with size or with a NULL at the end
char **sep_word(char const*, char **);
// my_str_to_word array with char ** in param
#endif

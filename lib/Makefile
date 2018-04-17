##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## julien.ollivier@epitech.eu
##

SRC	=	./my/get_next_line.c	\
		./my/my_getnbr.c	\
		./my/my_put_nbr.c	\
		./my/my_putstr.c	\
		./my/my_strncat.c	\
		./my/my_empty_string.c	\
		./my/my_strlen.c	\
		./my/my_strcmp.c	\
		./my/compare.c	\
		./my/my_putchar.c	\
		./my/my_strdup.c	\
		./my/my_strcpy.c	\
		./my/did_i_start_by.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	./libmy.a

CC	=	gcc $(HEADER)

HEADER	=	-I../include/

CDFLAG	=	-W -Wall -Wextra -pedantic -O3

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ar t $(NAME)

clean:
	rm -f $(OBJ)
	mr_clean

fclean: clean
	rm -f $(NAME) a.out
	tree

re:	fclean all

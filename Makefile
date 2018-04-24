##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## julien.ollivier@epitech.eu
##

SRC	=	./src/map/load/my_getfloat.c	\
		./src/map/load/load_file_in_mem.c	\
		./src/init.c	\
		./src/map/load/free_file_in_mem.c	\
		./src/error/error.c	\
		./src/map/load/create_empty_node.c	\
		./src/map/load/create_map_from_file.c	\
		./src/map/save/save_map.c	\
		./src/map/save/compare_float.c	\
		./src/map/save/write_float.c	\
		./src/map/save/write_nbr.c	\
		./src/map/create_map.c	\
		./src/map/free_map.c	\
		./src/music/play_music_loop.c	\
		./src/objets/button/free_button.c	\
		./src/objets/button/place_button.c	\
		./src/objets/button/place_button0.c	\
		./src/objets/button/create_button.c	\
		./src/objets/button/event_button.c	\
		./src/objets/button/display_the_button.c	\
		./src/objets/button/create_buttonFromTexture.c	\
		./src/objets/text/create_text.c	\
		./src/objets/text/manage_font.c	\
		./src/objets/text/place_text.c	\
		./src/objets/text/place_text0.c	\
		./src/objets/text/display_text.c	\
		./src/objets/text/free_text.c	\
		./src/objets/create_all_objet.c	\
		./src/objets/place_all_objet.c	\
		./src/utility/init_rect.c	\
		./src/window/window.c	\
		./src/window/scene/init_scene.c	\
		./src/window/event/event.c	\
		./src/window/event/event_menu.c	\
		./src/window/scene/menu/button_menu.c	\
		./src/window/scene/menu/button_menu0.c	\
		./src/window/scene/menu/action_button.c	\
		./src/window/scene/menu/action_button0.c	\
		./src/window/scene/menu/action_button00.c	\
		./src/window/scene/menu/text_menu.c	\
		./src/window/scene/menu/text_menu0.c	\
		./src/window/scene/menu/display_menu.c	\
		./src/window/scene/menu/init_menu.c	\
		./src/window/scene/menu/free_main_menu.c	\
		./src/window/scene/free.c	\
		./src/window/display/display_scene.c	\
		./src/window/scene/menu/fromFile/map/clear_buff_file_array.c	\
		./src/window/scene/menu/fromFile/map/display_file_array.c	\
		./src/window/scene/menu/fromFile/map/free_file_array.c	\
		./src/window/scene/menu/fromFile/map/get_info_file_array.c	\
		./src/window/scene/menu/fromFile/map/get_the_coord_file_array.c	\
		./src/window/scene/menu/fromFile/map/get_the_file_array.c	\
		./src/window/scene/menu/fromFile/map/load_file_array_in_mem.c	\
		./src/window/scene/menu/fromFile/create_all_objetfromfile.c	\
		./src/convex_array/create_convex_array.c	\
		./src/convex_array/create_scene.c	\
		./src/draw/draw_map.c	\
		./src/draw/display_map.c	\
		./src/structure/init_struct.c	\
		./src/window/event/point_event.c	\
		./src/mouvement/mouve.c		\
		./src/window/event/select_option.c	\
		./src/noise/create_noise.c	\
		./src/noise/randomize.c	\
		./src/calcul/calcul_map.c	\
		./src/window/event/noise_event.c	\
		./src/draw/draw_tile.c	\
		./src/convex_array/choose_triangle.c	\
		./src/window/event/reset_event.c	\
		./src/window/event/zoom_event.c	\
		./src/calcul/zoom.c	\
		./src/window/event/tuile_event.c	\
		./src/calcul/inside_triangle.c	\
		./src/calcul/modification_tile.c	\
		./src/draw/draw_vertex_array.c	\
		./src/convex_array/vertex_array.c	\
		./src/convex_array/destroy_convex_map.c	\
		./src/convex_array/map_size.c	\
		./src/draw/draw_socle.c

TEST	=	./unit_test/map/load/test_my_getfloat.c	\
		./unit_test/map/test_free_map.c	\
		./unit_test/map/test_create_map.c	\
		./unit_test/map/save/test_write_float.c	\
		./unit_test/map/save/test_write_nbr.c	\
		./unit_test/map/save/test_save_map.c	\
		./unit_test/map/save/test_compare_float.c	\
		./unit_test/map/load/test_create_map_from_file.c	\
		./unit_test/map/load/test_load_file_in_mem.c	\
		./unit_test/map/load/test_free_file_in_mem.c	\
		./unit_test/map/load/test_create_empty_node.c	\
		./unit_test/objets/button/test_free_button.c	\
		./unit_test/window/scene/menu/fromFile/map/test_display_file_array.c	\
		./unit_test/window/scene/menu/fromFile/map/test_get_the_file_array.c	\
		./unit_test/window/scene/menu/fromFile/test_create_all_objetsfromfile.c	\
#		./unit_test/window/test_window.c	\

MAIN	=	./src/main.c  \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_world

CC	=	gcc $(HEADER) $(GRAPH) $(CDFLAG)

MY_LIB	=	-L./lib/ -lmy

CRITERION	=	-lcriterion --coverage

GRAPH	=	-lc_graph_prog

MATH	=	-lm

LIB	=	$(GRAPH) $(MATH)

HEADER	=	-I./include/

CDFLAG	=	-W -Wall -Wextra -pedantic

all:	$(NAME)

$(NAME):	$(OBJ) $(MAIN:.c=.o)
	make -C./lib/
	$(CC) -o $(NAME) $(HEADER) $(MAIN:.c=.o) $(OBJ) $(MY_LIB) $(LIB) -lm

tests_run:
	./unit_test/scripts/create_test_map.sh
	make -C./lib/
	$(CC) -o test $(HEADER) $(SRC) $(TEST) $(MY_LIB) $(LIB) $(CRITERION)
	./test
	rm -f test*

speed_test:	$(OBJ)
	./unit_test/scripts/create_test_map.sh
	./unit_test/scripts/create_files_arrays.sh
	make -C./lib/
	$(CC) -o test $(HEADER) $(OBJ) $(TEST) $(MY_LIB) $(LIB) $(CRITERION)
	./test
	rm -f test*


coverage:
	./unit_test/scripts/create_test_map.sh
	./unit_test/scripts/create_files_arrays.sh
	$(CC) -o $(NAME) $(HEADER) $(MAIN:.c=.o) $(OBJ) $(MY_LIB) $(LIB) -O3 -lm


gdb:
	make -C./lib/
	$(CC) $(MAIN) $(HEADER) $(SRC) $(MY_LIB) $(LIB) -g3
	gdb ./a.out

valgrind:
	make -C./lib/
	$(CC) $(HEADER) $(MAIN) $(SRC) $(MY_LIB) $(LIB) -g3
	valgrind  ./a.out

grep:
	grep   $(SRC)

wc:
	wc $(SRC) ./include/*.h $(TEST)

clean:
	make clean -C./lib/
	rm -f $(OBJ) $(MAIN:.c=.o) *.gc* test* vgcore.*

fclean: clean
	make fclean -C./lib/
	rm -f $(NAME) a.out test

re:	fclean all

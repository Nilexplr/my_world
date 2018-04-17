/*
** EPITECH PROJECT, 2018
** convex_map.h
** File description:
** nicolas.garde@epitech.eu julien.ollivier@epiteh.eu
*/

#ifndef _CONVEX_MAP_H_
#define _CONVEX_MAP_H_ "_convex_map_"

#include <SFML/Graphics.h>
#include "struct_window.h"
#include "math.h"
#include "event.h"

#define OBJETS_CONVEX_MAP "./ressources/convex_map.txt"
#define RADIAN(x) (x * M_PI / 180)


typedef struct tile_s {
	sfConvexShape *shape1;
	sfConvexShape *shape2;
}tile_t;

typedef struct map_s {
	float ** map3d;
	sfVector2f **map2d;
	sfVector2f **water;
	sfConvexShape ***map;
	sfVector2f max;
	sfVector2f pos;
	struct tile_s **tile;
	int option;
	sfVector2f zoom;
	sfVector2f angle;
	sfVector2u *point;
	sfVector2i *mouse;
}map_t;

map_t *init_map(float **map_3d);
// create a 2d map

int map_size(int mode);
// add or rmv value from size

void draw_map(sfRenderWindow *window, map_t *map);
// draw the map into the window

void display_map(sfRenderWindow *, objet_t *);
// display the scene of map

sfVector2f **create_2d_map(float **map_3d, sfVector2f counter);
// convert an 3d map into a 2d map


sfConvexShape ***create_convex_map(sfVector2f **map_2d, sfVector2f counter);
// create a convexShape from a map in 2d

scene_t *create_scene(sfVideoMode);
// create the scene for the map

int add_scene_to_list(scene_t *, scene_t *);
// add the scene to all the scene create


sfVector2f project_iso_point(float x, float y, float z, sfVector2f angle);
void map3d_to_2d(map_t *map);
tile_t create_tile(sfVector2f **points, int y, int x, float **map3d);
void choose_triangle(sfVector2f *point, sfConvexShape *shape1
		, sfConvexShape *shape2, float *map3d);
tile_t **create_tile_map(sfVector2f **map_2d, sfVector2f counter
	, float **map3d);
void draw_tile(sfRenderWindow *window, map_t *map);
void map_2d_to_3d(map_t *map);
void draw_vertex_square(sfRenderWindow *window, int i, int j, map_t *map);
sfVertexArray *create_line(sfVector2f point1, sfVector2f point2);
void destroy_map(map_t *map);
void updtate_convex_map(map_t *map);
void map_water(map_t *map);
void draw_socle(map_t *map, sfRenderWindow *window);
map_t *create_map_from_nb(int nb);
map_t *create_map_from_file_(void);

#endif

/*
** EPITECH PROJECT, 2018
** my_world_2018
** File description:
** menu.h
*/

#ifndef _MENU_H__
#define _MENU_H__ "Main_Menu"

#include "struct_window.h"
#include <SFML/Graphics.h>

void action_lauch(sfRenderWindow *window, scenes_t *scenes);
// change scene

void action_return(sfRenderWindow *window, scenes_t *scenes);
// return to the first scene

void action_usage(sfRenderWindow *window, scenes_t *scenes);
// go to the scene usage

void action_option(sfRenderWindow *window, scenes_t *scenes);
// go to the scene option

void action_quit(sfRenderWindow *window, scenes_t *scenes);
// close window

void action_reset(sfRenderWindow *window, scenes_t *scenes);
// reset all the map

void action_tile(sfRenderWindow *window, scenes_t *scenes);
// can select tile

void action_point(sfRenderWindow *window, scenes_t *scenes);
// can select point

void action_save(sfRenderWindow *window, scenes_t *scenes);
// save the map

void action_add_size(sfRenderWindow *window, scenes_t *scenes);
// create a bigger map
void action_add_vol(sfRenderWindow *window, scenes_t *scenes);
/// add some volumes
void action_rmv_vol(sfRenderWindow *window, scenes_t *scenes);
// remove some volumes
void action_rmv_size(sfRenderWindow *window, scenes_t *scenes);
// create a smaller map
void action_load_map(sfRenderWindow *window, scenes_t *scenes);
// load the map from file

#define COLOR_LAUNCH_BUTTON 0 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_LAUNCH_BUTTON 100 // can't be < 0
#define WEIGHT_LAUNCH_BUTTON 70 // can't be < 0
#define ANGLE_LAUNCH_BUTTON 0.00
#define THICKNESS_LAUNCH_BUTTON 1
#define ACTION_LAUNCH_BUTTON action_lauch

#define COLOR_OPTION_BUTTON 4 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_OPTION_BUTTON 100 // can't be < 0
#define WEIGHT_OPTION_BUTTON 70 // can't be < 0
#define ANGLE_OPTION_BUTTON 0.00
#define THICKNESS_OPTION_BUTTON 1
#define ACTION_OPTION_BUTTON NULL

#define COLOR_USAGE_BUTTON 5 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_USAGE_BUTTON 100 // can't be < 0
#define WEIGHT_USAGE_BUTTON 70 // can't be < 0
#define ANGLE_USAGE_BUTTON 0.00
#define THICKNESS_USAGE_BUTTON 1
#define ACTION_USAGE_BUTTON NULL

#define COLOR_RETURN_BUTTON 5 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_RETURN_BUTTON 100 // can't be < 0
#define WEIGHT_RETURN_BUTTON 70 // can't be < 0
#define ANGLE_RETURN_BUTTON 0.00
#define THICKNESS_RETURN_BUTTON 1
#define ACTION_RETURN_BUTTON NULL

#define COLOR_QUIT_BUTTON 3 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_QUIT_BUTTON 100 // can't be < 0
#define WEIGHT_QUIT_BUTTON 70 // can't be < 0
#define ANGLE_QUIT_BUTTON 0.00
#define THICKNESS_QUIT_BUTTON 1
#define ACTION_QUIT_BUTTON action_quit

#define COLOR_RESET_BUTTON 3 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_RESET_BUTTON 100 // can't be < 0
#define WEIGHT_RESET_BUTTON 70 // can't be < 0
#define ANGLE_RESET_BUTTON 0.00
#define THICKNESS_RESET_BUTTON 1
#define ACTION_RESET_BUTTON action_RESET

#define COLOR_TILE_BUTTON 3 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_TILE_BUTTON 100 // can't be < 0
#define WEIGHT_TILE_BUTTON 70 // can't be < 0
#define ANGLE_TILE_BUTTON 0.00
#define THICKNESS_TILE_BUTTON 1
#define ACTION_TILE_BUTTON action_TILE

#define COLOR_POINT_BUTTON 3 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_POINT_BUTTON 100 // can't be < 0
#define WEIGHT_POINT_BUTTON 70 // can't be < 0
#define ANGLE_POINT_BUTTON 0.00
#define THICKNESS_POINT_BUTTON 1
#define ACTION_POINT_BUTTON action_POINT

#define COLOR_SAVE_BUTTON 3 // 0 to 9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_SAVE_BUTTON 100 // can't be < 0
#define WEIGHT_SAVE_BUTTON 70 // can't be < 0
#define ANGLE_SAVE_BUTTON 0.00
#define THICKNESS_SAVE_BUTTON 1
#define ACTION_SAVE_BUTTON action_SAVE

#define COLOR_BACKGROUND_BUTTON 8 // 0to9 sfRed sfBlack sfWhite sfGreen sfBlue
// sfYellow sfMagenta sfCyan
#define HEIGHT_BACKGROUND_BUTTON 350 // can't be < 0
#define WEIGHT_BACKGROUND_BUTTON 900 // can't be < 0
#define ANGLE_BACKGROUND_BUTTON 0.00
#define THICKNESS_BACKGROUND_BUTTON 1
#define ACTION_BACKGROUND_BUTTON NULL

#define COLOR_LAUNCH_TEXT 0// 0 to 9 sfRed, sfBlack, sfWhite, sfGreen, sfBlue
// sfYellow, sfMagenta, sfCyan
#define SCALE_HEIGHT_LAUNCH_TEXT 0.75
#define SCALE_WEIGHT_LAUNCH_TEXT 0.75
#define STR_LAUNCH_TEXT "LAUNCH"
#define POS_X_LAUNCH_TEXT 300
#define POS_Y_LAUNCH_TEXT 100

#define COLOR_OPTION_TEXT 4// 0 to 9 sfRed, sfBlack, sfWhite, sfGreen, sfBlue
// sfYellow, sfMagenta, sfCyan
#define SCALE_HEIGHT_OPTION_TEXT 0.75
#define SCALE_WEIGHT_OPTION_TEXT 0.75
#define STR_OPTION_TEXT "OPTION"
#define POS_X_OPTION_TEXT 300
#define POS_Y_OPTION_TEXT 250

#define COLOR_QUIT_TEXT 3// 0 to 9 sfRed, sfBlack, sfWhite, sfGreen, sfBlue
// sfYellow, sfMagenta, sfCyan
#define SCALE_HEIGHT_QUIT_TEXT 0.75
#define SCALE_WEIGHT_QUIT_TEXT 0.75
#define STR_QUIT_TEXT "QUIT"
#define POS_X_QUIT_TEXT 350
#define POS_Y_QUIT_TEXT 400

#define COLOR_USAGE_TEXT 5// 0 to 9 sfRed, sfBlack, sfWhite, sfGreen, sfBlue
// sfYellow, sfMagenta, sfCyan
#define SCALE_HEIGHT_USAGE_TEXT 0.75
#define SCALE_WEIGHT_USAGE_TEXT 0.75
#define STR_USAGE_TEXT "USAGE"
#define POS_X_USAGE_TEXT 350
#define POS_Y_USAGE_TEXT 400

#define COLOR_RETURN_TEXT 5// 0 to 9 sfRed, sfBlack, sfWhite, sfGreen, sfBlue
// sfYellow, sfMagenta, sfCyan
#define SCALE_HEIGHT_RETURN_TEXT 0.75
#define SCALE_WEIGHT_RETURN_TEXT 0.75
#define STR_RETURN_TEXT "RETURN"
#define POS_X_RETURN_TEXT 350
#define POS_Y_RETURN_TEXT 400

#define COLOR_TITLE_TEXT 5// 0 to 9 sfRed, sfBlack, sfWhite, sfGreen, sfBlue
// sfYellow, sfMagenta, sfCyan
#define SCALE_HEIGHT_TITLE_TEXT 1.25
#define SCALE_WEIGHT_TITLE_TEXT 1.25
#define STR_TITLE_TEXT "MY WORLD 2018"
#define POS_X_TITLE_TEXT 350
#define POS_Y_TITLE_TEXT 400

#define COLOR_HELP_TEXT 4// 0 to 9 sfRed, sfBlack, sfWhite, sfGreen, sfBlue
// sfYellow, sfMagenta, sfCyan
#define SCALE_HEIGHT_HELP_TEXT 1
#define SCALE_WEIGHT_HELP_TEXT 1
#define STR_HELP_TEXT "LANCER AVEC LE BOUTON LAUNCH\n\nA\t\t\t\t\t\tSELECTION\
POINT\nZ\t\t\t\t\t\tSELECTION TILE\nP, M\t\t\t\t\tZOOM IN AND ZOOM OUT\n E ET \
ALT\t\tRESET TOUT LES POINTS\nR\t\t\t\t\t\tGENERATION ALLEATOIRE\n\nLES \
FLECHES OU LA SOURIE POUR SE DEPLACER."
#define POS_X_HELP_TEXT 350
#define POS_Y_HELP_TEXT 400

#define NB_TYPE 17
#define ALL_TYPE "loqLOQUurRTH01234+-\0"
#define MAIN_MENU_OBJETS "./ressources/main_menu.txt"
#define NB_BUTTONS 4

objet_t *create_all_objet(char *);
// create all objet

void place_all_objet(objet_t *, void *, sfVideoMode);
// place_all_objet from file array in the window

void display_menu(sfRenderWindow *window, objet_t *objets);
// display_menu

objet_t *create_allobjetsfromfile(char const *path, char *all_type,
				sfVideoMode video);

void display_the_button(void *, sfRenderWindow *);
// display button

void event_menu(sfRenderWindow *window, sfEvent *event,	scenes_t *scenes);
// manage event for the menu

void display_text(void *adr, sfRenderWindow *window);
//display text

void free_main_menu(objet_t *);
// free all objets

void action_lauch(sfRenderWindow *, scenes_t *);
// action for the button launch

void action_quit(sfRenderWindow *, scenes_t *);
// action for the button quit

#endif

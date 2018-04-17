/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** julien.ollivier@epitech.eu nicolas.garde@epitech.eu
*/

#include "lib.h"
#include "window.h"
#include "convex_map.h"
#include "music.h"
#include "colors.h"

static int verif_arg(int ac, char **av, char **env)
{
	int count_display = 0;

	if (ac > 2)
		return 1;
	if (ac == 2)
		if (!my_strcmp("-h", av[1])) {
			my_putstr("try with out -h\n\n");
			my_putstr(GREEN"all button have a utility\n\n");
			my_putstr(RED"please try them all\n\n" RESET);
			return 1;
		}
	if (!env)
		return 1;
	for (int i = 0 ; env[i] ; i++) {
		if (!did_i_start_by(env[i], "DISPLAY"))
			count_display++;
	}
	if (count_display)
		return 0;
	return 1;
}

int main(int ac, char **av, char **env)
{
	sfVideoMode video;
	scenes_t *scenes = NULL;

	if (verif_arg(ac, av, env))
		return 84;
	video = sfVideoMode_getDesktopMode();
	music_loop(1);
	if (initialisation(&scenes, video) == -1)
		return 84;
	if (add_scene_to_list(scenes->scene, create_scene(video)))
		return 84;
	window(scenes, video);
	free_scenes(scenes);
	music_loop(0);
	return 0;
}

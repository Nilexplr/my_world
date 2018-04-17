/*
** EPITECH PROJECT, 2018
** play_music_loop.c
** File description:
** julien.ollivier@epitech.eu
*/

#include "music.h"

static int turn_off_music(sfMusic **music)
{
	if (!music)
		return 0;
	if (!*music)
		return 0;
	sfMusic_destroy(*music);
	return 1;
}

static int turn_on_music(sfMusic **music, char *path)
{
	if (!music)
		return 0;
	if (!*music)
		*music = sfMusic_createFromFile(path);
	if (!*music)
		return 0;
	if (sfTrue == sfMusic_getLoop(*music))
		sfMusic_setLoop(*music, sfTrue);
	sfMusic_play(*music);
	return 1;
}

int music_loop(int on_off)
{
	static sfMusic *music = NULL;
	static float vol = 50;

	if (!on_off) {
		if (!turn_off_music(&music))
			return 0;
	} else if (on_off == 1) {
		if (!turn_on_music(&music, PATH_MUSIC_BACKGROUND))
			return 0;
	} else if (on_off == 9) {
		vol += 1;
	} else if (on_off == 8) {
		vol -= 1;
	}
	sfMusic_setVolume(music, vol);
	return 1;
}

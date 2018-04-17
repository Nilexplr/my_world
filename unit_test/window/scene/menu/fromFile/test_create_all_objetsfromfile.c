/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de create_all_objetsfromfile
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <lib.h>
#include "load_map.h"
#include "menu.h"
#include <SFML/Graphics.h>

Test(test_create_all_objetsfromfile, Test_entry_NULL, .timeout = 0.5,
	.exit_code = 0)
{
	cr_redirect_stderr();
	sfVideoMode video;
	objet_t *objets = create_allobjetsfromfile(NULL, NULL, video);

	cr_assert_eq(objets, NULL);
}

Test(test_create_all_objetsfromfile, Test_entry_1, .timeout = 5,
	.exit_code = 0)
{
	sfVideoMode video = {800, 600, 32};
	objet_t *objets = create_allobjetsfromfile(
		"test_file_array1", ALL_TYPE, video);

	cr_assert_neq(objets, NULL);
}

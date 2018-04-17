/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de get_the_file_array
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "load_map.h"

Test(test_get_the_file_array, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	file_array_t *map = get_the_file_array("./test_file_array1");

	cr_assert_eq(map->right, NULL, "1");
	GO_D(map);
	for (; map->right ; map = map->right);
	cr_assert_eq(map->right, NULL, "2");
	for (; map->left ; map = map->left);
	GO_D(map);
	cr_assert_eq(map->right, NULL, "3");
	GO_D(map);
	cr_assert_eq(map->right, NULL, "4");
	for (; map->up ; map = map->up);
	free_file_array(map, 0);
}

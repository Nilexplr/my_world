/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de create_map
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "map.h"

Test(test_create_map, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	float **map = create_map(3, 3);

	cr_assert_float_eq(map[0][0], 0.0, 0.1);
	cr_assert_float_eq(map[0][1], 0.0, 0.1);
	cr_assert_float_eq(map[0][2], 0.0, 0.1);
	cr_assert_float_eq(map[1][0], 0.0, 0.1);
	cr_assert_float_eq(map[1][1], 0.0, 0.1);
	cr_assert_float_eq(map[1][2], 0.0, 0.1);
	cr_assert_float_eq(map[2][0], 0.0, 0.1);
	cr_assert_float_eq(map[2][1], 0.0, 0.1);
	cr_assert_float_eq(map[2][2], 0.0, 0.1);
	cr_assert_eq(map[3], NULL);
}

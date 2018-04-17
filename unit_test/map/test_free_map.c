/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de free_map
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "map.h"

Test(test_free_map, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	free_map(NULL);
}

Test(test_free_map, Test_entry_MAX, .timeout = 0.5, .exit_code = 0)
{
	float **map = create_map(3, 3);
	free_map(map);
}


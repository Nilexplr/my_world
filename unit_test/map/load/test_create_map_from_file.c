/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de create_map_from_file
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <lib.h>
#include "map.h"
#include "file.h"

Test(test_create_map_from_file, Test_entry_NULL, .timeout = 0.5,
.exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file1");
	float **map = create_map_from_file(file);

	cr_assert_float_eq(map[0][0], 0.1, 0.1);
	cr_assert_float_eq(map[0][0], 1.0, 1.0);
	cr_assert_float_eq(map[0][0], 0.2, 0.1);
	free_map(map);
	free_file_in_mem(file);
}

Test(test_create_map_from_file, Test_entry_1, .timeout = 0.5,
.exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file2");
	float **map;

	cr_redirect_stderr();
	map = create_map_from_file(file);
	cr_assert_stderr_eq_str("Error : Invalid Map\n");
	free_map(map);
	free_file_in_mem(file);
}

Test(test_create_map_from_file, Test_entry_2, .timeout = 0.5,
.exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file3");
	float **map;

	cr_redirect_stderr();
	map = create_map_from_file(file);
	cr_assert_stderr_eq_str("Error : Invalid Map\n");
	free_map(map);
	free_file_in_mem(file);
}

Test(test_create_map_from_file, Test_entry_3, .timeout = 0.5,
.exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file4");
	float **map;

	cr_redirect_stderr();
	map = create_map_from_file(file);
	cr_assert_stderr_eq_str("Error : Invalid Map\n");
	free_map(map);
	free_file_in_mem(file);
}

Test(test_create_map_from_file, Test_entry_4, .timeout = 0.5,
.exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file5");
	float **map;

	cr_redirect_stderr();
	map = create_map_from_file(file);
	cr_assert_stderr_eq_str("Error : Invalid Map\n");
	free_map(map);
	free_file_in_mem(file);
}


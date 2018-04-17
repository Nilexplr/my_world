/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de save_map
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "map.h"
#include "file.h"

Test(test_save_map, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(save_map("./test_save_map1", NULL, 0.01), -1);
}

Test(test_save_map, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file1");
	float **map = create_map_from_file(file);

	cr_assert_eq(save_map("./test_save_map1", map, 0.01), 0);
	free_map(map);
	free_file_in_mem(file);
	file = load_file_in_mem("./test_save_map1");
	cr_assert_str_eq(file->line, "1 3");
	cr_assert_str_eq(file->next->line, "0.10 1.00 0.20 ");
	free_file_in_mem(file);
}

Test(test_save_map, Test_entry_2, .timeout = 0.5, .exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file1");
	float **map = create_map_from_file(file);

	cr_assert_eq(save_map("", map, 0.01), -1);
	free_map(map);
	free_file_in_mem(file);
	file = load_file_in_mem("./test_save_map1");
	cr_assert_str_eq(file->line, "1 3");
	cr_assert_str_eq(file->next->line, "0.10 1.00 0.20 ");
	free_file_in_mem(file);
}

Test(test_save_map, Test_entry_MAX, .timeout = 0.5, .exit_code = 0)
{
	file_t *file = load_file_in_mem("./test_create_map_from_file6");
	float **map = create_map_from_file(file);

	cr_assert_eq(save_map("./test_save_map2", map, 0.01), 0);
	free_map(map);
	free_file_in_mem(file);
	file = load_file_in_mem("./test_save_map2");
	cr_assert_str_eq(file->line, "2 3");
	cr_assert_str_eq(file->next->line, "0.10 1.00 0.20 ");
	cr_assert_str_eq(file->next->next->line, "0.30 5.00 0.60 ");
	free_file_in_mem(file);
}


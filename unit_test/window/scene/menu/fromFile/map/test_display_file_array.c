/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de display_file_array
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <lib.h>
#include "load_map.h"

Test(test_display_file_array, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	file_array_t *map = get_the_file_array("./test_file_array1");

	cr_redirect_stdout();
	display_file_array(map, 0);
	cr_assert_stdout_eq_str("\n                 b\n\n\n");
	free_file_array(map, 0);
}

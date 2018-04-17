/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de free_file_in_mem
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "file.h"

Test(test_free_file_in_mem, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	free_file_in_mem(NULL);
}

Test(test_free_file_in_mem, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
	file_t *file_in_mem = load_file_in_mem("./test_load_file_in_mem");

	free_file_in_mem(file_in_mem);
}

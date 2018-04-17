/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de load_file_in_mem
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "file.h"

Test(test_load_file_in_mem, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	file_t *file_in_mem = load_file_in_mem("./test_load_file_in_mem");
	void *tmp = file_in_mem;

	cr_assert_str_eq(file_in_mem->line, "azertyuiop");
	file_in_mem = file_in_mem->next;
	cr_assert_str_eq(file_in_mem->line, "qsdfghjklm");
	file_in_mem = file_in_mem->next;
	cr_assert_str_eq(file_in_mem->line, "wxcvbn,;:!");
	file_in_mem = file_in_mem->next;
	cr_assert_str_eq(file_in_mem->line, "1234567890");
	free_file_in_mem(tmp);
}


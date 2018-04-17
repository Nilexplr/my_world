/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de window
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "window.h"

Test(test_window, Test_entry_NULL, .timeout = 10.0, .exit_code = 0)
{
	cr_assert_eq(window(NULL), 0);
}

Test(test_window, Test_entry_malloc, .timeout = 10.0, .exit_code = 0)
{
	cr_assert_neq(window(NULL), -1);
}

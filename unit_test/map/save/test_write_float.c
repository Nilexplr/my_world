/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de write_float
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <lib.h>

Test(test_write_float, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_redirect_stdout();
	write_float(1, 10.450, 0.01);
	cr_assert_stdout_eq_str("10.45");
}

Test(test_write_float, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
	cr_redirect_stdout();
	write_float(1, -10.4503, 0.0001);
	cr_assert_stdout_eq_str("-10.4503");
}


/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de write_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <lib.h>

Test(test_write_nbr, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_redirect_stdout();
	write_nbr(1, -12);
	cr_assert_stdout_eq_str("-12");
}

Test(test_write_nbr, Test_entry_MAX, .timeout = 0.5, .exit_code = 0)
{
	cr_redirect_stdout();
	write_nbr(1, -2147483648);
	cr_assert_stdout_eq_str("-2147483648");
}


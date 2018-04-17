/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de compare_float
*/

#include <criterion/criterion.h>
#include <lib.h>

Test(test_compare_float, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(compare_float(0.01, 0.02, 0.01), 1);
}

Test(test_compare_float, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(compare_float(0.01, 0.009, 0.01), 1);
}

Test(test_compare_float, Test_entry_MAX, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(compare_float(0.01, 0.02, 0.001), 0);
}


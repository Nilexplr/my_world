/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de my_getfloat
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "lib.h"

Test(test_my_getfloat, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(my_getfloat(NULL), 0);
}

Test(test_my_getfloat, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_float_eq(my_getfloat(" 10.02"), 10.02, 0.01);
}

Test(test_my_getfloat, Test_entry_2, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_float_eq(my_getfloat(" 10123.2123"), 10123.2123, 0.001);
}

Test(test_my_getfloat, Test_entry_MAX, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_float_eq(my_getfloat("-10123.2123"), -10123.2123, 0.001);
}


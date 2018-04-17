/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de free_button
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "button.h"

Test(test_free_button, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	free_button(NULL);
}

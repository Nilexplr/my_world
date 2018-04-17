/*
** EPITECH PROJECT, 2018
** Test_criterion
** File description:
** Test de create_empty_node
*/

#include <criterion/criterion.h>
#include <lib.h>
#include "file.h"

Test(test_create_empty_node, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_neq(create_empty_node(), NULL);
}


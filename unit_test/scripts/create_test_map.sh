#!/bin/sh
## EPITECH PROJECT, 2018
## create_test.sh
## File description:
## julien.ollivier@epitech.eu
##

echo "azertyuiop" > test_load_file_in_mem
echo "qsdfghjklm" >> test_load_file_in_mem
echo "wxcvbn,;:!" >> test_load_file_in_mem
echo "1234567890" >> test_load_file_in_mem

echo "1 3" > test_create_map_from_file1
echo "0.1 1.0 0.2 " >> test_create_map_from_file1

echo "1 3" > test_create_map_from_file2
echo "0.1 1.00.2 " >> test_create_map_from_file2

echo "1 3" > test_create_map_from_file3
echo "0.1 1.0 a0.2 " >> test_create_map_from_file3

echo "1 a3" > test_create_map_from_file4
echo "0.1 1.0 0.2 " >> test_create_map_from_file4

echo "1 3" > test_create_map_from_file5
echo "a0.1 1.0 0.2 " >> test_create_map_from_file5

echo "2 3" > test_create_map_from_file6
echo "0.1 1.0 0.2 " >> test_create_map_from_file6
echo "0.3 5.0 0.6 " >> test_create_map_from_file6

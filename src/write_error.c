/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** write_error
*/

#include "palindrome.h"

void write_to_error(char *str, int size)
{
    write(2, str, size);
}
/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** tests_palindromic
*/

#include <criterion/criterion.h>
#include <string.h>

int is_str_palindromic(char *str);

Test(is_pal, not_pal)
{
    cr_assert_eq(is_str_palindromic(strdup("1895")), false);
}

Test(is_pal, pal)
{
    cr_assert_eq(is_str_palindromic(strdup("1001")), true);
}

Test(is_pal, pal_2)
{
    cr_assert_eq(is_str_palindromic(strdup("101")), true);
}

Test(is_pal, pal_3)
{
    cr_assert_eq(is_str_palindromic(strdup("1")), true);
}
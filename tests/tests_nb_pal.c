/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** tests_nb_pal
*/

#include <criterion/criterion.h>

int is_nb_palindromic(int nb);

Test(nb_pal, not_pal)
{
    cr_assert_eq(is_nb_palindromic(1489), false);
}

Test(nb_pal, pal)
{
    cr_assert_eq(is_nb_palindromic(1331), true);
}

Test(nb_pal, pal_2)
{
    cr_assert_eq(is_nb_palindromic(131), true);
}

Test(nb_pal, pal_3)
{
    cr_assert_eq(is_nb_palindromic(1), true);
}
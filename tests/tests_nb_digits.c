/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** tests_nb_digits
*/

#include <criterion/criterion.h>

int get_nb_digits(int nb);

Test(nb_digits, one)
{
    cr_assert_eq(get_nb_digits(8), 1);
}

Test(nb_digits, four)
{
    cr_assert_eq(get_nb_digits(1337), 4);
}

Test(nb_digits, two)
{
    cr_assert_eq(get_nb_digits(42), 2);
}
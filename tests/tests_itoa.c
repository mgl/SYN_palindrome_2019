/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** tests_itoa
*/

#include <criterion/criterion.h>

char *my_itoa(int nb);

Test(itoa, forty_two)
{
    cr_assert_str_eq(my_itoa(42), "42");
}

Test(itoa, leet)
{
    cr_assert_str_eq(my_itoa(1337), "1337");
}

Test(itoa, binary)
{
    cr_assert_str_eq(my_itoa(10101110), "10101110");
}
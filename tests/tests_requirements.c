/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** tests_requirements
*/

#include <criterion/criterion.h>

int my_factrec_synthesis(int nb);

int my_squareroot_synthesis(int nb);

Test(neg, factrec)
{
    int res = my_factrec_synthesis(-42);

    cr_assert_eq(res, 0);
}

Test(zero, factrec)
{
    int res = my_factrec_synthesis(0);

    cr_assert_eq(res, 1);
}

Test(one, factrec)
{
    int res = my_factrec_synthesis(1);

    cr_assert_eq(res, 1);
}

Test(ten, factrec)
{
    int res = my_factrec_synthesis(10);

    cr_assert_eq(res, 3628800);
}

Test(twelve, factrec)
{
    int res = my_factrec_synthesis(12);

    cr_assert_eq(res, 479001600);
}

Test(overflow, factrec)
{
    int res = my_factrec_synthesis(13);

    cr_assert_eq(res, 0);
}

Test(neg, squareroot)
{
    int res = my_squareroot_synthesis(-5);

    cr_assert_eq(res, -1);
}

Test(not_whole, squareroot)
{
    int res = my_squareroot_synthesis(17);

    cr_assert_eq(res, -1);
}

Test(whole, squareroot)
{
    int res = my_squareroot_synthesis(16);

    cr_assert_eq(res, 4);
}

Test(big_nb, squareroot)
{
    int res = my_squareroot_synthesis(2147483647);

    cr_assert_eq(res, -1);
}

Test(nb, squareroot)
{
    int res = my_squareroot_synthesis(16384);

    cr_assert_eq(res, 128);
}
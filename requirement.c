/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** my_factrec_synhesis
*/

#include <stdio.h>

int my_factrec_synthesis(int nb)
{
    int res = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    for (int i = 1; i <= nb; i++)
        res *= i;
    return (res);
}

int my_squareroot_synthesis(int nb)
{
    int res = 1;
    int i = 0;

    if (nb < 0)
        return (-1);
    if (nb == 1 || nb == 0)
        return (nb);
    for (; res < nb; i++)
        if (i >= 46340)
            return (-1);
        else
            res = i * i;
    i -= 1;
    if (i * i == nb)
        return (i);
    else
        return (-1);
}
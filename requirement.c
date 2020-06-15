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
        return (0);
    if (nb == 1 || nb == 0)
        return (nb);
    for (; res < nb; i++)
        res = i * i;
    i -= 1;
    if (i * i == nb)
        return (i);
    else
        return (-1);
}

int main(void)
{
    for (int i = -5; i < 16; i++)
        printf("%d! = %d\n", i, my_factrec_synthesis(i));
    return (0);
}
/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** transform
*/

#include "palindrome.h"

int transform(params_t *params, int i, int res)
{
    if (i >= params->imin && check_result(params, res)) {
        my_printf("%d leads to %d in %d iteration(s) in base %d\n", \
        params->nb, res, i, params->base);
        params->solved = 1;
        if (params->pa1 == -1)
            return (1);
    }
    return (0);
}
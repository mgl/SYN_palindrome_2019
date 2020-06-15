/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** compute_palindrome
*/

#include "palindrome.h"
#include <stdlib.h>

char *get_base(int base)
{
    char *res = malloc((base + 1) * sizeof(char));

    if (res) {
        for (int i = 0; i < base; i++)
            res[i] = '0' + i;
        res[base] = 0;
    }
    return (res);
}

int check_result(params_t *params, int res)
{
    if (params->pa1 != -1)
        return (res == params->pa1);
    else if (params->nb != -1 && res > 0)
        return (is_str_palindromic(\
        my_putnbr_base(res, get_base(params->base))));
    return (0);
}

void compute_transform(params_t *params)
{
    int res = params->nb;

    for (int i = 0; i <= params->imax; i++) {
        if (i >= params->imin && check_result(params, res)) {
            my_printf("%d leads to %d in %d iteration(s) in base %d\n", \
            params->nb, res, i, params->base);
            params->solved = 1;
            break;
        }
        res += reverse_nbr(res, params);
    }
}

void compute_obtain(params_t *params)
{
    int save = params->pa1;

    for (int i = 0; i <= save; i++) {
        params->nb = i;
        compute_transform(params);
    }
}

void compute(params_t *params)
{
    if (params->nb != -1)
        compute_transform(params);
    else if (params->pa1 != -1)
        compute_obtain(params);
}
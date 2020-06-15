/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** valid_params
*/

#include "palindrome.h"

int incompatible_params(params_t *params)
{
    if (params->nb == params->pa1)
        return (-1);
    else if (params->nb != -1 && params->pa1 != -1)
        return (-1);
    else {
        if (params->nb != -1 && params->nb < 0)
            return (-1);
        if (params->pa1 != -1 && params->pa1 < 0)
            return (-1);
    }
    return (0);
}

int check_base(params_t *params)
{
    return (params->base > 1 && params->base <= 10);
}

int check_iter(params_t *params)
{
    return (params->imin >= 0 && params->imax >= 0);
}

int valid_params(params_t *params)
{
    if (incompatible_params(params) == -1 ||\
    params->imin > params->imax)
        return (-1);
    if (!check_base(params) || !check_iter(params))
        return (-1);
    if (params->pa1 != -1 && !is_str_palindromic(\
        my_putnbr_base(params->pa1, get_base(params->base))))
        return (-1);
    return (0);
}
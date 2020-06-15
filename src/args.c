/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** args
*/

#include "palindrome.h"

int n_param(params_t *params, char *param, int val)
{
    if (my_strcmp(param, "-n") == 0) {
        params->nb = val;
        return (1);
    }
    return (0);
}

int p_param(params_t *params, char *param, int val)
{
    if (my_strcmp(param, "-p") == 0) {
        params->pa1 = val;
        return (1);
    }
    return (0);
}

int b_param(params_t *params, char *param, int val)
{
    if (my_strcmp(param, "-b") == 0) {
        params->base = val;
        return (1);
    }
    return (0);
}

int imin_param(params_t *params, char *param, int val)
{
    if (my_strcmp(param, "-imin") == 0) {
        params->imin = val;
        return (1);
    }
    return (0);
}

int imax_param(params_t *params, char *param, int val)
{
    if (my_strcmp(param, "-imax") == 0) {
        params->imax = val;
        return (1);
    }
    return (0);
}
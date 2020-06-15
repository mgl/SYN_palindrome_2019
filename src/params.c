/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** params
*/

#include "palindrome.h"
#include <stdio.h>
#include <string.h>

int param_type(params_t *params, char *param, int val)
{
    int done = 0;

    done += n_param(params, param, val);
    done += p_param(params, param, val);
    done += b_param(params, param, val);
    done += imin_param(params, param, val);
    done += imax_param(params, param, val);
    if (done == 0) {
        write_to_error("invalid argument\n", my_strlen("invalid argument\n"));
        return (-1);
    }
    return (0);
}

int get_param(int param, params_t *params, int ac, char **av)
{
    if (param >= ac)
        return (-1);
    if (!my_str_isnum(av[param]))
        return (-1);
    return (param_type(params, av[param - 1], my_getnbr(av[param])));
}

int get_pal_params(params_t *params, int ac, char **av)
{
    int res = 0;

    for (int i = 1; i < ac; i++) {
        if (av[i][0] == '-') {
            i++;
            res = get_param(i, params, ac, av);
        } else {
            write_to_error("invalid argument\n", \
            my_strlen("invalid argument\n"));
            return (-1);
        }
        if (res == -1)
            return (-1);
    }
    if (valid_params(params) == -1)
        return (-1);
    return (0);
}

params_t *init_pal_params(void)
{
    params_t *params = malloc(sizeof(params_t));

    if (params) {
        params->nb = -1;
        params->pa1 = -1;
        params->base = 10;
        params->imin = 0;
        params->imax = 100;
        params->solved = 0;
    }
    return (params);
}
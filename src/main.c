/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** main
*/

#include "palindrome.h"
#include "help.h"

void print_params(params_t *params)
{
    my_printf("nb = %d\n", params->nb);
    my_printf("pa1 = %d\n", params->pa1);
    my_printf("base = %d\n", params->base);
    my_printf("imin = %d\n", params->imin);
    my_printf("imax = %d\n", params->imax);
}

void print_status(params_t *params)
{
    if (!params->solved)
        my_printf("no solution\n");
}

int pal_main(int ac, char **av)
{
    params_t *params = init_pal_params();

    if (!params)
        return (84);
    else if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        my_printf("%s", HELP_MSG);
        return (EXIT_SUCCESS);
    }
    else {
        if (ac < 2 || get_pal_params(params, ac, av) == -1) {
            free(params);
            return (84);
        }
        compute(params);
        print_status(params);
        free(params);
        return (EXIT_SUCCESS);
    }
}
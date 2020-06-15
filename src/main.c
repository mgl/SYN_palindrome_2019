/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** main
*/

#include "palindrome.h"
#include <stdio.h>
#include "help.h"

void print_params(params_t *params)
{
    printf("nb = %d\n", params->nb);
    printf("pa1 = %d\n", params->pa1);
    printf("base = %d\n", params->base);
    printf("imin = %d\n", params->imin);
    printf("imax = %d\n", params->imax);
}

int pal_main(int ac, char **av)
{
    params_t *params = init_params();

    if (!params)
        return (84);
    else if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        printf("%s", HELP_MSG);
        return (EXIT_SUCCESS);
    }
    if (ac < 2 || get_params(params, ac, av) == -1) {
        fprintf(stderr, "invalid argument\n");
        free(params);
        return (84);
    }
    compute(params);
    if (!params->solved)
        printf("no solution\n");
    free(params);
    return (EXIT_SUCCESS);
}
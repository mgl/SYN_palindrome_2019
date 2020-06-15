/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** utils
*/

#include "palindrome.h"
#include <stdio.h>

int reverse_nbr(int res, params_t *params)
{
    char *nbr = my_putnbr_base(res, \
    get_base(params->base));
    int result = 0;

    my_revstr(nbr);
    result = my_getnbr_base(nbr, "0123456789");
    free(nbr);
    return (result);
}

int is_str_palindromic(char *str)
{
    int right = 0;
    int left = 0;

    if (!str)
        return (0);
    right = my_strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            free(str);
            return (0);
        }
        right--;
        left++;
    }
    free(str);
    return (1);
}

int is_nb_palindromic(int nb)
{
    char *nbr = my_itoa(nb);
    int right = 0;
    int left = 0;

    if (!nbr)
        return (0);
    right = my_strlen(nbr) - 1;
    while (left < right) {
        if (nbr[left] != nbr[right]) {
            free(nbr);
            return (0);
        }
        right--;
        left++;
    }
    free(nbr);
    return (1);
}

int get_nb_digits(int nb)
{
    int i = 0;

    while (nb >= 10) {
        nb /= 10;
        i++;
    }
    return (i + 1);
}

char *my_itoa(int nb)
{
    char *res = malloc((get_nb_digits(nb) + 1) * sizeof(char));
    int i = 0;

    if (res != NULL) {
        while (nb > 9) {
            res[i] = nb % 10 + '0';
            nb /= 10;
            i++;
        }
        res[i] = nb % 10 + '0';
        res[i + 1] = '\0';
        my_revstr(res);
    }
    return (res);
}
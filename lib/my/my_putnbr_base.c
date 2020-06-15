/*
** EPITECH PROJECT, 2019
** mt_putnbr_base
** File description:
** my_putnbr_base
*/

#include "my.h"

char *my_putnbr_base(int nbr, char *base)
{
    int base_len = my_strlen(base);
    char result[200];
    int i = 0;

    while (nbr > 0) {
        result[i] = base[nbr % base_len];
        nbr /= base_len;
        i++;
    }
    result[i] = '\0';
    my_revstr(result);
    if (base)
        free(base);
    if (my_strlen(result) == 0) {
        return (my_strdup("0"));
    } else {
        return (my_strdup(result));
    }
    return (my_strdup(result));
}

/*
** EPITECH PROJECT, 2020
** ADM_palindrome_2019
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include "my.h"
#include <stdlib.h>

typedef struct params_s {
    int nb;
    int pa1;
    int base;
    int imin;
    int imax;
    int solved;
} params_t;

/* my_factrec_synthesis.c */

int my_factrec_synthesis(int nb);

/* my_squareroot_synthesis.c */

int my_squareroot_synthesis(int nb);

/* str_isnum.c */

int str_isnum(char *str);

/* params.c */

params_t *init_pal_params(void);
int get_pal_params(params_t *params, int ac, char **av);

/* valid_params.c */

int valid_params(params_t *params);

/* compute_palindrome.c */

void compute(params_t *params);
char *get_base(int base);
int check_result(params_t *params, int res);

/* utils.c */

char *my_itoa(int nb);
int is_nb_palindromic(int nb);
int is_str_palindromic(char *str);
int reverse_nbr(int res, params_t *params);

/* main.c */

int pal_main(int ac, char **av);

/* write_error.c */

void write_to_error(char *str, int size);

/* args.c */

int n_param(params_t *params, char *param, int val);
int p_param(params_t *params, char *param, int val);
int b_param(params_t *params, char *param, int val);
int imin_param(params_t *params, char *param, int val);
int imax_param(params_t *params, char *param, int val);

/* transform.c */

int transform(params_t *params, int i, int res);

#endif /* !PALINDROME_H_ */

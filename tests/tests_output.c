/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** tests_output
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>


char *no_arg[] = { "./palindrome" };

char *unknown_arg[] = {
    "./palindrome",
    "-n",
    "4782",
    "toto"
};

char *sixty_four[] = {
    "./palindrome",
    "-n",
    "64",
    "-b",
    "2"
};

char *min_six[] = {
    "./palindrome",
    "-p",
    "363",
    "-imin",
    "6"
};

char *no_sol[] = {
    "./palindrome",
    "-p",
    "363",
    "-imin",
    "7"
};

int pal_main(int ac, char **av);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(errors, no_arg, .init=redirect_all_stdout, .exit_code=84)
{
    pal_main(1, no_arg);
    cr_assert_stderr_eq_str("invalid argument\n", "");
}

Test(errors, unknown_arg, .init=redirect_all_stdout, .exit_code=84)
{
    pal_main(4, unknown_arg);
    cr_assert_stderr_eq_str("invalid argument\n", "");
}

Test(errors, sixty_four, .init=redirect_all_stdout, .exit_code=0)
{
    pal_main(5, sixty_four);
    cr_assert_stdout_eq_str("64 leads to 65 in 1 iteration(s) in base 2\n", "");
}

Test(errors, min_six, .init=redirect_all_stdout, .exit_code=0)
{
    pal_main(5, min_six);
    cr_assert_stdout_eq_str(\
    "3 leads to 363 in 6 iteration(s) in base 10\n", "");
}

Test(errors, no_sol, .init=redirect_all_stdout, .exit_code=0)
{
    pal_main(5, min_six);
    cr_assert_stdout_eq_str("no solution\n", "");
}
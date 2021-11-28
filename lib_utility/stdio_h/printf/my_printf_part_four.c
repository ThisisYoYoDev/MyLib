/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part four
*/

#include "my_printf.h"

int prt_af(pfparse_t *get, int s)
{
    int a;

    for (a = 0; a - s - (get->get_s > 0) > get->make_pad; a--)
        my_printf("%c", ' ');
    return a * (-1);
}

int p_bs_u(unsigned long n, pfparse_t *get, char *b)
{
    int a = my_strlen(cv_b_u(n, b));

    get->count = (get->count == 1 && n > 0);
    a += prt_bf(get, my_strlen(cv_b_u(n, b)));
    my_printf("%s", cv_b_u(n, b));
    a += prt_af(get, my_strlen(cv_b_u(n, b)));
    free(cv_b_u(n, b));
    return a;
}

int p_bs_l(long n, pfparse_t *get)
{
    int a = my_strlen(cv_b_l(g_max(n), "0123456789"));

    get->count = (get->count == 1 && n > 0);
    get->get_s = ((get->get_s == 1 && n != 0) || n < 0);
    if (get->get_s == 1) {
        if (n >= 0)
            get->get_s = PLUS;
        else
            get->get_s = MINUS;
    }
    a += prt_bf(get, my_strlen(cv_b_l(g_max(n), "0123456789")));
    my_printf("%s", cv_b_l(g_max(n), "0123456789"));
    a += prt_af(get, my_strlen(cv_b_l(g_max(n), "0123456789")));
    free(cv_b_u(g_max(n), "0123456789"));
    return a;
}

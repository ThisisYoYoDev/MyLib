/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part two
*/

#include "my_printf.h"

void free_l(lib_t **list)
{
    lib_t *h;

    while ((*list) != NULL) {
        h = *list;
        *list = (*list)->next;
        if (h->get_s != NULL)
            free(h->get_s);
        free(h);
    }
}

char *cv_b_l(long n, char *b)
{
    lib_t *r = NULL;
    char *s_r = NULL;

    for (; n || r == NULL; n /= my_strlen(b))
        c_in_lt(&r, b[n % my_strlen(b)]);
    s_r = lt_in_s(r);
    free_l(&r);
    return s_r;
}

int n_l_u(unsigned long n)
{
    int i;

    for (i = 1; (n /= 10) > 9; i++);
    return i;
}

int fg_b(va_list *ptrf, pfparse_t *get)
{
    unsigned long n = va_arg(*ptrf, unsigned long);

    if (my_strcmp(get->get_lfmt, "ll") == 0
    || my_strcmp(get->get_lfmt, "l") == 0
    || my_strcmp(get->get_lfmt, "hh") == 0
    || my_strcmp(get->get_lfmt, "h") == 0
    || my_strcmp(get->get_lfmt, "q") == 0) {
        return (p_bs_u(n, get, "01"));
    }
    return (p_bs_u((unsigned int)n, get, "01"));
}

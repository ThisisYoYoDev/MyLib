/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part five
*/

#include "my_printf.h"

int fg_d(va_list *ptrf, pfparse_t *get)
{
    unsigned long n = va_arg(*ptrf, unsigned long);

    if (my_strcmp(get->get_lfmt, "ll") == 0
    || my_strcmp(get->get_lfmt, "l") == 0
    || my_strcmp(get->get_lfmt, "hh") == 0
    || my_strcmp(get->get_lfmt, "h") == 0
    || my_strcmp(get->get_lfmt, "q") == 0) {
        return (p_bs_u(n, get, "0123456789"));
    }
    return (p_bs_u(n, get, "0123456789"));
}

int fg_x_l(va_list *ptrf, pfparse_t *get)
{
    unsigned long n = va_arg(*ptrf, unsigned long);

    if (my_strcmp(get->get_lfmt, "ll") == 0
    || my_strcmp(get->get_lfmt, "l") == 0
    || my_strcmp(get->get_lfmt, "hh") == 0
    || my_strcmp(get->get_lfmt, "h") == 0
    || my_strcmp(get->get_lfmt, "q") == 0) {
        return (p_bs_u(n, get, "0123456789abcdef"));
    }
    return (p_bs_u((unsigned int)n, get, "0123456789abcdef"));
}

int fg_x_u(va_list *ptrf, pfparse_t *get)
{
    unsigned long n = va_arg(*ptrf, unsigned long);

    if (my_strcmp(get->get_lfmt, "ll") == 0
    || my_strcmp(get->get_lfmt, "l") == 0
    || my_strcmp(get->get_lfmt, "hh") == 0
    || my_strcmp(get->get_lfmt, "h") == 0
    || my_strcmp(get->get_lfmt, "q") == 0) {
        return (p_bs_u(n, get, "0123456789ABCDEF"));
    }
    return (p_bs_u((unsigned int)n, get, "0123456789ABCDEF"));
}

int fg_o(va_list *ptrf, pfparse_t *get)
{
    unsigned long n = va_arg(*ptrf, unsigned long);

    if (my_strcmp(get->get_lfmt, "ll") == 0
    || my_strcmp(get->get_lfmt, "l") == 0
    || my_strcmp(get->get_lfmt, "hh") == 0
    || my_strcmp(get->get_lfmt, "h") == 0
    || my_strcmp(get->get_lfmt, "q") == 0) {
        return (p_bs_u(n, get, "01234567"));
    }
    return (p_bs_u((unsigned int)n, get, "01234567"));
}

int fg_d_l(va_list *ptrf, pfparse_t *get)
{
    unsigned long n = va_arg(*ptrf, unsigned long);

    if (my_strcmp(get->get_lfmt, "ll") == 0
    || my_strcmp(get->get_lfmt, "l") == 0
    || my_strcmp(get->get_lfmt, "hh") == 0
    || my_strcmp(get->get_lfmt, "h") == 0
    || my_strcmp(get->get_lfmt, "q") == 0) {
        return (p_bs_l(n, get));
    }
    return (p_bs_l((int)n, get));
}

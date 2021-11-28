/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part three
*/

#include "my_printf.h"

long g_max(long n)
{
    if (n < 0)
        return n * (-1);
    return n;
}

int fmt_sh(pfparse_t *get)
{
    int list = 0;

    if (get->count == 0)
        return 0;
    for (int a = 0; a < 3; a++)
        if (hash_fmt[a].fmt_analyse == get->fmt_get_tpe) {
            my_printf("%s", hash_fmt[a].get_fmt);
            list = (hash_fmt[a].nb_to_fmt);
        }
    return list;
}

int prt_wh(pfparse_t *get)
{
    if (get->get_b == 1)
        my_printf("%c", ' ');
    return get->get_b;
}

int prt_sg(pfparse_t *get, char v_c)
{
    if (get->get_s > 0 && get->ptf_fg == v_c)
        my_printf("%c", get->get_s);
    return (get->get_s > 0 && get->ptf_fg == v_c);
}

int prt_bf(pfparse_t *get, int s)
{
    int a = 0;
    int b = 0;

    b += fmt_sh(get) + prt_wh(get) + prt_sg(get, '0');
    for (; a + s +(get->get_s > 0) + get->get_b < get->make_pad; a++)
        my_printf("%c", get->ptf_fg);
    return b += prt_sg(get, ' ') + a;
}
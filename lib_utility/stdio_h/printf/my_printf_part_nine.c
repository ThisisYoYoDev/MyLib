/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part nine
*/

#include "my_printf.h"

void my_putchar(char c)
{
    if (write(1, &c, 1) == -1) {
        return;
    }
}

int my_putstr(char *str)
{
    if (str == NULL)
        return my_putstr("(null)");
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
    return 0;
}

int prt_s_maj(va_list *pflist, pfparse_t *get)
{
    char *s = va_arg(*pflist, char *);
    int list = prt_bf(get, gt_sz(s));

    if (s == NULL) {
        my_putstr(NULL);
        list += prt_af(get, gt_sz(s));
        return gt_sz(s) + list;
    }
    for (int a = 0; s[a]; a++) {
        if (s[a] < 32 || s[a] >= 127)
            my_printf("\\%.3o", s[a]);
        else
            my_printf("%c", s[a]);
    }
    list += prt_af(get, gt_sz(s));
    return gt_sz(s) + list;
}

int prt_rpl_fg(char fg, char *md, va_list *pflist)
{
    int a = 0;
    int list = 0;
    pfparse_t get = {fg, my_getnbr_printf(md), 32, 0, 0, 0, 0};

    if (bad_fg(md)) {
        my_printf("%c%s%c", '%', md, fg);
        return my_strlen(md + 2);
    }
    for (get_fd_mod(md, &get); fg_list[a].fg != NULL; a++)
        if (fd_char(fg_list[a].fg, fg) >= 0)
            list = (fg_list[a].flags(pflist, &get));
    return list;
}

int prt_reduce(char const *fmt, int *a, va_list *pflist)
{
    char *md = get_mod(a, &fmt[*a]);
    int i = *a;
    int j = 1;

    if (fmt[*a] == '%' || get_mod(a, &fmt[*a]) == NULL) {
        my_printf("%c", '%');
        if (get_mod(a, &fmt[*a]) == NULL)
            *a = i;
    }
    else
        j = prt_rpl_fg(fmt[*a], md, pflist);
    free(md);
    return j;
}
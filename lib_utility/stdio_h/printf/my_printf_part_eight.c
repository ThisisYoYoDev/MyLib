/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part eight
*/

#include "my_printf.h"

char *my_strncpy(char *dest, const char *src, int n)
{
    int i = 0;

    while (i < n && src[i]) {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int prt_ptr(va_list *pflist, pfparse_t *get)
{
    unsigned long n = va_arg(*pflist, unsigned long);
    int list = 0;

    list += prt_bf(get, n_l_u(n));
    if (n > 0)
        list += my_printf("%#lx", n);
    else {
        my_printf("(nil)");
        list += DEF_P_FG;
    }
    list += prt_af(get, n_l_u(n));
    return list;
}

int gt_sz(char *s)
{
    int list = 0;

    if (s == NULL)
        return my_strlen("(null)");
    for (int a = 0; s[a]; a++)
        (s[a] < 32 || s[a] >= 127) ? list += DEF_S_FG: list++;
    return list;
}

int prt_c(va_list *pflist, pfparse_t *get)
{
    int list = 0;
    unsigned char c = va_arg(*pflist, int);

    list += prt_bf(get, 1) + write(1, &c, 1) + prt_af(get, 1);
    return list;
}

int prt_s(va_list *pflist, pfparse_t *get) //ok
{
    int list = 0;
    char *s = va_arg(*pflist, char *);

    list += prt_bf(get, gt_sz(s));
    my_putstr(s);
    list += prt_af(get, gt_sz(s));
    return gt_sz(s) + list;
}
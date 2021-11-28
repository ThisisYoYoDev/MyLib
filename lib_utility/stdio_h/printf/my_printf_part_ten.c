/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part ten
*/

#include "my_printf.h"

int my_printf(char const *fmt, ...)
{
    va_list pflist;
    int a = 0;
    int b = 0;

    for (va_start(pflist, fmt); fmt[a]; a++) {
        if (fmt[a] != '%') {
            my_printf("%c", fmt[a]);
            ++b;
        } else {
            ++a;
            b += prt_reduce(fmt, &a, &pflist);
        }
    }
    va_end(pflist);
    return b;
}
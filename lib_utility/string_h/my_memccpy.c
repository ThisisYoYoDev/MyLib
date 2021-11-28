/*
** EPITECH PROJECT, 2021
** my_memccpy.c
** File description:
** my own memccpy
*/

#include "macro_and_define.h"

void *my_memccpy(void *t, const void *f, int c, size_t n)
{
    unsigned char *tp = t;
    const unsigned char *fp = f;
    unsigned char uc = c;

    if (n == 0)
        return 0;
    do {
        if ((*tp++ = *fp++) == uc)
            return tp;
    } while (--n != 0);
    return 0;
}
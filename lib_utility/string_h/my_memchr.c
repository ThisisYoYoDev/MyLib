/*
** EPITECH PROJECT, 2021
** my_memchr
** File description:
** my own memchr
*/

#include "macro_and_define.h"

void *my_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;

    if (n == 0)
        return NULL;
    do {
        if (*p++ == (unsigned char) c)
            return (void *) (p - 1);
    } while (--n != 0);
    return NULL;
}
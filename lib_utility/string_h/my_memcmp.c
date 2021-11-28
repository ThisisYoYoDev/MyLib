/*
** EPITECH PROJECT, 2021
** my_memcmp
** File description:
** my own memcpm
*/

#include "macro_and_define.h"

int my_memcmp(const void *s_one, const void *s_two, size_t n)
{
    const unsigned char *p_one = s_one;
    const unsigned char *p_two = s_two;

    if (n == 0)
        return 0;
    do {
        if (*p_one++ != *p_two++)
            return (*--p_one - *--p_two);
    } while (--n != 0);
    return 0;
}
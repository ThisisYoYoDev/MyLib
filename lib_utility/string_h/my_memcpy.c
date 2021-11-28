/*
** EPITECH PROJECT, 2021
** my_memcpy
** File description:
** my ownmemcpy
*/

#include "macro_and_define.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    for (size_t i = 0; i < n; i++) {
        ((char *) dest)[i] = ((char *) src)[i];
    }
    return dest;
}

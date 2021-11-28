/*
** EPITECH PROJECT, 2021
** my_calloc
** File description:
** my own calloc
*/

#include "macro_and_define.h"

void *my_calloc(size_t nmemb, size_t size)
{
    char *dest = malloc(size * nmemb);

    if (dest == NULL)
        return NULL;
    my_memset(dest, 0, (nmemb * size));
    return dest;
}
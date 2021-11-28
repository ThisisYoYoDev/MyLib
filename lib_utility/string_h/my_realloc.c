/*
** EPITECH PROJECT, 2021
** my_realloc
** File description:
** my ownrealloc
*/

#include "macro_and_define.h"

void *my_realloc(void *ptr, size_t size)
{
    void *new = malloc(size);

    if (!new)
        return NULL;
    if (ptr) {
        new = my_memcpy(new, ptr, size);
        free(ptr);
    }
    return new;
}

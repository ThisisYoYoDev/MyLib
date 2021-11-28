/*
** EPITECH PROJECT, 2021
** my_bzero
** File description:
** my own bzero
*/

#include "macro_and_define.h"

void my_bzero(void *s, size_t n)
{

    for (size_t i = 0; i < n; i++)
        ((char *) s)[i] = 0;
}
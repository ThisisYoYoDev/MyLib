/*
** EPITECH PROJECT, 2021
** my_strchr
** File description:
** my own strchr
*/

#include "macro_and_define.h"

char *my_strchr(const char *p, int ch)
{
    for (;; ++p) {
        if (*p == (unsigned char) ch)
            return (char *) p;
        if (*p == '\0')
            return NULL;
    }
}
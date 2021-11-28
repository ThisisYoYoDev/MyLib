/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** sort_cmp
*/

#include "lib_prototype.h"

int sort_int(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}

int sort_double(const void *a, const void *b)
{
    return *(double *) a - *(double *) b;
}

int sort_char(const void *a, const void *b)
{
    return *(char *) a - *(char *) b;
}

int sort_string(const void *a, const void *b)
{
    return my_strcmp(*(char **) a, *(char **) b);
}
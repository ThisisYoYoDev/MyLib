/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** qsort_type
*/

#include <stdlib.h>
#include "lib_prototype.h"

void qsort_int(int *arr, int n)
{
    qsort(arr, n, sizeof(int), sort_int);
}

void qsort_double(double *arr, int n)
{
    qsort(arr, n, sizeof(double), sort_double);
}

void qsort_char(char *arr, int n)
{
    qsort(arr, n, sizeof(char), sort_char);
}

void qsort_string(char **arr, int n)
{
    qsort(arr, n, sizeof(char *), sort_string);
}
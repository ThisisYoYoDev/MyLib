/*
** EPITECH PROJECT, 2021
** Split
** File description:
** split function
*/

#include <stddef.h>
#include "lib_prototype.h"

char *y_strpbrk(const char *s, const char *accept)
{
    while (*++s) {
        for (const char *a = accept; *a; ++a) {
            if (*s == *a) {
                return (char *)s;
            }
        }
    }
    return NULL;
}

char *y_strtok(char *str, const char *delim)
{
    static char *string = NULL;
    char *token = NULL;

    if (str != NULL)
        string = str;
    if (string == NULL)
        return NULL;
    token = string;
    string = y_strpbrk(token, delim);
    if (string != NULL) {
        *string++ = '\0';
    }
    return token;
}

char **split(char *str, const char *delim, int *count)
{
    char **tab = NULL;
    char *token = NULL;
    int i = 0;

    if (str == NULL || delim == NULL)
        return NULL;
    token = y_strtok(str, delim);
    while (token != NULL) {
        tab = realloc(tab, sizeof(char *) * (i + 2));
        tab[i] = token;
        token = y_strtok(NULL, delim);
        i++;
    }
    tab[i] = NULL;
    *count = i;
    return tab;
}
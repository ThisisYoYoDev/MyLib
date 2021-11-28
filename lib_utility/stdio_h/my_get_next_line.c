/*
** EPITECH PROJECT, 2020
** implementation of getline
** File description:
** up
*/

#include "macro_and_define.h"

static char read_c(int fd)
{
    static int check = 0;
    static int size = 0;
    static char tmp[MAX_BUF_GET_LINE];
    char r;

    if (size == 0) {
        size = read(fd, tmp, MAX_BUF_GET_LINE);
        if (size == 0)
            return 0;
        check = 0;
    }
    r = tmp[check];
    check++;
    size--;
    return r;
}

static char *just_malloc(char *cbl, int check)
{
    char *gnl = malloc(sizeof(char) * check + MAX_BUF_GET_LINE);

    if (gnl == NULL)
        return NULL;
    for (int p = 0; p <= check; p++)
        gnl[p] = cbl[p];
    free(cbl);
    return gnl;
}

char *my_get_next_line(int fd)
{
    char *otl = malloc(sizeof(char) * MAX_BUF_GET_LINE + 1);
    char gnc = read_c(fd);
    int check = 0;

    if (gnc == 0) {
        free(otl);
        return NULL;
    }
    if (otl == NULL)
        return NULL;
    for (; gnc != '\n' && gnc; gnc = read_c(fd)) {
        otl[check] = gnc;
        if (((check + 1) % MAX_BUF_GET_LINE) == 0)
            if (GET_LINE_MALLOC == NULL)
                return NULL;
        check++;
    }
    otl[check] = '\0';
    return otl;
}
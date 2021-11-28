/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part six
*/

#include "my_printf.h"

int fd_char(const char *s, char b)
{
    if (s == NULL)
        return -1;
    for (int a = 0; s[a]; a++)
        if (s[a] == b)
            return a;
    return -1;
}

int my_getnbr_printf(char *str)
{
    long negative_int = 1;
    long number = 0;
    long i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            negative_int = negative_int * (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        number = (10 * number) + (int)str[i] - '0';
        if (number > 2147483647 && negative_int == 1)
            return (0);
        else if (number > 2147483648)
            return (0);
        i++;
    }
    return (number * negative_int);
}

int g_bd_fg(char *s, char f)
{
    if (fd_char(s, f) == -1)
        return 0;
    if ((f == MINUS && my_getnbr_printf(s) > 0)
    || (fd_char("123456789", s[fd_char(s, f) + 1]) == -1)) {
        return 1;
    }
    return 0;
}

int bad_fg(char *s)
{
    if ((g_bd_fg(s, MINUS) == 1) || (g_bd_fg(s, POINT) == 1))
        return 1;
    return 0;
}

void c_sh(char *s, int a, pfparse_t *get)
{
    if (s[a] == DIESE && fd_char("oxX", get->fmt_get_tpe) >= 0)
        get->count = 1;
}

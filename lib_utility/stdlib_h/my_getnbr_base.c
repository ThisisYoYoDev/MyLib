/*
** EPITECH PROJECT, 2020
** getnbr_base
** File description:
** Converts and returns a number
*/

#include "lib_prototype.h"

int if_base(char c, char const *base)
{
    int i = 0;

    while (base[i] && base[i] != c)
        i++;
    return (i);
}

int if_is_in_base(char c, char const *base)
{
    for (int i = 0; base[i]; i++)
        if (base[i] == c)
            return (1);
    return (0);
}

int my_check_valid_base_atoi(char const *base)
{
    int j;

    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    for (int i = 0; base[i]; i++) {
        j = i + 1;
        if (base[j] < 32 && base[j] > 126)
            return (0);
        for (; base[j]; j++)
            if (base[i] == base[j])
                return (0);
    }
    return (1);
}

int my_getnbr_base(char const *str, char const *base)
{
    long negative_int = 1;
    long number = 0;
    long i = 0;

    if (!my_check_valid_base_atoi(base))
        return (0);
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            negative_int = negative_int * (-1);
        i++;
    }
    while (if_is_in_base(str[i], base)) {
        number = number * my_strlen((char *) base) + if_base(str[i], base);
        if (number > 2147483647 && negative_int == 1)
            return (0);
        else if (number > 2147483648)
            return (0);
        i++;
    }
    return (number * negative_int);
}

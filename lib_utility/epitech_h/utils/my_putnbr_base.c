/*
** EPITECH PROJECT, 2020
** My_putnbr_base
** File description:
** Converts and displays a decimal number into a number in a given base
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str);

int my_check_valid_base(char const *base)
{
    int j;

    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    for (int i = 0; base[i]; i++) {
        j = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        if (base[j] < 32 && base[j] > 126)
            return (0);
        for (; base[j]; j++)
            if (base[i] == base[j]) {
                return (0);
            }
    }
    return (1);
}

void conv_my_base(long number, char const *base)
{
    long i = my_strlen(base);

    if (number >= i)
        conv_my_base(number / i, base);
    my_putchar(base[number % i]);
}

int my_putnbr_base(int nbr, char const *base)
{
    long number = nbr;

    if (my_check_valid_base(base)) {
        if (nbr < 0) {
            my_putchar('-');
            number = number * (-1);
        }
        conv_my_base(number, base);
    }
    return (0);
}

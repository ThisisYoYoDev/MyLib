/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** return a int to an str
*/

int my_getnbr(char const *str)
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
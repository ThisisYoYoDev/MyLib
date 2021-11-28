/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** return 1 is the str is printable
*/

int my_str_isprintable(char const *str)
{
    while (str[0]) {
        if (!(str[0] >= 32 && str[0] <= 126))
            return (0);
        str++;
    }
    return (1);
}

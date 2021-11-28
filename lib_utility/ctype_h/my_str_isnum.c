/*
** EPITECH PROJECT, 2020
** str_isnum
** File description:
** returns 1 if the string passed as parameter only contains digits
*/

int my_str_isnum(char const *str)
{
    while (str[0]) {
        if (!(str[0] >= '0' && str[0] <= '9'))
            return (0);
        str++;
    }
    return (1);
}

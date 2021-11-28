/*
** EPITECH PROJECT, 2020
** str is upper
** File description:
** Returns 1 if the string contains uppercase alphabetical
*/

int my_str_isupper(char const *str)
{
    while (str[0]) {
        if (!(str[0] >= 'A' && str[0] <= 'Z'))
            return (0);
        str++;
    }
    return (1);
}

/*
** EPITECH PROJECT, 2020
** islower
** File description:
** Returns 1 if the string contains lowercase alphabetical
*/

int my_str_islower(char const *str)
{
    while (str[0]) {
        if (!(str[0] >= 'a' && str[0] <= 'z'))
            return (0);
        str++;
    }
    return (1);
}

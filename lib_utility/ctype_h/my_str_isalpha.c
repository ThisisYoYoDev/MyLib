/*
** EPITECH PROJECT, 2020
** str_isalpha
** File description:
** Returns 1 if the string contains alphabetical
*/

int my_str_isalpha(char const *str)
{
    while (str[0]) {
        if (!((str[0] >= 'a' && str[0] <= 'z')
        || (str[0] >= 'A' && str[0] <= 'Z'))) {
            return (0);
        }
        str++;
    }
    return (1);
}

/*
** EPITECH PROJECT, 2020
** My_strcapitalize.c
** File description:
** Capitalizes the first letter of each word
*/

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    for (int i = 0; str[i]; i++) {
        if ((str[i - 1] == '-' || str[i - 1] == '+'
        || str[i - 1] == ' '
        || i == 0) && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] -= 32;
        }
    }
    return (str);
}

/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** put every letter in uppercase
*/

char *my_strupcase(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}

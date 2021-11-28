/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** put every letter in lowercase
*/

char *my_strlowcase(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}

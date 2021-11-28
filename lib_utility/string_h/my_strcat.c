/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** Concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j;

    while (dest[i])
        i++;
    j = 0;
    while (src[j]) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** lib
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j;

    while (dest[i])
        i++;
    j = 0;
    while (src[j] && j < nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

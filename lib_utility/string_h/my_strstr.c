/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** cmp string and add diff
*/

char *my_strstr(char *str, char const *to_find)
{
    int i;
    int j;

    if (!*to_find)
        return (str);
    i = 0;
    while (str[i] != '\0') {
        j = 0;
        while (str[i + j] == to_find[j]) {
            j++;
            if (to_find[j] == '\0')
                return (&str[i]);
        }
        i++;
    }
    return (0);
}

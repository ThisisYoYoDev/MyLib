/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** cmp two str
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n == 0)
        return (0);
    while (i + 1 < n && (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0')))
        i++;
    return (s1[i] - s2[i]);
}

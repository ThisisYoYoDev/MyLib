/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** my_strcmp
*/

int my_strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i]; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (s1[i] - s2[i]);
}
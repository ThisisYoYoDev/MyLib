/*
** EPITECH PROJECT, 2020
** My_str_to_word_array
** File description:
** splits a string into words
*/

#include <stdlib.h>

int count_number_of_word(char *s, char c)
{
    int j = 0;
    int w = 0;

    for (int i = 0; s[i]; i += 1) {
        if ((s[i] != c && s[i] != '\t') && j == 0) {
            w += 1;
            j = 1;
        } else if (s[i] == c || s[i] == '\t')
            j = 0;
    }
    return w;
}

char *count_number_of_letter(int *ls, char *s, char c)
{
    int i = 0;
    int j = 0;
    char *word;

    for (*ls = 0; s[i] == c || s[i] == '\t'; i += 1);
    for (; (s[i] != c && s[i] != '\t') && s[i]; *ls += 1)
        i += 1;
    *ls = i;
    word = malloc(sizeof(char) * (*ls + 2));
    if (word == NULL)
        return (NULL);
    for (; s[j] == c || s[j] == '\t'; j++);
    for (i = j; (s[i] != c && s[i] != '\t' && s[i] != '\n') && s[i]; i++)
        word[i - j] = s[i];
    word[i - j] = '\0';
    return (word);
}

char **my_str_to_word_array(char *s, char c)
{
    int nm = 0;
    char *w = NULL;
    char **wa = NULL;
    int i = 0;

    if (!s || !s[0])
        return (NULL);
    nm = count_number_of_word(s, c);
    wa = malloc(sizeof(char *) * (nm + 2));
    for (int ls = 0; i < nm; i++) {
        w = count_number_of_letter(&ls, s, c);
        s += ls;
        wa[i] = w;
    }
    for (int y = 0; wa[i - 1][y] != '\0'; y++)
        if (wa[i - 1][y] != ' ') {
            wa[i] = NULL;
            return (wa);
        }
    wa[i - 1] = NULL;
    return wa;
}

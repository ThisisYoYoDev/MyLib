/*
** EPITECH PROJECT, 2020
** My_Revstr
** File description:
** Reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int len_of_string = my_strlen(str);
    int i = 0;
    char swap;

    while (i < len_of_string) {
        len_of_string--;
        swap = str[i];
        str[i] = str[len_of_string];
        str[len_of_string] = swap;
        i++;
    }
    return (str);
}

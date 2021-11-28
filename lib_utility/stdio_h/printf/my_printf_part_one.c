/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part one
*/

#include "my_printf.h"

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    for (i = 0; str[i]; i++);
    return i;
}

int c_in_lt(lib_t **h, char a)
{
    lib_t *list = malloc(sizeof(lib_t));

    if (list != NULL) {
        list->get_n = 0;
        list->get_c = a;
        list->get_s = NULL;
        list->next = *h;
        *h = list;
        return 0;
    }
    return 1;
}

int l_s(const lib_t *s)
{
    int i;

    for (i = 0; s != NULL; s = s->next)
        i++;
    return i;
}

char *lt_in_s(lib_t *list)
{
    int s_lst = l_s(list);
    char *s = malloc(sizeof(char) * (s_lst + 1));
    lib_t *n = list;
    int a = 0;

    if (s != NULL) {
        while (n != NULL) {
            s[a] = n->get_c;
            a++;
            n = n->next;
        }
        s[a] = '\0';
    }
    return s;
}

char *cv_b_u(unsigned long n, char *b)
{
    lib_t *r = NULL;
    char *s_r = NULL;

    for (; n || r == NULL; n /= my_strlen(b))
        c_in_lt(&r, b[n % my_strlen(b)]);
    s_r = lt_in_s(r);
    free_l(&r);
    return s_r;
}
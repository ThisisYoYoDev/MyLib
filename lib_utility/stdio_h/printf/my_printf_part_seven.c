/*
** EPITECH PROJECT, 2020
** myprintf
** File description:
** part seven
*/

#include "my_printf.h"

void c_pd(char *s, int a, pfparse_t *get)
{
    if ((((s[a] == '0' && fd_char(s, MINUS) == -1))
    || (s[a] == POINT)) && get->ptf_fg == SPACE) {
        get->ptf_fg = '0';
        get->make_pad = my_getnbr_printf(&s[a + 1]);
    }
    if (s[a] == MINUS && fd_char("012345689", s[a + 1]) >= 0)
        get->make_pad = my_getnbr_printf(&s[a]);
}

void c_pl(char *s, int a, pfparse_t *get)
{
    if (s[a] == PLUS && fd_char("di", get->fmt_get_tpe) >= 0)
        get->get_s = 1;
}

void c_wh(char *s, int a, pfparse_t *get)
{
    if (get->get_b == 0 && s[a] == SPACE
    && fd_char("di", get->fmt_get_tpe) >= 0) {
        get->get_b = 1;
    }
}

void get_fd_mod(char *md, pfparse_t *get)
{
    int a = 0;

    while (md[a] && fd_char("lhq", md[a]) == -1) {
        c_sh(md, a, get);
        c_pd(md, a, get);
        c_pl(md, a, get);
        c_wh(md, a, get);
        a++;
    }
    get->get_lfmt = &md[a];
}

char *get_mod(int *a, const char *s)
{
    char *md = NULL;
    char *relou = "lhq#0123456789+- .";
    int i;

    for (i = 0; s[i] && fd_char("%disSpbxXcou", s[i]) == -1; i++)
        if (fd_char(relou, s[i]) == -1)
            return NULL;
    md = malloc(sizeof(char) * (i + 1));
    my_strncpy(md, s, i);
    md[i] = 0;
    *a = *a + i;
    return md;
}

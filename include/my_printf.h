/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** myprintf header epitech project
*/

#ifndef _MY_PRINTF_H_
#define _MY_PRINTF_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lib_prototype.h"

static const int DEF_S_FG = 4;
static const int DEF_P_FG = 5;
static const char MINUS = '-';
static const char PLUS = '+';
static const char POINT = '.';
static const char SPACE = ' ';
static const char DIESE = '#';

typedef struct printf_fmt_analyse
{
    char fmt_analyse;
    char *get_fmt;
    int nb_to_fmt;
} pfmt_t;

typedef struct fmt_parsing
{
    char fmt_get_tpe;
    int make_pad;
    char ptf_fg;
    int count;
    char get_s;
    int get_b;
    char *get_lfmt;
} pfparse_t;

typedef struct ptr_my_printf
{
    char *fg;
    int (*flags)();
} ptrft_t;

typedef struct lib_ft
{
    int get_n;
    char get_c;
    char *get_s;
    struct lib_ft *next;
} lib_t;

static const pfmt_t hash_fmt[] = {
    {'o', "0", 1},
    {'x', "0x", 2},
    {'X', "0X", 2},
};

void free_l(lib_t **list);
char *cv_b_u(unsigned long n, char *b);
char *lt_in_s(lib_t *list);
int l_s(const lib_t *s);
int c_in_lt(lib_t **h, char a);
int my_strlen(char *str);
char *cv_b_l(long n, char *b);
int n_l_u(unsigned long n);
long g_max(long n);
int fmt_sh(pfparse_t *get);
int prt_wh(pfparse_t *get);
int prt_sg(pfparse_t *get, char v_c);
int prt_bf(pfparse_t *get, int s);
int prt_af(pfparse_t *get, int s);
int p_bs_u(unsigned long n, pfparse_t *get, char *b);
int p_bs_l(long n, pfparse_t *get);
int fg_d(va_list *ptrf, pfparse_t *get);
int fg_x_l(va_list *ptrf, pfparse_t *get);
int fg_x_u(va_list *ptrf, pfparse_t *get);
int fg_o(va_list *ptrf, pfparse_t *get);
int fg_b(va_list *ptrf, pfparse_t *get);
int fg_d_l(va_list *ptrf, pfparse_t *get);
int fd_char(const char *s, char b);
int my_getnbr_printf(char *str);
int g_bd_fg(char *s, char f);
int bad_fg(char *s);
void c_sh(char *s, int a, pfparse_t *get);
void get_fd_mod(char *md, pfparse_t *get);
void c_wh(char *s, int a, pfparse_t *get);
void c_pl(char *s, int a, pfparse_t *get);
void c_pd(char *s, int a, pfparse_t *get);
char *get_mod(int *a, const char *s);
char *my_strncpy(char *dest, const char *src, int n);
int prt_ptr(va_list *pflist, pfparse_t *get);
int prt_s(va_list *pflist, pfparse_t *get);
int prt_c(va_list *pflist, pfparse_t *get);
int gt_sz(char *s);
int my_putstr(char *str);
void my_putchar(char c);
int prt_s_maj(va_list *pflist, pfparse_t *get);
int prt_rpl_fg(char fg, char *md, va_list *pflist);
int prt_reduce(char const *fmt, int *a, va_list *pflist);
int my_printf(char const *fmt, ...);

static const ptrft_t fg_list[] = {
    {"di", &fg_d_l},
    {"s", &prt_s},
    {"S", &prt_s_maj},
    {"p", &prt_ptr},
    {"b", &fg_b},
    {"x", &fg_x_l},
    {"X", &fg_x_u},
    {"c", &prt_c},
    {"o", &fg_o},
    {"u", &fg_d},
    {NULL, NULL}
};

#endif /* !_MY_PRINTF_H_ */

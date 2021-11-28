/*
** EPITECH PROJECT, 2021
** lib
** File description:
** lib prototype
*/

#ifndef _LIB_PROTOTYPE_H_
#define _LIB_PROTOTYPE_H_

#include "macro_and_define.h"

int my_isneg(int nb);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_getnbr_base(char const *str, char const *base);
int my_putnbr_base(int nbr, char const *base);
int my_check_valid_base(char const *base);
char *my_strdup(char const *src);
char **my_str_to_word_array(const char *s, char c);
int if_base(char c, char const *base);
int if_is_in_base(char c, char const *base);
int my_check_valid_base_atoi(char const *base);
void conv_my_base(long number, char const *base);
void my_sort(int *arr, int size);
void *my_memccpy(void *t, const void *f, int c, size_t n);
void *my_memchr(const void *s, int c, size_t n);
int my_memcmp(const void *s1, const void *s2, size_t n);
void *my_memset(void *s, int c, size_t n);
char *my_strchr(const char *p, int ch);
int my_strcmp(char *s1, char *s2);
void my_bzero(void *s, size_t n);
char *my_get_next_line(int fd);
void *my_memcpy(void *dest, const void *src, size_t n);
void *my_calloc(size_t nmemb, size_t size);
void *my_realloc(void *ptr, size_t size);
char *my_strndup(char *s, int size);
char **split(char *str, const char *delim, int *count);
char *y_strtok(char *str, const char *delim);
char *y_strpbrk(const char *s, const char *accept);
int sort_int(const void *a, const void *b);
int sort_double(const void *a, const void *b);
int sort_char(const void *a, const void *b);
int sort_string(const void *a, const void *b);
void qsort_int(int *arr, int n);
void qsort_double(double *arr, int n);
void qsort_char(char *arr, int n);
void qsort_string(char **arr, int n);
int my_printf(char const *fmt, ...);
int my_strlen(char *str);

#endif /* !_LIB_PROTOTYPE_H_ */

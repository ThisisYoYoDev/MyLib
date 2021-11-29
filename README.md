# MyLib

## This is YoYo LIB

7 includes
-> ctype.h
-> datastruct.h
-> epitech.h
-> publib.h
-> stdio.h
-> stdlib.h
-> strings.h

## How to compile
```bash
make
make clean
make fclean
make re
gcc main.c -I include/ -L . -l:y_epitech.a -l:y_string.a
```

## Ctype.h

All functions :

Returns 1 if the string contains alphabeticals chars else 0
```c
int my_str_isalpha(char const *str)
```

Returns 1 if the string contains lowercase alphabeticals else 0
```c
int my_str_islower(char const *str)
```

Returns 1 if the string passed as parameter only contains digits
```c
int my_str_isnum(char const *str)
```

Return 1 is the str is printable else 0
```c
int my_str_isprintable(char const *str)
```

Returns 1 if the string contains uppercase alphabetical
```c
int my_str_isupper(char const *str)
```

Capitalizes the first letter of each word
```c
char *my_strcapitalize(char *str)
```

Put every letter in lowercase
```c
char *my_strlowcase(char *str)
```

Put every letter in uppercase
```c
char *my_strupcase(char *str)
```


## datastruct.h


### tail linked list

```c
int compare_size(list_t *a, list_t *b)
```

```c
int compare_string(list_t *a, list_t *b)
```

```c
void sort_size(tailhead_t *head)
```

```c
void free_tailq(tailhead_t *head)
```

```c
void print_list(tailhead_t *head)
```

```c
void remove_first(tailhead_t *head)
```

```c
void remove_last(tailhead_t *head)
```

```c
void remove_index(tailhead_t *head, int index)
```

```c
void remove_value(tailhead_t *head, void *value)
```

```c
void append_tailq(void *value, tailhead_t *head)
```

```c
int index_value(tailhead_t *head, void *value)
```


## epitech.h

### Maths

```c
int my_compute_power_rec(int nb, int p)
```

```c
int my_compute_square_root(int nb)
```

```c
int my_find_prime_sup(int nb)
```

```c
int my_is_prime(int nb)
```

### Alloc Optimizer

```c
ez_heap_t *new_hp_lst_node(ez_heap_t *prev)
ez_heap_t **place_return_list(void *ptr)
void free_check(void *ptr)
void free_all_heap(void)
void *mallocate(size_t size)
void *callocate(size_t nmemb, size_t size)
```

### utils

```c
int my_putnbr_base(int nbr, char const *base)
```

```c
char **split(char *str, const char *delim, int *count)
```

## publib.h

```c
char *my_revstr(char *str)
```

## stdio.h

```c
char *my_get_next_line(int fd)
```

```c
int my_printf(char const *fmt, ...);
```

## stdlib.h

```c
int my_getnbr_base(char const *str, char const *base)
```

```c
int my_getnbr(char const *str)
```

```c
void my_sort(int *arr, int size)
```

```c
void qsort_int(int *arr, int n)
void qsort_double(double *arr, int n)
void qsort_char(char *arr, int n)
void qsort_string(char **arr, int n)
int sort_int(const void *a, const void *b)
int sort_double(const void *a, const void *b)
int sort_char(const void *a, const void *b)
int sort_string(const void *a, const void *b)
```

## string.h

```c
void my_bzero(void *s, size_t n)
void *my_calloc(size_t nmemb, size_t size)
void *my_memccpy(void *t, const void *f, int c, size_t n)
void *my_memchr(const void *s, int c, size_t n)
int my_memcmp(const void *s_one, const void *s_two, size_t n)
void *my_memcpy(void *dest, const void *src, size_t n)
void *my_memset(void *s, int c, size_t n)
void *my_realloc(void *ptr, size_t size)
char **my_str_to_word_array(char *s, char c)
char *my_strcat(char *dest, char const *src)
char *my_strchr(const char *p, int ch)
int my_strcmp(char *s1, char *s2)
char *my_strcpy(char *dest, char const *src)
char *my_strdup(char const *src)
char *my_strndup(char *s, int size)
char *my_strncat(char *dest, char const *src, int nb)
int my_strncmp(char const *s1, char const *s2, int n)
char *my_strstr(char *str, char const *to_find)
```
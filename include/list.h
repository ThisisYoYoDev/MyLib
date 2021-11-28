/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** list
*/

#ifndef LIST_H_
#define LIST_H_

#include <sys/queue.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct data_s {
    char *str;
    size_t size;
} data_t;

typedef struct list_s {
    void *data;
    TAILQ_ENTRY(list_s) entries;
} list_t;

typedef struct tailhead_s {
    list_t *tqh_first;
    list_t **tqh_last;
} tailhead_t;


void free_tailq(list_t *node, tailhead_t *head);
void print_list(list_t *item, tailhead_t *head);
void remove_first(tailhead_t *head);
void remove_last(tailhead_t *head);
void remove_index(tailhead_t *head, int index);
void remove_value(tailhead_t *head, void *value);
void append_tailq(void *value, list_t *node, tailhead_t *head);
int index_value(tailhead_t *head, void *value);


#endif /* !LIST_H_ */


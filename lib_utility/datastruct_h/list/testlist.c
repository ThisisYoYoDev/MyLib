/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** testlist
*/

#include "lib_prototype.h"
#include "alloc_opti.h"
#include "list.h"

void free_tailq(list_t *node, tailhead_t *head)
{
    while (!TAILQ_EMPTY(head)) {
        node = TAILQ_FIRST(head);
        TAILQ_REMOVE(head, node, entries);
        free(node);
    }
}

void print_list(list_t *item, tailhead_t *head)
{
    TAILQ_FOREACH(item, head, entries)
    {
        printf("%s: %ld\n", ((data_t *)item->data)->str,
        ((data_t *)item->data)->size);
    }
}

void remove_first(tailhead_t *head)
{
    list_t *node = TAILQ_FIRST(head);

    TAILQ_REMOVE(head, node, entries);
    free(node);
}

void remove_last(tailhead_t *head)
{
    list_t *node = TAILQ_LAST(head, tailhead_s);

    TAILQ_REMOVE(head, node, entries);
    free(node);
}

void remove_index(tailhead_t *head, int index)
{
    int i = 0;
    list_t *node;

    TAILQ_FOREACH(node, head, entries)
    {
        if (i == index) {
            TAILQ_REMOVE(head, node, entries);
            free(node);
            return;
        }
        i++;
    }
}

void remove_value(tailhead_t *head, void *value)
{
    list_t *node;

    TAILQ_FOREACH(node, head, entries)
    {
        if (node->data == value) {
            TAILQ_REMOVE(head, node, entries);
            free(node);
            return;
        }
    }
}

void append_tailq(void *value, list_t *node, tailhead_t *head)
{
    node = mallocate(sizeof(list_t));
    if (node == NULL) {
        return;
    }
    node->data = value;
    TAILQ_INSERT_TAIL(head, node, entries);
}

int compare_size(list_t *a, list_t *b)
{
    return ((data_t *)a->data)->size - ((data_t *)b->data)->size;
}

int compare_string(list_t *a, list_t *b)
{
    return my_strcmp(((data_t *)a->data)->str, ((data_t *)b->data)->str);
}

void sort_size(tailhead_t *head)
{
    list_t *node = TAILQ_FIRST(head);
    list_t *tmp;
    TAILQ_FOREACH(tmp, head, entries)
    {
        if (compare_size(node, tmp) < 0) {
            TAILQ_INSERT_BEFORE(tmp, node, entries);
            break;
        }
        if (!TAILQ_NEXT(tmp, entries)) {
            TAILQ_INSERT_AFTER(head, tmp, node, entries);
            break;
        }
    }
}

int index_value(tailhead_t *head, void *value)
{
    int index = 0;
    list_t *node;

    TAILQ_FOREACH(node, head, entries)
    {
        if (node->data == value) {
            return index;
        }
        index++;
    }
    return -1;
}

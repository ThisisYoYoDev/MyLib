/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** testlist
*/

#include "alloc_opti.h"
#include "list.h"

void remove_index(tailhead_t *head, int index)
{
    int i = 0;
    list_t *node;

    TAILQ_FOREACH(node, head, entries)
    {
        if (i == index) {
            TAILQ_REMOVE(head, node, entries);
            free_check(node);
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
            free_check(node);
            return;
        }
    }
}

void append_tailq(void *value, tailhead_t *head)
{
    list_t *node = mallocate(sizeof(list_t));

    if (node == NULL) {
        return;
    }
    node->data = value;
    TAILQ_INSERT_TAIL(head, node, entries);
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

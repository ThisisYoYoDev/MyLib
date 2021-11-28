/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** qtail_list_utils
*/

#include "lib_prototype.h"
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
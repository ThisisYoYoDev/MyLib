/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** qtail_list_utils
*/

#include "lib_prototype.h"
#include "alloc_opti.h"
#include "list.h"

void free_tailq(tailhead_t *head)
{
    list_t *node = NULL;

    while (!TAILQ_EMPTY(head)) {
        node = TAILQ_FIRST(head);
        TAILQ_REMOVE(head, node, entries);
        free_check(node);
    }
}

void print_list(tailhead_t *head)
{
    list_t *item = TAILQ_FIRST(head);

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
    free_check(node);
}

void remove_last(tailhead_t *head)
{
    list_t *node = TAILQ_LAST(head, tailhead_s);

    TAILQ_REMOVE(head, node, entries);
    free_check(node);
}
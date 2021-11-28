/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** qtail_list_sort
*/

#include "lib_prototype.h"
#include "list.h"

int compare_size(list_t *a, list_t *b)
{
    return ((data_t *)a->data)->size - ((data_t *)b->data)->size;
}

int compare_string(list_t *a, list_t *b)
{
    return my_strcmp(((data_t *)a->data)->str, ((data_t *)b->data)->str);
}

// TODO(#3): repair sort function
// Don't work.

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

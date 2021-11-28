/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** alloc_opti
*/

#include "alloc_opti.h"

/* TODO(#1): handle alreay free ptr */

ez_heap_t *new_hp_lst_node(ez_heap_t *prev)
{
    ez_heap_t *newNode = (ez_heap_t *) malloc(sizeof(ez_heap_t));

    if (!newNode) {
        return NULL;
    }
    newNode->last_list = NULL;
    newNode->prev = prev;
    if (prev) {
        newNode->last_list = prev->last_list;
    }
    return newNode;
}

ez_heap_t **place_return_list(void *ptr)
{
    static ez_heap_t *curr = NULL;
    ez_heap_t *prev = NULL;

    if (ptr) {
        prev = curr;
        curr = new_hp_lst_node(prev);
        curr->ptr = ptr;
    }
    return &curr;
}

void free_all_heap(void)
{
    ez_heap_t **end_ptr = place_return_list(NULL);
    ez_heap_t *end = *end_ptr;
    ez_heap_t *last_list = end->last_list;

    for (ez_heap_t *curr = NULL; end->prev; free(curr)) {
        curr = end;
        if (end->ptr) {
            free(end->ptr);
            end->ptr = NULL;
        }
        end = end->prev;
    }
    free(end->ptr);
    free(end);
    *end_ptr = (last_list) ? last_list : NULL;
}

void *mallocate(size_t size)
{
    void *value = malloc(size);

    if (!value) {
        return NULL;
    }
    place_return_list(value);
    return value;
}

void *callocate(size_t nmemb, size_t size)
{
    void *value = calloc(nmemb, size);

    if (!value) {
        return NULL;
    }
    place_return_list(value);
    return value;
}

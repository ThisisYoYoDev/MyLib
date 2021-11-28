/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** alloc_opti
*/

#include "alloc_opti.h"


ez_heap_t *new_hp_lst_node(ez_heap_t *prev)
{
    ez_heap_t *new_node = (ez_heap_t *) malloc(sizeof(ez_heap_t));

    if (!new_node) {
        return NULL;
    }
    new_node->last_list = NULL;
    new_node->prev = prev;
    if (prev) {
        new_node->last_list = prev->last_list;
    }
    return new_node;
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

void free_check(void *ptr)
{
    ez_heap_t **head = place_return_list(NULL);
    ez_heap_t *curr = *head;
    ez_heap_t *next = NULL;

    while (curr) {
        if (curr->ptr == ptr) {
            free(curr->ptr);
            if (next)
                next->prev = curr->prev;
            *head = (*head == curr) ? NULL : *head;
            free(curr);
            return;
        }
        next = curr;
        curr = curr->prev;
    }
    if (ptr)
        free(ptr);
}

void free_all_heap(void)
{
    ez_heap_t **end_ptr = place_return_list(NULL);
    ez_heap_t *end = *end_ptr;

    if (!end) {
        return;
    }
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

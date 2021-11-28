/*
** EPITECH PROJECT, 2021
** MyLib
** File description:
** alloc_opti
*/

#ifndef ALLOC_OPTI_H_
#define ALLOC_OPTI_H_

#include <stdlib.h>

typedef struct ptr_list_s {
    void *ptr;
    struct ptr_list_s *last_list;
    struct ptr_list_s *prev;
} ez_heap_t;

/* Prototype of alloc_opti.c file */
void *callocate(size_t nmemb, size_t size);
void *mallocate(size_t size);

void free_all_heap(void);

ez_heap_t **place_return_list(void *ptr);
ez_heap_t *get_hp_lst(void);
ez_heap_t *new_hp_lst_node(ez_heap_t *prev);


#endif /* !ALLOC_OPTI_H_ */

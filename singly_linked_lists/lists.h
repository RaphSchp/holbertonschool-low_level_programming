#ifndef LIST_H
#define LIST_H

/**
 * struct list_s - Structure for a linked list node
 * @str: String (data) stored in the node
 * @next: Pointer to the next node in the list
 *
 * Description: A linked list node with a string and a pointer to the next node.
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif

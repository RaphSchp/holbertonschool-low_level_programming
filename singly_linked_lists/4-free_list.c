#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees the memory occupied by a singly linked list.
 * @head: Pointer to the head of the singly linked list.
 *
 * Description: This function releases the memory occupied by each node in
 * the linked list starting from the head.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

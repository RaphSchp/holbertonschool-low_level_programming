#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to pointer to the head of the list.
 * @n: Data to be added.
 *
 * Return: Address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	last = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new_node;
	}

	new_node->prev = last;

	return (new_node);
}

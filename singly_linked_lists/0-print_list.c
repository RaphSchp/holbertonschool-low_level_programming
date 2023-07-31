#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: (Success) The number of nodes in the list.
 *         (Failure) 0 if the list is empty or NULL.
 *
 * Format: [index] str
 * If str is NULL, print [0] (nil).
 * You are allowed to use printf.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%zu] (nil)\n", count);
		else
			printf("[%zu] %s\n", count, h->str);

		count++;
		h = h->next;
	}

	return (count);
}

#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a function that frees dog
 *
 * @d: pointer to dog_t data
 *
 * Return: NULL or free memory
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

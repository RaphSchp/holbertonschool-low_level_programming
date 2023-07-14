#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value (inclusive)
 * @max: Maximum value (inclusive)
 *
 * Return: (Success) Pointer to the newly created array
 *         (Failure) NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}


#include <stdio.h>

/**
* int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of first element for which cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
			return (count);
	}
	return (-1);
}

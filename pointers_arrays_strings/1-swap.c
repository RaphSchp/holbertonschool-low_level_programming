#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: a int that become swap
 * @b: a int that become swap
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

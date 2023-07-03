#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int row;
    int sum1 = 0; /* Sum of the main diagonal */
    int sum2 = 0; /* Sum of the secondary diagonal */

    for (row = 0; row < size; row++)
    {
        sum1 += *(a + (row * size) + row);
        sum2 += *(a + (row * size) + (size - 1 - row));
    }

    printf("%d, %d\n", sum1, sum2);
}


#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers
 * @min: Valeur minimale (incluse)
 * @max: Valeur maximale (incluse)
 *
 * Return: Pointeur vers le tableau nouvellement créé
 *         NULL si min > max ou en cas d'échec de malloc
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


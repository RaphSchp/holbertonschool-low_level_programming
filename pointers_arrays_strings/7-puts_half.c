#include "main.h"
#include <stddef.h>

/**
 * puts_half - Affiche la moitié d'une chaîne de caractères.
 * @str: La chaîne de caractères.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
		length++;

	start = length / 2;
	if (length % 2 == 1)
		start++;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

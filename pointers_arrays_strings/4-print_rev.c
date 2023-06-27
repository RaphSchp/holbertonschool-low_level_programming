#include "main.h"
#include <stddef.h>

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: a string with a certain length
 */

void print_rev(char *s)
{
	while (*(s + 1) != '\0')
		s++;

	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

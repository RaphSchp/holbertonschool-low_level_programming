#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: a string with a certain length
 */
void print_rev(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

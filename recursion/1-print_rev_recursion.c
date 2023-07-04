#include "main.h"
#include <stddef.h>

/**
 * print_rev - a function that prints a string in reverse
 * @s: a string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

#include "main.h"
#include <stddef.h>

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: a string with a certain length
 */

void  puts2(char *str)
{
	int number;

	for (number = 0; str[number] != '\0'; number++)
	{
		if (number % 2 == 0)
			_putchar(str[number]);
	}
	_putchar('\n');
}

#include "main.h"
#include <stddef.h>

/**
 * rev_string - a function that reverses a string.
 * @s: a string
 */

void rev_string(char *s)
{
	int length, index;
	char *begin, *end, character;

	length = _strlen(s);
	begin = s;
	end = s + length - 1;

	for (index = 0; index < (length - 1) / 2; index++)
	{
		character = *end;
		*end = *begin;
		*begin = character;

		begin++;
		end--;
	}
}

/**
 * _strlen - a function that returns the length of a string
 * @s: a function who's been count
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}

	return (count);
}

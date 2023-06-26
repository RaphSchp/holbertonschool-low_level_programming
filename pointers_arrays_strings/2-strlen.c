#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a function who's been count
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (s)
	{
		count++;
		s++;
	}

	return (count);
}

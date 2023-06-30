#include "main.h"

/**
 * _strspn - calculates the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the accepted characters
 *
 * Return: (length) the number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;
	unsigned int i;

	while (*s && found)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				found = 1;
				break;
			}
		}

		if (found)
			s++;
	}

	return (length);
}


#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}


#include "main.h"

/**
 * string_toupper - convert all lowercase letters to uppercase
 * @str: string to convert
 *
 * Return: pointer to the converted string
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
		count++;
	}

	return (str);
}

#include "main.h"

/**
 * cap_string - capitalize all words in a string
 * @str: string to capitalize
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int count = 0;

	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;

	while (str[count] != '\0')
	{
		if (str[count] == ' ' || str[count] == '\t' || str[count] == '\n' ||
		    str[count] == ',' || str[count] == ';' || str[count] == '.' ||
		    str[count] == '!' || str[count] == '?' || str[count] == '"' ||
		    str[count] == '(' || str[count] == ')' || str[count] == '{' ||
		    str[count] == '}')
		{
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
				str[count + 1] -= 32;
		}
		count++;
	}

	return (str);
}

#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0') /* Every go again on va a la fin de dest */
		ptr++;

	/* Ca copie le plus de caracteres n de src a la fin de dest */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* On retourne NULL a la fin de dest et on le retourne comme la betty */
	*ptr = '\0';

	return (dest);
}


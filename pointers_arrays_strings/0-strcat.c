#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0') /* Aller à la fin de ma destination */
		ptr++;

	while (*src != '\0') /* Copie les caractères de src dans dest */
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0'; /* Finir la chaîne de caractères concaténée */

	return (dest); /* Retourner mon fichier de destination */
}


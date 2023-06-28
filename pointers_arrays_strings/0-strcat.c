#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 *@src: source string
 @dest: destination string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	char *pointeur = dest;

	while (*pointeur != '\0') /*Aller à la fin de ma destination*/
		pointeur++;

	while (*src != '\0') /*Copie les caractères de src dans dest*/
	{
		*pointeur = *src;
		pointeur++;
		src++;
	}

	*pointeur = '\0'; /*Finir la chaîne de caractères concaténée*/

	return dest; /*Retourner mon fichier de destination*/
}

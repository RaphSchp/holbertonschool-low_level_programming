#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 *
 * @argc: number of elements in argv
 * @argv: an array to pointers
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int index = 0;

	while (argc > index)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}

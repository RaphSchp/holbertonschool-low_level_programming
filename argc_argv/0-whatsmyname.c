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
	printf("%s\n", argv[0]);

	return (0);
}

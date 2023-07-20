#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 *
 * @name: input name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

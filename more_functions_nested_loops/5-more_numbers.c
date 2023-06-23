#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int anumber, bnumber;

	for (anumber = 1; anumber <= 10; i++)
	{
		for (bnumber = 0; bnumber <= 14; j++)
		{
			if (bnumber >= 10)
				_putchar('1');
			_putchar (bnumber % 10 + '0');
		}
		_putchar('\n');
	}
}


#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 and Do not print 2 and 4
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}

	_putchar('\n');
}

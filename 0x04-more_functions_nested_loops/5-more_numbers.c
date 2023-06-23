#include "main.h"

/**
 *more_numbers : prints 10 times the numbers, from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;
	while (i < 10)
	{
		i++;
		for (j; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
	}
	_putchar('\n');
}

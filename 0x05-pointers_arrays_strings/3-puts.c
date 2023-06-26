#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	if (str == NULL)
		return;

	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: the integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list args;
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
	{
		printf("%d%s",va_arg(args, int));
		i ? ((separator ? separator :"") : "\n");
	}

	va_end(args);
}


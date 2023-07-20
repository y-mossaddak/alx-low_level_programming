#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to be summed.
 * Return: The sum of all the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int s = 0;
	int i;

	va_list count;
	va_start(count, n);

	for (i = 0; i < n; i++)
		s += va_arg(count, int);

	va_end(count);
	return (s);
}


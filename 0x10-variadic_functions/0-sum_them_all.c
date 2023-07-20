#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to be summed.
 * @...: the integers tou sum.
 * Return: The sum of all the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	int i = n;
	va_list count;

	if (n == 0)
		return (0);
	va_start(count, n);

	while (i--)
		s += va_arg(count, int);

	va_end(count);
	return (s);
}


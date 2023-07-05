#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - Replace a text in a buffer
 * @s: string pointer
 * @n: number of caracters to replace
 * @b: the caracter to replace with
 *
 * Return: the string pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) = b;

	return (s);
}

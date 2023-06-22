#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if c is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: String source 01.
 * @s2: String source 02.
 * @n: Maximum number of characters from s2 to concatenate.
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *two_strings;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
	{
		two_strings = malloc(sizeof(char) * (i + j));
		if (two_strings == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		two_strings = malloc(sizeof(char) * (i + n));
		if (two_strings == NULL)
		{
			return (NULL);
		}
	}

	for (k = 0; k < i; k++)
		two_strings[k] = s1[k];

	if (n >= j)
	{
		for (i = 0; i < j; k++, i++)
			two_strings[k] = s2[i];
	}
	else
	{
		for (i = 0; i < n; k++, i++)
			two_strings[k] = s2[i];
	}

	two_strings[k] = '\0';

	return (two_strings);
}

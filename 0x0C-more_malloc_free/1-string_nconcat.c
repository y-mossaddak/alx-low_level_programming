#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length1, length2, a, b, c, i, j;
	length1 = strlen(s1);
	length2 = strlen(s2);
	a = length1 + length2;
	b = length1 + n;
	char *two_strings;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= length2)
	{
		two_strings = malloc(a + 1);
		if (two_strings == NULL)
		{
			free(two_strings);
			return (NULL);
		}
	}
	else
	{
		two_strings = malloc(b + 1);
		if (two_strings == NULL)
		{
			free(two_strings);
			return (NULL);
		}
	}
	for (c = 0; c < length1; c++)
		two_stringers[c] = s1[c];

	if (n >= length2)
	{
		for (i = 0; i < length2; c++; i++)
			two_strings[c] = s2[i];
	}
	else
	{
		for (i = 0; i < n; c++; i++)
			two_strings[c] = s2[i];

		return (two_strings);
	}

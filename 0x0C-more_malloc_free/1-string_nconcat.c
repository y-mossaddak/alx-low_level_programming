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
	unsigned int len_s1 = 0, len_s2 = 0, i, j;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
	{
		two_strings = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (two_strings == NULL)
		{
			return NULL;
		}
	}
	else
	{
		two_strings = malloc(sizeof(char) * (len_s1 + n + 1));
		if (two_strings == NULL)
		{
			return NULL;
		}
	}
	for (i = 0; i < len_s1; i++)
		two_strings[i] = s1[i];
	if (n >= len_s2)
	{
		for (j = 0; j < len_s2; j++, i++)
			two_strings[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++, i++)
			two_strings[i] = s2[j];
	}
	two_strings[i] = '\0';
	return two_strings;
}


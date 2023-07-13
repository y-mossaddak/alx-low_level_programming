#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat twoo strings
 * @s1: String source 01
 * @s2: String source 02
 *
 * Return: string pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	unsigned int i, j, k, limit;

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
	two_strings = malloc(sizeof(char)*(i + j + 1);
        if(two_strings == NULL)
            {
			free(two_strings);
			return (NULL);
            }
	}
	else
	{
	two_strings = malloc(sizeof(char) * (i + n + 1));
	if (two_strings == NULL)
	{
		free(two_strings);
		return (NULL);
	}
	}
	for (k = 0; k < i; k++)
	two_stringers[k] = s1[k];

	if (n >= j)
	{
	for (i = 0; i < j; k++; i++)
		two_strings[k] = s2[i];
	}
	else
	{
	for (i = 0; i < n; k++; i++)
		two_strings[k] = s2[i];
	}
	return (two_strings);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array: creates an array of chars
 * @size: space reserved in memory
 * @c: character
 * description: creates an array of chars, and initializes it with a specific char.
 * Returns: A adress of array value
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *A = malloc(size * sizeof(char));
	if (size == 0)
	{
		return NULL;
	}
	
	if (A == NULL)
	{
		return NULL;
	}
	else
		{
		for (; i < size;)
		{
			i++;
			A[i] = c;
		}
		A[size] = '\0';
		}
	return A;
}

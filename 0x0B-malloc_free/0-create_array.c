#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array: creates an array of chars
 * @size: space reserved in memory
 * @c: character
 *
 * Returns: address of the reserved memory
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		printf("Failed to allocate memory. Size must be greater than zero.\n");
		return NULL;
	}

	char *A = malloc(size * sizeof(char));
	if (A == NULL)
	{
		printf("Failed to allocate memory.\n");
		return NULL;
	}

	for (unsigned int i = 0; i < size; i++)
	{
		A[i] = c;
	}

	return A;
}

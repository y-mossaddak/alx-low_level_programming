#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * @create_array : creates an array of chars
 * @size : space reserved in memory
 * @c : character
 * return : adress reserved in memory
 */

char *create_array(unsigned int size, char c)
{
	if (size == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	int i = 0;
	char A[size];
	for (i; i < size; i++)
	{
		A[i] = i + 1;
	}

	return (create_array);
}

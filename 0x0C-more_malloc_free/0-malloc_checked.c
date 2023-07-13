#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 * Return: Pointer to the allocated memory
 *         Exit with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}

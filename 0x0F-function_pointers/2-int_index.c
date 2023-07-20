#include "function_pointers.h"

/**
 * int_index - find index
 * @array: array to map
 * @size: size of array
 * @cmp: function to search
 * Return: Void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && size && cmp)
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}

	return (-1);
}

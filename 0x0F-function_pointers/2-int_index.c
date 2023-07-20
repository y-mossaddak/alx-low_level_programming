#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The size of the array.
 * @cmp: A pointer to the function to compare values.
 * Return: The index of the first element for which the cmp function does not
 * return 0, -1 if no element matches or if size is 0 or negative.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp && size > 0)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				return (j);
		}
	}

	return (-1);
}

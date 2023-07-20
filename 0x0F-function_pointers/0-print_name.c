#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A pointer to a function that will print the name
 * Description: This function takes a name and a function pointer as parameters
 *              and calls the function pointed to by the function pointer to
 *              print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}																																																																			

#include "function_point.h
 /**
  4  * print_name - Prints a name using a function pointer
  5  * @name: The name to be printed
  6  * @f: A function pointer to the function that will print the name
  7  * return : void
  8  */	
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}																																																																			

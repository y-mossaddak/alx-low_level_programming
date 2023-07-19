#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}

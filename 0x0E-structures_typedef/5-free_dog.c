#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog struct
 * @d: pointer to the dog structre
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}


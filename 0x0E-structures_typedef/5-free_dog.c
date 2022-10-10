#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Dog object
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function to initialize a variable of type struct dog
 * @d: Dog object
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float *age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_dog - Print a struct
 * @d: Dog object
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name)  ? d->name : "(nil\n)");
		printf("Age: %f\n", (d->age) ? d->age : "(nil\n)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil\n)");
	}
}



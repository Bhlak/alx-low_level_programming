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
	char *name, *owner;
	int age;

	if (d != NULL)
	{
		printf("Name: ");
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");
		printf("Age: ");
		if (d->age != NULL)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");
		printf("Owner: ");
		if (d->owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}

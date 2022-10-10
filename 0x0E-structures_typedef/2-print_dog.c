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
		printf("Name: %s", (*d).name);
		printf("Age: %f", (*d).age);
		printf("Owner: %s", (*d).owner);
	}
}

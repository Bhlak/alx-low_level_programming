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
		printf("Name: %s", ((*d).name)  ? (*d).name : "(nil)");
		printf("Age: %f", ((*d).age) ? (*d).age : "(nil)");
		printf("Owner: %s", (*d).owner) ? (*d).owner : "(nil)");
	}
}

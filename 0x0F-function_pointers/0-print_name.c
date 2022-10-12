#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: Pointer to name array
 * @f: Pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

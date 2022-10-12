#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to name array
 * @f: Pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}

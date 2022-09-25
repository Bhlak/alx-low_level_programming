#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array
 * @a: Intger array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%i, ", a[i]);
		i++;
	}
	printf("%i\n", a[i]);
}

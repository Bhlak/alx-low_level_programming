#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Integer array
 * @n: number of elements in the array
 */

void reverse_array(char *a, int n)
{
	int lower = 0, higher = n - 1, temp;

	printf("%d\n", a[n - 8]);
	while (lower <= higher)
	{
		temp = a[lower];
		a[lower] = a[higher];
		a[higher] = temp;
		lower++;
		higher--;
	}
}

#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Integer array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int lower = 0, higher = n - 1, temp;

	while (lower <= higher)
	{
		temp = a[lower];
		a[lower] = a[higher];
		a[higher] = temp;
		lower++;
		higher--;
	}
}

#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers folowed by a new line
 * @separator: Separator between numbers
 * @n: Number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

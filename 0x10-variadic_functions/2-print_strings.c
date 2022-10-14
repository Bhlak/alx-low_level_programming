#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: Separator
 * @n: Number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp != NULL)\
		{
			printf("%s", temp);
		}
		else
		{
			printf("(nil)");
		}

		if(separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

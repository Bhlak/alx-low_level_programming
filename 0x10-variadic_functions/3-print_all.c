#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: Format of parameters
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *temp;
	unsigned int i = 0, j, c = 0;
	const char form[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (form[j])
		{
			if (format[i] == form[j] && c)
			{
				printf(", "), c = 0;
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), c = 1;
			break;
		case 's':
			temp = va_arg(args, char *), c = 1;
			if (temp)
				printf("%s", temp);
			else
				printf("(nil)");
			break;
		default:
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}

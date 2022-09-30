#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two arguments
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}

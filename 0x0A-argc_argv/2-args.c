#include <stdio.h>

/**
 * main - Prints all arguments received
 * @argc: Number of arguments
 * @argv: Pointer to array of argument strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			printf("%s\n", argv[count++]);
		}
	}
	return (0);
}

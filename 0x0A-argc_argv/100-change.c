#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints min number of coins to make change for an amoubt of money
 * @argc: Number of arguments passed
 * @argv: Array of strings that are arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num, total = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	if (num >= 25)
	{
		total += num / 25;
		num = num % 25;
	}
	if (num >= 10)
	{
		total += num / 10;
		num = num % 10;
	}
	if (num >= 5)
	{
		total += num / 5;
		num = num % 5;
	}
	if (num >= 2)
	{
		total += num / 2;
		num = num % 2;
	}
	if (num >= 1)
	{
		total += num;
	}
	printf("%d\n", total);
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description - Prints whether a random number is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char outp[8];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	else
	{
		printf("%d is negative\n", n);
		return (0);
	}
}

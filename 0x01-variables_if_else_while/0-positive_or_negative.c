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
		outp = "positive";
	}
	else if (n == 0)
	{
		outp = "zero";
	}
	else
	{
		outp = "negative";
	}
	printf("%d is %s\n", n, outp);
	return (0);
}

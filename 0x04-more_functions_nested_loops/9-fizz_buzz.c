#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int a = 1;

	while (a < 101)
	{
		if (a % 3 == 0)
		{
			if (a % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}

		if (a != 100)
		{
			printf(" ");
		}
		a++;
	}
	putchar('\n');
}

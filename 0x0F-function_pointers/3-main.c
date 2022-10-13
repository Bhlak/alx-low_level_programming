#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Pointer to array of string arguments
 * Return: 0(Success)
 */

int main(int argc, char **argv)
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	oprt = get_op_func(argv[2]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

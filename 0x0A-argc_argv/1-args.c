#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d", argc - 1);
	return (0);
}

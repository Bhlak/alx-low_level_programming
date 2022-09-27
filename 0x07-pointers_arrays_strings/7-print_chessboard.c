#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: Array of arrays
 */

void print_chessboard(char (*a)[8])
{
	int aa = 0, b;

	while (aa < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[aa][b]);
			b++;
		}
		_putchar('\n');
		aa++;
	}
}

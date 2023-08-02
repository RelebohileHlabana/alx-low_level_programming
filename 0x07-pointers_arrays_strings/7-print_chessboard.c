#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int p;

	for (k = 0; k < 8; k++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[k][p]);
		_putchar('\n');
	}
}

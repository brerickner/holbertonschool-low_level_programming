#include "holberton.h"

/**
 * print_chessboard - char (*a) [8]
 * @a: character being printed
 * description: function that prints the chessboard
 * Return: void
 */

void print_chessboard(char(*a)[8])
{
	int i, i2;

		for (i = 0; a[i][7]; i++)
		{
			for (i2 = 0; i2 < 8; i2++)

			_putchar(a[i][i2]);

			_putchar('\n');

		}
}

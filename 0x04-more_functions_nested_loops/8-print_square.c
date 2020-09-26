#include "holberton.h"

/**
* print_square - int size
* description: prints square followed by newline
* @size: size of square
* Return: void
*/

void print_square(int size)
{
int row;
int col;

for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}

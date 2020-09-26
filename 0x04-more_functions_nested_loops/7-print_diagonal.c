#include "holberton.h"

/**
* print_diagonal - int n
* description: print diagnal line in command line
* @n: number of characters
* Return: void
*/

void print_diagonal(int n)
{
int ln, spc;

for (ln = 0; ln < n; ln++)
{
for (spc = 0; spc < ln; spc++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}

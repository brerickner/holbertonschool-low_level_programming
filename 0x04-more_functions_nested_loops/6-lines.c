#include "holberton.h"

/**
* print_line - print straight line
* description: print straight line
* @n: character
*/

void print_line(int n)
{
int line;

if (n > 0)
{
for (line = 1; line <= n; line++)
_putchar('_');
}

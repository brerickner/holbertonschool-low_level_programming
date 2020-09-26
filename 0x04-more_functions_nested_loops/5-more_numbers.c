#include "holberton.h"

/**
* more_numbers - numbers on numbers
* description: row of numbers
*/

void more_numbers(void)
{
int a, r;

for (r = 0; r <= 9; r++)
{
for (a = 0; a <= 14; a++)
{
if (a > 9)
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
_putchar('\n');
}
}

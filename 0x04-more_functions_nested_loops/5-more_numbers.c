#include "holberton.h"

/**
* more_numbers - numbers on numbers
* description: prints 10 times the numbers
* Return: void
*/

void more_numbers(void)
{
int i;
char k;

for (k = 48; k <= 57; k++)
{
  _putchar('\n')
for (i = 0; i <= 14; i++)
_putchar(k);
_putchar('\n');
}
}

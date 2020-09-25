#include "holberton.h"

/**
* print_numbers - void
*
* description: prints 0 thru 9
* Return: 0 if successful
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}

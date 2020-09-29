#include "holberton.h"

/**
* puts_half - char *str
* @str: string to print
*
* description: print 2nd half of string
* Return: void
*/

void puts_half(char *str)
{
	int string, size;

	for (string = 0; str[string] < size / 2; string++)
		_putchar(str[string]);
	_putchar('\n');
}

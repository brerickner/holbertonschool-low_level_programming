#include "holberton.h"

/**
 * puts2 - char *str
 * @str: string to be printed
 *
 * description: function that prints every other character of string
 * Return: void
 */

void puts2(char *str)
{
	int string;
	char x = '\n';

	string = 0;
	while (str[string] != '\0')
	{
	_putchar(str[string]);
	string += 2;
	}
	_putchar(x);
}

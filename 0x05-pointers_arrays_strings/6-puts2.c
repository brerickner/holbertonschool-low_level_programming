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


	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar(x);
}

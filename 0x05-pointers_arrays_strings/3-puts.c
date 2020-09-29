#include "holberton.h"

/**
* _puts - char *str
* @str: string to be printed
*
* description: function that prints a string to stdout
* Return: void
*/

void _puts(char *str)
{
	int string;
	char x = '\n';

	for (string = 0; str[string] != '\0'; string++)

	_putchar(str[string]);
	_putchar(x);
}

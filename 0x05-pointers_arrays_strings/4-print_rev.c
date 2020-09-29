#include "holberton.h"

/**
* print_rev - char *s
* @s: string to be printed in reverse
*
* description: function that prints string in reverse
* Return: void
*/

void print_rev(char *s)
{
	int string = 0;
	char x = '\n';

	while(s[string] != '\0')

	for(string -= 1; s[string] >= 0 ; string++)
	_putchar(s[string]);
	_putchar(x);
}

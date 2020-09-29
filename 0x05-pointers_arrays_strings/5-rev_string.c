#include "holberton.h"

/**
 * rev_string - char *s
 * @s: string to be reversed
 *
 * description: function that reverses a string
 * Return: void
 */

void rev_string(char *s)
{
	int string;
	char x = '\n';

	for (string = '\0'; s[string] >= 0; string--)
		_putchar(s[string]);
	_putchar(x);
}

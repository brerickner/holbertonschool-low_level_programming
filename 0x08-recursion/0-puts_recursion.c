#include "holberton.h"

/**
 * _puts_recursion - char *s
 * @s: pointer to first char of string
 * description: function that prints a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion((s) + 1);
	}
	else
		_putchar('\n');
}

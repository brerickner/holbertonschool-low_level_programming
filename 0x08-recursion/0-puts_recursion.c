#include "holberton.h"

/**
 * _puts_recursion - char *s
 * @s: pointer to first char of string
 * description: function that prints a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s) /* if pointed to first char of string */
	{
		_putchar(*s); /* print first character */
		_puts_recursion((s) + 1) ;/* move up 1 byte from &s */
					 /* and continue while true and no */
					 /* longer char in string */
	}
	else  /* print newline when pointer no longer pointing to memory address
		 in string */
		_putchar('\n');
}

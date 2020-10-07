#include "holberton.h"

/**
 * _print_rev_recursion - char *s
 * @s: string being printed
 * Description: function that prints a string in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s) /* if pointing to char in string */
	{
		_print_rev_recursion((s) + 1); /* blanket string w/ pointers */
		_putchar(*s); /* start printing from most recent position */
			      /* pointed to in stack(words?) */
	}
}

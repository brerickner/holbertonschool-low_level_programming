#include "holberton.h"

/**
 * _strlen_recursion - char *s
 * @s: string that's being measured for it's length
 * Description: function that measures the length of a string, recursively
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion((s) + 1);
	}
	return (length);
}

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
/**
 * is_palindrome - char *s
 * description: function to test if string is a palindrome
 * @s: the string we're testing if palindrome
 * Return: 1 if it is a palindrom. else 0
 */

int is_palindrome(char *s)
{
	if (*s == *s)
	{
		return (1);
	}
	return (0);
}

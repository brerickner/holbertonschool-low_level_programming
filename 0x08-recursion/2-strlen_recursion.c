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

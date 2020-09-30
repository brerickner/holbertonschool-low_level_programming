#include "holberton.h"

/**
 * rev_string - char *s
 * @s: characters of string
 *
 * description: function that reverses a string
 * Return: void
 */

void rev_string(char *s)
{
	int count, end;
	char buff;

	count = 0;

	while (s[count] != '\0')
	count++;
	count--;

	for (end = 0; end <= count; end++, count--)
	{
		buff = s[end];
		s[end] = s[count];
		s[count] = buff;
	}

}

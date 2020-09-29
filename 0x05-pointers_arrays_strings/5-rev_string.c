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
	int begin, end;
	char buff;

	begin = 0;

	while (s[begin] != '\0')
	begin++;
	begin--;

	for (end = 0; end <= begin; end++, begin--)
	{
		buff = s[end];
		s[end] = s[begin];
		s[begin] = buff;
	}

}

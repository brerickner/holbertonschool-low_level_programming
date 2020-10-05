#include "holberton.h"

/**
 * *_strchr - char *s, char c
 * @s: string being searched
 * @c: character
 * description: function that locates a character in a string
 * Return: pointer to first occurance, if c found. else - NULL
*/
char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

#include "holberton.h"

/**
 * *cap_string - char *s
 * @s: string
 *
 * description: capitalizes all words of a string
 * Return: s
 */
char *cap_string(char *s)
{
	int i, delt = 'a' - 'A';

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= delt;
		return (s);
	}
}

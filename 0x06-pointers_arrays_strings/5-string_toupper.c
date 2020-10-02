#include "holberton.h"

/**
 * *string_toupper - char *s
 * @s: string
 *
 * description: function that changes all lower to uppercase
 * Return: s
 */
char *string_toupper(char *s)
{
	int i, delt = 'a' - 'A';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= delt;
	}
	return (s);
}

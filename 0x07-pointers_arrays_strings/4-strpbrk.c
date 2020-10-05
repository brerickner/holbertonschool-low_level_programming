#include "holberton.h"
/**
 * *_strpbrk - char *s, char *accept
 * @s: string to be searched
 * @accept: bytes being searched
 * description: function that searches a string for a set of bytes
 * Return: pointer to matched byte. else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}

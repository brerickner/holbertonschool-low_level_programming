#include "holberton.h"

/**
 * _strspn - char *s, char *accept
 * @s: string being searched
 * @accept: prefix being measured
 * description: function that gets the length of a prefix substring
 * Return: number of bytes in initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}

#include "holberton.h"

/**
 * *rot13 - char *s
 * @s: string being encoded
 * description: function that encodes a string using rot13
 * Return: answer
 */
char *rot13(char *s)
{
	int i;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdevghijklmnoqrstuvwxyz";
	char *rot_13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrituvwxyzabdefghijklm";
	char *answer = s;

	while (*s)
	{
		for (i = 0; alpha[i]; i++)
		{
			if (*s == alpha[i])
				*s = rot_13[i];
		}
		s++;
	}
	return (answer);
}

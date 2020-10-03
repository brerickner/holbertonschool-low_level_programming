#include "holberton.h"

/**
 * *rot13 - char *s
 * @s: string being encoded
 * description: function that encodes a string using rot13
 * Return: s
 */
char *rot13(char *s)
{
	int i, i2;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot_13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxwzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if (alpha[i2] == s[i])
				s[i] = rot_13[i2];
			break;
		}
	}
	return (s);
}

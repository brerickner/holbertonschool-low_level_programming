#include "holberton.h"

/**
 * *leet - char *s
 * @s: string
 * description: encode string into 1337
 * Return: answer
 */

char *leet(char *s)
{
	int i;
	char *alpha = "aAeEoOtTlL";
	char *num = "4433007711";
	char *answer = s;

	while (*s)
	{
		for (i = 0; alpha[i]; i++)
		{
			if (*s == alpha[i])
				*s = num[i];
		}
		s++;
	}
	return (answer);
}

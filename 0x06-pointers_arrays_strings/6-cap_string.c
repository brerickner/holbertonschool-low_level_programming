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
	int i, i2;
	int delt = 'a' - 'A';
	char spesh[] = "\t\n;,!\"() {}.?";

	for (i = 0; spesh[i]; ++i)
	{
		for (i2 = 0; spesh[i2] < s[i]; i2++)
		{
			if (s[i] == spesh[i])
			{
				i++;
				s[i] -= delt;
				s[i] = spesh[i];
			}
		}
	}
	return (s);
}

#include "holberton.h"

/**
 * *_strncat - char *dest, char *src, int n
 * @dest: pointer to char string
 * @src: pointer to char string
 * @n: integer
 * description: function that concatenates two strings.
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	for (s = 0; dest[s] != '\0'; s++)
		;
	for (i = 0; src[i] != '\0'; i++, s++)
	{
		if (i < n)
			dest[s] = src[i];
		}
		dest[s] = '\0';
		return (dest);
}

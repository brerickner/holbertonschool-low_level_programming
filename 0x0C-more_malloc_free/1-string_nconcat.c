#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - char *s
 * @s: string that is being measured
 *
 * description: function that returns lenth of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount] != '\0')
		charCount++;

	return (charCount);
}
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
	int i, i2;

	for (i2 = 0; dest[i2] != '\0'; i2++)
		;
	for (i = 0; src[i] != '\0'; i++, i2++)
	{
		if (i < n)
			dest[i2] = src[i];
	}
	dest[i2] = '\0';
	return (dest);
}
/**
 * *string_nconcat - char *s1, char *s2, unsigned int n
 * @s1: pointer to memory that was allocated
 * @s2: string being appended to S1
 * @n: number of bytes to add from s2
 * description: function that allocates memory for an array, using malloc
 * Return: S1 with n bytes of S2 appended plus null terminated. Else NULL if
 * function fails
 */
char *string_nconcat(char *dest, char *src, unsigned int n)
{
	char *buffer;

	buffer = malloc(_strlen(s1, s2, n));

	return (s1);
}

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
#include "holberton.h"

/**
 * *_strncat - char *dest, char *src, int n
 * @dest: pointer to char string
 * @src: pointer to char string
 * @n: integer
 * description: function that concatenates two strings.
 * Return: pointer to string dest
 */
char *_strncat(char *s1, char *s2, int n)
{
	int i, i2;

	for (i2 = 0; s1[i2] != '\0'; i2++)
		;
	for (i = 0; s2[i] != '\0'; i++, i2++)
	{
		if (i < n)
			s1[i2] = s2[i];
	}
	s1[i2] = '\0';
	return (s1);
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
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);

	if (len_s1 >= 1 || len_s2 >= 1)
	{
		buffer = malloc(len_s1);
		for (len_s1 = ; buffer[
	}

	if (
	return (s1);
}

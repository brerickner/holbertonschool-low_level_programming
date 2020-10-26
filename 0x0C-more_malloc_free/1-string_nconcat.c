#include "holberton.h"
#include <stdlib.h>

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
	unsigned int len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1]; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2]; len_s2++)
	{
		if (n >= len_s2)
			n = len_s2;
	}
	buffer = malloc(sizeof(char) * len_s1 + n + 1);
	if (buffer == NULL)
		return (NULL);

	buffer[len_s2] = s2[len_s1];

	buffer[len_s2] = '\0';
	return (buffer);
}

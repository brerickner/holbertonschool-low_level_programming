#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - char *str
 * @str: string given
 * description: function that returns pointer to a new allocated memory,
 * which contains copy of str given in parameter
 * Return: NULL if insufficient memory or str is NULL. Else pointer to dupl.
 */
char *_strdup(char *str)
{
	char *buffer;
	int index;

	if (str == NULL)
		return (NULL);

	for (index = 0; index != '\0'; index++)
		;
	buffer = malloc(index * sizeof(char) + 1);

	if (buffer == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		buffer[index] = str[index];

	buffer[index] = '\0';
	return (buffer);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - unsigned int size, char c
 * @size: size of an unsigned int
 * @c: specific char that initializes array of characters
 * description: function that creates an array of chars started by a specific c
 * Return: NULL if size is 0 of fails. Else a pointer to an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}
	return (arr);
}

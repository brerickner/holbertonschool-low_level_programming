#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - int min, int max
 * @min: min number
 * @max: max number
 * description: function that creates an array of integers
 * Return: pointer to new array. Else NULL when min is less than max
 * or malloc fails.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}

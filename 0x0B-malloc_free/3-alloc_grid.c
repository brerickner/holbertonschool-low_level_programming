#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - int width, int height
 * @width: width of grid
 * @height: length of grid
 * description: function that returns a pointer to a 2 dimentional
 * array of integers
 * Return: NULL on failure or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int ht, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (ht = 0; ht < height; ht++)
	{
		arr[ht] = malloc(sizeof(int) * width);

		if (arr[ht] == NULL)
		{
			for (; ht >= 0; ht--)
				free(arr[ht]);

			free(arr);
			return (NULL);
		}
	}

	for (ht = 0; ht < height; ht++)
	{
		for (w = 0; w < width; width++)
			arr[ht][w] = 0;
	}
	return (arr);
}

#include "search_algos.h"

/**
 * linear_search- int *array, size_t size, int value
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * description: function that searches for a value in an array of integers
 * using the Linear search algorithm
 * Return: first index where value is located. NULL if value is not present
 * in array. -1 if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[(int)index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}

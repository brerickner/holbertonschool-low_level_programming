#include "search_algos.h"

/**
 * printy_array - int *array, int low, int high
 * @array: array being searched through
 * @low: first number in array
 * @high: last number in array
 * description: prints the array being searched
 * Return: void
 */

void printy_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (; low < high; low++)
		printf("%d, ", array[(int)low]);

	printf("%d\n", array[(int)low]);
}

/**
 * binary_search - int *array, size_t size, int value
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * description: function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * Return: first index where value is located. NULL if value is not present
 * in array. -1 if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = (size - 1);
	size_t mid;

	if (!array)
		return (-1);

	/* Stop when low meets size */
	for (; low <= high;)
	{
		printy_array(array, low, high);

		/* check middle of array */
		mid = ((int)low + (int)high) / 2;

		/* in right half */
		if (array[(int)mid < value])
			low = mid + 1;

		/* in left half */
		else if (array[(int)mid > value])
			high = (mid - 1);

		/* found it */
		else
			return (mid);
	}
	return (-1);
}


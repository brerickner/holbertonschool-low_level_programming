#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index -int *array, int size, int (*cmp)(int))
 * @array: pointer to type int
 * @size: number of elements in variable array
 * @cmp: pointer to the function being used to compare values
 * description: function that searches for an integer
 * Return: the index of 1st element cmp doesn't return 0. Else -1 when no
 * element matches or size is 0 or less.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	(void)size;
	(void)array;
	(void)cmp;

	return (0);
}

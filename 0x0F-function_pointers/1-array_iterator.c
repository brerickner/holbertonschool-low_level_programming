#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - int *array, size_t size, void (*action)(int))
 * @array: pointer to an array of ints
 * @size: size of the array
 * @action: pointer to the function needed
 * description: funtion that executes a function given as a parameter, on
 * each element of an integer array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (index = 0; index < size; ++index) /*start at 0 then index*/
	{
		action(array[index]);
	}
}

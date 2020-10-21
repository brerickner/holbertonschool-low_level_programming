#include "function_pointers.h"
#define NULL 0

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

	if (array == NULL || action == NULL)
		return;

	for (elem = 0; array[elem]; elem++)
		action(array[size]);
}

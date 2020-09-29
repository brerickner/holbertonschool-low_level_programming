#include "holberton.h"

/**
* swap_int - int *a, int *b
* @a: first integer
* @b: second integer
*
* description: function that swaps the values of 2 integers
* Return: void.
*/

void swap_int(int *a, int *b)
{
	*a = b;
	*b = &a;
}

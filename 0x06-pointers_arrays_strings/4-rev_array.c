#include "holberton.h"

/**
 * reverse_array - int *a, int n
 * @a: pointer to integer
 * @n: number of elements in an array
 * description: reversing integers of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int ninja, buff;

	n = n - 1;

	for (ninja = 0; ninja < n; ninja++, n--)
	{
		buff = a[ninja];

		a[ninja] = a[n];
		a[n] = buff;
	}
}

#include "holberton.h"
#include <stdio.h>

/**
* print_array - int *a, int n
* @a: array to print
* @n: num of elements of array to be printed
*
* description: function prints number of elements in an array of integers
* Return: void
*/

void print_array(int *a, int n)
{
	int ninja;

	for (ninja = 0; ninja < n; ninja++)
	{
		printf("%d", a[ninja]);
		if (ninja < (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

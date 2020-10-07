#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - int *a, int size
 * @a: start point for matrix of integers
 * @size: size of the matrix
 * description: function to print sum of the two diagnals of an integer matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}

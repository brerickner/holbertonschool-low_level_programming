#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - unsigned int b
 * @b: amount of memory to allocate
 * description: funtion that allocates memory using malloc
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}

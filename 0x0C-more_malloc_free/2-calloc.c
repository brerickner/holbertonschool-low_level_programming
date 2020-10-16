#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - unsigned int nmemb, unsigned int size
 * @nmemb: # of elements to read
 * @size: size of each element in byte
 * description: funtion that allocates memeory for an array, using malloc
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	unsigned int arrSize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrSize = nmemb * size;

	p = malloc(sizeof(char) * (arrSize));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < (arrSize); i++)
		p[i] = 0;
	return (p);
}

#include "holberton.h"

/**
 * *_memset - char *s, char b, unsigned int n
 * @s: memory area
 * @b: constant byte value
 * @n: number of bytes to set to value
 * description: function tht fills memory with a constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}

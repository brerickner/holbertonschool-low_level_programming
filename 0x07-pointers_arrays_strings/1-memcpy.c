#include "holberton.h"

/**
 * *_memcpy - char *dest, char *src, unsigned int n
 * @dest: pointer to memory area @src is being copied
 * @src: buffer to copy characters from
 * @n: number of bytes from memory area src to memory area dest
 * description: function that copies memory area
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}

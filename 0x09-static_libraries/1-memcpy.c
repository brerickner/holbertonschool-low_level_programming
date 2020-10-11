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
	unsigned int i;
	char *destination = dest;
	char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}

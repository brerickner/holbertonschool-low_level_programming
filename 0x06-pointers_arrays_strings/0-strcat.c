#include "holberton.h"

/**
 * *_strcat- char *dest, char *src
 * @dest: final string
 * @src: string to be appeneded
 * description: Append src string to dest string
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i, i2, i3;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (i2 = 0; src[i2] != '\0'; i2++)
		;

	for (i3 = 0; i3 <= i2; i3++)
	{
		*(dest + (i + i3)) = *(src + i3);
	}
	return (dest);
}

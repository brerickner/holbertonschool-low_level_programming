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
	int i, i2;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (i2 = 0; src[i2] != '\0'; i2++)
		;
	i = 0;

	*dest = dest[i] + src[i2];

	return (dest);

}

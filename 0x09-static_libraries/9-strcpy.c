#include "holberton.h"

/**
* *_strcpy - char *dest, char *src
* @dest: buffer
* @src: string being copied
* description: copies what src points
* Return: *dest
*/

char *_strcpy(char *dest, char *src)
{
	int ninja;

	for (ninja = 0; src[ninja] != '\0'; ++ninja)
	{
		dest[ninja] = src[ninja];
	}
	dest[ninja] = '\0';
	return (dest);
}

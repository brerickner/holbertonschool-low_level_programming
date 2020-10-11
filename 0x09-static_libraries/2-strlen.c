#include "holberton.h"

/**
* _strlen - char *s
* @s: string that is being measured
*
* description: function that returns lenth of string
* Return: length of string
*/

int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount] != '\0')
	{
		charCount++;

	}

	return (charCount);
}

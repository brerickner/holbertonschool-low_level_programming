#include "holberton.h"

/**
* puts_half - char *str
* @str: string to print
*
* description: print 2nd half of string
* Return: void
*/

void puts_half(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{

		if (length % 2 != 0)
		{
			length++;
		}

	for (length = (length / 2); str[length] != '\0'; length++)
	{
	_putchar(str[length]);
	}

	_putchar('\n');
}
}

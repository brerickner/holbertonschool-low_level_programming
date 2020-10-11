#include "holberton.h"

/**
* _isdigit - int c
* @c: integer being tested
*
* description: checks if character is a digit 0 thru 9
* Return: 1 if c is digit, else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);

	else
	return (0);
}

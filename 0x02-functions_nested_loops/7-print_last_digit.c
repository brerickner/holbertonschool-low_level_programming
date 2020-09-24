#include "holberton.h"

/**
* print_last_digit- int
*
* @k: last digit of number
* description: return last digit
* Return: value of last digit
*/

int print_last_digit(int k)
{
	int i;

	i = k % 10;
{

	if (i < 0)
{
	_putchar('0' - i);

	return (-i);
}
	else
	_putchar('0' + i);

	return (i);
}

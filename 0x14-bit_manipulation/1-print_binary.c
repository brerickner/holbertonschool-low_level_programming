#include "holberton.h"
/**
 * print_binary - unsigned long int n
 * @n: number to convert to binary
 * description: function that prints binary version of a #
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int index;

	for (index = 1 << 15; index > 0; index /= 2)
		(n & index) ? _putchar('1'): _putchar('0');
}

#include "holberton.h"
#include <stdlib.h>
/**
 * get_bit - unsigned long int n, unsigned int index
 * @n: value of bit
 * @index: index of bit you want to get
 * description: function that returns the value of a bit at index
 * Return: value of bit at index. Else -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 1;

	if (index > 31)
		return (-1);
	if (index == 1)
	{
		bit = 1;
	}
	if (index == 0)
	{
		bit = 0;
	}
	(n & index) ? bit = 0 : bit;

	return (bit);
}

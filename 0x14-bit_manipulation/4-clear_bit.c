#include "holberton.h"
/**
 * clear_bit - unsigned long int *n, unsigned int index
 * @n: number to manipulate bit in
 * @index: index to find bit to manipulate
 * description: function that sets the value of bit to 0 at index
 * Return: 1 if it worked. Else -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & (1 << index);
	return (-1);
}

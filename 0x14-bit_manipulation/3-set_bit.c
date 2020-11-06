#include "holberton.h"
/**
 * set_bit - unsigned long int *n, unsigned int index
 * @n: value of bit
 * @index: index of bit wanting to set
 * description: function that sets the value of a bit to 1 at a given index
 * Return: 1 if it worked. Else -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 31)
		return (-1);

	*n ^= (1 << index);


	return (1);
}

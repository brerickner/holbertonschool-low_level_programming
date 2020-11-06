#include "holberton.h"
/**
 * flip_bits - unsigned long int n, unsigned long int m
 * @n: first number being flipped
 * @m: second number being flipped
 * description: function that returns the # of bits needing switched to get
 * from # n to # m
 * Return: # of bits it takes to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitFlips;

	for (bitFlips = 0; ((n ^ m) > 0); bitFlips += ((n ^ m) & 1))
		(n ^ m) = (n ^ m) >> 1;
	return (bitFlips);
}

#include "holberton.h"

/**
 * factorial - int n
 * @n: given number
 * description: function that prints factorial of a given number
 * Return: -1 if n less than 0. 1 if n is 0. else factorial of n.
 */

int factorial(int n)
{
	int product = n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	       product *= factorial((n) - 1);
	return (product);
}

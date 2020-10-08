#include "holberton.h"

/**
 * _pow_recursion - int x, int y
 * @x: first integer
 * @y: second integer
 * description: function that returns value of x raised to power of y
 * Return: -1 if y is less than 0. 1 if y is 0. else result
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		result *= _pow_recursion((x), (y) - 1);

	return (result);
}

#include "holberton.h"

/**
 * is_prime_number - function
 * description: function to determine if a number is prime
 * @n: number to test
 * Return: prime or not
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (the_prime(n, x));
}

/**
 * the_prime - my function
 * description: prime number test
 * @n: number to pass
 * @x: variable
 * Return: 1, 0
 */

int the_prime(int n, int x)
{
	if (x == n)
		return (1);

	if (n % x == 0)
		return (0);
	else
		return (the_prime(n, x + 1));
}

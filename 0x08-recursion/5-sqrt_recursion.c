#include "holberton.h"

 /**
 * _sqrt_recursion - int n
 * description: function that returns natural sq root of a number
 * @n: natural number
 * Return: squirt
 */

int _sqrt_recursion(int n)
{
	int squirt = 0;

	return (capture_squirt(n, squirt));
}

 /**
 * capture_squirt - int nature, int squirt
 * @n: or nature, as in, what we're trying to make happen
 * @squirt: what we must capture to make nature happen
 * description: this is actually a function to find a natural #'s square root
 * but disquised in a way that I can understand
 * Return: squirt if captured successfully. -1 if squirts don't make it happen
 */

int capture_squirt(int n, int squirt)
{

	if ((squirt * squirt) == n)
		return (squirt);
/* if squirt & squirt are too much for nature, it can't happen. return error*/
	if ((squirt * squirt) > n)
		return (-1);

	else
		return (capture_squirt(n, squirt + 1));
}

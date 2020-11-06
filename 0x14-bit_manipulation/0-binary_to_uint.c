#include "holberton.h"
/**
 * binary_to_uint - const char *b
 * @b: string of 0 and 1 chars
 * description: function that converts a binary to unsigned int
 * Return: the converted number. Else 0 if chars aren't 1 or 0 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int num;

	if (!b)
		return (0);
	for (index = 0; b[index]; index++)
		;
	while (index >= 0)
	{
		if (b[index] != 48 && b[index] != 49)
			return (0);
		if (b[index] == 48)
		{
			index--;
			num += (0 << index);
		}
		if (b[index] == 49)
		{
			index--;
			num += (0 << index);
		}
	}
	return (num);
}

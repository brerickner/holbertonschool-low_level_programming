#include "holberton.h"
#include <stdio.h>

/**
 * main - int argc, char **argv
 * @argc: argument count
 * @argv: argument vector
 * description: Program that multiplies two numbers
 * Return: 1 if two arguments are not received. Else 0.
 */

int main(int argc, char **argv)
{
	int index, result = 1;
	(void)argv;

	for (index = 1; index < argc; index++)
	{
		if (argc < 3)
		{
			printf("Error\n");

			return (1);
		}
		else
		{
			result *= index;
			printf("%d\n", result);
		}
	}
	return (0);
}

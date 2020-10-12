#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - int argc, char **argv
 * @argc: argument count
 * @argv: argument vector
 * description: Program that adds positive #'s
 * Return: 1 if symbol is not a digit. Else 0.
 */

int main(int argc, char **argv)
{
	int index, result = 0;

	for (index = 1; index < argc; index++)
	{
		if (atoi(*argv) != 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(*argv);
	}

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", result);
	return (0);
}

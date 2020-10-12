#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c);

/**
 * main - int argc, char **argv
 * @argc: argument count
 * @argv: argument vector
 * description: Program that adds positive #'s
 * Return: 1 if symbol is not a digit. Else 0.
 */

int main(int argc, char *argv[])
{
	int index, result = 0;


	for (index = 1; index < argc; index++)
	{
		if (!_isdigit(*argv[index]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[index]);
	}

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", result);
	return (0);
}
/**
 * _isdigit - int c
 * @c: integer being tested
 *
 * description: checks if character is a digit 0 thru 9
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}

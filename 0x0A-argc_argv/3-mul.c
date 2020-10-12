#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - int argc, char **argv
 * @argc: argument count
 * @argv: argument vector
 * description: Program that multiplies two numbers
 * Return: 1 if two arguments are not received. Else 0.
 */

int main(int argc, char **argv)
{
	int result;
	int index = 1;

	if (argc == 3)
	{
		result = atoi(argv[index + 1]) * atoi(argv[index]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

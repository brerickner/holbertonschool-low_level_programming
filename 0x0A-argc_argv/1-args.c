#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - int argc, char *argv[]
 * @argc: argument count
 * @argv: argument vector
 * description: program that prints its name
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int index, sum = 0;

	if (argc >= 0)
	{

		for (index = 0; index < argc; index++)
		{
			sum += atoi(argv[index]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

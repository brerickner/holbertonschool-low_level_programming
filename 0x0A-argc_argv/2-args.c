#include <stdio.h>
#include "holberton.h"

/**
 * main - int argc, char **argv
 * @argc: argument count
 * @argv: argument vector
 * description: program that prints all arguments it sees
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count;

	(void)argv;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}

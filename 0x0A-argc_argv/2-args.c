#include <stdio.h>
#include <stdlib.h>
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
	(void)argv;
	int index;

	if (argc >= 0)
	{
		for (index = 0; index < argc; index++)
			printf("%s\n", atoi(argv[index]));
	}
	return(0);
}

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
	(void)argv;

	if (argc >= 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}

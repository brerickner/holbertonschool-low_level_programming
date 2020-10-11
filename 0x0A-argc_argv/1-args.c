#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - int argc, char **argv
 * @argc: argument count
 * @argv: argument vector
 * description: program that prints argument count
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	(void)argv;

	if (argc >= 0)

		printf("%d\n", argc - 1);

	return (0);
}

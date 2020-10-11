#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - int argc, char *argv[]
 * @argc: argument count
 * @argv: argument vector
 * description: program that prints number of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int index = 0;
	(void)argv;

	for (index = 0; index < argc; index++)
	{}
	printf("%d\n", index);

	return (0);
}

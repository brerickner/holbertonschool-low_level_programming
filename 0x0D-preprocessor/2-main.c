#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - int argc, char *argv[]
 * @argc: argument count
 * @argv: argument vector
 * description: program that prints the name of the file it was compiled from
 * followed by a newline
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index = 0;

	if (argc > index)
	{
		printf("%s\n", argv[5]);
		index++;
	}
	return (0);
}

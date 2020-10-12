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
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int error_func(int error, int fileD, char *theArgV);
/**
 * main - int argc, char argv**
 * @argc: argument count
 * @argv: argument vector
 * description: program that copies contents from one file to another
 * Return: 1 on success. Else -1 upon failure.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int theFile, theLastFile, readFile, writeFile, closingTime;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	theFile = open(argv[1], O_RDWR);
	if (theFile == -1)
		error_func(98, theFile, argv[1]);
	readFile = read(theFile, buffer, 1024);
	if (readFile == -1)
		error_func(99, readFile, argv[1]);
	theLastFile = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (theLastFile == -1)
		error_func(99, theLastFile, argv[2]);
	while (readFile == 1024)
	{
		writeFile = write(theLastFile, buffer, readFile);
		if (writeFile == -1)
			error_func(99, writeFile, argv[2]);
		readFile = read(theFile, buffer, 1024);
		if (readFile == -1)
			error_func(98, readFile, argv[2]);
	}
	closingTime = close(theFile);
	if (closingTime == -1)
		return (error_func(100, theFile, argv[1]));
	closingTime = close(theLastFile);
	if (closingTime == -1)
		return (error_func(101,theLastFile, argv[2]));
	return (0);
}
/**
 * error_func - int error
 * @error: error to print
 * description: function with error messages
 * Return: the error number
 */
int error_func(int error, int fileD, char *theArgV)
{
	if (error == 98)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", theArgV);
		return (98);
	}
	if (error == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", theArgV);
		return (99);
	}
	if (error == 100)
	{
		dprintf(STDERR_FILENO, "Can't close %i\n", fileD);
		return (100);
	}
	if (error == 101)
	{
		dprintf(STDERR_FILENO, "Can't close %i\n", fileD);
		return (100);
	}
	return (0);
}

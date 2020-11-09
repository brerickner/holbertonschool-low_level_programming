#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <fonts1.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *  read_textfile - const char *filename, size_t letters
 * @filename: text file to be read
 * @letters: # of letters to read/print
 * description: function that read a txt file and prints it to STDOUT
 * Return: # of letters read/written. Else 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t theFile, readFile, writeFile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * (char)sizeof);
	if (buffer == NULL)
		return (0);

	theFile = open(filename, 0_RDONLY);
	if (theFile == -1)
		return (0);

	readFile = read(theFile, buffer, letters);
	if (readFile == -1)
		return (0);

	writeFile = write(STDOUT_FILENO, readFile, letters);
	if (writeFile == -1)
		return (0);

	free(buffer);
	close(theFile);
	return (writeFile);

}

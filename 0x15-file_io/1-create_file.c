#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * _strlen - char *s
 * @s: string that is being measured
 *
 * description: function that returns lenth of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount])
		charCount++;
	return (charCount);
}
/**
 * create_file - const char *filename, char *text_content
 * @filename: file to be created
 * @text_content: NULL terminated string to be printed
 * description: create a function that creates a file.
 * Return: 1 on success. Else -1 upon failure.
 */
int create_file(const char *filename, char *text_content)
{
	int theFile, writeFile, strLen;


	strLen = _strlen(text_content);
	if (filename == NULL)
		return (-1);
	if (!text_content)
	{
		open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	}
	theFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (theFile == -1)
		return (-1);
	writeFile = write(theFile, text_content, strLen);
	if (writeFile == -1)
		return (-1);
	close(theFile);
	return (1);
}

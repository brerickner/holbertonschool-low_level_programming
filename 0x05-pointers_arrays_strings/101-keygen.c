#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/**
* main - void
*
* description: generates random password for 101-crackme
* Return: randomNumber
*/

int main(void)
{
	srand(time(NULL));
	int randomNumber = rand();

	printf("%d\n", randomNumber);
	return (randomNumber);
}

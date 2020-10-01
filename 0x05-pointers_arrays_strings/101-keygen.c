#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/**
* main - void
*
* description: generates random valid password for 101-crackme
* Return: randomNumber
*/

int main(void)
{

	/* things to try: array to dictate how long the valid password array is */

	srand(time(NULL));
	int randomNumber = rand();

	printf("%d\n", randomNumber);
	return (randomNumber);
}

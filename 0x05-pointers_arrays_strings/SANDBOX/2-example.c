#include <stdio.h>

/**
* main - printing size, in bytes, of pointer
*
* Return: 0.
*/

int main (void)
{
	int *p;

	printf("Size of pointer: %lu\n", sizeof(p));
	return (0);
}

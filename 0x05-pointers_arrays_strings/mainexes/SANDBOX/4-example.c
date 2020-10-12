#include <stdio.h>

/*
 * main - storing address of variable into a pointer
 *
 * Return: Always 0.
 */

int main(void)
{
	int ninja;
	int *pointer;

	ninja = 007;
	pointer = &ninja;
	printf("Address of 'ninja': %p\n", &ninja);
	printf("Value of 'pointer': %p\n", pointer);

	return (0);
}

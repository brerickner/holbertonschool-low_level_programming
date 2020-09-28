#include <stdio.h>

/**
 * main - dereferencing pointers, ex with int and char types
 *
 * Return: Always 0.
 */

int main(void)
{
	int ninja;
	int *pointer;
	char captain;
	char *crunch;

	captain = 'H';
	crunch = &captain;
	ninja = 007;
	pointer = &ninja;
	printf("Value of captain: %d ('%c')\n", captain, captain);
	printf("Address of captain: %p\n", &captain);
	printf("Value of crunch: %p\n", crunch);
	printf("Value of ninja: %d\n", ninja);
	printf("Value of pointer: %p \n", pointer);

	*pointer = 402;
	*crunch = 'o';

	printf("Value of ninja: %d\n", ninja);
        printf("Value of *crunch: %d\n", *crunch);
	printf("Value of captain: %d ('%c')\n", captain, captain);
	printf("Value of *crunch: %d ('%c')\n", *crunch, *crunch);
	return (0);
}

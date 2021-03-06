#include <stdio.h>


int main (void)
{
	int slices = 20;  /* create int variable */
	int *p = &slices; /* create pointer to this variable and assign value using address of &*/

	printf("Slices: %d\n", slices);
	printf("Slices (through pointer): %d\n", *p);

	/* change value of slices*/
	slices = 21;

	printf("Slices: %d\n", slices);
        printf("Slices (through pointer): %d\n", *p);

	/*  when you pass value to function, change value through pointer be dereferencing it */
	*p = 25;
	slices++;
	(*p)++;

	printf("Slices: %d\n", slices);
        printf("Slices (through pointer): %d\n", *p);

	return (0);
}

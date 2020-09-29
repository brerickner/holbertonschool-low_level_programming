#include <stdio.h>

int main ()
{
	printf("What is your favorite food? \n");

	char favFood[50];

	scanf("%49s", favFood);
	printf("%s\n", favFood);

	/* create code to see how long string is */
	int charCount = 0;

	while(favFood[charCount] != '\0')
	{
		charCount++;

	}

	printf("The character count is: %d\n", charCount);

	return (0);

}

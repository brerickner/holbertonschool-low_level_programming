/*The user has to guess a number 0-5.*/
/*output whether or not the person is correct */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main()
{
		
	int maxValue = 5;
	srand (time(NULL));
	int randomNumber = rand() % maxValue + 1;

	printf("%d\n", randomNumber);

}

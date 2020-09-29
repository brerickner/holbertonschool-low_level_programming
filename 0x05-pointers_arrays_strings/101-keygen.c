#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand (time(NULL));
	int randomNumber = rand();

	printf("%d\n", randomNumber);

}

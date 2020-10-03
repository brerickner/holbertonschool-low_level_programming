#include "stdio.h"

/**
* add- int a, int b
* @a: first integer
* @b: second integer
* description: adds two operands together returns result
* Return: the result
*/

int add(int a, int b)
{
	int y;
	y=a+b;
	
}
int main()
{
	int a, b;
	printf("Please enter the value of first number \n");
	scanf("%d", &a);
	printf("Please enter the value of second number \n");
	scanf("%d", &b);
	printf("The sum of the first and second number are %d \n", add(a,b));
	return 0;
}	

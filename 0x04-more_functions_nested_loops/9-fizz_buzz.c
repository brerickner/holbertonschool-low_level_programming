#include <stdio.h>

/**
* main- void
* description: Print fizz every 3rd multiple and Buzz for every 5th, 
* else, FizzBuzz
* Return: 0 if successful
*/
 
int main(void)
{
int i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if ((i % 3 && i % 5) == 0)
{
printf("FizzBuzz");
}	
else 
{
printf("%d", i);
}
if (i < 100)
{
putchar(' ');
}
else 
{
putchar(i);
}  
return 0;
}
}

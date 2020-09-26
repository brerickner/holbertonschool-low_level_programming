#include <stdio.h>

/**
* main- void
* description: Print fizz every 3rd multiple and Buzz for every 5th,
* else FizzBuzz
* Return: 0 if successful
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
if (i % 3 != 0 && i % 5 != 0)
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
putchar('\n');
return (0);
}

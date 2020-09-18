/**
* main- void
* description: output lowercase alphabet
* Return: 0
*/
#include <stdio.h>

int main(void)
{
char a;

for (a = 'a'; a <= 'z'; ++a)
{
putchar(a);
putchar('\n');
}
return (0);
}

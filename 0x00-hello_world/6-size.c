/**
* main- void
* description: prints sizes of various variables on system
* Return: 0
*/
#include <stdio.h>
int main(void)
{
char a;
int x;
long int y:
long long int z;
float f;

a = 1;
x = 4;
y = 4;
z = 8;
f = 4;

printf("Size of a char: %c\n", a);
printf("Size of and int: %d\n", x);
printf("Size of a long int: %ld\n", y);
printf("Size of a long long int: %llu\n", z);
printf("Size of a float: %f\n", f);
return (0);
}

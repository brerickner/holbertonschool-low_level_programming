/**
* main- void
* description: output lowercase alphabet
* Return: 0
*/

#include <stdio.h>
int main(void)
{
char a = 'a';
char b = 'A';

for (; a <= 'z'; a++)

putchar(a);

for (; b <= 'Z'; b++)

putchar(b);
putchar('\n');

return (0);
}

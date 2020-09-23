#include "holberton.h"

/**
* int _islower - inc c
* @c: char variable
* description: checks for lowercase characer
* Return: 1 if c is lowercase, otherwise 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}

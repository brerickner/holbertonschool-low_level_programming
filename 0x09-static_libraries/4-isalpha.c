#include "holberton.h"

/**
* _isalpha - int c
* @c: character
*
* description: look for upper and lowercase letter
* Return: 1 if c is a L/letter, otherwise 0
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

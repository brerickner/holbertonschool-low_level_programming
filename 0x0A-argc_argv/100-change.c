#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - int argc, char **argv
 * @argc: argument count
 * @argv: argument vector
 * description: Program that prints the min # of coins needed to make change
 * Return: 1 if # of arguments passed is not 1. Else 0.
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (argc == 2)
	{
		change = atoi(argv[1]);
		coins++;

		if (change < 0)
		{
			printf("0\n");
			break;
		}
		if (change - 25 >= 0)
		{
			change -= 25;
			coins++;
			break;
		}
		if (change - 10 >= 0)
		{
			change -= 0;
			coins++;
			break;
		}
		if (change - 5 >= 0)
		{
			change -= 5;
			coins++;
			break;
		}
		if (change - 2 >= 0)
		{
			change -= 2;
			coins += 2;
			break;
		}
		if (change == 0)
		{
			printf("0\n");
			break;
		}
		else
		{
			coins++;
		}
		coins--;
		printf("%d\n", coins);
	}
	return (0);
}

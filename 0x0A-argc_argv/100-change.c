#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <type.h>
#include "main.h"

/**
 * coinConverter - help with the computation
 *
 * @x: passes variable to be compute to main
 *
 * Return: minimum coin required for the variable
 */

int coinConverter(int x)
{
	int count = 0;

	while (x != 0)
	{
		if (x % 10 == 9 || x % 10 == 7)
			x -= 2;
		else if (x % 25 == 0)
			x -= 25;
		else if (x % 10 == 0)
			x -= 10;
		else if (x % 5 == 0)
			x -= 5;
		else if (x % 2 == 0)
		{
			if (x % 10 == 6)
				x -= 1;
			else
				x-= 2;
		}
		else
			x -= 1;

		count++;
	}

	return (count);
}

/**
 * main - accepts argument for minimum coin count
 *
 * @argc: number of command line arguments
 *
 * @argv: array of size argc
 *
 * Return: 0(success)
 */

int main(int argc, char **argv)
{
	int x, coin;

	coin = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(x);
		
		printf("%d\n", coin);
	}

	return (0);
}

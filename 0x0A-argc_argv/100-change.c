#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - minimum number of coin to make change
 *
 * @argc: number of command line argument
 *
 * @argv: array of size argc
 *
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	int coins = 0, sum = 0;

	x
		if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);

	if (sum < 0)
	{
		printf("0\n");

		return (0);
	}
	while (sum / 25)
	{
		sum = sum - 25;
		coins++;
	}
	while (sum / 10)
	{
		sum = sum - 10;
		coins++;
	}
	while (sum / 5)
	{
		sum = sum - 5;
		coins++;
	}
	while (sum / 2)
	{
		sum = sum - 2;
		coins++;
	}
	coins = coins + sum
		printf("%d\n", coins);
		return (0);
}

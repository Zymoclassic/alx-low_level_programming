#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program for adding positive number
 *
 * @argc: number of command line
 *
 * @argv: array containing the arguments
 *
 * Return: always 0(success)
 */

int main(int argc, char **argv)
{
	int h, x;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (h = 1; h < argc; h++)
	{
		sum = sum + atoi(argv[h]);
		for (x = 0; argv[h][x] != '\0'; x++)
		{
			if (!(isdigit(argv[h][x])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}
		printf("%d\n", sum);

		return (0);
}

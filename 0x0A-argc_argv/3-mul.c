#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that multiply digits
 *
 * @argc: number of command line arguments
 *
 * @argv: an array of size argc
 *
 * Return: always 0(success)
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);

	return (0);
}

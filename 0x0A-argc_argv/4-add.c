#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
	int h, x, length, sum;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (h = 1; h < argc; h++)
		{
			ptr = argv[h];
			length = strlen(ptr);

			for (x = 0; x < length; x++)
			{
				if (isdigit(*(ptr + x)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[h]);
		}

		printf("%d\n", sum);
	}
		return (0);
}

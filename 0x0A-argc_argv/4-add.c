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
	int d, add = 0, r = 0;
	char y[] = "Error", *letter_detected;

	if (argc > 1)
	{
		for (d = 1; d < argc; d++)
		{
			letter_detected = argv[d];
			while (*letter_detected != 0)
			{
				if (*letter_detected < 47 || *letter_detected > 57)
				{
					printf("%s\n", y);
					return (1);
				}
				letter_detected++;
			}
			r = atoi(argv[d]);
			add = add + r;
		}
		printf("%d\n", add);
	}
	else
		printf("%d\n", 0);
		return (0);
}
